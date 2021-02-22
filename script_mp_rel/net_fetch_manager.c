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
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
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
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

bool func_2()
{
	if (func_11(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	bool bVar0;

	bVar0 = func_12();
	if (!bVar0)
	{
	}
	if (func_13())
	{
		func_14(bVar0);
	}
	func_15(bVar0);
}

void func_4()
{
	func_16();
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

bool func_8()
{
	if (Global_1572887.f_9)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	return false;
}

void func_9()
{
	func_19(&Global_1237665);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1237665, 575, 47);
	func_20(NETWORK::_0xBA24095EA96DFE17(&Global_1237665), 575, "g_mpFetchManagerHostData");
	if (func_21())
	{
		Global_1247937 = { Global_1238240[func_22() /*303*/] };
	}
	func_23(&Global_1238240);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1238240, 9697, 48);
	func_24(NETWORK::_0x690806BC83BC8CA2(&(Global_1238240[0 /*303*/])), 9697, "g_mpFetchManagerPlayerData");
	if (!func_21())
	{
		func_25(&Global_1248240);
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

bool func_12()
{
	if (func_26())
	{
		return false;
	}
	return true;
}

bool func_13()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051252.f_16[13], false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_fetch_manager", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(Global_1051252.f_16[13]);
}

void func_14(bool bParam0)
{
	switch (Global_1237665.f_571)
	{
		case 0:
			func_27();
			break;
		case 1:
			func_28();
			break;
		case 2:
			func_29(bParam0);
			break;
	}
}

void func_15(bool bParam0)
{
	switch (Global_1248240.f_8898)
	{
		case 0:
			func_30();
			break;
		case 1:
			func_31();
			break;
		case 2:
			func_32(bParam0);
			break;
	}
}

void func_16()
{
	int iVar0;

	Global_1248240.f_8898 = 0;
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1248240[iVar0 /*683*/].f_555 != -1)
		{
			func_33(iVar0, 1);
			func_34(iVar0);
		}
		iVar0++;
	}
}

int func_17()
{
	return Global_1572887.f_13;
}

bool func_18()
{
	return Global_1051252.f_8;
}

void func_19(var uParam0)
{
	struct<22> Var0;
	int iVar27;
	var uVar28;
	int iVar29;
	var uVar30;
	int iVar32;
	struct<4> Var33;
	var uVar237;
	var uVar238;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_15 = 255;
	Var0.f_16 = 255;
	Var0.f_17 = 255;
	Var0.f_21.f_1 = -1;
	iVar27 = 0;
	while (iVar27 <= 12)
	{
		MISC::_COPY_MEMORY(uParam0[iVar27 /*27*/], &Var0, 27);
		iVar27++;
	}
	iVar29 = 0;
	while (iVar29 <= (3 - 1))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_352[iVar29]), &uVar28, 1);
		iVar29++;
	}
	uVar30 = -1;
	iVar32 = 0;
	while (iVar32 <= 4)
	{
		MISC::_COPY_MEMORY(&(uParam0->f_356[iVar32 /*2*/]), &uVar30, 2);
		iVar32++;
	}
	Var33.f_2 = 5;
	Var33.f_3 = 5;
	Var33.f_3.f_1 = -1;
	Var33.f_3.f_1.f_1 = -1;
	Var33.f_3.f_1.f_2 = -1;
	Var33.f_3.f_1.f_3 = 255;
	Var33.f_3.f_1.f_4 = -1;
	Var33.f_3.f_1.f_5 = -1;
	Var33.f_3.f_1.f_6 = -1;
	Var33.f_3.f_1.f_8 = 2;
	Var33.f_3.f_1.f_8.f_1 = -1;
	Var33.f_3.f_1.f_8.f_5 = -1;
	Var33.f_3.f_1.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_23.f_4 = -15;
	Var33.f_3.f_1.f_23.f_5 = 255;
	Var33.f_3.f_1.f_23.f_8 = 1;
	Var33.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40 = -1;
	Var33.f_3.f_1.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40.f_40 = -1;
	Var33.f_3.f_1.f_40.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	MISC::_COPY_MEMORY(&(uParam0->f_367), &Var33, 204);
	uParam0->f_571 = uVar237;
	uParam0->f_572 = uVar238;
	uParam0->f_574 = 0;
}

int func_20(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_21()
{
	return !Global_1572887.f_9;
}

int func_22()
{
	return Global_1102219.f_3672;
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_35(uParam0[iVar0 /*303*/]);
		iVar0++;
	}
}

int func_24(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_25(var uParam0)
{
	struct<683> Var0;
	struct<4> Var683;
	var uVar687;
	struct<123> Var688;
	struct<8> Var811;
	int iVar819;
	int iVar820;

	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_5 = 16;
	Var0.f_19.f_1.f_77 = -1;
	Var0.f_19.f_1.f_82 = -1;
	Var0.f_19.f_1.f_87 = -1;
	Var0.f_19.f_1.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_82 = -1;
	Var0.f_542 = 4;
	Var0.f_555 = -1;
	Var0.f_560 = 23;
	Var0.f_584 = -1;
	Var0.f_584.f_1 = -1;
	Var0.f_587 = -1082130432;
	Var0.f_590 = -1;
	Var0.f_596 = 255;
	Var0.f_603 = 9;
	Var0.f_634 = 6;
	Var0.f_643 = 6;
	Var0.f_643.f_1.f_1 = -1;
	Var0.f_643.f_1.f_2 = -1;
	Var0.f_643.f_1.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_38 = -1;
	Var683 = -1;
	Var683.f_1 = -1;
	Var688.f_2 = -1;
	Var688.f_9 = 1;
	Var688.f_16 = 10;
	Var688.f_104 = 11;
	Var688.f_116 = 255;
	Var811.f_3 = 2;
	uParam0->f_9026 = { Var811 };
	iVar819 = 0;
	while (iVar819 <= (3 - 1))
	{
		uParam0->f_8899[iVar819] = 0;
		iVar819++;
	}
	uParam0->f_8903 = { Var688 };
	iVar820 = 0;
	while (iVar820 <= 12)
	{
		*(uParam0[iVar820 /*683*/]) = { Var0 };
		iVar820++;
	}
	iVar819 = 0;
	while (iVar819 <= 3)
	{
		uParam0->f_8880[iVar819 /*4*/] = { Var683 };
		iVar819++;
	}
	uParam0->f_8897 = uVar687;
	uParam0->f_8898 = 0;
	uParam0->f_9294 = -1;
}

bool func_26()
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
	if (!func_36(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_27()
{
	func_37(1);
}

void func_28()
{
	if (DATAFILE::_0x603AC35FD4602C76(Global_1257541.f_8863))
	{
		func_37(2);
	}
}

void func_29(bool bParam0)
{
	func_38(bParam0);
	func_39(&(Global_1237665.f_367), &(Global_1248240.f_8897));
}

void func_30()
{
	int iVar0;

	if (Global_1237665.f_571 > 0)
	{
		if (func_21())
		{
			iVar0 = 0;
			while (iVar0 <= 12)
			{
				if (func_40(iVar0, 4))
				{
					Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iVar0 /*23*/] = { Global_1247937[iVar0 /*23*/] };
				}
				iVar0++;
			}
		}
		func_41(1);
	}
}

void func_31()
{
	if ((DATAFILE::_0x603AC35FD4602C76(Global_1257541.f_8863) && Global_1237665.f_571 > 1) && Global_1257541.f_8861 > 1)
	{
		func_42("FETCH", 30, -1, 0, 0);
		func_41(2);
	}
}

void func_32(bool bParam0)
{
	func_43(bParam0);
	func_44(bParam0);
	func_45();
	if (bParam0)
	{
		func_46();
		func_47();
		func_48();
	}
}

bool func_33(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = Global_1248240[iParam0 /*683*/].f_590;
	if (func_49(iVar0))
	{
		if (bParam1)
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1248240.f_8880[iVar0 /*4*/].f_3);
		}
		return false;
	}
	return true;
}

void func_34(int iParam0)
{
	struct<683> Var0;
	int iVar683;
	int iVar684;
	struct<23> Var685;

	func_50(iParam0);
	func_51(iParam0);
	if (Global_1248240[iParam0 /*683*/].f_590 != -1)
	{
		func_52(Global_1248240[iParam0 /*683*/].f_590, iParam0, 0, 0);
	}
	func_53(iParam0);
	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_5 = 16;
	Var0.f_19.f_1.f_77 = -1;
	Var0.f_19.f_1.f_82 = -1;
	Var0.f_19.f_1.f_87 = -1;
	Var0.f_19.f_1.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_82 = -1;
	Var0.f_542 = 4;
	Var0.f_555 = -1;
	Var0.f_560 = 23;
	Var0.f_584 = -1;
	Var0.f_584.f_1 = -1;
	Var0.f_587 = -1082130432;
	Var0.f_590 = -1;
	Var0.f_596 = 255;
	Var0.f_603 = 9;
	Var0.f_634 = 6;
	Var0.f_643 = 6;
	Var0.f_643.f_1.f_1 = -1;
	Var0.f_643.f_1.f_2 = -1;
	Var0.f_643.f_1.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_38 = -1;
	Global_1248240[iParam0 /*683*/] = { Var0 };
	func_54(iParam0);
	iVar683 = PLAYER::PLAYER_ID();
	if (((iVar683 >= 0 && iVar683 < 32) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar684 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar684 >= 0 && iVar684 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			Var685 = 6;
			Var685.f_21 = -1;
			Var685.f_22 = -1;
			Global_1238240[iVar684 /*303*/][iParam0 /*23*/] = { Var685 };
		}
	}
}

void func_35(var uParam0)
{
	struct<303> Var0;

	Var0 = 13;
	Var0.f_1 = 6;
	Var0.f_1.f_21 = -1;
	Var0.f_1.f_22 = -1;
	Var0.f_1.f_23 = 6;
	Var0.f_1.f_23.f_21 = -1;
	Var0.f_1.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_300.f_1 = 255;
	*uParam0 = { Var0 };
}

bool func_36(struct<2> Param0)
{
	if (!func_55(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_56(Param0))
	{
		return false;
	}
	return true;
}

void func_37(int iParam0)
{
	if (Global_1237665.f_571 != iParam0)
	{
		Global_1237665.f_571 = iParam0;
	}
}

void func_38(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1237665.f_574 <= 0)
	{
		return;
	}
	iVar1 = Global_1248240.f_8899[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar1 || (Global_1237665[iVar0 /*27*/].f_2 > -1 && Global_1237665[iVar0 /*27*/].f_2 < 2))
		{
			func_57(Global_1248240.f_8899[0], bParam0);
		}
		iVar0++;
	}
	func_58(Global_1248240.f_8899[1]);
}

void func_39(var uParam0, var uParam1)
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
	if (uParam0->f_3[iVar0 /*40*/].f_2 != -1)
	{
		Var1 = { func_59(&(Global_1198046.f_28), uParam0->f_3[iVar0 /*40*/]) };
		func_60(Var1, uParam0, &(uParam0->f_3[iVar0 /*40*/]));
	}
}

bool func_40(int iParam0, int iParam1)
{
	return (func_61(iParam0) && func_62(Global_1248240[iParam0 /*683*/].f_556, iParam1));
}

void func_41(int iParam0)
{
	if (Global_1248240.f_8898 != iParam0)
	{
		Global_1248240.f_8898 = iParam0;
	}
}

int func_42(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam1 < 1)
	{
		iParam1 = 10;
	}
	if (!HUD::_DOES_TEXT_DATABASE_EXIST(sParam0))
	{
		iVar0 = 0;
		return 0;
	}
	bVar1 = false;
	while ((HUD::_TEXT_DATABASE_REQUEST(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_11(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_11(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	while ((!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_11(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_11(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_43(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_63(2))
	{
		return;
	}
	if (bParam0 && Global_1237665.f_574 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			if (func_64(iVar1, 8192, 255))
			{
				bVar0 = true;
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (bVar0)
	{
		if (!func_65(1, 255))
		{
			LAW::_0x4B52BF96E225D230(1);
			func_66(1, 1);
		}
	}
	else if (func_65(1, 255))
	{
		LAW::_0x4B52BF96E225D230(0);
		func_67(1, 1);
	}
}

void func_44(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1237665.f_574 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = Global_1248240.f_8899[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar2 || (Global_1237665[iVar0 /*27*/].f_2 > -1 && !func_64(iVar0, 1048576, 255)))
		{
			func_68(iVar0, bParam0);
		}
		func_69(iVar0);
		func_70(iVar0);
		func_71(iVar0);
		func_72(iVar0, Global_1248240[iVar0 /*683*/].f_559);
		if (Global_1237665[iVar0 /*27*/].f_2 < 3)
		{
			func_73(iVar0);
		}
		if ((Global_1237665[iVar0 /*27*/].f_2 > 0 && func_74(Global_1248240[iVar0 /*683*/].f_559)) && func_75(iVar0))
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_1248240.f_8899[0]++;
	Global_1248240.f_8899[1]++;
	if (Global_1248240.f_8899[0] >= 13)
	{
		Global_1248240.f_8899[0] = 0;
	}
	if (Global_1248240.f_8899[1] >= 5)
	{
		Global_1248240.f_8899[1] = 0;
	}
	if (iVar1 != -1)
	{
		func_76(iVar1);
	}
	else
	{
		func_77();
	}
}

void func_45()
{
	int iVar0;

	if (!func_78(1))
	{
		func_79();
	}
	if (Global_1248240.f_8903.f_97 <= 0)
	{
		return;
	}
	iVar0 = Global_1248240.f_8903.f_98;
	if (func_80(iVar0))
	{
		func_81(iVar0);
		iVar0 = (iVar0 + 1 % 10);
		Global_1248240.f_8903.f_98 = iVar0;
		Global_1248240.f_8903.f_97 = (Global_1248240.f_8903.f_97 - 1);
	}
}

void func_46()
{
	int iVar0;

	if (func_13())
	{
		func_82(Global_1248240.f_8903.f_122);
		Global_1248240.f_8903.f_122 = (Global_1248240.f_8903.f_122 + 1 % 32);
	}
	iVar0 = PLAYER::PLAYER_ID();
	func_83();
	Global_1248240.f_8903.f_6 = func_84(iVar0);
	if (Global_1248240.f_8903.f_6 == -1154721830)
	{
		Global_1248240.f_8903.f_6 = func_85();
		if (!func_86(2, 255) && Global_1248240.f_8903.f_6 == -1154721830)
		{
			func_87(2);
		}
		else if (func_86(2, 255) && Global_1248240.f_8903.f_6 != -1154721830)
		{
			func_88(2);
		}
		func_89(Global_1248240.f_8903.f_121, iVar0);
	}
	else if (func_86(2, 255))
	{
		func_88(2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_90(Global_1248240.f_8903.f_121, iVar0);
		func_91(Global_1248240.f_8903.f_121, iVar0);
	}
	if (func_92() && (!func_86(5, Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1)))
	{
		func_93();
	}
	Global_1248240.f_8903.f_121 = (Global_1248240.f_8903.f_121 + 1 % 32);
}

void func_47()
{
	func_94();
	func_95();
}

void func_48()
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;

	Var0 = { func_96(joaat("MP_FETCH_LAST_STARTED_BUSINESS_RAID_GLOBAL_COOLDOWN")) };
	bVar2 = func_97(Var0);
	if (!bVar2)
	{
		return;
	}
	if (!func_98(Var0))
	{
		return;
	}
	func_99(Var0);
	func_100();
	if (Global_1248240.f_9026.f_6 == 0)
	{
		return;
	}
	iVar3 = func_101();
	if (!func_102(iVar3))
	{
		return;
	}
	func_103(iVar3);
}

bool func_49(int iParam0)
{
	return ((func_104(iParam0) && SCRIPTS::_DOES_THREAD_EXIST(Global_1248240.f_8880[iParam0 /*4*/].f_3)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1248240.f_8880[iParam0 /*4*/].f_3, false));
}

void func_50(int iParam0)
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_61(iParam0))
	{
		return;
	}
	if (Global_1248240[iParam0 /*683*/].f_559 == joaat("INTRO_MISSION"))
	{
		return;
	}
	if (func_40(iParam0, 128))
	{
		func_105(0);
		func_106(iParam0, 128);
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { Global_1248240[iParam0 /*683*/].f_584 };
	bVar2 = func_40(iParam0, 33554432);
	func_106(iParam0, 33554432);
	func_51(iParam0);
	func_107(iParam0);
	if (!func_108(Var0) && !func_109(Var0))
	{
		return;
	}
	iVar3 = func_110(Global_1248240[iParam0 /*683*/].f_559);
	if (iVar3 != 0 && iVar3 != 6)
	{
		func_111(0);
	}
	func_106(iParam0, 16);
	func_112(iParam0, 32);
	func_112(iParam0, 16);
	if ((!bVar2 && !SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), Global_1296859)) && !func_40(iParam0, 65536))
	{
		iVar4 = 1;
	}
	func_113(Var0, 0, 2, iVar4, 0);
	Var5.f_1 = -1;
	Var5.f_1.f_1 = -1;
	func_114(Global_1248240[iParam0 /*683*/].f_584, &Var5);
	if (Global_1248240[iParam0 /*683*/].f_559 == joaat("HIDEOUT"))
	{
		func_115(0);
	}
	if (Global_1248240[iParam0 /*683*/].f_559 == joaat("BOUNTY_PLAYER"))
	{
		if (Global_1237665[iParam0 /*27*/].f_16 == PLAYER::PLAYER_ID())
		{
			func_88(4);
		}
		func_116(1, 0, 0);
	}
	if (func_117(Global_1248240[iParam0 /*683*/].f_559))
	{
		func_118(1, 0, 0);
	}
	func_119(Global_1248240[iParam0 /*683*/].f_559);
}

void func_51(int iParam0)
{
	int iVar0;

	if (!func_40(iParam0, 134217728))
	{
		return;
	}
	iVar0 = Global_1237665[iParam0 /*27*/].f_5;
	if (!func_120(iVar0))
	{
		return;
	}
	func_121(iVar0);
	func_106(iParam0, 134217728);
}

void func_52(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (!func_122(iParam0, iParam1))
	{
		Global_1248240[iParam1 /*683*/].f_590 = -1;
		return;
	}
	if (Global_1248240.f_8880[iParam0 /*4*/] != -1)
	{
		Global_1248240[Global_1248240.f_8880[iParam0 /*4*/] /*683*/].f_590 = -1;
		if (bParam3 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
			func_112(Global_1248240.f_8880[iParam0 /*4*/], 2);
		}
	}
	if (bParam2)
	{
		Global_1248240.f_8880[iParam0 /*4*/].f_1 = -1;
	}
	Global_1248240.f_8880[iParam0 /*4*/] = -1;
	Global_1248240.f_8880[iParam0 /*4*/].f_2 = 0;
}

void func_53(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (Global_1248240[iParam0 /*683*/].f_560[iVar0] == 0)
		{
		}
		else
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_1248240[iParam0 /*683*/].f_560[iVar0]);
		}
		iVar0++;
	}
}

void func_54(int iParam0)
{
	if (iParam0 != -1 && iParam0 == Global_1248240.f_9297)
	{
		Global_1248240.f_9297 = -1;
		Global_1248240.f_9298 = -1;
	}
}

bool func_55(int iParam0)
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

int func_56(int iParam0)
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

void func_57(int iParam0, bool bParam1)
{
	if (Global_1237665[iParam0 /*27*/].f_2 == -1)
	{
		return;
	}
	if (Global_1237665[iParam0 /*27*/].f_2 != 3)
	{
		if (!bParam1)
		{
			func_123(iParam0, 3);
		}
		else if (Global_1248240[iParam0 /*683*/].f_559 != 0 && !func_124(Global_1248240[iParam0 /*683*/].f_559))
		{
			func_123(iParam0, 3);
		}
	}
	func_125(iParam0);
	func_126(iParam0);
	switch (Global_1237665[iParam0 /*27*/].f_2)
	{
		case 0:
			func_127(iParam0);
			break;
		case 1:
			func_128(iParam0);
			break;
		case 2:
			func_129(iParam0);
			break;
		case 3:
			func_130(iParam0);
			break;
	}
}

void func_58(int iParam0)
{
	if ((Global_1237665.f_356[iParam0 /*2*/].f_1 && Global_1237665.f_356[iParam0 /*2*/] != -1) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_131(), iParam0, false, 0))
	{
		func_132(iParam0);
	}
}

struct<40> func_59(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	struct<40> Var0;
	int iVar40;
	int iVar41;

	if (Param1.f_1 != -1)
	{
		return uParam0->f_2[Param1.f_1 /*40*/];
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
		if (uParam0->f_2[iVar41 /*40*/].f_2 != Param1.f_2)
		{
		}
		else if (uParam0->f_2[iVar41 /*40*/].f_3 != Param1.f_3)
		{
		}
		else if (uParam0->f_2[iVar41 /*40*/].f_4 != Param1.f_4)
		{
		}
		else
		{
			return uParam0->f_2[iVar41 /*40*/];
		}
		iVar40++;
	}
	return Var0;
}

void func_60(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_133(uParam41))
	{
		case -1:
			func_134(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_135(&Param0, uParam41))
			{
				if ((NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_136(uParam41, 3);
				}
				return;
			}
			if (func_137(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_136(uParam41, 1);
			break;
		case 1:
			if (!func_135(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_136(uParam41, 3);
				return;
			}
			if (func_137(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_136(uParam41, 2);
			break;
		case 2:
			if (!func_135(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_136(uParam41, 3);
				return;
			}
			if (func_137(&Param0) < 3)
			{
				return;
			}
			func_136(uParam41, 3);
			break;
		case 3:
			func_136(uParam41, -1);
			break;
	}
}

bool func_61(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_62(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_63(int iParam0)
{
	if (Global_1248240.f_8899[iParam0] < func_138(iParam0))
	{
		Global_1248240.f_8899[iParam0]++;
		return false;
	}
	Global_1248240.f_8899[iParam0] = 0;
	return true;
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_61(iParam0) && func_62(Global_1238240[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return func_62(Global_1238240[iParam1 /*303*/].f_302, iParam0);
}

void func_66(int iParam0, bool bParam1)
{
	if (!func_65(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_139(&(Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_302), iParam0);
	}
}

void func_67(int iParam0, bool bParam1)
{
	if (func_65(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_140(&(Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_302), iParam0);
	}
}

void func_68(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = Global_1248240[iParam0 /*683*/].f_555 == -1;
	bVar1 = Global_1237665[iParam0 /*27*/].f_2 == -1;
	if (bVar0 && bVar1)
	{
		return;
	}
	if (!func_141(iParam0, -2147483648))
	{
		if (func_142())
		{
			if (func_64(iParam0, 32, 255))
			{
				if (!func_40(iParam0, 1073741824 /* Float: 2f */) && !func_143())
				{
					func_144(iParam0, 1073741824 /* Float: 2f */);
					func_145(2);
					return;
				}
			}
		}
	}
	if (Global_1237665[iParam0 /*27*/].f_4 != -1)
	{
		func_146(Global_1237665[iParam0 /*27*/].f_4, -1);
	}
	func_147(iParam0);
	func_148(iParam0);
	func_149(iParam0);
	func_150(iParam0);
	if (func_151(iParam0, bParam1))
	{
		if (Global_1248240[iParam0 /*683*/].f_555 != 3 && Global_1248240[iParam0 /*683*/].f_555 != -1)
		{
			func_152(iParam0, 3);
		}
	}
	else if (func_153(iParam0, bVar0, bVar1))
	{
		func_152(iParam0, 0);
	}
	switch (Global_1248240[iParam0 /*683*/].f_555)
	{
		case 0:
			func_154(iParam0);
			break;
		case 1:
			func_155(iParam0);
			break;
		case 2:
			func_156(iParam0);
			break;
		case 3:
			func_157(iParam0);
			break;
	}
}

void func_69(int iParam0)
{
	switch (Global_1248240[iParam0 /*683*/].f_559)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("BOUNTY_PLAYER"):
		case joaat("CAMP_SELL"):
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::PLAYER_ID()))
			{
				func_158();
			}
			break;
	}
}

void func_70(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_1248240[iParam0 /*683*/].f_542[iVar0 /*3*/].f_2 == 0)
		{
		}
		else
		{
			func_159(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_71(int iParam0)
{
	if (func_64(iParam0, 32, 255) && !func_40(iParam0, 4194304))
	{
		func_160();
	}
}

void func_72(int iParam0, int iParam1)
{
	if (func_64(iParam0, 32, 255))
	{
		switch (iParam1)
		{
			case joaat("GUN_FOR_HIRE"):
				if (func_40(iParam0, 4194304))
				{
					func_162(func_161(), Global_1248240[iParam0 /*683*/].f_584, 1, 1);
				}
				break;
			case joaat("BOUNTY_PLAYER"):
				if (func_40(iParam0, 4194304) && func_64(iParam0, 32, func_161()))
				{
					func_162(func_161(), Global_1248240[iParam0 /*683*/].f_584, 1, 0);
				}
				break;
			case joaat("CAMP_SELL"):
				if (func_40(iParam0, 4194304))
				{
					func_162(func_161(), Global_1248240[iParam0 /*683*/].f_584, 1, 1);
				}
				break;
		}
	}
}

void func_73(int iParam0)
{
	if ((Global_1248240[iParam0 /*683*/].f_559 == joaat("BOUNTY_PLAYER") && Global_1237665[iParam0 /*27*/].f_16 == PLAYER::PLAYER_ID()) && func_164(func_163(Global_1237665[iParam0 /*27*/]), Global_1248240[iParam0 /*683*/].f_589) == joaat("VERY_HIGH"))
	{
		func_165(4);
	}
}

bool func_74(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("HIDEOUT"):
		case joaat("DYNAMIC"):
			return true;
	}
	return false;
}

bool func_75(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = Global_1248240[iParam0 /*683*/].f_641;
	fVar1 = func_167(Global_35, func_166(iParam0));
	iVar2 = 4000;
	Global_1248240[iParam0 /*683*/].f_641 = fVar1;
	if (fVar1 < 100f)
	{
		return true;
	}
	else if (fVar1 < 250f)
	{
		if (fVar1 < fVar0)
		{
			if (!func_40(iParam0, 1024))
			{
				if (!func_40(iParam0, 2048))
				{
					func_168(&(Global_1248240[iParam0 /*683*/].f_642));
					func_144(iParam0, 2048);
				}
				if (func_169(Global_1248240[iParam0 /*683*/].f_642) < iVar2)
				{
					return false;
				}
			}
			func_144(iParam0, 1024);
			return true;
		}
		else
		{
			if (func_40(iParam0, 1024))
			{
				if (func_40(iParam0, 2048))
				{
					func_168(&(Global_1248240[iParam0 /*683*/].f_642));
					func_106(iParam0, 2048);
				}
				if (func_169(Global_1248240[iParam0 /*683*/].f_642) < iVar2)
				{
					return true;
				}
			}
			func_106(iParam0, 1024);
			return false;
		}
	}
	return false;
}

void func_76(int iParam0)
{
	if (Global_1248240.f_9296 != iParam0)
	{
		Global_1248240.f_9296 = iParam0;
	}
}

void func_77()
{
	if (Global_1248240.f_9296 != -1)
	{
		Global_1248240.f_9296 = -1;
	}
}

bool func_78(int iParam0)
{
	return (Global_1248240.f_8903 && iParam0) != 0;
}

void func_79()
{
	int iVar0;
	struct<7> Var2;

	if (!func_170(255))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		Var2 = { func_171(PLAYER::PLAYER_ID()) };
		BOUNTY::_0x4EF23E04A0C8FF51(&Var2, &iVar0);
		if (func_172(iVar0))
		{
			func_173(MISC::_CREATE_VAR_STRING(2, "JAIL_BOUNTY_REMOVE", iVar0), 10000, 0, 0, 0, 1);
		}
		else if (func_172(1))
		{
			func_173(MISC::_CREATE_VAR_STRING(2, "JAIL_BOUNTY_REMOVE", func_174()), 10000, 0, 0, 0, 1);
		}
		func_175(-896348601, 0, 0);
	}
	func_165(1);
}

bool func_80(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (!func_176(iParam0, 64))
	{
		func_177(iParam0, 64);
	}
	if (func_176(iParam0, 32))
	{
		bVar1 = false;
		switch (Global_1248240.f_8903.f_16[iParam0 /*8*/])
		{
			case 509970874:
				bVar1 = func_178(8, 16);
				break;
			case -1141463485:
				bVar1 = func_179(16, 8);
				break;
			case -649633548:
				bVar1 = func_178(32, 64);
				break;
			case 504244707:
				bVar1 = func_179(64, 32);
				break;
		}
		if (bVar1)
		{
			func_180(iParam0, 32);
		}
	}
	if (!func_181(iParam0))
	{
		switch (Global_1248240.f_8903.f_16[iParam0 /*8*/])
		{
			case 355060119:
				bVar0 = func_182(iParam0);
				break;
			case 1393257577:
				bVar0 = func_183(iParam0);
				break;
			case -896348601:
				bVar0 = func_184(iParam0);
				break;
			case -179235043:
				bVar0 = func_185(iParam0);
				break;
			case 509970874:
				bVar0 = func_186(iParam0);
				break;
			case -1141463485:
				bVar0 = func_187(iParam0);
				break;
			case -1454491980:
				bVar0 = func_188(iParam0);
				break;
			case -649633548:
				bVar0 = func_189(iParam0, Global_1248240.f_8903.f_16[iParam0 /*8*/].f_6);
				break;
			case 504244707:
				bVar0 = func_190(iParam0);
				break;
			case -1473321380:
				bVar0 = func_191(iParam0, Global_1248240.f_8903.f_16[iParam0 /*8*/].f_6);
				break;
			case 1265908607:
				bVar0 = func_192(iParam0);
				break;
			case -1729966722:
				bVar0 = func_193(iParam0);
				break;
			case -1228177771:
				bVar0 = func_194(iParam0, Global_1248240.f_8903.f_16[iParam0 /*8*/].f_6);
				break;
			case -506555739:
				bVar0 = func_195(iParam0);
				break;
			case 1244342493:
				bVar0 = func_196(iParam0);
				break;
			case -1303136:
				bVar0 = func_197(iParam0);
				break;
			case -1555147881:
				bVar0 = func_198(iParam0);
				break;
			case 607258092:
				bVar0 = func_199(iParam0);
				break;
		}
		if (bVar0)
		{
			func_177(iParam0, 1);
		}
		else
		{
			func_177(iParam0, 1);
			func_177(iParam0, 4);
		}
	}
	return func_176(iParam0, 24);
}

void func_81(int iParam0)
{
	struct<8> Var0;

	switch (Global_1248240.f_8903.f_16[iParam0 /*8*/])
	{
		case 509970874:
			func_88(8);
			break;
		case -1141463485:
			func_88(16);
			break;
		case -649633548:
			func_88(32);
			break;
		case 504244707:
			func_88(64);
			break;
	}
	Global_1248240.f_8903.f_16[iParam0 /*8*/] = { Var0 };
}

void func_82(int iParam0)
{
	if (func_86(1, iParam0))
	{
		if (func_86(4, iParam0))
		{
			if (!func_200(iParam0))
			{
				func_201(iParam0);
				return;
			}
		}
		else
		{
			if (!func_202(iParam0))
			{
				func_203(iParam0);
				return;
			}
			func_201(iParam0);
		}
	}
	else
	{
		func_203(iParam0);
	}
}

void func_83()
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<7> Var4;

	if (func_78(2) && (MISC::GET_GAME_TIMER() - Global_1248240.f_8903.f_15) > 600000)
	{
		func_204(2);
	}
	if (Global_1248240.f_8903.f_14 <= 0)
	{
		return;
	}
	iVar0 = (Global_1248240.f_8903.f_14 - 1);
	while (iVar0 >= 0)
	{
		if (!func_205(&(Global_1248240.f_8903.f_9[iVar0 /*4*/]), &uVar1))
		{
			if (Global_1248240.f_8903.f_9[iVar0 /*4*/].f_3 || uVar1)
			{
				func_165(2);
				Global_1248240.f_8903.f_15 = MISC::GET_GAME_TIMER();
				Var4 = { func_171(Global_1248240.f_8903.f_9[iVar0 /*4*/]) };
				BOUNTY::_0x4EF23E04A0C8FF51(&Var4, &iVar2);
				func_206(Global_1248240.f_8903.f_9[iVar0 /*4*/], iVar2);
			}
			if (Global_1248240.f_8903.f_14 > 1)
			{
				SCRIPTS::_0xD426E2E3288469D6(&(Global_1248240.f_8903.f_8), Global_1248240.f_8903.f_9[iVar0 /*4*/]);
				Global_1248240.f_8903.f_9[iVar0 /*4*/] = { Global_1248240.f_8903.f_9[(Global_1248240.f_8903.f_14 - 1) /*4*/] };
			}
			else
			{
				SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1248240.f_8903.f_8));
				Global_1248240.f_8903.f_9[iVar0 /*4*/].f_1 = 0;
				Global_1248240.f_8903.f_9[iVar0 /*4*/] = 255;
				Global_1248240.f_8903.f_9[iVar0 /*4*/].f_2 = 0;
				Global_1248240.f_8903.f_9[iVar0 /*4*/].f_3 = 0;
				Global_1248240.f_8903.f_14 = 0;
				return;
			}
			if (Global_1248240.f_8903.f_14 > 0)
			{
				Global_1248240.f_8903.f_14 = (Global_1248240.f_8903.f_14 - 1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

int func_84(int iParam0)
{
	vector3 vVar0;

	if (!func_170(255))
	{
		return 1742861621;
	}
	if (func_207(255))
	{
		return 1742861621;
	}
	if (BOUNTY::_0x8FAF4D262FABA99C(&vVar0))
	{
		Global_1257541.f_8852.f_4 = vVar0.z;
	}
	if (Global_1296859.f_21 < Global_1257541.f_8852.f_4)
	{
		return -232718588;
	}
	if (Global_1257541.f_8852.f_5 == -1)
	{
		Global_1257541.f_8852.f_5 = Global_1296859.f_21 + 30;
	}
	if (Global_1296859.f_21 < Global_1257541.f_8852.f_5)
	{
		return -855374237;
	}
	if (func_208(iParam0, 1, 0, 1))
	{
		return -1826994236;
	}
	if (func_209(1114112, iParam0))
	{
		return 458635662;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return -86457213;
	}
	if (func_211(func_210(), func_210(), 0, 0))
	{
		return -189894459;
	}
	return -1154721830;
}

int func_85()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-133260350))
	{
		return 2138128745;
	}
	if (func_78(2))
	{
		return 1348664310;
	}
	if (func_212())
	{
		return -77347729;
	}
	return -1154721830;
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)) && (Global_1238240[iParam1 /*303*/].f_300 && iParam0) != 0);
}

void func_87(int iParam0)
{
	Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 = (Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 || iParam0);
}

void func_88(int iParam0)
{
	Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 = (Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 - (Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 && iParam0));
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_200(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	Global_1248240.f_8903.f_7 = func_213(iVar0, iParam1);
	iVar1 = 0;
	switch (func_214(&uVar2, iVar0, 1))
	{
		case 4:
			iVar1 = MISC::GET_HASH_KEY(&uVar2);
			break;
		case 1:
			iVar1 = 0;
			break;
		case 2:
			iVar1 = 0;
			break;
		case 0:
		case 3:
			Global_1248240.f_8903.f_7 = 726443182;
			return;
	}
	if (Global_1248240.f_8903.f_7 != -605318450)
	{
		return;
	}
	func_215(iVar0, iVar1);
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_86(2, iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1248240.f_8903.f_120), iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (iParam1 == iVar0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1248240.f_8903.f_120), iParam0);
		return;
	}
	if (GANG::_0x9BE7DCB22D32CCBE(GANG::_0x901E0DC25080C8B9(iParam1), iVar0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1248240.f_8903.f_120), iParam0);
		return;
	}
	if (BUILTIN::VDIST(func_216(iVar0), func_216(iParam1)) <= (Global_1901947.f_166.f_23 * Global_1145091[iParam0 /*35*/].f_34))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1248240.f_8903.f_120), iParam0);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1248240.f_8903.f_120), iParam0);
	}
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_92())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam0)))
	{
		return;
	}
	if (!GANG::_0x3F59FE6F37869576(iParam1, PLAYER::INT_TO_PLAYERINDEX(iParam0)))
	{
		return;
	}
	iVar0 = Global_1238240[iParam0 /*303*/].f_300.f_1;
	if (iVar0 == 255)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_86(4, iVar0))
	{
		return;
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 13)
	{
		if (Global_1237665[iVar1 /*27*/].f_16 == iVar0 && Global_1248240[iVar1 /*683*/].f_559 == joaat("BOUNTY_PLAYER"))
		{
			if (!func_36(Global_1248240[iVar1 /*683*/].f_584))
			{
				Jump @214; //curOff = 178
			}
			else
			{
				STATS::_0x6B1044FDC2B09101(Global_1248240[iVar1 /*683*/].f_584.f_1, PLAYER::GET_PLAYER_PED(iVar0));
				bVar2 = true;
			}
			else
			{
				iVar1++;
			}
			if (!bVar2)
			{
				return;
			}
			func_217(iVar0);
		}
	}
}

bool func_92()
{
	return Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 != 255;
}

void func_93()
{
	Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 = 255;
	Global_1257541.f_8852.f_5 = -1;
}

void func_94()
{
	int iVar0;

	switch (Global_1248240.f_8903.f_1)
	{
		case 0:
			if (func_218())
			{
				func_219(1);
			}
			break;
		case 1:
			if (func_176(Global_1248240.f_8903.f_100, 32))
			{
				if (func_176(Global_1248240.f_8903.f_100, 2))
				{
					func_219(2);
				}
				else if (func_176(Global_1248240.f_8903.f_100, 4))
				{
					if (func_220(Global_1248240.f_8903.f_100))
					{
						func_221(1);
						func_219(0);
						func_222();
					}
				}
				func_180(Global_1248240.f_8903.f_100, 32);
			}
			break;
		case 2:
			iVar0 = func_224(Global_1248240.f_8903.f_2, func_223(func_163(Global_1248240.f_8903.f_2), Global_1248240.f_8903.f_3), joaat("BOUNTY_PLAYER"), ENTITY::GET_ENTITY_COORDS(Global_34, true, false), 1, 0, 0, -1082130432 /* Float: -1f */);
			if (iVar0 != 0 || func_225(PLAYER::PLAYER_ID(), 1))
			{
				func_221(1);
				func_219(0);
				func_222();
				return;
			}
			func_87(4);
			func_226(Global_1248240.f_8903.f_2, Global_1248240.f_8903.f_3, 0);
			func_221(0);
			func_219(0);
			break;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;

	iVar0 = Global_1257541.f_8852.f_6;
	iVar1 = func_227();
	iVar2 = func_228(0);
	Global_1257541.f_8852.f_6 = iVar1;
	Global_1248240.f_8903.f_5 = func_229(iVar2, iVar0, iVar1, &bVar3);
	if (Global_1248240.f_8903.f_5 != 1519094052)
	{
		if (bVar3)
		{
			func_230();
		}
		return;
	}
	if (!func_231(iVar2))
	{
		func_230();
		return;
	}
	iVar5 = -1;
	if (!func_232(joaat("BOUNTY_PLAYER"), iVar2, &uVar4, &iVar5, 1, Global_1901947.f_166.f_24))
	{
		func_230();
		return;
	}
	func_226(uVar4, iVar5, 0);
	func_230();
}

struct<2> func_96(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_97(var uParam0, var uParam1)
{
	int iVar0;

	if ((Global_1296859.f_21 - Global_1257541.f_8859) > 60)
	{
		STATS::STAT_ID_GET_INT(&uParam0, &iVar0);
		STATS::STAT_ID_SET_INT(&uParam0, iVar0 + 1, true);
		Global_1257541.f_8859 = Global_1296859.f_21;
		return 1;
	}
	return 0;
}

bool func_98(var uParam0, var uParam1)
{
	int iVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &iVar0);
	return iVar0 >= 600;
}

void func_99(var uParam0, var uParam1)
{
	STATS::STAT_ID_SET_INT(&uParam0, 0, true);
}

void func_100()
{
	int iVar0;

	func_233();
	Global_1248240.f_9026.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_234(iVar0))
		{
			Global_1248240.f_9026.f_3[iVar0] = 0;
		}
		else
		{
			func_235(&(Global_1248240.f_9026.f_6), iVar0);
			switch (iVar0)
			{
				case 0:
					Global_1248240.f_9026.f_3[iVar0] = func_236();
					break;
				case 1:
					Global_1248240.f_9026.f_3[iVar0] = func_237();
					break;
			}
		}
		iVar0++;
	}
}

int func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = (iVar0 + func_238(iVar1));
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar0 + 1);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_238(iVar1) == 0)
		{
		}
		else
		{
			iVar2 = (iVar2 - func_238(iVar1));
			if (iVar2 <= 0)
			{
				return iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_239();
		case 1:
			return func_240();
	}
	return false;
}

void func_103(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	switch (iParam0)
	{
		case 0:
			func_232(joaat("CAMP_RAID"), 0, &uVar0, &iVar1, 0, -1082130432 /* Float: -1f */);
			func_226(uVar0, iVar1, 0);
			func_241(1048576);
			func_241(524288);
			break;
		case 1:
			func_243(joaat("MOONSHINE_RAID"), 0, &uVar0, &iVar1, func_242(Global_1298536[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_5.f_12), 0, Global_1901947.f_166.f_42);
			func_226(uVar0, iVar1, 0);
			break;
	}
	Var2 = { func_96(joaat("MP_FETCH_LAST_STARTED_BUSINESS_RAID_TYPE")) };
	STATS::STAT_ID_SET_INT(&Var2, iParam0, true);
}

bool func_104(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 4);
}

int func_105(bool bParam0)
{
	if (!func_244(joaat("FREEMODE"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_106(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (func_40(iParam0, iParam1))
	{
		func_140(&(Global_1248240[iParam0 /*683*/].f_556), iParam1);
	}
}

void func_107(int iParam0)
{
	if (Global_1248240[iParam0 /*683*/].f_559 != joaat("BOUNTY_BOARD"))
	{
		return;
	}
	if (!func_40(iParam0, 268435456))
	{
		return;
	}
	if (func_40(iParam0, 536870912))
	{
		return;
	}
	if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	func_175(607258092, 0, 0);
}

bool func_108(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_245(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_109(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_245(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GUN_FOR_HIRE"):
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("DYNAMIC"):
			return 6;
		case joaat("HIDEOUT"):
			return 5;
	}
	return 0;
}

void func_111(bool bParam0)
{
	int iVar0;

	if (Global_1900688.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_17() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688.f_2 == 4 && Global_1900688.f_12 != Global_1900688.f_13) && !bParam0)
	{
		Global_1900688.f_1 = Global_1900688.f_2;
		Global_1900688.f_12 = Global_1900688.f_13;
		func_246(iVar0, Global_1900688.f_12);
	}
	else
	{
		Global_1900688.f_1 = 0;
		Global_1900688.f_7 = iVar0;
		Global_1900688.f_8 = func_247();
		Global_1900688.f_9 = func_248(Global_1893587.f_2);
		Global_1900688.f_11 = func_249(Global_1896622.f_41);
		if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
		{
			func_250(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
		else if (Global_1900688.f_11 != -1)
		{
			func_250(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
		}
		else
		{
			func_250(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
	}
	Global_1900688.f_2 = 0;
}

void func_112(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (func_64(iParam0, iParam1, 255))
	{
		func_140(&(Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_19), iParam1);
	}
}

void func_113(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_36(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_108(Param0) && !func_109(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_251(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_245(Param0) == 3)
		{
			func_252(1, -1706799532);
		}
		else if (func_245(Param0) == 4)
		{
			func_252(0, -1706799532);
		}
	}
	if ((func_245(Param0) == 3 || func_245(Param0) == 1) || ((bParam5 && func_245(Param0) == 4) && STATS::_0x01F4D242765C6B24(func_251(Param0))))
	{
		if (iParam3 != -1)
		{
			func_253(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_253(Param0, 2, iParam4, 255, 0);
		}
	}
	func_254(Param0, 0);
	if (func_256(func_255(0), Param0))
	{
		func_257(1);
		func_258(0);
		func_259(0);
		func_260(1);
	}
	func_261(Param0);
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_262(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

int func_114(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = func_263(Param0);
	if (func_263(Param0) < 0)
	{
		return 0;
	}
	func_264(iVar0, uParam2);
	return 1;
}

void func_115(int iParam0)
{
	if (Global_1194053.f_440 != 2)
	{
		return;
	}
	if (Global_1194053.f_440.f_1 == 0)
	{
		return;
	}
	Global_1194053.f_440.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(iParam0);
}

void func_116(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_228(0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = func_265(bParam2);
	if (bParam2)
	{
		iVar3 = (Global_1901947.f_166.f_18 / 1000);
		bVar2 = true;
	}
	else if (bVar1)
	{
		iVar3 = (func_266(iVar0) / 1000);
	}
	else if (bParam1)
	{
		iVar3 = (func_267(iVar0) / 1000);
	}
	else
	{
		iVar3 = (func_268(iVar0) / 1000);
	}
	if (bParam0 || bParam2)
	{
		Global_1257541.f_8852.f_1 = (Global_1296859.f_21 + iVar3);
		func_269(2, 1);
	}
	else
	{
		Global_1257541.f_8852.f_1 = 0;
		func_270(2, 1);
	}
	if (bVar2 && Global_1257541.f_8852 > Global_1296859.f_21)
	{
		Global_1257541.f_8852 = (Global_1257541.f_8852 + iVar3);
	}
	else
	{
		Global_1257541.f_8852 = (Global_1296859.f_21 + iVar3);
	}
}

bool func_117(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MOONSHINE_RAID"):
		case joaat("CAMP_RAID"):
			return true;
		default:
			break;
	}
	return false;
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;

	Var0 = { func_96(joaat("MP_FETCH_LAST_STARTED_BUSINESS_RAID_GLOBAL_COOLDOWN")) };
	STATS::STAT_ID_SET_INT(&Var0, 0, true);
}

void func_119(int iParam0)
{
	if (func_271(iParam0))
	{
		func_272(1);
	}
	if (func_273(iParam0))
	{
		func_272(2);
	}
}

bool func_120(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_121(int iParam0)
{
	int iVar0;

	if (!func_120(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_70 = iParam0;
	Global_1134390[iVar0 /*83*/].f_70.f_2 = 0;
}

bool func_122(int iParam0, int iParam1)
{
	return (func_104(iParam0) && (Global_1248240.f_8880[iParam0 /*4*/] == -1 || Global_1248240.f_8880[iParam0 /*4*/] == iParam1));
}

void func_123(int iParam0, int iParam1)
{
	if (Global_1237665[iParam0 /*27*/].f_2 != iParam1)
	{
		Global_1237665[iParam0 /*27*/].f_2 = iParam1;
	}
}

bool func_124(int iParam0)
{
	int iVar0;

	iVar0 = func_274(iParam0);
	if (iVar0 != 0 && func_275(iVar0))
	{
		return false;
	}
	if (iParam0 == joaat("INTRO_MISSION"))
	{
		return func_276();
	}
	return true;
}

void func_125(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_141(iParam0, 1073741824 /* Float: 2f */))
	{
		if (GANG::_0xD6F6ACF4392187FB(Global_1237665[iParam0 /*27*/].f_13))
		{
			if (GANG::_0x149A2751AB66AC02(Global_1237665[iParam0 /*27*/].f_13) > 0)
			{
				iVar1 = GANG::_0x4BE6C13A45CCA8EC(Global_1237665[iParam0 /*27*/].f_13);
				if (Global_1237665[iParam0 /*27*/].f_15 != iVar1)
				{
					Global_1237665[iParam0 /*27*/].f_15 = iVar1;
				}
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (GANG::_0x9BE7DCB22D32CCBE(Global_1237665[iParam0 /*27*/].f_13, iVar1))
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
					}
					else if (Global_1248240[iParam0 /*683*/].f_559 == joaat("BOUNTY_PLAYER") && Global_1237665[iParam0 /*27*/].f_16 == iVar1)
					{
						Global_1237665[iParam0 /*27*/].f_13 = GANG::_0x901E0DC25080C8B9(iVar1);
						Global_1237665[iParam0 /*27*/].f_15 = iVar1;
						SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
						SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
					}
				}
				iVar2++;
			}
		}
		else if (Global_1248240[iParam0 /*683*/].f_559 == joaat("BOUNTY_PLAYER") && func_277(Global_1237665[iParam0 /*27*/].f_16, 0, 1))
		{
			Global_1237665[iParam0 /*27*/].f_13 = GANG::_0x901E0DC25080C8B9(Global_1237665[iParam0 /*27*/].f_16);
			Global_1237665[iParam0 /*27*/].f_15 = Global_1237665[iParam0 /*27*/].f_16;
			SCRIPTS::_0x31010318BA9897AC(&uVar0, Global_1237665[iParam0 /*27*/].f_16);
		}
	}
	Global_1237665[iParam0 /*27*/].f_14 = uVar0;
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_278(iParam0);
	iVar1 = Global_1237665[iParam0 /*27*/].f_1;
	if (iVar1 != iVar0)
	{
		if (iVar1 != -1)
		{
			Global_1237665.f_352[iVar1] = (Global_1237665.f_352[iVar1] - 1);
		}
		if (iVar0 != -1)
		{
			Global_1237665.f_352[iVar0]++;
		}
		Global_1237665[iParam0 /*27*/].f_1 = iVar0;
	}
}

void func_127(int iParam0)
{
	if (func_40(iParam0, 1))
	{
		func_123(iParam0, 2);
	}
}

void func_128(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_279(iParam0, &bVar1))
	{
		bVar0 = true;
	}
	if (!func_280(Global_1237665[iParam0 /*27*/].f_10))
	{
		func_168(&(Global_1237665[iParam0 /*27*/].f_10));
	}
	else if (func_169(Global_1237665[iParam0 /*27*/].f_10) > 45000 && !bVar0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (func_281(Global_1248240[iParam0 /*683*/].f_559, 0) && !func_141(iParam0, 524288))
		{
			func_282(Global_1237665[iParam0 /*27*/].f_13, Global_1248240[iParam0 /*683*/].f_584, func_40(iParam0, 67108864));
		}
		func_283(&(Global_1237665[iParam0 /*27*/].f_10));
		func_123(iParam0, 3);
	}
	else if (bVar0)
	{
		func_283(&(Global_1237665[iParam0 /*27*/].f_10));
		func_123(iParam0, 2);
	}
}

void func_129(int iParam0)
{
	if (!func_141(iParam0, 32) && func_284(iParam0, 32, 0))
	{
		func_285(iParam0);
		func_286(iParam0, 32);
	}
	else if (!func_141(iParam0, 16) && func_284(iParam0, 16, 0))
	{
		func_285(iParam0);
		func_286(iParam0, 16);
	}
	if (!func_141(iParam0, 4096) && func_284(iParam0, 4096, 0))
	{
		func_286(iParam0, 4096);
	}
	if (func_287(iParam0))
	{
		func_123(iParam0, 3);
	}
}

void func_130(int iParam0)
{
	if (func_288(iParam0))
	{
		func_289(iParam0);
	}
}

char* func_131()
{
	return "net_fetch_hideout_leader";
}

void func_132(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Global_1237665.f_356[iParam0 /*2*/] = { Var0 };
}

int func_133(var uParam0)
{
	return *uParam0;
}

struct<40> func_134(var uParam0, int iParam1)
{
	struct<40> Var0;

	Var0 = { func_290(uParam0, iParam1) };
	func_291(uParam0, iParam1);
	return Var0;
}

bool func_135(var uParam0, var uParam1)
{
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return false;
	}
	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
		{
			return true;
		}
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return false;
	}
	if (uParam0->f_7 != uParam1->f_7)
	{
		return false;
	}
	if (uParam0->f_8 != uParam1->f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
	{
		return false;
	}
	if (!func_256(uParam0->f_8.f_5, uParam1->f_8.f_5))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
	{
		return false;
	}
	if (!func_256(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	return true;
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_137(var uParam0)
{
	return *uParam0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 10;
		default:
			break;
	}
	return 1;
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_141(int iParam0, int iParam1)
{
	return (func_61(iParam0) && func_62(Global_1237665[iParam0 /*27*/].f_3, iParam1));
}

bool func_142()
{
	return (func_292() != 0 || func_293(1));
}

bool func_143()
{
	return func_294() != 0;
}

void func_144(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_40(iParam0, iParam1))
	{
		func_139(&(Global_1248240[iParam0 /*683*/].f_556), iParam1);
	}
}

int func_145(int iParam0)
{
	if (func_143())
	{
		return 0;
	}
	if (!func_142())
	{
		return 0;
	}
	if (func_295())
	{
		func_296(2);
	}
	else
	{
		func_296(1);
	}
	func_297(iParam0);
	return 1;
}

void func_146(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_298(iParam0, 1))
	{
		return;
	}
	bVar0 = func_299();
	func_300(iParam0);
	if (iParam1 == -1)
	{
		iVar1 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_7;
		if (iVar1 > 1)
		{
			iVar1 = 1;
		}
		iParam1 = 0;
		while (iParam1 < iVar1)
		{
			func_301(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_301(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_302(iParam0);
	}
}

void func_147(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) && Global_1238240[iVar2 /*303*/][iParam0 /*23*/].f_22 == Global_1237665[iParam0 /*27*/].f_9)
		{
			uVar0 = (uVar0 || Global_1238240[iVar2 /*303*/][iParam0 /*23*/].f_19);
			if (GANG::_0x901E0DC25080C8B9(iVar3) == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
			{
				uVar1 = (uVar1 || Global_1238240[iVar2 /*303*/][iParam0 /*23*/].f_19);
			}
		}
		iVar2++;
	}
	Global_1248240[iParam0 /*683*/].f_557 = uVar0;
	Global_1248240[iParam0 /*683*/].f_558 = uVar1;
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1248240[iParam0 /*683*/].f_555 < 0 || Global_1248240[iParam0 /*683*/].f_555 >= 3)
	{
		return;
	}
	if (func_64(iParam0, 8388608, 255))
	{
		return;
	}
	if (func_304(func_303(Global_1237665[iParam0 /*27*/])) && Global_1248240[iParam0 /*683*/].f_555 < 2)
	{
		return;
	}
	iVar0 = func_305(iParam0);
	func_306(iParam0, iVar0);
	switch (iVar0)
	{
		case 2:
			iVar1 = Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_21;
			if (iVar1 != -1)
			{
				iVar2 = Global_1248240[iParam0 /*683*/].f_597;
			}
			func_307(iParam0, iVar2);
			break;
		case 1:
			func_308(iParam0);
			break;
		case 17:
			break;
		case 3:
			if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				if (func_109(Global_1248240[iParam0 /*683*/].f_584) || func_108(Global_1248240[iParam0 /*683*/].f_584))
				{
					func_50(iParam0);
				}
			}
			else
			{
				func_307(iParam0, iVar2);
			}
			break;
		default:
			if (func_109(Global_1248240[iParam0 /*683*/].f_584) || func_108(Global_1248240[iParam0 /*683*/].f_584))
			{
				func_50(iParam0);
			}
			break;
	}
}

void func_149(int iParam0)
{
	if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_284(iParam0, 8388608, 0))
	{
		return;
	}
	if (func_141(iParam0, 131072))
	{
		func_309(iParam0, 134217728);
		return;
	}
	if ((func_284(iParam0, 67108864, 1) && !func_284(iParam0, 2, 1)) && !func_284(iParam0, 134217728, 1))
	{
		func_310(joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"), 0, 1);
		func_309(iParam0, 134217728);
	}
}

void func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;

	if (Global_1237665[iParam0 /*27*/].f_2 == 3 || Global_1248240[iParam0 /*683*/].f_555 == 3)
	{
		return;
	}
	if (Global_1237665[iParam0 /*27*/].f_12 != 0 && Global_1237665[iParam0 /*27*/].f_12 != Global_1248240[iParam0 /*683*/].f_591)
	{
		Global_1248240[iParam0 /*683*/].f_591 = Global_1237665[iParam0 /*27*/].f_12;
	}
	if (Global_1248240[iParam0 /*683*/].f_591 == Global_1248240[iParam0 /*683*/].f_592)
	{
		return;
	}
	Global_1248240[iParam0 /*683*/].f_592 = Global_1248240[iParam0 /*683*/].f_591;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (!MISC::IS_BIT_SET(Global_1248240[iParam0 /*683*/].f_591, iVar0))
		{
		}
		else
		{
			iVar1 = iVar2;
			Var3 = { func_311(iParam0, iVar0) };
			if (PED::ADD_RELATIONSHIP_GROUP(&Var3, &iVar1))
			{
				func_312(iParam0, iVar0, iVar1);
				func_313(iParam0, iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

bool func_151(int iParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		return true;
	}
	iVar0 = Global_1237665[iParam0 /*27*/].f_2;
	if (iVar0 == 3 || iVar0 == -1)
	{
		return true;
	}
	if (Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_22 != -1 && Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_22 != Global_1237665[iParam0 /*27*/].f_9)
	{
		return true;
	}
	return false;
}

void func_152(int iParam0, int iParam1)
{
	if (Global_1248240[iParam0 /*683*/].f_555 != iParam1)
	{
		Global_1248240[iParam0 /*683*/].f_555 = iParam1;
	}
}

bool func_153(int iParam0, bool bParam1, bool bParam2)
{
	if (func_141(iParam0, 64))
	{
		return false;
	}
	return (bParam1 && !bParam2);
}

void func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_40(iParam0, 1))
	{
		iVar0 = Global_1237665[iParam0 /*27*/];
		iVar1 = func_163(iVar0);
		iVar2 = Global_1237665[iParam0 /*27*/].f_6;
		Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_22 = Global_1237665[iParam0 /*27*/].f_9;
		Global_1248240[iParam0 /*683*/].f_588 = func_314(iVar1, iVar2);
		Global_1248240[iParam0 /*683*/].f_589 = func_223(iVar1, iVar2);
		Global_1248240[iParam0 /*683*/].f_559 = func_303(iVar0);
		Global_1248240[iParam0 /*683*/].f_584 = { func_315(iParam0) };
		Global_1248240[iParam0 /*683*/].f_598 = func_316(iVar0, iVar2);
		Global_1248240[iParam0 /*683*/].f_599 = func_317(iVar0, iVar2);
		Global_1248240[iParam0 /*683*/].f_595 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		iVar4 = func_318(iVar1, iVar2);
		iVar3 = 0;
		while (iVar3 <= (iVar4 - 1))
		{
			Global_1248240[iParam0 /*683*/].f_542[iVar3 /*3*/] = func_319(iVar1, iVar2, iVar3);
			Global_1248240[iParam0 /*683*/].f_542[iVar3 /*3*/].f_1 = func_320(iVar1, iVar2, iVar3);
			Global_1248240[iParam0 /*683*/].f_542[iVar3 /*3*/].f_2 = func_321(iVar1, iVar2, iVar3);
			iVar3++;
		}
		if (Global_1248240[iParam0 /*683*/].f_559 == joaat("CAMP_RAID"))
		{
			Global_1248240[iParam0 /*683*/].f_600 = { Global_1237665[iParam0 /*27*/].f_18 };
		}
		else
		{
			Global_1248240[iParam0 /*683*/].f_600 = { func_322(iVar0, iVar2) };
		}
		if (Global_1237665[iParam0 /*27*/].f_21 != 0)
		{
			func_323(&(Global_1237665[iParam0 /*27*/].f_21), &(Global_1248240[iParam0 /*683*/].f_643), 0);
		}
		iVar5 = func_324(iVar0, iVar2);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				Global_1248240[iParam0 /*683*/].f_603[iVar6 /*3*/] = { func_325(iVar1, iVar2, iVar6) };
				iVar6++;
			}
		}
		if (func_326(iVar1, iVar2))
		{
			func_144(iParam0, 4096);
		}
		if (func_327(iVar1, iVar2))
		{
			func_144(iParam0, 8192);
		}
		if (func_328(iVar1, iVar2))
		{
			func_144(iParam0, 16384);
		}
		if (func_329(iVar1, iVar2) && PLAYER::PLAYER_ID() != Global_1237665[iParam0 /*27*/].f_16)
		{
			func_144(iParam0, 32768);
		}
		if (func_330(iVar1, iVar2))
		{
			func_144(iParam0, 131072);
		}
		if (func_331(iVar1, iVar2))
		{
			func_144(iParam0, 262144);
		}
		if (func_332(iVar1, iVar2))
		{
			func_144(iParam0, 67108864);
		}
		func_144(iParam0, 1);
	}
	if (Global_1237665[iParam0 /*27*/].f_2 == 3)
	{
		func_152(iParam0, 3);
	}
	else if (Global_1237665[iParam0 /*27*/].f_2 > 0 && Global_1237665[iParam0 /*27*/].f_2 <= 1)
	{
		func_152(iParam0, 1);
	}
	else if (Global_1237665[iParam0 /*27*/].f_2 >= 2)
	{
		func_152(iParam0, 2);
	}
}

void func_155(int iParam0)
{
	if (!func_304(Global_1248240[iParam0 /*683*/].f_559))
	{
		func_333(iParam0);
		func_334(iParam0);
	}
	if (Global_1237665[iParam0 /*27*/].f_2 != 1)
	{
		func_152(iParam0, Global_1237665[iParam0 /*27*/].f_2);
	}
}

void func_156(int iParam0)
{
	if (!func_40(iParam0, 131072) && (func_141(iParam0, 4096) || func_141(iParam0, 16)))
	{
		func_335(Global_1248240[iParam0 /*683*/].f_584);
	}
	func_333(iParam0);
	func_334(iParam0);
	func_336(iParam0);
}

void func_157(int iParam0)
{
	if (func_337(iParam0))
	{
		func_34(iParam0);
	}
}

void func_158()
{
	func_338(1);
}

void func_159(int iParam0, int iParam1)
{
	switch (Global_1248240[iParam0 /*683*/].f_542[iParam1 /*3*/].f_1)
	{
		case -476186606:
			if (!func_40(iParam0, 16))
			{
				return;
			}
		case joaat("DISABLE"):
			switch (Global_1248240[iParam0 /*683*/].f_542[iParam1 /*3*/])
			{
				case joaat("SHOP"):
					func_340(func_339(Global_1248240[iParam0 /*683*/].f_542[iParam1 /*3*/].f_2), 1, 50f);
					break;
				case joaat("SHOP_TYPE"):
					func_342(func_341(Global_1248240[iParam0 /*683*/].f_542[iParam1 /*3*/].f_2), 1, 50f);
					break;
				case joaat("MINIGAME"):
					func_344(func_343(Global_1248240[iParam0 /*683*/].f_542[iParam1 /*3*/].f_2));
					break;
			}
			break;
		case joaat("COWER_ON_AGGRO"):
			if (func_141(iParam0, 1))
			{
				switch (Global_1248240[iParam0 /*683*/].f_542[iParam1 /*3*/])
				{
					case joaat("SHOP"):
						func_340(func_339(Global_1248240[iParam0 /*683*/].f_542[iParam1 /*3*/].f_2), 2, 50f);
						break;
					case joaat("SHOP_TYPE"):
						func_342(func_341(Global_1248240[iParam0 /*683*/].f_542[iParam1 /*3*/].f_2), 2, 50f);
						break;
					case joaat("MINIGAME"):
						break;
				}
			}
			break;
	}
}

void func_160()
{
	Global_1139381.f_5560.f_22 = MISC::GET_FRAME_COUNT();
}

int func_161()
{
	return Global_1108365.f_34.f_772;
}

void func_162(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam3)
	{
		if (!func_36(Param1))
		{
			return;
		}
		if (func_345(Param1, 1))
		{
			return;
		}
		if (func_346(Param1))
		{
			return;
		}
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_347(iVar0);
	if (Global_1108365.f_34.f_353[iVar0 /*6*/] && Global_1108365.f_34.f_353[iVar0 /*6*/].f_5 == -1)
	{
		return;
	}
	if (!func_108(Param1) || !bParam3)
	{
		Global_1108365.f_34.f_353[iVar0 /*6*/] = 1;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_1 = iParam0;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_5 = 5;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_4 = Global_1296859.f_21;
		if (bParam4)
		{
			Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
		}
		if (bParam3)
		{
			Global_1108365.f_34.f_353[iVar0 /*6*/].f_2 = { Param1 };
		}
		Global_1108365.f_34.f_546[iVar0 /*7*/] = { func_171(iParam0) };
	}
	else
	{
		Global_1108365.f_34.f_353[iVar0 /*6*/] = 1;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_1 = iParam0;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_2 = { Param1 };
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_5 = -1;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_4 = Global_1296859.f_21;
		Global_1108365.f_34.f_546[iVar0 /*7*/] = { func_171(iParam0) };
		if (bParam4)
		{
			Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
		}
	}
	if (Global_1108365.f_34[iVar0 /*11*/].f_6)
	{
		func_348(iVar0);
	}
}

int func_163(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/];
}

int func_164(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_350(&Var1, uParam1))
	{
		func_351(Var1, -2045057259, &iVar0, 0);
	}
	return iVar0;
}

void func_165(int iParam0)
{
	Global_1248240.f_8903 = (Global_1248240.f_8903 || iParam0);
}

Vector3 func_166(int iParam0)
{
	return Global_1248240[iParam0 /*683*/].f_600;
}

float func_167(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_168(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_169(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

bool func_170(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return Global_1100469[iParam0 /*53*/].f_16;
}

struct<7> func_171(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_172(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_17() == 0)
	{
		return func_352(iParam0);
	}
	return iParam0 <= func_174();
}

var func_173(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_174()
{
	if (func_17() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	return func_353(iParam0, iParam1, iParam2);
}

bool func_176(int iParam0, int iParam1)
{
	return (Global_1248240.f_8903.f_16[iParam0 /*8*/].f_5 && iParam1) != 0;
}

void func_177(int iParam0, int iParam1)
{
	Global_1248240.f_8903.f_16[iParam0 /*8*/].f_5 = (Global_1248240.f_8903.f_16[iParam0 /*8*/].f_5 || iParam1);
}

int func_178(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_86(iParam0, 255))
	{
		if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		iVar1 = 1;
		iVar3 = func_354();
		iVar0 = 0;
		while (iVar0 < iVar3)
		{
			iVar2 = func_355(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
			}
			else if (!func_86(iParam1, iVar2))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
		return iVar1;
	}
	return 0;
}

bool func_179(int iParam0, int iParam1)
{
	int iVar0;

	if (func_86(iParam0, 255))
	{
		iVar0 = func_356();
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return true;
		}
		return !func_86(iParam1, iVar0);
	}
	return false;
}

void func_180(int iParam0, int iParam1)
{
	Global_1248240.f_8903.f_16[iParam0 /*8*/].f_5 = (Global_1248240.f_8903.f_16[iParam0 /*8*/].f_5 - (Global_1248240.f_8903.f_16[iParam0 /*8*/].f_5 && iParam1));
}

bool func_181(int iParam0)
{
	if (func_176(iParam0, 1))
	{
		if (func_176(iParam0, 32))
		{
			return true;
		}
		if (func_176(iParam0, 2))
		{
			if (func_176(iParam0, 128))
			{
				func_180(iParam0, 128);
			}
			else
			{
				func_177(iParam0, 8);
			}
		}
		else if (func_176(iParam0, 4))
		{
			if (!func_220(iParam0))
			{
				func_180(iParam0, 4);
				func_180(iParam0, 1);
				Global_1248240.f_8903.f_16[iParam0 /*8*/].f_7 = 0;
				return false;
			}
			else if (func_176(iParam0, 128))
			{
				func_180(iParam0, 128);
			}
			else
			{
				func_177(iParam0, 8);
			}
		}
		return true;
	}
	return false;
}

int func_182(int iParam0)
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		func_357(741331401, 0, 255, 0, 0);
	}
	return BOUNTY::_0xB096547D61868254(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1));
}

int func_183(int iParam0)
{
	var uVar0;
	var uVar1;

	SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Global_1248240.f_8903.f_118), &(Global_1248240.f_8903.f_119), &uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Global_1248240.f_8903.f_118), &uVar1);
	if (SCRIPTS::_0x179A6F0EE2E79026(&uVar1))
	{
		if (BOUNTY::_0x27D3A0E1FE090A43(&uVar1))
		{
			SCRIPTS::_0xFFDDF802279BE128(&uVar1, &uVar0, &(Global_1248240.f_8903.f_119));
			func_177(iParam0, 8);
			return 1;
		}
	}
	else
	{
		func_177(iParam0, 8);
		return 1;
	}
	return 0;
}

int func_184(int iParam0)
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		func_357(1265622586, 0, 255, 0, 0);
	}
	return BOUNTY::_0xB462D69D406A2602(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1));
}

int func_185(int iParam0)
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		func_357(1265622586, 0, 255, 0, 0);
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1248240.f_8903.f_119));
	func_177(iParam0, 8);
	return 1;
}

int func_186(int iParam0)
{
	return BOUNTY::_0x2D874BA20E8E1F20(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1));
}

int func_187(int iParam0)
{
	int iVar0;

	iVar0 = func_356();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_177(iParam0, 8);
		return 0;
	}
	if (!func_86(8, iVar0))
	{
		return 0;
	}
	return BOUNTY::_0x8521C2E235558278(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1));
}

int func_188(int iParam0)
{
	return BOUNTY::_0x12E981D53B07BF48(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1));
}

int func_189(int iParam0, var uParam1)
{
	return BOUNTY::_0x5B53CA0E2AC3FF45(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1), uParam1, &(Global_1248240.f_8903.f_104));
}

int func_190(int iParam0)
{
	int iVar0;

	iVar0 = func_356();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_177(iParam0, 8);
		return 0;
	}
	if (!func_86(32, iVar0))
	{
		return 0;
	}
	return BOUNTY::_0x22D3A61CE053270C(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1), &(Global_1248240.f_8903.f_104));
}

int func_191(int iParam0, var uParam1)
{
	return BOUNTY::_0xA9C3B0F746375162(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1), uParam1, &(Global_1248240.f_8903.f_104));
}

int func_192(int iParam0)
{
	BOUNTY::_0xA59D1997ECD99F0A();
	func_177(iParam0, 8);
	return 1;
}

int func_193(int iParam0)
{
	BOUNTY::_0x932DB3C05A7465D1();
	func_177(iParam0, 8);
	return 1;
}

int func_194(int iParam0, var uParam1)
{
	return BOUNTY::_0x28717806D3BDD0D0(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1), uParam1);
}

int func_195(int iParam0)
{
	return BOUNTY::_0x3F73AED12A5EF0FF(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1));
}

int func_196(int iParam0)
{
	func_177(iParam0, 8);
	return BOUNTY::_0xFFA13742E43507E3(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1), &(Global_1248240.f_8903.f_101));
}

int func_197(int iParam0)
{
	int iVar0;

	iVar0 = Global_1248240.f_8903.f_16[iParam0 /*8*/].f_6;
	func_177(iParam0, 8);
	if (func_358(iVar0))
	{
		return BOUNTY::_0x81847C2134039BDC(&(Global_1237665[iVar0 /*27*/].f_14));
	}
	return 0;
}

bool func_198(int iParam0)
{
	bool bVar0;

	if (GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1)
	{
		bVar0 = BOUNTY::_0xFBD137BF0EC50FC9(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1), &(Global_1248240.f_8903.f_104));
	}
	else
	{
		bVar0 = BOUNTY::_0x727AB6F008BB9F29(&(Global_1248240.f_8903.f_16[iParam0 /*8*/].f_1), &(Global_1248240.f_8903.f_104));
	}
	if (!bVar0)
	{
		func_175(607258092, 0, 0);
	}
	return bVar0;
}

int func_199(int iParam0)
{
	func_177(iParam0, 8);
	BOUNTY::_0x6A9DF0FCD0C87FF9();
	return 1;
}

bool func_200(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665.f_573), iParam0);
}

void func_201(int iParam0)
{
	SCRIPTS::_0x31010318BA9897AC(&(Global_1237665.f_573), iParam0);
}

bool func_202(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar2 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	vVar3 = { func_216(iVar2) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (!func_200(iVar0) || func_86(4, iParam0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (GANG::_0x3F59FE6F37869576(iVar2, iVar1))
			{
				return false;
			}
			if (BUILTIN::VDIST(vVar3, func_216(iVar1)) <= Global_1901947.f_166.f_25)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_203(int iParam0)
{
	if (!func_200(iParam0))
	{
		return;
	}
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1237665.f_573), iParam0);
}

void func_204(int iParam0)
{
	Global_1248240.f_8903 = (Global_1248240.f_8903 - (Global_1248240.f_8903 && iParam0));
}

bool func_205(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (func_212())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		return false;
	}
	if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > 300000)
	{
		*uParam1 = 1;
		return false;
	}
	if (uParam0->f_2)
	{
		return false;
	}
	return true;
}

void func_206(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_359(1151156158, 4) };
	func_360(Var0);
	func_253(Var0, -1, 0, iParam0, iParam1);
}

bool func_207(int iParam0)
{
	return func_361(1, iParam0);
}

int func_208(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_362(bParam1, bParam2, bParam3);
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

bool func_209(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

struct<2> func_210()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_211(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!bParam4)
	{
		if (func_26())
		{
			return true;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_36(Param2))
	{
		Var0 = { func_363() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_36(Var0)) && !func_256(Var0, Param0))
	{
		return true;
	}
	Var2 = { func_364() };
	if (func_36(Var2) && (!func_36(Var2) || !func_256(Param0, Var2)))
	{
		return true;
	}
	return false;
}

bool func_212()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

int func_213(int iParam0, int iParam1)
{
	if (func_78(2))
	{
		return 332948762;
	}
	if (func_92())
	{
		return -1033490187;
	}
	if (!func_86(2, 255))
	{
		return 1842743312;
	}
	if (func_365(iParam0))
	{
		return -1109051462;
	}
	if (Global_1248240.f_8903.f_14 >= 1)
	{
		return 769298471;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -267458266;
	}
	if (iParam0 == iParam1)
	{
		return -1688739386;
	}
	if (GANG::_0x3F59FE6F37869576(iParam1, iParam0))
	{
		return -1435119901;
	}
	if (BUILTIN::VDIST(func_216(iParam0), func_216(iParam1)) > (Global_1901947.f_166.f_23 * Global_1139381.f_4778))
	{
		return -619167961;
	}
	return -605318450;
}

int func_214(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar10;
	int iVar11;
	char* sVar12;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_366(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_367(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_368(iParam1, iParam2, 0);
						return 1;
					}
					func_369(iParam1, iParam2, iVar1);
					func_368(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_370(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_368(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_368(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_368(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_370(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_368(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_IS_STRING_SPACE(sVar12))
					{
						return 3;
					}
					func_368(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_370(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_368(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_215(int iParam0, int iParam1)
{
	struct<53> Var0;
	struct<7> Var53;
	char* sVar60;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = joaat("COLOR_WHITE");
	Var0.f_19 = joaat("COLOR_WHITE");
	Var0.f_23 = 300;
	Var0.f_31.f_8 = joaat("COLOR_WHITE");
	Var0.f_31.f_11 = joaat("COLOR_WHITE");
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = joaat("PLAYER_MENU");
	Var0.f_31.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_24 = 21;
	Var0.f_25 = iParam0;
	Var0.f_16 = MISC::_CREATE_VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	Var53 = { func_171(iParam0) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var53, &sVar60);
	Var0.f_17 = MISC::_CREATE_VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", sVar60);
	Var0.f_31.f_2 = MISC::_CREATE_VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	Var0.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", sVar60);
	if (iParam1 != 0)
	{
		Var0.f_31.f_6 = iParam1;
		Var0.f_31.f_7 = iParam1;
		Var0.f_31.f_21 = 0;
		Var0.f_20 = iParam1;
		Var0.f_21 = iParam1;
	}
	else
	{
		Var0.f_31.f_6 = joaat("MP_LOBBY_TEXTURES");
		Var0.f_31.f_7 = joaat("TEMP_PEDSHOT");
		Var0.f_20 = joaat("MP_LOBBY_TEXTURES");
		Var0.f_21 = joaat("TEMP_PEDSHOT");
	}
	Var0.f_31.f_17 = "HUD_Toast_Soundset";
	Var0.f_31.f_18 = "Toast_On";
	func_371(Var0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1248240.f_8903.f_8), iParam0);
	Global_1248240.f_8903.f_9[Global_1248240.f_8903.f_14 /*4*/] = iParam0;
	Global_1248240.f_8903.f_9[Global_1248240.f_8903.f_14 /*4*/].f_1 = MISC::GET_GAME_TIMER();
	Global_1248240.f_8903.f_14++;
}

Vector3 func_216(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_217(int iParam0)
{
	func_372(iParam0, 0);
	Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 = iParam0;
}

bool func_218()
{
	bool bVar0;
	int iVar1;

	iVar1 = func_228(1);
	Global_1248240.f_8903.f_4 = func_373(iVar1, &bVar0);
	if (Global_1248240.f_8903.f_4 != 1519094052)
	{
		if (bVar0)
		{
			func_221(!func_86(4, 255));
		}
		return false;
	}
	if (!func_86(1, 255))
	{
		func_87(1);
	}
	if (!func_374())
	{
		Global_1248240.f_8903.f_4 = -84140073;
		return false;
	}
	if (!func_232(joaat("BOUNTY_PLAYER"), iVar1, &(Global_1248240.f_8903.f_2), &(Global_1248240.f_8903.f_3), 1, Global_1901947.f_166.f_24))
	{
		func_221(1);
		return false;
	}
	Global_1248240.f_8903.f_4 = -888342148;
	Global_1248240.f_8903.f_100 = func_175(355060119, 0, 0);
	return true;
}

void func_219(int iParam0)
{
	Global_1248240.f_8903.f_1 = iParam0;
}

bool func_220(int iParam0)
{
	return Global_1248240.f_8903.f_16[iParam0 /*8*/].f_7 != -1307093097;
}

void func_221(bool bParam0)
{
	if (Global_1257541.f_8852.f_2 != 0)
	{
		Global_1257541.f_8852.f_2 = 0;
	}
	if (bParam0)
	{
		if (func_86(1, 255))
		{
			func_88(1);
		}
	}
}

void func_222()
{
	struct<19> Var0;
	var uVar19;
	int iVar20;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_4 = 108;
	iVar20 = 0;
	while (iVar20 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar20)))
		{
		}
		else if (func_375(iVar20) == PLAYER::PLAYER_ID())
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar19, iVar20);
		}
		iVar20++;
	}
	if (SCRIPTS::_0x179A6F0EE2E79026(&uVar19))
	{
		func_376(Var0, uVar19, 0, 0);
	}
}

int func_223(int iParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_349(&Var1, iParam0) && func_377(&Var1, uParam1))
	{
		func_351(Var1, -1775150615, &uVar0, 0);
	}
	return uVar0;
}

int func_224(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	vector3 vVar8;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 89)
	{
		return 11;
	}
	if (!func_12())
	{
		return 2;
	}
	iVar1 = func_163(iParam0);
	iVar2 = func_378(iVar1, iParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_379(iParam0, iVar2, bParam8, &bVar3))
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
	if (func_380(iVar1, iParam1))
	{
		vVar4 = { func_381(iVar1, iParam1) };
		iVar7 = func_382(iVar1, iVar2);
		if (!func_383(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_384(iParam2) == -1)
	{
		return 6;
	}
	if (bParam9 >= 0f && !func_385(vParam3))
	{
		vVar8 = { func_322(iParam0, iVar2) };
		if (BUILTIN::VDIST(vParam3, vVar8) > bParam9)
		{
			return 12;
		}
	}
	if (func_386(iParam2))
	{
		iVar11 = func_387(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		if (!func_120(iVar11))
		{
			return 13;
		}
		if (func_388(iVar11))
		{
			return 14;
		}
	}
	if (func_389(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != joaat("INTRO_MISSION") && func_211(func_210(), func_210(), 0, bParam7))
		{
			return 3;
		}
		bVar12 = false;
		if (!bVar12)
		{
			iVar13 = func_316(iParam0, iVar2);
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
			{
				return 8;
			}
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar13))
			{
				return 7;
			}
			iVar14 = func_317(iParam0, iVar2);
			if (iVar14 != 0)
			{
				if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar14))
				{
					return 10;
				}
				if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar14))
				{
					return 9;
				}
			}
		}
	}
	return 0;
}

bool func_225(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_390(Global_1298536[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

void func_226(var uParam0, int iParam1, int iParam2)
{
	struct<22> Var0;

	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_391(&Var0, uParam0, iParam1, iParam2, -1);
	func_392(&Var0);
}

var func_227()
{
	return Global_1939161.f_4;
}

int func_228(bool bParam0)
{
	struct<7> Var0;
	int iVar7;
	int iVar9;

	Var0 = { func_171(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var0, &iVar7);
	iVar9 = iVar7;
	if (bParam0)
	{
		if (iVar9 >= BOUNTY::_0xF8BCC5ECA33AC9C1())
		{
			return joaat("VERY_HIGH");
		}
		return 0;
	}
	if (iVar9 >= Global_1901947.f_166.f_4)
	{
		return joaat("HIGH");
	}
	else if (iVar9 >= Global_1901947.f_166.f_3)
	{
		return joaat("MEDIUM");
	}
	else if (iVar9 >= Global_1901947.f_166.f_2)
	{
		return joaat("LOW");
	}
	return 0;
}

int func_229(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_393(iParam0, uParam3);
	if (iVar0 != 1519094052)
	{
		return iVar0;
	}
	if (Global_1257541.f_8852 == 0)
	{
		func_116(0, 0, 0);
	}
	if (Global_1257541.f_8852.f_1 != 0 && Global_1296859.f_21 > Global_1257541.f_8852.f_1)
	{
		func_270(2, 1);
		Global_1257541.f_8852.f_1 = 0;
	}
	if ((((func_394(iParam0) && !func_395(2)) && iParam1 != iParam2) && iParam1 != -1) && iParam2 != -1)
	{
		return 1519094052;
	}
	if (Global_1296859.f_21 > Global_1257541.f_8852)
	{
		return 1519094052;
	}
	else
	{
		return 1918714710;
	}
	return -919889546;
}

void func_230()
{
	if (func_395(2))
	{
		return;
	}
	if (Global_1257541.f_8852 != 0 || Global_1257541.f_8852.f_6 != -1)
	{
		Global_1257541.f_8852 = 0;
		Global_1257541.f_8852.f_6 = -1;
	}
}

bool func_231(int iParam0)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= func_396(iParam0);
}

bool func_232(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, float fParam5)
{
	int iVar0[55];
	int iVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	vector3 vVar60;
	vector3 vVar63;
	bool bVar66;
	bool bVar67;
	float fVar68;

	*uParam2 = func_397(iParam0);
	if (*uParam2 == -1)
	{
		return false;
	}
	iVar56 = func_398(func_163(*uParam2));
	vVar63 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
	fVar68 = 32000f;
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((func_399(func_163(*uParam2), iVar58) == iParam1 && func_400(*uParam2, iVar58, -1) == -1) && func_224(*uParam2, func_316(*uParam2, iVar58), iParam0, vVar63, 1, 0, 0, -1082130432 /* Float: -1f */) == 0)
		{
			if (bParam4)
			{
				vVar60 = { func_401(func_163(*uParam2), iVar58, &bVar66) };
				if (bVar66)
				{
					if (func_385(vVar60))
					{
						if (iVar57 == 0)
						{
							iVar57++;
						}
						iVar0[iVar57] = iVar58;
						iVar57++;
					}
					else
					{
						fVar59 = BUILTIN::VDIST(vVar60, vVar63);
						if (fParam5 != -1f && fVar59 > fParam5)
						{
						}
						else
						{
							if (fVar59 < fVar68)
							{
								if (iVar57 == 0)
								{
									iVar57++;
								}
								fVar68 = fVar59;
								iVar0[0] = iVar58;
								bVar67 = true;
							}
							Jump @308; //curOff = 291
							iVar0[iVar57] = iVar58;
							iVar57++;
						}
						iVar58++;
						if (iVar57 > 0)
						{
							if (bParam4)
							{
								if (bVar67)
								{
									*iParam3 = iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(1, iVar57)];
								}
								else
								{
									return false;
								}
							}
							else
							{
								*iParam3 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar57)];
							}
						}
						else
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
}

void func_233()
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_96(joaat("MP_FETCH_LAST_STARTED_BUSINESS_RAID_TYPE")) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	Global_1248240.f_9026.f_2 = uVar0;
}

bool func_234(int iParam0)
{
	int iVar0;

	if (!func_170(255))
	{
		return false;
	}
	if (func_207(255))
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (func_209(65536, PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_402(Global_35))
	{
		return false;
	}
	if (func_208(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
	{
		return false;
	}
	if (func_403())
	{
		return false;
	}
	if (func_211(func_210(), func_210(), 0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1237665[iVar0 /*27*/].f_13 == Global_1296859.f_15)
		{
			return false;
		}
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_404())
			{
				return false;
			}
			break;
		case 1:
			if (!func_405())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_235(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_236()
{
	int iVar0;

	iVar0 = Global_1901947.f_166.f_38;
	if (func_407(-735397297, func_406(1), 1784584921, 1, 0, 0) >= Global_1901947.f_166.f_49)
	{
		iVar0 = (iVar0 + Global_1901947.f_166.f_45);
	}
	if (Global_1248240.f_9026.f_2 == 0)
	{
		iVar0 = (iVar0 - Global_1901947.f_166.f_37);
	}
	return iVar0;
}

int func_237()
{
	int iVar0;

	iVar0 = Global_1901947.f_166.f_39;
	if ((func_407(-545779394, func_406(1), 1784584921, 1, 0, 0) > Global_1901947.f_166.f_41 || func_407(1532695640, func_406(1), 1784584921, 1, 0, 0) > Global_1901947.f_166.f_41) || func_407(1847740267, func_406(1), 1784584921, 1, 0, 0) > Global_1901947.f_166.f_41)
	{
		iVar0 = (iVar0 + Global_1901947.f_166.f_45);
	}
	if (Global_1248240.f_9026.f_2 == 1)
	{
		iVar0 = (iVar0 - Global_1901947.f_166.f_37);
	}
	return iVar0;
}

int func_238(int iParam0)
{
	return Global_1248240.f_9026.f_3[iParam0];
}

bool func_239()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_408();
}

bool func_240()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_409();
}

void func_241(int iParam0)
{
	if (func_410(iParam0))
	{
		func_411(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);
	}
}

Vector3 func_242(int iParam0)
{
	return Global_1298378.f_6.f_1[iParam0 /*3*/];
}

int func_243(int iParam0, int iParam1, var uParam2, int iParam3, vector3 vParam4, bool bParam7, bool bParam8)
{
	int iVar0[55];
	int iVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	vector3 vVar60;
	bool bVar63;
	bool bVar64;
	bool bVar65;

	*uParam2 = func_397(iParam0);
	if (*uParam2 == -1)
	{
		return 0;
	}
	iVar56 = func_398(func_163(*uParam2));
	bVar65 = 32000f;
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((func_399(func_163(*uParam2), iVar58) == iParam1 && func_400(*uParam2, iVar58, -1) == -1) && func_224(*uParam2, func_316(*uParam2, iVar58), iParam0, vParam4, 1, 0, 0, bParam8) == 0)
		{
			if (bParam7)
			{
				vVar60 = { func_401(func_163(*uParam2), iVar58, &bVar63) };
				if (bVar63)
				{
					if (func_385(vVar60))
					{
						if (iVar57 == 0)
						{
							iVar57++;
						}
						iVar0[iVar57] = iVar58;
						iVar57++;
					}
					else
					{
						bVar59 = BUILTIN::VDIST(vVar60, vParam4);
						if (bParam8 != -1f && bVar59 > bParam8)
						{
						}
						else
						{
							if (bVar59 < bVar65)
							{
								if (iVar57 == 0)
								{
									iVar57++;
								}
								bVar65 = bVar59;
								iVar0[0] = iVar58;
								bVar64 = true;
							}
							Jump @287; //curOff = 270
							iVar0[iVar57] = iVar58;
							iVar57++;
						}
						iVar58++;
						if (iVar57 > 0)
						{
							if (bParam7)
							{
								if (bVar64)
								{
									*iParam3 = iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(1, iVar57)];
								}
								else
								{
									return 0;
								}
							}
							else
							{
								*iParam3 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar57)];
							}
						}
						else
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
}

bool func_244(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1139381.f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1139381.f_3876.f_706.f_1 = 0;
	Global_1139381.f_3876.f_706.f_2 = 1613014828;
	Global_1139381.f_3876.f_706.f_3 = iParam0;
	Global_1139381.f_3876.f_706.f_4 = 0;
	if (!DATAFILE::_0x603AC35FD4602C76(Global_1139381.f_3876.f_706))
	{
		Global_1139381.f_3876.f_706 = Global_1139381.f_2;
	}
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1139381.f_3876.f_706)))
	{
		return false;
	}
	Global_1139381.f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_412(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1139381.f_3876.f_706.f_4 = iVar1;
				Global_1139381.f_3876.f_706.f_2 = -239316549;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1139381.f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_413(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1139381.f_3876.f_706.f_2 = 1242520881;
					if (DATAFILE::_DATAFILE_GET_BOOL(&bVar3, &(Global_1139381.f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					Global_1139381.f_3876.f_2[func_414(iVar2, 1) /*4*/].f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

int func_245(struct<2> Param0)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = func_415(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

void func_246(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_247()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_250(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_251(struct<2> Param0)
{
	return func_416(Param0);
}

int func_252(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_21())
	{
		return 0;
	}
	if (!func_417())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_418(&Global_0, 8);
	}
	func_418(&Global_0, 1);
	return 1;
}

void func_253(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_419(func_262(Param0));
	iVar1 = func_251(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_17() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_420(Param0, &Var2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	STATS::_0xD5910ECF81A2278C(iVar0, iVar1, iParam2, &Var2);
}

void func_254(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_421(Param0);
	}
	else
	{
		func_422(Param0, iParam2);
	}
	func_423();
}

struct<2> func_255(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_256(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_257(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_424(&Global_1940258, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_425(&Global_1940258, 8388608);
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

void func_258(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_426(iVar0, 1);
		if ((iVar1 == joaat("CRIME_MURDER_PLAYER") || iVar1 == joaat("CRIME_MURDER_PLAYER_HORSE")) || iVar1 == joaat("CRIME_TRAMPLE_PLAYER"))
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_427(cVar2);
			}
			else
			{
				func_428();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_259(bool bParam0)
{
	if (!bParam0 && func_429(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_260(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_261(struct<2> Param0)
{
	return func_431(func_430(Param0));
}

int func_262(var uParam0, var uParam1)
{
	return uParam0;
}

int func_263(struct<2> Param0)
{
	int iVar0;

	if (Global_1196205.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205.f_129)
	{
		if (func_256(Global_1196205[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_264(int iParam0, var uParam1)
{
	func_432(uParam1, iParam0);
	if (Global_1196205.f_129 > 0)
	{
		if (Global_1196205.f_130 == iParam0)
		{
			func_433(0);
		}
	}
	func_434();
}

bool func_265(bool bParam0)
{
	struct<7> Var0;
	int iVar7;
	int iVar9;
	int iVar10;
	int iVar11;

	if (bParam0)
	{
		return false;
	}
	Var0 = { func_171(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var0, &iVar7);
	if (iVar7 < Global_1901947.f_166.f_2)
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 <= 32)
	{
		iVar11 = PLAYER::INT_TO_PLAYERINDEX(iVar9);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar11) && GANG::_0x81FB74C83C2ED69F(iVar11))
		{
			if (iVar11 == PLAYER::PLAYER_ID())
			{
				iVar10++;
			}
			else
			{
				Var0 = { func_171(iVar11) };
				BOUNTY::_0x4EF23E04A0C8FF51(&Var0, &iVar7);
				if (iVar7 >= Global_1901947.f_166.f_2)
				{
					iVar10++;
				}
			}
		}
		iVar9++;
	}
	return iVar10 > 1;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901947.f_166.f_14;
		case joaat("MEDIUM"):
			return Global_1901947.f_166.f_15;
		case joaat("HIGH"):
			return Global_1901947.f_166.f_16;
		case joaat("VERY_HIGH"):
			return Global_1901947.f_166.f_17;
		default:
			break;
	}
	return 0;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901947.f_166.f_10;
		case joaat("MEDIUM"):
			return Global_1901947.f_166.f_11;
		case joaat("HIGH"):
			return Global_1901947.f_166.f_12;
		case joaat("VERY_HIGH"):
			return Global_1901947.f_166.f_13;
		default:
			break;
	}
	return 0;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901947.f_166.f_6;
		case joaat("MEDIUM"):
			return Global_1901947.f_166.f_7;
		case joaat("HIGH"):
			return Global_1901947.f_166.f_8;
		case joaat("VERY_HIGH"):
			return Global_1901947.f_166.f_9;
		default:
			break;
	}
	return 0;
}

void func_269(int iParam0, bool bParam1)
{
	if (!func_395(iParam0))
	{
		if (bParam1)
		{
		}
		func_139(&(Global_1257541.f_8862), iParam0);
	}
}

void func_270(int iParam0, bool bParam1)
{
	if (func_395(iParam0))
	{
		if (bParam1)
		{
		}
		func_140(&(Global_1257541.f_8862), iParam0);
	}
}

bool func_271(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MOONSHINE_RAID"):
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
			return true;
		default:
			break;
	}
	return false;
}

void func_272(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!func_417())
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	Var0 = { func_435(iParam0) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1296859.f_21;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_273(int iParam0)
{
	switch (iParam0)
	{
		case -1086711901:
		case -697789102:
		case 195932838:
			return true;
	}
	return false;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("BOUNTY_PLAYER"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("DYNAMIC"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return 1;
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("HIDEOUT"):
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_275(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_276()
{
	return func_436(func_255(0));
}

bool func_277(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_SESSION())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return false;
			}
			if (!Global_1051215.f_1[iVar0])
			{
				return false;
			}
		}
	}
	return true;
}

int func_278(int iParam0)
{
	int iVar0;

	if (Global_1237665[iParam0 /*27*/].f_2 == -1 || Global_1237665[iParam0 /*27*/].f_2 == 3)
	{
		return -1;
	}
	iVar0 = func_303(Global_1237665[iParam0 /*27*/]);
	if (func_74(iVar0) && !func_141(iParam0, 131072))
	{
		return 1;
	}
	return 0;
}

bool func_279(int iParam0, var uParam1)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	int iVar26;

	if (!func_304(Global_1248240[iParam0 /*683*/].f_559))
	{
		return true;
	}
	if (!func_437(iParam0, uParam1))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	iVar25 = func_438(func_303(Global_1237665[iParam0 /*27*/]));
	func_439(iParam0, &Var0);
	iVar26 = func_440(&Var0);
	if (func_441(iVar26))
	{
		Var10 = { func_442(iVar26) };
		if (Var10 == iVar25)
		{
			Global_1237665[iParam0 /*27*/].f_4 = iVar26;
			return true;
		}
		else
		{
			*uParam1 = 1;
			return true;
		}
	}
	return false;
}

bool func_280(int iParam0)
{
	return iParam0 != 0;
}

bool func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_282(int iParam0, struct<2> Param1, bool bParam3)
{
	struct<28> Var0;
	var uVar31;

	if (!Global_1901947.f_308.f_23)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!GANG::_0x93A91A351A07360E(iParam0))
	{
		return 0;
	}
	if (!func_36(Param1))
	{
		return 0;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = iParam0;
	Var0.f_4 = 12;
	Var0.f_7 = { Param1 };
	if (bParam3)
	{
		Var0.f_14 |= 2;
	}
	uVar31 = func_443(iParam0);
	if (SCRIPTS::COUNT_PLAYER_BITS(&uVar31) <= 0)
	{
		return 0;
	}
	func_444(&Var0, uVar31);
	Var0.f_4 = 13;
	func_445(&Var0);
	return 1;
}

void func_283(var uParam0)
{
	*uParam0 = 0;
}

bool func_284(int iParam0, int iParam1, bool bParam2)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	if (bParam2)
	{
		return func_62(Global_1248240[iParam0 /*683*/].f_558, iParam1);
	}
	return func_62(Global_1248240[iParam0 /*683*/].f_557, iParam1);
}

void func_285(int iParam0)
{
	int iVar0;

	iVar0 = func_446(Global_1237665[iParam0 /*27*/], Global_1237665[iParam0 /*27*/].f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_447(iVar0);
}

void func_286(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_141(iParam0, iParam1))
	{
		func_139(&(Global_1237665[iParam0 /*27*/].f_3), iParam1);
	}
}

bool func_287(int iParam0)
{
	if ((!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_fetch", iParam0, false, 0) && func_448(iParam0, 1048576)) && func_448(iParam0, 512))
	{
		if (!func_280(Global_1248240[iParam0 /*683*/].f_593))
		{
			func_168(&(Global_1248240[iParam0 /*683*/].f_593));
		}
		else if (func_169(Global_1248240[iParam0 /*683*/].f_593) > 4000)
		{
			return true;
		}
	}
	if (func_284(iParam0, 8388608, 0))
	{
		return true;
	}
	else if ((Global_1248240[iParam0 /*683*/].f_559 != joaat("INTRO_MISSION") && (!func_74(Global_1248240[iParam0 /*683*/].f_559) || func_141(iParam0, 131072))) && !func_449(iParam0))
	{
		return true;
	}
	else if (func_74(Global_1248240[iParam0 /*683*/].f_559) && func_450(iParam0))
	{
		return true;
	}
	else if (func_141(iParam0, 32) && !func_284(iParam0, 32, 0))
	{
		func_286(iParam0, 33554432);
		return true;
	}
	return false;
}

bool func_288(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && Global_1238240[iVar0 /*303*/][iParam0 /*23*/].f_22 != -1)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_289(int iParam0)
{
	int iVar0;
	struct<27> Var1;

	if (Global_1237665.f_574 == 0)
	{
	}
	else
	{
		Global_1237665.f_574 = (Global_1237665.f_574 - 1);
	}
	if (func_304(func_303(Global_1237665[iParam0 /*27*/])))
	{
		func_451(iParam0);
	}
	iVar0 = func_452(iParam0);
	if (iVar0 != -1)
	{
		func_453(iVar0);
	}
	Global_1237665[iParam0 /*27*/].f_2 = -1;
	func_126(iParam0);
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_9 = -1;
	Var1.f_15 = 255;
	Var1.f_16 = 255;
	Var1.f_17 = 255;
	Var1.f_21.f_1 = -1;
	Global_1237665[iParam0 /*27*/] = { Var1 };
}

struct<40> func_290(var uParam0, int iParam1)
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
	if (!func_454(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { uParam0->f_3[iParam1 /*40*/] };
	uParam0->f_3[iParam1 /*40*/] = { Var0 };
	return Var40;
}

void func_291(var uParam0, int iParam1)
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
			if (uParam0->f_3[iVar3 /*40*/] != -1)
			{
			}
			else
			{
				if (uParam0->f_3[iVar3 /*40*/].f_4 != -1)
				{
					func_290(uParam0, iVar3);
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
			if (uParam0->f_3[iVar4 /*40*/] != -1)
			{
			}
			else
			{
				func_290(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

int func_292()
{
	return Global_1301323.f_150;
}

bool func_293(int iParam0)
{
	return (Global_1301323.f_288.f_2 && iParam0) != 0;
}

int func_294()
{
	return Global_1301323.f_288;
}

bool func_295()
{
	int iVar0;

	iVar0 = func_455();
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(iVar0, false);
}

void func_296(int iParam0)
{
	Global_1301323.f_288 = iParam0;
}

void func_297(int iParam0)
{
	Global_1301323.f_288.f_1 = iParam0;
}

bool func_298(int iParam0, int iParam1)
{
	return (Global_1198046.f_231.f_1066[iParam0 /*17*/].f_6 && iParam1) != 0;
}

bool func_299()
{
	if (!Global_1071686.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_18())
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1210161, false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(Global_1210161);
}

void func_300(int iParam0)
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	Var0 = -1;
	Var0.f_1 = -1;
	iVar4 = PLAYER::PLAYER_ID();
	iVar5 = func_456(iParam0);
	if (!func_457(iParam0, &Var0))
	{
		if (iVar5 < 5)
		{
			func_458(iParam0, 5);
		}
	}
	switch (iVar5)
	{
		case 1:
			break;
		case 2:
			if (!func_298(iParam0, 2))
			{
				return;
			}
			if (!func_459(iParam0))
			{
				func_460(iParam0, 0);
				return;
			}
			bVar3 = func_109(Var0);
			bVar2 = func_108(Var0);
			if (!bVar3 && !bVar2)
			{
				if (!func_461(iParam0, iVar4, 2) && !func_461(iParam0, iVar4, 3))
				{
					if (func_462(iParam0, 3) || func_463(iParam0) == Global_1296859.f_15)
					{
						func_464(iParam0);
					}
				}
			}
			else if (!func_462(iParam0, 3) && func_463(iParam0) != Global_1296859.f_15)
			{
				func_460(iParam0, 0);
			}
			break;
		case 4:
			if (!func_298(iParam0, 2))
			{
				if (func_298(iParam0, 2048))
				{
					func_465(iParam0);
				}
				return;
			}
			if (func_109(Var0))
			{
				if (func_462(iParam0, 4))
				{
					func_466(iParam0, 0, 1, 1);
					func_467(iParam0, 0, 0);
				}
				else
				{
					func_466(iParam0, 0, 1, 1);
					func_468(iParam0, 0);
				}
			}
			else if (func_108(Var0))
			{
				func_468(iParam0, 0);
			}
			else
			{
				func_469(iParam0, 6);
			}
			if (func_470(iParam0))
			{
				func_465(iParam0);
			}
			break;
		case 5:
		case 6:
			if ((!func_36(Var0) || func_461(iParam0, iVar4, 0)) || func_471(iParam0, iVar4))
			{
				func_472(iParam0);
			}
			break;
	}
}

void func_301(int iParam0, int iParam1, bool bParam2)
{
	func_473(iParam0, iParam1);
	if (!bParam2)
	{
		func_474(iParam0, iParam1);
	}
	else
	{
		func_475(iParam0, iParam1);
		func_476(iParam0, iParam1);
	}
}

void func_302(int iParam0)
{
	int iVar0;

	iVar0 = func_456(iParam0);
	if (func_477(iParam0, iVar0))
	{
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_36(func_478(iParam0)))
			{
				return;
			}
			if (func_298(iParam0, 32))
			{
				Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[0 /*4*/].f_1 = iParam0;
			}
			if (Global_1198046.f_231.f_1066[iParam0 /*17*/].f_5 != 255)
			{
				func_479(iParam0, Global_1198046.f_231.f_1066[iParam0 /*17*/].f_5);
				func_458(iParam0, 2);
			}
			else
			{
				func_458(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_480(iParam0) != 255)
			{
				func_458(iParam0, 2);
				return;
			}
			if (func_481(iParam0, 3))
			{
				func_458(iParam0, 2);
				return;
			}
			if (func_482(iParam0))
			{
				func_458(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_480(iParam0) == 255 && !func_481(iParam0, 3))
			{
				func_458(iParam0, 4);
				return;
			}
			if (func_483(iParam0))
			{
				func_458(iParam0, 5);
				return;
			}
			if (func_481(iParam0, 4) || func_481(iParam0, 5))
			{
				func_458(iParam0, 3);
				return;
			}
			func_484(iParam0);
			break;
		case 3:
			if (func_485(iParam0))
			{
				return;
			}
			func_458(iParam0, 4);
			break;
		case 4:
			if (func_486(iParam0, 7))
			{
				func_458(iParam0, 5);
			}
			else
			{
				return;
			}
			func_458(iParam0, 5);
			break;
		case 5:
			if (func_486(iParam0, 7))
			{
				if (func_487(iParam0) > 1)
				{
					func_488(iParam0, 1);
				}
				func_458(iParam0, 6);
			}
			else
			{
				return;
			}
			break;
		case 6:
			break;
	}
}

int func_303(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_304(int iParam0)
{
	return false;
}

int func_305(int iParam0)
{
	int iVar0;

	iVar0 = func_489(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (func_74(Global_1248240[iParam0 /*683*/].f_559) && !func_141(iParam0, 131072))
	{
		iVar0 = func_490(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	else if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		iVar0 = func_491(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	return 1;
}

void func_306(int iParam0, int iParam1)
{
	if (func_492(iParam0, 255) != iParam1)
	{
		Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_20 = iParam1;
	}
}

void func_307(int iParam0, int iParam1)
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar4;
	bool bVar5;

	if (!func_61(iParam0))
	{
		return;
	}
	if (iParam1 != 0 && !func_40(iParam0, 128))
	{
		func_244(iParam1, 0);
		func_144(iParam0, 128);
	}
	if (func_64(iParam0, 32, 255))
	{
		return;
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	func_493(iParam0, &uVar0);
	func_494(iParam0);
	bVar1 = Global_1248240[iParam0 /*683*/].f_559 != joaat("INTRO_MISSION");
	Var2 = { Global_1248240[iParam0 /*683*/].f_584 };
	if (bVar1)
	{
		if (!func_109(Var2) && !func_108(Var2))
		{
			func_308(iParam0);
		}
	}
	func_309(iParam0, 32);
	func_144(iParam0, 16);
	iVar4 = func_110(Global_1248240[iParam0 /*683*/].f_559);
	if (iVar4 != 0)
	{
		func_495(iVar4);
	}
	if (func_386(Global_1248240[iParam0 /*683*/].f_559) && SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::PLAYER_ID()))
	{
		func_496(iParam0);
	}
	if (Global_1248240[iParam0 /*683*/].f_559 == joaat("CAMP_SELL") && !SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::PLAYER_ID()))
	{
		func_497();
	}
	if (((Global_1248240[iParam0 /*683*/].f_559 == joaat("MOONSHINE_MARKETING") || Global_1248240[iParam0 /*683*/].f_559 == joaat("MOONSHINE_SELL")) || Global_1248240[iParam0 /*683*/].f_559 == joaat("MOONSHINE_SETUP_GET_SUPPLIES")) || Global_1248240[iParam0 /*683*/].f_559 == joaat("MOONSHINE_SETUP_RESCUE_COOK"))
	{
		func_66(2, 1);
	}
	if (bVar1)
	{
		if (func_108(Var2))
		{
			return;
		}
		bVar5 = !func_498(func_163(Global_1237665[iParam0 /*27*/]), Global_1237665[iParam0 /*27*/].f_6);
		func_499(Var2, 1, bVar5, 0);
		func_500(Global_1248240[iParam0 /*683*/].f_584, 1, 0, -1);
		if (Global_1248240[iParam0 /*683*/].f_559 == joaat("HIDEOUT"))
		{
			func_501(4);
		}
	}
}

void func_308(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!func_61(iParam0))
	{
		return;
	}
	if (Global_1248240[iParam0 /*683*/].f_559 == joaat("INTRO_MISSION"))
	{
		return;
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { Global_1248240[iParam0 /*683*/].f_584 };
	if (func_108(Var0))
	{
		return;
	}
	if (func_109(Var0))
	{
		return;
	}
	func_502(Var0);
	if (!func_281(Global_1248240[iParam0 /*683*/].f_559, 0))
	{
		iVar2 = func_503(Var0);
		if (iVar2 != -1)
		{
			func_504(iVar2);
		}
	}
}

void func_309(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_64(iParam0, iParam1, 255))
	{
		func_139(&(Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_19), iParam1);
	}
}

void func_310(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_17() != 0)
	{
		return;
	}
	if (func_505())
	{
		return;
	}
	if (PED::_0x0E2F43516F998269(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1139381.f_3876.f_2[func_414(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1139381.f_3876.f_2[func_414(iParam0, 1) /*4*/].f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1296859.f_16 != Global_1296859)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar8]))
		{
		}
		else if (!GANG::_0x9BE7DCB22D32CCBE(Global_1296859.f_15, Global_1296859.f_154[iVar8]))
		{
		}
		else if (Global_1296859.f_154[iVar8] == Global_1296859.f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, Global_1296859.f_154[iVar8]);
		}
		iVar8++;
	}
	func_506(&Var0, uVar7);
}

struct<8> func_311(int iParam0, int iParam1)
{
	char cVar0[64];

	switch (iParam1)
	{
		case 1:
			StringCopy(&cVar0, "fetch_friend", 64);
			break;
		case 2:
			StringCopy(&cVar0, "fetch_fake_friend", 64);
			break;
		case 3:
			StringCopy(&cVar0, "fetch_vip", 64);
			break;
		case 4:
			StringCopy(&cVar0, "fetch_friend_primary", 64);
			break;
		case 5:
			StringCopy(&cVar0, "fetch_friend_secondary", 64);
			break;
		case 6:
			StringCopy(&cVar0, "fetch_friend_secondary_and_inactive", 64);
			break;
		case 20:
			StringCopy(&cVar0, "fetch_friend_to_all", 64);
			break;
		case 13:
			StringCopy(&cVar0, "fetch_prisoner_vip_friendly", 64);
			break;
		case 14:
			StringCopy(&cVar0, "fetch_prisoner_vip_enemy", 64);
			break;
		case 7:
			StringCopy(&cVar0, "fetch_law_friendly_to_primary", 64);
			break;
		case 8:
			StringCopy(&cVar0, "fetch_law_friendly_to_secondary", 64);
			break;
		case 9:
			StringCopy(&cVar0, "fetch_law_friendly_to_secondary_none_to_inactive", 64);
			break;
		case 10:
			StringCopy(&cVar0, "fetch_law_hate_secondary_pvp_active", 64);
			break;
		case 11:
			StringCopy(&cVar0, "fetch_enemy_team_1", 64);
			break;
		case 12:
			StringCopy(&cVar0, "fetch_enemy_team_2", 64);
			break;
		case 15:
			StringCopy(&cVar0, "fetch_enemy_vip_killer", 64);
			break;
		case 16:
			StringCopy(&cVar0, "fetch_enemy_to_active_players", 64);
			break;
		case 17:
			StringCopy(&cVar0, "fetch_enemy_to_active_players_likes_inactive_aggro", 64);
			break;
		case 18:
			StringCopy(&cVar0, "fetch_hate_secondary_pvp_active", 64);
			break;
		case 19:
			StringCopy(&cVar0, "fetch_hate_secondary_pvp_active_dislike_inactive", 64);
			break;
		case 21:
			StringCopy(&cVar0, "fetch_objective_draft_horse", 64);
			break;
		case 22:
			StringCopy(&cVar0, "fetch_hostile_animal", 64);
			break;
	}
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam0, 64);
	return cVar0;
}

void func_312(int iParam0, int iParam1, int iParam2)
{
	if (!func_507(iParam1))
	{
		return;
	}
	Global_1248240[iParam0 /*683*/].f_560[iParam1] = iParam2;
}

void func_313(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			break;
		case 2:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			break;
		case 3:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			break;
		case 4:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			break;
		case 5:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 3);
			break;
		case 6:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 3);
			break;
		case 7:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			break;
		case 8:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			break;
		case 9:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			break;
		case 10:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			break;
		case 11:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 6, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			break;
		case 12:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 6, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 6, iParam2, 11);
			break;
		case 13:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 0, iParam2, 8);
			func_513(iParam0, 0, iParam2, 9);
			func_513(iParam0, 0, iParam2, 10);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			break;
		case 14:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 0, iParam2, 8);
			func_513(iParam0, 0, iParam2, 9);
			func_513(iParam0, 0, iParam2, 10);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			break;
		case 15:
			func_508(0, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			func_513(iParam0, 6, iParam2, 3);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 14);
			func_513(iParam0, 0, iParam2, 7);
			func_513(iParam0, 0, iParam2, 8);
			func_513(iParam0, 0, iParam2, 9);
			func_513(iParam0, 0, iParam2, 10);
			break;
		case 16:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 6, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 14);
			break;
		case 17:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 14);
			func_513(iParam0, 2, iParam2, 16);
			break;
		case 18:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 11);
			func_513(iParam0, 6, iParam2, 12);
			break;
		case 19:
			func_508(0, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 11);
			func_513(iParam0, 6, iParam2, 12);
			func_513(iParam0, 6, iParam2, 15);
			break;
		case 20:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(2, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 2, iParam2, 13);
			func_513(iParam0, 2, iParam2, 14);
			func_513(iParam0, 2, iParam2, 16);
			func_513(iParam0, 2, iParam2, 17);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 2, iParam2, 10);
			break;
		case 21:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 2, iParam2, 13);
			func_513(iParam0, 2, iParam2, 14);
			func_513(iParam0, 2, iParam2, 16);
			func_513(iParam0, 2, iParam2, 17);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 2, iParam2, 10);
			break;
		case 22:
			func_508(6, iParam2);
			func_509(0, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(0, iParam2);
			func_513(iParam0, 6, iParam2, 11);
			func_513(iParam0, 6, iParam2, 12);
			func_513(iParam0, 0, iParam2, 1);
			func_513(iParam0, 0, iParam2, 2);
			func_513(iParam0, 6, iParam2, 3);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 14);
			func_513(iParam0, 6, iParam2, 16);
			func_513(iParam0, 6, iParam2, 17);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 6, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			break;
	}
}

var func_314(int iParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_349(&Var1, iParam0) && func_377(&Var1, uParam1))
	{
		func_351(Var1, -1303506050, &uVar0, 1);
	}
	return uVar0;
}

struct<2> func_315(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1237665[iParam0 /*27*/];
	uVar1 = Global_1237665[iParam0 /*27*/].f_6;
	return func_515(iVar0, uVar1);
}

int func_316(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_516(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

int func_317(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_516(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_1;
}

int func_318(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_349(&vVar1, iParam0) && func_377(&vVar1, iParam1))
	{
		vVar1.f_2 = -1052194144;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

var func_319(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((func_349(&Var1, iParam0) && func_377(&Var1, iParam1)) && func_517(&Var1, iParam2))
	{
		func_351(Var1, 1609846533, &uVar0, 0);
	}
	return uVar0;
}

var func_320(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((func_349(&Var1, iParam0) && func_377(&Var1, iParam1)) && func_517(&Var1, iParam2))
	{
		func_351(Var1, -1702365423, &uVar0, 0);
	}
	return uVar0;
}

var func_321(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((func_349(&Var1, iParam0) && func_377(&Var1, iParam1)) && func_517(&Var1, iParam2))
	{
		func_351(Var1, -1303506050, &uVar0, 0);
	}
	return uVar0;
}

Vector3 func_322(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_516(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

int func_323(var uParam0, var uParam1, int iParam2)
{
	return func_518(uParam1, *uParam0, uParam0->f_1, iParam2, 1);
}

int func_324(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_516(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_6;
}

Vector3 func_325(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_349(&Var3, iParam0) && func_377(&Var3, iParam1)) && func_519(&Var3, iParam2))
	{
		func_520(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

bool func_326(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, 1172354913, &uVar0, 0);
	}
	return uVar0;
}

bool func_327(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, -542588664, &uVar0, 0);
	}
	return uVar0;
}

bool func_328(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, -666510715, &uVar0, 0);
	}
	return uVar0;
}

bool func_329(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, -1530051112, &uVar0, 0);
	}
	return uVar0;
}

bool func_330(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, -1755519071, &uVar0, 0);
	}
	return uVar0;
}

bool func_331(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, 311522483, &uVar0, 0);
	}
	return uVar0;
}

bool func_332(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_350(&Var1, iParam1))
	{
		func_521(Var1, 521215940, &iVar0, 0);
	}
	return iVar0;
}

void func_333(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;

	fVar6 = 425f;
	bVar7 = func_141(iParam0, 16);
	if (!bVar7)
	{
		fVar6 = Global_1901947.f_236.f_62;
	}
	if (func_64(iParam0, 2, 255))
	{
		fVar6 = (fVar6 + 50f);
	}
	switch (Global_1248240[iParam0 /*683*/].f_559)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::PLAYER_ID()) && !func_64(iParam0, 32, 255))
			{
				if (!bVar7 || func_40(iParam0, 4096))
				{
					iVar1 = 1;
				}
				bVar0 = true;
				iVar2 = 1;
			}
			break;
		case joaat("CAMP_RAID"):
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::PLAYER_ID()) && !func_64(iParam0, 32, 255))
			{
				bVar0 = true;
				iVar5 = 1;
			}
			break;
		case joaat("DYNAMIC"):
			bVar0 = true;
			iVar2 = 1;
			if (!func_141(iParam0, 131072))
			{
				iVar1 = 1;
				bVar4 = true;
			}
			break;
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("HIDEOUT"):
			bVar0 = true;
			iVar1 = 1;
			bVar4 = true;
			fVar6 = (Global_1901947.f_236.f_62 + 50f);
			break;
		case joaat("BOUNTY_PLAYER"):
			if ((!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::PLAYER_ID()) && !func_64(iParam0, 32, 255)) && !func_86(4, 255))
			{
				bVar0 = true;
				iVar3 = 1;
			}
			break;
	}
	if (bVar0)
	{
		Global_1248240[iParam0 /*683*/].f_586 = fVar6;
		func_144(iParam0, 524288);
		if (func_522(iParam0, 255, 0, 0) && func_40(iParam0, 512))
		{
			bVar8 = true;
		}
		if (!bVar8 && !func_523(iParam0, fVar6, iVar1, iVar2, iVar3, bVar4, iVar5))
		{
			func_309(iParam0, 1024);
		}
		else
		{
			func_112(iParam0, 1024);
		}
		func_309(iParam0, 512);
	}
	else
	{
		func_106(iParam0, 524288);
		func_112(iParam0, 1024);
		func_309(iParam0, 512);
	}
}

void func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_524(iParam0);
	if (iVar0 == 0)
	{
		func_525(iParam0);
	}
	else
	{
		iVar1 = Global_1248240[iParam0 /*683*/].f_590;
		if (iVar1 == -1)
		{
			iVar1 = func_526(iVar0);
		}
		if (iVar1 != -1)
		{
			if (Global_1248240[iParam0 /*683*/].f_590 != iVar1)
			{
				if (Global_1248240[iParam0 /*683*/].f_590 == -1)
				{
					func_112(iParam0, 2);
				}
				Global_1248240[iParam0 /*683*/].f_590 = iVar1;
			}
			if (Global_1248240.f_8880[iVar1 /*4*/] != -1 && Global_1248240.f_8880[iVar1 /*4*/] != iParam0)
			{
				func_527(iVar1, iParam0);
				return;
			}
			if (Global_1248240.f_8880[iVar1 /*4*/].f_1 != -1 && Global_1248240.f_8880[iVar1 /*4*/].f_1 != iParam0)
			{
				func_525(iParam0);
				return;
			}
			func_528(iVar1, iParam0, iParam0);
			func_529(iVar1, iParam0, iVar0);
			if (func_530(iParam0, iVar1, &bVar2))
			{
				if (bVar2)
				{
					func_309(iParam0, 1048576);
				}
				func_309(iParam0, 2);
			}
		}
		else
		{
			func_525(iParam0);
		}
	}
}

void func_335(struct<2> Param0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	if (!func_256(Param0, func_363()))
	{
		return;
	}
	iVar0 = func_531(iVar1);
	if (!func_532(iVar0))
	{
		return;
	}
	func_533(iVar0);
	if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (func_534(1) && func_535(iVar0, 1))
		{
			func_536();
		}
		if (func_534(0) && NETWORK::_NETWORK_SESSION_GET_FLAGS() & 9 != 0)
		{
			func_537();
		}
	}
}

void func_336(int iParam0)
{
	if (Global_1248240[iParam0 /*683*/].f_559 != joaat("BOUNTY_BOARD"))
	{
		return;
	}
	if (!func_64(iParam0, 4096, 255) && !func_141(iParam0, 4096))
	{
		return;
	}
	if (!func_64(iParam0, 32, 255))
	{
		return;
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	func_538(iParam0);
}

bool func_337(int iParam0)
{
	if (!func_33(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_338(int iParam0)
{
	func_539(&(Global_1132288.f_2040), iParam0);
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SHOP_BLK_GENERAL_STORE"):
			return 6;
		case joaat("SHOP_BLK_GUNSMITH"):
			return 7;
		case joaat("SHOP_BLK_BARBER"):
			return 8;
		case joaat("SHOP_BLK_TAILOR"):
			return 19;
		case joaat("SHOP_BLK_HORSE_SHOP"):
			return 13;
		case joaat("SHOP_BLK_POST_OFFICE"):
			return 14;
		case joaat("SHOP_BLK_TRAIN_STATION"):
			return 15;
		case joaat("SHOP_BLK_PHOTO_STUDIO"):
			return 12;
		case joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN"):
			return 122;
		case joaat("SHOP_BLK_COACH"):
			return 123;
		case joaat("SHOP_BLK_BANK"):
			return 5;
		case joaat("SHOP_BLK_BUTCHER"):
			return 9;
		case joaat("SHOP_BLK_BARTENDER"):
			return 10;
		case joaat("SHOP_BLK_PIANIST"):
			return 11;
		case joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST"):
			return 16;
		case joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND"):
			return 17;
		case joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD"):
			return 18;
		case joaat("SHOP_BUT_MUSICIAN_BANJO"):
			return 132;
		case joaat("SHOP_EMR_GENERAL_STORE"):
			return 23;
		case joaat("SHOP_EMR_POST_OFFICE"):
			return 24;
		case joaat("SHOP_EMR_TRAIN_STATION"):
			return 25;
		case joaat("SHOP_EMR_FENCE"):
			return 22;
		case joaat("SHOP_LAG_BAIT_STORE"):
			return 26;
		case joaat("SHOP_SDN_BANK"):
			return 42;
		case joaat("SHOP_SDN_BARBER"):
			return 43;
		case joaat("SHOP_SDN_BUTCHER"):
			return 44;
		case joaat("SHOP_SDN_DOCTOR"):
			return 45;
		case joaat("SHOP_SDN_FENCE"):
			return 46;
		case joaat("SHOP_SDN_GENERAL_STORE"):
			return 48;
		case joaat("SHOP_SDN_GUNSMITH"):
			return 49;
		case joaat("SHOP_SDN_HORSE_SHOP"):
			return 50;
		case joaat("SHOP_SDN_POST_OFFICE"):
			return 51;
		case joaat("SHOP_SDN_TRAIN_STATION"):
			return 52;
		case joaat("SHOP_SDN_TAILOR"):
			return 53;
		case joaat("SHOP_SDN_TRAPPER"):
			return 63;
		case joaat("SHOP_SDN_BARTENDER_SLUM"):
			return 56;
		case joaat("SHOP_SDN_PIANIST"):
			return 55;
		case joaat("SHOP_SDN_PHOTO_STUDIO"):
			return 60;
		case joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN"):
			return 124;
		case joaat("SHOP_SDN_COACH"):
			return 125;
		case joaat("SHOP_SDN_BARTENDER"):
			return 54;
		case joaat("SHOP_SDN_PIANIST_SLUM"):
			return 57;
		case joaat("SHOP_SDN_MUSICIAN_BANJO"):
			return 59;
		case joaat("SHOP_SDN_MUSICIAN_GUITARIST"):
			return 58;
		case joaat("SHOP_SDN_THEATER_MP"):
			return 61;
		case joaat("SHOP_SDN_THEATER_MAGIC_MP"):
			return 62;
		case joaat("SHOP_RGG_POST_OFFICE"):
			return 27;
		case joaat("SHOP_RGG_TRAIN_STATION"):
			return 28;
		case joaat("SHOP_RHO_GENERAL_STORE"):
			return 33;
		case joaat("SHOP_RHO_FENCE"):
			return 31;
		case joaat("SHOP_RHO_GUNSMITH"):
			return 34;
		case joaat("SHOP_RHO_POST_OFFICE"):
			return 35;
		case joaat("SHOP_RHO_BUTCHER"):
			return 30;
		case joaat("SHOP_RHO_TRAIN_STATION"):
			return 39;
		case joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN"):
			return 126;
		case joaat("SHOP_RHO_BANK"):
			return 29;
		case joaat("SHOP_RHO_BARTENDER"):
			return 36;
		case joaat("SHOP_RHO_PIANIST"):
			return 37;
		case joaat("SHOP_RHO_MUSICIAN_BANJO"):
			return 38;
		case joaat("SHOP_STR_BUTCHER"):
			return 68;
		case joaat("SHOP_STR_GENERAL_STORE"):
			return 69;
		case joaat("SHOP_STR_WELCOME_CENTER"):
			return 70;
		case joaat("SHOP_STR_HORSE_SHOP"):
			return 71;
		case joaat("SHOP_STR_POST_OFFICE"):
			return 74;
		case joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN"):
			return 127;
		case joaat("SHOP_STR_BARTENDER"):
			return 75;
		case joaat("SHOP_STR_MUSICIAN_BANJO"):
			return 72;
		case joaat("SHOP_STR_MUSICIAN_GUITARIST"):
			return 73;
		case joaat("SHOP_VAL_DOCTOR"):
			return 83;
		case joaat("SHOP_VAL_GENERAL_STORE"):
			return 84;
		case joaat("SHOP_VAL_GUNSMITH"):
			return 85;
		case joaat("SHOP_VAL_BARBER"):
			return 78;
		case joaat("SHOP_VAL_POST_OFFICE"):
			return 87;
		case joaat("SHOP_VAL_HORSE_SHOP"):
			return 86;
		case joaat("SHOP_VAL_BARTENDER_KEANE"):
			return 81;
		case joaat("SHOP_VAL_BARTENDER_SLUM"):
			return 91;
		case joaat("SHOP_VAL_BUTCHER"):
			return 82;
		case joaat("SHOP_VAL_HOTEL"):
			return 90;
		case joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN"):
			return 120;
		case joaat("SHOP_VAL_COACH"):
			return 121;
		case joaat("SHOP_VAL_TRAIN_STATION"):
			return 88;
		case joaat("SHOP_VAL_BARTENDER"):
			return 79;
		case joaat("SHOP_VAL_PIANIST"):
			return 80;
		case joaat("SHOP_VAL_BANK"):
			return 77;
		case joaat("SHOP_VAL_THEATER_MAGIC_MP"):
			return 89;
		case joaat("SHOP_SCM_HORSE_SHOP"):
			return 41;
		case joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN"):
			return 129;
		case joaat("SHOP_ASB_GUNSMITH"):
			return 0;
		case joaat("SHOP_ASB_POST_OFFICE"):
			return 1;
		case joaat("SHOP_ASB_TRAIN_STATION"):
			return 2;
		case joaat("SHOP_VAN_POST_OFFICE"):
			return 98;
		case joaat("SHOP_VAN_TRAIN_STATION"):
			return 97;
		case joaat("SHOP_VAN_FENCE"):
			return 93;
		case joaat("SHOP_VAN_HORSE_SHOP"):
			return 96;
		case joaat("SHOP_VAN_BARTENDER"):
			return 94;
		case joaat("SHOP_VAN_PIANIST"):
			return 95;
		case joaat("SHOP_VAN_COACH"):
			return 128;
		case joaat("SHOP_WAL_POST_OFFICE"):
			return 101;
		case joaat("SHOP_WAL_GENERAL_STORE"):
			return 99;
		case joaat("SHOP_WAL_TRAIN_STATION"):
			return 100;
		case joaat("SHOP_DYNAMIC"):
			return 119;
		case joaat("SHOP_WILDERNESS_SUPPLIES"):
			return 133;
		case joaat("SHOP_ANYWHERE_HANDHELD"):
			return 152;
		case joaat("SHOP_WEAPON_MOD_STORE"):
			return 176;
		case joaat("SHOP_CLOTHING"):
			return 177;
		case joaat("SHOP_CAMP_SHAVING"):
			return 178;
		case joaat("SHOP_WARDROBE"):
			return 179;
		case joaat("SHOP_CAMP_LOCKBOX"):
			return 153;
		case joaat("SHOP_CAMP_TRAVELLING_SALESMAN"):
			return 147;
		case joaat("SHOP_RIO_TRAVELLING_SALESMAN"):
			return 135;
		case joaat("SHOP_CHO_TRAVELLING_SALESMAN"):
			return 136;
		case joaat("SHOP_HEN_TRAVELLING_SALESMAN"):
			return 137;
		case joaat("SHOP_TAL_TRAVELLING_SALESMAN"):
			return 138;
		case joaat("SHOP_BGV_TRAVELLING_SALESMAN"):
			return 139;
		case joaat("SHOP_HRT_E_TRAVELLING_SALESMAN"):
			return 140;
		case joaat("SHOP_HRT_W_TRAVELLING_SALESMAN"):
			return 141;
		case joaat("SHOP_GRZ_TRAVELLING_SALESMAN"):
			return 142;
		case joaat("SHOP_SCM_TRAVELLING_SALESMAN"):
			return 143;
		case joaat("SHOP_BLU_TRAVELLING_SALESMAN"):
			return 144;
		case joaat("SHOP_DER_TRAVELLING_SALESMAN"):
			return 145;
		case joaat("SHOP_BBR_TRAVELLING_SALESMAN"):
			return 146;
		case joaat("SHOP_CAMP_BUTCHERTABLE"):
			return 154;
		case -765151559:
			return 134;
		case joaat("SHOP_MOONSHINE_STILL"):
			return 20;
		case joaat("SHOP_BVH_DOCTOR"):
			return 155;
		case joaat("SHOP_BVH_GENERAL_STORE"):
			return 156;
		case joaat("SHOP_BVH_GUNSMITH"):
			return 157;
		case joaat("SHOP_BVH_HORSE_TRAINER"):
			return 158;
		case 1529797091:
			return 67;
		case joaat("SHOP_CLM_DOCTOR"):
			return 159;
		case joaat("SHOP_CLM_GENERAL_STORE"):
			return 160;
		case joaat("SHOP_CLM_GUNSMITH"):
			return 161;
		case joaat("SHOP_CLM_HORSE_TRAINER"):
			return 162;
		case 1388932648:
			return 65;
		case joaat("SHOP_HSO_DOCTOR"):
			return 164;
		case joaat("SHOP_HSO_GENERAL_STORE"):
			return 165;
		case joaat("SHOP_HSO_GUNSMITH"):
			return 166;
		case joaat("SHOP_HSO_HORSE_TRAINER"):
			return 167;
		case 878376253:
			return 64;
		case joaat("SHOP_LAK_DOCTOR"):
			return 168;
		case joaat("SHOP_LAK_GENERAL_STORE"):
			return 169;
		case joaat("SHOP_LAK_GUNSMITH"):
			return 170;
		case joaat("SHOP_LAK_HORSE_TRAINER"):
			return 171;
		case joaat("SHOP_SHB_DOCTOR"):
			return 172;
		case joaat("SHOP_SHB_GENERAL_STORE"):
			return 173;
		case joaat("SHOP_SHB_GUNSMITH"):
			return 174;
		case joaat("SHOP_SHB_HORSE_TRAINER"):
			return 175;
		case -2076086367:
			return 66;
		case joaat("SHOP_CLM_HORSE_FENCE"):
			return 163;
		case joaat("SHOP_AMD_GENERAL_STORE"):
			return 108;
		case joaat("SHOP_AMD_BARTENDER"):
			return 110;
		case joaat("SHOP_AMD_HONOR_MP"):
			return 109;
		case joaat("SHOP_AMD_POST_OFFICE"):
			return 111;
		case joaat("SHOP_AMD_TRAIN_STATION"):
			return 112;
		case joaat("SHOP_ROJ_HONOR_MP"):
			return 113;
		case joaat("SHOP_BOJ_HONOR_MP"):
			return 114;
		case joaat("SHOP_TBL_GENERAL_STORE"):
			return 102;
		case joaat("SHOP_TBL_BARTENDER"):
			return 105;
		case joaat("SHOP_TBL_PIANIST"):
			return 106;
		case joaat("SHOP_TBL_GUNSMITH"):
			return 103;
		case joaat("SHOP_TBL_BUTCHER"):
			return 104;
		case joaat("SHOP_TBL_HORSE_SHOP"):
			return 107;
		case joaat("SHOP_RYC_FENCE"):
			return 116;
		case joaat("SHOP_THL_FENCE"):
			return 130;
		case joaat("SHOP_BEN_POST_OFFICE"):
			return 117;
		case joaat("SHOP_BEN_TRAIN_STATION"):
			return 118;
		case 548657065:
			return 3;
		case 243086140:
			return 4;
		case -305029900:
			return 40;
		case 1008537949:
			return 76;
		case 1239556700:
			return 148;
		case 1968750441:
			return 149;
		case 317019665:
			return 150;
		case 1421441577:
			return 151;
		default:
			break;
	}
	return -1;
}

void func_340(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1051439.f_4682[iVar0 /*5*/] == iParam0 || Global_1051439.f_4682[iVar0 /*5*/].f_3 < (MISC::GET_FRAME_COUNT() - 1))
		{
			Global_1051439.f_4682[iVar0 /*5*/] = iParam0;
			Global_1051439.f_4682[iVar0 /*5*/].f_1 = -1;
			Global_1051439.f_4682[iVar0 /*5*/].f_2 = iParam1;
			Global_1051439.f_4682[iVar0 /*5*/].f_4 = (fParam2 * fParam2);
			Global_1051439.f_4682[iVar0 /*5*/].f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
		iVar0++;
	}
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ST_DOCTOR"):
			return 0;
		case joaat("ST_GENERAL"):
			return 3;
		case joaat("ST_FENCE"):
			return 4;
		case joaat("ST_MOONSHINE_STILL"):
			return 33;
		case joaat("ST_GUNSMITH"):
			return 6;
		case joaat("ST_TAILOR"):
			return 7;
		case joaat("ST_BARBER"):
			return 8;
		case joaat("ST_TRAIN_STATION"):
			return 1;
		case joaat("ST_POST_OFFICE"):
			return 2;
		case joaat("ST_HORSE_SHOP"):
			return 9;
		case joaat("ST_BUTCHER"):
			return 10;
		case joaat("ST_DYNAMIC"):
			return 11;
		case joaat("ST_QUARTERMASTER"):
			return 22;
		case joaat("ST_HORSE_TRAINER"):
			return 23;
		case joaat("ST_BLACKSMITH"):
			return 24;
		case joaat("ST_BOUNTYHUNTING_MP_RETURN"):
			return 25;
		case joaat("ST_COACH"):
			return 26;
		case joaat("ST_BANK"):
			return 12;
		case joaat("ST_BAIT"):
			return 14;
		case joaat("ST_BARTENDER"):
			return 30;
		case joaat("ST_PIANIST"):
			return 31;
		case joaat("ST_MUSICIAN"):
			return 32;
		case joaat("ST_HORSE_FENCE"):
			return 5;
		case joaat("ST_TRAPPER"):
			return 15;
		case joaat("ST_PEARSON"):
			return 16;
		case joaat("ST_HOTEL"):
			return 17;
		case joaat("ST_WILDERNESS_SUPPLIES"):
			return 27;
		case joaat("ST_CAMP_LOCKBOX"):
			return 28;
		case joaat("ST_CAMP_BUTCHERTABLE"):
			return 29;
		case joaat("ST_HANDHELD"):
			return 34;
		case joaat("ST_WEAPON_MOD_STORE"):
			return 19;
		case joaat("ST_CLOTHING"):
			return 20;
		case joaat("ST_CAMP_SHAVING"):
			return 21;
		case joaat("ST_PHOTO_STUDIO"):
			return 18;
		case joaat("ST_HONOR_MP"):
			return 35;
		case joaat("ST_THEATER_MP"):
			return 36;
		case joaat("ST_TRAVELLING_SALESMAN"):
			return 38;
		case joaat("ST_MOONSHINE_PROPERTY"):
			return 37;
		case 374439621:
			return 39;
		default:
			break;
	}
	return -1;
}

void func_342(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1051439.f_4682[iVar0 /*5*/].f_1 == iParam0 || Global_1051439.f_4682[iVar0 /*5*/].f_3 < (MISC::GET_FRAME_COUNT() - 1))
		{
			Global_1051439.f_4682[iVar0 /*5*/].f_1 = iParam0;
			Global_1051439.f_4682[iVar0 /*5*/] = -1;
			Global_1051439.f_4682[iVar0 /*5*/].f_2 = iParam1;
			Global_1051439.f_4682[iVar0 /*5*/].f_4 = (fParam2 * fParam2);
			Global_1051439.f_4682[iVar0 /*5*/].f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
		iVar0++;
	}
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MINIGAME_MP_POKER_BLACKWATER"):
			return 0;
		case joaat("MINIGAME_MP_POKER_SAINT_DENIS"):
			return 1;
		case joaat("MINIGAME_MP_POKER_SWANSONS_STATION"):
			return 2;
		case joaat("MINIGAME_MP_POKER_TUMBLEWEED"):
			return 3;
		case joaat("MINIGAME_MP_POKER_VALENTINE"):
			return 4;
		default:
			break;
	}
	return 4;
}

void func_344(int iParam0)
{
	Global_1138962.f_1[iParam0 /*27*/].f_26 = MISC::GET_FRAME_COUNT();
}

bool func_345(struct<2> Param0, bool bParam2)
{
	int iVar0;

	iVar0 = func_245(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_346(struct<2> Param0)
{
	return func_245(Param0) == 7;
}

void func_347(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1108365.f_34.f_353[iParam0 /*6*/].f_1))
	{
		return;
	}
	if (!Global_1108365.f_34.f_353[iParam0 /*6*/])
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1108365.f_34.f_353[iParam0 /*6*/].f_1))
	{
		func_540(iParam0);
		return;
	}
	if (Global_1108365.f_34.f_353[iParam0 /*6*/].f_5 != -1)
	{
		if ((Global_1296859.f_21 - Global_1108365.f_34.f_353[iParam0 /*6*/].f_4) > Global_1108365.f_34.f_353[iParam0 /*6*/].f_5)
		{
			func_540(iParam0);
		}
		return;
	}
	if (func_108(Global_1108365.f_34.f_353[iParam0 /*6*/].f_2))
	{
		return;
	}
	if (!func_36(Global_1108365.f_34.f_353[iParam0 /*6*/].f_2))
	{
		func_540(iParam0);
		return;
	}
	if (!func_108(Global_1108365.f_34.f_353[iParam0 /*6*/].f_2))
	{
		func_540(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108365.f_34.f_546[iParam0 /*7*/])) != Global_1108365.f_34.f_353[iParam0 /*6*/].f_1)
	{
		func_540(iParam0);
		return;
	}
}

void func_348(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (Global_1108365.f_34.f_353[iParam0 /*6*/])
	{
		func_347(iParam0);
	}
	if (!Global_1108365.f_34[iParam0 /*11*/].f_6)
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_541(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_541(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108365.f_34.f_546[iParam0 /*7*/])) != iVar0)
	{
		func_541(iParam0);
		return;
	}
	if (GANG::_0x81FB74C83C2ED69F(iVar0))
	{
		func_542(iVar0, 0);
		return;
	}
	if (Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66)
	{
		func_542(iVar0, 0);
		return;
	}
	if (Global_1288736[iParam0 /*67*/].f_66)
	{
		func_542(iVar0, 0);
		return;
	}
	if (func_543(iParam0))
	{
		func_542(iVar0, 0);
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Global_1108365.f_34[iParam0 /*11*/].f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 600000)
	{
		func_542(iVar0, 0);
		return;
	}
}

bool func_349(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_350(var uParam0, int iParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_351(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

bool func_352(int iParam0)
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

int func_353(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1248240.f_8903.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1248240.f_8903.f_99;
		iVar1 = Global_1248240.f_8903.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (Global_1248240.f_8903.f_16[iVar0 /*8*/] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1248240.f_8903.f_99;
	Global_1248240.f_8903.f_16[iVar2 /*8*/] = iParam0;
	Global_1248240.f_8903.f_16[iVar2 /*8*/].f_5 = iParam2;
	Global_1248240.f_8903.f_16[iVar2 /*8*/].f_6 = iParam1;
	Global_1248240.f_8903.f_97++;
	Global_1248240.f_8903.f_99 = (Global_1248240.f_8903.f_99 + 1 % 10);
	return iVar2;
}

int func_354()
{
	return Global_1102219.f_3673;
}

int func_355(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return Global_1102219.f_3675[iParam0];
}

var func_356()
{
	return Global_1102219.f_3674;
}

int func_357(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_544(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_358(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

struct<2> func_359(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_545(iParam0, &(Global_1071686.f_636), func_56(iParam1));
			break;
		case 3:
			Var0.f_1 = func_545(iParam0, &(Global_1071686.f_636.f_602), func_56(iParam1));
			break;
		case 4:
			Var0.f_1 = func_545(iParam0, &(Global_1071686.f_636.f_2104), func_56(iParam1));
			break;
		case 5:
			Var0.f_1 = func_545(iParam0, &(Global_1071686.f_636.f_12606), func_56(iParam1));
			break;
		case 6:
			Var0.f_1 = func_545(iParam0, &(Global_1071686.f_636.f_12908), func_56(iParam1));
			break;
		case 7:
			Var0.f_1 = func_545(iParam0, &(Global_1071686.f_636.f_15910), func_56(iParam1));
			break;
		case 8:
			Var0.f_1 = func_545(iParam0, &(Global_1071686.f_636.f_16512), func_56(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_210();
	}
	return Var0;
}

void func_360(struct<2> Param0)
{
	if (func_251(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_251(Param0)))
	{
		STATS::_0x99230691875FC218(func_262(Param0), func_251(Param0), Global_35);
	}
}

bool func_361(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_546(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_22())
	{
		return func_546(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_546(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

int func_362(bool bParam0, bool bParam1, bool bParam2)
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

struct<2> func_363()
{
	return Global_1051213;
}

struct<2> func_364()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_255(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_255(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

bool func_365(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1248240.f_8903.f_8), iParam0);
}

int func_366(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return Global_1139381.f_5079[iParam0 /*10*/].f_5[iParam1];
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_368(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1139381.f_5079[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

void func_369(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1139381.f_5079[iParam0 /*10*/][iParam1] = iParam2;
}

int func_370(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1139381.f_5079[iParam0 /*10*/][iParam1];
}

var func_371(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_547();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_23);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1940311.f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940311.f_242.f_1188, 64);
	func_548(&(Global_1940311.f_242.f_14[iVar0 /*39*/]), Global_1940311.f_242.f_4, cVar3, Param0);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(84), Global_1940311.f_242.f_1188);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(85), 1);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(86), 0);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(74), Param0.f_30);
	if (Param0.f_30)
	{
		Global_1940311.f_242.f_14[iVar0 /*39*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(72), Param0.f_29);
		Global_1940311.f_242.f_14[iVar0 /*39*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(75), Param0.f_28);
	}
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(87), Param0.f_24);
	iVar15 = 0;
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_34 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940311.f_242.f_14[iVar0 /*39*/], 707094655, iVar15);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(50), Param0.f_25);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(51), Param0.f_25.f_1);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(88), Param0.f_25.f_2);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(89), iVar2);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(90), Param0.f_22);
	func_550(Global_1940311.f_242.f_1186 + 1);
	if (Global_1940311.f_242.f_1188 == 2147483647)
	{
		Global_1940311.f_242.f_1188 = 0;
	}
	if (func_551(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = Global_1940311.f_242.f_14[iVar0 /*39*/];
		iVar16 = func_552(&(Param0.f_31));
		Global_1940311.f_242.f_14[iVar0 /*39*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_549(91), iVar16);
	}
	iVar17 = func_553();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1940311.f_242.f_1187++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940311.f_242.f_5, 0, "pm_invite_item", Global_1940311.f_242.f_14[iVar0 /*39*/]);
	}
	return Global_1940311.f_242.f_14[iVar0 /*39*/];
}

void func_372(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	SCRIPTS::_0xD426E2E3288469D6(&(Global_1248240.f_8903.f_8), iParam0);
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = 0;
	while (iVar1 < Global_1248240.f_8903.f_14)
	{
		if (Global_1248240.f_8903.f_9[iVar1 /*4*/] == iVar0)
		{
			Global_1248240.f_8903.f_9[iVar1 /*4*/].f_2 = 1;
			Global_1248240.f_8903.f_9[iVar1 /*4*/].f_3 = iParam1;
		}
		else
		{
			iVar1++;
		}
	}
}

int func_373(int iParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	iVar0 = func_393(iParam0, uParam1);
	if (iVar0 != 1519094052)
	{
		return iVar0;
	}
	if (BOUNTY::_0x8FAF4D262FABA99C(&Var1))
	{
		Global_1257541.f_8852.f_3 = Var1.f_1;
	}
	if (Global_1296859.f_21 < Global_1257541.f_8852.f_3)
	{
		return 590089107;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1124430142))
	{
		return -580253866;
	}
	if (func_389(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 1421345077;
	}
	if (Global_1257541.f_8852.f_2 == 0)
	{
		iVar4 = ((func_268(iParam0) / 1000) + func_554(60));
		Global_1257541.f_8852.f_2 = (Global_1296859.f_21 + iVar4);
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(Global_1248240.f_8903.f_120)))
	{
		return -828578368;
	}
	if (Global_1296859.f_21 > Global_1257541.f_8852.f_2)
	{
		return 1519094052;
	}
	return 1918714710;
}

bool func_374()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (Global_1238240[iVar0 /*303*/].f_300.f_1 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_375(int iParam0)
{
	return Global_1238240[iParam0 /*303*/].f_300.f_1;
}

void func_376(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_555(&(Global_1071686.f_23044), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 11, &uParam19);
}

bool func_377(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_349(&Var1, iParam0) && func_350(&Var1, iParam1))
	{
		iVar0 = ((func_398(iParam0) - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_379(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;

	bVar0 = func_556(iParam0, iParam1, 2);
	if (func_557(iParam0, iParam1, bVar0))
	{
		return true;
	}
	vVar1 = { func_322(iParam0, iParam1) };
	if (func_385(vVar1))
	{
		return false;
	}
	uVar4 = func_558(func_163(iParam0), iParam1);
	if ((bParam2 && func_556(iParam0, iParam1, 1)) && func_559(vVar1, uVar4))
	{
		*bParam3 = 1;
		return true;
	}
	return func_560(vVar1, uVar4, bVar0);
}

bool func_380(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_350(&Var1, iParam1))
	{
		func_521(Var1, -528314399, &iVar0, 0);
	}
	return iVar0;
}

Vector3 func_381(int iParam0, int iParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_349(&Var3, iParam0) && func_350(&Var3, iParam1))
	{
		func_520(Var3, -370006557, &vVar0, 1);
	}
	return vVar0;
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 0;
	if (func_349(&Var1, iParam0))
	{
		if (func_377(&Var1, iParam1))
		{
			func_351(Var1, 1342438652, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_561(iVar0);
	}
	return iVar6;
}

bool func_383(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_385(vParam1))
	{
		return false;
	}
	if (func_562(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_563(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, fVar0, fVar1))
	{
		return false;
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
				if (fVar4 < fVar1 && !func_564(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_384(int iParam0)
{
	int iVar0;

	if (!func_124(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_565(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_385(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_386(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return true;
		default:
			break;
	}
	return false;
}

int func_387(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

bool func_388(int iParam0)
{
	if (!func_120(iParam0))
	{
		return false;
	}
	return (func_566(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

bool func_389(int iParam0)
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;

	if (!GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(iParam0)))
	{
		return false;
	}
	if (!GANG::_0x424B17A7DC5C90BC(iParam0))
	{
		return false;
	}
	iVar51 = GANG::_0xD1BF325C8252A982(GANG::_0x901E0DC25080C8B9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar50 /*7*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52) || PLAYER::IS_PLAYER_DEAD(iVar52))
		{
		}
		else if (func_209(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

bool func_390(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_391(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = uParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	uParam0->f_21[0 /*3*/] = { Global_35 };
	uParam0->f_7 = iParam3;
}

void func_392(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051252.f_16[13] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[13]))
	{
		return;
	}
	*uParam0 = 175;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 40, 5, Global_1051252.f_16[13]);
	func_567(uParam0, uParam0->f_1);
}

int func_393(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		*uParam1 = 1;
		return -863629719;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (func_225(iVar0, 1))
	{
		*uParam1 = 1;
		return -1365133205;
	}
	if (func_568())
	{
		return -744198205;
	}
	if (!func_170(255))
	{
		return 1419392741;
	}
	if (func_207(255))
	{
		return 56985339;
	}
	if (func_208(iVar0, 1, 0, 1))
	{
		return -1208627562;
	}
	if (func_209(65536, iVar0))
	{
		return 1340027376;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return -429228396;
	}
	if (func_402(Global_35))
	{
		return 736245819;
	}
	if (func_211(func_210(), func_210(), 0, 0))
	{
		*uParam1 = 1;
		return -590391633;
	}
	if (func_212())
	{
		*uParam1 = 1;
		return -1892967971;
	}
	return 1519094052;
}

bool func_394(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901947.f_166.f_27;
		case joaat("MEDIUM"):
			return Global_1901947.f_166.f_28;
		case joaat("HIGH"):
			return Global_1901947.f_166.f_29;
		case joaat("VERY_HIGH"):
			return Global_1901947.f_166.f_30;
		default:
			break;
	}
	return false;
}

bool func_395(int iParam0)
{
	return func_62(Global_1257541.f_8862, iParam0);
}

float func_396(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901947.f_166.f_19;
		case joaat("MEDIUM"):
			return Global_1901947.f_166.f_20;
		case joaat("HIGH"):
			return Global_1901947.f_166.f_21;
		case joaat("VERY_HIGH"):
			return Global_1901947.f_166.f_22;
		default:
			break;
	}
	return 0f;
}

int func_397(int iParam0)
{
	int iVar0[90];
	int iVar91;
	int iVar92;

	iVar92 = 0;
	while (iVar92 <= 89)
	{
		if (func_303(iVar92) == iParam0)
		{
			iVar0[iVar91] = iVar92;
			iVar91++;
		}
		iVar92++;
	}
	if (iVar91 > 0)
	{
		return iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar91)];
	}
	return -1;
}

int func_398(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_349(&vVar1, iParam0))
	{
		vVar1.f_2 = 866900867;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

int func_399(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_351(Var1, -2045057259, &iVar0, 0);
	}
	return iVar0;
}

int func_400(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((Global_1237665[iVar0 /*27*/] == iParam0 && Global_1237665[iVar0 /*27*/].f_6 == iParam1) && (iParam2 == -1 || Global_1237665[iVar0 /*27*/].f_9 == iParam2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_401(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	*bParam2 = 0;
	if (func_349(&Var3, iParam0) && func_377(&Var3, iParam1))
	{
		if (func_520(Var3, 1702777600, &vVar0, 1))
		{
			*bParam2 = 1;
		}
	}
	return vVar0;
}

bool func_402(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	fVar0 = 150f;
	fVar1 = (fVar0 * 1.5f);
	fVar1 = (fVar1 + 0.1f);
	vVar2.x = (vParam0.x - fVar1);
	vVar2.f_1 = (vParam0.y - fVar1);
	vVar2.f_2 = (vParam0.z - fVar1);
	vVar5.x = (vParam0.x + fVar1);
	vVar5.f_1 = (vParam0.y + fVar1);
	vVar5.f_2 = (vParam0.z + fVar1);
	iVar8 = PATHFIND::_0x01708E8DD3FF8C65(vVar2, vVar5);
	if (iVar8 < 16)
	{
		return true;
	}
	return false;
}

bool func_403()
{
	int iVar0;

	iVar0 = func_387(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	if (func_388(iVar0))
	{
		return true;
	}
	return false;
}

bool func_404()
{
	int iVar0;
	vector3 vVar1;

	if (!func_569(joaat("UPGRADE_CAMP_BUTCHER_TABLE"), 1))
	{
		return false;
	}
	iVar0 = func_387(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	if (!func_120(iVar0))
	{
		return false;
	}
	vVar1 = { func_570(iVar0) };
	if (func_385(vVar1))
	{
		return false;
	}
	if (func_167(Global_35, vVar1) > Global_1901947.f_166.f_58)
	{
		return false;
	}
	if (func_387(PLAYER::GET_PLAYER_INDEX()) == -1)
	{
		return false;
	}
	if (func_407(-735397297, func_406(1), 1784584921, 1, 0, 0) < Global_1901947.f_166.f_48)
	{
		return false;
	}
	return true;
}

bool func_405()
{
	vector3 vVar0;

	if (Global_1298536[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_5.f_12 == -1)
	{
		return false;
	}
	vVar0 = { func_242(Global_1298536[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_5.f_12) };
	if (func_167(Global_35, vVar0) > Global_1901947.f_166.f_58)
	{
		return false;
	}
	return true;
}

struct<4> func_406(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_571(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_573(joaat("CHARACTER"), func_572(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_573(joaat("CHARACTER"), func_572(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_573(joaat("CHARACTER"), func_572(), -1591664384, bParam0);
}

int func_407(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_575(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_573(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_571(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_571(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

float func_408()
{
	float fVar0;

	fVar0 = 0f;
	if (func_407(-735397297, func_406(1), 1784584921, 1, 0, 0) >= Global_1901947.f_166.f_48)
	{
		fVar0 = (Global_1901947.f_166.f_50 * (1f - func_576()));
	}
	if (func_407(-735397297, func_406(1), 1784584921, 1, 0, 0) >= Global_1901947.f_166.f_48)
	{
		fVar0 = (Global_1901947.f_166.f_51 * (1f - func_576()));
	}
	return fVar0;
}

float func_409()
{
	float fVar0;
	int iVar1;

	fVar0 = 0f;
	iVar1 = 0;
	if (func_407(-545779394, func_406(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = func_407(-545779394, func_406(1), 1784584921, 1, 0, 0);
	}
	else if (func_407(1532695640, func_406(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = func_407(1532695640, func_406(1), 1784584921, 1, 0, 0);
	}
	else if (func_407(1847740267, func_406(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = func_407(1847740267, func_406(1), 1784584921, 1, 0, 0);
	}
	if (iVar1 >= Global_1901947.f_166.f_40)
	{
		fVar0 = (Global_1901947.f_166.f_43 * (1f - func_577()));
	}
	if (iVar1 >= Global_1901947.f_166.f_41)
	{
		fVar0 = (Global_1901947.f_166.f_44 * (1f - func_577()));
	}
	return fVar0;
}

bool func_410(int iParam0)
{
	return func_390(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

void func_411(var uParam0, int iParam1)
{
	func_578(uParam0, iParam1);
}

int func_412(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER");
		case 2:
			return joaat("PERSONA_HONOR_ACTION__MURDER");
		case 3:
			return joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER");
		case 4:
			return joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER");
		case 5:
			return joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE");
		case 6:
			return joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS");
		case 7:
			return joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER");
		case 8:
			return joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED");
		case 9:
			return joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER");
		case 10:
			return joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER");
		case 11:
			return joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT");
		case 12:
			return joaat("PERSONA_HONOR_ACTION__MURDER_HORSE");
		case 13:
			return joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS");
		case 14:
			return joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI");
		case 15:
			return joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI");
		case 16:
			return joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER");
		case 17:
			return joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER");
		case 18:
			return joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER");
		case 19:
			return joaat("PERSONA_HONOR_ACTION__TRAMPLE");
		case 20:
			return joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES");
		case 21:
			return joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION");
		case 22:
			return joaat("PERSONA_HONOR_ACTION__GRIEFING");
		case 23:
			return joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION");
		case 24:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL");
		case 25:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL");
		case 26:
			return joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL");
		case 27:
			return joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP");
		case 28:
			return joaat("PERSONA_HONOR_ACTION__RUSTLING");
		case 29:
			return joaat("PERSONA_HONOR_ACTION__HERDING_STEAL");
		case 30:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG");
		case 31:
			return joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW");
		case 32:
			return joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG");
		case 33:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE");
		case 34:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN");
		case 35:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN");
		case 36:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY");
		case 37:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE");
		case 38:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY");
		case 39:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE");
		case 40:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY");
		case 41:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE");
		case 42:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY");
		case 43:
			return joaat("PERSONA_HONOR_ACTION__LOOTING");
		case 44:
			return joaat("PERSONA_HONOR_ACTION__THEFT");
		case 45:
			return joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY");
		case 46:
			return joaat("PERSONA_HONOR_ACTION__ARSON");
		case 47:
			return joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW");
		case 48:
			return joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT");
		case 49:
			return joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL");
		case 50:
			return joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL");
		case 51:
			return joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL");
		case 52:
			return joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL");
		case 53:
			return joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL");
		case 54:
			return joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT");
		case 55:
			return joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT");
		case 56:
			return joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER");
		case 57:
			return joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL");
		case 58:
			return 1723535349;
		case 59:
			return joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER");
		case 60:
			return joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD");
		case 61:
			return joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER");
		case 62:
			return joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT");
		case 63:
			return joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD");
		case 64:
			return -2086327823;
		case 65:
			return 1623086000;
		case 66:
			return 796310207;
		case 67:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE");
		case 68:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER");
		case 69:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI");
		case 70:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE");
		case 71:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN");
		case 72:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL");
		case 73:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER");
		case 74:
			return joaat("PERSONA_HONOR_ACTION__RESOURCEFUL");
		case 75:
			return joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT");
		case 76:
			return joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH");
		case 77:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE");
		case 78:
			return joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL");
		case 79:
			return joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP");
		case 80:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS");
		case 81:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER");
		case 82:
			return joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS");
		case 83:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE");
		case 84:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN");
		case 85:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN");
		case 86:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY");
		case 87:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE");
		case 88:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY");
		case 89:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE");
		case 90:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY");
		case 91:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE");
		case 92:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY");
		case 93:
			return joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE");
		case 94:
			return joaat("PERSONA_HONOR_ACTION__MERCY_KILL");
		case 95:
			return joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED");
		case 96:
			return joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE");
		case 97:
			return joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE");
		case 98:
			return joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL");
		case 99:
			return joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST");
		case 100:
			return joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST");
		case 101:
			return joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN");
		case 102:
			return joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE");
		case 103:
			return -29468993;
		case 104:
			return 669386338;
		case 105:
			return joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE");
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

void func_413(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1139381.f_3876.f_2[func_414(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_579(iParam0);
	}
	Global_1139381.f_3876.f_2[func_414(iParam0, 1) /*4*/] = bParam1;
}

int func_414(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
		case 1623086000:
			return 65;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
		case 1723535349:
			return 58;
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
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

int func_415(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1071686.f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_580(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_580(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
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

int func_416(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_580(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_417()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_418(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
		case 8:
			return 634321112;
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
		default:
			break;
	}
	return 0;
}

void func_420(struct<2> Param0, var uParam2)
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
	iVar3 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_262(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_582(func_581(Param0));
			iVar5 = func_303(iVar4);
			if (!func_281(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1107216.f_33[iVar1 /*16*/] == iVar3)
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
	iVar0 = Global_1107216.f_33[iVar2 /*16*/].f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0 /*42*/];
}

int func_421(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_415(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_583(iVar0);
}

int func_422(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1071686.f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_580(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686.f_19550 == 0)
	{
		Global_1071686.f_19550.f_1[Global_1071686.f_19550 /*3*/] = { vVar6 };
		Global_1071686.f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686.f_19550)
	{
		func_580(Global_1071686.f_19550.f_1[iVar9 /*3*/], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_584(iVar9);
			Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686.f_19550 < 31)
	{
		iVar9 = Global_1071686.f_19550;
		Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
		Global_1071686.f_19550++;
		if (Global_1071686.f_19550 > 32)
		{
			Global_1071686.f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_423()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (func_580(Global_1071686.f_19550.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_424(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_425(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_426(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CRIME_ARSON");
		case 1:
			return joaat("CRIME_ASSAULT");
		case 2:
			return joaat("CRIME_ASSAULT_ANIMAL");
		case 3:
			return joaat("CRIME_ASSAULT_CORPSE");
		case 4:
			return joaat("CRIME_ASSAULT_HORSE");
		case 5:
			return joaat("CRIME_ASSAULT_LAW");
		case 6:
			return joaat("CRIME_ASSAULT_LIVESTOCK");
		case 7:
			return joaat("CRIME_BANK_ROBBERY");
		case 8:
			return joaat("CRIME_BURGLARY");
		case 9:
			return joaat("CRIME_CHEATING");
		case 10:
			return joaat("CRIME_DISTURBANCE");
		case 11:
			return joaat("CRIME_EXPLOSION");
		case 12:
			return joaat("CRIME_GRAVE_ROBBERY");
		case 13:
			return joaat("CRIME_HASSLE");
		case 14:
			return joaat("CRIME_HIT_AND_RUN");
		case 15:
			return joaat("CRIME_HIT_AND_RUN_LAW");
		case 16:
			return joaat("CRIME_INTIMIDATION");
		case 17:
			return joaat("CRIME_JACK_HORSE");
		case 18:
			return joaat("CRIME_JACK_VEHICLE");
		case 19:
			return joaat("CRIME_JAIL_BREAK");
		case 20:
			return joaat("CRIME_KIDNAPPING");
		case 21:
			return joaat("CRIME_KIDNAPPING_LAW");
		case 22:
			return joaat("CRIME_LASSO_ASSAULT");
		case 23:
			return joaat("CRIME_LAW_IS_THREATENED");
		case 24:
			return joaat("CRIME_LOITERING");
		case 25:
			return joaat("CRIME_LOOTING");
		case 26:
			return joaat("CRIME_MURDER");
		case 27:
			return joaat("CRIME_MURDER_ANIMAL");
		case 28:
			return joaat("CRIME_MURDER_HORSE");
		case 29:
			return joaat("CRIME_MURDER_LAW");
		case 30:
			return joaat("CRIME_MURDER_LIVESTOCK");
		case 31:
			return joaat("CRIME_PROPERTY_DESTRUCTION");
		case 32:
			return joaat("CRIME_RESIST_ARREST");
		case 33:
			return joaat("CRIME_ROBBERY");
		case 34:
			return joaat("CRIME_STAGECOACH_ROBBERY");
		case 35:
			return joaat("CRIME_STOLEN_GOODS");
		case 36:
			return joaat("CRIME_THEFT");
		case 37:
			return joaat("CRIME_THEFT_HORSE");
		case 38:
			return joaat("CRIME_THEFT_LIVESTOCK");
		case 39:
			return joaat("CRIME_THEFT_VEHICLE");
		case 40:
			return joaat("CRIME_THREATEN");
		case 41:
			return joaat("CRIME_THREATEN_LAW");
		case 42:
			return joaat("CRIME_TRAIN_ROBBERY");
		case 43:
			return joaat("CRIME_TRAMPLE");
		case 44:
			return joaat("CRIME_TRAMPLE_LAW");
		case 45:
			return joaat("CRIME_TRESPASSING");
		case 46:
			return joaat("CRIME_UNARMED_ASSAULT");
		case 47:
			return joaat("CRIME_VANDALISM");
		case 48:
			return joaat("CRIME_VANDALISM_VEHICLE");
		case 49:
			return joaat("CRIME_VEHICLE_DESTRUCTION");
		case 50:
			return joaat("CRIME_WANTED_LEVEL_UP_DEBUG_HIGH");
		case 51:
			return joaat("CRIME_WANTED_LEVEL_UP_DEBUG_LOW");
		case 52:
			return joaat("CRIME_ACCOMPLICE");
		case 53:
			return joaat("CRIME_EXPLOSION_POISON");
		case 54:
			return joaat("CRIME_MURDER_PLAYER");
		case 55:
			return joaat("CRIME_MURDER_PLAYER_HORSE");
		case 56:
			return joaat("CRIME_SELF_DEFENCE");
		case 57:
			return joaat("CRIME_TRAMPLE_PLAYER");
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

void func_427(char[12] cParam0)
{
	Global_1939161.f_75.f_67 = { cParam0 };
}

void func_428()
{
	StringCopy(&(Global_1939161.f_75.f_67), "", 24);
}

bool func_429(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_585(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_586(iVar1))
	{
		if (Global_1071686.f_19648.f_24 && !func_587(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1071686.f_19648[iVar1], iVar2) || MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2);
}

int func_430(struct<2> Param0)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_256(Global_1900736.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_431(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736.f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736.f_66 == 1)
	{
		Global_1900736.f_66 = 0;
		func_588(&(Global_1900736.f_1[0 /*2*/]));
		return 1;
	}
	func_588(&(Global_1900736.f_1[iParam0 /*2*/]));
	Global_1900736.f_66 = (Global_1900736.f_66 - 1);
	func_589(iParam0, Global_1900736.f_66);
	return 1;
}

void func_432(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (Global_1196205.f_129 <= 0)
	{
		Global_1196205.f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1196205.f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1196205.f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1196205.f_129 == 1)
	{
		*uParam0 = { Global_1196205[0 /*4*/] };
		Global_1196205[0 /*4*/] = { Var0 };
		Global_1196205.f_129 = 0;
		return;
	}
	*uParam0 = { Global_1196205[iParam1 /*4*/] };
	Global_1196205.f_129 = (Global_1196205.f_129 - 1);
	iVar4 = (Global_1196205.f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		Global_1196205[iVar5 /*4*/] = { Global_1196205[iVar5 + 1 /*4*/] };
		Global_1196205[iVar5 + 1 /*4*/] = { Var0 };
		iVar5++;
	}
}

void func_433(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205.f_129)
	{
		return;
	}
	Global_1196205.f_130 = iParam0;
	Global_1196205.f_131 = Global_1196205[iParam0 /*4*/];
}

void func_434()
{
	if (Global_1196205.f_131 == 0)
	{
		return;
	}
	Global_1196205.f_130 = func_590(Global_1196205.f_131);
	if (Global_1196205.f_130 < 0)
	{
		Global_1196205.f_131 = 0;
	}
}

struct<2> func_435(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_96(joaat("MP_BEAT_MANAGER_MOONSHINER_COOLDOWN_TIMESTAMP"));
		case 2:
			return func_96(-1122351331);
	}
	return Var0;
}

bool func_436(struct<2> Param0)
{
	return func_591(Param0, 1, 4);
}

bool func_437(int iParam0, var uParam1)
{
	struct<24> Var0;
	int iVar40;
	int iVar41;
	int iVar42;

	if (func_141(iParam0, 536870912))
	{
		return true;
	}
	if (func_592(&(Global_1237665.f_367)))
	{
		return false;
	}
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
	iVar40 = func_303(Global_1237665[iParam0 /*27*/]);
	iVar41 = func_438(iVar40);
	iVar42 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (Global_1198046.f_13[iVar41] >= Global_1198046.f_3[iVar41])
	{
		*uParam1 = 1;
		return false;
	}
	Var0.f_2 = 2;
	Var0.f_5 = 0;
	Var0.f_7 = iVar42;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = func_438(iVar40);
	Var0.f_8.f_5.f_9 = iVar41;
	Var0.f_8.f_5 = { func_315(iParam0) };
	Var0.f_8.f_2 = { func_322(Global_1237665[iParam0 /*27*/], Global_1237665[iParam0 /*27*/].f_6) };
	func_593(&Var0);
	func_594(&(Global_1237665.f_367), &Var0, 1, 15, 6, 24, 0);
	func_286(iParam0, 536870912);
	return true;
}

int func_438(int iParam0)
{
	return 2;
}

void func_439(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_303(Global_1237665[iParam0 /*27*/]);
	*uParam1 = { func_315(iParam0) };
	uParam1->f_9 = func_438(iVar0);
}

int func_440(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_595(uParam0))
	{
		return -1;
	}
	iVar0 = func_596(uParam0, uParam0->f_9);
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
			iVar0 = func_596(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_441(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<15> func_442(int iParam0)
{
	struct<15> Var0;

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
	if (!func_441(iParam0))
	{
		return Var0;
	}
	return Global_1198046.f_231[iParam0 /*15*/];
}

var func_443(int iParam0)
{
	struct<7> Var0[7];
	var uVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	iVar51 = GANG::_0xD1BF325C8252A982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar52 /*7*/]));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar53))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_444(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 24, &uParam1);
}

void func_445(var uParam0)
{
	if (Global_1051252.f_16[0] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0]))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 31, 24, Global_1051252.f_16[0]);
}

int func_446(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_597(iParam0);
	if (iVar0 == 0)
	{
		return -1;
	}
	if (iParam1 == -1)
	{
		return -1;
	}
	return func_598(iVar0, iParam1);
}

void func_447(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_599(&Var0);
}

bool func_448(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_61(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (Global_1238240[iVar0 /*303*/][iParam0 /*23*/].f_22 != Global_1237665[iParam0 /*27*/].f_9 || !func_64(iParam0, iParam1, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_449(int iParam0)
{
	int iVar0;

	if (!func_61(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (Global_1238240[iVar0 /*303*/][iParam0 /*23*/].f_22 != Global_1237665[iParam0 /*27*/].f_9 || func_522(iParam0, iVar0, 1, 0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_450(int iParam0)
{
	return func_448(iParam0, 1024);
}

void func_451(int iParam0)
{
	struct<24> Var0;
	int iVar40;

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
	iVar40 = func_303(Global_1237665[iParam0 /*27*/]);
	Var0.f_2 = 2;
	Var0.f_5 = 7;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = func_438(iVar40);
	Var0.f_8.f_5.f_9 = func_438(iVar40);
	Var0.f_8.f_5 = { func_315(iParam0) };
	Var0.f_8.f_2 = { func_322(Global_1237665[iParam0 /*27*/], Global_1237665[iParam0 /*27*/].f_6) };
	func_594(&(Global_1237665.f_367), &Var0, 0, 0, 0, 0, 0);
}

int func_452(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1237665.f_356[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_453(int iParam0)
{
	Global_1237665.f_356[iParam0 /*2*/].f_1 = 1;
}

bool func_454(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

int func_455()
{
	return Global_1301323.f_150.f_4;
}

int func_456(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_13;
}

bool func_457(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	*uParam1 = { func_478(iParam0) };
	if (func_487(iParam0) <= 0)
	{
		*uParam1 = { func_600(iParam0) };
		if (func_36(*uParam1))
		{
			func_472(iParam0);
		}
		return false;
	}
	else if (!func_36(*uParam1))
	{
		*uParam1 = { func_600(iParam0) };
		if (func_36(*uParam1))
		{
			func_472(iParam0);
			return false;
		}
	}
	else if (func_36(*uParam1))
	{
		if (func_456(iParam0) < 4)
		{
			if (!func_461(iParam0, iVar0, 0))
			{
				func_601(iParam0, *uParam1);
				func_469(iParam0, 0);
				if (func_298(iParam0, 256))
				{
					func_469(iParam0, 1);
				}
			}
		}
		if (func_108(*uParam1))
		{
			if (func_462(iParam0, 4))
			{
				func_467(iParam0, 0, 0);
				return false;
			}
			else if (func_462(iParam0, 5))
			{
				func_468(iParam0, 0);
				return false;
			}
		}
	}
	return true;
}

void func_458(int iParam0, int iParam1)
{
	Global_1198046.f_231.f_1066[iParam0 /*17*/].f_13 = iParam1;
}

bool func_459(int iParam0)
{
	if (!func_602(iParam0))
	{
		return false;
	}
	if (func_456(iParam0) >= 5)
	{
		return false;
	}
	if (func_456(iParam0) <= 0)
	{
		return false;
	}
	if (!func_461(iParam0, PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	return true;
}

void func_460(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (!func_109(Var0) && !func_108(Var0))
	{
		return;
	}
	func_603(iParam0, 2);
	func_603(iParam0, 3);
	func_469(iParam0, 6);
	func_113(Var0, 0, 2, iParam1, 0);
}

bool func_461(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

bool func_462(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_354())
	{
		iVar0 = func_355(iVar1);
		if (func_461(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return func_461(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

int func_463(int iParam0)
{
	return Global_1198046.f_2505[iParam0 /*6*/].f_4;
}

void func_464(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_109(Var0))
	{
		return;
	}
	if (func_108(Var0))
	{
		return;
	}
	func_469(iParam0, 2);
	func_603(iParam0, 3);
	func_603(iParam0, 6);
	func_502(Var0);
}

void func_465(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	Global_1207784[iVar0 /*72*/][iParam0] = 0;
}

void func_466(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (!func_109(Var0))
	{
		return;
	}
	if (func_108(Var0))
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
	func_469(iParam0, 3);
	func_499(Var0, 1, bParam2, bParam3);
}

void func_467(int iParam0, bool bParam1, int iParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_109(Var0))
	{
		return;
	}
	if (!func_108(Var0))
	{
		return;
	}
	if (func_461(iParam0, PLAYER::PLAYER_ID(), 5))
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
	func_113(Var0, 0, bVar2, iParam2, 0);
	func_469(iParam0, 4);
}

void func_468(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_109(Var0))
	{
		return;
	}
	if (!func_108(Var0))
	{
		return;
	}
	if (func_461(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_113(Var0, 0, 1, iParam1, 0);
	func_469(iParam0, 5);
}

void func_469(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_461(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

bool func_470(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar1 = 0;
	while (iVar1 < func_354())
	{
		iVar0 = func_355(iVar1);
		if (func_461(iParam0, iVar0, 2) && !((func_461(iParam0, iVar0, 4) || func_461(iParam0, iVar0, 5)) || func_461(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_600(iParam0) };
	return !(func_109(Var2) || func_108(Var2));
}

bool func_471(int iParam0, int iParam1)
{
	return Global_1207784[iParam1 /*72*/][iParam0] == 0;
}

void func_472(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_7;
	if (iVar1 > 1)
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_604(iParam0, iVar0);
		func_605(iParam0, iVar0);
		iVar0++;
	}
	func_460(iParam0, 0);
	func_606(iParam0);
	func_465(iParam0);
}

void func_473(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_607(iParam0);
	iVar1 = func_608(iParam0, iParam1);
	iVar2 = func_609(iParam0, iParam1);
	iVar3 = func_456(iParam0);
	switch (func_610(iParam0, iParam1))
	{
		case -1:
			if (!func_459(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_611(iParam0, iParam1, 6);
				}
				return;
			}
			func_611(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_459(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_611(iParam0, iParam1, 6);
				}
				return;
			}
			func_611(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_459(iParam0))
			{
				func_612(iParam0, iParam1);
				func_611(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				return;
			}
			if (iVar2 >= 3)
			{
				func_611(iParam0, iParam1, 6);
				return;
			}
			func_611(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_459(iParam0))
			{
				func_612(iParam0, iParam1);
				func_611(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_611(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_611(iParam0, iParam1, 6);
				return;
			}
			if (!func_613(iParam0, iParam1))
			{
				return;
			}
			func_614(iParam0, iParam1, 0);
			func_611(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_459(iParam0))
			{
				func_612(iParam0, iParam1);
				func_611(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_611(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_611(iParam0, iParam1, 6);
				return;
			}
			if (!func_615(iParam0, iParam1))
			{
				return;
			}
			func_611(iParam0, iParam1, 4);
			break;
		case 4:
			if (!NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(iVar0, iVar1, true, 0))
			{
				if (!func_616(iParam0, iParam1))
				{
					func_617(iParam0, iParam1, 0);
					func_618(iParam0, iParam1, 0);
					func_611(iParam0, iParam1, 2);
				}
				return;
			}
			func_611(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_487(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_604(iParam0, iParam1);
			}
			if (func_619(iParam0, iParam1))
			{
				func_604(iParam0, iParam1);
			}
			if (NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(iVar0, iVar1, true, 0))
			{
				return;
			}
			if (func_616(iParam0, iParam1))
			{
				return;
			}
			func_617(iParam0, iParam1, 0);
			if ((func_481(iParam0, 4) || func_481(iParam0, 5)) || (func_456(iParam0) > 2 && iVar2 == 3))
			{
				func_611(iParam0, iParam1, 6);
			}
			else
			{
				func_618(iParam0, iParam1, 0);
				func_611(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_470(iParam0))
			{
				return;
			}
			func_611(iParam0, iParam1, 7);
			break;
		case 7:
			func_612(iParam0, iParam1);
			func_611(iParam0, iParam1, 8);
			break;
		case 8:
			func_469(iParam0, 7);
			if (iVar2 == 2 || iVar2 == 3)
			{
				return;
			}
			func_611(iParam0, iParam1, 1);
			func_603(iParam0, 7);
			break;
	}
}

bool func_474(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_620(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!VOLUME::_0xA4A4359320345B34(iVar0))
	{
		func_621(iParam0, iParam1, 0);
		return true;
	}
	func_621(iParam0, iParam1, 0);
	return true;
}

void func_475(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (!func_298(iParam0, 8))
	{
		return;
	}
	iVar0 = func_487(iParam0);
	iVar1 = func_622(iParam0, iParam1);
	iVar2 = func_456(iParam0);
	iVar3 = func_609(iParam0, iParam1);
	bVar4 = func_602(iParam0);
	if (!bVar4 || iVar2 >= 5)
	{
		if (iVar1 != 1)
		{
			func_623(iParam0, iParam1);
			func_624(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar1)
	{
		case -2:
			break;
		case -1:
			if (!func_36(func_478(iParam0)))
			{
			}
			else if (func_625(iParam0, iParam1) <= 0)
			{
				func_624(iParam0, iParam1, 0);
			}
			else if (iVar0 == 1)
			{
				func_624(iParam0, iParam1, 5);
			}
			else
			{
				func_624(iParam0, iParam1, 2);
			}
			break;
		case 0:
			if (func_625(iParam0, iParam1) > 0)
			{
				func_624(iParam0, iParam1, 2);
			}
			break;
		case 1:
			func_624(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_626(iParam0, iParam1) != 0)
			{
				func_624(iParam0, iParam1, 4);
				return;
			}
			func_627(iParam0, iParam1, 0);
			func_624(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_620(iParam0, iParam1) == 0)
			{
				func_624(iParam0, iParam1, 2);
				return;
			}
			if (func_628(iParam0, iParam1))
			{
				func_624(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar0 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_626(iParam0, iParam1), 160);
				func_624(iParam0, iParam1, 7);
			}
			else if (!VOLUME::_0xF6A8A652A6B186CD(func_626(iParam0, iParam1)))
			{
				func_629(iParam0, iParam1);
				func_624(iParam0, iParam1, 2);
			}
			break;
		case 5:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				func_624(iParam0, iParam1, 2);
			}
			break;
		case 6:
			break;
		case 7:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_626(iParam0, iParam1), 32);
				func_624(iParam0, iParam1, 4);
			}
			else if (!VOLUME::_0xF6A8A652A6B186CD(func_626(iParam0, iParam1)))
			{
				func_629(iParam0, iParam1);
				func_624(iParam0, iParam1, 5);
			}
			break;
	}
}

void func_476(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_298(iParam0, 16))
	{
		return;
	}
	iVar0 = func_607(iParam0);
	iVar1 = func_608(iParam0, iParam1);
	iVar3 = func_609(iParam0, iParam1);
	if (iVar3 > 0 && !func_602(iParam0))
	{
		func_630(iParam0, iParam1, 0);
		return;
	}
	switch (iVar3)
	{
		case -1:
			if (!func_36(func_478(iParam0)))
			{
				return;
			}
			if (func_631(iParam0, iParam1) <= 0)
			{
				func_630(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_630(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_602(iParam0))
			{
				return;
			}
			if (func_631(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_632(iParam0);
			if (iVar2 != -15 && func_633(iVar2))
			{
				return;
			}
			func_630(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_634(iParam0, iParam1, 0))
			{
			}
			else
			{
				func_630(iParam0, iParam1, 2);
				func_488(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_634(iParam0, iParam1, 0))
			{
				if (!NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(iVar0, iVar1, false, 0))
				{
					func_630(iParam0, iParam1, 3);
					return;
				}
			}
			if (func_456(iParam0) >= 3)
			{
				func_630(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_456(iParam0) >= 3)
			{
				return;
			}
			if (!func_635(iParam0, iParam1))
			{
				func_630(iParam0, iParam1, 2);
				return;
			}
			if (func_480(iParam0) != 255)
			{
				func_488(iParam0, 2);
			}
			else
			{
				func_488(iParam0, 1);
			}
			iVar2 = func_632(iParam0);
			if (iVar2 != -15 && func_633(iVar2))
			{
				func_630(iParam0, iParam1, 0);
				return;
			}
			if (func_456(iParam0) >= 4)
			{
				return;
			}
			if (func_636(iParam0, 7))
			{
				return;
			}
			func_630(iParam0, iParam1, 1);
			break;
	}
}

bool func_477(int iParam0, int iParam1)
{
	if (iParam1 > -1 && iParam1 < 5)
	{
		if (!func_36(func_478(iParam0)))
		{
			func_458(iParam0, 5);
			return true;
		}
	}
	if (!func_602(iParam0) && iParam1 < 5)
	{
		func_637(iParam0);
		func_458(iParam0, 5);
		return true;
	}
	return false;
}

struct<2> func_478(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_210();
	}
	return Global_1198046.f_231[iParam0 /*15*/].f_5;
}

void func_479(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	Global_1198046.f_2505[iParam0 /*6*/].f_4 = GANG::_0x901E0DC25080C8B9(iParam1);
	Global_1198046.f_2505[iParam0 /*6*/].f_5 = iParam1;
}

int func_480(int iParam0)
{
	return Global_1198046.f_2505[iParam0 /*6*/].f_5;
}

bool func_481(int iParam0, int iParam1)
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
		else if (func_461(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_482(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_298(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_638(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_640(func_639(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), joaat("VOLSPHERE"), 0, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&uVar1) <= 0;
}

bool func_483(int iParam0)
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
		else if (!func_471(iParam0, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_484(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1198046.f_231.f_1066[iParam0 /*17*/].f_6 & 4096 != 0)
	{
		return;
	}
	iVar0 = Global_1198046.f_2505[iParam0 /*6*/].f_5;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar2 = GANG::_0x901E0DC25080C8B9(iVar0);
		if (Global_1198046.f_2505[iParam0 /*6*/].f_4 != iVar2)
		{
			if ((GANG::_0xD6F6ACF4392187FB(Global_1198046.f_2505[iParam0 /*6*/].f_4) && GANG::_0x93A91A351A07360E(Global_1198046.f_2505[iParam0 /*6*/].f_4)) && GANG::_0x149A2751AB66AC02(Global_1198046.f_2505[iParam0 /*6*/].f_4) > 0)
			{
				iVar1 = GANG::_0x4BE6C13A45CCA8EC(Global_1198046.f_2505[iParam0 /*6*/].f_4);
				func_479(iParam0, iVar1);
			}
			else if (GANG::_0x4BE6C13A45CCA8EC(iVar2) == iVar0)
			{
				Global_1198046.f_2505[iParam0 /*6*/].f_4 = iVar2;
			}
			else
			{
				func_641(iParam0);
			}
		}
		return;
	}
	if (Global_1198046.f_2505[iParam0 /*6*/].f_4 == 0)
	{
		func_641(iParam0);
		return;
	}
	if (!GANG::_0x93A91A351A07360E(Global_1198046.f_2505[iParam0 /*6*/].f_4))
	{
		func_641(iParam0);
		return;
	}
	iVar1 = GANG::_0x4BE6C13A45CCA8EC(Global_1198046.f_2505[iParam0 /*6*/].f_4);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_641(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_641(iParam0);
		return;
	}
	func_479(iParam0, iVar1);
}

bool func_485(int iParam0)
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
		else if (Global_1207784[iVar0 /*72*/][iParam0] > 255)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_486(int iParam0, int iParam1)
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
		else if (!func_461(iParam0, iVar0, iParam1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

int func_487(int iParam0)
{
	if (!func_441(iParam0))
	{
		return -1;
	}
	return Global_1198046.f_231[iParam0 /*15*/].f_1;
}

void func_488(int iParam0, int iParam1)
{
	Global_1198046.f_231[iParam0 /*15*/].f_1 = iParam1;
}

int func_489(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1248240[iParam0 /*683*/].f_598))
	{
		return 4;
	}
	if (func_64(iParam0, 8, 255))
	{
		return 5;
	}
	if (func_212())
	{
		return 26;
	}
	if (func_64(iParam0, 64, 255) && (func_492(iParam0, 255) == 16 || !func_40(iParam0, 32)))
	{
		return 16;
	}
	if (func_211(Global_1248240[iParam0 /*683*/].f_584, func_210(), 0, 0) && Global_1248240[iParam0 /*683*/].f_559 != joaat("INTRO_MISSION"))
	{
		return 7;
	}
	if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && func_642(Global_1248240[iParam0 /*683*/].f_584))
	{
		if (func_64(iParam0, 32, 255) && !func_40(iParam0, 256))
		{
			func_643();
			func_144(iParam0, 256);
		}
		return 8;
	}
	if (Global_1248240[iParam0 /*683*/].f_559 != joaat("BOUNTY_PLAYER") || Global_1237665[iParam0 /*27*/].f_16 != PLAYER::PLAYER_ID())
	{
		if (func_40(iParam0, 8388608) || (func_64(iParam0, 32, 255) && func_493(iParam0, &bVar1)))
		{
			func_144(iParam0, 8388608);
			if (bVar1)
			{
				func_144(iParam0, 16777216);
			}
			return 17;
		}
	}
	bVar2 = func_644(iParam0, 255);
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (func_117(Global_1248240[iParam0 /*683*/].f_559))
		{
			if (!func_64(iParam0, 16, 255) && !func_141(iParam0, 16))
			{
				return 21;
			}
		}
		if (bVar2 && func_40(iParam0, 262144))
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	iVar3 = func_645(iParam0);
	if (iVar3 != 255)
	{
		if (iVar3 != PLAYER::PLAYER_ID())
		{
			func_309(iParam0, 16777216);
		}
		return 2;
	}
	if (func_389(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 23;
	}
	if (Global_1248240[iParam0 /*683*/].f_599 != 0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1248240[iParam0 /*683*/].f_599))
	{
		return 24;
	}
	if (bVar2)
	{
		return 15;
	}
	return 0;
}

int func_490(int iParam0)
{
	if (func_646(Global_1237665[iParam0 /*27*/]))
	{
		return 12;
	}
	if (func_208(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 13;
	}
	return 0;
}

int func_491(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_VISIBLE(Global_1248240[iParam0 /*683*/].f_598))
	{
		return 4;
	}
	bVar1 = func_522(iParam0, 255, 0, 0);
	bVar2 = func_40(iParam0, 512);
	fVar3 = Global_1901947.f_308.f_164;
	if (Global_1248240[iParam0 /*683*/].f_559 == joaat("CAMP_SELL"))
	{
		fVar3 = (fVar3 + (fVar3 * func_647()));
	}
	if (Global_1248240[iParam0 /*683*/].f_559 != joaat("BOUNTY_PLAYER") && !func_648(Global_1248240[iParam0 /*683*/].f_587, bVar1, bVar2, fVar3))
	{
		return 9;
	}
	if (!func_141(iParam0, 2097152) && !func_64(iParam0, 32, 255))
	{
		return 10;
	}
	if (Global_1248240[iParam0 /*683*/].f_559 == joaat("CAMP_SELL"))
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1607036473))
		{
			return 18;
		}
		iVar4 = func_649();
		if (func_280(iVar4) && func_169(iVar4) < Global_1901947.f_166.f_59)
		{
			return 19;
		}
		if (func_650(iParam0, 1))
		{
			return 20;
		}
	}
	else if (Global_1248240[iParam0 /*683*/].f_559 == joaat("BOUNTY_PLAYER"))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1237665[iParam0 /*27*/].f_16) && Global_1237665[iParam0 /*27*/].f_16 == Global_1238240[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1)
		{
			return 2;
		}
		else
		{
			return 22;
		}
	}
	if (func_141(iParam0, 1073741824 /* Float: 2f */))
	{
		return 25;
	}
	if (func_651(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 11;
	}
	return 0;
}

int func_492(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return Global_1238240[iParam1 /*303*/][iParam0 /*23*/].f_20;
}

bool func_493(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar0 != Global_1248240[iParam0 /*683*/].f_595)
	{
		bVar1 = GANG::_0xD6F6ACF4392187FB(Global_1248240[iParam0 /*683*/].f_595);
		if (((Global_1248240[iParam0 /*683*/].f_594 > 1 && GANG::_0x149A2751AB66AC02(Global_1248240[iParam0 /*683*/].f_595) > 0) && GANG::_0x4BE6C13A45CCA8EC(Global_1248240[iParam0 /*683*/].f_595) != 255) && GANG::_0x4BE6C13A45CCA8EC(Global_1248240[iParam0 /*683*/].f_595) == Global_1248240[iParam0 /*683*/].f_596)
		{
			*bParam1 = 1;
		}
		Global_1248240[iParam0 /*683*/].f_595 = iVar0;
		return bVar1;
	}
	Global_1248240[iParam0 /*683*/].f_594 = GANG::_0x149A2751AB66AC02(Global_1248240[iParam0 /*683*/].f_595);
	Global_1248240[iParam0 /*683*/].f_596 = GANG::_0x4BE6C13A45CCA8EC(Global_1248240[iParam0 /*683*/].f_595);
	return false;
}

void func_494(int iParam0)
{
	int iVar0;

	iVar0 = func_446(Global_1237665[iParam0 /*27*/], Global_1237665[iParam0 /*27*/].f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_652(iVar0);
}

void func_495(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900688.f_1 == 2 || Global_1900688.f_1 == 5) || Global_1900688.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_17() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_248(Global_1893587.f_2);
	Global_1900688.f_1 = 3;
	Global_1900688.f_2 = 0;
	Global_1900688.f_7 = iVar0;
	Global_1900688.f_8 = iParam0;
	Global_1900688.f_9 = iVar1;
	if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
	{
		func_250(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
	}
	else if (Global_1900688.f_11 != -1)
	{
		func_250(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
	}
}

void func_496(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_40(iParam0, 134217728))
	{
		return;
	}
	iVar0 = Global_1237665[iParam0 /*27*/].f_5;
	if (!func_120(iVar0))
	{
		return;
	}
	switch (Global_1248240[iParam0 /*683*/].f_559)
	{
		case joaat("CAMP_RAID"):
			bVar1 = true;
			iVar2 = 3;
			break;
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_SELL"):
			bVar1 = true;
			iVar2 = 3;
			break;
	}
	func_653(iVar0, iVar2, bVar1);
	func_144(iParam0, 134217728);
}

void func_497()
{
	struct<2> Var0;

	Var0 = { func_96(joaat("MP_FETCH_LAST_ATTEMPTED_CAMP_SELL_PVP_TIMESTAMP")) };
	STATS::STAT_ID_SET_INT(&Var0, Global_1296859.f_21, true);
}

bool func_498(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, 572283279, &iVar0, 0);
	}
	return iVar0;
}

void func_499(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_36(Param0))
	{
		return;
	}
	if (!func_109(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_654(Param0);
	}
	if (!func_36(func_255(0)))
	{
		func_254(Param0, 3);
		func_257(bParam3);
		func_258(!bParam4);
		func_655(Param0, -1);
		if (bParam2 && !func_656(2))
		{
			func_418(&Global_0, 1024);
		}
		func_260(1);
	}
	else
	{
		func_655(Param0, -1);
		func_254(Param0, 4);
		func_657(Param0, 0);
	}
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_262(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_658(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_500(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_263(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_416(Param0);
	Var0.f_3 = iParam3;
	func_659(&Var0, bParam2, iParam4);
	return 1;
}

void func_501(int iParam0)
{
	if (Global_1194053.f_440 != 2)
	{
		return;
	}
	if (Global_1194053.f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053.f_440.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
}

int func_502(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_660(Param0))
	{
		return -1;
	}
	iVar1 = func_661(Param0);
	if (iVar1 >= 0)
	{
		func_662(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900806;
		Global_1900807[iVar0 /*2*/] = { Param0 };
		Global_1900838[iVar0 /*2*/] = { Var2 };
		func_662(Param0, 1);
		Global_1900806++;
		if (Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

int func_503(struct<2> Param0)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_256(Param0, func_663(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_504(int iParam0)
{
	if (Global_1109804.f_17)
	{
		func_664(iParam0);
	}
	else
	{
		func_665(iParam0);
	}
}

bool func_505()
{
	if (func_17() != 0)
	{
		return true;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
	{
		return true;
	}
	if (Global_1139381.f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1139381.f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return true;
	}
	return false;
}

void func_506(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 14, &uParam1);
}

bool func_507(int iParam0)
{
	return iParam0 != -1;
}

void func_508(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, joaat("REL_PLAYER_COP"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_0"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_1"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_2"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_3"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_4"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_5"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_6"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_7"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_8"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_9"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_10"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_11"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_12"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_13"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_14"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_15"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_16"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_17"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_18"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_19"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_20"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_21"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_22"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_23"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_24"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_25"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_26"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_27"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_28"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_29"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_30"), 0);
	func_666(iParam0, iParam1, joaat("REL_PLAYER_31"), 0);
}

void func_509(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, joaat("REL_GUAMA_LAW"), 0);
	func_666(iParam0, iParam1, joaat("REL_PINKERTONS"), 0);
	func_666(iParam0, iParam1, joaat("REL_CRIMINALS"), 0);
	func_666(iParam0, iParam1, joaat("REL_GUNSLINGERS"), 0);
	func_666(iParam0, iParam1, joaat("REL_GANG_DUTCHS"), 0);
	func_666(iParam0, iParam1, joaat("REL_GANG_LARAMIE_GANG"), 0);
	func_666(iParam0, iParam1, joaat("REL_GANG_SKINNER_BROTHERS"), 0);
	func_666(iParam0, iParam1, joaat("REL_GANG_CREOLE"), 0);
	func_666(iParam0, iParam1, joaat("REL_GANG_LEMOYNE_RAIDERS"), 0);
	func_666(iParam0, iParam1, joaat("REL_GANG_ODRISCOLL"), 0);
	func_666(iParam0, iParam1, joaat("REL_GANG_MURFREE_BROOD"), 0);
}

void func_510(int iParam0, int iParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, joaat("REL_CIVMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, joaat("REL_CIVFEMALE"));
}

void func_511(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, joaat("REL_ALLIGATOR"), 0);
	func_666(iParam0, iParam1, joaat("REL_WILD_ANIMAL_PREDATOR"), 0);
}

void func_512(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, joaat("REL_WILD_ANIMAL"), 0);
	func_666(iParam0, iParam1, joaat("REL_DOMESTICATED_ANIMAL"), 0);
	func_666(iParam0, iParam1, joaat("REL_WILD_ANIMAL_BIRD"), 0);
	func_666(iParam0, iParam1, joaat("REL_BOAR"), 0);
	func_666(iParam0, iParam1, joaat("REL_HEN_ANIMAL"), 0);
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_666(iParam1, iParam2, func_667(iParam0, iParam3), 0);
}

void func_514(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, joaat("REL_COP"), 0);
}

struct<2> func_515(int iParam0, var uParam1)
{
	var uVar0;
	struct<33> Var1;
	struct<2> Var34;

	uVar0 = func_223(func_163(iParam0), uParam1);
	Var1 = { func_668(uVar0, 1, iParam0, uParam1) };
	if (Var1.f_3 != 0)
	{
		Var34 = { func_359(Var1.f_3, 4) };
		if (!func_36(Var34))
		{
			return func_210();
		}
		return Var34;
	}
	return func_210();
}

int func_516(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

bool func_517(var uParam0, int iParam1)
{
	uParam0->f_2 = 1168896522;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_518(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<2> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;

	iVar8 = func_669(iParam1);
	if (iVar8 == -1)
	{
		return 0;
	}
	if (!func_670(&Var0))
	{
		return 0;
	}
	if (!func_671(&Var0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_671(&Var0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_671(&Var0, 7, func_672(iVar8), 0, 1))
	{
		return 0;
	}
	if (!func_671(&Var0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_671(&Var0, 9, iParam1, 0, 1))
	{
		return 0;
	}
	uVar7 = Var0.f_1;
	if (iVar8 != 3)
	{
		if (!func_671(&Var0, 19, 0, 0, 1))
		{
			return 0;
		}
		if (!func_671(&Var0, 20, func_673(iParam4), 0, 1))
		{
			return 0;
		}
		if (!func_671(&Var0, 21, func_674(4), 0, 1))
		{
			return 0;
		}
		if (!func_671(&Var0, 22, iParam2, 0, 1))
		{
			return 0;
		}
		uParam0->f_39 = func_675(&Var0);
	}
	Var0.f_1 = uVar7;
	if (func_671(&Var0, 16, 0, 0, 1))
	{
		uParam0->f_37 = func_676(&Var0, 0);
		uVar6 = Var0.f_1;
	}
	uParam0->f_37++;
	iVar9 = 0;
	while (iVar9 <= (uParam0->f_37 - 1))
	{
		Var0.f_1 = uVar6;
		if (iVar9 == 0)
		{
			iVar5 = iParam1;
		}
		else
		{
			if (!func_671(&Var0, 10, (iVar9 - 1), 0, 1))
			{
				return 0;
			}
			iVar5 = func_677(&Var0);
		}
		if (!func_678(uParam0[iVar9 /*6*/], iVar5, iParam2, iParam3, iParam4))
		{
			return 0;
		}
		iVar9++;
	}
	return 1;
}

bool func_519(var uParam0, int iParam1)
{
	uParam0->f_2 = 1700129460;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_520(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_521(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

bool func_522(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = func_492(iParam0, iParam1);
	if (bParam2 && iVar0 == 0)
	{
		return true;
	}
	if (bParam3 && iVar0 == 21)
	{
		return true;
	}
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
		case 21:
			return true;
		default:
			break;
	}
	return false;
}

bool func_523(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (iParam2 && func_679(iParam0, fParam1, bParam5))
	{
		return true;
	}
	if (iParam3 && func_680(iParam0, fParam1))
	{
		return true;
	}
	if (iParam4 && func_681(iParam0, fParam1))
	{
		return true;
	}
	if (iParam6 && func_682(iParam0, fParam1))
	{
		return true;
	}
	return false;
}

int func_524(int iParam0)
{
	if (func_36(Global_1248240[iParam0 /*683*/].f_584) && func_683(Global_1248240[iParam0 /*683*/].f_584, func_274(Global_1248240[iParam0 /*683*/].f_559), 0))
	{
		return 0;
	}
	if (func_684())
	{
		return 2;
	}
	if ((Global_1248240[iParam0 /*683*/].f_559 == joaat("BOUNTY_PLAYER") && func_40(iParam0, 65536)) && func_141(iParam0, 1073741824 /* Float: 2f */))
	{
		return 2;
	}
	if ((func_644(iParam0, 255) && !SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::PLAYER_ID())) || !func_64(iParam0, 512, 255))
	{
		return 0;
	}
	if (func_64(iParam0, 8388608, 255))
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1237665[iParam0 /*27*/].f_14), PLAYER::PLAYER_ID()) || func_64(iParam0, 32, 255))
	{
		return 3;
	}
	if (func_74(Global_1248240[iParam0 /*683*/].f_559) && !func_141(iParam0, 131072))
	{
		return 2;
	}
	return 1;
}

void func_525(int iParam0)
{
	int iVar0;

	iVar0 = Global_1248240[iParam0 /*683*/].f_590;
	if (!func_49(iVar0))
	{
		func_112(iParam0, 2);
		if (func_104(iVar0))
		{
			func_52(iVar0, iParam0, 0, 0);
		}
	}
	else
	{
		func_529(iVar0, iParam0, 0);
	}
	func_309(iParam0, 1048576);
}

int func_526(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_685(iVar0))
		{
			return iVar0;
		}
		else if ((iVar1 == -1 && !func_686(iVar0)) && Global_1248240.f_8880[iVar0 /*4*/].f_2 < iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_527(int iParam0, int iParam1)
{
	if (Global_1248240.f_8880[iParam0 /*4*/].f_1 != iParam1)
	{
		Global_1248240.f_8880[iParam0 /*4*/].f_1 = iParam1;
	}
}

void func_528(int iParam0, int iParam1, int iParam2)
{
	if (Global_1248240.f_8880[iParam0 /*4*/] != iParam2)
	{
		if (!func_122(iParam0, iParam1))
		{
			return;
		}
		Global_1248240.f_8880[iParam0 /*4*/] = iParam2;
		Global_1248240.f_8880[iParam0 /*4*/].f_1 = -1;
	}
}

void func_529(int iParam0, int iParam1, int iParam2)
{
	if (Global_1248240.f_8880[iParam0 /*4*/].f_2 != iParam2)
	{
		if (!func_122(iParam0, iParam1))
		{
			return;
		}
		Global_1248240.f_8880[iParam0 /*4*/].f_2 = iParam2;
	}
}

bool func_530(int iParam0, int iParam1, var uParam2)
{
	char cVar0[64];
	int iVar8;
	struct<10> Var9;

	StringCopy(&cVar0, "net_fetch", 64);
	iVar8 = iParam0;
	if (iVar8 != -1)
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(10000) <= 0)
		{
			return false;
		}
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, iVar8, true, 0))
		{
			*uParam2 = 1;
			return true;
		}
		if (func_64(iParam0, 2, 255))
		{
			return true;
		}
		SCRIPTS::REQUEST_SCRIPT(&cVar0);
		if (SCRIPTS::HAS_SCRIPT_LOADED(&cVar0))
		{
			Var9.f_7 = -1;
			Var9.f_7.f_1 = -1;
			Var9.f_9 = 255;
			Var9.f_7 = { Global_1248240[iParam0 /*683*/].f_584 };
			Var9.f_6 = iParam0;
			Var9 = iVar8;
			Global_1248240.f_8880[iParam1 /*4*/].f_3 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var9, 10, 10000);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			func_687(&cVar0, iVar8);
			return true;
		}
	}
	return false;
}

int func_531(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_688(iParam0);
	iVar1 = func_689(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_532(iVar1))
		{
			func_690(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_532(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_533(int iParam0)
{
	if (!func_691(PLAYER::PLAYER_ID(), iParam0, 8))
	{
		return;
	}
	func_692();
	Global_1109804.f_15 = 1;
	func_693(iParam0, 8);
}

bool func_534(int iParam0)
{
	if (!func_694(iParam0))
	{
		return true;
	}
	return (MISC::GET_GAME_TIMER() - func_695(iParam0)) >= func_696(iParam0);
}

bool func_535(int iParam0, int iParam1)
{
	return (Global_1107216.f_33[iParam0 /*16*/].f_3.f_8 && iParam1) != 0;
}

void func_536()
{
	struct<28> Var0;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = GANG::_0x901E0DC25080C8B9(Var0.f_10);
	Var0.f_4 = 11;
	func_697(1);
	func_445(&Var0);
}

void func_537()
{
	struct<28> Var0;
	var uVar31;
	int iVar32;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	iVar32 = NETWORK::_NETWORK_GET_SESSION_HOST();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar32))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar32))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar31, iVar32);
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = GANG::_0x901E0DC25080C8B9(Var0.f_10);
	Var0.f_4 = 10;
	func_697(0);
	func_444(&Var0, uVar31);
}

void func_538(int iParam0)
{
	vector3 vVar0;

	if (Global_1248240[iParam0 /*683*/].f_559 != joaat("BOUNTY_BOARD"))
	{
		return;
	}
	if (func_40(iParam0, 268435456))
	{
		return;
	}
	if (Global_1237665[iParam0 /*27*/].f_7 == -1)
	{
		return;
	}
	if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		func_144(iParam0, 268435456);
		return;
	}
	vVar0.x = func_699(func_698(Global_1237665[iParam0 /*27*/].f_7));
	vVar0.f_1 = Global_1237665[iParam0 /*27*/].f_21.f_3;
	vVar0.f_2 = Global_1237665[iParam0 /*27*/].f_21.f_2;
	func_700(1244342493, &vVar0, 0, 0);
	func_144(iParam0, 268435456);
}

void func_539(var uParam0, int iParam1)
{
	func_701(uParam0, iParam1);
}

void func_540(int iParam0)
{
	struct<6> Var0;

	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	Global_1108365.f_34.f_353[iParam0 /*6*/] = { Var0 };
	Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 0;
}

void func_541(int iParam0)
{
	struct<11> Var0;
	struct<2> Var11;

	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28346), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28350), iParam0);
	Global_1108365.f_34[iParam0 /*11*/].f_6 = 0;
	Var0 = 4;
	Global_1108365.f_34[iParam0 /*11*/] = { Var0 };
	func_702(iParam0);
	Var11 = 255;
	Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][iParam0 /*2*/] = { Var11 };
	if ((!func_703() || !func_704()) || Global_1572887.f_6)
	{
		func_705(MISC::_CREATE_VAR_STRING(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_706(&(Global_1108365.f_34[iParam0 /*11*/].f_8), 256))
	{
		if (func_707(Global_1108365.f_34.f_774) < 2 || Global_1108365.f_34.f_778 != 255)
		{
			func_708(&(Global_1108365.f_34.f_773), 64);
		}
		else
		{
			func_708(&(Global_1108365.f_34.f_773), 32);
		}
		Global_1108365.f_34.f_774 = Global_1296859.f_21;
	}
}

void func_542(int iParam0, bool bParam1)
{
	int iVar0;
	struct<11> Var1;
	struct<2> Var12;
	var uVar14;
	struct<6> Var15;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108365.f_34[iVar0 /*11*/].f_6)
	{
		return;
	}
	func_709(iParam0);
	func_710(iParam0);
	func_711(iParam0);
	func_712(&(Global_1108365.f_34[iVar0 /*11*/].f_8), 2);
	func_702(iVar0);
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108365.f_34.f_546[iVar0 /*7*/])) == iParam0 && !func_706(&(Global_1108365.f_34[iVar0 /*11*/].f_8), 256))
	{
		if (func_707(Global_1108365.f_34.f_774) < 2 || Global_1108365.f_34.f_778 != 255)
		{
			func_708(&(Global_1108365.f_34.f_773), 64);
		}
		else
		{
			func_708(&(Global_1108365.f_34.f_773), 32);
			Global_1108365.f_34.f_778 = iParam0;
		}
		Global_1108365.f_34.f_774 = Global_1296859.f_21;
		func_705(MISC::_CREATE_VAR_STRING(10, "PARLEY_TICKER_END", func_714(PLAYER::GET_PLAYER_NAME(iParam0), func_713(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	Global_1108365.f_34[iVar0 /*11*/] = { Var1 };
	Var12 = 255;
	Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][iVar0 /*2*/] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar14, iVar0);
	Var15.f_5 = PLAYER::PLAYER_ID();
	Var15.f_4 = 5;
	func_715(&Var15, &uVar14);
}

bool func_543(int iParam0)
{
	if (Global_1288736[iParam0 /*67*/].f_66)
	{
		return Global_1288736[iParam0 /*67*/].f_66;
	}
	return Global_1108365.f_34.f_353[iParam0 /*6*/];
}

int func_544(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_716(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_717(uParam1, iParam0, Var3);
	return 1;
}

int func_545(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
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

bool func_546(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_547()
{
	int iVar0;
	int iVar1;
	struct<39> Var2;
	int iVar41;

	iVar1 = Global_1296859.f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { Global_1940311.f_242.f_14[iVar0 /*39*/] };
		iVar41 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_718(Var2))
			{
				func_719(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_720();
}

void func_548(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_721(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_549(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_549(17), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(3), Param10.f_18);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(4), Param10.f_19);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(5), Param10.f_20);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(6), Param10.f_21);
}

char* func_549(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

void func_550(int iParam0)
{
	Global_1940311.f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1940311.f_242.f_1186), 0));
}

bool func_551(var uParam0)
{
	return true;
}

int func_552(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896738.f_384)
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_723(func_722(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_722(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_724(func_722(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_722(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_725(func_722(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_722(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_726(func_722(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_722(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_727(func_722(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_722(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_728(func_722(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_722(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_729(func_722(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_722(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_553()
{
	return Global_1940311.f_242.f_1185;
}

int func_554(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 <= 0)
	{
		return 0;
	}
	CLOCK::GET_POSIX_TIME(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + MISC::GET_RANDOM_INT_IN_RANGE(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

int func_555(var uParam0, struct<21> Param1)
{
	if (!func_730(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_556(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_516(iParam0, iParam1);
	return func_390(Global_1257541.f_451[iVar0 /*7*/].f_2, iParam2);
}

bool func_557(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	iVar0 = 0;
	while (iVar0 <= (func_324(iParam0, iParam1) - 1))
	{
		vVar1 = { func_325(func_163(iParam0), iParam1, iVar0) };
		uVar4 = func_731(func_163(iParam0), iParam1, iVar0);
		if (func_385(vVar1))
		{
		}
		else
		{
			if (func_560(vVar1, uVar4, bParam2))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

var func_558(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901947.f_166.f_34;
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_732(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

bool func_559(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false, false), vParam0) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_560(vector3 vParam0, var uParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iVar0 = joaat("NET_TRAIN");
	}
	return VOLUME::_0x397769175A7DBB30(vParam0, uParam3, 0, 0, iVar0);
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PRIMARY"):
			return 0;
		case joaat("SECONDARY"):
			return 1;
		case joaat("TROLLEY"):
			return 2;
	}
	return 0;
}

int func_562(int iParam0)
{
	return func_733(iParam0, 4);
}

float func_563(int iParam0)
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

bool func_564(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1138828.f_2[iParam0 /*42*/].f_9 == iVar0 || Global_1138828.f_2[iParam0 /*42*/].f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_565(int iParam0)
{
	return Global_1237665[iParam0 /*27*/] == -1;
}

bool func_566(int iParam0)
{
	int iVar0;

	if (!func_120(iParam0))
	{
		return false;
	}
	iVar0 = func_734(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_567(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_735(iVar0);
		if (func_62(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		iVar2++;
	}
}

bool func_568()
{
	return (Global_1296851.f_2.f_1 == 2 || Global_1296851.f_2.f_1 == 1);
}

bool func_569(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_574(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_736(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_737(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_738(iParam0))
			{
				return true;
			}
			break;
	}
	return func_739(iParam0, 0, 0, 0) >= iParam1;
}

Vector3 func_570(int iParam0)
{
	if (!func_120(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

int func_571(bool bParam0)
{
	if (func_17() == -1)
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

struct<4> func_572()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_573(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_574(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_571(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_574(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_575(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_576()
{
	return Global_1146212.f_2169[85 /*205*/].f_201;
}

float func_577()
{
	return Global_1146212.f_2169[86 /*205*/].f_201;
}

void func_578(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_579(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_740(&(Global_1139381.f_3876.f_2[func_414(iParam0, 1) /*4*/]));
}

bool func_580(struct<2> Param0, var uParam2)
{
	if (!func_36(Param0))
	{
		return false;
	}
	func_741(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

int func_581(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_580(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_582(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_349(&Var1, iParam0))
	{
		iVar0 = ((func_742() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_583(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1071686.f_19550.f_1[iVar0 /*3*/] = { Global_1071686.f_19550.f_1[iVar0 + 1 /*3*/] };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686.f_19550 < 32)
	{
		Global_1071686.f_19550.f_1[Global_1071686.f_19550 /*3*/] = { vVar1 };
	}
	Global_1071686.f_19550 = (Global_1071686.f_19550 - 1);
	if (Global_1071686.f_19550 < 0)
	{
		Global_1071686.f_19550 = 0;
	}
	return 1;
}

int func_584(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1071686.f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1071686.f_19550.f_1[iVar0 + 1 /*3*/] = { Global_1071686.f_19550.f_1[iVar0 /*3*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1071686.f_19550.f_1[iParam0 /*3*/] = { vVar1 };
	Global_1071686.f_19550++;
	if (Global_1071686.f_19550 > 32)
	{
		Global_1071686.f_19550 = 32;
	}
	return 1;
}

int func_585(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
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
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
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
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
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
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
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
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
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
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
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
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_586(int iParam0)
{
	int iVar0;

	iVar0 = func_743(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_587(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

void func_588(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_589(int iParam0, int iParam1)
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
			func_744((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_744(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_36(Global_1900736.f_1[0 /*2*/]))
	{
		func_254(Global_1900736.f_1[0 /*2*/], 3);
	}
}

int func_590(int iParam0)
{
	int iVar0;

	if (Global_1196205.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205.f_129)
	{
		if (Global_1196205[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_591(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_745(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_592(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

void func_593(var uParam0)
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
	func_747(&Var0, func_746(0, 8));
}

int func_594(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_592(uParam0))
	{
		return 0;
	}
	if (!func_748(&(uParam1->f_8)))
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
	iVar0 = func_749(uParam0, uParam1);
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
			if (!func_750(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	uParam0->f_3[iVar1 /*40*/] = { *uParam1 };
	func_136(&(uParam0->f_3[iVar1 /*40*/]), 0);
	*uParam0++;
	return 1;
}

bool func_595(var uParam0)
{
	if (func_36(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_596(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_751(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_752(iParam1)) - 1);
	}
	bVar2 = func_36(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_256(Global_1198046.f_231[iVar6 /*15*/].f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

int func_597(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (Global_1272030.f_3348[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_598(int iParam0, int iParam1)
{
	int iVar0;
	struct<29> Var1;
	int iVar32;
	int iVar33;

	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 43)
	{
		iVar32 = iVar33;
		if (iVar32 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_753(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_599(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051252.f_16[16] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[16]))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 39, Global_1051252.f_16[16]);
	func_754(uParam0, uParam0->f_1);
}

struct<2> func_600(int iParam0)
{
	return Global_1210161.f_1[iParam0 /*10*/].f_4;
}

void func_601(int iParam0, struct<2> Param1)
{
	Global_1210161.f_1[iParam0 /*10*/].f_4 = { Param1 };
	Global_1210161.f_1[iParam0 /*10*/].f_6 = func_416(Param1);
}

bool func_602(int iParam0)
{
	bool bVar0;

	bVar0 = !func_683(func_600(iParam0), func_755(iParam0), 0);
	return bVar0;
}

void func_603(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_604(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_616(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_756(iParam0, iParam1);
	if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		return;
	}
	SCRIPTS::_0x7DE4643157AD646C(iVar0);
}

void func_605(int iParam0, int iParam1)
{
	func_612(iParam0, iParam1);
	func_611(iParam0, iParam1, -1);
}

void func_606(int iParam0)
{
	func_588(&(Global_1210161.f_1[iParam0 /*10*/].f_4));
	Global_1210161.f_1[iParam0 /*10*/].f_6 = 0;
}

var func_607(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/];
}

var func_608(int iParam0, int iParam1)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_1;
}

var func_609(int iParam0, int iParam1)
{
	return Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_610(int iParam0, int iParam1)
{
	return Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/];
}

void func_611(int iParam0, int iParam1, int iParam2)
{
	Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/] = iParam2;
}

void func_612(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_618(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

bool func_613(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_631(iParam0, iParam1);
	if (iVar0 == 2147483647)
	{
		return true;
	}
	vVar1 = { func_216(PLAYER::PLAYER_ID()) };
	if (func_385(vVar1))
	{
		return false;
	}
	return func_167(vVar1, func_639(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_614(int iParam0, int iParam1, int iParam2)
{
	func_469(iParam0, func_757(iParam1, iParam2));
}

bool func_615(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	struct<5> Var13;
	var uVar18;

	iVar0 = func_608(iParam0, iParam1);
	iVar1 = func_607(iParam0);
	if (func_616(iParam0, iParam1))
	{
		return false;
	}
	if (NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(iVar1, iVar0, true, 0))
	{
		return false;
	}
	if (func_298(iParam0, 8))
	{
		if (func_622(iParam0, iParam1) != 4)
		{
			return false;
		}
	}
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_758(iParam0)) <= 0)
		{
			return false;
		}
		if (func_298(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_480(iParam0);
			Var3.f_1 = { func_639(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_600(iParam0) };
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var3, 10, func_758(iParam0));
		}
		else if (func_298(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_759(iVar1);
			Var13.f_2 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_14;
			Var13.f_3 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_15;
			Var13.f_4 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_16;
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var13, 5, func_758(iParam0));
		}
		else
		{
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar18, 1, func_758(iParam0));
		}
		func_617(iParam0, iParam1, iVar2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
		func_760(iVar1, iVar0);
		return true;
	}
	return false;
}

bool func_616(int iParam0, int iParam1)
{
	return SCRIPTS::_DOES_THREAD_EXIST(Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2);
}

void func_617(int iParam0, int iParam1, int iParam2)
{
	Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2 = iParam2;
}

void func_618(int iParam0, int iParam1, int iParam2)
{
	func_603(iParam0, func_757(iParam1, iParam2));
}

bool func_619(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_298(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_638(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_167(Global_35, func_639(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_620(int iParam0, int iParam1)
{
	return Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1;
}

void func_621(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xA4A4359320345B34(iParam2))
	{
		Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = 0;
		return;
	}
	Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = iParam2;
}

int func_622(int iParam0, int iParam1)
{
	return Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1;
}

void func_623(int iParam0, int iParam1)
{
	func_629(iParam0, iParam1);
	func_474(iParam0, iParam1);
}

void func_624(int iParam0, int iParam1, int iParam2)
{
	Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1 = iParam2;
}

int func_625(int iParam0, int iParam1)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_2;
}

int func_626(int iParam0, int iParam1)
{
	return Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2;
}

void func_627(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var10;
	int iVar12;

	if (func_620(iParam0, iParam1) != 0 && !func_761(func_620(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_474(iParam0, iParam1))
	{
		Var1 = { func_639(iParam0, iParam1) };
		Var1.f_4 = BUILTIN::TO_FLOAT(func_625(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_762(iParam0);
		Var10 = { func_600(iParam0) };
		iVar12 = 0;
		if (func_36(Var10))
		{
			iVar12 = func_416(Var10);
		}
		if (iVar12 != 0)
		{
			Var1.f_7 = iVar12;
		}
		else
		{
			Var1.f_7 = -1546799264;
		}
		func_621(iParam0, iParam1, VOLUME::_0x183C0B6CFEFFCAE4(&Var1));
	}
}

bool func_628(int iParam0, int iParam1)
{
	int iVar0;

	if (func_626(iParam0, iParam1) != 0)
	{
		return true;
	}
	func_763(iParam0, iParam1);
	func_627(iParam0, iParam1, 1);
	iVar0 = func_620(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_764(iVar0))
	{
		return false;
	}
	func_765(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_620(iParam0, iParam1)));
	return true;
}

void func_629(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_626(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iVar0))
	{
		func_765(iParam0, iParam1, 0);
		return;
	}
	VOLUME::_0xFDFECC6EE4491E11(iVar0);
	func_765(iParam0, iParam1, 0);
	func_474(iParam0, iParam1);
}

void func_630(int iParam0, int iParam1, int iParam2)
{
	Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/] = iParam2;
}

int func_631(int iParam0, int iParam1)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

int func_632(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_4;
}

bool func_633(int iParam0)
{
	return Global_1902818 > iParam0;
}

bool func_634(int iParam0, int iParam1, int iParam2)
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
		else if (func_766(iParam0, iParam1, iVar0, iParam2))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_635(int iParam0, int iParam1)
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
		else if (!func_767(iParam0, iParam1, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_636(int iParam0, int iParam1)
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
		else if (!func_461(iParam0, iVar0, 2))
		{
		}
		else if (!func_461(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_637(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;

	if (!func_441(iParam0))
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
	Var15 = { Global_1198046.f_231[iParam0 /*15*/] };
	Var0.f_1 = 0;
	Global_1198046.f_231[iParam0 /*15*/] = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1198046.f_13[iVar31] = (Global_1198046.f_13[iVar31] - 1);
	Global_1198046.f_8[iVar30] = (Global_1198046.f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1198046.f_18[iVar30] = (Global_1198046.f_18[iVar30] - 1);
	}
	if (func_768(iParam0))
	{
		Global_1198046.f_23[iVar30] = (Global_1198046.f_23[iVar30] - 1);
	}
	return 1;
}

var func_638(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_2;
}

Vector3 func_639(int iParam0, int iParam1)
{
	return func_769(Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

var func_640(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_770() != 0)
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
	iVar5 = Global_1296859.f_10;
	iVar6 = Global_1296859.f_15;
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
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_771());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_771());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_771());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_772(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar2]))
		{
			iVar10 = Global_1296859.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_773(iVar2))
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
					else if (Global_1296859.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_774(iVar2) != 1)
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
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_775(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
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

void func_641(int iParam0)
{
	Global_1198046.f_2505[iParam0 /*6*/].f_4 = 0;
	Global_1198046.f_2505[iParam0 /*6*/].f_5 = 255;
}

bool func_642(struct<2> Param0)
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == 255)
	{
		return false;
	}
	if (!func_36(Global_1056141[iVar0 /*471*/].f_2))
	{
		return false;
	}
	if (!func_256(Global_1248240.f_9299, Global_1056141[iVar0 /*471*/].f_2))
	{
		if (!func_55(Global_1056141[iVar0 /*471*/].f_2))
		{
			return false;
		}
		Global_1248240.f_9299 = { Global_1056141[iVar0 /*471*/].f_2 };
	}
	return func_211(Param0, Global_1248240.f_9299, 1, 0);
}

void func_643()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == 255)
	{
		return;
	}
	func_173(MISC::_CREATE_VAR_STRING(10, "GFH_HELP_POSSE_LEADER_CANCELLED", func_714(PLAYER::GET_PLAYER_NAME(iVar0), joaat("COLOR_POSSE_ALLY"))), 10000, 0, 0, 0, 1);
}

bool func_644(int iParam0, int iParam1)
{
	return func_64(iParam0, 1024, iParam1);
}

int func_645(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_64(iParam0, 32, 255))
	{
		return PLAYER::PLAYER_ID();
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && GANG::_0x81FB74C83C2ED69F(iVar1)) && func_64(iParam0, 32, iVar0))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 255;
}

bool func_646(var uParam0)
{
	return false;
}

float func_647()
{
	return Global_1146212.f_2169[84 /*205*/].f_201;
}

bool func_648(float fParam0, bool bParam1, bool bParam2, float fParam3)
{
	if (fParam3 == 0f)
	{
		fParam3 = Global_1901947.f_308.f_164;
	}
	if (bParam1)
	{
		fParam3 = (Global_1901947.f_308.f_164 + 50f);
	}
	if (bParam1 && bParam2)
	{
		return true;
	}
	return (((Global_1109804.f_5729 == 0 || (Global_1296859.f_21 - Global_1109804.f_5729) > Global_1109804.f_5729.f_1) && fParam0 >= 0f) && fParam0 < fParam3);
}

var func_649()
{
	return func_776(func_96(joaat("MP_FETCH_LAST_ATTEMPTED_CAMP_SELL_PVP_TIMESTAMP")));
}

bool func_650(int iParam0, int iParam1)
{
	return func_62(Global_1237665[iParam0 /*27*/].f_25, iParam1);
}

bool func_651(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return false;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((Global_1100469[iVar0 /*53*/].f_48 == 2 || (bParam1 && Global_1100469[iVar0 /*53*/].f_48 == 1)) || (bParam2 && Global_1100469[iVar0 /*53*/].f_48 == 3));
}

void func_652(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_777(Global_1272030[iParam0 /*4*/]))
	{
		return;
	}
	func_778(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_753(&Var2, iVar0, iVar1, -1, 255);
	func_779(&(Global_1272030[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_96(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_96(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1296859.f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_96(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_96(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1296859.f_21, true);
	}
}

int func_653(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_120(iParam0))
	{
		return 0;
	}
	iVar0 = func_780(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1134390[iVar1 /*83*/].f_70 = iParam0;
	Global_1134390[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_539(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_411(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_654(struct<2> Param0)
{
	struct<32> Var0;

	if (func_251(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_251(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_251(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_658(Param0, &Var0))
		{
			if (Var0.f_29 == joaat("RACE_IMPROMPTU"))
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("RACE"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_655(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_430(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736.f_66;
	func_781(Param0, iVar0);
	Global_1900736.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736.f_66)
	{
		return iVar0;
	}
	func_589(iVar0, iParam2);
	return iParam2;
}

bool func_656(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_657(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return 0;
	}
	iVar0 = func_430(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_782(Param0, func_255(0), iParam2))
	{
		func_254(func_255(0), 3);
		func_254(func_255(iVar0), 4);
		return 0;
	}
	func_589(iVar0, 0);
	func_254(func_255(0), 3);
	func_254(func_255(1), 4);
	return 1;
}

bool func_658(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_580(Param0, &vVar0);
	if (func_783(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_659(var uParam0, bool bParam1, int iParam2)
{
	func_784(uParam0, iParam2);
	if (Global_1196205.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_433(func_263(uParam0->f_1));
	}
	else
	{
		func_434();
	}
}

bool func_660(struct<2> Param0)
{
	return func_245(Param0) == 0;
}

int func_661(struct<2> Param0)
{
	int iVar0;

	if (Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1900806 - 1))
	{
		if (func_256(Global_1900807[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_662(struct<2> Param0, bool bParam2)
{
	if (!func_36(Param0))
	{
		return;
	}
	if (!func_660(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_360(Param0);
	}
	func_254(Param0, 1);
	bParam2 = bParam2;
}

struct<2> func_663(int iParam0)
{
	if (!func_785(iParam0))
	{
		return func_210();
	}
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_5;
}

void func_664(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_531(iVar0);
	if (!func_532(iVar1))
	{
		return;
	}
	if (iVar1 != iParam0)
	{
		func_693(iParam0, 7);
		func_693(iParam0, 8);
	}
	Var2 = { func_786(iVar1) };
	switch (func_787(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(Var2.f_5))
			{
				if (!func_691(iVar0, iVar1, 8) && func_535(iVar1, 1))
				{
					func_788(Var2.f_5);
					func_789(iVar1, 8);
				}
				if (func_108(Var2.f_5))
				{
					func_789(iVar1, 2);
					func_693(iVar1, 5);
				}
				else if (func_109(Var2.f_5))
				{
					func_789(iVar1, 1);
					func_693(iVar1, 6);
				}
				else
				{
					func_790(Var2);
					func_789(iVar1, 4);
					func_693(iVar1, 3);
				}
			}
			else
			{
				func_693(iVar1, 7);
			}
			break;
		case 8:
			if (Global_1109804.f_19)
			{
				if (func_535(iVar1, 4))
				{
				}
				else
				{
					func_791();
				}
				func_533(iVar1);
				func_792(1);
				func_792(0);
			}
			else
			{
				func_791();
				func_533(iVar1);
				func_792(1);
				func_792(0);
			}
			break;
	}
}

void func_665(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_531(iVar0);
	if (!func_532(iVar1))
	{
		return;
	}
	Var2 = { func_786(iParam0) };
	switch (func_787(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(Var2.f_5))
			{
				if (!func_691(iVar0, iParam0, 8) && func_535(iParam0, 1))
				{
					func_788(Var2.f_5);
					func_789(iParam0, 8);
				}
				if (func_108(Var2.f_5))
				{
					func_789(iParam0, 2);
					func_693(iParam0, 5);
				}
				else if (func_109(Var2.f_5))
				{
					func_789(iParam0, 1);
					func_693(iParam0, 6);
				}
				else
				{
					func_790(Var2);
					func_789(iParam0, 4);
					func_693(iParam0, 3);
				}
			}
			else
			{
				func_693(iParam0, 7);
			}
			break;
		case 8:
			if (Global_1109804.f_19)
			{
				if (func_535(iVar1, 4))
				{
				}
				else
				{
					func_791();
				}
				func_533(iVar1);
				func_792(1);
				func_792(0);
			}
			else
			{
				func_791();
				func_533(iVar1);
				func_792(1);
				func_792(0);
			}
			break;
	}
}

void func_666(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0 || iParam2 == 0)
	{
		return;
	}
	if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, iParam2) != iParam0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	}
	if (!bParam3 && PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iParam2, iParam1) != iParam0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
	}
}

int func_667(int iParam0, int iParam1)
{
	if (!func_507(iParam1))
	{
		return joaat("REL_NO_RELATIONSHIP");
	}
	return Global_1248240[iParam0 /*683*/].f_560[iParam1];
}

struct<33> func_668(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<33> Var0;

	if (!func_783(4, iParam0, &Var0))
	{
	}
	return Var0;
}

int func_669(int iParam0)
{
	var uVar0;

	if (!func_670(&uVar0))
	{
		return -1;
	}
	if (!func_671(&uVar0, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_671(&uVar0, 6, 0, 0, 1))
	{
		return -1;
	}
	if (!func_671(&uVar0, 8, 0, 0, 1))
	{
		return -1;
	}
	if (!func_671(&uVar0, 9, iParam0, 0, 1))
	{
		return -1;
	}
	return func_793(&uVar0);
}

bool func_670(var uParam0)
{
	var uVar0;
	var uVar5;

	uVar5 = Global_1071686.f_28448[31 /*4*/].f_3;
	if (!DATAFILE::_0x7907969497EA92F5(uVar5))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar5))
	{
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar0, 5);
	*uParam0 = uVar5;
	return true;
}

bool func_671(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BOUNTY");
		case 1:
			return joaat("MOONSHINE");
		case 2:
			return joaat("MOONSHINE_RECIPE");
		case 3:
			return joaat("LEGENDARY_ANIMAL");
		default:
			break;
	}
	return 0;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ENGLISH");
		case 1:
			return joaat("LOCALIZED");
		default:
			break;
	}
	return 0;
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CRIME");
		case 0:
			return joaat("GANG_NAME");
		case 1:
			return joaat("ILO_NAME");
		case 3:
			return joaat("HEADER");
		case 4:
			return joaat("SHARD");
		default:
			break;
	}
	return 0;
}

int func_675(var uParam0)
{
	return func_794(uParam0, 31, 1);
}

var func_676(var uParam0, int iParam1)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
	return uVar0;
}

int func_677(var uParam0)
{
	return func_794(uParam0, 25, 1);
}

bool func_678(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<2> Var0;
	var uVar5;
	int iVar6;

	iVar6 = func_669(iParam1);
	if (iVar6 == -1)
	{
		return false;
	}
	if (!func_670(&Var0))
	{
		return false;
	}
	if (!func_671(&Var0, 4, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 5, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 7, func_672(iVar6), 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 8, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 9, iParam1, 0, 1))
	{
		return false;
	}
	uVar5 = Var0.f_1;
	if (!func_671(&Var0, 15, 0, 0, 1))
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_3 = func_795(&Var0);
	uParam0->f_2 = func_796(&Var0);
	uParam0->f_1 = func_797(&Var0);
	Var0.f_1 = uVar5;
	if (!func_671(&Var0, 19, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 20, func_673(iParam4), 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 21, func_674(1), 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 22, iParam2, 0, 1))
	{
		return false;
	}
	uParam0->f_5 = func_675(&Var0);
	uVar5 = Var0.f_1;
	if (!func_798(uParam0, iParam3))
	{
		return false;
	}
	return func_799(iVar6, uParam0);
}

int func_679(int iParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	vVar0 = { func_166(iParam0) };
	iVar3 = Global_1237665[iParam0 /*27*/];
	iVar4 = Global_1237665[iParam0 /*27*/].f_6;
	iVar5 = func_324(iVar3, iVar4);
	if (!func_385(vVar0) && func_167(Global_35, vVar0) < fParam1)
	{
		return 1;
	}
	else if (bParam2 && iVar5 > 0)
	{
		iVar6 = 0;
		while (iVar6 <= (iVar5 - 1))
		{
			if (!func_385(Global_1248240[iParam0 /*683*/].f_603[iVar6 /*3*/]) && func_167(Global_35, Global_1248240[iParam0 /*683*/].f_603[iVar6 /*3*/]) < fParam1)
			{
				return 1;
			}
			iVar6++;
		}
	}
	return 0;
}

int func_680(int iParam0, float fParam1)
{
	int iVar0;

	if (func_40(iParam0, 1048576))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!func_385(Global_1248240[iParam0 /*683*/][iVar0 /*3*/]) && func_167(Global_35, Global_1248240[iParam0 /*683*/][iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_681(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1237665[iParam0 /*27*/].f_16;
	if (iVar0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && func_167(Global_35, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_682(int iParam0, float fParam1)
{
	if (!func_385(Global_1237665[iParam0 /*27*/].f_18) && func_167(Global_35, Global_1237665[iParam0 /*27*/].f_18) < fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_683(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_36(Global_1051213) && !func_256(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_275(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_800(iParam3, 255))
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
	if (func_26())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_36(Global_1051213))
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

bool func_684()
{
	if (Global_1248240.f_9297 != -1)
	{
		return true;
	}
	return false;
}

bool func_685(int iParam0)
{
	return (Global_1248240.f_8880[iParam0 /*4*/] == -1 && Global_1248240.f_8880[iParam0 /*4*/].f_1 == -1);
}

bool func_686(int iParam0)
{
	return Global_1248240.f_8880[iParam0 /*4*/].f_1 != -1;
}

void func_687(char* sParam0, int iParam1)
{
	int iVar0;

	if (Global_1051252.f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_801(sParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(&(Global_1051252.f_80[Global_1051252.f_80.f_101 /*10*/]), sParam0, 64);
	Global_1051252.f_80[Global_1051252.f_80.f_101 /*10*/].f_8 = MISC::GET_HASH_KEY(sParam0);
	Global_1051252.f_80[Global_1051252.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051252.f_80.f_101++;
	Global_1051252.f_45.f_1 = 1;
}

var func_688(int iParam0)
{
	return Global_1128574[iParam0 /*56*/];
}

int func_689(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (func_532(iParam1))
	{
		if (iVar0 == func_802(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_802(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_690(int iParam0)
{
	if (!func_532(iParam0))
	{
		return;
	}
	Global_1128574[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
}

bool func_691(int iParam0, int iParam1, int iParam2)
{
	return (Global_1128574[iParam0 /*56*/].f_1[iParam1] && iParam2) != 0;
}

void func_692()
{
	if (!func_803())
	{
		return;
	}
	if (!func_36(Global_1051213))
	{
		return;
	}
	func_588(&Global_1051213);
}

void func_693(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_1[iParam0] = (Global_1128574[iVar0 /*56*/].f_1[iParam0] - (Global_1128574[iVar0 /*56*/].f_1[iParam0] && iParam1));
}

bool func_694(int iParam0)
{
	return func_546(&Global_1130592, iParam0, 1);
}

int func_695(int iParam0)
{
	return Global_1130592.f_2[iParam0];
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1901947.f_308.f_39;
		case 0:
			return Global_1901947.f_308.f_40;
		default:
			break;
	}
	return 0;
}

void func_697(int iParam0)
{
	func_804(iParam0);
	func_805(iParam0, MISC::GET_GAME_TIMER());
}

int func_698(int iParam0)
{
	return Global_1116202[iParam0 /*42*/];
}

int func_699(int iParam0)
{
	return func_806(iParam0);
}

int func_700(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_353(iParam0, iParam2, iParam3);
	if (iVar0 != -1)
	{
		MISC::_COPY_MEMORY(&(Global_1248240.f_8903.f_101), uParam1, 3);
	}
	return iVar0;
}

void func_701(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_702(int iParam0)
{
	if (Global_1071686.f_21689[iParam0 /*8*/].f_5 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1071686.f_21689[iParam0 /*8*/]))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1071686.f_21689[iParam0 /*8*/], Global_1071686.f_21689[iParam0 /*8*/].f_5);
		}
		Global_1071686.f_21689[iParam0 /*8*/].f_5 = 0;
		func_807(iParam0);
	}
}

bool func_703()
{
	return func_62(Global_1572887.f_7, 1);
}

bool func_704()
{
	return (Global_1572887.f_106.f_75 >= 14 && Global_1572887.f_106.f_75 < 21);
}

var func_705(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = UIFEED::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

bool func_706(var uParam0, int iParam1)
{
	return func_390(*uParam0, iParam1);
}

int func_707(int iParam0)
{
	return (Global_1296859.f_21 - iParam0);
}

void func_708(var uParam0, int iParam1)
{
	if (func_706(uParam0, iParam1))
	{
		return;
	}
	func_539(uParam0, iParam1);
}

void func_709(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365.f_34[iVar0 /*11*/].f_10 = 0;
}

void func_710(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28346), iParam0);
		if (func_775(iParam0))
		{
			func_808(iParam0);
		}
	}
}

void func_711(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28350), iParam0);
}

void func_712(var uParam0, int iParam1)
{
	func_411(uParam0, iParam1);
}

int func_713(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return joaat("COLOR_POSSE_NEUTRAL");
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	iVar2 = iParam0;
	if (func_108(func_255(0)) && func_262(func_255(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1071686.f_21416.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1071686.f_21416.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1071686.f_21416.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1071686.f_21416.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_809(iParam0);
			if (iVar6 == joaat("COLOR_NET_PLAYER2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_810(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_390(Global_1071686.f_21416.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return joaat("COLOR_WINNING_PLAYER");
	}
	iVar7 = func_811(iParam0, 1);
	if (!bVar0)
	{
		if (func_812(iParam0, bParam1))
		{
			return func_810(iParam0);
		}
		else if (func_813(iParam0, bParam1))
		{
			if (func_814(iParam0, bParam1))
			{
				return joaat("COLOR_POSSE_ENEMY");
			}
			else
			{
				if (iVar7 > 5)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 3)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 1)
				{
					return joaat("COLOR_NOTORIETY_MEDIUM");
				}
				return joaat("COLOR_NOTORIETY_LOW");
			}
		}
	}
	else if (bVar1)
	{
		return func_809(iParam0);
	}
	else if (func_812(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_815(func_581(func_255(0)), 1) == 395262693)
		{
			return func_810(iParam0);
		}
		else
		{
			return func_810(iParam0);
		}
	}
	else if (func_813(iParam0, bParam1))
	{
		return joaat("COLOR_POSSE_ENEMY");
	}
	return joaat("COLOR_FRIENDLY");
}

char* func_714(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_816(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_715(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 17, uParam1);
}

void func_716(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_717(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_817(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2011 < 20)
	{
		Global_1293346.f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2011.f_1[iVar0 /*24*/] = { Global_1293346.f_2011.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1293346.f_2011.f_1[(Global_1293346.f_2011 - 1) /*24*/] = { Var1 };
}

bool func_718(struct<38> Param0, var uParam38)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Param0.f_37))
	{
		return DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Param0);
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_37);
}

void func_719(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940311.f_242.f_5, uParam0);
	func_818(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	func_550((Global_1940311.f_242.f_1186 - 1));
}

int func_720()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_242.f_14[0 /*39*/].f_25);
	iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_242.f_14[0 /*39*/].f_35);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/].f_25);
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/].f_35);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_719(Global_1940311.f_242.f_14[iVar3 /*39*/]);
	return iVar3;
}

void func_721(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_549(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_549(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("IB_SELECT");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_549(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_549(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("IB_SELECT");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_549(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_549(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_549(66), Param10.f_15);
}

char* func_722(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_816(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_723(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_724(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = UIFEED::_SHOW_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_725(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_726(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = UIFEED::_SHOW_NOTIFICATION(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_727(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_728(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_0x3F9FDDBA79117C69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_729(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam4;
	Var0.f_1 = uParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = uParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_730(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

var func_731(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901947.f_166.f_35;
	if ((func_349(&Var1, iParam0) && func_377(&Var1, iParam1)) && func_519(&Var1, iParam2))
	{
		func_732(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_732(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

int func_733(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_390(Global_1138411[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_734(int iParam0)
{
	if (!func_120(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

int func_735(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

int func_736(int iParam0)
{
	vector3 vVar0;

	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_737(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_574(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_819(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_820("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_821(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_822(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_823(iVar1);
				return true;
			}
			iVar3++;
		}
		func_823(iVar1);
	}
	return false;
}

bool func_738(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_574(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_824(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_825(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_826(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_827(iParam0);
	iVar2 = func_826(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_739(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_736(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_819(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_828(iParam0, 0);
	}
	if (func_575(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_571(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_829(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_571(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_740(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

void func_741(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_742()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1257541.f_8863;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_743(int iParam0)
{
	return func_830(iParam0) + 30;
}

void func_744(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900736.f_1[iParam0 /*2*/] };
	Global_1900736.f_1[iParam0 /*2*/] = { Global_1900736.f_1[iParam1 /*2*/] };
	Global_1900736.f_1[iParam1 /*2*/] = { Var0 };
}

int func_745(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_581(Param0);
	}
	return -1;
}

var func_746(int iParam0, int iParam1)
{
	return func_640(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_747(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 45, 37, &uParam1);
}

bool func_748(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_595(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_749(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_831(uParam1, &(uParam0->f_3[iVar1 /*40*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_750(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<29> Var0;
	struct<2> Var33;
	bool bVar35;
	int iVar36[4];
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;

	Var33 = -1;
	Var33.f_1 = -1;
	if (func_36(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_36(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_385(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_832(func_416(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		iVar44 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		iVar45 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		iVar46 = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	}
	else
	{
		NETWORK::_0x5E71E72A94985214(uParam0->f_8.f_2, 0, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PEDS() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

int func_751(int iParam0)
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

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (Global_1198046.f_3[iParam0] * 2 <= 32)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (Global_1198046.f_3[iParam0] * 2 <= 20)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (Global_1198046.f_3[iParam0] * 2 <= 16)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_753(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	MISC::_COPY_MEMORY(uParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		uParam0->f_28[iVar31] = 0;
		iVar31++;
	}
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
			func_833(uParam0, iParam2);
			break;
		case 2:
			func_834(uParam0, iParam2);
			break;
		case 3:
			func_835(uParam0, iParam2);
			break;
		case 4:
			func_836(uParam0, iParam2);
			break;
		case 12:
			func_837(uParam0, iParam2);
			break;
		case 6:
			func_838(uParam0, iParam2, -1);
			break;
		case 7:
			func_839(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_840(uParam0, iParam2);
			break;
		case 11:
			func_841(uParam0, iParam2);
			break;
		case 9:
			func_842(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_843(uParam0, iParam2);
			break;
		case 8:
			func_844(uParam0, iParam2);
			break;
		case 13:
			func_845(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_846(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_847(uParam0, iParam2);
			break;
		case 16:
			func_848(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_849(uParam0, iParam2);
			break;
		case 21:
			func_850(uParam0, iParam2);
			break;
		case 28:
			func_851(uParam0, iParam2);
			break;
		case 25:
			func_852(uParam0, iParam2);
			break;
		case 24:
			func_853(uParam0, iParam2);
			break;
		case 22:
			func_854(uParam0, iParam2);
			break;
		case 23:
			func_855(uParam0, iParam2);
			break;
		case 29:
			func_856(uParam0, iParam2);
			break;
		case 26:
			func_857(uParam0, iParam2);
			break;
		case 30:
			func_858(uParam0, iParam2);
			break;
		case 27:
			func_859(uParam0, iParam2);
			break;
		case 32:
			func_860(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_861(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_862(uParam0, iParam2);
			break;
		case 17:
			func_863(uParam0, iParam2);
			break;
		case 18:
			func_864(uParam0, iParam2);
			break;
		case 19:
			func_865(uParam0, iParam2);
			break;
		case 20:
			func_866(uParam0, iParam2);
			break;
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_867(uParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

void func_754(var uParam0, var uParam1)
{
}

int func_755(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	return Global_1198046.f_231[iParam0 /*15*/].f_5.f_8;
}

int func_756(int iParam0, int iParam1)
{
	return Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2;
}

int func_757(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

var func_758(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_1;
}

int func_759(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case joaat("NB_ANIMAL_ATTACK"):
			return 1;
		case joaat("NB_ARROWHEAD_INJURY"):
			return 2;
		case joaat("NB_EGG_PROTECTOR"):
			return 3;
		case joaat("NB_GRAVEROBBER"):
			return 4;
		case joaat("NB_KIDNAPPED"):
			return 6;
		case joaat("NB_PHOTOGRAPHY"):
			return 7;
		case joaat("NB_RIVAL_COLLECTOR"):
			return 5;
		case joaat("NB_RUNAWAY_WAGON"):
			return 11;
		case joaat("NB_TIED_UP_PED"):
			return 8;
		case joaat("NB_TREASURE_HUNTER"):
			return 9;
		case joaat("NB_TREE_MAP"):
			return 10;
		case joaat("NB_HOBO_DOG"):
			return 12;
		case joaat("NB_WILDMAN"):
			return 13;
		case joaat("NB_DUEL"):
			return 14;
		case joaat("NB_MOONSHINE_CAMP"):
			return 15;
		case joaat("NB_BEGGAR"):
			return 16;
		case joaat("NB_STALKING_HUNTER"):
			return 17;
		case joaat("NB_SLUMPED_HUNTER"):
			return 18;
		case joaat("NB_CRASHED_WAGON"):
			return 19;
		case joaat("NB_SUSPENSION_TRAP"):
			return 20;
		case joaat("LA_ALLIGATOR"):
			return 31;
		case joaat("LA_BEAR"):
			return 21;
		case joaat("LA_BEAVER"):
			return 28;
		case joaat("LA_BOAR"):
			return 24;
		case joaat("LA_BISON"):
			return 25;
		case joaat("LA_COUGAR"):
			return 22;
		case joaat("LA_PANTHER"):
			return 23;
		case joaat("LA_COYOTE"):
			return 29;
		case joaat("LA_FOX"):
			return 26;
		case joaat("LA_MOOSE"):
			return 30;
		case joaat("LA_WOLF"):
			return 27;
		case joaat("LA_BUCK"):
			return 32;
		case joaat("LA_RAM"):
			return 33;
		case joaat("LA_ELK"):
			return 34;
		default:
			break;
	}
	return 0;
}

void func_760(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051252.f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_868(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(&(Global_1051252.f_80[Global_1051252.f_80.f_101 /*10*/]), "HashOnlyScript", 64);
	Global_1051252.f_80[Global_1051252.f_80.f_101 /*10*/].f_8 = iParam0;
	Global_1051252.f_80[Global_1051252.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051252.f_80.f_101++;
	Global_1051252.f_45.f_1 = 1;
}

bool func_761(int iParam0)
{
	if (!VOLUME::_0xA4A4359320345B34(iParam0))
	{
		return true;
	}
	if (VOLUME::_0xB33A604345F58202(iParam0) == 4)
	{
		return true;
	}
	return false;
}

var func_762(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_3;
}

void func_763(int iParam0, int iParam1)
{
	if (func_620(iParam0, iParam1) != 0)
	{
		if (func_761(func_620(iParam0, iParam1)))
		{
			func_629(iParam0, iParam1);
			func_474(iParam0, iParam1);
		}
	}
}

bool func_764(int iParam0)
{
	int iVar0;

	if (!VOLUME::_0xA4A4359320345B34(iParam0))
	{
		return false;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(iParam0);
	if (iVar0 == 3)
	{
		return true;
	}
	return false;
}

void func_765(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam2))
	{
		Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = 0;
		return;
	}
	Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = iParam2;
}

bool func_766(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_461(iParam0, iParam2, func_757(iParam1, iParam3));
}

bool func_767(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_766(iParam0, iParam1, iParam2, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_768(int iParam0)
{
	if (iParam0 < 3)
	{
		return false;
	}
	if (iParam0 < (3 + Global_1198046.f_3[1]))
	{
		return false;
	}
	if (iParam0 < 35)
	{
		return true;
	}
	if (iParam0 < (35 + Global_1198046.f_3[2]))
	{
		return false;
	}
	if (iParam0 < (35 + Global_1198046.f_3[2]) + 16)
	{
		return false;
	}
	return true;
}

Vector3 func_769(int iParam0)
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

int func_770()
{
	return Global_1051252.f_12;
}

char* func_771()
{
	return "unnamed";
}

int func_772(int iParam0)
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

bool func_773(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_361(36, iParam0);
}

int func_774(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1296859.f_22[iParam0])
	{
		return Global_1100469[iParam0 /*53*/].f_1;
	}
	return 26;
}

bool func_775(int iParam0)
{
	if (func_869(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_870(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

var func_776(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

bool func_777(int iParam0)
{
	return iParam0 != 0;
}

int func_778(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 43)
	{
		*uParam1 = iVar1;
		func_753(&Var2, *uParam1, -1, -1, 255);
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
				iVar0++;
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_779(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_780(int iParam0)
{
	if (!func_120(iParam0))
	{
		return 0;
	}
	if (!func_566(iParam0))
	{
		return 0;
	}
	return Global_1131196[iParam0 /*27*/].f_18.f_1;
}

void func_781(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		func_588(&(Global_1900736.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900736.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_500(Param0, 0, 1, -1);
}

bool func_782(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_36(Param0))
	{
		return false;
	}
	if (!func_36(Param2))
	{
		return true;
	}
	iVar0 = func_262(Param0);
	iVar1 = func_262(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_783(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!func_871(iParam0))
	{
		return false;
	}
	if (func_872(iParam0, iParam1, &uVar0))
	{
		func_873(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_784(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1196205.f_129 >= 32)
	{
		Global_1196205.f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205.f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		Global_1196205[Global_1196205.f_129 /*4*/] = { *uParam0 };
		Global_1196205.f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205.f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { Global_1196205[iVar1 /*4*/] };
		Global_1196205[iVar1 /*4*/] = { Global_1196205[iVar1 + 1 /*4*/] };
		Global_1196205[iVar1 + 1 /*4*/] = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	Global_1196205[iParam1 /*4*/] = { *uParam0 };
	Global_1196205.f_129++;
}

bool func_785(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 32)
	{
		return false;
	}
	return true;
}

struct<13> func_786(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3;
}

int func_787(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return func_874(iParam0);
}

int func_788(struct<2> Param0)
{
	if (func_803())
	{
		return 0;
	}
	if (!func_36(Param0))
	{
		return 0;
	}
	Global_1051213 = { Param0 };
	return 1;
}

void func_789(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_1[iParam0] = (Global_1128574[iVar0 /*56*/].f_1[iParam0] || iParam1);
}

void func_790(int iParam0)
{
	func_875(iParam0);
}

void func_791()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	iVar0 = NETWORK::_NETWORK_SESSION_GET_FLAGS();
	iVar1 |= 8;
	if (NETWORK::_0x277865A734918AE6())
	{
		NETWORK::_0xBB51299166B844F3();
	}
	if ((iVar0 && iVar1) != 0)
	{
		iVar1 = (iVar1 && iVar0);
		NETWORK::_0x78335E12DB0BF961(iVar1);
	}
}

void func_792(int iParam0)
{
	func_876(iParam0);
	func_805(iParam0, 0);
}

int func_793(var uParam0)
{
	return func_877(func_794(uParam0, 34, 1));
}

int func_794(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_795(var uParam0)
{
	return func_794(uParam0, 26, 1);
}

int func_796(var uParam0)
{
	return func_878(func_794(uParam0, 33, 1));
}

int func_797(var uParam0)
{
	return func_879(func_794(uParam0, 32, 1));
}

bool func_798(var uParam0, int iParam1)
{
	var uVar0;
	int iVar5;

	iVar5 = func_669(*uParam0);
	if (iVar5 == -1)
	{
		return false;
	}
	if (!func_670(&uVar0))
	{
		return false;
	}
	if (!func_671(&uVar0, 4, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 5, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 7, func_672(iVar5), 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 8, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 9, *uParam0, 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 17, 0, 0, 0))
	{
		return false;
	}
	if (!func_671(&uVar0, 18, func_880(iParam1), 0, 1))
	{
		return false;
	}
	uParam0->f_4 = func_881(&uVar0);
	return true;
}

int func_799(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_882(uParam1);
		case 1:
			return func_883(uParam1);
		case 3:
			return func_884(uParam1);
		default:
			break;
	}
	return 0;
}

bool func_800(int iParam0, int iParam1)
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

int func_801(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Global_1051252.f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = MISC::GET_HASH_KEY(sParam0);
	iVar0 = 0;
	while (iVar0 <= (Global_1051252.f_80.f_101 - 1))
	{
		if (Global_1051252.f_80[iVar0 /*10*/].f_8 == iVar1 && Global_1051252.f_80[iVar0 /*10*/].f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_802(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/];
}

bool func_803()
{
	return func_36(Global_1051213);
}

void func_804(int iParam0)
{
	if (func_885(&Global_1130592, iParam0, 1))
	{
	}
}

void func_805(int iParam0, int iParam1)
{
	Global_1130592.f_2[iParam0] = iParam1;
}

int func_806(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GFH_BOUNTY_BOARD_ANNESBURG_SHERIFF"):
			return joaat("ANNESBURG_SHERIFF_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_ARMADILLO_SHERIFF"):
			return joaat("ARMADILLO_SHERIFF_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_BENEDICT_POINT_STATION"):
			return joaat("BENEDICT_POINT_STATION_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_BLACKWATER_SHERIFF"):
			return joaat("BLACKWATER_SHERIFF_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_EMERALD_RANCH_STATION"):
			return joaat("EMERALD_RANCH_STATION_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_RHODES_SHERIFF"):
			return joaat("RHODES_SHERIFF_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_RIGGS_STATION"):
			return joaat("RIGGS_STATION_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_SAINT_DENIS_SHERIFF"):
			return joaat("SAINT_DENIS_SHERIFF_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_STRAWBERRY_SHERIFF"):
			return joaat("STRAWBERRY_SHERIFF_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_TUMBLEWEED_SHERIFF"):
			return joaat("TUMBLEWEED_SHERIFF_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_VALENTINE_SHERIFF"):
			return joaat("VALENTINE_SHERIFF_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_VAN_HORN_POST_OFFICE"):
			return joaat("VAN_HORN_POST_OFFICE_BOUNTY_BOARD");
		case joaat("GFH_BOUNTY_BOARD_WALLACE_STATION"):
			return joaat("WALLACE_STATION_BOUNTY_BOARD");
		default:
			break;
	}
	return 0;
}

void func_807(int iParam0)
{
	if (!func_886(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_21416.f_260), iParam0);
	}
}

void func_808(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_887(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

int func_809(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return joaat("COLOR_NET_PLAYER3");
		case 1:
			return joaat("COLOR_NET_PLAYER4");
		case 2:
			return joaat("COLOR_NET_PLAYER5");
		case 3:
			return joaat("COLOR_NET_PLAYER6");
		case 4:
			return joaat("COLOR_NET_PLAYER7");
		case 5:
			return joaat("COLOR_NET_PLAYER8");
		case 6:
			return joaat("COLOR_NET_PLAYER9");
		case 7:
			return joaat("COLOR_NET_PLAYER10");
		case 8:
			return joaat("COLOR_NET_PLAYER11");
		default:
			break;
	}
	return joaat("COLOR_NET_PLAYER2");
}

int func_810(int iParam0)
{
	if (GANG::_0x901E0DC25080C8B9(iParam0) != Global_1296859.f_15 && !func_26())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	return joaat("COLOR_POSSE_ALLY");
}

int func_811(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_888(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1100469[iVar3 /*53*/].f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947.f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947.f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947.f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947.f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947.f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947.f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_812(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == Global_1296859.f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1296859.f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1296859.f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_0x81FB74C83C2ED69F(iParam0))
	{
		return true;
	}
	return false;
}

bool func_813(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_889(iParam0))
	{
		return true;
	}
	return !func_812(iParam0, 0);
}

bool func_814(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_869(iParam0))
	{
		return false;
	}
	if (func_889(iParam0))
	{
		return false;
	}
	if (func_890(iParam0))
	{
		return true;
	}
	return func_891(iParam0);
}

int func_815(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

char* func_816(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_817(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_818(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_549(91));
	if (func_892(iVar0))
	{
		UIFEED::_0x2F901291EF177B02(iVar0, 1);
	}
}

int func_819(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_893(iParam0, 1399091007))
	{
		func_894(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_820(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_571(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_821(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_822(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_823(int iParam0)
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

int func_824(int iParam0)
{
	struct<2> Var0;

	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_826(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_827(int iParam0)
{
	int iVar0;

	iVar0 = func_824(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_828(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_895(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_897(&Var0, func_896(0));
	}
	if (!func_898(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_823(iVar14);
	return uVar15;
}

struct<4> func_829(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_899(iParam0, bParam1, 0) };
	return func_573(iParam0, Var0, Var0.f_4, bParam1);
}

int func_830(int iParam0)
{
	return iParam0 * 31;
}

bool func_831(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_256(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

bool func_832(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = { func_900(iParam0) };
	if (!func_36(Var0))
	{
		return false;
	}
	func_783(Var0, iParam0, uParam1);
	return true;
}

void func_833(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_901(uParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
			break;
		case 1:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
		case 2:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_1");
			uParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
		case 3:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_2");
			uParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
		case 4:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_3");
			uParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
			break;
		case 5:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_4");
			uParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
		case 6:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_1");
			uParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
		case 7:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_2");
			uParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
		case 8:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GREAT_PLAINS_1");
			uParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
		case 9:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}
}

void func_834(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_835(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_836(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_902(uParam0);
	uParam0->f_15[0] = joaat("22_TO_4");
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_837(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_838(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_905(uParam0, 0);
			func_905(uParam0, 1);
			func_905(uParam0, 4);
			func_905(uParam0, 5);
			break;
		case 1:
			func_905(uParam0, 2);
			func_905(uParam0, 3);
			func_905(uParam0, 6);
			func_905(uParam0, 7);
			func_906(uParam0, 2);
			break;
		default:
			func_902(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_904(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_904(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_904(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_904(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_904(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_904(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_904(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_904(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_839(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 8);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 7);
			func_904(uParam0, 8);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 6);
			func_904(uParam0, 7);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 5);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_840(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_841(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_902(uParam0);
	func_906(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_842(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_908(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_843(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_844(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_902(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_845(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_902(uParam0);
	func_906(uParam0, 1);
	func_906(uParam0, 4);
	func_906(uParam0, 8);
	func_906(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			uParam0->f_11 = { func_570(func_387(iParam2)) };
			break;
	}
}

void func_846(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_909(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_847(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_848(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_910(uParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_0");
			uParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
		case 1:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_1");
			uParam0->f_11 = { 2602.444f, -1286.57f, 51.2567f };
			break;
		case 2:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_2");
			uParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
		case 3:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_3");
			uParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
		case 4:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_4");
			uParam0->f_11 = { 2530.883f, -1149.375f, 49.0052f };
			break;
		case 5:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_5");
			uParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
		case 6:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_6");
			uParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
		case 7:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_7");
			uParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
		case 8:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_8");
			uParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
		case 9:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_9");
			uParam0->f_11 = { 2593.165f, -1207.484f, 52.3112f };
			break;
		case 10:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_10");
			uParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
		case 11:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_11");
			uParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
		case 12:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_0");
			uParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
		case 13:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_1");
			uParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
		case 14:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_2");
			uParam0->f_11 = { -843.7784f, -1282.664f, 42.3634f };
			break;
	}
}

void func_849(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1084113577;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 8;
	}
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_911(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_911(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_850(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 13;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 477228254;
	if (iParam1 > 7)
	{
		uParam0->f_27 = 18;
		uParam0->f_20[0] = joaat("NIGHT");
	}
	else
	{
		uParam0->f_27 = 1;
		uParam0->f_20[0] = joaat("DAY");
	}
	switch (iParam1)
	{
		case 0:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_912(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_912(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_851(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 1796670491;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 18;
	}
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_904(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_904(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_852(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_902(uParam0);
	if (iParam1 > 4)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_904(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_904(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_904(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_904(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_904(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_904(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_904(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_904(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_904(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_853(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_902(uParam0);
	if (iParam1 > 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 9;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_904(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_904(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_904(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_904(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_904(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_904(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_904(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_904(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_904(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_904(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_854(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 458679075;
	switch (iParam1)
	{
		case 0:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_913(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_913(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_913(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_913(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			Jump @1337; //curOff = 926
			func_913(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			Jump @1337; //curOff = 984
			func_913(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			Jump @1337; //curOff = 1042
			func_913(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			Jump @1337; //curOff = 1100
			func_913(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			Jump @1337; //curOff = 1159
			func_913(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			Jump @1337; //curOff = 1217
			func_913(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			Jump @1337; //curOff = 1276
			func_913(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
		}

void func_855(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 5;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 78935770;
	switch (iParam1)
	{
		case 0:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_856(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_902(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_857(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -463663296;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_858(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_902(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_904(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_904(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_859(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 25;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -646307557;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_860(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -196458416;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 1;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 1;
	}
	func_917(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1725684832;
			uParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
		case 1:
			uParam0->f_5 = -1992129571;
			uParam0->f_11 = { 477.293f, -270.4016f, 143.0532f };
			break;
		case 2:
			uParam0->f_5 = 2064181094;
			uParam0->f_11 = { 178.3377f, -192.7462f, 126.5609f };
			break;
		case 3:
			uParam0->f_5 = 1983503816;
			uParam0->f_11 = { -138.1221f, -21.41103f, 95.08842f };
			break;
		case 4:
			uParam0->f_5 = 1603580030;
			uParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
		case 5:
			uParam0->f_5 = 1591141935;
			uParam0->f_11 = { -2105.914f, -1658.808f, 139.2303f };
			break;
		case 6:
			uParam0->f_5 = 1382010177;
			uParam0->f_11 = { -2322.846f, -1606.925f, 147.5517f };
			break;
		case 7:
			uParam0->f_5 = -1315566672;
			uParam0->f_11 = { -2327.094f, -1401.05f, 142.4195f };
			break;
		case 8:
			uParam0->f_5 = 395106204;
			uParam0->f_11 = { -2004.499f, -1326.471f, 115.4162f };
			break;
		case 9:
			uParam0->f_5 = 88814361;
			uParam0->f_11 = { -2532.945f, -1409.852f, 145.3983f };
			break;
	}
}

void func_861(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = 970130440;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_20[1] = joaat("DAY");
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 57;
	}
	func_918(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -44146172;
			uParam0->f_11 = { -4886.723f, -3659.611f, 23.51921f };
			break;
		case 1:
			uParam0->f_5 = -1882192159;
			uParam0->f_11 = { -3706.045f, -3561.407f, 47.211f };
			break;
		case 2:
			uParam0->f_5 = -1446495535;
			uParam0->f_11 = { -3997.887f, -3743.7f, 39.394f };
			break;
		case 3:
			uParam0->f_5 = -1153835596;
			uParam0->f_11 = { -4533.075f, -3761.288f, 13.8127f };
			break;
		case 4:
			uParam0->f_5 = 345870470;
			uParam0->f_11 = { -4165.463f, -3614.162f, 49.5309f };
			break;
		case 5:
			uParam0->f_5 = -1885586340;
			uParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
		case 6:
			uParam0->f_5 = 1366147128;
			uParam0->f_11 = { 1879.319f, 2050.416f, 269.9333f };
			break;
		case 7:
			uParam0->f_5 = 1740369108;
			uParam0->f_11 = { 1522.469f, 2192.855f, 333.81f };
			break;
		case 8:
			uParam0->f_5 = -416486532;
			uParam0->f_11 = { 693.7542f, 2222.729f, 222.769f };
			break;
		case 9:
			uParam0->f_5 = -1184690199;
			uParam0->f_11 = { 756.6907f, 2034.318f, 266.4209f };
			break;
	}
}

void func_862(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_902(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = joaat("6_TO_18");
	}
	else
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = joaat("18_TO_0");
		uParam0->f_20[1] = joaat("22_TO_4");
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -145880949;
			uParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_904(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_904(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_904(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_904(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_904(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_904(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_904(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_904(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_904(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_904(uParam0, 1);
			break;
	}
}

void func_863(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_864(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_865(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_866(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_919(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_919(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_867(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam1)
	{
		case 35:
			uParam0->f_8 = joaat("HIDEOUT");
			break;
		case 36:
			uParam0->f_8 = joaat("DYNAMIC_AMBUSH");
			break;
		case 37:
			uParam0->f_8 = joaat("DYNAMIC_RESCUE_PED_MULTIPLE");
			break;
		case 38:
			uParam0->f_8 = joaat("DYNAMIC_ESCORT");
			break;
		case 39:
			uParam0->f_8 = joaat("DYNAMIC_CAMPSITE_DEFEND");
			break;
		case 40:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_SABOTAGE");
			break;
		case 41:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_DESTROY");
			break;
		case 42:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_ROADBLOCK");
			break;
		case 43:
			uParam0->f_8 = 362795228;
			break;
	}
	iVar0 = func_920(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		uParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		uParam0->f_7 = 2;
	}
	*uParam0 = func_921(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_906(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_922(func_163(iVar0), iParam2);
		uParam0->f_15[0] = func_923(func_163(iVar0), iParam2);
		uParam0->f_5 = func_316(iVar0, iParam2);
		uParam0->f_11 = { func_322(iVar0, iParam2) };
	}
}

int func_868(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051252.f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051252.f_80.f_101 - 1))
	{
		if (Global_1051252.f_80[iVar0 /*10*/].f_8 == iParam0 && Global_1051252.f_80[iVar0 /*10*/].f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_869(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_870(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1296859.f_22[iVar0])
	{
		func_808(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_887(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

bool func_871(int iParam0)
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

bool func_872(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_924(iParam0);
	uParam2->f_4 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_873(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_925(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_926(iVar0);
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
			uParam2->f_5 = func_927(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_928(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_929(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_930(iVar0);
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
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

var func_874(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_2;
}

void func_875(int iParam0)
{
	if (!func_931(iParam0))
	{
		return;
	}
	func_932(iParam0);
}

void func_876(int iParam0)
{
	if (func_933(&Global_1130592, iParam0, 1))
	{
	}
}

int func_877(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BOUNTY"):
			return 0;
		case joaat("MOONSHINE"):
			return 1;
		case joaat("MOONSHINE_RECIPE"):
			return 2;
		case joaat("LEGENDARY_ANIMAL"):
			return 3;
		default:
			break;
	}
	return -1;
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TOWNSFOLK"):
			return 0;
		case joaat("AGGRESSIVE"):
			return 1;
		case joaat("UNI_CRIMINAL"):
			return 2;
		default:
			break;
	}
	return -1;
}

int func_879(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MALE"):
			return 0;
		case joaat("FEMALE"):
			return 1;
		default:
			break;
	}
	return -1;
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DEFAULT");
		case 1:
			return joaat("COLD");
		default:
			break;
	}
	return 0;
}

int func_881(var uParam0)
{
	return func_794(uParam0, 27, 1);
}

int func_882(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_934(uParam0->f_2) == 0)
	{
		return 0;
	}
	if (uParam0->f_3 == 0)
	{
		return 0;
	}
	if (uParam0->f_5 == 0)
	{
		return 0;
	}
	return 1;
}

int func_883(var uParam0)
{
	return 1;
}

int func_884(var uParam0)
{
	return 1;
}

bool func_885(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

bool func_886(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21416.f_260), iParam0);
}

void func_887(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

float func_888(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return 0f;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && Global_1100469[iVar0 /*53*/].f_18 >= Global_1100469[iVar0 /*53*/].f_45)
	{
		return Global_1100469[iVar0 /*53*/].f_18;
	}
	return Global_1100469[iVar0 /*53*/].f_45;
}

bool func_889(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_890(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_891(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_808(iParam0);
		return false;
	}
	if (func_890(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 2)
		{
			func_935(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1296859.f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 2);
}

bool func_892(int iParam0)
{
	return iParam0 != 0;
}

int func_893(int iParam0, int iParam1)
{
	if (!func_574(iParam0, 0))
	{
		return func_937(func_936(iParam0), iParam1);
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

void func_894(int iParam0, var uParam1, var uParam2)
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

struct<14> func_895(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_896(bool bParam0)
{
	int iVar0;

	iVar0 = func_571(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_573(923904168, func_406(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_573(923904168, func_406(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_573(923904168, func_406(bParam0), -740156546, 0);
}

void func_897(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_898(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_571(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_899(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_406(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_736(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_573(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_896(bParam1) };
			if (bParam2 && func_938(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_939(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_939(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_940(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_941(bParam1) };
			switch (func_824(iParam0))
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
			if (func_942(iParam0, -1823706425))
			{
				Var0 = { func_573(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_942(iParam0, -1483207246))
			{
				Var0 = { func_573(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_573(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_942(iParam0, -1653629781))
			{
				Var0 = { func_573(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_943(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_942(iParam0, -1653629781))
			{
				Var0 = { func_573(1384535894, Var0, 1784584921, bParam1) };
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

struct<2> func_900(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_359(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_210();
}

void func_901(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_944(uParam0);
			break;
		case 1:
			func_944(uParam0);
			break;
		case 2:
			func_944(uParam0);
			break;
		case 3:
			func_945(uParam0);
			break;
		case 4:
			func_944(uParam0);
			break;
		case 5:
			func_944(uParam0);
			break;
		case 6:
			func_945(uParam0);
			break;
		case 7:
			func_945(uParam0);
			break;
		case 8:
			func_945(uParam0);
			break;
		case 9:
			func_944(uParam0);
			break;
		default:
			func_903(uParam0);
			func_902(uParam0);
			break;
	}
}

void func_902(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_905(uParam0, iVar0);
		iVar0++;
	}
}

void func_903(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_904(uParam0, iVar0);
		iVar0++;
	}
}

void func_904(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_905(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_906(var uParam0, int iParam1)
{
	func_539(&(uParam0->f_25), iParam1);
}

void func_907(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_905(uParam0, 0);
			break;
		case 1:
		case 2:
			func_905(uParam0, 1);
			func_905(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_905(uParam0, 0);
			func_905(uParam0, 2);
			break;
		case 8:
			func_905(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_905(uParam0, 1);
			break;
		default:
			func_902(uParam0);
			break;
	}
}

void func_908(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_946(uParam0);
			break;
		case 1:
			func_947(uParam0);
			break;
		case 2:
			func_948(uParam0);
			break;
		case 3:
			func_949(uParam0);
			break;
		default:
			func_903(uParam0);
			func_902(uParam0);
			break;
	}
}

void func_909(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_950(uParam0);
			break;
		case 1:
		case 2:
			func_951(uParam0);
			break;
		case 3:
		case 4:
			func_952(uParam0);
			break;
		default:
			func_902(uParam0);
			break;
	}
	func_903(uParam0);
}

void func_910(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_905(uParam0, 0);
			func_905(uParam0, 2);
			break;
		case 1:
			func_905(uParam0, 1);
			func_905(uParam0, 3);
			break;
		default:
			func_903(uParam0);
			func_902(uParam0);
			break;
	}
}

void func_911(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_904(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_904(uParam0, 0);
			break;
		default:
			func_904(uParam0, 0);
			break;
	}
	func_902(uParam0);
}

void func_912(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_904(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_904(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_904(uParam0, 2);
			break;
		default:
			func_903(uParam0);
			break;
	}
	func_902(uParam0);
}

void func_913(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_904(uParam0, 0);
			func_905(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 1);
			func_905(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_904(uParam0, 2);
			func_905(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_904(uParam0, 3);
			func_905(uParam0, 0);
			break;
	}
}

void func_914(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_904(uParam0, 0);
			func_905(uParam0, 0);
			break;
		case 2:
			func_904(uParam0, 1);
			func_905(uParam0, 0);
			break;
		case 3:
		case 4:
			func_904(uParam0, 2);
			func_905(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 3);
			func_905(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_904(uParam0, 4);
			func_905(uParam0, 1);
			break;
	}
}

void func_915(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 3);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			break;
		default:
			func_903(uParam0);
			break;
	}
	func_902(uParam0);
}

void func_916(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			break;
		default:
			func_903(uParam0);
			break;
	}
	func_902(uParam0);
}

void func_917(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_905(uParam0, 0);
			func_904(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_905(uParam0, 1);
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			break;
		default:
			func_905(uParam0, 0);
			func_904(uParam0, 0);
			break;
	}
}

void func_918(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_905(uParam0, 0);
			func_904(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_905(uParam0, 1);
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			break;
		default:
			func_905(uParam0, 0);
			func_904(uParam0, 0);
			break;
	}
}

void func_919(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_902(uParam0);
			func_903(uParam0);
			break;
		default:
			func_902(uParam0);
			func_903(uParam0);
			break;
	}
}

var func_920(int iParam0)
{
	return Global_1272030.f_3348[iParam0];
}

int func_921(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_3;
}

var func_922(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_351(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_923(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_351(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_924(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
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

int func_925(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_953(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_926(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
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
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_927(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_928(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_929(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
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
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_930(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_931(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

void func_932(int iParam0)
{
	func_588(&(Global_1118808[iParam0 /*35*/].f_16));
}

bool func_933(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

int func_934(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TOWNSFOLK");
		case 1:
			return joaat("AGGRESSIVE");
		case 2:
			return joaat("UNI_CRIMINAL");
		default:
			break;
	}
	return 0;
}

void func_935(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_954(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1296859.f_22[iVar0])
		{
			func_808(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1071686.f_21416.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1296859 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_935(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_955(&Var6, uVar4);
		}
	}
}

int func_936(int iParam0)
{
	return iParam0;
}

int func_937(int iParam0, int iParam1)
{
	if (!func_956(iParam0, 2))
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

bool func_938(int iParam0, bool bParam1)
{
	if (func_824(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_957();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_939(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_407(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_940(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_958(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_941(bool bParam0)
{
	int iVar0;

	iVar0 = func_571(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_573(271701509, func_406(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_573(271701509, func_406(bParam0), 12999093, 0);
}

bool func_942(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_824(iParam0);
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
			if (func_959(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_943(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_960(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_944(var uParam0)
{
	func_904(uParam0, 0);
	func_904(uParam0, 1);
	func_904(uParam0, 3);
	func_902(uParam0);
}

void func_945(var uParam0)
{
	func_903(uParam0);
	func_961(uParam0, 0, 3);
}

void func_946(var uParam0)
{
	func_904(uParam0, 0);
	func_905(uParam0, 0);
	func_905(uParam0, 1);
	func_905(uParam0, 2);
}

void func_947(var uParam0)
{
	func_904(uParam0, 1);
	func_902(uParam0);
}

void func_948(var uParam0)
{
	func_904(uParam0, 2);
	func_905(uParam0, 3);
}

void func_949(var uParam0)
{
	func_904(uParam0, 3);
	func_905(uParam0, 4);
}

void func_950(var uParam0)
{
	func_905(uParam0, 0);
	func_905(uParam0, 1);
}

void func_951(var uParam0)
{
	func_905(uParam0, 2);
	func_905(uParam0, 3);
}

void func_952(var uParam0)
{
	func_905(uParam0, 4);
	func_905(uParam0, 5);
}

bool func_953(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_962(iParam0, uParam1, &uVar0))
	{
		func_963(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_954(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		}
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		return true;
	}
	return false;
}

void func_955(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_964(*uParam0);
}

bool func_956(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_957()
{
	return (func_965(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_966(func_573(joaat("WARDROBE"), func_406(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_958(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_571(0);
	*uParam1 = { func_573(iParam0, func_896(0), iParam3, 0) };
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

bool func_959(int iParam0, int iParam1, int iParam2)
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

bool func_960(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_571(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

void func_961(var uParam0, int iParam1, int iParam2)
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
		func_905(uParam0, iVar0);
		iVar0++;
	}
}

bool func_962(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_924(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_963(var uParam0, int iParam1, var uParam2)
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

void func_964(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_965(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_967(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_571(bParam1), iParam0, iParam3);
}

int func_966(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_968(&uParam0, iParam4, bParam5, iParam6);
}

bool func_967(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_968(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_969(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_969(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_571(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_960(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

