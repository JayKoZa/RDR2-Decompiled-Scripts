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
	bool bVar0;

	bVar0 = func_12();
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
	func_19(Global_1214482);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1214482, 575, 48);
	func_20(NETWORK::_0xBA24095EA96DFE17(Global_1214482), 575, "g_mpFetchManagerHostData");
	if (func_21())
	{
		*Global_1224754 = { *((*Global_1215057)[func_22() /*303*/]) };
	}
	func_23(Global_1215057);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1215057, 9697, 49);
	func_24(NETWORK::_0x690806BC83BC8CA2((*Global_1215057)[0 /*303*/]), 9697, "g_mpFetchManagerPlayerData");
	if (!func_21())
	{
		func_25(Global_1225057);
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
	if (func_26())
	{
		return 0;
	}
	return 1;
}

bool func_13()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1051202->f_16[12]), false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_fetch_manager", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(&(Global_1051202->f_16[12]));
}

void func_14(bool bParam0)
{
	switch (Global_1214482->f_571)
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
	switch (Global_1225057->f_8938)
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

	Global_1225057->f_8938 = 0;
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (((*Global_1225057)[iVar0 /*686*/])->f_561 != -1)
		{
			func_33(iVar0, 1);
			func_34(iVar0);
		}
		iVar0++;
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
		MISC::_COPY_MEMORY((*uParam0)[iVar27 /*27*/], &Var0, 27);
		iVar27++;
	}
	iVar29 = 0;
	while (iVar29 <= (3 - 1))
	{
		MISC::_COPY_MEMORY(uParam0->f_352[iVar29], &uVar28, 1);
		iVar29++;
	}
	uVar30 = -1;
	iVar32 = 0;
	while (iVar32 <= 4)
	{
		MISC::_COPY_MEMORY(uParam0->f_356[iVar32 /*2*/], &uVar30, 2);
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
	return !Global_1572887->f_9;
}

int func_22()
{
	return Global_1099294->f_339;
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_35((*uParam0)[iVar0 /*303*/]);
		iVar0++;
	}
}

int func_24(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_25(var uParam0)
{
	struct<686> Var0;
	struct<4> Var686;
	var uVar690;
	struct<123> Var691;
	struct<8> Var814;
	int iVar822;
	int iVar823;

	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_6 = 16;
	Var0.f_19.f_1.f_79 = -1;
	Var0.f_19.f_1.f_84 = -1;
	Var0.f_19.f_1.f_88 = -1;
	Var0.f_19.f_1.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_84 = -1;
	Var0.f_548 = 4;
	Var0.f_561 = -1;
	Var0.f_566 = 23;
	Var0.f_590 = -1;
	Var0.f_590.f_1 = -1;
	Var0.f_593 = -1082130432;
	Var0.f_596 = -1;
	Var0.f_602 = 255;
	Var0.f_609 = 9;
	Var0.f_640 = 3;
	Var0.f_646 = 6;
	Var0.f_646.f_1.f_1 = -1;
	Var0.f_646.f_1.f_2 = -1;
	Var0.f_646.f_1.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_38 = -1;
	Var686 = -1;
	Var686.f_1 = -1;
	Var691.f_2 = -1;
	Var691.f_9 = 1;
	Var691.f_16 = 10;
	Var691.f_104 = 11;
	Var814.f_3 = 2;
	uParam0->f_9066 = { Var814 };
	iVar822 = 0;
	while (iVar822 <= (3 - 1))
	{
		uParam0->f_8939[iVar822] = 0;
		iVar822++;
	}
	uParam0->f_8943 = { Var691 };
	iVar823 = 0;
	while (iVar823 <= 12)
	{
		*((*uParam0)[iVar823 /*686*/]) = { Var0 };
		iVar823++;
	}
	iVar822 = 0;
	while (iVar822 <= 3)
	{
		*(uParam0->f_8919[iVar822 /*4*/]) = { Var686 };
		iVar822++;
	}
	uParam0->f_8936 = uVar690;
	uParam0->f_8938 = 0;
	uParam0->f_9328 = -1;
}

int func_26()
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
	if (!func_36(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	func_37(1);
}

void func_28()
{
	if (DATAFILE::_0x603AC35FD4602C76(Global_1234391->f_8113))
	{
		func_37(2);
	}
}

void func_29(bool bParam0)
{
	func_38(bParam0);
	func_39(&(Global_1214482->f_367), &(Global_1225057->f_8936));
}

void func_30()
{
	int iVar0;

	if (Global_1214482->f_571 > 0)
	{
		if (func_21())
		{
			iVar0 = 0;
			while (iVar0 <= 12)
			{
				if (func_40(iVar0, 4))
				{
					*((*(*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iVar0 /*23*/]) = { *((*Global_1224754)[iVar0 /*23*/]) };
				}
				iVar0++;
			}
		}
		func_41(1);
	}
}

void func_31()
{
	if ((DATAFILE::_0x603AC35FD4602C76(Global_1234391->f_8113) && Global_1214482->f_571 > 1) && Global_1234391->f_8111 > 1)
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

int func_33(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = ((*Global_1225057)[iParam0 /*686*/])->f_596;
	if (func_49(iVar0))
	{
		if (bParam1)
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1225057->f_8919[iVar0 /*4*/])->f_3);
		}
		return 0;
	}
	return 1;
}

void func_34(int iParam0)
{
	struct<686> Var0;
	int iVar686;
	int iVar687;
	struct<23> Var688;

	func_50(iParam0);
	func_51(iParam0);
	if (((*Global_1225057)[iParam0 /*686*/])->f_596 != -1)
	{
		func_52(((*Global_1225057)[iParam0 /*686*/])->f_596, iParam0, 0, 0);
	}
	func_53(iParam0);
	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_6 = 16;
	Var0.f_19.f_1.f_79 = -1;
	Var0.f_19.f_1.f_84 = -1;
	Var0.f_19.f_1.f_88 = -1;
	Var0.f_19.f_1.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_84 = -1;
	Var0.f_548 = 4;
	Var0.f_561 = -1;
	Var0.f_566 = 23;
	Var0.f_590 = -1;
	Var0.f_590.f_1 = -1;
	Var0.f_593 = -1082130432;
	Var0.f_596 = -1;
	Var0.f_602 = 255;
	Var0.f_609 = 9;
	Var0.f_640 = 3;
	Var0.f_646 = 6;
	Var0.f_646.f_1.f_1 = -1;
	Var0.f_646.f_1.f_2 = -1;
	Var0.f_646.f_1.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_38 = -1;
	*((*Global_1225057)[iParam0 /*686*/]) = { Var0 };
	func_54(iParam0);
	iVar686 = PLAYER::PLAYER_ID();
	if (((iVar686 >= 0 && iVar686 < 32) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar687 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar687 >= 0 && iVar687 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			Var688 = 6;
			Var688.f_21 = -1;
			Var688.f_22 = -1;
			*((*(*Global_1215057)[iVar687 /*303*/])[iParam0 /*23*/]) = { Var688 };
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

int func_36(struct<2> Param0)
{
	if (!func_55(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_56(Param0))
	{
		return 0;
	}
	return 1;
}

void func_37(int iParam0)
{
	if (Global_1214482->f_571 != iParam0)
	{
		Global_1214482->f_571 = iParam0;
	}
}

void func_38(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1214482->f_574 <= 0)
	{
		return;
	}
	iVar1 = &Global_1225057->f_8939[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar1 || (((*Global_1214482)[iVar0 /*27*/])->f_2 > -1 && ((*Global_1214482)[iVar0 /*27*/])->f_2 < 2))
		{
			func_57(&(Global_1225057->f_8939[0]), bParam0);
		}
		iVar0++;
	}
	func_58(&(Global_1225057->f_8939[1]));
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
	if ((uParam0->f_3[iVar0 /*40*/])->f_2 != -1)
	{
		Var1 = { func_59(&(Global_1186267->f_28), *(uParam0->f_3[iVar0 /*40*/])) };
		func_60(Var1, uParam0, uParam0->f_3[iVar0 /*40*/]);
	}
}

bool func_40(int iParam0, int iParam1)
{
	return (func_61(iParam0) && func_62(((*Global_1225057)[iParam0 /*686*/])->f_562, iParam1));
}

void func_41(int iParam0)
{
	if (Global_1225057->f_8938 != iParam0)
	{
		Global_1225057->f_8938 = iParam0;
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
	if (bParam0 && Global_1214482->f_574 > 0)
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

	if (Global_1214482->f_574 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = &Global_1225057->f_8939[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar2 || (((*Global_1214482)[iVar0 /*27*/])->f_2 > -1 && !func_64(iVar0, 1048576, 255)))
		{
			func_68(iVar0, bParam0);
		}
		func_69(iVar0);
		func_70(iVar0);
		func_71(iVar0);
		func_72(iVar0, ((*Global_1225057)[iVar0 /*686*/])->f_565);
		if (((*Global_1214482)[iVar0 /*27*/])->f_2 < 3)
		{
			func_73(iVar0);
		}
		if ((((*Global_1214482)[iVar0 /*27*/])->f_2 > 0 && func_74(((*Global_1225057)[iVar0 /*686*/])->f_565)) && func_75(iVar0))
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_1225057->f_8939[0] = &Global_1225057->f_8939[0] + 1;
	Global_1225057->f_8939[1] = &Global_1225057->f_8939[1] + 1;
	if (&Global_1225057->f_8939[0] >= 13)
	{
		Global_1225057->f_8939[0] = 0;
	}
	if (&Global_1225057->f_8939[1] >= 5)
	{
		Global_1225057->f_8939[1] = 0;
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
	if (Global_1225057->f_8943.f_97 <= 0)
	{
		return;
	}
	iVar0 = Global_1225057->f_8943.f_98;
	if (func_80(iVar0))
	{
		func_81(iVar0);
		iVar0 = (iVar0 + 1 % 10);
		Global_1225057->f_8943.f_98 = iVar0;
		Global_1225057->f_8943.f_97 = (Global_1225057->f_8943.f_97 - 1);
	}
}

void func_46()
{
	int iVar0;

	if (func_13())
	{
		func_82(Global_1225057->f_8943.f_122);
		Global_1225057->f_8943.f_122 = (Global_1225057->f_8943.f_122 + 1 % 32);
	}
	iVar0 = PLAYER::PLAYER_ID();
	func_83();
	Global_1225057->f_8943.f_6 = func_84(iVar0);
	if (Global_1225057->f_8943.f_6 == -1154721830)
	{
		Global_1225057->f_8943.f_6 = func_85();
		if (!func_86(2, 255) && Global_1225057->f_8943.f_6 == -1154721830)
		{
			func_87(2);
		}
		else if (func_86(2, 255) && Global_1225057->f_8943.f_6 != -1154721830)
		{
			func_88(2);
		}
		func_89(Global_1225057->f_8943.f_121, iVar0);
	}
	else if (func_86(2, 255))
	{
		func_88(2);
	}
	func_90(Global_1225057->f_8943.f_121, iVar0);
	if (func_91() && (!func_86(5, ((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1)))
	{
		func_92();
	}
	Global_1225057->f_8943.f_121 = (Global_1225057->f_8943.f_121 + 1 % 32);
}

void func_47()
{
	func_93();
	func_94();
}

void func_48()
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;

	Var0 = { func_95(538649369) };
	bVar2 = func_96(Var0);
	if (!bVar2)
	{
		return;
	}
	if (!func_97(Var0))
	{
		return;
	}
	func_98(Var0);
	func_99();
	if (Global_1225057->f_9066.f_6 == 0)
	{
		return;
	}
	iVar3 = func_100();
	if (!func_101(iVar3))
	{
		return;
	}
	func_102(iVar3);
}

bool func_49(int iParam0)
{
	return ((func_103(iParam0) && SCRIPTS::_DOES_THREAD_EXIST((Global_1225057->f_8919[iParam0 /*4*/])->f_3)) && SCRIPTS::IS_THREAD_ACTIVE((Global_1225057->f_8919[iParam0 /*4*/])->f_3, false));
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
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1717788883)
	{
		return;
	}
	if (func_40(iParam0, 128))
	{
		func_104(0);
		func_105(iParam0, 128);
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { ((*Global_1225057)[iParam0 /*686*/])->f_590 };
	bVar2 = func_40(iParam0, 33554432);
	func_105(iParam0, 33554432);
	func_51(iParam0);
	func_106(iParam0);
	if (!func_107(Var0) && !func_108(Var0))
	{
		return;
	}
	iVar3 = func_109(((*Global_1225057)[iParam0 /*686*/])->f_565);
	if (iVar3 != 0 && iVar3 != 6)
	{
		func_110(0);
	}
	func_111(iParam0, 32);
	func_111(iParam0, 16);
	if ((!bVar2 && !SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), &Global_1275573)) && !func_40(iParam0, 65536))
	{
		iVar4 = 1;
	}
	func_112(Var0, 0, 2, iVar4);
	Var5.f_1 = -1;
	Var5.f_1.f_1 = -1;
	func_113(((*Global_1225057)[iParam0 /*686*/])->f_590, &Var5);
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 == -468635158)
	{
		func_114(0);
	}
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1427578635)
	{
		if ((*Global_1214482)[iParam0 /*27*/])->f_16 == PLAYER::PLAYER_ID()
		{
			func_88(4);
		}
		func_115(1, 0, 0);
	}
	if (func_116(((*Global_1225057)[iParam0 /*686*/])->f_565))
	{
		func_117(1, 0, 0);
	}
}

void func_51(int iParam0)
{
	int iVar0;

	if (!func_40(iParam0, 134217728))
	{
		return;
	}
	iVar0 = ((*Global_1214482)[iParam0 /*27*/])->f_5;
	if (!func_118(iVar0))
	{
		return;
	}
	func_119(iVar0);
	func_105(iParam0, 134217728);
}

void func_52(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_103(iParam0))
	{
		return;
	}
	if (!func_120(iParam0, iParam1))
	{
		((*Global_1225057)[iParam1 /*686*/])->f_596 = -1;
		return;
	}
	if (&Global_1225057->f_8919[iParam0 /*4*/] != -1)
	{
		((*Global_1225057)[&Global_1225057->f_8919[iParam0 /*4*/] /*686*/])->f_596 = -1;
		if (bParam3 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
			func_111(&(Global_1225057->f_8919[iParam0 /*4*/]), 2);
		}
	}
	if (bParam2)
	{
		(Global_1225057->f_8919[iParam0 /*4*/])->f_1 = -1;
	}
	Global_1225057->f_8919[iParam0 /*4*/] = -1;
	(Global_1225057->f_8919[iParam0 /*4*/])->f_2 = 0;
}

void func_53(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (&((*Global_1225057)[iParam0 /*686*/])->f_566[iVar0] == 0)
		{
		}
		else
		{
			PED::REMOVE_RELATIONSHIP_GROUP(&(((*Global_1225057)[iParam0 /*686*/])->f_566[iVar0]));
		}
		iVar0++;
	}
}

void func_54(int iParam0)
{
	if (iParam0 != -1 && iParam0 == Global_1225057->f_9330)
	{
		Global_1225057->f_9330 = -1;
		Global_1225057->f_9331 = -1;
	}
}

int func_55(int iParam0)
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

int func_56(int iParam0)
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

void func_57(int iParam0, bool bParam1)
{
	if (((*Global_1214482)[iParam0 /*27*/])->f_2 == -1)
	{
		return;
	}
	if (((*Global_1214482)[iParam0 /*27*/])->f_2 != 3)
	{
		if (!bParam1)
		{
			func_121(iParam0, 3);
		}
		else if (((*Global_1225057)[iParam0 /*686*/])->f_565 != 0 && !func_122(((*Global_1225057)[iParam0 /*686*/])->f_565))
		{
			func_121(iParam0, 3);
		}
	}
	func_123(iParam0);
	func_124(iParam0);
	switch (((*Global_1214482)[iParam0 /*27*/])->f_2)
	{
		case 0:
			func_125(iParam0);
			break;
		case 1:
			func_126(iParam0);
			break;
		case 2:
			func_127(iParam0);
			break;
		case 3:
			func_128(iParam0);
			break;
	}
}

void func_58(int iParam0)
{
	if (((Global_1214482->f_356[iParam0 /*2*/])->f_1 && &Global_1214482->f_356[iParam0 /*2*/] != -1) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_129(), iParam0, false, 0))
	{
		func_130(iParam0);
	}
}

struct<40> func_59(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
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

void func_60(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_131(uParam41))
	{
		case -1:
			func_132(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_133(&Param0, uParam41))
			{
				if ((NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_134(uParam41, 3);
				}
				return;
			}
			if (func_135(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_134(uParam41, 1);
			break;
		case 1:
			if (!func_133(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_134(uParam41, 3);
				return;
			}
			if (func_135(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_134(uParam41, 2);
			break;
		case 2:
			if (!func_133(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_134(uParam41, 3);
				return;
			}
			if (func_135(&Param0) < 3)
			{
				return;
			}
			func_134(uParam41, 3);
			break;
		case 3:
			func_134(uParam41, -1);
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

int func_63(int iParam0)
{
	if (&Global_1225057->f_8939[iParam0] < func_136(iParam0))
	{
		Global_1225057->f_8939[iParam0] = &Global_1225057->f_8939[iParam0] + 1;
		return 0;
	}
	Global_1225057->f_8939[iParam0] = 0;
	return 1;
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_61(iParam0) && func_62(((*(*Global_1215057)[iParam2 /*303*/])[iParam0 /*23*/])->f_19, iParam1));
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return func_62(((*Global_1215057)[iParam1 /*303*/])->f_302, iParam0);
}

void func_66(int iParam0, bool bParam1)
{
	if (!func_65(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_137(&(((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_302), iParam0);
	}
}

void func_67(int iParam0, bool bParam1)
{
	if (func_65(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_138(&(((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_302), iParam0);
	}
}

void func_68(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = ((*Global_1225057)[iParam0 /*686*/])->f_561 == -1;
	bVar1 = ((*Global_1214482)[iParam0 /*27*/])->f_2 == -1;
	if (bVar0 && bVar1)
	{
		return;
	}
	if (((*Global_1214482)[iParam0 /*27*/])->f_4 != -1)
	{
		func_139(((*Global_1214482)[iParam0 /*27*/])->f_4, -1);
	}
	func_140(iParam0);
	func_141(iParam0);
	func_142(iParam0);
	func_143(iParam0);
	if (func_144(iParam0, bParam1))
	{
		if (((*Global_1225057)[iParam0 /*686*/])->f_561 != 3 && ((*Global_1225057)[iParam0 /*686*/])->f_561 != -1)
		{
			func_145(iParam0, 3);
		}
	}
	else if (func_146(iParam0, bVar0, bVar1))
	{
		func_145(iParam0, 0);
	}
	switch (((*Global_1225057)[iParam0 /*686*/])->f_561)
	{
		case 0:
			func_147(iParam0);
			break;
		case 1:
			func_148(iParam0);
			break;
		case 2:
			func_149(iParam0);
			break;
		case 3:
			func_150(iParam0);
			break;
	}
}

void func_69(int iParam0)
{
	switch (((*Global_1225057)[iParam0 /*686*/])->f_565)
	{
		case -260420884:
		case 850213441:
		case 1427578635:
		case 1918154385:
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()))
			{
				func_151();
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
		if ((((*Global_1225057)[iParam0 /*686*/])->f_548[iVar0 /*3*/])->f_2 == 0)
		{
		}
		else
		{
			func_152(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_71(int iParam0)
{
	if (func_64(iParam0, 32, 255) && !func_40(iParam0, 4194304))
	{
		func_153();
	}
}

void func_72(int iParam0, int iParam1)
{
	if (func_64(iParam0, 32, 255))
	{
		switch (iParam1)
		{
			case -1165569262:
				if (func_40(iParam0, 4194304))
				{
					func_155(func_154(), ((*Global_1225057)[iParam0 /*686*/])->f_590, 1, 1);
				}
				break;
			case 1427578635:
				if (func_40(iParam0, 4194304) && func_64(iParam0, 32, func_154()))
				{
					func_155(func_154(), ((*Global_1225057)[iParam0 /*686*/])->f_590, 1, 0);
				}
				break;
			case 1918154385:
				if (func_40(iParam0, 4194304))
				{
					func_155(func_154(), ((*Global_1225057)[iParam0 /*686*/])->f_590, 1, 1);
				}
				break;
		}
	}
}

void func_73(int iParam0)
{
	if ((((*Global_1225057)[iParam0 /*686*/])->f_565 == 1427578635 && ((*Global_1214482)[iParam0 /*27*/])->f_16 == PLAYER::PLAYER_ID()) && func_157(func_156(Global_1214482[iParam0 /*27*/]), ((*Global_1225057)[iParam0 /*686*/])->f_595) == 948632731)
	{
		func_158(4);
	}
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case -1261475678:
		case -669677371:
		case -468635158:
		case joaat("dynamic"):
			return 1;
	}
	return 0;
}

int func_75(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = ((*Global_1225057)[iParam0 /*686*/])->f_644;
	fVar1 = func_160(Global_35, func_159(iParam0));
	iVar2 = 4000;
	((*Global_1225057)[iParam0 /*686*/])->f_644 = fVar1;
	if (fVar1 < 100f)
	{
		return 1;
	}
	else if (fVar1 < 250f)
	{
		if (fVar1 < fVar0)
		{
			if (!func_40(iParam0, 1024))
			{
				if (!func_40(iParam0, 2048))
				{
					func_161(&(((*Global_1225057)[iParam0 /*686*/])->f_645));
					func_162(iParam0, 2048);
				}
				if (func_163(((*Global_1225057)[iParam0 /*686*/])->f_645) < iVar2)
				{
					return 0;
				}
			}
			func_162(iParam0, 1024);
			return 1;
		}
		else
		{
			if (func_40(iParam0, 1024))
			{
				if (func_40(iParam0, 2048))
				{
					func_161(&(((*Global_1225057)[iParam0 /*686*/])->f_645));
					func_105(iParam0, 2048);
				}
				if (func_163(((*Global_1225057)[iParam0 /*686*/])->f_645) < iVar2)
				{
					return 1;
				}
			}
			func_105(iParam0, 1024);
			return 0;
		}
	}
	return 0;
}

void func_76(int iParam0)
{
	if (Global_1225057->f_9329 != iParam0)
	{
		Global_1225057->f_9329 = iParam0;
	}
}

void func_77()
{
	if (Global_1225057->f_9329 != -1)
	{
		Global_1225057->f_9329 = -1;
	}
}

bool func_78(int iParam0)
{
	return (Global_1225057->f_8943 && iParam0) != 0;
}

void func_79()
{
	int iVar0;
	struct<7> Var2;

	if (!func_164(255))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		Var2 = { func_165(PLAYER::PLAYER_ID()) };
		BOUNTY::_0x4EF23E04A0C8FF51(&Var2, &iVar0);
		if (func_166(iVar0))
		{
			func_167(MISC::_CREATE_VAR_STRING(2, "JAIL_BOUNTY_REMOVE", iVar0), 10000, 0, 0, 0, 1);
		}
		else if (func_166(1))
		{
			func_167(MISC::_CREATE_VAR_STRING(2, "JAIL_BOUNTY_REMOVE", func_168()), 10000, 0, 0, 0, 1);
		}
		func_169(-896348601, 0, 0);
	}
	func_158(1);
}

bool func_80(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (!func_170(iParam0, 64))
	{
		func_171(iParam0, 64);
	}
	if (func_170(iParam0, 32))
	{
		bVar1 = false;
		switch (&Global_1225057->f_8943.f_16[iParam0 /*8*/])
		{
			case 509970874:
				bVar1 = func_172(8, 16);
				break;
			case -1141463485:
				bVar1 = func_173(16, 8);
				break;
			case -649633548:
				bVar1 = func_172(32, 64);
				break;
			case 504244707:
				bVar1 = func_173(64, 32);
				break;
		}
		if (bVar1)
		{
			func_174(iParam0, 32);
		}
	}
	if (!func_175(iParam0))
	{
		switch (&Global_1225057->f_8943.f_16[iParam0 /*8*/])
		{
			case 355060119:
				bVar0 = func_176(iParam0);
				break;
			case 1393257577:
				bVar0 = func_177(iParam0);
				break;
			case -896348601:
				bVar0 = func_178(iParam0);
				break;
			case -179235043:
				bVar0 = func_179(iParam0);
				break;
			case 509970874:
				bVar0 = func_180(iParam0);
				break;
			case -1141463485:
				bVar0 = func_181(iParam0);
				break;
			case -1454491980:
				bVar0 = func_182(iParam0);
				break;
			case -649633548:
				bVar0 = func_183(iParam0, (Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_6);
				break;
			case 504244707:
				bVar0 = func_184(iParam0);
				break;
			case -1473321380:
				bVar0 = func_185(iParam0, (Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_6);
				break;
			case 1265908607:
				bVar0 = func_186(iParam0);
				break;
			case -1729966722:
				bVar0 = func_187(iParam0);
				break;
			case -1228177771:
				bVar0 = func_188(iParam0, (Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_6);
				break;
			case -506555739:
				bVar0 = func_189(iParam0);
				break;
			case 1244342493:
				bVar0 = func_190(iParam0);
				break;
			case -1303136:
				bVar0 = func_191(iParam0);
				break;
			case -1555147881:
				bVar0 = func_192(iParam0);
				break;
			case 607258092:
				bVar0 = func_193(iParam0);
				break;
		}
		if (bVar0)
		{
			func_171(iParam0, 1);
		}
		else
		{
			func_171(iParam0, 1);
			func_171(iParam0, 4);
		}
	}
	return func_170(iParam0, 24);
}

void func_81(int iParam0)
{
	struct<8> Var0;

	switch (&Global_1225057->f_8943.f_16[iParam0 /*8*/])
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
	*(Global_1225057->f_8943.f_16[iParam0 /*8*/]) = { Var0 };
}

void func_82(int iParam0)
{
	if (func_86(1, iParam0))
	{
		if (func_86(4, iParam0))
		{
			if (!func_194(iParam0))
			{
				func_195(iParam0);
				return;
			}
		}
		else
		{
			if (!func_196(iParam0))
			{
				func_197(iParam0);
				return;
			}
			func_195(iParam0);
		}
	}
	else
	{
		func_197(iParam0);
	}
}

void func_83()
{
	int iVar0;

	if (func_78(2) && (MISC::GET_GAME_TIMER() - Global_1225057->f_8943.f_15) > 600000)
	{
		func_198(2);
	}
	if (Global_1225057->f_8943.f_14 <= 0)
	{
		return;
	}
	iVar0 = (Global_1225057->f_8943.f_14 - 1);
	while (iVar0 >= 0)
	{
		if (!func_199(Global_1225057->f_8943.f_9[iVar0 /*4*/]))
		{
			if ((Global_1225057->f_8943.f_9[iVar0 /*4*/])->f_3)
			{
				func_158(2);
				Global_1225057->f_8943.f_15 = MISC::GET_GAME_TIMER();
			}
			if (Global_1225057->f_8943.f_14 > 1)
			{
				SCRIPTS::_0xD426E2E3288469D6(&(Global_1225057->f_8943.f_8), &(Global_1225057->f_8943.f_9[iVar0 /*4*/]));
				*(Global_1225057->f_8943.f_9[iVar0 /*4*/]) = { *(Global_1225057->f_8943.f_9[(Global_1225057->f_8943.f_14 - 1) /*4*/]) };
			}
			else
			{
				SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1225057->f_8943.f_8));
				(Global_1225057->f_8943.f_9[iVar0 /*4*/])->f_1 = 0;
				Global_1225057->f_8943.f_9[iVar0 /*4*/] = 255;
				(Global_1225057->f_8943.f_9[iVar0 /*4*/])->f_2 = 0;
				(Global_1225057->f_8943.f_9[iVar0 /*4*/])->f_3 = 0;
				Global_1225057->f_8943.f_14 = 0;
				return;
			}
			if (Global_1225057->f_8943.f_14 > 0)
			{
				Global_1225057->f_8943.f_14 = (Global_1225057->f_8943.f_14 - 1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

int func_84(int iParam0)
{
	vector3 vVar0;

	if (!func_164(255))
	{
		return 1742861621;
	}
	if (func_200(255))
	{
		return 1742861621;
	}
	if (BOUNTY::_0x8FAF4D262FABA99C(&vVar0))
	{
		Global_1234391->f_8102.f_4 = vVar0.z;
	}
	if (Global_1275573->f_21 < Global_1234391->f_8102.f_4)
	{
		return -232718588;
	}
	if (Global_1234391->f_8102.f_5 == -1)
	{
		Global_1234391->f_8102.f_5 = Global_1275573->f_21 + 30;
	}
	if (Global_1275573->f_21 < Global_1234391->f_8102.f_5)
	{
		return -855374237;
	}
	if (func_201(iParam0, 1, 0, 1))
	{
		return -1826994236;
	}
	if (func_202(1114112, iParam0))
	{
		return 458635662;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return -86457213;
	}
	if (func_204(func_203(), func_203(), 0, 0))
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
	return -1154721830;
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)) && (((*Global_1215057)[iParam1 /*303*/])->f_300 && iParam0) != 0);
}

void func_87(int iParam0)
{
	((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 = (((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 || iParam0);
}

void func_88(int iParam0)
{
	((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 = (((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 - (((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 && iParam0));
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_194(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	Global_1225057->f_8943.f_7 = func_205(iVar0, iParam1);
	iVar1 = 0;
	switch (func_206(&uVar2, iVar0, 1))
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
			Global_1225057->f_8943.f_7 = 726443182;
			return;
	}
	if (Global_1225057->f_8943.f_7 != -605318450)
	{
		return;
	}
	func_207(iVar0, iVar1);
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_86(2, iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1225057->f_8943.f_120), iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (iParam1 == iVar0)
	{
		return;
	}
	if (_NAMESPACE26::_0x9BE7DCB22D32CCBE(_NAMESPACE26::_0x901E0DC25080C8B9(iParam1), iVar0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1225057->f_8943.f_120), iParam0);
		return;
	}
	if (BUILTIN::VDIST(func_208(iVar0), func_208(iParam1)) <= (Global_1901929->f_160.f_23 * ((*Global_1139395)[iParam0 /*34*/])->f_33))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1225057->f_8943.f_120), iParam0);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1225057->f_8943.f_120), iParam0);
	}
}

bool func_91()
{
	return ((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1 != 255;
}

void func_92()
{
	((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1 = 255;
	Global_1234391->f_8102.f_5 = -1;
}

void func_93()
{
	int iVar0;

	switch (Global_1225057->f_8943.f_1)
	{
		case 0:
			if (func_209())
			{
				func_210(1);
			}
			break;
		case 1:
			if (func_170(Global_1225057->f_8943.f_100, 32))
			{
				if (func_170(Global_1225057->f_8943.f_100, 2))
				{
					func_210(2);
				}
				else if (func_170(Global_1225057->f_8943.f_100, 4))
				{
					if (func_211(Global_1225057->f_8943.f_100))
					{
						func_212(1);
						func_210(0);
						func_213();
					}
				}
				func_174(Global_1225057->f_8943.f_100, 32);
			}
			break;
		case 2:
			iVar0 = func_215(Global_1225057->f_8943.f_2, func_214(func_156(Global_1225057->f_8943.f_2), Global_1225057->f_8943.f_3), 1427578635, ENTITY::GET_ENTITY_COORDS(Global_34, true, false), 1, 0, 0, -1082130432 /* Float: -1f */);
			if (iVar0 != 0 || func_216(PLAYER::PLAYER_ID(), 1))
			{
				func_212(1);
				func_210(0);
				func_213();
				return;
			}
			func_87(4);
			func_217(Global_1225057->f_8943.f_2, Global_1225057->f_8943.f_3, 0);
			func_212(0);
			func_210(0);
			break;
	}
}

void func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;

	iVar0 = Global_1234391->f_8102.f_6;
	iVar1 = func_218();
	iVar2 = func_219(0);
	Global_1234391->f_8102.f_6 = iVar1;
	Global_1225057->f_8943.f_5 = func_220(iVar2, iVar0, iVar1, &bVar3);
	if (Global_1225057->f_8943.f_5 != 1519094052)
	{
		if (bVar3)
		{
			func_221();
		}
		return;
	}
	if (!func_222(iVar2))
	{
		func_221();
		return;
	}
	iVar5 = -1;
	if (!func_223(1427578635, iVar2, &uVar4, &iVar5, 1, Global_1901929->f_160.f_24))
	{
		func_221();
		return;
	}
	func_217(uVar4, iVar5, 0);
	func_221();
}

struct<2> func_95(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_96(var uParam0, var uParam1)
{
	int iVar0;

	if ((Global_1275573->f_21 - Global_1234391->f_8109) > 60)
	{
		STATS::STAT_ID_GET_INT(&uParam0, &iVar0);
		STATS::STAT_ID_SET_INT(&uParam0, iVar0 + 1, true);
		Global_1234391->f_8109 = Global_1275573->f_21;
		return 1;
	}
	return 0;
}

bool func_97(var uParam0, var uParam1)
{
	int iVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &iVar0);
	return iVar0 >= 600;
}

void func_98(var uParam0, var uParam1)
{
	STATS::STAT_ID_SET_INT(&uParam0, 0, true);
}

void func_99()
{
	int iVar0;

	func_224();
	Global_1225057->f_9066.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_225(iVar0))
		{
			Global_1225057->f_9066.f_3[iVar0] = 0;
		}
		else
		{
			func_226(&(Global_1225057->f_9066.f_6), iVar0);
			switch (iVar0)
			{
				case 0:
					Global_1225057->f_9066.f_3[iVar0] = func_227();
					break;
				case 1:
					Global_1225057->f_9066.f_3[iVar0] = func_228();
					break;
			}
		}
		iVar0++;
	}
}

int func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = (iVar0 + func_229(iVar1));
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
		if (func_229(iVar1) == 0)
		{
		}
		else
		{
			iVar2 = (iVar2 - func_229(iVar1));
			if (iVar2 <= 0)
			{
				return iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_230();
		case 1:
			return func_231();
	}
	return 0;
}

void func_102(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	switch (iParam0)
	{
		case 0:
			func_223(1884341302, 0, &uVar0, &iVar1, 0, -1082130432 /* Float: -1f */);
			func_217(uVar0, iVar1, 0);
			break;
		case 1:
			func_233(-1784925006, 0, &uVar0, &iVar1, func_232(((*Global_1277166)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_5.f_12), 0, 3000f);
			func_217(uVar0, iVar1, 0);
			break;
	}
	Var2 = { func_95(-617150375) };
	STATS::STAT_ID_SET_INT(&Var2, iParam0, true);
}

bool func_103(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 4);
}

int func_104(bool bParam0)
{
	if (!func_234(joaat("freemode"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_105(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (func_40(iParam0, iParam1))
	{
		func_138(&(((*Global_1225057)[iParam0 /*686*/])->f_562), iParam1);
	}
}

void func_106(int iParam0)
{
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 != -1777724963)
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
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	func_169(607258092, 0, 0);
}

bool func_107(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_235(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_108(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_235(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case -1165569262:
		case -260420884:
		case 850213441:
		case joaat("dynamic"):
			return 6;
		case -468635158:
			return 5;
	}
	return 0;
}

void func_110(bool bParam0)
{
	int iVar0;

	if (Global_1900670->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_17() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900670->f_2 == 4 && Global_1900670->f_12 != Global_1900670->f_13) && !bParam0)
	{
		Global_1900670->f_1 = Global_1900670->f_2;
		Global_1900670->f_12 = Global_1900670->f_13;
		func_236(iVar0, Global_1900670->f_12);
	}
	else
	{
		Global_1900670->f_1 = 0;
		Global_1900670->f_7 = iVar0;
		Global_1900670->f_8 = func_237();
		Global_1900670->f_9 = func_238(Global_1893575->f_2);
		Global_1900670->f_11 = func_239(Global_1896610->f_41);
		if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
		{
			func_240(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
		else if (Global_1900670->f_11 != -1)
		{
			func_240(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
		}
		else
		{
			func_240(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
	}
	Global_1900670->f_2 = 0;
}

void func_111(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (func_64(iParam0, iParam1, 255))
	{
		func_138(&(((*(*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_19), iParam1);
	}
}

void func_112(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_36(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_107(Param0) && !func_108(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_241(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_235(Param0) == 3)
		{
			func_242(1, -1706799532);
		}
		else if (func_235(Param0) == 4)
		{
			func_242(0, -1706799532);
		}
	}
	if (func_235(Param0) == 3 || (func_235(Param0) == 1 && STATS::_0x01F4D242765C6B24(func_241(Param0))))
	{
		if (iParam3 != -1)
		{
			func_243(Param0, iParam3, iParam4);
		}
		else
		{
			func_243(Param0, 2, iParam4);
		}
	}
	func_244(Param0, 0);
	if (func_246(func_245(0), Param0))
	{
		func_247(1);
		func_248(0);
		func_249(0);
		func_250(1);
	}
	func_251(Param0);
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_252(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

int func_113(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = func_253(Param0);
	if (func_253(Param0) < 0)
	{
		return 0;
	}
	func_254(iVar0, uParam2);
	return 1;
}

void func_114(int iParam0)
{
	if (Global_1182289->f_440 != 2)
	{
		return;
	}
	if (Global_1182289->f_440.f_1 == 0)
	{
		return;
	}
	Global_1182289->f_440.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(iParam0);
}

void func_115(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_219(0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = func_255(bParam2);
	if (bParam2)
	{
		iVar3 = (Global_1901929->f_160.f_18 / 1000);
		bVar2 = true;
	}
	else if (bVar1)
	{
		iVar3 = (func_256(iVar0) / 1000);
	}
	else if (bParam1)
	{
		iVar3 = (func_257(iVar0) / 1000);
	}
	else
	{
		iVar3 = (func_258(iVar0) / 1000);
	}
	if (bParam0 || bParam2)
	{
		Global_1234391->f_8102.f_1 = (Global_1275573->f_21 + iVar3);
		func_259(2, 1);
	}
	else
	{
		Global_1234391->f_8102.f_1 = 0;
		func_260(2, 1);
	}
	if (bVar2 && Global_1234391->f_8102 > Global_1275573->f_21)
	{
		Global_1234391->f_8102 = (Global_1234391->f_8102 + iVar3);
	}
	else
	{
		Global_1234391->f_8102 = (Global_1275573->f_21 + iVar3);
	}
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case -1784925006:
		case 1884341302:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;

	Var0 = { func_95(538649369) };
	STATS::STAT_ID_SET_INT(&Var0, 0, true);
}

int func_118(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

void func_119(int iParam0)
{
	int iVar0;

	if (!func_118(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

bool func_120(int iParam0, int iParam1)
{
	return (func_103(iParam0) && (&Global_1225057->f_8919[iParam0 /*4*/] == -1 || &Global_1225057->f_8919[iParam0 /*4*/] == iParam1));
}

void func_121(int iParam0, int iParam1)
{
	if (((*Global_1214482)[iParam0 /*27*/])->f_2 != iParam1)
	{
		((*Global_1214482)[iParam0 /*27*/])->f_2 = iParam1;
	}
}

int func_122(int iParam0)
{
	int iVar0;

	iVar0 = func_261(iParam0);
	if (iVar0 != 0 && func_262(iVar0))
	{
		return 0;
	}
	if (iParam0 == 1717788883)
	{
		return func_263();
	}
	return 1;
}

void func_123(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_264(iParam0, 1073741824 /* Float: 2f */))
	{
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(((*Global_1214482)[iParam0 /*27*/])->f_13))
		{
			if (_NAMESPACE26::_0x149A2751AB66AC02(((*Global_1214482)[iParam0 /*27*/])->f_13) > 0)
			{
				iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(((*Global_1214482)[iParam0 /*27*/])->f_13);
				if (((*Global_1214482)[iParam0 /*27*/])->f_15 != iVar1)
				{
					((*Global_1214482)[iParam0 /*27*/])->f_15 = iVar1;
				}
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (_NAMESPACE26::_0x9BE7DCB22D32CCBE(((*Global_1214482)[iParam0 /*27*/])->f_13, iVar1))
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
					}
					else if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1427578635 && ((*Global_1214482)[iParam0 /*27*/])->f_16 == iVar1)
					{
						((*Global_1214482)[iParam0 /*27*/])->f_13 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar1);
						((*Global_1214482)[iParam0 /*27*/])->f_15 = iVar1;
						SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
						SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
					}
				}
				iVar2++;
			}
		}
		else if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1427578635 && func_265(((*Global_1214482)[iParam0 /*27*/])->f_16, 0, 1))
		{
			((*Global_1214482)[iParam0 /*27*/])->f_13 = _NAMESPACE26::_0x901E0DC25080C8B9(((*Global_1214482)[iParam0 /*27*/])->f_16);
			((*Global_1214482)[iParam0 /*27*/])->f_15 = ((*Global_1214482)[iParam0 /*27*/])->f_16;
			SCRIPTS::_0x31010318BA9897AC(&uVar0, ((*Global_1214482)[iParam0 /*27*/])->f_16);
		}
	}
	((*Global_1214482)[iParam0 /*27*/])->f_14 = uVar0;
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_266(iParam0);
	iVar1 = ((*Global_1214482)[iParam0 /*27*/])->f_1;
	if (iVar1 != iVar0)
	{
		if (iVar1 != -1)
		{
			Global_1214482->f_352[iVar1] = (&Global_1214482->f_352[iVar1] - 1);
		}
		if (iVar0 != -1)
		{
			Global_1214482->f_352[iVar0] = &Global_1214482->f_352[iVar0] + 1;
		}
		((*Global_1214482)[iParam0 /*27*/])->f_1 = iVar0;
	}
}

void func_125(int iParam0)
{
	if (func_40(iParam0, 1))
	{
		func_121(iParam0, 2);
	}
}

void func_126(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_267(iParam0, &bVar1))
	{
		bVar0 = true;
	}
	if (!func_268(((*Global_1214482)[iParam0 /*27*/])->f_10))
	{
		func_161(&(((*Global_1214482)[iParam0 /*27*/])->f_10));
	}
	else if (func_163(((*Global_1214482)[iParam0 /*27*/])->f_10) > 45000 && !bVar0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (func_269(((*Global_1225057)[iParam0 /*686*/])->f_565, 0) && !func_264(iParam0, 524288))
		{
			func_270(((*Global_1214482)[iParam0 /*27*/])->f_13, ((*Global_1225057)[iParam0 /*686*/])->f_590, func_40(iParam0, 67108864));
		}
		func_271(&(((*Global_1214482)[iParam0 /*27*/])->f_10));
		func_121(iParam0, 3);
	}
	else if (bVar0)
	{
		func_271(&(((*Global_1214482)[iParam0 /*27*/])->f_10));
		func_121(iParam0, 2);
	}
}

void func_127(int iParam0)
{
	if (!func_264(iParam0, 32) && func_272(iParam0, 32, 0))
	{
		func_273(iParam0);
		func_274(iParam0, 32);
	}
	else if (!func_264(iParam0, 16) && func_272(iParam0, 16, 0))
	{
		func_273(iParam0);
		func_274(iParam0, 16);
	}
	if (!func_264(iParam0, 4096) && func_272(iParam0, 4096, 0))
	{
		func_274(iParam0, 4096);
	}
	if (func_275(iParam0))
	{
		func_121(iParam0, 3);
	}
}

void func_128(int iParam0)
{
	if (func_276(iParam0))
	{
		func_277(iParam0);
	}
}

char* func_129()
{
	return "net_fetch_hideout_leader";
}

void func_130(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	*(Global_1214482->f_356[iParam0 /*2*/]) = { Var0 };
}

int func_131(var uParam0)
{
	return *uParam0;
}

struct<40> func_132(var uParam0, int iParam1)
{
	struct<40> Var0;

	Var0 = { func_278(uParam0, iParam1) };
	func_279(uParam0, iParam1);
	return Var0;
}

int func_133(var uParam0, var uParam1)
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
	if (!func_246(uParam0->f_8.f_5, uParam1->f_8.f_5))
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
	if (!func_246(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
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

void func_134(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_135(var uParam0)
{
	return *uParam0;
}

int func_136(int iParam0)
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

void func_137(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_139(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_280(iParam0, 1))
	{
		return;
	}
	bVar0 = func_281();
	func_282(iParam0);
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
			func_283(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_283(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_284(iParam0);
	}
}

void func_140(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) && ((*(*Global_1215057)[iVar2 /*303*/])[iParam0 /*23*/])->f_22 == ((*Global_1214482)[iParam0 /*27*/])->f_9)
		{
			uVar0 = (uVar0 || ((*(*Global_1215057)[iVar2 /*303*/])[iParam0 /*23*/])->f_19);
			if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar3) == _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
			{
				uVar1 = (uVar1 || ((*(*Global_1215057)[iVar2 /*303*/])[iParam0 /*23*/])->f_19);
			}
		}
		iVar2++;
	}
	((*Global_1225057)[iParam0 /*686*/])->f_563 = uVar0;
	((*Global_1225057)[iParam0 /*686*/])->f_564 = uVar1;
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (((*Global_1225057)[iParam0 /*686*/])->f_561 < 0 || ((*Global_1225057)[iParam0 /*686*/])->f_561 >= 3)
	{
		return;
	}
	if (func_64(iParam0, 8388608, 255))
	{
		return;
	}
	if (func_286(func_285(Global_1214482[iParam0 /*27*/])) && ((*Global_1225057)[iParam0 /*686*/])->f_561 < 2)
	{
		return;
	}
	iVar0 = func_287(iParam0);
	func_288(iParam0, iVar0);
	switch (iVar0)
	{
		case 2:
			iVar1 = ((*(*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_21;
			if (iVar1 != -1)
			{
				iVar2 = ((*Global_1225057)[iParam0 /*686*/])->f_603;
			}
			func_289(iParam0, iVar2);
			break;
		case 1:
			func_290(iParam0);
			break;
		case 17:
			break;
		case 3:
			if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				if (func_108(((*Global_1225057)[iParam0 /*686*/])->f_590) || func_107(((*Global_1225057)[iParam0 /*686*/])->f_590))
				{
					func_50(iParam0);
				}
			}
			else
			{
				func_289(iParam0, iVar2);
			}
			break;
		default:
			if (func_108(((*Global_1225057)[iParam0 /*686*/])->f_590) || func_107(((*Global_1225057)[iParam0 /*686*/])->f_590))
			{
				func_50(iParam0);
			}
			break;
	}
}

void func_142(int iParam0)
{
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_272(iParam0, 8388608, 0))
	{
		return;
	}
	if (func_264(iParam0, 131072))
	{
		func_291(iParam0, 134217728);
		return;
	}
	if ((func_272(iParam0, 67108864, 1) && !func_272(iParam0, 2, 1)) && !func_272(iParam0, 134217728, 1))
	{
		func_292(81846499, 0, 1);
		func_291(iParam0, 134217728);
	}
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;

	if (((*Global_1214482)[iParam0 /*27*/])->f_2 == 3 || ((*Global_1225057)[iParam0 /*686*/])->f_561 == 3)
	{
		return;
	}
	if (((*Global_1214482)[iParam0 /*27*/])->f_12 != 0 && ((*Global_1214482)[iParam0 /*27*/])->f_12 != ((*Global_1225057)[iParam0 /*686*/])->f_597)
	{
		((*Global_1225057)[iParam0 /*686*/])->f_597 = ((*Global_1214482)[iParam0 /*27*/])->f_12;
	}
	if (((*Global_1225057)[iParam0 /*686*/])->f_597 == ((*Global_1225057)[iParam0 /*686*/])->f_598)
	{
		return;
	}
	((*Global_1225057)[iParam0 /*686*/])->f_598 = ((*Global_1225057)[iParam0 /*686*/])->f_597;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (!MISC::IS_BIT_SET(((*Global_1225057)[iParam0 /*686*/])->f_597, iVar0))
		{
		}
		else
		{
			iVar1 = iVar2;
			Var3 = { func_293(iParam0, iVar0) };
			if (PED::ADD_RELATIONSHIP_GROUP(&Var3, &iVar1))
			{
				func_294(iParam0, iVar0, iVar1);
				func_295(iParam0, iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

int func_144(int iParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		return 1;
	}
	iVar0 = ((*Global_1214482)[iParam0 /*27*/])->f_2;
	if (iVar0 == 3 || iVar0 == -1)
	{
		return 1;
	}
	if (((*(*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_22 != -1 && ((*(*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_22 != ((*Global_1214482)[iParam0 /*27*/])->f_9)
	{
		return 1;
	}
	return 0;
}

void func_145(int iParam0, int iParam1)
{
	if (((*Global_1225057)[iParam0 /*686*/])->f_561 != iParam1)
	{
		((*Global_1225057)[iParam0 /*686*/])->f_561 = iParam1;
	}
}

bool func_146(int iParam0, bool bParam1, bool bParam2)
{
	if (func_264(iParam0, 64))
	{
		return false;
	}
	return (bParam1 && !bParam2);
}

void func_147(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_40(iParam0, 1))
	{
		iVar0 = Global_1214482[iParam0 /*27*/];
		uVar1 = func_156(iVar0);
		iVar2 = ((*Global_1214482)[iParam0 /*27*/])->f_6;
		((*(*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_22 = ((*Global_1214482)[iParam0 /*27*/])->f_9;
		((*Global_1225057)[iParam0 /*686*/])->f_594 = func_296(uVar1, iVar2);
		((*Global_1225057)[iParam0 /*686*/])->f_595 = func_214(uVar1, iVar2);
		((*Global_1225057)[iParam0 /*686*/])->f_565 = func_285(iVar0);
		((*Global_1225057)[iParam0 /*686*/])->f_590 = { func_297(iParam0) };
		((*Global_1225057)[iParam0 /*686*/])->f_604 = func_298(iVar0, iVar2);
		((*Global_1225057)[iParam0 /*686*/])->f_605 = func_299(iVar0, iVar2);
		((*Global_1225057)[iParam0 /*686*/])->f_601 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		iVar4 = func_300(uVar1, iVar2);
		iVar3 = 0;
		while (iVar3 <= (iVar4 - 1))
		{
			((*Global_1225057)[iParam0 /*686*/])->f_548[iVar3 /*3*/] = func_301(uVar1, iVar2, iVar3);
			(((*Global_1225057)[iParam0 /*686*/])->f_548[iVar3 /*3*/])->f_1 = func_302(uVar1, iVar2, iVar3);
			(((*Global_1225057)[iParam0 /*686*/])->f_548[iVar3 /*3*/])->f_2 = func_303(uVar1, iVar2, iVar3);
			iVar3++;
		}
		if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1884341302)
		{
			((*Global_1225057)[iParam0 /*686*/])->f_606 = { ((*Global_1214482)[iParam0 /*27*/])->f_18 };
		}
		else
		{
			((*Global_1225057)[iParam0 /*686*/])->f_606 = { func_304(iVar0, iVar2) };
		}
		if (((*Global_1214482)[iParam0 /*27*/])->f_21 != 0)
		{
			func_305(&(((*Global_1214482)[iParam0 /*27*/])->f_21), &(((*Global_1225057)[iParam0 /*686*/])->f_646), 0);
		}
		iVar5 = func_306(iVar0, iVar2);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				*(((*Global_1225057)[iParam0 /*686*/])->f_609[iVar6 /*3*/]) = { func_307(uVar1, iVar2, iVar6) };
				iVar6++;
			}
		}
		if (func_308(uVar1, iVar2))
		{
			func_162(iParam0, 4096);
		}
		if (func_309(uVar1, iVar2))
		{
			func_162(iParam0, 8192);
		}
		if (func_310(uVar1, iVar2))
		{
			func_162(iParam0, 16384);
		}
		if (func_311(uVar1, iVar2) && PLAYER::PLAYER_ID() != ((*Global_1214482)[iParam0 /*27*/])->f_16)
		{
			func_162(iParam0, 32768);
		}
		if (func_312(uVar1, iVar2))
		{
			func_162(iParam0, 131072);
		}
		if (func_313(uVar1, iVar2))
		{
			func_162(iParam0, 262144);
		}
		if (func_314(uVar1, iVar2))
		{
			func_162(iParam0, 67108864);
		}
		func_162(iParam0, 1);
	}
	if (((*Global_1214482)[iParam0 /*27*/])->f_2 == 3)
	{
		func_145(iParam0, 3);
	}
	else if (((*Global_1214482)[iParam0 /*27*/])->f_2 > 0 && ((*Global_1214482)[iParam0 /*27*/])->f_2 <= 1)
	{
		func_145(iParam0, 1);
	}
	else if (((*Global_1214482)[iParam0 /*27*/])->f_2 >= 2)
	{
		func_145(iParam0, 2);
	}
}

void func_148(int iParam0)
{
	if (!func_286(((*Global_1225057)[iParam0 /*686*/])->f_565))
	{
		func_315(iParam0);
		func_316(iParam0);
	}
	if (((*Global_1214482)[iParam0 /*27*/])->f_2 != 1)
	{
		func_145(iParam0, ((*Global_1214482)[iParam0 /*27*/])->f_2);
	}
}

void func_149(int iParam0)
{
	if (!func_40(iParam0, 131072) && (func_264(iParam0, 4096) || func_264(iParam0, 16)))
	{
		func_317(((*Global_1225057)[iParam0 /*686*/])->f_590);
	}
	func_315(iParam0);
	func_316(iParam0);
	func_318(iParam0);
}

void func_150(int iParam0)
{
	if (func_319(iParam0))
	{
		func_34(iParam0);
	}
}

void func_151()
{
	func_320(1);
}

void func_152(int iParam0, int iParam1)
{
	switch ((((*Global_1225057)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_1)
	{
		case joaat("disable"):
			switch (&((*Global_1225057)[iParam0 /*686*/])->f_548[iParam1 /*3*/])
			{
				case joaat("shop"):
					func_322(func_321((((*Global_1225057)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2), 1, 50f);
					break;
				case 452572720:
					func_324(func_323((((*Global_1225057)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2), 1, 50f);
					break;
				case 1495295997:
					func_326(func_325((((*Global_1225057)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2));
					break;
			}
			break;
		case 141980177:
			if (func_264(iParam0, 1))
			{
				switch (&((*Global_1225057)[iParam0 /*686*/])->f_548[iParam1 /*3*/])
				{
					case joaat("shop"):
						func_322(func_321((((*Global_1225057)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2), 2, 50f);
						break;
					case 452572720:
						func_324(func_323((((*Global_1225057)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2), 2, 50f);
						break;
					case 1495295997:
						break;
				}
			}
			break;
	}
}

void func_153()
{
	Global_1132968->f_6289.f_22 = MISC::GET_FRAME_COUNT();
}

int func_154()
{
	return Global_1102099->f_34.f_772;
}

void func_155(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam3)
	{
		if (!func_36(Param1))
		{
			return;
		}
		if (func_327(Param1, 1))
		{
			return;
		}
		if (func_328(Param1))
		{
			return;
		}
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_329(iVar0);
	if (Global_1102099->f_34.f_353[iVar0 /*6*/] && (Global_1102099->f_34.f_353[iVar0 /*6*/])->f_5 == -1)
	{
		return;
	}
	if (!func_107(Param1) || !bParam3)
	{
		Global_1102099->f_34.f_353[iVar0 /*6*/] = 1;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_1 = iParam0;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_5 = 5;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_4 = Global_1275573->f_21;
		if (bParam4)
		{
			((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 1;
		}
		if (bParam3)
		{
			(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_2 = { Param1 };
		}
		*(Global_1102099->f_34.f_546[iVar0 /*7*/]) = { func_165(iParam0) };
	}
	else
	{
		Global_1102099->f_34.f_353[iVar0 /*6*/] = 1;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_1 = iParam0;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_2 = { Param1 };
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_5 = -1;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_4 = Global_1275573->f_21;
		*(Global_1102099->f_34.f_546[iVar0 /*7*/]) = { func_165(iParam0) };
		if (bParam4)
		{
			((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 1;
		}
	}
	if ((Global_1102099->f_34[iVar0 /*11*/])->f_6)
	{
		func_330(iVar0);
	}
}

int func_156(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

int func_157(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_331(&Var1, uParam0) && func_332(&Var1, uParam1))
	{
		func_333(Var1, -2045057259, &iVar0, 0);
	}
	return iVar0;
}

void func_158(int iParam0)
{
	Global_1225057->f_8943 = (Global_1225057->f_8943 || iParam0);
}

Vector3 func_159(int iParam0)
{
	return ((*Global_1225057)[iParam0 /*686*/])->f_606;
}

float func_160(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_161(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

void func_162(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_40(iParam0, iParam1))
	{
		func_137(&(((*Global_1225057)[iParam0 /*686*/])->f_562), iParam1);
	}
}

int func_163(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

int func_164(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1097610)[iParam0 /*51*/])->f_16;
}

struct<7> func_165(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_166(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_17() == 0)
	{
		return func_334(iParam0);
	}
	return iParam0 <= func_168();
}

var func_167(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_168()
{
	if (func_17() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	return func_335(iParam0, iParam1, iParam2);
}

bool func_170(int iParam0, int iParam1)
{
	return ((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_5 && iParam1) != 0;
}

void func_171(int iParam0, int iParam1)
{
	(Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_5 = ((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_5 || iParam1);
}

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_86(iParam0, 255))
	{
		if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		iVar1 = 1;
		iVar3 = func_336();
		iVar0 = 0;
		while (iVar0 < iVar3)
		{
			iVar2 = func_337(iVar0);
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

int func_173(int iParam0, int iParam1)
{
	int iVar0;

	if (func_86(iParam0, 255))
	{
		iVar0 = func_338();
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return 1;
		}
		return !func_86(iParam1, iVar0);
	}
	return 0;
}

void func_174(int iParam0, int iParam1)
{
	(Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_5 = ((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_5 - ((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_5 && iParam1));
}

int func_175(int iParam0)
{
	if (func_170(iParam0, 1))
	{
		if (func_170(iParam0, 32))
		{
			return 1;
		}
		if (func_170(iParam0, 2))
		{
			if (func_170(iParam0, 128))
			{
				func_174(iParam0, 128);
			}
			else
			{
				func_171(iParam0, 8);
			}
		}
		else if (func_170(iParam0, 4))
		{
			if (!func_211(iParam0))
			{
				func_174(iParam0, 4);
				func_174(iParam0, 1);
				(Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_7 = 0;
				return 0;
			}
			else if (func_170(iParam0, 128))
			{
				func_174(iParam0, 128);
			}
			else
			{
				func_171(iParam0, 8);
			}
		}
		return 1;
	}
	return 0;
}

int func_176(int iParam0)
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		func_339(741331401, 0, 255, 0, 0);
	}
	return BOUNTY::_0xB096547D61868254(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_177(int iParam0)
{
	var uVar0;
	var uVar1;

	SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Global_1225057->f_8943.f_118), &(Global_1225057->f_8943.f_119), &uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Global_1225057->f_8943.f_118), &uVar1);
	if (SCRIPTS::_0x179A6F0EE2E79026(&uVar1))
	{
		if (BOUNTY::_0x27D3A0E1FE090A43(&uVar1))
		{
			SCRIPTS::_0xFFDDF802279BE128(&uVar1, &uVar0, &(Global_1225057->f_8943.f_119));
			func_171(iParam0, 8);
			return 1;
		}
	}
	else
	{
		func_171(iParam0, 8);
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		func_339(1265622586, 0, 255, 0, 0);
	}
	return BOUNTY::_0xB462D69D406A2602(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_179(int iParam0)
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		func_339(1265622586, 0, 255, 0, 0);
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1225057->f_8943.f_119));
	func_171(iParam0, 8);
	return 1;
}

int func_180(int iParam0)
{
	return BOUNTY::_0x2D874BA20E8E1F20(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_181(int iParam0)
{
	int iVar0;

	iVar0 = func_338();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_171(iParam0, 8);
		return 0;
	}
	if (!func_86(8, iVar0))
	{
		return 0;
	}
	return BOUNTY::_0x8521C2E235558278(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_182(int iParam0)
{
	return BOUNTY::_0x12E981D53B07BF48(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_183(int iParam0, var uParam1)
{
	return BOUNTY::_0x5B53CA0E2AC3FF45(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1), uParam1, &(Global_1225057->f_8943.f_104));
}

int func_184(int iParam0)
{
	int iVar0;

	iVar0 = func_338();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_171(iParam0, 8);
		return 0;
	}
	if (!func_86(32, iVar0))
	{
		return 0;
	}
	return BOUNTY::_0x22D3A61CE053270C(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1), &(Global_1225057->f_8943.f_104));
}

int func_185(int iParam0, var uParam1)
{
	return BOUNTY::_0xA9C3B0F746375162(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1), uParam1, &(Global_1225057->f_8943.f_104));
}

int func_186(int iParam0)
{
	BOUNTY::_0xA59D1997ECD99F0A();
	func_171(iParam0, 8);
	return 1;
}

int func_187(int iParam0)
{
	BOUNTY::_0x932DB3C05A7465D1();
	func_171(iParam0, 8);
	return 1;
}

int func_188(int iParam0, var uParam1)
{
	return BOUNTY::_0x28717806D3BDD0D0(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1), uParam1);
}

int func_189(int iParam0)
{
	return BOUNTY::_0x3F73AED12A5EF0FF(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_190(int iParam0)
{
	func_171(iParam0, 8);
	return BOUNTY::_0xFFA13742E43507E3(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1), &(Global_1225057->f_8943.f_101));
}

int func_191(int iParam0)
{
	int iVar0;

	iVar0 = (Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_6;
	func_171(iParam0, 8);
	if (func_340(iVar0))
	{
		return BOUNTY::_0x81847C2134039BDC(&(((*Global_1214482)[iVar0 /*27*/])->f_14));
	}
	return 0;
}

bool func_192(int iParam0)
{
	bool bVar0;

	if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1)
	{
		bVar0 = BOUNTY::_0xFBD137BF0EC50FC9(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1), &(Global_1225057->f_8943.f_104));
	}
	else
	{
		bVar0 = BOUNTY::_0x727AB6F008BB9F29(&((Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_1), &(Global_1225057->f_8943.f_104));
	}
	if (!bVar0)
	{
		func_169(607258092, 0, 0);
	}
	return bVar0;
}

int func_193(int iParam0)
{
	func_171(iParam0, 8);
	BOUNTY::_0x6A9DF0FCD0C87FF9();
	return 1;
}

bool func_194(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1214482->f_573), iParam0);
}

void func_195(int iParam0)
{
	SCRIPTS::_0x31010318BA9897AC(&(Global_1214482->f_573), iParam0);
}

int func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar2 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	vVar3 = { func_208(iVar2) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (!func_194(iVar0) || func_86(4, iParam0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (_NAMESPACE26::_0x3F59FE6F37869576(iVar2, iVar1))
			{
				return 0;
			}
			if (BUILTIN::VDIST(vVar3, func_208(iVar1)) <= Global_1901929->f_160.f_25)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_197(int iParam0)
{
	if (!func_194(iParam0))
	{
		return;
	}
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1214482->f_573), iParam0);
}

void func_198(int iParam0)
{
	Global_1225057->f_8943 = (Global_1225057->f_8943 - (Global_1225057->f_8943 && iParam0));
}

int func_199(var uParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		return 0;
	}
	if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > 300000)
	{
		return 0;
	}
	if (uParam0->f_2)
	{
		return 0;
	}
	return 1;
}

bool func_200(int iParam0)
{
	return func_341(1, iParam0);
}

int func_201(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_342(bParam1, bParam2, bParam3);
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

bool func_202(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

struct<2> func_203()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_204(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!bParam4)
	{
		if (func_26())
		{
			return 1;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_36(Param2))
	{
		Var0 = { func_343() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_36(Var0)) && !func_246(Var0, Param0))
	{
		return 1;
	}
	Var2 = { func_344() };
	if (func_36(Var2) && (!func_36(Var2) || !func_246(Param0, Var2)))
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0, int iParam1)
{
	if (func_78(2))
	{
		return 332948762;
	}
	if (func_91())
	{
		return -1033490187;
	}
	if (!func_86(2, 255))
	{
		return 1842743312;
	}
	if (func_345(iParam0))
	{
		return -1109051462;
	}
	if (Global_1225057->f_8943.f_14 >= 1)
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
	if (_NAMESPACE26::_0x3F59FE6F37869576(iParam1, iParam0))
	{
		return -1435119901;
	}
	if (BUILTIN::VDIST(func_208(iParam0), func_208(iParam1)) > (Global_1901929->f_160.f_23 * Global_1132968->f_5508))
	{
		return -619167961;
	}
	return -605318450;
}

int func_206(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar10;
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
	iVar2 = func_346(iParam1, iParam2);
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
					uVar10 = func_347(iParam2);
					iVar1 = NETWORK::_0x6E2FD8CF7EB10E53(iParam1, uVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_348(iParam1, iParam2, 0);
						return 1;
					}
					func_349(iParam1, iParam2, iVar1);
					func_348(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_350(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_348(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::_GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_348(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_348(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_350(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_348(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_0x375F5870A7B8BEC1(sVar12))
					{
						return 3;
					}
					func_348(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_350(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_348(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_207(int iParam0, int iParam1)
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
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_24 = 21;
	Var0.f_25 = iParam0;
	Var0.f_16 = MISC::_CREATE_VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	Var53 = { func_165(iParam0) };
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
		Var0.f_31.f_6 = 1700592256;
		Var0.f_31.f_7 = 1434360011;
		Var0.f_20 = 1700592256;
		Var0.f_21 = 1434360011;
	}
	Var0.f_31.f_17 = "HUD_Toast_Soundset";
	Var0.f_31.f_18 = "Toast_On";
	func_351(Var0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1225057->f_8943.f_8), iParam0);
	Global_1225057->f_8943.f_9[Global_1225057->f_8943.f_14 /*4*/] = iParam0;
	(Global_1225057->f_8943.f_9[Global_1225057->f_8943.f_14 /*4*/])->f_1 = MISC::GET_GAME_TIMER();
	Global_1225057->f_8943.f_14++;
}

Vector3 func_208(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_209()
{
	bool bVar0;
	int iVar1;

	iVar1 = func_219(1);
	Global_1225057->f_8943.f_4 = func_352(iVar1, &bVar0);
	if (Global_1225057->f_8943.f_4 != 1519094052)
	{
		if (bVar0)
		{
			func_212(!func_86(4, 255));
		}
		return 0;
	}
	if (!func_86(1, 255))
	{
		func_87(1);
	}
	if (!func_353())
	{
		Global_1225057->f_8943.f_4 = -84140073;
		return 0;
	}
	if (!func_223(1427578635, iVar1, &(Global_1225057->f_8943.f_2), &(Global_1225057->f_8943.f_3), 1, Global_1901929->f_160.f_24))
	{
		func_212(1);
		return 0;
	}
	Global_1225057->f_8943.f_4 = -888342148;
	Global_1225057->f_8943.f_100 = func_169(355060119, 0, 0);
	return 1;
}

void func_210(int iParam0)
{
	Global_1225057->f_8943.f_1 = iParam0;
}

bool func_211(int iParam0)
{
	return (Global_1225057->f_8943.f_16[iParam0 /*8*/])->f_7 != -1307093097;
}

void func_212(bool bParam0)
{
	if (Global_1234391->f_8102.f_2 != 0)
	{
		Global_1234391->f_8102.f_2 = 0;
	}
	if (bParam0)
	{
		if (func_86(1, 255))
		{
			func_88(1);
		}
	}
}

void func_213()
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
		else if (func_354(iVar20) == PLAYER::PLAYER_ID())
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar19, iVar20);
		}
		iVar20++;
	}
	if (SCRIPTS::_0x179A6F0EE2E79026(&uVar19))
	{
		func_355(Var0, uVar19, 0, 0);
	}
}

var func_214(var uParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_331(&Var1, uParam0) && func_356(&Var1, uParam1))
	{
		func_333(Var1, -1775150615, &uVar0, 0);
	}
	return uVar0;
}

int func_215(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, int iParam8, bool bParam9)
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
	if (!func_12())
	{
		return 2;
	}
	uVar1 = func_156(iParam0);
	iVar2 = func_357(uVar1, iParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_358(iParam0, iVar2, iParam8, &bVar3))
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
	if (func_359(uVar1, iParam1))
	{
		vVar4 = { func_360(uVar1, iParam1) };
		iVar7 = func_361(uVar1, iVar2);
		if (!func_362(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_363(iParam2) == -1)
	{
		return 6;
	}
	if (bParam9 >= 0f && !func_364(vParam3))
	{
		vVar8 = { func_304(iParam0, iVar2) };
		if (BUILTIN::VDIST(vParam3, vVar8) > bParam9)
		{
			return 12;
		}
	}
	if (func_365(iParam2))
	{
		iVar11 = func_366(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		if (!func_118(iVar11))
		{
			return 13;
		}
		if (func_367(iVar11))
		{
			return 14;
		}
	}
	if (func_368(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 1717788883 && func_204(func_203(), func_203(), 0, bParam7))
		{
			return 3;
		}
		iVar12 = func_298(iParam0, iVar2);
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar12))
		{
			return 8;
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar12))
		{
			return 7;
		}
		iVar13 = func_299(iParam0, iVar2);
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

int func_216(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_369(((*Global_1277166)[iVar0 /*86*/])->f_85, iParam1);
	}
	return 0;
}

void func_217(var uParam0, int iParam1, int iParam2)
{
	struct<22> Var0;

	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_370(&Var0, uParam0, iParam1, iParam2, -1);
	func_371(&Var0);
}

var func_218()
{
	return Global_1938085->f_4;
}

int func_219(bool bParam0)
{
	struct<7> Var0;
	int iVar7;
	int iVar9;

	Var0 = { func_165(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var0, &iVar7);
	iVar9 = iVar7;
	if (bParam0)
	{
		if (iVar9 >= BOUNTY::_0xF8BCC5ECA33AC9C1())
		{
			return 948632731;
		}
		return 0;
	}
	if (iVar9 >= Global_1901929->f_160.f_4)
	{
		return joaat("high");
	}
	else if (iVar9 >= Global_1901929->f_160.f_3)
	{
		return joaat("medium");
	}
	else if (iVar9 >= Global_1901929->f_160.f_2)
	{
		return joaat("low");
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_372(iParam0, uParam3);
	if (iVar0 != 1519094052)
	{
		return iVar0;
	}
	if (Global_1234391->f_8102 == 0)
	{
		func_115(0, 0, 0);
	}
	if (Global_1234391->f_8102.f_1 != 0 && Global_1275573->f_21 > Global_1234391->f_8102.f_1)
	{
		func_260(2, 1);
		Global_1234391->f_8102.f_1 = 0;
	}
	if ((((func_373(iParam0) && !func_374(2)) && iParam1 != iParam2) && iParam1 != -1) && iParam2 != -1)
	{
		return 1519094052;
	}
	if (Global_1275573->f_21 > Global_1234391->f_8102)
	{
		return 1519094052;
	}
	else
	{
		return 1918714710;
	}
	return -919889546;
}

void func_221()
{
	if (func_374(2))
	{
		return;
	}
	if (Global_1234391->f_8102 != 0 || Global_1234391->f_8102.f_6 != -1)
	{
		Global_1234391->f_8102 = 0;
		Global_1234391->f_8102.f_6 = -1;
	}
}

bool func_222(int iParam0)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= func_375(iParam0);
}

int func_223(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, float fParam5)
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

	*uParam2 = func_376(iParam0);
	if (*uParam2 == -1)
	{
		return 0;
	}
	iVar56 = func_377(func_156(*uParam2));
	vVar63 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
	fVar68 = 32000f;
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((func_378(func_156(*uParam2), iVar58) == iParam1 && func_379(*uParam2, iVar58, -1) == -1) && func_215(*uParam2, func_298(*uParam2, iVar58), iParam0, vVar63, 1, 0, 0, -1082130432 /* Float: -1f */) == 0)
		{
			if (bParam4)
			{
				vVar60 = { func_380(func_156(*uParam2), iVar58, &bVar66) };
				if (bVar66)
				{
					if (func_364(vVar60))
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
									*iParam3 = &iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = &iVar0[MISC::GET_RANDOM_INT_IN_RANGE(1, iVar57)];
								}
								else
								{
									return 0;
								}
							}
							else
							{
								*iParam3 = &iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar57)];
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

void func_224()
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_95(-617150375) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	Global_1225057->f_9066.f_2 = uVar0;
}

int func_225(int iParam0)
{
	int iVar0;

	if (!func_164(255))
	{
		return 0;
	}
	if (func_200(255))
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (func_202(65536, PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_381(Global_35))
	{
		return 0;
	}
	if (func_201(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
	{
		return 0;
	}
	if (func_382())
	{
		return 0;
	}
	if (func_204(func_203(), func_203(), 0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (((*Global_1214482)[iVar0 /*27*/])->f_13 == Global_1275573->f_15)
		{
			return 0;
		}
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_383())
			{
				return 0;
			}
			break;
		case 1:
			if (!func_384())
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_226(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_227()
{
	int iVar0;

	iVar0 = Global_1901929->f_160.f_38;
	if (func_386(-735397297, func_385(1), 1784584921, 1, 0, 0) >= Global_1901929->f_160.f_49)
	{
		iVar0 = (iVar0 + Global_1901929->f_160.f_45);
	}
	if (Global_1225057->f_9066.f_2 == 0)
	{
		iVar0 = (iVar0 - Global_1901929->f_160.f_37);
	}
	return iVar0;
}

int func_228()
{
	int iVar0;

	iVar0 = Global_1901929->f_160.f_39;
	if ((func_386(-545779394, func_385(1), 1784584921, 1, 0, 0) > Global_1901929->f_160.f_41 || func_386(1532695640, func_385(1), 1784584921, 1, 0, 0) > Global_1901929->f_160.f_41) || func_386(1847740267, func_385(1), 1784584921, 1, 0, 0) > Global_1901929->f_160.f_41)
	{
		iVar0 = (iVar0 + Global_1901929->f_160.f_45);
	}
	if (Global_1225057->f_9066.f_2 == 1)
	{
		iVar0 = (iVar0 - Global_1901929->f_160.f_37);
	}
	return iVar0;
}

int func_229(int iParam0)
{
	return &(Global_1225057->f_9066.f_3[iParam0]);
}

bool func_230()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_387();
}

bool func_231()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_388();
}

Vector3 func_232(int iParam0)
{
	return *(Global_1277020->f_6.f_1[iParam0 /*3*/]);
}

int func_233(int iParam0, int iParam1, var uParam2, int iParam3, vector3 vParam4, bool bParam7, bool bParam8)
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

	*uParam2 = func_376(iParam0);
	if (*uParam2 == -1)
	{
		return 0;
	}
	iVar56 = func_377(func_156(*uParam2));
	bVar65 = 32000f;
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((func_378(func_156(*uParam2), iVar58) == iParam1 && func_379(*uParam2, iVar58, -1) == -1) && func_215(*uParam2, func_298(*uParam2, iVar58), iParam0, vParam4, 1, 0, 0, bParam8) == 0)
		{
			if (bParam7)
			{
				vVar60 = { func_380(func_156(*uParam2), iVar58, &bVar63) };
				if (bVar63)
				{
					if (func_364(vVar60))
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
									*iParam3 = &iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = &iVar0[MISC::GET_RANDOM_INT_IN_RANGE(1, iVar57)];
								}
								else
								{
									return 0;
								}
							}
							else
							{
								*iParam3 = &iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar57)];
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

int func_234(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (Global_1132968->f_4641.f_676 == iParam0)
	{
		return 1;
	}
	Global_1132968->f_4641.f_671.f_1 = 0;
	Global_1132968->f_4641.f_671.f_2 = 1613014828;
	Global_1132968->f_4641.f_671.f_3 = iParam0;
	Global_1132968->f_4641.f_671.f_4 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1132968->f_4641.f_671)))
	{
		return 0;
	}
	Global_1132968->f_4641.f_676 = iParam0;
	iVar4 = 0;
	while (iVar4 < 99)
	{
		iVar2 = func_389(iVar4, 1);
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
				Global_1132968->f_4641.f_671.f_4 = iVar1;
				Global_1132968->f_4641.f_671.f_2 = -239316549;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1132968->f_4641.f_671)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_390(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1132968->f_4641.f_671.f_2 = 1242520881;
					if (DATAFILE::_DATAFILE_GET_BOOL(&bVar3, &(Global_1132968->f_4641.f_671)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1132968->f_4641.f_2[func_391(iVar2, 1) /*4*/])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

int func_235(struct<2> Param0)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = func_392(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

void func_236(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_237()
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

int func_238(int iParam0)
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
		case 134:
			return 69;
		case 135:
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
		case 137:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_239(int iParam0)
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

void func_240(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_241(struct<2> Param0)
{
	return func_393(Param0);
}

int func_242(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_21())
	{
		return 0;
	}
	if (!func_394())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_395(&Global_0, 8);
	}
	func_395(&Global_0, 1);
	return 1;
}

void func_243(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_396(func_252(Param0));
	iVar1 = func_241(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_17() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_397(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_244(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_398(Param0);
	}
	else
	{
		func_399(Param0, iParam2);
	}
	func_400();
}

struct<2> func_245(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

bool func_246(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_247(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_401(Global_1939178, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_402(Global_1939178, 8388608);
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

void func_248(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_403(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_404(cVar2);
			}
			else
			{
				func_405();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_249(bool bParam0)
{
	if (!bParam0 && func_406(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_250(int iParam0)
{
	Global_1900718 = (Global_1900718 || iParam0);
}

int func_251(struct<2> Param0)
{
	return func_408(func_407(Param0));
}

int func_252(var uParam0, var uParam1)
{
	return uParam0;
}

int func_253(struct<2> Param0)
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
		if (func_246(((*Global_1184439)[iVar0 /*4*/])->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_254(int iParam0, var uParam1)
{
	func_409(uParam1, iParam0);
	if (Global_1184439->f_129 > 0)
	{
		if (Global_1184439->f_130 == iParam0)
		{
			func_410(0);
		}
	}
	func_411();
}

bool func_255(bool bParam0)
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
	Var0 = { func_165(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var0, &iVar7);
	if (iVar7 < Global_1901929->f_160.f_2)
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 <= 32)
	{
		iVar11 = PLAYER::INT_TO_PLAYERINDEX(iVar9);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar11) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar11))
		{
			if (iVar11 == PLAYER::PLAYER_ID())
			{
				iVar10++;
			}
			else
			{
				Var0 = { func_165(iVar11) };
				BOUNTY::_0x4EF23E04A0C8FF51(&Var0, &iVar7);
				if (iVar7 >= Global_1901929->f_160.f_2)
				{
					iVar10++;
				}
			}
		}
		iVar9++;
	}
	return iVar10 > 1;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case joaat("low"):
			return Global_1901929->f_160.f_14;
		case joaat("medium"):
			return Global_1901929->f_160.f_15;
		case joaat("high"):
			return Global_1901929->f_160.f_16;
		case 948632731:
			return Global_1901929->f_160.f_17;
		default:
			break;
	}
	return 0;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case joaat("low"):
			return Global_1901929->f_160.f_10;
		case joaat("medium"):
			return Global_1901929->f_160.f_11;
		case joaat("high"):
			return Global_1901929->f_160.f_12;
		case 948632731:
			return Global_1901929->f_160.f_13;
		default:
			break;
	}
	return 0;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("low"):
			return Global_1901929->f_160.f_6;
		case joaat("medium"):
			return Global_1901929->f_160.f_7;
		case joaat("high"):
			return Global_1901929->f_160.f_8;
		case 948632731:
			return Global_1901929->f_160.f_9;
		default:
			break;
	}
	return 0;
}

void func_259(int iParam0, bool bParam1)
{
	if (!func_374(iParam0))
	{
		if (bParam1)
		{
		}
		func_137(&(Global_1234391->f_8112), iParam0);
	}
}

void func_260(int iParam0, bool bParam1)
{
	if (func_374(iParam0))
	{
		if (bParam1)
		{
		}
		func_138(&(Global_1234391->f_8112), iParam0);
	}
}

int func_261(int iParam0)
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

bool func_262(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_263()
{
	return func_412(func_245(0));
}

bool func_264(int iParam0, int iParam1)
{
	return (func_61(iParam0) && func_62(((*Global_1214482)[iParam0 /*27*/])->f_3, iParam1));
}

int func_265(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_SESSION())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return 0;
			}
			if (!&Global_1051165->f_1[iVar0])
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_266(int iParam0)
{
	int iVar0;

	if (((*Global_1214482)[iParam0 /*27*/])->f_2 == -1 || ((*Global_1214482)[iParam0 /*27*/])->f_2 == 3)
	{
		return -1;
	}
	iVar0 = func_285(Global_1214482[iParam0 /*27*/]);
	if (func_74(iVar0) && !func_264(iParam0, 131072))
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0, var uParam1)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	int iVar26;

	if (!func_286(((*Global_1225057)[iParam0 /*686*/])->f_565))
	{
		return 1;
	}
	if (!func_413(iParam0, uParam1))
	{
		return 0;
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
	iVar25 = func_414(func_285(Global_1214482[iParam0 /*27*/]));
	func_415(iParam0, &Var0);
	iVar26 = func_416(&Var0);
	if (func_417(iVar26))
	{
		Var10 = { func_418(iVar26) };
		if (Var10 == iVar25)
		{
			((*Global_1214482)[iParam0 /*27*/])->f_4 = iVar26;
			return 1;
		}
		else
		{
			*uParam1 = 1;
			return 1;
		}
	}
	return 0;
}

bool func_268(int iParam0)
{
	return iParam0 != 0;
}

int func_269(int iParam0, int iParam1)
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

int func_270(int iParam0, struct<2> Param1, bool bParam3)
{
	struct<28> Var0;
	var uVar31;

	if (!Global_1901929->f_295.f_23)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E(iParam0))
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
	uVar31 = func_419(iParam0);
	if (SCRIPTS::COUNT_PLAYER_BITS(&uVar31) <= 0)
	{
		return 0;
	}
	func_420(&Var0, uVar31);
	Var0.f_4 = 13;
	func_421(&Var0);
	return 1;
}

void func_271(var uParam0)
{
	*uParam0 = 0;
}

int func_272(int iParam0, int iParam1, bool bParam2)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (bParam2)
	{
		return func_62(((*Global_1225057)[iParam0 /*686*/])->f_564, iParam1);
	}
	return func_62(((*Global_1225057)[iParam0 /*686*/])->f_563, iParam1);
}

void func_273(int iParam0)
{
	int iVar0;

	iVar0 = func_422(Global_1214482[iParam0 /*27*/], ((*Global_1214482)[iParam0 /*27*/])->f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_423(iVar0);
}

void func_274(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_264(iParam0, iParam1))
	{
		func_137(&(((*Global_1214482)[iParam0 /*27*/])->f_3), iParam1);
	}
}

int func_275(int iParam0)
{
	if ((!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_fetch", iParam0, false, 0) && func_424(iParam0, 1048576)) && func_424(iParam0, 512))
	{
		if (!func_268(((*Global_1225057)[iParam0 /*686*/])->f_599))
		{
			func_161(&(((*Global_1225057)[iParam0 /*686*/])->f_599));
		}
		else if (func_163(((*Global_1225057)[iParam0 /*686*/])->f_599) > 4000)
		{
			return 1;
		}
	}
	if (func_272(iParam0, 8388608, 0))
	{
		return 1;
	}
	else if ((((*Global_1225057)[iParam0 /*686*/])->f_565 != 1717788883 && (!func_74(((*Global_1225057)[iParam0 /*686*/])->f_565) || func_264(iParam0, 131072))) && !func_425(iParam0))
	{
		return 1;
	}
	else if (func_74(((*Global_1225057)[iParam0 /*686*/])->f_565) && func_426(iParam0))
	{
		return 1;
	}
	else if (func_264(iParam0, 32) && !func_272(iParam0, 32, 0))
	{
		func_274(iParam0, 33554432);
		return 1;
	}
	return 0;
}

int func_276(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && ((*(*Global_1215057)[iVar0 /*303*/])[iParam0 /*23*/])->f_22 != -1)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_277(int iParam0)
{
	int iVar0;
	struct<27> Var1;

	if (Global_1214482->f_574 == 0)
	{
	}
	else
	{
		Global_1214482->f_574 = (Global_1214482->f_574 - 1);
	}
	if (func_286(func_285(Global_1214482[iParam0 /*27*/])))
	{
		func_427(iParam0);
	}
	iVar0 = func_428(iParam0);
	if (iVar0 != -1)
	{
		func_429(iVar0);
	}
	((*Global_1214482)[iParam0 /*27*/])->f_2 = -1;
	func_124(iParam0);
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
	*((*Global_1214482)[iParam0 /*27*/]) = { Var1 };
}

struct<40> func_278(var uParam0, int iParam1)
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
	if (!func_430(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { *(uParam0->f_3[iParam1 /*40*/]) };
	*(uParam0->f_3[iParam1 /*40*/]) = { Var0 };
	return Var40;
}

void func_279(var uParam0, int iParam1)
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
					func_278(uParam0, iVar3);
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
				func_278(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

bool func_280(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_6 && iParam1) != 0;
}

bool func_281()
{
	if (!Global_1070356->f_3)
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

void func_282(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = PLAYER::PLAYER_ID();
	Var1 = { func_431(iParam0) };
	if (func_432(iParam0) <= 0)
	{
		Var1 = { func_433(iParam0) };
		if (func_36(Var1))
		{
			func_434(iParam0);
			return;
		}
		return;
	}
	if (!func_36(Var1))
	{
		Var1 = { func_433(iParam0) };
		if (func_36(Var1))
		{
			func_434(iParam0);
			return;
		}
	}
	if (func_36(Var1))
	{
		if (!func_435(iParam0, iVar0, 0))
		{
			func_436(iParam0, Var1);
			func_437(iParam0, 0);
			if (func_280(iParam0, 256))
			{
				func_437(iParam0, 1);
			}
		}
		if (func_107(Var1))
		{
			if (func_438(iParam0, 4))
			{
				func_439(iParam0, 0, 0);
				return;
			}
			else if (func_438(iParam0, 5))
			{
				func_440(iParam0, 0);
				return;
			}
		}
	}
	switch (func_441(iParam0))
	{
		case 1:
			break;
		case 2:
			if (!func_280(iParam0, 2))
			{
				return;
			}
			if (!func_442(iParam0))
			{
				func_443(iParam0, 0);
				return;
			}
			if (!func_108(Var1) && !func_107(Var1))
			{
				if (!func_435(iParam0, iVar0, 2) && !func_435(iParam0, iVar0, 3))
				{
					if (func_438(iParam0, 3) || func_444(iParam0) == Global_1275573->f_15)
					{
						func_445(iParam0);
					}
				}
			}
			else if (!func_438(iParam0, 3) && func_444(iParam0) != Global_1275573->f_15)
			{
				func_443(iParam0, 0);
			}
			break;
		case 4:
			if (!func_280(iParam0, 2))
			{
				if (func_280(iParam0, 2048))
				{
					func_446(iParam0);
				}
				return;
			}
			if (func_108(Var1))
			{
				if (func_438(iParam0, 4))
				{
					func_447(iParam0, 0, 1, 1);
					func_439(iParam0, 0, 0);
				}
				else
				{
					func_447(iParam0, 0, 1, 1);
					func_440(iParam0, 0);
				}
			}
			else if (func_107(Var1))
			{
				func_440(iParam0, 0);
			}
			else
			{
				func_437(iParam0, 6);
			}
			if (func_448(iParam0))
			{
				func_446(iParam0);
			}
			break;
		case 5:
		case 6:
			if (func_435(iParam0, iVar0, 0))
			{
				func_434(iParam0);
			}
			break;
	}
}

void func_283(int iParam0, int iParam1, bool bParam2)
{
	func_449(iParam0, iParam1);
	if (!bParam2)
	{
		func_450(iParam0, iParam1);
	}
	else
	{
		func_451(iParam0, iParam1);
		func_452(iParam0, iParam1);
	}
}

void func_284(int iParam0)
{
	int iVar0;

	iVar0 = func_441(iParam0);
	if (iVar0 > -1 && iVar0 < 5)
	{
		if (!func_36(func_431(iParam0)))
		{
			func_453(iParam0, 5);
			return;
		}
	}
	if (!func_454(iParam0) && iVar0 < 5)
	{
		func_455(iParam0);
		func_453(iParam0, 5);
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_36(func_431(iParam0)))
			{
				return;
			}
			if (func_280(iParam0, 32))
			{
				((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[0 /*4*/])->f_1 = iParam0;
			}
			if ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_5 != 255)
			{
				func_456(iParam0, (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_5);
				func_453(iParam0, 2);
			}
			else
			{
				func_453(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_457(iParam0) != 255)
			{
				func_453(iParam0, 2);
				return;
			}
			if (func_458(iParam0, 3))
			{
				func_453(iParam0, 2);
				return;
			}
			if (func_459(iParam0))
			{
				func_453(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_457(iParam0) == 255 && !func_458(iParam0, 3))
			{
				func_453(iParam0, 4);
				return;
			}
			if (func_460(iParam0))
			{
				func_453(iParam0, 5);
				return;
			}
			if (func_458(iParam0, 4) || func_458(iParam0, 5))
			{
				func_453(iParam0, 3);
				return;
			}
			func_461(iParam0);
			break;
		case 3:
			if (func_462(iParam0))
			{
				return;
			}
			func_453(iParam0, 4);
			break;
		case 4:
			if (!func_460(iParam0))
			{
				return;
			}
			func_453(iParam0, 5);
			break;
		case 5:
			if (!func_460(iParam0))
			{
				return;
			}
			if (func_432(iParam0) > 1)
			{
				func_463(iParam0, 1);
			}
			func_453(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_285(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_286(var uParam0)
{
	return 0;
}

int func_287(int iParam0)
{
	int iVar0;

	iVar0 = func_464(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (func_74(((*Global_1225057)[iParam0 /*686*/])->f_565) && !func_264(iParam0, 131072))
	{
		iVar0 = func_465(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	else if (!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		iVar0 = func_466(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	return 1;
}

void func_288(int iParam0, int iParam1)
{
	if (func_467(iParam0, 255) != iParam1)
	{
		((*(*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_20 = iParam1;
	}
}

void func_289(int iParam0, int iParam1)
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
		func_234(iParam1, 0);
		func_162(iParam0, 128);
	}
	if (func_64(iParam0, 32, 255))
	{
		return;
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	func_468(iParam0, &uVar0);
	func_469(iParam0);
	func_470(((*Global_1225057)[iParam0 /*686*/])->f_565);
	bVar1 = ((*Global_1225057)[iParam0 /*686*/])->f_565 != 1717788883;
	Var2 = { ((*Global_1225057)[iParam0 /*686*/])->f_590 };
	if (bVar1)
	{
		if (!func_108(Var2) && !func_107(Var2))
		{
			func_290(iParam0);
		}
	}
	func_291(iParam0, 32);
	func_162(iParam0, 16);
	iVar4 = func_109(((*Global_1225057)[iParam0 /*686*/])->f_565);
	if (iVar4 != 0)
	{
		func_471(iVar4);
	}
	if (func_365(((*Global_1225057)[iParam0 /*686*/])->f_565) && SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()))
	{
		func_472(iParam0);
	}
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1918154385 && !SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()))
	{
		func_473();
	}
	if (((((*Global_1225057)[iParam0 /*686*/])->f_565 == 78055447 || ((*Global_1225057)[iParam0 /*686*/])->f_565 == 974227447) || ((*Global_1225057)[iParam0 /*686*/])->f_565 == -232478158) || ((*Global_1225057)[iParam0 /*686*/])->f_565 == 1532822440)
	{
		func_66(2, 1);
	}
	if (bVar1)
	{
		if (func_107(Var2))
		{
			return;
		}
		bVar5 = !func_474(func_156(Global_1214482[iParam0 /*27*/]), ((*Global_1214482)[iParam0 /*27*/])->f_6);
		func_475(Var2, 1, bVar5, 0);
		func_476(((*Global_1225057)[iParam0 /*686*/])->f_590, 1, 0, -1);
		if (((*Global_1225057)[iParam0 /*686*/])->f_565 == -468635158)
		{
			func_477(4);
		}
	}
}

void func_290(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!func_61(iParam0))
	{
		return;
	}
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1717788883)
	{
		return;
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { ((*Global_1225057)[iParam0 /*686*/])->f_590 };
	if (func_107(Var0))
	{
		return;
	}
	if (func_108(Var0))
	{
		return;
	}
	func_478(Var0);
	if (!func_269(((*Global_1225057)[iParam0 /*686*/])->f_565, 0))
	{
		iVar2 = func_479(Var0);
		if (iVar2 != -1)
		{
			func_480(iVar2);
		}
	}
}

void func_291(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_64(iParam0, iParam1, 255))
	{
		func_137(&(((*(*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_19), iParam1);
	}
}

void func_292(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_17() != 0)
	{
		return;
	}
	if (func_481())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_391(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_391(iParam0, 1) /*4*/])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1275573->f_16 != &Global_1275573)
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
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar8])))
		{
		}
		else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar8])))
		{
		}
		else if (&Global_1275573->f_154[iVar8] == Global_1275573->f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, &(Global_1275573->f_154[iVar8]));
		}
		iVar8++;
	}
	func_482(&Var0, uVar7);
}

struct<8> func_293(int iParam0, int iParam1)
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

void func_294(int iParam0, int iParam1, int iParam2)
{
	if (!func_483(iParam1))
	{
		return;
	}
	((*Global_1225057)[iParam0 /*686*/])->f_566[iParam1] = iParam2;
}

void func_295(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			break;
		case 2:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			break;
		case 3:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			break;
		case 4:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			break;
		case 5:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 3);
			break;
		case 6:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 3);
			break;
		case 7:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			break;
		case 8:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			break;
		case 9:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			break;
		case 10:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			break;
		case 11:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 6, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			break;
		case 12:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 6, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 6, iParam2, 11);
			break;
		case 13:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 0, iParam2, 8);
			func_489(iParam0, 0, iParam2, 9);
			func_489(iParam0, 0, iParam2, 10);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			break;
		case 14:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 0, iParam2, 8);
			func_489(iParam0, 0, iParam2, 9);
			func_489(iParam0, 0, iParam2, 10);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			break;
		case 15:
			func_484(0, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			func_489(iParam0, 6, iParam2, 3);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 14);
			func_489(iParam0, 0, iParam2, 7);
			func_489(iParam0, 0, iParam2, 8);
			func_489(iParam0, 0, iParam2, 9);
			func_489(iParam0, 0, iParam2, 10);
			break;
		case 16:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 6, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 14);
			break;
		case 17:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 14);
			func_489(iParam0, 2, iParam2, 16);
			break;
		case 18:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 11);
			func_489(iParam0, 6, iParam2, 12);
			break;
		case 19:
			func_484(0, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 11);
			func_489(iParam0, 6, iParam2, 12);
			func_489(iParam0, 6, iParam2, 15);
			break;
		case 20:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(2, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 2, iParam2, 13);
			func_489(iParam0, 2, iParam2, 14);
			func_489(iParam0, 2, iParam2, 16);
			func_489(iParam0, 2, iParam2, 17);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 2, iParam2, 10);
			break;
		case 21:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 2, iParam2, 13);
			func_489(iParam0, 2, iParam2, 14);
			func_489(iParam0, 2, iParam2, 16);
			func_489(iParam0, 2, iParam2, 17);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 2, iParam2, 10);
			break;
		case 22:
			func_484(6, iParam2);
			func_485(0, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(0, iParam2);
			func_489(iParam0, 6, iParam2, 11);
			func_489(iParam0, 6, iParam2, 12);
			func_489(iParam0, 0, iParam2, 1);
			func_489(iParam0, 0, iParam2, 2);
			func_489(iParam0, 6, iParam2, 3);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 14);
			func_489(iParam0, 6, iParam2, 16);
			func_489(iParam0, 6, iParam2, 17);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 6, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			break;
	}
}

var func_296(var uParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_331(&Var1, uParam0) && func_356(&Var1, uParam1))
	{
		func_333(Var1, -1303506050, &uVar0, 1);
	}
	return uVar0;
}

struct<2> func_297(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1214482[iParam0 /*27*/];
	uVar1 = ((*Global_1214482)[iParam0 /*27*/])->f_6;
	return func_491(iVar0, uVar1);
}

int func_298(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_492(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

int func_299(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_492(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_1;
}

int func_300(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_331(&vVar1, uParam0) && func_356(&vVar1, iParam1))
	{
		vVar1.f_2 = -1052194144;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

var func_301(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((func_331(&Var1, uParam0) && func_356(&Var1, iParam1)) && func_493(&Var1, iParam2))
	{
		func_333(Var1, 1609846533, &uVar0, 0);
	}
	return uVar0;
}

var func_302(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((func_331(&Var1, uParam0) && func_356(&Var1, iParam1)) && func_493(&Var1, iParam2))
	{
		func_333(Var1, -1702365423, &uVar0, 0);
	}
	return uVar0;
}

var func_303(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((func_331(&Var1, uParam0) && func_356(&Var1, iParam1)) && func_493(&Var1, iParam2))
	{
		func_333(Var1, -1303506050, &uVar0, 0);
	}
	return uVar0;
}

Vector3 func_304(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_492(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_305(var uParam0, var uParam1, int iParam2)
{
	return func_494(uParam1, *uParam0, uParam0->f_1, iParam2, 1);
}

int func_306(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_492(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_6;
}

Vector3 func_307(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_331(&Var3, uParam0) && func_356(&Var3, iParam1)) && func_495(&Var3, iParam2))
	{
		func_496(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

bool func_308(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_331(&Var1, uParam0) && func_356(&Var1, iParam1))
	{
		func_497(Var1, 1172354913, &uVar0, 0);
	}
	return uVar0;
}

bool func_309(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_331(&Var1, uParam0) && func_356(&Var1, iParam1))
	{
		func_497(Var1, -542588664, &uVar0, 0);
	}
	return uVar0;
}

bool func_310(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_331(&Var1, uParam0) && func_356(&Var1, iParam1))
	{
		func_497(Var1, -666510715, &uVar0, 0);
	}
	return uVar0;
}

bool func_311(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_331(&Var1, uParam0) && func_356(&Var1, iParam1))
	{
		func_497(Var1, -1530051112, &uVar0, 0);
	}
	return uVar0;
}

bool func_312(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_331(&Var1, uParam0) && func_356(&Var1, iParam1))
	{
		func_497(Var1, -1755519071, &uVar0, 0);
	}
	return uVar0;
}

bool func_313(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_331(&Var1, uParam0) && func_356(&Var1, iParam1))
	{
		func_497(Var1, 311522483, &uVar0, 0);
	}
	return uVar0;
}

int func_314(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_331(&Var1, uParam0) && func_332(&Var1, iParam1))
	{
		func_497(Var1, 521215940, &iVar0, 0);
	}
	return iVar0;
}

void func_315(int iParam0)
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
	bVar7 = func_264(iParam0, 16);
	if (!bVar7)
	{
		fVar6 = Global_1901929->f_230.f_57;
	}
	if (func_64(iParam0, 2, 255))
	{
		fVar6 = (fVar6 + 50f);
	}
	switch (((*Global_1225057)[iParam0 /*686*/])->f_565)
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
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()) && !func_64(iParam0, 32, 255))
			{
				if (!bVar7 || func_40(iParam0, 4096))
				{
					iVar1 = 1;
				}
				bVar0 = true;
				iVar2 = 1;
			}
			break;
		case 1884341302:
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()) && !func_64(iParam0, 32, 255))
			{
				bVar0 = true;
				iVar5 = 1;
			}
			break;
		case joaat("dynamic"):
			bVar0 = true;
			iVar2 = 1;
			if (!func_264(iParam0, 131072))
			{
				iVar1 = 1;
				bVar4 = true;
			}
			break;
		case -1261475678:
		case -669677371:
		case -468635158:
			bVar0 = true;
			iVar1 = 1;
			bVar4 = true;
			fVar6 = (Global_1901929->f_230.f_57 + 50f);
			break;
		case 1427578635:
			if ((!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()) && !func_64(iParam0, 32, 255)) && !func_86(4, 255))
			{
				bVar0 = true;
				iVar3 = 1;
			}
			break;
	}
	if (bVar0)
	{
		((*Global_1225057)[iParam0 /*686*/])->f_592 = fVar6;
		func_162(iParam0, 524288);
		if (func_498(iParam0, 255, 0, 0) && func_40(iParam0, 512))
		{
			bVar8 = true;
		}
		if (!bVar8 && !func_499(iParam0, fVar6, iVar1, iVar2, iVar3, bVar4, iVar5))
		{
			func_291(iParam0, 1024);
		}
		else
		{
			func_111(iParam0, 1024);
		}
		func_291(iParam0, 512);
	}
	else
	{
		func_105(iParam0, 524288);
		func_111(iParam0, 1024);
		func_291(iParam0, 512);
	}
}

void func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_500(iParam0);
	if (iVar0 == 0)
	{
		func_501(iParam0);
	}
	else
	{
		iVar1 = ((*Global_1225057)[iParam0 /*686*/])->f_596;
		if (iVar1 == -1)
		{
			iVar1 = func_502(iVar0);
		}
		if (iVar1 != -1)
		{
			if (((*Global_1225057)[iParam0 /*686*/])->f_596 != iVar1)
			{
				if (((*Global_1225057)[iParam0 /*686*/])->f_596 == -1)
				{
					func_111(iParam0, 2);
				}
				((*Global_1225057)[iParam0 /*686*/])->f_596 = iVar1;
			}
			if (&Global_1225057->f_8919[iVar1 /*4*/] != -1 && &Global_1225057->f_8919[iVar1 /*4*/] != iParam0)
			{
				func_503(iVar1, iParam0);
				return;
			}
			if ((Global_1225057->f_8919[iVar1 /*4*/])->f_1 != -1 && (Global_1225057->f_8919[iVar1 /*4*/])->f_1 != iParam0)
			{
				func_501(iParam0);
				return;
			}
			func_504(iVar1, iParam0, iParam0);
			func_505(iVar1, iParam0, iVar0);
			if (func_506(iParam0, iVar1, &bVar2))
			{
				if (bVar2)
				{
					func_291(iParam0, 1048576);
				}
				func_291(iParam0, 2);
			}
		}
		else
		{
			func_501(iParam0);
		}
	}
}

void func_317(struct<2> Param0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	if (!func_246(Param0, func_343()))
	{
		return;
	}
	iVar0 = func_507(iVar1);
	if (!func_508(iVar0))
	{
		return;
	}
	func_509(iVar0);
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (func_510(1) && func_511(iVar0, 1))
		{
			func_512();
		}
		if (func_510(0) && NETWORK::_0x51F33DBC1A41CBFD() & 9 != 0)
		{
			func_513();
		}
	}
}

void func_318(int iParam0)
{
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 != -1777724963)
	{
		return;
	}
	if (!func_64(iParam0, 4096, 255) && !func_264(iParam0, 4096))
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
	func_514(iParam0);
}

int func_319(int iParam0)
{
	if (!func_33(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_320(int iParam0)
{
	func_515(&(Global_1126368->f_2008), iParam0);
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 443958153:
			return 6;
		case 1035357148:
			return 7;
		case -990591911:
			return 8;
		case 1434435999:
			return 19;
		case 914613127:
			return 13;
		case 277114628:
			return 14;
		case -441298053:
			return 15;
		case -2008988392:
			return 12;
		case 1866591384:
			return 122;
		case -810797676:
			return 123;
		case 1591504033:
			return 5;
		case -1481022983:
			return 9;
		case -200160067:
			return 10;
		case -906556724:
			return 11;
		case 882729775:
			return 16;
		case 1957450109:
			return 17;
		case 1826386989:
			return 18;
		case -809040070:
			return 132;
		case 213861089:
			return 23;
		case 187124199:
			return 24;
		case -1639286351:
			return 25;
		case 1244472740:
			return 22;
		case -184950877:
			return 26;
		case 187784199:
			return 42;
		case 156869848:
			return 43;
		case 959980967:
			return 44;
		case -922179383:
			return 45;
		case 327042733:
			return 46;
		case 877339314:
			return 48;
		case -1159824322:
			return 49;
		case -605457855:
			return 50;
		case -967272484:
			return 51;
		case 253446434:
			return 52;
		case -24930371:
			return 53;
		case -491616406:
			return 63;
		case 1428271505:
			return 56;
		case 509242725:
			return 55;
		case -2132681852:
			return 60;
		case 1479356600:
			return 124;
		case -1608228131:
			return 125;
		case 1700741106:
			return 54;
		case -404449802:
			return 57;
		case -1243693278:
			return 59;
		case 106026254:
			return 58;
		case -1340467914:
			return 61;
		case -2128099513:
			return 62;
		case -768596287:
			return 27;
		case -1789795772:
			return 28;
		case 986912071:
			return 33;
		case 312948291:
			return 31;
		case 770563571:
			return 34;
		case 288839560:
			return 35;
		case 399352507:
			return 30;
		case -1241147617:
			return 39;
		case 1576805996:
			return 126;
		case -1427623397:
			return 29;
		case 305555540:
			return 36;
		case -697751457:
			return 37;
		case -994915577:
			return 38;
		case 2080716288:
			return 68;
		case 922959422:
			return 69;
		case joaat("rage_p2_3"):
			return 70;
		case 599204508:
			return 71;
		case -362796541:
			return 74;
		case -176953214:
			return 127;
		case -1992095599:
			return 75;
		case -553046416:
			return 72;
		case 1410537143:
			return 73;
		case 646741747:
			return 83;
		case -773037432:
			return 84;
		case 1444751354:
			return 85;
		case 709943351:
			return 78;
		case 731746260:
			return 87;
		case 405856312:
			return 86;
		case 1124822890:
			return 81;
		case 1618521465:
			return 91;
		case -1749578899:
			return 82;
		case -442258411:
			return 90;
		case 1665083003:
			return 120;
		case 810431028:
			return 121;
		case 1581089825:
			return 88;
		case -406930559:
			return 79;
		case -1850308061:
			return 80;
		case 1161446575:
			return 77;
		case 787686374:
			return 89;
		case 1523596125:
			return 41;
		case -1985767496:
			return 129;
		case 1117878254:
			return 0;
		case 622553269:
			return 1;
		case -1934358691:
			return 2;
		case -372049939:
			return 98;
		case 226213668:
			return 97;
		case 1437804895:
			return 93;
		case -1254552445:
			return 96;
		case 1526480524:
			return 94;
		case 470861506:
			return 95;
		case 644508980:
			return 128;
		case 94750187:
			return 101;
		case 545745902:
			return 99;
		case 1875117241:
			return 100;
		case -1861588330: /* GXTEntry: "Trade" */
			return 119;
		case -1079912632: /* GXTEntry: "Wilderness Outfitters" */
			return 133;
		case -1624899219:
			return 148;
		case 1712034773:
			return 172;
		case 1084233913: /* GXTEntry: "Shop at Clothing Store" */
			return 173;
		case -1628307596:
			return 174;
		case 1244193358:
			return 175;
		case 1109728466:
			return 149;
		case 191185611:
			return 147;
		case 1689047337:
			return 135;
		case 631237697:
			return 136;
		case 1309294228:
			return 137;
		case -1862366064:
			return 138;
		case -708893514:
			return 139;
		case -61253253:
			return 140;
		case -1674694281:
			return 141;
		case 14391281:
			return 142;
		case -869603674:
			return 143;
		case 2081857521:
			return 144;
		case 526646992:
			return 145;
		case 1672297313:
			return 146;
		case 151142181:
			return 150;
		case -765151559:
			return 134;
		case 1025033373:
			return 20;
		case -268420964:
			return 151;
		case -283845926:
			return 152;
		case 76731659:
			return 153;
		case 2141489518:
			return 154;
		case 1529797091:
			return 67;
		case 1120323763:
			return 155;
		case -1951530479:
			return 156;
		case 2034257465:
			return 157;
		case 278587369:
			return 158;
		case 1388932648:
			return 65;
		case 1467401843:
			return 160;
		case -1049737591:
			return 161;
		case 1175719437:
			return 162;
		case 2115547696:
			return 163;
		case 878376253:
			return 64;
		case -508879537:
			return 164;
		case -654369397:
			return 165;
		case 1573058547:
			return 166;
		case 1753151614:
			return 167;
		case -2113647360:
			return 168;
		case 1337275619:
			return 169;
		case -237650722:
			return 170;
		case 283754781:
			return 171;
		case -2076086367:
			return 66;
		case -487054121:
			return 159;
		case -1769964380:
			return 108;
		case -1464928880:
			return 110;
		case -812483303:
			return 109;
		case 1315212395:
			return 111;
		case 450843655:
			return 112;
		case -1477315484:
			return 113;
		case -1132316597:
			return 114;
		case -1495157302:
			return 102;
		case -2140031237:
			return 105;
		case -375350:
			return 106;
		case -1829807698:
			return 103;
		case 186603357:
			return 104;
		case -1575817877:
			return 107;
		case 1087483310:
			return 116;
		case -552506176:
			return 130;
		case 441769767:
			return 117;
		case 1318049946:
			return 118;
		case 548657065:
			return 3;
		case 243086140:
			return 4;
		case -305029900:
			return 40;
		case 1008537949:
			return 76;
		default:
			break;
	}
	return -1;
}

void func_322(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&Global_1051388->f_4562[iVar0 /*5*/] == iParam0 || (Global_1051388->f_4562[iVar0 /*5*/])->f_3 < (MISC::GET_FRAME_COUNT() - 1))
		{
			Global_1051388->f_4562[iVar0 /*5*/] = iParam0;
			(Global_1051388->f_4562[iVar0 /*5*/])->f_1 = -1;
			(Global_1051388->f_4562[iVar0 /*5*/])->f_2 = iParam1;
			(Global_1051388->f_4562[iVar0 /*5*/])->f_4 = (fParam2 * fParam2);
			(Global_1051388->f_4562[iVar0 /*5*/])->f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
		iVar0++;
	}
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case -1391860027:
			return 0;
		case -2049683567:
			return 3;
		case -1639750081:
			return 4;
		case -395929392:
			return 33;
		case -543306319:
			return 6;
		case 93160283:
			return 7;
		case -1838611891:
			return 8;
		case 1619762084:
			return 1;
		case -2104053099:
			return 2;
		case -1431073983:
			return 9;
		case 887432345:
			return 10;
		case -238320361:
			return 11;
		case -1433937760:
			return 22;
		case -681691620:
			return 23;
		case -706234936:
			return 24;
		case -282099500:
			return 25;
		case 1450105278:
			return 26;
		case 2128397741:
			return 12;
		case -924263120:
			return 14;
		case 1915478031:
			return 30;
		case -1816941102:
			return 31;
		case 1350021532:
			return 32;
		case 379756162:
			return 5;
		case 1442571063:
			return 15;
		case -997221403:
			return 16;
		case 1489861748:
			return 17;
		case -2132712788:
			return 27;
		case -995716959:
			return 28;
		case 1414815075:
			return 29;
		case 1427539511:
			return 34;
		case -967055532:
			return 19;
		case 662159626:
			return 20;
		case 1743191502:
			return 21;
		case -830712656:
			return 18;
		case 1570650502:
			return 35;
		case -1980461700:
			return 36;
		case -486915945:
			return 38;
		case -1023568458:
			return 37;
		default:
			break;
	}
	return -1;
}

void func_324(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1051388->f_4562[iVar0 /*5*/])->f_1 == iParam0 || (Global_1051388->f_4562[iVar0 /*5*/])->f_3 < (MISC::GET_FRAME_COUNT() - 1))
		{
			(Global_1051388->f_4562[iVar0 /*5*/])->f_1 = iParam0;
			Global_1051388->f_4562[iVar0 /*5*/] = -1;
			(Global_1051388->f_4562[iVar0 /*5*/])->f_2 = iParam1;
			(Global_1051388->f_4562[iVar0 /*5*/])->f_4 = (fParam2 * fParam2);
			(Global_1051388->f_4562[iVar0 /*5*/])->f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
		iVar0++;
	}
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case -433978575:
			return 0;
		case 810683509:
			return 1;
		case -1293620534:
			return 2;
		case -2117035556:
			return 3;
		case -1966120787:
			return 4;
		default:
			break;
	}
	return 4;
}

void func_326(int iParam0)
{
	(Global_1132549->f_1[iParam0 /*27*/])->f_26 = MISC::GET_FRAME_COUNT();
}

bool func_327(struct<2> Param0, bool bParam2)
{
	int iVar0;

	iVar0 = func_235(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_328(struct<2> Param0)
{
	return func_235(Param0) == 7;
}

void func_329(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_1))
	{
		return;
	}
	if (!&Global_1102099->f_34.f_353[iParam0 /*6*/])
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_1))
	{
		func_516(iParam0);
		return;
	}
	if ((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_5 != -1)
	{
		if ((Global_1275573->f_21 - (Global_1102099->f_34.f_353[iParam0 /*6*/])->f_4) > (Global_1102099->f_34.f_353[iParam0 /*6*/])->f_5)
		{
			func_516(iParam0);
		}
		return;
	}
	if (func_107((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_2))
	{
		return;
	}
	if (!func_36((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_2))
	{
		func_516(iParam0);
		return;
	}
	if (!func_107((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_2))
	{
		func_516(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1102099->f_34.f_546[iParam0 /*7*/]) != (Global_1102099->f_34.f_353[iParam0 /*6*/])->f_1)
	{
		func_516(iParam0);
		return;
	}
}

void func_330(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (&Global_1102099->f_34.f_353[iParam0 /*6*/])
	{
		func_329(iParam0);
	}
	if (!(Global_1102099->f_34[iParam0 /*11*/])->f_6)
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		func_517(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_517(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1102099->f_34.f_546[iParam0 /*7*/]) != iVar0)
	{
		func_517(iParam0);
		return;
	}
	if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
	{
		func_518(iVar0, 0);
		return;
	}
	if (func_519(iParam0))
	{
		func_518(iVar0, 0);
		return;
	}
	if (((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97)
	{
		func_518(iVar0, 0);
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE((Global_1102099->f_34[iParam0 /*11*/])->f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 600000)
	{
		func_518(iVar0, 0);
		return;
	}
}

bool func_331(var uParam0, int iParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_332(var uParam0, int iParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_333(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

bool func_334(int iParam0)
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

int func_335(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1225057->f_8943.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1225057->f_8943.f_99;
		iVar1 = Global_1225057->f_8943.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (&Global_1225057->f_8943.f_16[iVar0 /*8*/] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1225057->f_8943.f_99;
	Global_1225057->f_8943.f_16[iVar2 /*8*/] = iParam0;
	(Global_1225057->f_8943.f_16[iVar2 /*8*/])->f_5 = iParam2;
	(Global_1225057->f_8943.f_16[iVar2 /*8*/])->f_6 = iParam1;
	Global_1225057->f_8943.f_97++;
	Global_1225057->f_8943.f_99 = (Global_1225057->f_8943.f_99 + 1 % 10);
	return iVar2;
}

int func_336()
{
	return Global_1099294->f_340;
}

int func_337(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1099294->f_342[iParam0]);
}

var func_338()
{
	return Global_1099294->f_341;
}

int func_339(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_520(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_340(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

int func_341(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_521(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_22())
	{
		return func_521(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_521(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_342(bool bParam0, bool bParam1, bool bParam2)
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

struct<2> func_343()
{
	return *Global_1051163;
}

struct<2> func_344()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_245(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_245(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

bool func_345(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1225057->f_8943.f_8), iParam0);
}

int func_346(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &((Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1]);
}

int func_347(int iParam0)
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

void func_348(int iParam0, int iParam1, int iParam2)
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
	(Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1] = iParam2;
}

void func_349(int iParam0, int iParam1, int iParam2)
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
	(*Global_1132968->f_5808[iParam0 /*10*/])[iParam1] = iParam2;
}

int func_350(int iParam0, int iParam1)
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
	return Global_1132968->f_5808[iParam0 /*10*/][iParam1];
}

var func_351(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_522();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_23);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1939231->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1939231->f_242.f_1188, 64);
	func_523(Global_1939231->f_242.f_14[iVar0 /*39*/], Global_1939231->f_242.f_4, cVar3, Param0);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(84), Global_1939231->f_242.f_1188);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(85), 1);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(86), 0);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(74), Param0.f_30);
	if (Param0.f_30)
	{
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(72), Param0.f_29);
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(75), Param0.f_28);
	}
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(87), Param0.f_24);
	iVar15 = 0;
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_34 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), 707094655, iVar15);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(50), Param0.f_25);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(51), Param0.f_25.f_1);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_29 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(88), Param0.f_25.f_2);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(89), iVar2);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(90), Param0.f_22);
	func_525(Global_1939231->f_242.f_1186 + 1);
	if (Global_1939231->f_242.f_1188 == 2147483647)
	{
		Global_1939231->f_242.f_1188 = 0;
	}
	if (func_526(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1939231->f_242.f_14[iVar0 /*39*/];
		iVar16 = func_527(&(Param0.f_31));
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_36 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_524(91), iVar16);
	}
	iVar17 = func_528();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1939231->f_242.f_1187++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939231->f_242.f_5, 0, "pm_invite_item", &(Global_1939231->f_242.f_14[iVar0 /*39*/]));
	}
	return &(Global_1939231->f_242.f_14[iVar0 /*39*/]);
}

int func_352(int iParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	iVar0 = func_372(iParam0, uParam1);
	if (iVar0 != 1519094052)
	{
		return iVar0;
	}
	if (BOUNTY::_0x8FAF4D262FABA99C(&Var1))
	{
		Global_1234391->f_8102.f_3 = Var1.f_1;
	}
	if (Global_1275573->f_21 < Global_1234391->f_8102.f_3)
	{
		return 590089107;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1124430142))
	{
		return -580253866;
	}
	if (func_368(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 1421345077;
	}
	if (Global_1234391->f_8102.f_2 == 0)
	{
		iVar4 = ((func_258(iParam0) / 1000) + func_529(60));
		Global_1234391->f_8102.f_2 = (Global_1275573->f_21 + iVar4);
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(Global_1225057->f_8943.f_120)))
	{
		return -828578368;
	}
	if (Global_1275573->f_21 > Global_1234391->f_8102.f_2)
	{
		return 1519094052;
	}
	return 1918714710;
}

int func_353()
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
		else if (((*Global_1215057)[iVar0 /*303*/])->f_300.f_1 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_354(int iParam0)
{
	return ((*Global_1215057)[iParam0 /*303*/])->f_300.f_1;
}

void func_355(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_530(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 10, &uParam19);
}

bool func_356(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_357(var uParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_331(&Var1, uParam0) && func_332(&Var1, iParam1))
	{
		iVar0 = ((func_377(uParam0) - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_358(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;

	uVar0 = func_531(iParam0, iParam1, 2);
	if (func_532(iParam0, iParam1, uVar0))
	{
		return 1;
	}
	vVar1 = { func_304(iParam0, iParam1) };
	if (func_364(vVar1))
	{
		return 0;
	}
	uVar4 = func_533(func_156(iParam0), iParam1);
	if ((iParam2 && func_531(iParam0, iParam1, 1)) && func_534(vVar1, uVar4))
	{
		*bParam3 = 1;
		return 1;
	}
	return func_535(vVar1, uVar4, uVar0);
}

int func_359(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_331(&Var1, uParam0) && func_332(&Var1, iParam1))
	{
		func_497(Var1, -528314399, &iVar0, 0);
	}
	return iVar0;
}

Vector3 func_360(var uParam0, int iParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_331(&Var3, uParam0) && func_332(&Var3, iParam1))
	{
		func_496(Var3, -370006557, &vVar0, 1);
	}
	return vVar0;
}

int func_361(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 0;
	if (func_331(&Var1, uParam0))
	{
		if (func_356(&Var1, iParam1))
		{
			func_333(Var1, 1342438652, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_536(iVar0);
	}
	return iVar6;
}

int func_362(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_364(vParam1))
	{
		return 0;
	}
	if (func_537(iParam0))
	{
		return 0;
	}
	fVar0 = 5f;
	fVar1 = func_538(iParam0);
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
				if (fVar4 < fVar1 && !func_539(iParam0))
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return 1;
}

int func_363(int iParam0)
{
	int iVar0;

	if (!func_122(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_540(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_364(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0)
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

int func_366(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

bool func_367(int iParam0)
{
	if (!func_118(iParam0))
	{
		return false;
	}
	return (func_541(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

int func_368(int iParam0)
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
		else if (func_202(1048576, iVar52))
		{
			return 1;
		}
		iVar50++;
	}
	return 0;
}

bool func_369(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_370(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = uParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	*(uParam0->f_21[0 /*3*/]) = { Global_35 };
	uParam0->f_7 = iParam3;
}

void func_371(var uParam0)
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
	func_542(uParam0, uParam0->f_1);
}

int func_372(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		*uParam1 = 1;
		return -863629719;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (func_216(iVar0, 1))
	{
		*uParam1 = 1;
		return -1365133205;
	}
	if (func_543())
	{
		return -744198205;
	}
	if (!func_164(255))
	{
		return 1419392741;
	}
	if (func_200(255))
	{
		return 56985339;
	}
	if (func_201(iVar0, 1, 0, 1))
	{
		return -1208627562;
	}
	if (func_202(65536, iVar0))
	{
		return 1340027376;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return -429228396;
	}
	if (func_381(Global_35))
	{
		return 736245819;
	}
	if (func_204(func_203(), func_203(), 0, 0))
	{
		*uParam1 = 1;
		return -590391633;
	}
	return 1519094052;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case joaat("low"):
			return Global_1901929->f_160.f_27;
		case joaat("medium"):
			return Global_1901929->f_160.f_28;
		case joaat("high"):
			return Global_1901929->f_160.f_29;
		case 948632731:
			return Global_1901929->f_160.f_30;
		default:
			break;
	}
	return 0;
}

bool func_374(int iParam0)
{
	return func_62(Global_1234391->f_8112, iParam0);
}

float func_375(int iParam0)
{
	switch (iParam0)
	{
		case joaat("low"):
			return Global_1901929->f_160.f_19;
		case joaat("medium"):
			return Global_1901929->f_160.f_20;
		case joaat("high"):
			return Global_1901929->f_160.f_21;
		case 948632731:
			return Global_1901929->f_160.f_22;
		default:
			break;
	}
	return 0f;
}

int func_376(int iParam0)
{
	int iVar0[80];
	int iVar81;
	int iVar82;

	iVar82 = 0;
	while (iVar82 <= 79)
	{
		if (func_285(iVar82) == iParam0)
		{
			iVar0[iVar81] = iVar82;
			iVar81++;
		}
		iVar82++;
	}
	if (iVar81 > 0)
	{
		return &(iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar81)]);
	}
	return -1;
}

int func_377(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_331(&vVar1, uParam0))
	{
		vVar1.f_2 = 866900867;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

int func_378(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_331(&Var1, uParam0) && func_356(&Var1, iParam1))
	{
		func_333(Var1, -2045057259, &iVar0, 0);
	}
	return iVar0;
}

int func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((Global_1214482[iVar0 /*27*/] == iParam0 && ((*Global_1214482)[iVar0 /*27*/])->f_6 == iParam1) && (iParam2 == -1 || ((*Global_1214482)[iVar0 /*27*/])->f_9 == iParam2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_380(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	*bParam2 = 0;
	if (func_331(&Var3, uParam0) && func_356(&Var3, iParam1))
	{
		if (func_496(Var3, 1702777600, &vVar0, 1))
		{
			*bParam2 = 1;
		}
	}
	return vVar0;
}

int func_381(vector3 vParam0)
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
		return 1;
	}
	return 0;
}

int func_382()
{
	int iVar0;

	iVar0 = func_366(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	if (func_367(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_383()
{
	int iVar0;
	vector3 vVar1;

	if (!func_544(-428390721 /* GXTEntry: "Butcher Table" */, 1))
	{
		return 0;
	}
	iVar0 = func_366(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	if (!func_118(iVar0))
	{
		return 0;
	}
	vVar1 = { func_545(iVar0) };
	if (func_364(vVar1))
	{
		return 0;
	}
	if (func_160(Global_35, vVar1) > Global_1901929->f_160.f_58)
	{
		return 0;
	}
	if (func_366(PLAYER::GET_PLAYER_INDEX()) == -1)
	{
		return 0;
	}
	if (func_386(-735397297, func_385(1), 1784584921, 1, 0, 0) < Global_1901929->f_160.f_48)
	{
		return 0;
	}
	return 1;
}

int func_384()
{
	vector3 vVar0;

	if (((*Global_1277166)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_5.f_12 == -1)
	{
		return 0;
	}
	vVar0 = { func_232(((*Global_1277166)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_5.f_12) };
	if (func_160(Global_35, vVar0) > Global_1901929->f_160.f_58)
	{
		return 0;
	}
	return 1;
}

struct<4> func_385(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_546(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_548(joaat("character"), func_547(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_548(joaat("character"), func_547(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_548(joaat("character"), func_547(), -1591664384, bParam0);
}

int func_386(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_550(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_548(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_546(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_546(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

float func_387()
{
	float fVar0;

	fVar0 = 0f;
	if (func_386(-735397297, func_385(1), 1784584921, 1, 0, 0) >= Global_1901929->f_160.f_48)
	{
		fVar0 = (Global_1901929->f_160.f_50 * (1f - func_551()));
	}
	if (func_386(-735397297, func_385(1), 1784584921, 1, 0, 0) >= Global_1901929->f_160.f_48)
	{
		fVar0 = (Global_1901929->f_160.f_51 * (1f - func_551()));
	}
	return fVar0;
}

float func_388()
{
	float fVar0;
	int iVar1;

	fVar0 = 0f;
	iVar1 = 0;
	if (func_386(-545779394, func_385(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = func_386(-545779394, func_385(1), 1784584921, 1, 0, 0);
	}
	else if (func_386(1532695640, func_385(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = func_386(1532695640, func_385(1), 1784584921, 1, 0, 0);
	}
	else if (func_386(1847740267, func_385(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = func_386(1847740267, func_385(1), 1784584921, 1, 0, 0);
	}
	if (iVar1 >= Global_1901929->f_160.f_40)
	{
		fVar0 = (Global_1901929->f_160.f_43 * (1f - func_552()));
	}
	if (iVar1 >= Global_1901929->f_160.f_41)
	{
		fVar0 = (Global_1901929->f_160.f_44 * (1f - func_552()));
	}
	return fVar0;
}

int func_389(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1494363065;
		case 2:
			return -514316475;
		case 3:
			return 1257949393;
		case 4:
			return -1967078622;
		case 5:
			return -1854780893;
		case 6:
			return 477974086;
		case 7:
			return 618068466;
		case 8:
			return 499656970;
		case 9:
			return 1791948823;
		case 10:
			return -1634863390;
		case 11:
			return -1296513906;
		case 12:
			return -1030655937;
		case 13:
			return -1783181138;
		case 14:
			return 1250422342;
		case 15:
			return -634665876;
		case 16:
			return -1679013564;
		case 17:
			return -706075066;
		case 18:
			return -1152882498;
		case 19:
			return 2108116481;
		case 20:
			return -86995487;
		case 21:
			return -1315007749;
		case 22:
			return 449057693;
		case 23:
			return 81846499;
		case 24:
			return 385589027;
		case 25:
			return 1951290581;
		case 26:
			return 1316486837;
		case 27:
			return 120448958;
		case 28:
			return 1345888212;
		case 29:
			return 396837320;
		case 30:
			return -1408563730;
		case 31:
			return -757633599;
		case 32:
			return -1034424695;
		case 33:
			return 1841970554;
		case 34:
			return -789758703;
		case 35:
			return -210274020;
		case 36:
			return 633501950;
		case 37:
			return -1215742816;
		case 38:
			return 1971904853;
		case 39:
			return -1935655667;
		case 40:
			return 1898201469;
		case 41:
			return 300196727;
		case 42:
			return 242857368;
		case 43:
			return -1648877470;
		case 44:
			return -545299531;
		case 45:
			return -1598949067;
		case 46:
			return 478308321;
		case 47:
			return 440583097;
		case 48:
			return -1258163578;
		case 49:
			return -1376314322;
		case 50:
			return -1898294040;
		case 51:
			return -114666387;
		case 52:
			return 334700325;
		case 53:
			return -1399051227;
		case 54:
			return 1571096148;
		case 55:
			return 457103096;
		case 56:
			return -1930919582;
		case 57:
			return -985005225;
		case 58:
			return -1393798041;
		case 59:
			return 905156700;
		case 60:
			return 151445061;
		case 61:
			return -1983943039;
		case 62:
			return -1575244427;
		case 63:
			return -1930399868;
		case 64:
			return 353568324;
		case 65:
			return -469672732;
		case 66:
			return 1717813521;
		case 67:
			return 941437279;
		case 68:
			return -162385832;
		case 69:
			return -892848695;
		case 70:
			return -355092128;
		case 71:
			return 946732137;
		case 72:
			return -79139194;
		case 73:
			return 1382158532;
		case 74:
			return -379874384;
		case 75:
			return 2018657739;
		case 76:
			return 1427070667;
		case 77:
			return -682435976;
		case 78:
			return 1232224440;
		case 79:
			return 1889309476;
		case 80:
			return 1918774327;
		case 81:
			return -32613857;
		case 82:
			return 5611246;
		case 83:
			return 2078792148;
		case 84:
			return 630308764;
		case 85:
			return 1398164246;
		case 86:
			return 2002140369;
		case 87:
			return -1777144780;
		case 88:
			return -1098645728;
		case 89:
			return 640330073;
		case 90:
			return -1330378740;
		case 91:
			return -71551190;
		case 92:
			return 1248971179;
		case 93:
			return -2076515520;
		case 94:
			return 1872332830;
		case 95:
			return -326224139;
		case 96:
			return -2062348046;
		case 97:
			return -1924130593;
		case 98:
			return -479797100;
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

void func_390(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1132968->f_4641.f_2[func_391(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_553(iParam0);
	}
	Global_1132968->f_4641.f_2[func_391(iParam0, 1) /*4*/] = bParam1;
}

int func_391(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2076515520:
			return 93;
		case -2062348046:
			return 96;
		case -1983943039:
			return 61;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 63;
		case -1924130593:
			return 97;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 87;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 62;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 58;
		case -1376314322:
			return 49;
		case -1330378740:
			return 90;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 88;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 69;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 77;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 98;
		case -469672732:
			return 65;
		case -379874384:
			return 74;
		case -355092128:
			return 70;
		case -326224139:
			return 95;
		case -210274020:
			return 35;
		case -162385832:
			return 68;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 72;
		case -71551190:
			return 91;
		case -32613857:
			return 81;
		case -1:
			return 0;
		case 5611246:
			return 82;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 60;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 64;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 84;
		case 633501950:
			return 36;
		case 640330073:
			return 89;
		case 905156700:
			return 59;
		case 941437279:
			return 67;
		case 946732137:
			return 71;
		case 1232224440:
			return 78;
		case 1248971179:
			return 92;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 73;
		case 1398164246:
			return 85;
		case 1427070667:
			return 76;
		case 1571096148:
			return 54;
		case 1717813521:
			return 66;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 94;
		case 1889309476:
			return 79;
		case 1898201469:
			return 40;
		case 1918774327:
			return 80;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 86;
		case 2018657739:
			return 75;
		case 2078792148:
			return 83;
		case 2108116481:
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

int func_392(struct<2> Param0)
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
	if (!func_554(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_554(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
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

int func_393(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_554(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_394()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_395(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_396(int iParam0)
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

void func_397(struct<2> Param0, var uParam2)
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
	switch (func_252(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_556(func_555(Param0));
			iVar5 = func_285(iVar4);
			if (!func_269(iVar5, 0))
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

int func_398(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_392(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_557(iVar0);
}

int func_399(struct<2> Param0, int iParam2)
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
	if (!func_554(Param0, &vVar0))
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
		func_554(*(Global_1070356->f_17817.f_1[iVar9 /*3*/]), &vVar3);
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
			func_558(iVar9);
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

void func_400()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (func_554(*(Global_1070356->f_17817.f_1[iVar0 /*3*/]), &vVar1))
		{
		}
		iVar0++;
	}
}

void func_401(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_402(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_403(int iParam0, int iParam1)
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

void func_404(char[12] cParam0)
{
	Global_1938085->f_75.f_67 = { cParam0 };
}

void func_405()
{
	StringCopy(&(Global_1938085->f_75.f_67), "", 24);
}

bool func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_559(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_560(iVar1))
	{
		if (Global_1070356->f_17915.f_24 && !func_561(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070356->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2);
}

int func_407(struct<2> Param0)
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
		if (func_246(*(Global_1900718->f_1[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_408(int iParam0)
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
		func_562(Global_1900718->f_1[0 /*2*/]);
		return 1;
	}
	func_562(Global_1900718->f_1[iParam0 /*2*/]);
	Global_1900718->f_66 = (Global_1900718->f_66 - 1);
	func_563(iParam0, Global_1900718->f_66);
	return 1;
}

void func_409(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (Global_1184439->f_129 <= 0)
	{
		Global_1184439->f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1184439->f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1184439->f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1184439->f_129 == 1)
	{
		*uParam0 = { *((*Global_1184439)[0 /*4*/]) };
		*((*Global_1184439)[0 /*4*/]) = { Var0 };
		Global_1184439->f_129 = 0;
		return;
	}
	*uParam0 = { *((*Global_1184439)[iParam1 /*4*/]) };
	Global_1184439->f_129 = (Global_1184439->f_129 - 1);
	iVar4 = (Global_1184439->f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		*((*Global_1184439)[iVar5 /*4*/]) = { *((*Global_1184439)[iVar5 + 1 /*4*/]) };
		*((*Global_1184439)[iVar5 + 1 /*4*/]) = { Var0 };
		iVar5++;
	}
}

void func_410(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1184439->f_129)
	{
		return;
	}
	Global_1184439->f_130 = iParam0;
	Global_1184439->f_131 = Global_1184439[iParam0 /*4*/];
}

void func_411()
{
	if (Global_1184439->f_131 == 0)
	{
		return;
	}
	Global_1184439->f_130 = func_564(Global_1184439->f_131);
	if (Global_1184439->f_130 < 0)
	{
		Global_1184439->f_131 = 0;
	}
}

bool func_412(struct<2> Param0)
{
	return func_565(Param0, 1, 4);
}

int func_413(int iParam0, var uParam1)
{
	struct<24> Var0;
	var uVar40;
	int iVar41;
	int iVar42;

	if (func_264(iParam0, 536870912))
	{
		return 1;
	}
	if (func_566(&(Global_1214482->f_367)))
	{
		return 0;
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
	uVar40 = func_285(Global_1214482[iParam0 /*27*/]);
	iVar41 = func_414(uVar40);
	iVar42 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (&Global_1186267->f_13[iVar41] >= &Global_1186267->f_3[iVar41])
	{
		*uParam1 = 1;
		return 0;
	}
	Var0.f_2 = 2;
	Var0.f_5 = 0;
	Var0.f_7 = iVar42;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = func_414(uVar40);
	Var0.f_8.f_5.f_9 = iVar41;
	Var0.f_8.f_5 = { func_297(iParam0) };
	Var0.f_8.f_2 = { func_304(Global_1214482[iParam0 /*27*/], ((*Global_1214482)[iParam0 /*27*/])->f_6) };
	func_567(&Var0);
	func_568(&(Global_1214482->f_367), &Var0, 1, 15, 6, 24, 0);
	func_274(iParam0, 536870912);
	return 1;
}

int func_414(var uParam0)
{
	return 2;
}

void func_415(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = func_285(Global_1214482[iParam0 /*27*/]);
	*uParam1 = { func_297(iParam0) };
	uParam1->f_9 = func_414(uVar0);
}

int func_416(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_569(uParam0))
	{
		return -1;
	}
	iVar0 = func_570(uParam0, uParam0->f_9);
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
			iVar0 = func_570(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_417(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<15> func_418(int iParam0)
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
	if (!func_417(iParam0))
	{
		return Var0;
	}
	return *(Global_1186267->f_231[iParam0 /*15*/]);
}

var func_419(int iParam0)
{
	struct<7> Var0[7];
	var uVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	iVar51 = _NAMESPACE26::_0xD1BF325C8252A982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar52 /*7*/]);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar53))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_420(var uParam0, var uParam1)
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

void func_421(var uParam0)
{
	if (&Global_1051202->f_16[0] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 31, 24, &(Global_1051202->f_16[0]));
}

int func_422(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_571(iParam0);
	if (iVar0 == 0)
	{
		return -1;
	}
	if (iParam1 == -1)
	{
		return -1;
	}
	return func_572(iVar0, iParam1);
}

void func_423(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_573(&Var0);
}

int func_424(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_61(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (((*(*Global_1215057)[iVar0 /*303*/])[iParam0 /*23*/])->f_22 != ((*Global_1214482)[iParam0 /*27*/])->f_9 || !func_64(iParam0, iParam1, iVar0)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_425(int iParam0)
{
	int iVar0;

	if (!func_61(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (((*(*Global_1215057)[iVar0 /*303*/])[iParam0 /*23*/])->f_22 != ((*Global_1214482)[iParam0 /*27*/])->f_9 || func_498(iParam0, iVar0, 1, 0)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_426(int iParam0)
{
	return func_424(iParam0, 1024);
}

void func_427(int iParam0)
{
	struct<24> Var0;
	var uVar40;

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
	uVar40 = func_285(Global_1214482[iParam0 /*27*/]);
	Var0.f_2 = 2;
	Var0.f_5 = 7;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = func_414(uVar40);
	Var0.f_8.f_5.f_9 = func_414(uVar40);
	Var0.f_8.f_5 = { func_297(iParam0) };
	Var0.f_8.f_2 = { func_304(Global_1214482[iParam0 /*27*/], ((*Global_1214482)[iParam0 /*27*/])->f_6) };
	func_568(&(Global_1214482->f_367), &Var0, 0, 0, 0, 0, 0);
}

int func_428(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1214482->f_356[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_429(int iParam0)
{
	(Global_1214482->f_356[iParam0 /*2*/])->f_1 = 1;
}

bool func_430(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

struct<2> func_431(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_203();
	}
	return (Global_1186267->f_231[iParam0 /*15*/])->f_5;
}

int func_432(int iParam0)
{
	if (!func_417(iParam0))
	{
		return -1;
	}
	return (Global_1186267->f_231[iParam0 /*15*/])->f_1;
}

struct<2> func_433(int iParam0)
{
	return (Global_1198382->f_1[iParam0 /*10*/])->f_4;
}

void func_434(int iParam0)
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
		func_574(iParam0, iVar0);
		func_575(iParam0, iVar0);
		iVar0++;
	}
	func_443(iParam0, 0);
	func_576(iParam0);
	func_446(iParam0);
}

bool func_435(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_436(int iParam0, struct<2> Param1)
{
	(Global_1198382->f_1[iParam0 /*10*/])->f_4 = { Param1 };
	(Global_1198382->f_1[iParam0 /*10*/])->f_6 = func_393(Param1);
}

void func_437(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_435(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

int func_438(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_336())
	{
		iVar0 = func_337(iVar1);
		if (func_435(iParam0, iVar0, iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return func_435(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

void func_439(int iParam0, bool bParam1, int iParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_433(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_108(Var0))
	{
		return;
	}
	if (!func_107(Var0))
	{
		return;
	}
	if (func_435(iParam0, PLAYER::PLAYER_ID(), 5))
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
	func_112(Var0, 0, bVar2, iParam2);
	func_437(iParam0, 4);
}

void func_440(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_433(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_108(Var0))
	{
		return;
	}
	if (!func_107(Var0))
	{
		return;
	}
	if (func_435(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_112(Var0, 0, 1, iParam1);
	func_437(iParam0, 5);
}

int func_441(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_13;
}

int func_442(int iParam0)
{
	if (!func_454(iParam0))
	{
		return 0;
	}
	if (func_441(iParam0) >= 5)
	{
		return 0;
	}
	if (func_441(iParam0) <= 0)
	{
		return 0;
	}
	if (!func_435(iParam0, PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

void func_443(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_433(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (!func_108(Var0) && !func_107(Var0))
	{
		return;
	}
	func_577(iParam0, 2);
	func_577(iParam0, 3);
	func_437(iParam0, 6);
	func_112(Var0, 0, 2, iParam1);
}

int func_444(int iParam0)
{
	return (Global_1186267->f_2505[iParam0 /*6*/])->f_4;
}

void func_445(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_433(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_108(Var0))
	{
		return;
	}
	if (func_107(Var0))
	{
		return;
	}
	func_437(iParam0, 2);
	func_577(iParam0, 3);
	func_577(iParam0, 6);
	func_478(Var0);
}

void func_446(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	(*(*Global_1196005)[iVar0 /*72*/])[iParam0] = 0;
}

void func_447(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_433(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (!func_108(Var0))
	{
		return;
	}
	if (func_107(Var0))
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
	func_437(iParam0, 3);
	func_475(Var0, 1, bParam2, bParam3);
}

bool func_448(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar1 = 0;
	while (iVar1 < func_336())
	{
		iVar0 = func_337(iVar1);
		if (func_435(iParam0, iVar0, 2) && !((func_435(iParam0, iVar0, 4) || func_435(iParam0, iVar0, 5)) || func_435(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_433(iParam0) };
	return !(func_108(Var2) || func_107(Var2));
}

void func_449(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_578(iParam0);
	iVar1 = func_579(iParam0, iParam1);
	iVar2 = func_580(iParam0, iParam1);
	iVar3 = func_441(iParam0);
	switch (func_581(iParam0, iParam1))
	{
		case -1:
			if (!func_442(iParam0))
			{
				return;
			}
			func_582(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_442(iParam0))
			{
				return;
			}
			func_582(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_442(iParam0))
			{
				func_583(iParam0, iParam1);
				func_582(iParam0, iParam1, 0);
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
			func_582(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_442(iParam0))
			{
				func_583(iParam0, iParam1);
				func_582(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_582(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_582(iParam0, iParam1, 6);
				return;
			}
			if (!func_584(iParam0, iParam1))
			{
				return;
			}
			func_585(iParam0, iParam1, 0);
			func_582(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_442(iParam0))
			{
				func_583(iParam0, iParam1);
				func_582(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_582(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_582(iParam0, iParam1, 6);
				return;
			}
			if (!func_586(iParam0, iParam1))
			{
				return;
			}
			func_582(iParam0, iParam1, 4);
			break;
		case 4:
			if (!NETWORK::_0x1B89BC43B6E69107(iVar0, iVar1, 1, 0))
			{
				if (!func_587(iParam0, iParam1))
				{
					func_588(iParam0, iParam1, 0);
					func_589(iParam0, iParam1, 0);
					func_582(iParam0, iParam1, 2);
				}
				return;
			}
			func_582(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_432(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_574(iParam0, iParam1);
			}
			if (func_590(iParam0, iParam1))
			{
				func_574(iParam0, iParam1);
			}
			if (NETWORK::_0x1B89BC43B6E69107(iVar0, iVar1, 1, 0))
			{
				return;
			}
			if (func_587(iParam0, iParam1))
			{
				return;
			}
			func_588(iParam0, iParam1, 0);
			if ((func_458(iParam0, 4) || func_458(iParam0, 5)) || (func_441(iParam0) > 2 && iVar2 == 3))
			{
				func_582(iParam0, iParam1, 6);
			}
			else
			{
				func_589(iParam0, iParam1, 0);
				func_582(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_448(iParam0))
			{
				return;
			}
			func_582(iParam0, iParam1, 7);
			break;
		case 7:
			func_583(iParam0, iParam1);
			func_582(iParam0, iParam1, 8);
			break;
		case 8:
			func_437(iParam0, 7);
			if (iVar2 == 3)
			{
				return;
			}
			func_582(iParam0, iParam1, 1);
			func_577(iParam0, 7);
			break;
	}
}

int func_450(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_591(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (!VOLUME::_0xA4A4359320345B34(iVar0))
	{
		func_592(iParam0, iParam1, 0);
		return 1;
	}
	func_592(iParam0, iParam1, 0);
	return 1;
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_280(iParam0, 8))
	{
		return;
	}
	iVar0 = func_593(iParam0, iParam1);
	iVar1 = func_432(iParam0);
	if (!func_454(iParam0) || func_441(iParam0) >= 5)
	{
		if (iVar0 != 1)
		{
			func_594(iParam0, iParam1);
			func_595(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar0)
	{
		case -2:
			break;
		case -1:
			if (!func_36(func_431(iParam0)))
			{
				return;
			}
			if (func_596(iParam0, iParam1) <= 0)
			{
				func_595(iParam0, iParam1, 0);
				return;
			}
			else
			{
				if (iVar1 == 1)
				{
					func_595(iParam0, iParam1, 5);
				}
				else
				{
					func_595(iParam0, iParam1, 2);
				}
				return;
			}
			break;
		case 0:
			if (func_596(iParam0, iParam1) > 0)
			{
				func_595(iParam0, iParam1, 2);
				return;
			}
			break;
		case 1:
			func_595(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_597(iParam0, iParam1) != 0)
			{
				func_595(iParam0, iParam1, 4);
				return;
			}
			func_598(iParam0, iParam1, 0);
			func_595(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_591(iParam0, iParam1) == 0)
			{
				func_595(iParam0, iParam1, 2);
				return;
			}
			if (func_599(iParam0, iParam1))
			{
				func_595(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar1 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_597(iParam0, iParam1), 160);
				func_595(iParam0, iParam1, 7);
				return;
			}
			if (!VOLUME::_0xF6A8A652A6B186CD(func_597(iParam0, iParam1)))
			{
				func_600(iParam0, iParam1);
				func_595(iParam0, iParam1, 2);
				return;
			}
			break;
		case 5:
			if ((func_580(iParam0, iParam1) == 2 || func_441(iParam0) == 2) || iVar1 > 1)
			{
				func_595(iParam0, iParam1, 2);
				return;
			}
			break;
		case 6:
			if (func_591(iParam0, iParam1) == 0)
			{
				func_595(iParam0, iParam1, 5);
				return;
			}
			if ((func_580(iParam0, iParam1) == 2 || func_441(iParam0) == 2) || iVar1 > 1)
			{
				func_450(iParam0, iParam1);
				func_595(iParam0, iParam1, 2);
				return;
			}
			if (func_599(iParam0, iParam1))
			{
				func_595(iParam0, iParam1, 7);
				return;
			}
			break;
		case 7:
			if ((func_580(iParam0, iParam1) == 2 || func_441(iParam0) == 2) || iVar1 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_597(iParam0, iParam1), 32);
				func_595(iParam0, iParam1, 4);
				return;
			}
			if (!VOLUME::_0xF6A8A652A6B186CD(func_597(iParam0, iParam1)))
			{
				func_600(iParam0, iParam1);
				func_595(iParam0, iParam1, 5);
				return;
			}
			break;
	}
}

void func_452(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_280(iParam0, 16))
	{
		return;
	}
	iVar0 = func_578(iParam0);
	iVar1 = func_579(iParam0, iParam1);
	iVar3 = func_580(iParam0, iParam1);
	if (iVar3 > 0)
	{
		if (!func_454(iParam0))
		{
			func_601(iParam0, iParam1, 0);
			return;
		}
	}
	switch (iVar3)
	{
		case -1:
			if (!func_36(func_431(iParam0)))
			{
				return;
			}
			if (func_602(iParam0, iParam1) <= 0)
			{
				func_601(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_601(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_454(iParam0))
			{
				return;
			}
			if (func_602(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_603(iParam0);
			if (iVar2 != -15 && func_604(iVar2))
			{
				return;
			}
			func_601(iParam0, iParam1, 1);
			break;
		case 1:
			if (func_605(iParam0, iParam1, 0))
			{
				func_601(iParam0, iParam1, 2);
				func_463(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_605(iParam0, iParam1, 0) && !NETWORK::_0x1B89BC43B6E69107(iVar0, iVar1, 0, 0))
			{
				func_601(iParam0, iParam1, 3);
				return;
			}
			if (func_441(iParam0) >= 3)
			{
				func_601(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_441(iParam0) >= 3)
			{
				return;
			}
			if (!func_606(iParam0, iParam1))
			{
				func_601(iParam0, iParam1, 2);
				return;
			}
			if (func_457(iParam0) != 255)
			{
				func_463(iParam0, 2);
			}
			else
			{
				func_463(iParam0, 1);
			}
			iVar2 = func_603(iParam0);
			if (iVar2 != -15 && func_604(iVar2))
			{
				func_601(iParam0, iParam1, 0);
				return;
			}
			if (func_441(iParam0) >= 4)
			{
				return;
			}
			if (func_607(iParam0, 7))
			{
				return;
			}
			func_601(iParam0, iParam1, 1);
			break;
	}
}

void func_453(int iParam0, int iParam1)
{
	(Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_13 = iParam1;
}

bool func_454(int iParam0)
{
	bool bVar0;

	bVar0 = !func_609(func_433(iParam0), func_608(iParam0), 0);
	return bVar0;
}

int func_455(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;

	if (!func_417(iParam0))
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
	if (func_610(iParam0))
	{
		Global_1186267->f_23[iVar30] = (&Global_1186267->f_23[iVar30] - 1);
	}
	return 1;
}

void func_456(int iParam0, int iParam1)
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

int func_457(int iParam0)
{
	return (Global_1186267->f_2505[iParam0 /*6*/])->f_5;
}

int func_458(int iParam0, int iParam1)
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
		else if (func_435(iParam0, iVar0, iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_459(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_280(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_611(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_613(func_612(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), -432403087, 0, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&uVar1) <= 0;
}

int func_460(int iParam0)
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
		else if (!func_614(iParam0, iVar0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_461(int iParam0)
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
				func_456(iParam0, iVar1);
			}
			else if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar2) == iVar0)
			{
				(Global_1186267->f_2505[iParam0 /*6*/])->f_4 = iVar2;
			}
			else
			{
				func_615(iParam0);
			}
		}
		return;
	}
	if ((Global_1186267->f_2505[iParam0 /*6*/])->f_4 == 0)
	{
		func_615(iParam0);
		return;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E((Global_1186267->f_2505[iParam0 /*6*/])->f_4))
	{
		func_615(iParam0);
		return;
	}
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC((Global_1186267->f_2505[iParam0 /*6*/])->f_4);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		func_615(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_615(iParam0);
		return;
	}
	func_456(iParam0, iVar1);
}

int func_462(int iParam0)
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

void func_463(int iParam0, int iParam1)
{
	(Global_1186267->f_231[iParam0 /*15*/])->f_1 = iParam1;
}

int func_464(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1225057)[iParam0 /*686*/])->f_604))
	{
		return 4;
	}
	if (func_64(iParam0, 8, 255))
	{
		return 5;
	}
	if (func_64(iParam0, 64, 255) && (func_467(iParam0, 255) == 16 || !func_40(iParam0, 32)))
	{
		return 16;
	}
	if (func_204(((*Global_1225057)[iParam0 /*686*/])->f_590, func_203(), 0, 0) && ((*Global_1225057)[iParam0 /*686*/])->f_565 != 1717788883)
	{
		return 7;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && func_616(((*Global_1225057)[iParam0 /*686*/])->f_590))
	{
		if (func_64(iParam0, 32, 255) && !func_40(iParam0, 256))
		{
			func_617();
			func_162(iParam0, 256);
		}
		return 8;
	}
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 != 1427578635 || ((*Global_1214482)[iParam0 /*27*/])->f_16 != PLAYER::PLAYER_ID())
	{
		if (func_40(iParam0, 8388608) || (func_64(iParam0, 32, 255) && func_468(iParam0, &bVar1)))
		{
			func_162(iParam0, 8388608);
			if (bVar1)
			{
				func_162(iParam0, 16777216);
			}
			return 17;
		}
	}
	bVar2 = func_618(iParam0, 255);
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (func_116(((*Global_1225057)[iParam0 /*686*/])->f_565))
		{
			if (!func_64(iParam0, 16, 255) && !func_264(iParam0, 16))
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
	iVar3 = func_619(iParam0);
	if (iVar3 != 255)
	{
		if (iVar3 != PLAYER::PLAYER_ID())
		{
			func_291(iParam0, 16777216);
		}
		return 2;
	}
	if (func_368(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 23;
	}
	if (((*Global_1225057)[iParam0 /*686*/])->f_605 != 0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1225057)[iParam0 /*686*/])->f_605))
	{
		return 24;
	}
	if (bVar2)
	{
		return 15;
	}
	return 0;
}

int func_465(int iParam0)
{
	if (func_620(Global_1214482[iParam0 /*27*/]))
	{
		return 12;
	}
	if (func_201(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 13;
	}
	return 0;
}

int func_466(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1225057)[iParam0 /*686*/])->f_604))
	{
		return 4;
	}
	bVar1 = func_498(iParam0, 255, 0, 0);
	bVar2 = func_40(iParam0, 512);
	fVar3 = Global_1901929->f_295.f_163;
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1918154385)
	{
		fVar3 = (fVar3 + (fVar3 * func_621()));
	}
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 != 1427578635 && !func_622(((*Global_1225057)[iParam0 /*686*/])->f_593, bVar1, bVar2, fVar3))
	{
		return 9;
	}
	if (!func_264(iParam0, 2097152) && !func_64(iParam0, 32, 255))
	{
		return 10;
	}
	if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1918154385)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1607036473))
		{
			return 18;
		}
		iVar4 = func_623();
		if (func_268(iVar4) && func_163(iVar4) < Global_1901929->f_160.f_59)
		{
			return 19;
		}
		if (func_624(iParam0, 1))
		{
			return 20;
		}
	}
	else if (((*Global_1225057)[iParam0 /*686*/])->f_565 == 1427578635)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1214482)[iParam0 /*27*/])->f_16) && ((*Global_1214482)[iParam0 /*27*/])->f_16 == ((*Global_1215057)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1)
		{
			return 2;
		}
		else
		{
			return 22;
		}
	}
	if (func_264(iParam0, 1073741824 /* Float: 2f */))
	{
		return 25;
	}
	if (func_625(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 11;
	}
	return 0;
}

int func_467(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return ((*(*Global_1215057)[iParam1 /*303*/])[iParam0 /*23*/])->f_20;
}

int func_468(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar0 != ((*Global_1225057)[iParam0 /*686*/])->f_601)
	{
		bVar1 = _NAMESPACE26::_0xD6F6ACF4392187FB(((*Global_1225057)[iParam0 /*686*/])->f_601);
		if (((((*Global_1225057)[iParam0 /*686*/])->f_600 > 1 && _NAMESPACE26::_0x149A2751AB66AC02(((*Global_1225057)[iParam0 /*686*/])->f_601) > 0) && _NAMESPACE26::_0x4BE6C13A45CCA8EC(((*Global_1225057)[iParam0 /*686*/])->f_601) != 255) && _NAMESPACE26::_0x4BE6C13A45CCA8EC(((*Global_1225057)[iParam0 /*686*/])->f_601) == ((*Global_1225057)[iParam0 /*686*/])->f_602)
		{
			*bParam1 = 1;
		}
		((*Global_1225057)[iParam0 /*686*/])->f_601 = iVar0;
		return bVar1;
	}
	((*Global_1225057)[iParam0 /*686*/])->f_600 = _NAMESPACE26::_0x149A2751AB66AC02(((*Global_1225057)[iParam0 /*686*/])->f_601);
	((*Global_1225057)[iParam0 /*686*/])->f_602 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(((*Global_1225057)[iParam0 /*686*/])->f_601);
	return 0;
}

void func_469(int iParam0)
{
	int iVar0;

	iVar0 = func_422(Global_1214482[iParam0 /*27*/], ((*Global_1214482)[iParam0 /*27*/])->f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_626(iVar0);
}

void func_470(int iParam0)
{
	if (func_627(iParam0))
	{
		func_628(1);
	}
}

void func_471(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_1900670->f_1 == 2 || Global_1900670->f_1 == 5) || Global_1900670->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_17() != -1)
	{
		iVar0 = 1;
	}
	uVar1 = func_238(Global_1893575->f_2);
	Global_1900670->f_1 = 3;
	Global_1900670->f_2 = 0;
	Global_1900670->f_7 = iVar0;
	Global_1900670->f_8 = iParam0;
	Global_1900670->f_9 = uVar1;
	if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
	{
		func_240(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
	}
	else if (Global_1900670->f_11 != -1)
	{
		func_240(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
	}
}

void func_472(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_40(iParam0, 134217728))
	{
		return;
	}
	iVar0 = ((*Global_1214482)[iParam0 /*27*/])->f_5;
	if (!func_118(iVar0))
	{
		return;
	}
	switch (((*Global_1225057)[iParam0 /*686*/])->f_565)
	{
		case 1884341302:
			bVar1 = true;
			iVar2 = 3;
			break;
		case -260420884:
		case 850213441:
		case 1918154385:
			bVar1 = true;
			iVar2 = 3;
			break;
	}
	func_629(iVar0, iVar2, bVar1);
	func_162(iParam0, 134217728);
}

void func_473()
{
	struct<2> Var0;

	Var0 = { func_95(-1136577243) };
	STATS::STAT_ID_SET_INT(&Var0, Global_1275573->f_21, true);
}

int func_474(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_331(&Var1, uParam0) && func_356(&Var1, uParam1))
	{
		func_497(Var1, 572283279, &iVar0, 0);
	}
	return iVar0;
}

void func_475(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_36(Param0))
	{
		return;
	}
	if (!func_108(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_630(Param0);
	}
	if (!func_36(func_245(0)))
	{
		func_244(Param0, 3);
		func_247(bParam3);
		func_248(!bParam4);
		func_631(Param0, -1);
		if (bParam2 && !func_632(2))
		{
			func_395(&Global_0, 1024);
		}
		func_250(1);
	}
	else
	{
		func_631(Param0, -1);
		func_244(Param0, 4);
		func_633(Param0, 0);
	}
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_252(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_634(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_476(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_253(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_393(Param0);
	Var0.f_3 = iParam3;
	func_635(&Var0, bParam2, iParam4);
	return 1;
}

void func_477(int iParam0)
{
	if (Global_1182289->f_440 != 2)
	{
		return;
	}
	if (Global_1182289->f_440.f_1 != 0)
	{
		return;
	}
	Global_1182289->f_440.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
}

int func_478(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (&Global_1900788 == 15)
	{
		return -1;
	}
	if (!func_636(Param0))
	{
		return -1;
	}
	iVar1 = func_637(Param0);
	if (iVar1 >= 0)
	{
		func_638(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900788;
		*((*Global_1900789)[iVar0 /*2*/]) = { Param0 };
		*((*Global_1900820)[iVar0 /*2*/]) = { Var2 };
		func_638(Param0, 1);
		Global_1900788 = &Global_1900788 + 1;
		if (&Global_1900788 > 15)
		{
			Global_1900788 = 15;
		}
		return iVar0;
	}
	return -1;
}

int func_479(struct<2> Param0)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_246(Param0, func_639(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_480(int iParam0)
{
	if (Global_1103537->f_17)
	{
		func_640(iParam0);
	}
	else
	{
		func_641(iParam0);
	}
}

int func_481()
{
	if (func_17() != 0)
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1461907237))
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 2 != 0)
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 4 != 0)
	{
		return 1;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return 1;
	}
	return 0;
}

void func_482(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 13, &uParam1);
}

bool func_483(int iParam0)
{
	return iParam0 != -1;
}

void func_484(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, 2097877918, 0);
	func_642(iParam0, iParam1, -1158905413, 0);
	func_642(iParam0, iParam1, 358397622, 0);
	func_642(iParam0, iParam1, 65999835, 0);
	func_642(iParam0, iParam1, 814443795, 0);
	func_642(iParam0, iParam1, 519621102, 0);
	func_642(iParam0, iParam1, -1628223003, 0);
	func_642(iParam0, iParam1, 1278256225, 0);
	func_642(iParam0, iParam1, 2038628101, 0);
	func_642(iParam0, iParam1, 1742494648, 0);
	func_642(iParam0, iParam1, -1010166918, 0);
	func_642(iParam0, iParam1, 660170868, 0);
	func_642(iParam0, iParam1, -1278312096, 0);
	func_642(iParam0, iParam1, -509158128, 0);
	func_642(iParam0, iParam1, -226656579, 0);
	func_642(iParam0, iParam1, 2115868159, 0);
	func_642(iParam0, iParam1, 1495813101, 0);
	func_642(iParam0, iParam1, 1197385818, 0);
	func_642(iParam0, iParam1, 1015780020, 0);
	func_642(iParam0, iParam1, -1286733825, 0);
	func_642(iParam0, iParam1, -1670393277, 0);
	func_642(iParam0, iParam1, -415733461, 0);
	func_642(iParam0, iParam1, -1207924036, 0);
	func_642(iParam0, iParam1, 497702414, 0);
	func_642(iParam0, iParam1, 719188085, 0);
	func_642(iParam0, iParam1, 43753457, 0);
	func_642(iParam0, iParam1, 771290791, 0);
	func_642(iParam0, iParam1, 20356387, 0);
	func_642(iParam0, iParam1, 309149584, 0);
	func_642(iParam0, iParam1, 1613781781, 0);
	func_642(iParam0, iParam1, 1693607065, 0);
	func_642(iParam0, iParam1, 1132176120, 0);
	func_642(iParam0, iParam1, 869270437, 0);
}

void func_485(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, 106566339, 0);
	func_642(iParam0, iParam1, -50399569, 0);
	func_642(iParam0, iParam1, 1222652248, 0);
	func_642(iParam0, iParam1, -350226955, 0);
	func_642(iParam0, iParam1, 1030835986, 0);
	func_642(iParam0, iParam1, -1535431934, 0);
	func_642(iParam0, iParam1, -1448293989, 0);
	func_642(iParam0, iParam1, 266218800, 0);
	func_642(iParam0, iParam1, 555364152, 0);
	func_642(iParam0, iParam1, -1996978098, 0);
	func_642(iParam0, iParam1, 1078461828, 0);
}

void func_486(int iParam0, int iParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, -1976316465);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, 841021282);
}

void func_487(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, 889541022, 0);
	func_642(iParam0, iParam1, -989642646, 0);
}

void func_488(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, -767591988, 0);
	func_642(iParam0, iParam1, -1683752762, 0);
	func_642(iParam0, iParam1, 1986610512, 0);
	func_642(iParam0, iParam1, -319516747, 0);
	func_642(iParam0, iParam1, -1329647920, 0);
}

void func_489(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_642(iParam1, iParam2, func_643(iParam0, iParam3), 0);
}

void func_490(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, 707888648, 0);
}

struct<2> func_491(int iParam0, var uParam1)
{
	var uVar0;
	struct<32> Var1;
	struct<2> Var33;

	uVar0 = func_214(func_156(iParam0), uParam1);
	Var1 = { func_644(uVar0, 1, iParam0, uParam1) };
	if (Var1.f_3 != 0)
	{
		Var33 = { func_645(Var1.f_3, 4) };
		if (!func_36(Var33))
		{
			return func_203();
		}
		return Var33;
	}
	return func_203();
}

int func_492(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

bool func_493(var uParam0, int iParam1)
{
	uParam0->f_2 = 1168896522;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_494(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<2> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;

	iVar8 = func_646(iParam1);
	if (iVar8 == -1)
	{
		return 0;
	}
	if (!func_647(&Var0))
	{
		return 0;
	}
	if (!func_648(&Var0, 3, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 6, func_649(iVar8), 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 8, iParam1, 0, 1))
	{
		return 0;
	}
	uVar7 = Var0.f_1;
	if (!func_648(&Var0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 18, func_650(iParam4), 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 19, func_651(4), 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 20, iParam2, 0, 1))
	{
		return 0;
	}
	uParam0->f_39 = func_652(&Var0);
	Var0.f_1 = uVar7;
	if (func_648(&Var0, 14, 0, 0, 1))
	{
		uParam0->f_37 = func_653(&Var0, 0);
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
			if (!func_648(&Var0, 9, (iVar9 - 1), 0, 1))
			{
				return 0;
			}
			iVar5 = func_654(&Var0);
		}
		if (!func_655((*uParam0)[iVar9 /*6*/], iVar5, iParam2, iParam3, iParam4))
		{
			return 0;
		}
		iVar9++;
	}
	return 1;
}

bool func_495(var uParam0, int iParam1)
{
	uParam0->f_2 = 1700129460;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_496(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

int func_497(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_498(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = func_467(iParam0, iParam1);
	if (bParam2 && iVar0 == 0)
	{
		return 1;
	}
	if (bParam3 && iVar0 == 21)
	{
		return 1;
	}
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
		case 21:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_499(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (iParam2 && func_656(iParam0, fParam1, bParam5))
	{
		return 1;
	}
	if (iParam3 && func_657(iParam0, fParam1))
	{
		return 1;
	}
	if (iParam4 && func_658(iParam0, fParam1))
	{
		return 1;
	}
	if (iParam6 && func_659(iParam0, fParam1))
	{
		return 1;
	}
	return 0;
}

int func_500(int iParam0)
{
	if (func_36(((*Global_1225057)[iParam0 /*686*/])->f_590) && func_609(((*Global_1225057)[iParam0 /*686*/])->f_590, func_261(((*Global_1225057)[iParam0 /*686*/])->f_565), 0))
	{
		return 0;
	}
	if (func_660())
	{
		return 2;
	}
	if ((func_618(iParam0, 255) && !SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID())) || !func_64(iParam0, 512, 255))
	{
		return 0;
	}
	if (func_64(iParam0, 8388608, 255))
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1214482)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()) || func_64(iParam0, 32, 255))
	{
		return 3;
	}
	if (func_74(((*Global_1225057)[iParam0 /*686*/])->f_565) && !func_264(iParam0, 131072))
	{
		return 2;
	}
	return 1;
}

void func_501(int iParam0)
{
	int iVar0;

	iVar0 = ((*Global_1225057)[iParam0 /*686*/])->f_596;
	if (!func_49(iVar0))
	{
		func_111(iParam0, 2);
		if (func_103(iVar0))
		{
			func_52(iVar0, iParam0, 0, 0);
		}
	}
	else
	{
		func_505(iVar0, iParam0, 0);
	}
	func_291(iParam0, 1048576);
}

int func_502(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_661(iVar0))
		{
			return iVar0;
		}
		else if ((iVar1 == -1 && !func_662(iVar0)) && (Global_1225057->f_8919[iVar0 /*4*/])->f_2 < iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_503(int iParam0, int iParam1)
{
	if ((Global_1225057->f_8919[iParam0 /*4*/])->f_1 != iParam1)
	{
		(Global_1225057->f_8919[iParam0 /*4*/])->f_1 = iParam1;
	}
}

void func_504(int iParam0, int iParam1, int iParam2)
{
	if (&Global_1225057->f_8919[iParam0 /*4*/] != iParam2)
	{
		if (!func_120(iParam0, iParam1))
		{
			return;
		}
		Global_1225057->f_8919[iParam0 /*4*/] = iParam2;
		(Global_1225057->f_8919[iParam0 /*4*/])->f_1 = -1;
	}
}

void func_505(int iParam0, int iParam1, int iParam2)
{
	if ((Global_1225057->f_8919[iParam0 /*4*/])->f_2 != iParam2)
	{
		if (!func_120(iParam0, iParam1))
		{
			return;
		}
		(Global_1225057->f_8919[iParam0 /*4*/])->f_2 = iParam2;
	}
}

int func_506(int iParam0, int iParam1, var uParam2)
{
	char cVar0[64];
	int iVar8;
	struct<10> Var9;

	StringCopy(&cVar0, "net_fetch", 64);
	iVar8 = iParam0;
	if (iVar8 != -1)
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(8700) <= 0)
		{
			return 0;
		}
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, iVar8, true, 0))
		{
			*uParam2 = 1;
			return 1;
		}
		if (func_64(iParam0, 2, 255))
		{
			return 1;
		}
		SCRIPTS::REQUEST_SCRIPT(&cVar0);
		if (SCRIPTS::HAS_SCRIPT_LOADED(&cVar0))
		{
			Var9.f_7 = -1;
			Var9.f_7.f_1 = -1;
			Var9.f_9 = 255;
			Var9.f_7 = { ((*Global_1225057)[iParam0 /*686*/])->f_590 };
			Var9.f_6 = iParam0;
			Var9 = iVar8;
			(Global_1225057->f_8919[iParam1 /*4*/])->f_3 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var9, 10, 8700);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			func_663(&cVar0, iVar8);
			return 1;
		}
	}
	return 0;
}

int func_507(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_664(iParam0);
	iVar1 = func_665(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_508(iVar1))
		{
			func_666(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_508(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_509(int iParam0)
{
	if (!func_667(PLAYER::PLAYER_ID(), iParam0, 8))
	{
		return;
	}
	func_668();
	Global_1103537->f_15 = 1;
	func_669(iParam0, 8);
}

bool func_510(int iParam0)
{
	if (!func_670(iParam0))
	{
		return true;
	}
	return (MISC::GET_GAME_TIMER() - func_671(iParam0)) >= func_672(iParam0);
}

bool func_511(int iParam0, int iParam1)
{
	return ((Global_1100950->f_33[iParam0 /*16*/])->f_3.f_8 && iParam1) != 0;
}

void func_512()
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
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(Var0.f_10);
	Var0.f_4 = 11;
	func_673(1);
	func_421(&Var0);
}

void func_513()
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
	iVar32 = NETWORK::_0x8DC9AA3B508B1A85();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar32))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar32))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar31, iVar32);
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(Var0.f_10);
	Var0.f_4 = 10;
	func_673(0);
	func_420(&Var0, uVar31);
}

void func_514(int iParam0)
{
	vector3 vVar0;

	if (((*Global_1225057)[iParam0 /*686*/])->f_565 != -1777724963)
	{
		return;
	}
	if (func_40(iParam0, 268435456))
	{
		return;
	}
	if (((*Global_1214482)[iParam0 /*27*/])->f_7 == -1)
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		func_162(iParam0, 268435456);
		return;
	}
	vVar0.x = func_675(func_674(((*Global_1214482)[iParam0 /*27*/])->f_7));
	vVar0.f_1 = ((*Global_1214482)[iParam0 /*27*/])->f_21.f_3;
	vVar0.f_2 = ((*Global_1214482)[iParam0 /*27*/])->f_21.f_2;
	func_676(1244342493, &vVar0, 0, 0);
	func_162(iParam0, 268435456);
}

void func_515(var uParam0, int iParam1)
{
	func_677(uParam0, iParam1);
}

void func_516(int iParam0)
{
	struct<6> Var0;

	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	*(Global_1102099->f_34.f_353[iParam0 /*6*/]) = { Var0 };
	((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 0;
}

void func_517(int iParam0)
{
	struct<11> Var0;
	vector3 vVar11;

	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26832), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26836), iParam0);
	(Global_1102099->f_34[iParam0 /*11*/])->f_6 = 0;
	Var0 = 4;
	*(Global_1102099->f_34[iParam0 /*11*/]) = { Var0 };
	func_678(iParam0);
	vVar11 = 255;
	*((*(*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])[iParam0 /*3*/]) = { vVar11 };
	if ((!func_679() || !func_680()) || Global_1572887->f_6)
	{
		func_681(MISC::_CREATE_VAR_STRING(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_682(&((Global_1102099->f_34[iParam0 /*11*/])->f_8), 256))
	{
		if (func_683(Global_1102099->f_34.f_774) < 2 || Global_1102099->f_34.f_778 != 255)
		{
			func_684(&(Global_1102099->f_34.f_773), 64);
		}
		else
		{
			func_684(&(Global_1102099->f_34.f_773), 32);
		}
		Global_1102099->f_34.f_774 = Global_1275573->f_21;
	}
}

void func_518(int iParam0, bool bParam1)
{
	int iVar0;
	struct<11> Var1;
	vector3 vVar12;
	var uVar15;
	struct<6> Var16;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!(Global_1102099->f_34[iVar0 /*11*/])->f_6)
	{
		return;
	}
	func_685(iParam0);
	func_686(iParam0);
	func_687(iParam0);
	func_688(&((Global_1102099->f_34[iVar0 /*11*/])->f_8), 2);
	func_678(iVar0);
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1102099->f_34.f_546[iVar0 /*7*/]) == iParam0 && !func_682(&((Global_1102099->f_34[iVar0 /*11*/])->f_8), 256))
	{
		if (func_683(Global_1102099->f_34.f_774) < 2 || Global_1102099->f_34.f_778 != 255)
		{
			func_684(&(Global_1102099->f_34.f_773), 64);
		}
		else
		{
			func_684(&(Global_1102099->f_34.f_773), 32);
			Global_1102099->f_34.f_778 = iParam0;
		}
		Global_1102099->f_34.f_774 = Global_1275573->f_21;
		func_681(MISC::_CREATE_VAR_STRING(10, "PARLEY_TICKER_END", func_690(PLAYER::GET_PLAYER_NAME(iParam0), func_689(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	*(Global_1102099->f_34[iVar0 /*11*/]) = { Var1 };
	vVar12 = 255;
	*((*(*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])[iVar0 /*3*/]) = { vVar12 };
	if (!bParam1)
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar15, iVar0);
	Var16.f_5 = PLAYER::PLAYER_ID();
	Var16.f_4 = 5;
	func_691(&Var16, &uVar15);
}

bool func_519(int iParam0)
{
	if (((*Global_1266476)[iParam0 /*98*/])->f_97)
	{
		return ((*Global_1266476)[iParam0 /*98*/])->f_97;
	}
	return &(Global_1102099->f_34.f_353[iParam0 /*6*/]);
}

int func_520(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_692(iParam2, -372840566);
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
	func_693(uParam1, iParam0, Var3);
	return 1;
}

bool func_521(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_522()
{
	int iVar0;
	int iVar1;
	struct<39> Var2;
	int iVar41;

	iVar1 = Global_1275573->f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { *(Global_1939231->f_242.f_14[iVar0 /*39*/]) };
		iVar41 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_694(Var2))
			{
				func_695(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_696();
}

void func_523(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_697(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_524(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_524(17), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(3), Param10.f_18);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(4), Param10.f_19);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(5), Param10.f_20);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(6), Param10.f_21);
}

char* func_524(int iParam0)
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

void func_525(int iParam0)
{
	Global_1939231->f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1939231->f_242.f_1186), 0));
}

int func_526(var uParam0)
{
	return 1;
}

int func_527(var uParam0)
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
		if (Global_1896726->f_384)
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
		return func_699(func_698(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_698(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_700(func_698(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_698(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_701(func_698(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_698(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_702(func_698(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_698(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_703(func_698(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_698(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_704(func_698(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_698(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_705(func_698(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_698(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_528()
{
	return Global_1939231->f_242.f_1185;
}

int func_529(int iParam0)
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

int func_530(var uParam0, struct<21> Param1)
{
	if (!func_706(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

int func_531(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_492(iParam0, iParam1);
	return func_369((Global_1234391->f_401[iVar0 /*7*/])->f_2, iParam2);
}

int func_532(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	iVar0 = 0;
	while (iVar0 <= (func_306(iParam0, iParam1) - 1))
	{
		vVar1 = { func_307(func_156(iParam0), iParam1, iVar0) };
		uVar4 = func_707(func_156(iParam0), iParam1, iVar0);
		if (func_364(vVar1))
		{
		}
		else
		{
			if (func_535(vVar1, uVar4, uParam2))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_533(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901929->f_160.f_34;
	if (func_331(&Var1, uParam0) && func_356(&Var1, iParam1))
	{
		func_708(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_534(vector3 vParam0, float fParam3)
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

bool func_535(vector3 vParam0, var uParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iVar0 = 575122756;
	}
	return VOLUME::_0x397769175A7DBB30(vParam0, uParam3, 0, 0, iVar0);
}

int func_536(int iParam0)
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

bool func_537(int iParam0)
{
	return func_709(iParam0, 4);
}

float func_538(int iParam0)
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

int func_539(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if ((Global_1132418->f_2[iParam0 /*41*/])->f_9 == iVar0 || (Global_1132418->f_2[iParam0 /*41*/])->f_9 == (iVar0 - 1))
	{
		return 1;
	}
	return 0;
}

bool func_540(int iParam0)
{
	return Global_1214482[iParam0 /*27*/] == -1;
}

bool func_541(int iParam0)
{
	int iVar0;

	if (!func_118(iParam0))
	{
		return false;
	}
	iVar0 = func_710(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_542(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_711(iVar0);
		if (func_62(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
}

bool func_543()
{
	return (Global_1275565->f_2.f_1 == 2 || Global_1275565->f_2.f_1 == 1);
}

bool func_544(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_549(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_712(iParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_713(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_714(iParam0))
			{
				return true;
			}
			break;
	}
	return func_715(iParam0, 0, 0, 0) >= iParam1;
}

Vector3 func_545(int iParam0)
{
	if (!func_118(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

int func_546(bool bParam0)
{
	if (func_17() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

struct<4> func_547()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_548(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_549(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_546(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_549(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_550(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_551()
{
	return (Global_1140484->f_2001[78 /*192*/])->f_188;
}

float func_552()
{
	return (Global_1140484->f_2001[79 /*192*/])->f_188;
}

void func_553(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_716(Global_1132968->f_4641.f_2[func_391(iParam0, 1) /*4*/]);
}

int func_554(struct<2> Param0, var uParam2)
{
	if (!func_36(Param0))
	{
		return 0;
	}
	func_717(uParam2);
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

int func_555(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_554(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_556(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_331(&Var1, iParam0))
	{
		iVar0 = ((func_718() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_557(int iParam0)
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

int func_558(int iParam0)
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

int func_559(int iParam0, int iParam1)
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
		case -299522880:
			return 319;
		case -297483764:
			return 434;
		case -279765076:
			return 346;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 418;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 523;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 517;
		case -209894800:
			return 345;
		case -207792846:
			return 483;
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
		case -110352060:
			return 431;
		case -108780030:
			return 351;
		case -108307814:
			return 28;
		case -102827640:
			return 403;
		case -101740709:
			return 499;
		case -99303535:
			return 165;
		case -90486812:
			return 491;
		case -89829333:
			return 423;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 509;
		case -75024673:
			return 244;
		case -74031276:
			return 441;
		case -70727482:
			return 453;
		case -63926460:
			return 87;
		case -61411516:
			return 358;
		case -38135693:
			return 468;
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
			return 406;
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
			return 541;
		case 64896505:
			return 391;
		case 74872959:
			return 331;
		case 84709454:
			return 454;
		case 93964309:
			return 396;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 530;
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
		case 215903338:
			return 490;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 518;
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
		case 321629486:
			return 510;
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
		case 404823609:
			return 485;
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
			return 545;
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
		case 468797819:
			return 342;
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
		case 509781469:
			return 378;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 393;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 456;
		case 565812320:
			return 448;
		case 582380806:
			return 359;
		case 588987611:
			return 177;
		case 589380360:
			return 341;
		case 618699440:
			return 75;
		case 619839857:
			return 376;
		case 630808005:
			return 126;
		case 640520536:
			return 470;
		case 642824856:
			return 482;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 500;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 484;
		case 723021499:
			return 250;
		case 730069127:
			return 475;
		case 747514327:
			return 382;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 362;
		case 791041526:
			return 18;
		case 799106423:
			return 455;
		case 803929300:
			return 469;
		case 804063423:
			return 503;
		case 817925178:
			return 227;
		case 826868753:
			return 474;
		case 831940854:
			return 407;
		case 846837291:
			return 451;
		case 865557632:
			return 537;
		case 868326136:
			return 270;
		case 883901517:
			return 385;
		case 885203519:
			return 315;
		case 885378256:
			return 379;
		case 885777893:
			return 375;
		case 896725436:
			return 511;
		case 929582877:
			return 368;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 416;
		case 945612176:
			return 234;
		case 965467037:
			return 344;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 443;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 446;
		case 1032791043:
			return 502;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 538;
		case 1126565489:
			return 486;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 452;
		case 1157309080:
			return 514;
		case 1159471771:
			return 361;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
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
			return 543;
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
		case 1232840551:
			return 481;
		case 1238086793:
			return 347;
		case 1248935549:
			return 415;
		case 1250636944:
			return 245;
		case 1279586666:
			return 449;
		case 1280406542:
			return 442;
		case 1287917122:
			return 387;
		case 1302228510:
			return 349;
		case 1306158345:
			return 199;
		case 1321892118:
			return 357;
		case 1325325699:
			return 421;
		case 1341699707:
			return 526;
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
		case 1362354162:
			return 497;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 414;
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
		case 1480425906:
			return 450;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 426;
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
		case 1517951665:
			return 436;
		case 1521272922:
			return 458;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 386;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 521;
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
		case 1666964801:
			return 527;
		case 1691618738:
			return 66;
		case 1698972798:
			return 352;
		case 1703398561:
			return 365;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 377;
		case 1766284049:
			return 92;
		case 1774060092:
			return 544;
		case 1776302352:
			return 299;
		case 1788424349:
			return 445;
		case 1812677765:
			return 398;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 413;
		case 1867912207:
			return 68;
		case 1881028477:
			return 364;
		case 1884271742:
			return 51;
		case 1891256113:
			return 437;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 360;
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
		case 2013720626:
			return 489;
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
		case 2048790450:
			return 498;
		case 2051822093:
			return 284;
		case 2068208444:
			return 428;
		case 2068253437:
			return 478;
		case 2077022393:
			return 291;
		case 2079292950:
			return 457;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 397;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 496;
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

int func_560(int iParam0)
{
	int iVar0;

	iVar0 = func_719(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_561(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

void func_562(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_563(int iParam0, int iParam1)
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
			func_720((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_720(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_36(*(Global_1900718->f_1[0 /*2*/])))
	{
		func_244(*(Global_1900718->f_1[0 /*2*/]), 3);
	}
}

int func_564(int iParam0)
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

bool func_565(struct<2> Param0, int iParam2, int iParam3)
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
	iVar0 = func_721(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_566(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

void func_567(var uParam0)
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
	func_723(&Var0, func_722(0, 8));
}

int func_568(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_566(uParam0))
	{
		return 0;
	}
	if (!func_724(&(uParam1->f_8)))
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
	iVar0 = func_725(uParam0, uParam1);
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
			if (!func_726(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	*(uParam0->f_3[iVar1 /*40*/]) = { *uParam1 };
	func_134(uParam0->f_3[iVar1 /*40*/], 0);
	*uParam0++;
	return 1;
}

int func_569(var uParam0)
{
	if (func_36(*uParam0))
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

int func_570(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_727(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_728(iParam1)) - 1);
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
			if (func_246((Global_1186267->f_231[iVar6 /*15*/])->f_5, *uParam0))
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

int func_571(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 23)
	{
		if (&Global_1245803->f_2073[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_572(int iParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;
	int iVar18;
	int iVar19;

	Var1.f_10 = 1106247680;
	iVar19 = 1;
	while (iVar19 <= 23)
	{
		iVar18 = iVar19;
		if (iVar18 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_729(&Var1, iVar18, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar19++;
	}
	return -1;
}

void func_573(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[15] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[15])))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 38, &(Global_1051202->f_16[15]));
	func_730(uParam0, uParam0->f_1);
}

void func_574(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_587(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_731(iParam0, iParam1);
	if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		return;
	}
	SCRIPTS::_0x7DE4643157AD646C(iVar0);
}

void func_575(int iParam0, int iParam1)
{
	func_583(iParam0, iParam1);
	func_582(iParam0, iParam1, -1);
}

void func_576(int iParam0)
{
	func_562(&((Global_1198382->f_1[iParam0 /*10*/])->f_4));
	(Global_1198382->f_1[iParam0 /*10*/])->f_6 = 0;
}

void func_577(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

int func_578(int iParam0)
{
	return &(Global_1186267->f_231.f_1066[iParam0 /*17*/]);
}

int func_579(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_1;
}

int func_580(int iParam0, int iParam1)
{
	return Global_1186267->f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_581(int iParam0, int iParam1)
{
	return Global_1198382->f_1[iParam0 /*10*/][iParam1 /*3*/];
}

void func_582(int iParam0, int iParam1, int iParam2)
{
	(*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/] = iParam2;
}

void func_583(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_589(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

bool func_584(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_602(iParam0, iParam1);
	if (iVar0 == 2147483647)
	{
		return true;
	}
	vVar1 = { func_208(PLAYER::PLAYER_ID()) };
	if (func_364(vVar1))
	{
		return false;
	}
	return func_160(vVar1, func_612(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_585(int iParam0, int iParam1, int iParam2)
{
	func_437(iParam0, func_732(iParam1, iParam2));
}

int func_586(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	struct<5> Var13;
	var uVar18;

	iVar0 = func_579(iParam0, iParam1);
	iVar1 = func_578(iParam0);
	if (func_587(iParam0, iParam1))
	{
		return 0;
	}
	if (NETWORK::_0x1B89BC43B6E69107(iVar1, iVar0, 1, 0))
	{
		return 0;
	}
	if (func_280(iParam0, 8))
	{
		if (func_593(iParam0, iParam1) != 4)
		{
			return 0;
		}
	}
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_733(iParam0)) <= 0)
		{
			return 0;
		}
		if (func_280(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_457(iParam0);
			Var3.f_1 = { func_612(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_433(iParam0) };
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var3, 10, func_733(iParam0));
		}
		else if (func_280(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_734(iVar1);
			Var13.f_2 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_14;
			Var13.f_3 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_15;
			Var13.f_4 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_16;
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var13, 5, func_733(iParam0));
		}
		else
		{
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar18, 1, func_733(iParam0));
		}
		func_588(iParam0, iParam1, iVar2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
		func_735(iVar1, iVar0);
		return 1;
	}
	return 0;
}

bool func_587(int iParam0, int iParam1)
{
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_2);
}

void func_588(int iParam0, int iParam1, int iParam2)
{
	((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_2 = iParam2;
}

void func_589(int iParam0, int iParam1, int iParam2)
{
	func_577(iParam0, func_732(iParam1, iParam2));
}

bool func_590(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_280(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_611(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_160(Global_35, func_612(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_591(int iParam0, int iParam1)
{
	return ((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_1;
}

void func_592(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xA4A4359320345B34(iParam2))
	{
		((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_1 = 0;
		return;
	}
	((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_1 = iParam2;
}

int func_593(int iParam0, int iParam1)
{
	return ((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_1;
}

void func_594(int iParam0, int iParam1)
{
	func_600(iParam0, iParam1);
	func_450(iParam0, iParam1);
}

void func_595(int iParam0, int iParam1, int iParam2)
{
	((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_1 = iParam2;
}

int func_596(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_2;
}

int func_597(int iParam0, int iParam1)
{
	return ((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_2;
}

void func_598(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var10;
	int iVar12;

	if (func_591(iParam0, iParam1) != 0 && !func_736(func_591(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_450(iParam0, iParam1))
	{
		Var1 = { func_612(iParam0, iParam1) };
		Var1.f_4 = BUILTIN::TO_FLOAT(func_596(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_737(iParam0);
		Var10 = { func_433(iParam0) };
		iVar12 = 0;
		if (func_36(Var10))
		{
			iVar12 = func_393(Var10);
		}
		if (iVar12 != 0)
		{
			Var1.f_7 = iVar12;
		}
		else
		{
			Var1.f_7 = -1546799264;
		}
		func_592(iParam0, iParam1, VOLUME::_0x183C0B6CFEFFCAE4(&Var1));
	}
}

int func_599(int iParam0, int iParam1)
{
	int iVar0;

	if (func_597(iParam0, iParam1) != 0)
	{
		return 1;
	}
	func_738(iParam0, iParam1);
	func_598(iParam0, iParam1, 1);
	iVar0 = func_591(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_739(iVar0))
	{
		return 0;
	}
	func_740(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_591(iParam0, iParam1)));
	return 1;
}

void func_600(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_597(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iVar0))
	{
		func_740(iParam0, iParam1, 0);
		return;
	}
	VOLUME::_0xFDFECC6EE4491E11(iVar0);
	func_740(iParam0, iParam1, 0);
	func_450(iParam0, iParam1);
}

void func_601(int iParam0, int iParam1, int iParam2)
{
	(*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/] = iParam2;
}

int func_602(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_3;
}

int func_603(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_4;
}

bool func_604(int iParam0)
{
	return &Global_1902689 > iParam0;
}

int func_605(int iParam0, int iParam1, int iParam2)
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
		else if (func_741(iParam0, iParam1, iVar0, iParam2))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_606(int iParam0, int iParam1)
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
		else if (!func_742(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_607(int iParam0, int iParam1)
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
		else if (!func_435(iParam0, iVar0, 2))
		{
		}
		else if (!func_435(iParam0, iVar0, iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_608(int iParam0)
{
	if (!func_417(iParam0))
	{
		return 0;
	}
	return (Global_1186267->f_231[iParam0 /*15*/])->f_5.f_8;
}

int func_609(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_36(*Global_1051163) && !func_246(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_262(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_743(iParam3, 255))
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
	if (func_26())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_36(*Global_1051163))
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

int func_610(int iParam0)
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

int func_611(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_2;
}

Vector3 func_612(int iParam0, int iParam1)
{
	return func_744(&((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/]));
}

var func_613(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_745() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_746());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_746());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_746());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_747(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_748(iVar2))
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
				if (iVar9 & 8192 != 0 && func_749(iVar2) != 1)
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
					if (!func_750(iVar10))
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

bool func_614(int iParam0, int iParam1)
{
	return (*Global_1196005)[iParam1 /*72*/][iParam0] == 0;
}

void func_615(int iParam0)
{
	(Global_1186267->f_2505[iParam0 /*6*/])->f_4 = 0;
	(Global_1186267->f_2505[iParam0 /*6*/])->f_5 = 255;
}

int func_616(struct<2> Param0)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == 255)
	{
		return 0;
	}
	if (!func_36(((*Global_1055966)[iVar0 /*436*/])->f_2))
	{
		return 0;
	}
	if (!func_246(Global_1225057->f_9332, ((*Global_1055966)[iVar0 /*436*/])->f_2))
	{
		if (!func_55(((*Global_1055966)[iVar0 /*436*/])->f_2))
		{
			return 0;
		}
		Global_1225057->f_9332 = { ((*Global_1055966)[iVar0 /*436*/])->f_2 };
	}
	return func_204(Param0, Global_1225057->f_9332, 1, 0);
}

void func_617()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == 255)
	{
		return;
	}
	func_167(MISC::_CREATE_VAR_STRING(10, "GFH_HELP_POSSE_LEADER_CANCELLED", func_690(PLAYER::GET_PLAYER_NAME(iVar0), -963477619)), 10000, 0, 0, 0, 1);
}

bool func_618(int iParam0, int iParam1)
{
	return func_64(iParam0, 1024, iParam1);
}

int func_619(int iParam0)
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
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar1)) && func_64(iParam0, 32, iVar0))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 255;
}

int func_620(var uParam0)
{
	return 0;
}

float func_621()
{
	return (Global_1140484->f_2001[77 /*192*/])->f_188;
}

bool func_622(float fParam0, bool bParam1, bool bParam2, float fParam3)
{
	if (fParam3 == 0f)
	{
		fParam3 = Global_1901929->f_295.f_163;
	}
	if (bParam1)
	{
		fParam3 = (Global_1901929->f_295.f_163 + 50f);
	}
	if (bParam1 && bParam2)
	{
		return true;
	}
	return (((Global_1103537->f_7058 == 0 || (Global_1275573->f_21 - Global_1103537->f_7058) > Global_1103537->f_7058.f_1) && fParam0 >= 0f) && fParam0 < fParam3);
}

var func_623()
{
	return func_751(func_95(-1136577243));
}

bool func_624(int iParam0, int iParam1)
{
	return func_62(((*Global_1214482)[iParam0 /*27*/])->f_25, iParam1);
}

bool func_625(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return false;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return ((Global_17172.f_2619.f_2 == 2 || (bParam1 && Global_17172.f_2619.f_2 == 1)) || (bParam2 && Global_17172.f_2619.f_2 == 3));
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
	return ((((*Global_1097610)[iVar0 /*51*/])->f_48 == 2 || (bParam1 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 1)) || (bParam2 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 3));
}

void func_626(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_752(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_753(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_729(&Var2, iVar0, iVar1, -1, 255);
	func_754((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_95(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_95(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_95(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_95(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

int func_627(int iParam0)
{
	switch (iParam0)
	{
		case -1784925006:
		case -669677371:
		case -232478158:
		case 78055447:
		case 974227447:
		case 1532822440:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_628(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return;
	}
	Var0 = { func_755(iParam0) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1275573->f_21;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

int func_629(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_118(iParam0))
	{
		return 0;
	}
	iVar0 = func_756(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_515(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_757(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_630(struct<2> Param0)
{
	struct<32> Var0;

	if (func_241(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_241(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_241(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_634(Param0, &Var0))
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

int func_631(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_407(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900718->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900718->f_66;
	func_758(Param0, iVar0);
	Global_1900718->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900718->f_66)
	{
		return iVar0;
	}
	func_563(iVar0, iParam2);
	return iParam2;
}

bool func_632(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_633(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return 0;
	}
	iVar0 = func_407(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_759(Param0, func_245(0), iParam2))
	{
		func_244(func_245(0), 3);
		func_244(func_245(iVar0), 4);
		return 0;
	}
	func_563(iVar0, 0);
	func_244(func_245(0), 3);
	func_244(func_245(1), 4);
	return 1;
}

int func_634(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_554(Param0, &vVar0);
	if (func_760(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

void func_635(var uParam0, bool bParam1, int iParam2)
{
	func_761(uParam0, iParam2);
	if (Global_1184439->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_410(func_253(uParam0->f_1));
	}
	else
	{
		func_411();
	}
}

bool func_636(struct<2> Param0)
{
	return func_235(Param0) == 0;
}

int func_637(struct<2> Param0)
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
		if (func_246(*((*Global_1900789)[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_638(struct<2> Param0, bool bParam2)
{
	if (!func_36(Param0))
	{
		return;
	}
	if (!func_636(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_762(Param0);
	}
	func_244(Param0, 1);
	bParam2 = bParam2;
}

struct<2> func_639(int iParam0)
{
	if (!func_763(iParam0))
	{
		return func_203();
	}
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_5;
}

void func_640(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_507(iVar0);
	if (!func_508(iVar1))
	{
		return;
	}
	if (iVar1 != iParam0)
	{
		func_669(iParam0, 7);
		func_669(iParam0, 8);
	}
	Var2 = { func_764(iVar1) };
	switch (func_765(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(Var2.f_5))
			{
				if (!func_667(iVar0, iVar1, 8) && func_511(iVar1, 1))
				{
					func_766(Var2.f_5);
					func_767(iVar1, 8);
				}
				if (func_107(Var2.f_5))
				{
					func_767(iVar1, 2);
					func_669(iVar1, 5);
				}
				else if (func_108(Var2.f_5))
				{
					func_767(iVar1, 1);
					func_669(iVar1, 6);
				}
				else
				{
					func_768(Var2);
					func_767(iVar1, 4);
					func_669(iVar1, 3);
				}
			}
			else
			{
				func_669(iVar1, 7);
			}
			break;
		case 8:
			if (Global_1103537->f_19)
			{
				if (func_511(iVar1, 4))
				{
				}
				else
				{
					func_769();
				}
				func_509(iVar1);
				func_770(1);
				func_770(0);
			}
			else
			{
				func_769();
				func_509(iVar1);
				func_770(1);
				func_770(0);
			}
			break;
	}
}

void func_641(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_507(iVar0);
	if (!func_508(iVar1))
	{
		return;
	}
	Var2 = { func_764(iParam0) };
	switch (func_765(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(Var2.f_5))
			{
				if (!func_667(iVar0, iParam0, 8) && func_511(iParam0, 1))
				{
					func_766(Var2.f_5);
					func_767(iParam0, 8);
				}
				if (func_107(Var2.f_5))
				{
					func_767(iParam0, 2);
					func_669(iParam0, 5);
				}
				else if (func_108(Var2.f_5))
				{
					func_767(iParam0, 1);
					func_669(iParam0, 6);
				}
				else
				{
					func_768(Var2);
					func_767(iParam0, 4);
					func_669(iParam0, 3);
				}
			}
			else
			{
				func_669(iParam0, 7);
			}
			break;
		case 8:
			if (Global_1103537->f_19)
			{
				if (func_511(iVar1, 4))
				{
				}
				else
				{
					func_769();
				}
				func_509(iVar1);
				func_770(1);
				func_770(0);
			}
			else
			{
				func_769();
				func_509(iVar1);
				func_770(1);
				func_770(0);
			}
			break;
	}
}

void func_642(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_643(int iParam0, int iParam1)
{
	if (!func_483(iParam1))
	{
		return 623901053;
	}
	return &(((*Global_1225057)[iParam0 /*686*/])->f_566[iParam1]);
}

struct<32> func_644(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<32> Var0;

	if (!func_760(4, iParam0, &Var0))
	{
	}
	return Var0;
}

struct<2> func_645(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_771(iParam0, &(Global_1070356->f_634), func_56(iParam1));
			break;
		case 3:
			Var0.f_1 = func_771(iParam0, &(Global_1070356->f_634.f_602), func_56(iParam1));
			break;
		case 4:
			Var0.f_1 = func_771(iParam0, &(Global_1070356->f_634.f_2104), func_56(iParam1));
			break;
		case 5:
			Var0.f_1 = func_771(iParam0, &(Global_1070356->f_634.f_12606), func_56(iParam1));
			break;
		case 6:
			Var0.f_1 = func_771(iParam0, &(Global_1070356->f_634.f_12908), func_56(iParam1));
			break;
		case 7:
			Var0.f_1 = func_771(iParam0, &(Global_1070356->f_634.f_15910), func_56(iParam1));
			break;
		case 8:
			Var0.f_1 = func_771(iParam0, &(Global_1070356->f_634.f_15981), func_56(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_203();
	}
	return Var0;
}

int func_646(int iParam0)
{
	var uVar0;

	if (!func_647(&uVar0))
	{
		return -1;
	}
	if (!func_648(&uVar0, 3, 0, 0, 1))
	{
		return -1;
	}
	if (!func_648(&uVar0, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_648(&uVar0, 7, 0, 0, 1))
	{
		return -1;
	}
	if (!func_648(&uVar0, 8, iParam0, 0, 1))
	{
		return -1;
	}
	return func_772(&uVar0);
}

int func_647(var uParam0)
{
	var uVar0;
	var uVar5;

	uVar5 = (Global_1070356->f_26934[31 /*4*/])->f_3;
	if (!DATAFILE::_0x7907969497EA92F5(uVar5))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar5))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar0, 5);
	*uParam0 = uVar5;
	return 1;
}

int func_648(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return 0;
	}
	return 1;
}

int func_649(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -323664079;
		case 1:
			return 304473406;
		case 2:
			return 1428568385;
		default:
			break;
	}
	return 0;
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -893766361;
		case 1:
			return -2027639951;
		default:
			break;
	}
	return 0;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("crime");
		case 0:
			return 2063993476;
		case 1:
			return 1007867116;
		case 3:
			return joaat("header");
		case 4:
			return 1461677252;
		default:
			break;
	}
	return 0;
}

int func_652(var uParam0)
{
	return func_773(uParam0, 27, 1);
}

var func_653(var uParam0, int iParam1)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
	return uVar0;
}

int func_654(var uParam0)
{
	return func_773(uParam0, 21, 1);
}

int func_655(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<2> Var0;
	var uVar5;
	int iVar6;

	iVar6 = func_646(iParam1);
	if (iVar6 == -1)
	{
		return 0;
	}
	if (!func_647(&Var0))
	{
		return 0;
	}
	if (!func_648(&Var0, 3, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 6, func_649(iVar6), 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 8, iParam1, 0, 1))
	{
		return 0;
	}
	uVar5 = Var0.f_1;
	if (!func_648(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	*uParam0 = iParam1;
	uParam0->f_3 = func_774(&Var0);
	uParam0->f_2 = func_775(&Var0);
	uParam0->f_1 = func_776(&Var0);
	Var0.f_1 = uVar5;
	if (!func_648(&Var0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 18, func_650(iParam4), 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 19, func_651(1), 0, 1))
	{
		return 0;
	}
	if (!func_648(&Var0, 20, iParam2, 0, 1))
	{
		return 0;
	}
	uParam0->f_5 = func_652(&Var0);
	uVar5 = Var0.f_1;
	if (!func_777(uParam0, iParam3))
	{
		return 0;
	}
	return func_778(iVar6, uParam0);
}

int func_656(int iParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	vVar0 = { func_159(iParam0) };
	iVar3 = Global_1214482[iParam0 /*27*/];
	iVar4 = ((*Global_1214482)[iParam0 /*27*/])->f_6;
	iVar5 = func_306(iVar3, iVar4);
	if (!func_364(vVar0) && func_160(Global_35, vVar0) < fParam1)
	{
		return 1;
	}
	else if (bParam2 && iVar5 > 0)
	{
		iVar6 = 0;
		while (iVar6 <= (iVar5 - 1))
		{
			if (!func_364(*(((*Global_1225057)[iParam0 /*686*/])->f_609[iVar6 /*3*/])) && func_160(Global_35, *(((*Global_1225057)[iParam0 /*686*/])->f_609[iVar6 /*3*/])) < fParam1)
			{
				return 1;
			}
			iVar6++;
		}
	}
	return 0;
}

int func_657(int iParam0, float fParam1)
{
	int iVar0;

	if (func_40(iParam0, 1048576))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!func_364(*((*(*Global_1225057)[iParam0 /*686*/])[iVar0 /*3*/])) && func_160(Global_35, *((*(*Global_1225057)[iParam0 /*686*/])[iVar0 /*3*/])) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_658(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = ((*Global_1214482)[iParam0 /*27*/])->f_16;
	if (iVar0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && func_160(Global_35, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_659(int iParam0, float fParam1)
{
	if (!func_364(((*Global_1214482)[iParam0 /*27*/])->f_18) && func_160(Global_35, ((*Global_1214482)[iParam0 /*27*/])->f_18) < fParam1)
	{
		return 1;
	}
	return 0;
}

int func_660()
{
	if (Global_1225057->f_9330 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_661(int iParam0)
{
	return (&Global_1225057->f_8919[iParam0 /*4*/] == -1 && (Global_1225057->f_8919[iParam0 /*4*/])->f_1 == -1);
}

bool func_662(int iParam0)
{
	return (Global_1225057->f_8919[iParam0 /*4*/])->f_1 != -1;
}

void func_663(char* sParam0, int iParam1)
{
	int iVar0;

	if (Global_1051202->f_79.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_779(sParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(Global_1051202->f_79[Global_1051202->f_79.f_101 /*10*/], sParam0, 64);
	(Global_1051202->f_79[Global_1051202->f_79.f_101 /*10*/])->f_8 = MISC::GET_HASH_KEY(sParam0);
	(Global_1051202->f_79[Global_1051202->f_79.f_101 /*10*/])->f_9 = iParam1;
	Global_1051202->f_79.f_101++;
	Global_1051202->f_44.f_1 = 1;
}

int func_664(int iParam0)
{
	return Global_1122836[iParam0 /*54*/];
}

int func_665(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	if (func_508(iParam1))
	{
		if (iVar0 == func_780(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_780(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_666(int iParam0)
{
	if (!func_508(iParam0))
	{
		return;
	}
	(*Global_1122836)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*54*/] = iParam0;
}

bool func_667(int iParam0, int iParam1, int iParam2)
{
	return (((*Global_1122836)[iParam0 /*54*/])->f_1[iParam1] && iParam2) != 0;
}

void func_668()
{
	if (!func_781())
	{
		return;
	}
	if (!func_36(*Global_1051163))
	{
		return;
	}
	func_562(Global_1051163);
}

void func_669(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] = (&((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] - (((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] && iParam1));
}

bool func_670(int iParam0)
{
	return func_521(Global_1124790, iParam0, 1);
}

int func_671(int iParam0)
{
	return &(Global_1124790->f_2[iParam0]);
}

int func_672(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1901929->f_295.f_38;
		case 0:
			return Global_1901929->f_295.f_39;
		default:
			break;
	}
	return 0;
}

void func_673(int iParam0)
{
	func_782(iParam0);
	func_783(iParam0, MISC::GET_GAME_TIMER());
}

int func_674(int iParam0)
{
	return Global_1111121[iParam0 /*42*/];
}

int func_675(int iParam0)
{
	return func_784(iParam0);
}

int func_676(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_335(iParam0, iParam2, iParam3);
	if (iVar0 != -1)
	{
		MISC::_COPY_MEMORY(&(Global_1225057->f_8943.f_101), uParam1, 3);
	}
	return iVar0;
}

void func_677(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_678(int iParam0)
{
	if ((Global_1070356->f_19946[iParam0 /*8*/])->f_5 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_1070356->f_19946[iParam0 /*8*/])))
		{
			MAP::_SET_BLIP_FLASH_STYLE(&(Global_1070356->f_19946[iParam0 /*8*/]), (Global_1070356->f_19946[iParam0 /*8*/])->f_5);
		}
		(Global_1070356->f_19946[iParam0 /*8*/])->f_5 = 0;
		func_785(iParam0);
	}
}

bool func_679()
{
	return func_62(Global_1572887->f_7, 1);
}

bool func_680()
{
	return (Global_1572887->f_106.f_75 >= 13 && Global_1572887->f_106.f_75 < 20);
}

var func_681(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar17 = _NAMESPACE71::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

bool func_682(var uParam0, int iParam1)
{
	return func_369(*uParam0, iParam1);
}

int func_683(int iParam0)
{
	return (Global_1275573->f_21 - iParam0);
}

void func_684(var uParam0, int iParam1)
{
	if (func_682(uParam0, iParam1))
	{
		return;
	}
	func_515(uParam0, iParam1);
}

void func_685(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	(Global_1102099->f_34[iVar0 /*11*/])->f_10 = 0;
}

void func_686(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26832), iParam0);
		if (func_750(iParam0))
		{
			func_786(iParam0);
		}
	}
}

void func_687(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26836), iParam0);
}

void func_688(var uParam0, int iParam1)
{
	func_757(uParam0, iParam1);
}

int func_689(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return 636925055;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_107(func_245(0)) && func_252(func_245(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if ((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5;
	}
	if (bParam3 && (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_787(iParam0);
			if (iVar6 == -1031763995 && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
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
			return func_788(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_369((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_789(iParam0, 1);
	if (!bVar0)
	{
		if (func_790(iParam0, bParam1))
		{
			return func_788(iParam0);
		}
		else if (func_791(iParam0, bParam1))
		{
			if (func_792(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_787(iParam0);
	}
	else if (func_790(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_793(func_555(func_245(0)), 1) == 395262693)
		{
			return func_788(iParam0);
		}
		else
		{
			return func_788(iParam0);
		}
	}
	else if (func_791(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_690(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_794(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_691(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 17, uParam1);
}

void func_692(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

void func_693(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_795(uParam0))
	{
		return;
	}
	if (Global_1272170->f_1991 < 20)
	{
		Global_1272170->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1272170->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

bool func_694(struct<38> Param0, var uParam38)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_37);
}

void func_695(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1939231->f_242.f_5, uParam0);
	func_796(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	func_525((Global_1939231->f_242.f_1186 - 1));
}

int func_696()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[0 /*39*/])->f_25);
	iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[0 /*39*/])->f_35);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[iVar0 /*39*/])->f_25);
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[iVar0 /*39*/])->f_35);
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
	func_695(&(Global_1939231->f_242.f_14[iVar3 /*39*/]));
	return iVar3;
}

void func_697(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_524(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_524(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("ib_select");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_524(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_524(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("ib_select");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_524(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_524(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_524(66), Param10.f_15);
}

char* func_698(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_794(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_699(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
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
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_700(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
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
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _NAMESPACE71::_SHOW_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_701(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
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
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_702(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
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
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _NAMESPACE71::_SHOW_NOTIFICATION(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_703(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_704(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x3F9FDDBA79117C69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_705(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
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
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_706(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

var func_707(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901929->f_160.f_35;
	if ((func_331(&Var1, iParam0) && func_356(&Var1, iParam1)) && func_495(&Var1, iParam2))
	{
		func_708(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_708(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

int func_709(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_369((*Global_1132001)[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_710(int iParam0)
{
	if (!func_118(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

int func_711(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_712(int iParam0)
{
	vector3 vVar0;

	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_713(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_797(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_798("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_799(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_800(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_801(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_801(iVar1);
	}
	return 0;
}

bool func_714(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_549(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_802(iParam0);
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
	iVar1 = func_803(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_804(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_805(iParam0);
	iVar2 = func_804(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_715(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_712(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_797(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_806(iParam0, 0);
	}
	if (func_550(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_546(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_807(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_546(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_716(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

void func_717(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_718()
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

int func_719(int iParam0)
{
	return func_808(iParam0) + 30;
}

void func_720(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *(Global_1900718->f_1[iParam0 /*2*/]) };
	*(Global_1900718->f_1[iParam0 /*2*/]) = { *(Global_1900718->f_1[iParam1 /*2*/]) };
	*(Global_1900718->f_1[iParam1 /*2*/]) = { Var0 };
}

int func_721(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_555(Param0);
	}
	return -1;
}

var func_722(int iParam0, int iParam1)
{
	return func_613(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_723(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 45, 36, &uParam1);
}

int func_724(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return 0;
	}
	if (!func_569(&(uParam0->f_5)))
	{
		return 0;
	}
	return 1;
}

int func_725(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_809(uParam1, uParam0->f_3[iVar1 /*40*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_726(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_36(uParam0->f_8.f_5))
	{
		Var32 = { uParam0->f_8.f_5 };
	}
	else if (func_36(uParam0->f_8.f_5.f_6))
	{
		Var32 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return 1;
	}
	bVar34 = false;
	if (func_364(uParam0->f_8.f_2))
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
	else if (!func_810(func_393(Var32), &Var0))
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

int func_727(int iParam0)
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

int func_728(int iParam0)
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

void func_729(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			func_811(uParam0, iParam2);
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
			func_812(uParam0);
			switch (iParam2)
			{
				case 0:
					func_813(uParam0);
					uParam0->f_5 = 277430601;
					uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_813(uParam0);
					uParam0->f_5 = 1659133778;
					uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_813(uParam0);
					uParam0->f_5 = 1296650927;
					uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_813(uParam0);
					uParam0->f_5 = 2115437634;
					uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_813(uParam0);
					uParam0->f_5 = 1098622970;
					uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_813(uParam0);
					uParam0->f_5 = 393263596;
					uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_813(uParam0);
					uParam0->f_5 = 189453630;
					uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_813(uParam0);
					uParam0->f_5 = -98921343;
					uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_813(uParam0);
					uParam0->f_5 = 6025033;
					uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_813(uParam0);
					uParam0->f_5 = -1060299979;
					uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_813(uParam0);
					uParam0->f_5 = 682088681;
					uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_813(uParam0);
					uParam0->f_5 = 1705841922;
					uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_813(uParam0);
					uParam0->f_5 = -301205165;
					uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_813(uParam0);
					uParam0->f_5 = 1906160715;
					uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_813(uParam0);
					uParam0->f_5 = -1129906020;
					uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_813(uParam0);
					uParam0->f_5 = 1592980994;
					uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_813(uParam0);
					uParam0->f_5 = 686459378;
					uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_813(uParam0);
					uParam0->f_5 = -259262381;
					uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_813(uParam0);
					uParam0->f_5 = 1289806844;
					uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_813(uParam0);
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
			func_812(uParam0);
			switch (iParam2)
			{
				case 0:
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
					uParam0->f_5 = 1454566440;
					uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
					uParam0->f_5 = 1141360338;
					uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
					uParam0->f_5 = 844768119;
					uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_814(uParam0, 0);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 4);
					func_814(uParam0, 5);
					func_814(uParam0, 7);
					uParam0->f_5 = -1601993562;
					uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_814(uParam0, 0);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
					func_814(uParam0, 7);
					uParam0->f_5 = -901588956;
					uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_814(uParam0, 0);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
					func_814(uParam0, 7);
					uParam0->f_5 = 2129019244;
					uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_814(uParam0, 0);
					func_814(uParam0, 2);
					func_814(uParam0, 4);
					func_814(uParam0, 5);
					func_814(uParam0, 6);
					uParam0->f_5 = 1227099802;
					uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_814(uParam0, 0);
					func_814(uParam0, 2);
					func_814(uParam0, 4);
					func_814(uParam0, 5);
					func_814(uParam0, 6);
					uParam0->f_5 = -940471213;
					uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_814(uParam0, 0);
					func_814(uParam0, 2);
					func_814(uParam0, 4);
					func_814(uParam0, 5);
					func_814(uParam0, 6);
					uParam0->f_5 = -700569364;
					uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					uParam0->f_5 = 412376369;
					uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_814(uParam0, 0);
					func_814(uParam0, 2);
					func_814(uParam0, 5);
					func_814(uParam0, 7);
					uParam0->f_5 = -364052317;
					uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					uParam0->f_5 = -989186530;
					uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_814(uParam0, 0);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 4);
					func_814(uParam0, 5);
					func_814(uParam0, 6);
					uParam0->f_5 = 333858683;
					uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					uParam0->f_5 = -39511303;
					uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_814(uParam0, 3);
					func_814(uParam0, 4);
					func_814(uParam0, 5);
					func_814(uParam0, 6);
					uParam0->f_5 = 813662381;
					uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
					func_814(uParam0, 7);
					uParam0->f_5 = -1114006686;
					uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
					func_814(uParam0, 7);
					uParam0->f_5 = 1049238845;
					uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
					func_814(uParam0, 7);
					uParam0->f_5 = 1363886783;
					uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
					uParam0->f_5 = -1215674354;
					uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					uParam0->f_5 = 1902132155;
					uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 5);
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
			func_812(uParam0);
			uParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_813(uParam0);
					uParam0->f_5 = 1382777618;
					uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_813(uParam0);
					uParam0->f_5 = -2000681184;
					uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_813(uParam0);
					uParam0->f_5 = 886884092;
					uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_813(uParam0);
					uParam0->f_5 = -1277120723;
					uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_813(uParam0);
					uParam0->f_5 = 1577436816;
					uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_813(uParam0);
					uParam0->f_5 = -234749781;
					uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_813(uParam0);
					uParam0->f_5 = -1607623039;
					uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_813(uParam0);
					uParam0->f_5 = -1943295936;
					uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_813(uParam0);
					uParam0->f_5 = -397730168;
					uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_813(uParam0);
					uParam0->f_5 = -392659534;
					uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_813(uParam0);
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
			func_812(uParam0);
			switch (iParam2)
			{
				case 0:
					func_813(uParam0);
					uParam0->f_5 = 1247886914;
					uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_813(uParam0);
					uParam0->f_5 = 1926100410;
					uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_813(uParam0);
					uParam0->f_5 = 603340011;
					uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_813(uParam0);
					uParam0->f_5 = -1253915394;
					uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_813(uParam0);
					uParam0->f_5 = 1281783573;
					uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_813(uParam0);
					uParam0->f_5 = -1384936716;
					uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_813(uParam0);
					uParam0->f_5 = 636669604;
					uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_813(uParam0);
					uParam0->f_5 = 1410575087;
					uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_813(uParam0);
					uParam0->f_5 = -736919321;
					uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_813(uParam0);
					uParam0->f_5 = 1755496218;
					uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_813(uParam0);
					uParam0->f_5 = -1810033095;
					uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_813(uParam0);
					uParam0->f_5 = 99707271;
					uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_813(uParam0);
					uParam0->f_5 = 2145033839;
					uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_813(uParam0);
					uParam0->f_5 = -994111457;
					uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_813(uParam0);
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
					func_815(uParam0, 0);
					func_815(uParam0, 1);
					func_815(uParam0, 4);
					func_815(uParam0, 5);
					break;
				case 1:
					func_815(uParam0, 2);
					func_815(uParam0, 3);
					func_815(uParam0, 6);
					func_815(uParam0, 7);
					func_816(uParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_814(uParam0, 0);
					uParam0->f_5 = -88606612;
					uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_814(uParam0, 1);
					uParam0->f_5 = -1507537085;
					uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_814(uParam0, 0);
					uParam0->f_5 = 150331424;
					uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_814(uParam0, 1);
					uParam0->f_5 = -74168995;
					uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_814(uParam0, 0);
					uParam0->f_5 = -1303456769;
					uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_814(uParam0, 1);
					uParam0->f_5 = 2080696176;
					uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_814(uParam0, 0);
					uParam0->f_5 = -801880493;
					uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_814(uParam0, 1);
					uParam0->f_5 = -2098877513;
					uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_814(uParam0, 0);
					uParam0->f_5 = -985131289;
					uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_814(uParam0, 1);
					uParam0->f_5 = 171385032;
					uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_814(uParam0, 0);
					uParam0->f_5 = -690365399;
					uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_814(uParam0, 1);
					uParam0->f_5 = -393773180;
					uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_814(uParam0, 0);
					uParam0->f_5 = 1783045643;
					uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_814(uParam0, 1);
					uParam0->f_5 = -1841828372;
					uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_814(uParam0, 0);
					uParam0->f_5 = -1926357119;
					uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_814(uParam0, 1);
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
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
					uParam0->f_5 = 666420762;
					uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 8);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
					uParam0->f_5 = 1145423923;
					uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 4);
					func_814(uParam0, 5);
					func_814(uParam0, 6);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
					uParam0->f_5 = -1176575305;
					uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
					uParam0->f_5 = -888961792;
					uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
					uParam0->f_5 = -1145898130;
					uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 4);
					func_814(uParam0, 7);
					func_814(uParam0, 8);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
					uParam0->f_5 = -264936334;
					uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 3);
					func_814(uParam0, 6);
					func_814(uParam0, 7);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
					uParam0->f_5 = -562839313;
					uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 4);
					func_814(uParam0, 5);
					func_814(uParam0, 6);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
					uParam0->f_5 = -819926700;
					uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_814(uParam0, 0);
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
					uParam0->f_5 = -100890882;
					uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_814(uParam0, 1);
					func_814(uParam0, 2);
					func_814(uParam0, 5);
					func_814(uParam0, 9);
					func_814(uParam0, 10);
					func_814(uParam0, 11);
					func_817(uParam0, iParam3);
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
			func_812(uParam0);
			switch (iParam2)
			{
				case 0:
					func_813(uParam0);
					uParam0->f_5 = -1562903685;
					uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_813(uParam0);
					uParam0->f_5 = 442262250;
					uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_813(uParam0);
					uParam0->f_5 = 2113001754;
					uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_813(uParam0);
					uParam0->f_5 = 222101843;
					uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_813(uParam0);
					uParam0->f_5 = 862535295;
					uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_813(uParam0);
					uParam0->f_5 = 267494763;
					uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_813(uParam0);
					uParam0->f_5 = 492498900;
					uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_813(uParam0);
					uParam0->f_5 = -735417347;
					uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_813(uParam0);
					uParam0->f_5 = 2000289900;
					uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_813(uParam0);
					uParam0->f_5 = 1820563970;
					uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_813(uParam0);
					uParam0->f_5 = 1501808210;
					uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_813(uParam0);
					uParam0->f_5 = -1103422576;
					uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_813(uParam0);
					uParam0->f_5 = -375108461;
					uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_813(uParam0);
					uParam0->f_5 = 1074344160;
					uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_813(uParam0);
					uParam0->f_5 = 1375567406;
					uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_813(uParam0);
					uParam0->f_5 = 1695022182;
					uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_813(uParam0);
					uParam0->f_5 = 1773241795;
					uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_813(uParam0);
					uParam0->f_5 = 1650499101;
					uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_813(uParam0);
					uParam0->f_5 = 149116609;
					uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_813(uParam0);
					uParam0->f_5 = 1486166046;
					uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_813(uParam0);
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
			func_812(uParam0);
			func_816(uParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_813(uParam0);
					uParam0->f_5 = -1657923088;
					uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_813(uParam0);
					uParam0->f_5 = -1268232386;
					uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_813(uParam0);
					uParam0->f_5 = 1926851120;
					uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_813(uParam0);
					uParam0->f_5 = -66052340;
					uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_813(uParam0);
					uParam0->f_5 = 1738334804;
					uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_813(uParam0);
					uParam0->f_5 = 1009780912;
					uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_813(uParam0);
					uParam0->f_5 = -1560771476;
					uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_813(uParam0);
					uParam0->f_5 = 453813335;
					uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_813(uParam0);
					uParam0->f_5 = 786924542;
					uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_813(uParam0);
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
					func_818(uParam0, iParam3);
					uParam0->f_5 = 1323108111;
					uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_818(uParam0, iParam3);
					uParam0->f_5 = -1505479200;
					uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_818(uParam0, iParam3);
					uParam0->f_5 = -1283075997;
					uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_818(uParam0, iParam3);
					uParam0->f_5 = -2100531475;
					uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_818(uParam0, iParam3);
					uParam0->f_5 = 269617530;
					uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_818(uParam0, iParam3);
					uParam0->f_5 = 1592829750;
					uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_818(uParam0, iParam3);
					uParam0->f_5 = 1817985549;
					uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_818(uParam0, iParam3);
					uParam0->f_5 = 1945424739;
					uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_818(uParam0, iParam3);
					uParam0->f_5 = 1787314318;
					uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_818(uParam0, iParam3);
					uParam0->f_5 = 542354442;
					uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_818(uParam0, iParam3);
					uParam0->f_5 = 1510776727;
					uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_818(uParam0, iParam3);
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
			func_812(uParam0);
			switch (iParam2)
			{
				case 0:
					func_813(uParam0);
					uParam0->f_5 = -377638420;
					uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_813(uParam0);
					uParam0->f_5 = 1308799438;
					uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_813(uParam0);
					uParam0->f_5 = -1030922940;
					uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_813(uParam0);
					uParam0->f_5 = 1750043358;
					uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_813(uParam0);
					uParam0->f_5 = -1330609910;
					uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_813(uParam0);
					uParam0->f_5 = 223942444;
					uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_813(uParam0);
					uParam0->f_5 = 1067547121;
					uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_813(uParam0);
					uParam0->f_5 = -450732096;
					uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_813(uParam0);
					uParam0->f_5 = -1701940764;
					uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_813(uParam0);
					uParam0->f_5 = 1584258975;
					uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_813(uParam0);
					uParam0->f_5 = -98183174;
					uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_813(uParam0);
					uParam0->f_5 = -90261849;
					uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_813(uParam0);
					uParam0->f_5 = 754522971;
					uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_813(uParam0);
					uParam0->f_5 = 974542513;
					uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_813(uParam0);
					uParam0->f_5 = -790885273;
					uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_813(uParam0);
					uParam0->f_5 = -1447045452;
					uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_813(uParam0);
					uParam0->f_5 = -586115209;
					uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_813(uParam0);
					uParam0->f_5 = 224941020;
					uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_813(uParam0);
					uParam0->f_5 = -1179654578;
					uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_813(uParam0);
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
			func_812(uParam0);
			uParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_813(uParam0);
					uParam0->f_5 = 974582605;
					uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_813(uParam0);
					uParam0->f_5 = -964359125;
					uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_813(uParam0);
					uParam0->f_5 = -700339292;
					uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_813(uParam0);
					uParam0->f_5 = -470300912;
					uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_813(uParam0);
					uParam0->f_5 = -241343909;
					uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_813(uParam0);
					uParam0->f_5 = 1944053474;
					uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_813(uParam0);
					uParam0->f_5 = -2120646059;
					uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_813(uParam0);
					uParam0->f_5 = -1656440405;
					uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_813(uParam0);
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
			func_812(uParam0);
			func_816(uParam0, 1);
			func_816(uParam0, 4);
			func_816(uParam0, 8);
			func_816(uParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_813(uParam0);
					uParam0->f_5 = -1623035253;
					uParam0->f_11 = { func_545(func_366(iParam4)) };
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
					func_819(uParam0, iParam3);
					uParam0->f_5 = -1957221189;
					uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_819(uParam0, iParam3);
					uParam0->f_5 = 871956008;
					uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_819(uParam0, iParam3);
					uParam0->f_5 = -718829908;
					uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_819(uParam0, iParam3);
					uParam0->f_5 = -478076065;
					uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_819(uParam0, iParam3);
					uParam0->f_5 = 158131441;
					uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_819(uParam0, iParam3);
					uParam0->f_5 = 575051428;
					uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_819(uParam0, iParam3);
					uParam0->f_5 = -861587350;
					uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_819(uParam0, iParam3);
					uParam0->f_5 = -616671844;
					uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_819(uParam0, iParam3);
					uParam0->f_5 = -828875274;
					uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_819(uParam0, iParam3);
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
			func_812(uParam0);
			switch (iParam2)
			{
				case 0:
					func_813(uParam0);
					uParam0->f_5 = 2136361638;
					uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_813(uParam0);
					uParam0->f_5 = 1948005426;
					uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_813(uParam0);
					uParam0->f_5 = 462368629;
					uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_813(uParam0);
					uParam0->f_5 = -172629291;
					uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_813(uParam0);
					uParam0->f_5 = 1063777848;
					uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_813(uParam0);
					uParam0->f_5 = -267241827;
					uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_813(uParam0);
					uParam0->f_5 = -1183266453;
					uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_813(uParam0);
					uParam0->f_5 = -877826604;
					uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_813(uParam0);
					uParam0->f_5 = 1527533302;
					uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_813(uParam0);
					uParam0->f_5 = -865586768;
					uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_813(uParam0);
					uParam0->f_5 = 294379466;
					uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_813(uParam0);
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
			iVar17 = func_820(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				uParam0->f_7 = 1;
			}
			*uParam0 = func_821(iVar17);
			uParam0->f_1 = 0;
			uParam0->f_6 = 2;
			func_816(uParam0, 32);
			if (iParam2 != -1)
			{
				uParam0->f_9 = func_822(func_156(iVar17), iParam2);
				uParam0->f_15 = func_823(func_156(iVar17), iParam2);
				uParam0->f_5 = func_298(iVar17, iParam2);
				uParam0->f_11 = { func_304(iVar17, iParam2) };
			}
			break;
	}
}

void func_730(var uParam0, var uParam1)
{
}

int func_731(int iParam0, int iParam1)
{
	return ((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_2;
}

int func_732(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

var func_733(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_1;
}

int func_734(int iParam0)
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

void func_735(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051202->f_79.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_824(iParam0, iParam1);
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

int func_736(int iParam0)
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

var func_737(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_3;
}

void func_738(int iParam0, int iParam1)
{
	if (func_591(iParam0, iParam1) != 0)
	{
		if (func_736(func_591(iParam0, iParam1)))
		{
			func_600(iParam0, iParam1);
			func_450(iParam0, iParam1);
		}
	}
}

int func_739(int iParam0)
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

void func_740(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam2))
	{
		((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_2 = 0;
		return;
	}
	((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_2 = iParam2;
}

bool func_741(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_435(iParam0, iParam2, func_732(iParam1, iParam3));
}

int func_742(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_741(iParam0, iParam1, iParam2, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_743(int iParam0, int iParam1)
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

Vector3 func_744(int iParam0)
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

int func_745()
{
	return Global_1051202->f_12;
}

char* func_746()
{
	return "unnamed";
}

int func_747(int iParam0)
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

int func_748(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_341(35, iParam0);
}

int func_749(int iParam0)
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

bool func_750(int iParam0)
{
	if (func_825(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_826(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

var func_751(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

bool func_752(int iParam0)
{
	return iParam0 != 0;
}

int func_753(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*uParam1 = iVar1;
		func_729(&Var2, *uParam1, -1, -1, 255);
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

void func_754(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

struct<2> func_755(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_95(-495896359);
	}
	return Var0;
}

int func_756(int iParam0)
{
	if (!func_118(iParam0))
	{
		return 0;
	}
	if (!func_541(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_757(var uParam0, int iParam1)
{
	func_827(uParam0, iParam1);
}

void func_758(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		func_562(Global_1900718->f_1[iParam2 /*2*/]);
	}
	else
	{
		*(Global_1900718->f_1[iParam2 /*2*/]) = { Param0 };
	}
	func_476(Param0, 0, 1, -1);
}

int func_759(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_36(Param0))
	{
		return 0;
	}
	if (!func_36(Param2))
	{
		return 1;
	}
	iVar0 = func_252(Param0);
	iVar1 = func_252(Param2);
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

int func_760(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!func_828(iParam0))
	{
		return 0;
	}
	if (func_829(iParam0, iParam1, &uVar0))
	{
		func_830(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_761(var uParam0, int iParam1)
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

void func_762(struct<2> Param0)
{
	if (func_241(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_241(Param0)))
	{
		STATS::_0x99230691875FC218(func_252(Param0), func_241(Param0), Global_35);
	}
}

int func_763(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

struct<13> func_764(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3;
}

int func_765(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return func_831(iParam0);
}

int func_766(struct<2> Param0)
{
	if (func_781())
	{
		return 0;
	}
	if (!func_36(Param0))
	{
		return 0;
	}
	*Global_1051163 = { Param0 };
	return 1;
}

void func_767(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] = (((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] || iParam1);
}

void func_768(int iParam0)
{
	func_832(iParam0);
}

void func_769()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	iVar0 = NETWORK::_0x51F33DBC1A41CBFD();
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

void func_770(int iParam0)
{
	func_833(iParam0);
	func_783(iParam0, 0);
}

int func_771(int iParam0, var uParam1, int iParam2)
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

int func_772(var uParam0)
{
	return func_834(func_773(uParam0, 30, 1));
}

int func_773(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_774(var uParam0)
{
	return func_773(uParam0, 22, 1);
}

int func_775(var uParam0)
{
	return func_835(func_773(uParam0, 29, 1));
}

int func_776(var uParam0)
{
	return func_836(func_773(uParam0, 28, 1));
}

int func_777(var uParam0, int iParam1)
{
	var uVar0;
	int iVar5;

	iVar5 = func_646(*uParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_647(&uVar0))
	{
		return 0;
	}
	if (!func_648(&uVar0, 3, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&uVar0, 6, func_649(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_648(&uVar0, 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&uVar0, 8, *uParam0, 0, 1))
	{
		return 0;
	}
	if (!func_648(&uVar0, 15, 0, 0, 0))
	{
		return 0;
	}
	if (!func_648(&uVar0, 16, func_837(iParam1), 0, 1))
	{
		return 0;
	}
	uParam0->f_4 = func_838(&uVar0);
	return 1;
}

int func_778(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_839(uParam1);
		case 1:
			return func_840(uParam1);
		default:
			break;
	}
	return 0;
}

int func_779(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Global_1051202->f_79.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = MISC::GET_HASH_KEY(sParam0);
	iVar0 = 0;
	while (iVar0 <= (Global_1051202->f_79.f_101 - 1))
	{
		if ((Global_1051202->f_79[iVar0 /*10*/])->f_8 == iVar1 && (Global_1051202->f_79[iVar0 /*10*/])->f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_780(int iParam0)
{
	return &(Global_1100950->f_33[iParam0 /*16*/]);
}

bool func_781()
{
	return func_36(*Global_1051163);
}

void func_782(int iParam0)
{
	if (func_841(Global_1124790, iParam0, 1))
	{
	}
}

void func_783(int iParam0, int iParam1)
{
	Global_1124790->f_2[iParam0] = iParam1;
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case -86207568:
			return 515385649;
		case 1896585330:
			return 391853669;
		case 769966168:
			return -1520322625;
		case 1087736289:
			return 464168739;
		case -2032510574:
			return 1683882639;
		case 860783980:
			return -567552001;
		case -953689515:
			return 1757204629;
		case 1194107589:
			return 1685495859;
		case -233841303:
			return -950321673;
		case 485557528:
			return 664333876;
		case -896565033:
			return -583455445;
		case -979677797:
			return -95879657;
		case 1184730938:
			return 2060758004;
		default:
			break;
	}
	return 0;
}

void func_785(int iParam0)
{
	if (!func_842(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19683.f_260), iParam0);
	}
}

void func_786(int iParam0)
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
	func_843(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

int func_787(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_788(int iParam0)
{
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != Global_1275573->f_15 && !func_26())
	{
		return 636925055;
	}
	return -963477619;
}

int func_789(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_844(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(((*Global_1097610)[iVar3 /*51*/])->f_18);
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
	if (iVar1 < Global_1901929->f_673.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901929->f_673.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901929->f_673.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901929->f_673.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901929->f_673.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901929->f_673.f_36)
	{
		return 5;
	}
	return 6;
}

int func_790(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == Global_1275573->f_10)
	{
		return 1;
	}
	iVar0 = iParam0;
	if (!&Global_1275573->f_22[iVar0])
	{
		return 0;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return 1;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iVar0))
	{
		return 1;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1275573->f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return 1;
	}
	else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_791(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return true;
		}
	}
	if (func_845(iParam0))
	{
		return true;
	}
	return !func_790(iParam0, 0);
}

int func_792(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 1;
		}
	}
	if (func_825(iParam0))
	{
		return 0;
	}
	if (func_845(iParam0))
	{
		return 0;
	}
	if (func_846(iParam0))
	{
		return 1;
	}
	return func_847(iParam0);
}

int func_793(int iParam0, int iParam1)
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

char* func_794(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_795(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_796(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_524(91));
	if (func_848(iVar0))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar0, 1);
	}
}

int func_797(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_712(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_849(iParam0, 1399091007))
	{
		func_850(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_798(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_546(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_799(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_800(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_801(int iParam0)
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

int func_802(int iParam0)
{
	struct<2> Var0;

	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_803(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428: /* GXTEntry: "No Foundation" */
			return -2056583192;
		case 1710247623: /* GXTEntry: "No Blush" */
			return 1015239729;
		case 1964684696: /* GXTEntry: "No Eye Liner" */
			return -340627321;
		case -2087489409: /* GXTEntry: "No Eye Shadow" */
			return -875805376;
		case -860557048: /* GXTEntry: "No Lipstick" */
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_804(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_805(int iParam0)
{
	int iVar0;

	iVar0 = func_802(iParam0);
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

int func_806(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_851(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_853(&Var0, func_852(0));
	}
	if (!func_854(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_801(iVar14);
	return uVar15;
}

struct<4> func_807(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_855(iParam0, bParam1, 0) };
	return func_548(iParam0, Var0, Var0.f_4, bParam1);
}

int func_808(int iParam0)
{
	return iParam0 * 31;
}

int func_809(var uParam0, var uParam1)
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
	if (!func_246(uParam1->f_8.f_5, uParam0->f_8.f_5))
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

int func_810(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = { func_856(iParam0) };
	if (!func_36(Var0))
	{
		return 0;
	}
	func_760(Var0, iParam0, uParam1);
	return 1;
}

void func_811(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_857(uParam0);
			break;
		case 1:
			func_857(uParam0);
			break;
		case 2:
			func_857(uParam0);
			break;
		case 3:
			func_858(uParam0);
			break;
		case 4:
			func_857(uParam0);
			break;
		case 5:
			func_857(uParam0);
			break;
		case 6:
			func_858(uParam0);
			break;
		case 7:
			func_858(uParam0);
			break;
		case 8:
			func_858(uParam0);
			break;
		case 9:
			func_857(uParam0);
			break;
		default:
			func_813(uParam0);
			func_812(uParam0);
			break;
	}
}

void func_812(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_815(uParam0, iVar0);
		iVar0++;
	}
}

void func_813(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_814(uParam0, iVar0);
		iVar0++;
	}
}

void func_814(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_815(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_816(var uParam0, int iParam1)
{
	func_515(&(uParam0->f_16), iParam1);
}

void func_817(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_815(uParam0, 0);
			break;
		case 1:
		case 2:
			func_815(uParam0, 1);
			func_815(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_815(uParam0, 0);
			func_815(uParam0, 2);
			break;
		case 8:
			func_815(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_815(uParam0, 1);
			break;
		default:
			func_812(uParam0);
			break;
	}
}

void func_818(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_859(uParam0);
			break;
		case 1:
			func_860(uParam0);
			break;
		case 2:
			func_861(uParam0);
			break;
		case 3:
			func_862(uParam0);
			break;
		default:
			func_813(uParam0);
			func_812(uParam0);
			break;
	}
}

void func_819(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_863(uParam0);
			break;
		case 1:
		case 2:
			func_864(uParam0);
			break;
		case 3:
		case 4:
			func_865(uParam0);
			break;
		default:
			func_812(uParam0);
			break;
	}
	func_813(uParam0);
}

var func_820(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

int func_821(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

var func_822(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_331(&Var1, iParam0) && func_356(&Var1, iParam1))
	{
		func_333(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_823(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_331(&Var1, iParam0) && func_356(&Var1, iParam1))
	{
		func_333(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_824(int iParam0, int iParam1)
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

int func_825(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_826(int iParam0)
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
		func_786(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_843(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_827(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_828(int iParam0)
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

bool func_829(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_866(iParam0);
	uParam2->f_4 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_830(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_867(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_868(iVar0);
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
			uParam2->f_5 = func_869(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_870(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_871(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_872(iVar0);
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

var func_831(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_2;
}

void func_832(int iParam0)
{
	if (!func_873(iParam0))
	{
		return;
	}
	func_874(iParam0);
}

void func_833(int iParam0)
{
	if (func_875(Global_1124790, iParam0, 1))
	{
	}
}

int func_834(int iParam0)
{
	switch (iParam0)
	{
		case -323664079:
			return 0;
		case 304473406:
			return 1;
		case 1428568385:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_835(int iParam0)
{
	switch (iParam0)
	{
		case 146345170:
			return 0;
		case joaat("aggressive"):
			return 1;
		case 1880310113:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case joaat("male"):
			return 0;
		case joaat("female"):
			return 1;
		default:
			break;
	}
	return -1;
}

int func_837(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("default");
		case 1:
			return 2009994498;
		default:
			break;
	}
	return 0;
}

int func_838(var uParam0)
{
	return func_773(uParam0, 23, 1);
}

int func_839(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_876(uParam0->f_2) == 0)
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

int func_840(var uParam0)
{
	return 1;
}

bool func_841(var uParam0, int iParam1, int iParam2)
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

bool func_842(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19683.f_260), iParam0);
}

void func_843(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

float func_844(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return 0f;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return Global_17172.f_2619;
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
	if ((_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097610)[iVar0 /*51*/])->f_18 >= ((*Global_1097610)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097610)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097610)[iVar0 /*51*/])->f_45;
}

int func_845(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_846(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_847(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_786(iParam0);
		return false;
	}
	if (func_846(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 2)
		{
			func_877(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275573->f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 2);
}

bool func_848(int iParam0)
{
	return iParam0 != 0;
}

int func_849(int iParam0, int iParam1)
{
	if (!func_549(iParam0, 0))
	{
		return func_879(func_878(iParam0), iParam1);
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

void func_850(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_851(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_852(bool bParam0)
{
	int iVar0;

	iVar0 = func_546(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_548(923904168, func_385(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_548(923904168, func_385(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_548(923904168, func_385(bParam0), -740156546, 0);
}

void func_853(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_854(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_546(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<5> func_855(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_385(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_712(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_548(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_852(bParam1) };
			if (iParam2 && func_880(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_881(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_881(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_882(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("coach"):
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_883(bParam1) };
			switch (func_802(iParam0))
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
		case -2130996531:
		case joaat("dog"):
			if (func_884(iParam0, -1823706425))
			{
				Var0 = { func_548(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_884(iParam0, -1483207246))
			{
				Var0 = { func_548(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_548(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_884(iParam0, -1653629781))
			{
				Var0 = { func_548(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_885(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_884(iParam0, -1653629781))
			{
				Var0 = { func_548(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<2> func_856(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_645(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_645(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_645(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_645(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_645(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_645(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_645(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_203();
}

void func_857(var uParam0)
{
	func_814(uParam0, 0);
	func_814(uParam0, 1);
	func_814(uParam0, 3);
	func_812(uParam0);
}

void func_858(var uParam0)
{
	func_813(uParam0);
	func_886(uParam0, 0, 3);
}

void func_859(var uParam0)
{
	func_814(uParam0, 0);
	func_815(uParam0, 0);
	func_815(uParam0, 1);
	func_815(uParam0, 2);
}

void func_860(var uParam0)
{
	func_814(uParam0, 1);
	func_812(uParam0);
}

void func_861(var uParam0)
{
	func_814(uParam0, 2);
	func_815(uParam0, 3);
}

void func_862(var uParam0)
{
	func_814(uParam0, 3);
	func_815(uParam0, 4);
}

void func_863(var uParam0)
{
	func_815(uParam0, 0);
	func_815(uParam0, 1);
}

void func_864(var uParam0)
{
	func_815(uParam0, 2);
	func_815(uParam0, 3);
}

void func_865(var uParam0)
{
	func_815(uParam0, 4);
	func_815(uParam0, 5);
}

int func_866(int iParam0)
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

int func_867(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_887(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_868(int iParam0)
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

int func_869(int iParam0)
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

int func_870(int iParam0)
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

int func_871(int iParam0)
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

int func_872(int iParam0)
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

bool func_873(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 35);
}

void func_874(int iParam0)
{
	func_562(&(((*Global_1113601)[iParam0 /*35*/])->f_16));
}

bool func_875(var uParam0, int iParam1, int iParam2)
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

int func_876(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 146345170;
		case 1:
			return joaat("aggressive");
		case 2:
			return 1880310113;
		default:
			break;
	}
	return 0;
}

void func_877(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_888(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] != 2)
	{
		if (!&Global_1275573->f_22[iVar0])
		{
			func_786(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1070356->f_19683.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != &Global_1275573 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_NAMESPACE26::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_877(iVar3, iParam1, 0, 1, 0, 0);
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
			func_889(&Var6, uVar4);
		}
	}
}

int func_878(int iParam0)
{
	return iParam0;
}

int func_879(int iParam0, int iParam1)
{
	if (!func_890(iParam0, 2))
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

int func_880(int iParam0, bool bParam1)
{
	if (func_802(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_891();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_881(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_386(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_882(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_892(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_883(bool bParam0)
{
	int iVar0;

	iVar0 = func_546(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_548(271701509, func_385(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_548(271701509, func_385(bParam0), 12999093, 0);
}

int func_884(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_802(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_893(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_885(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_894(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_886(var uParam0, int iParam1, int iParam2)
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
		func_815(uParam0, iVar0);
		iVar0++;
	}
}

int func_887(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_895(iParam0, uParam1, &uVar0))
	{
		func_896(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_888(int iParam0, int iParam1, int iParam2)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = iParam2;
		}
		else
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		}
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = iParam1;
		return 1;
	}
	else if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 == iParam1)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		return 1;
	}
	return 0;
}

void func_889(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_897(*uParam0);
}

int func_890(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_891()
{
	return (func_898(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_899(func_548(889965687 /* GXTEntry: "Wardrobe" */, func_385(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_892(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_546(0);
	*uParam1 = { func_548(iParam0, func_852(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_893(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_894(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_546(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_895(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_866(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_896(var uParam0, int iParam1, var uParam2)
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

void func_897(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_898(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_900(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_546(bParam1), iParam0, iParam3);
}

int func_899(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_901(&uParam0, iParam4, bParam5, iParam6);
}

bool func_900(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_901(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_902(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_902(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_546(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_894(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

