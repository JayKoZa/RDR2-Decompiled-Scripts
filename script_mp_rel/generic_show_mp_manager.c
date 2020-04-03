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
#endregion

void __EntryFunction__()
{
	func_1();
	while (!func_2(0, 0))
	{
		BUILTIN::WAIT(0);
	}
	func_3();
}

void func_1()
{
	func_4(32, -1);
	func_5();
	if (func_6())
	{
		func_3();
	}
	func_7();
	func_8(0);
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

void func_3()
{
	func_9();
}

void func_4(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_9();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_5()
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
		if (func_10() == 0)
		{
			if (func_11())
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

int func_6()
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

void func_7()
{
	struct<36> Var0;
	var uVar36;

	Var0.f_3 = 4;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_1.f_1 = -1;
	Var0.f_3.f_1.f_2 = -1;
	Var0.f_3.f_1.f_5 = -1;
	Var0.f_3.f_1.f_8 = -1;
	Var0.f_3.f_1.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_5 = -1;
	Var0.f_3.f_1.f_8.f_8 = -1;
	Var0.f_3.f_1.f_8.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_8.f_5 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_5 = -1;
	*Global_1269798 = { Var0 };
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1269798, 36, 7);
	func_12(NETWORK::_0xBA24095EA96DFE17(Global_1269798), 36, "g_mpShowHostData");
	if (func_13())
	{
		(*Global_1269765)[func_14()] = uVar36;
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1269765, 33, 8);
		func_15(NETWORK::_0xBA24095EA96DFE17((*Global_1269765)[0]), 33, "g_mpShowPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1269765, 33, 8);
		func_15(NETWORK::_0xBA24095EA96DFE17((*Global_1269765)[0]), 33, "g_mpShowPlayerData");
	}
}

void func_8(bool bParam0)
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

void func_9()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_10()
{
	return Global_1572887->f_13;
}

bool func_11()
{
	return Global_1051202->f_8;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_13()
{
	return !Global_1572887->f_9;
}

int func_14()
{
	return Global_1099294->f_339;
}

int func_15(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

