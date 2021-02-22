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
	if (!func_2())
	{
		func_3();
	}
	while (!func_2())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	while (!func_5())
	{
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	func_6(&Global_1297999);
	func_7(&Global_1298536);
	func_8(&Global_1298166);
	func_9(0);
	func_10();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_11(32, -1);
	func_12();
	if (func_13())
	{
		func_10();
	}
	func_14();
	func_15(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_2()
{
	if (func_16(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_17(iVar0, 1);
		iVar0++;
	}
}

void func_4()
{
	if (!NETWORK::NETWORK_IS_SESSION_ACTIVE() || !func_18())
	{
		return;
	}
	switch (Global_1298166)
	{
		case 0:
			if (Global_1298378 != 1)
			{
				return;
			}
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
			{
				func_19(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
			}
			else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			{
				func_19(PLAYER::PLAYER_ID());
			}
			else
			{
				return;
			}
			func_20();
			func_21(1);
			Global_1298166 = 1;
			break;
		case 1:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_22()))
			{
				func_19(PLAYER::PLAYER_ID());
			}
			func_23();
			func_24();
			func_25();
			func_26();
			func_27();
			func_28();
			func_29();
			func_30();
			func_31();
			func_32();
			func_33();
			break;
	}
}

bool func_5()
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_34(iVar0, &(Global_1298166.f_201.f_1[iVar0 /*4*/])))
		{
			bVar1 = true;
		}
		else
		{
			func_35(iVar0, &(Global_1298166.f_201.f_1[iVar0 /*4*/]), 0);
		}
		iVar0++;
	}
	return !bVar1;
}

void func_6(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_7(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_36(uParam0[iVar0 /*87*/]);
		iVar0++;
	}
}

void func_8(var uParam0)
{
	struct<212> Var0;

	Var0.f_3.f_2 = 32;
	Var0.f_3.f_2.f_1 = 255;
	Var0.f_3.f_2.f_1.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_132 = 32;
	Var0.f_3.f_132.f_1 = 255;
	Var0.f_3.f_132.f_1.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_200 = 255;
	Var0.f_201.f_1 = 2;
	Var0.f_201.f_1.f_1.f_1 = -1;
	Var0.f_201.f_1.f_1.f_2 = -1;
	Var0.f_201.f_1.f_1.f_4.f_1 = -1;
	Var0.f_201.f_1.f_1.f_4.f_2 = -1;
	*uParam0 = { Var0 };
}

void func_9(bool bParam0)
{
	func_37(37, 0);
	func_37(33, 0);
	if (bParam0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1298378.f_44.f_2))
		{
			VOLUME::_DELETE_VOLUME(Global_1298378.f_44.f_2);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1298378.f_44.f_3))
		{
			VOLUME::_DELETE_VOLUME(Global_1298378.f_44.f_3);
		}
	}
}

void func_10()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_12()
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
			func_10();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_10();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_10();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_10();
		}
		if (func_38() == 0)
		{
			if (func_39())
			{
				func_10();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
	}
	return 1;
}

bool func_13()
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

bool func_14()
{
	bool bVar0;

	bVar0 = false;
	func_6(&Global_1297999);
	func_7(&Global_1298536);
	func_8(&Global_1298166);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1297999, 1, 45);
	if (!func_40(NETWORK::_0xBA24095EA96DFE17(&Global_1297999), 1, "g_mpMoonshineHostData"))
	{
		bVar0 = true;
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1298536, 2785, 46);
	if (!func_41(NETWORK::_0x690806BC83BC8CA2(&(Global_1298536[0 /*87*/])), 2785, "g_mpMoonshinePlayerData"))
	{
		bVar0 = true;
	}
	func_42();
	return !bVar0;
}

void func_15(bool bParam0)
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
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
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
			func_10();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_16(bool bParam0, bool bParam1)
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

bool func_17(int iParam0, bool bParam1)
{
	if (func_43(iParam0))
	{
		if (MISC::IS_BIT_SET(Global_1298166.f_201, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_1298166.f_201), iParam0);
		}
		if (bParam1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1298166.f_201.f_1[iParam0 /*4*/], false))
			{
				SCRIPTS::TERMINATE_THREAD(Global_1298166.f_201.f_1[iParam0 /*4*/]);
				Global_1298166.f_201.f_1[iParam0 /*4*/] = 0;
				Global_1298166.f_201.f_1[iParam0 /*4*/].f_1 = -1;
				Global_1298166.f_201.f_1[iParam0 /*4*/].f_3 = 0;
			}
		}
		return func_44(iParam0) == 0;
	}
	return false;
}

bool func_18()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_3;
}

void func_19(int iParam0)
{
	Global_1298166.f_200 = iParam0;
}

void func_20()
{
	int iVar0;

	iVar0 = func_45();
	func_46(iVar0);
	if (func_47(6))
	{
		Global_1298378.f_44.f_1 = 1;
	}
	else
	{
		Global_1298378.f_44.f_1 = 0;
	}
	func_49(func_48());
}

void func_21(int iParam0)
{
	Global_1298166.f_1 = iParam0;
}

int func_22()
{
	return Global_1298166.f_200;
}

void func_23()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!func_50(PLAYER::PLAYER_ID(), 1))
	{
		Global_1298536[iVar0 /*87*/].f_1 = -1;
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1298166.f_200))
	{
		Global_1298536[iVar0 /*87*/].f_1 = -1;
		return;
	}
	iVar1 = Global_1298536[Global_1298166.f_200 /*87*/].f_5.f_12;
	if (Global_1298536[iVar0 /*87*/].f_1 == iVar1)
	{
		return;
	}
	Global_1298536[iVar0 /*87*/].f_1 = iVar1;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if ((!func_18() || !NETWORK::NETWORK_IS_SESSION_ACTIVE()) || !ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
	{
		iVar2 = iVar1;
		if (iVar2 != Global_1298536[Global_1296859 /*87*/])
		{
			Global_1298536[Global_1296859 /*87*/] = iVar2;
		}
	}
	else if (GANG::_0x0F99F6436528A089(Global_1296859.f_15))
	{
		iVar3 = GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
			iVar4 = func_51(iVar3, 1);
			if (Global_1298536[Global_1296859 /*87*/] != iVar4)
			{
				Global_1298536[Global_1296859 /*87*/] = iVar4;
			}
		}
	}
	else if (GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(iVar0)))
	{
		iVar5 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
			iVar6 = func_51(iVar5, 1);
			if (Global_1298536[Global_1296859 /*87*/] != iVar6)
			{
				Global_1298536[Global_1296859 /*87*/] = iVar6;
			}
		}
	}
	func_52();
}

void func_25()
{
	if (!func_53(4096))
	{
		if (func_54(PLAYER::PLAYER_ID(), 0, 1) == 0)
		{
			if (func_55())
			{
				func_49(7);
				func_56(4096);
			}
		}
	}
}

void func_26()
{
	func_57();
	func_58();
	func_59();
	func_60();
	func_61();
}

void func_27()
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_1298166.f_1 == 4)
	{
		func_62();
	}
	else if (Global_1298166.f_1 == 3)
	{
		func_63();
	}
	else
	{
		iVar1 = func_64(Global_1298166.f_200, 1);
		if (iVar1 == -1)
		{
			fVar0 = 1E+08f;
		}
		else
		{
			fVar0 = func_65(iVar1);
		}
		if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_66(fVar0);
		}
		else
		{
			iVar2 = GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15);
			func_67(iVar2, fVar0);
		}
	}
}

void func_28()
{
	if (func_50(PLAYER::PLAYER_ID(), 1))
	{
		if ((func_44(1) == 0 && !func_68()) && !func_69())
		{
			if (func_53(262144))
			{
				func_70(262144);
			}
			func_71(128);
			func_71(2048);
			func_70(8192);
			func_70(33554432);
			func_72(1);
		}
	}
	else
	{
		switch (func_44(1))
		{
			case 3:
				if (!func_53(8192))
				{
					func_56(8192);
					func_56(262144);
				}
				break;
			case 0:
				if (func_53(262144))
				{
					if (!func_73())
					{
						func_49(7);
						func_70(262144);
					}
				}
				break;
		}
	}
}

void func_29()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_75(iVar0, &(Global_1298166.f_201.f_1[iVar0 /*4*/]), func_74(iVar0));
		iVar0++;
	}
}

void func_30()
{
	if (func_76() || func_50(PLAYER::PLAYER_ID(), 1))
	{
		func_77(1);
		func_78();
	}
}

void func_31()
{
	if (func_50(Global_1296859.f_154[Global_1296859], 1))
	{
		NETWORK::_0x236905C700FDB54D();
	}
}

void func_32()
{
	int iVar0;

	func_79();
	func_80();
	func_81();
	func_82();
	func_83();
	func_84();
	func_85();
	iVar0 = func_86(Global_1296859.f_154[Global_1296859]);
	switch (iVar0)
	{
		case 0:
			func_87();
			func_88();
			func_89();
			func_90();
			if (!func_91())
			{
				func_92(1);
			}
			else if (func_93(1065353216 /* Float: 1f */))
			{
				func_92(7);
			}
			else if (func_94())
			{
				func_95();
				func_92(4);
			}
			else
			{
				func_92(2);
			}
			break;
		case 1:
			if (func_91())
			{
				func_92(2);
			}
			break;
		case 2:
			if (!func_96(Global_1296859, 256))
			{
				func_97(256);
			}
			if (func_98(Global_1296859.f_10) > 0)
			{
				func_95();
				func_92(4);
				return;
			}
			if (func_99(Global_1296859.f_10) > 0)
			{
				func_100();
			}
			if (func_101())
			{
				func_92(3);
			}
			break;
		case 3:
			if (func_102(&(Global_1298000.f_9)) != 3)
			{
				return;
			}
			if (func_98(Global_1296859.f_10) == 0)
			{
				func_92(2);
				return;
			}
			func_103();
			func_104(Global_1298000.f_9.f_1, 1);
			func_95();
			func_92(4);
			break;
		case 4:
			func_105();
			if (func_106(&(Global_1298000.f_1)) > Global_1298000.f_4)
			{
				if (func_93(1065353216 /* Float: 1f */) || func_107())
				{
					func_92(6);
				}
				else if (func_98(Global_1296859.f_10) == 0)
				{
				}
			}
			break;
		case 6:
			if (func_108(&(Global_1298000.f_9)))
			{
				return;
			}
			if (func_93(1065353216 /* Float: 1f */))
			{
				if (func_109())
				{
					func_92(5);
				}
				else
				{
					func_110(&(Global_1298000.f_1));
					func_92(7);
				}
			}
			else
			{
				func_111(&(Global_1298000.f_1));
				func_92(4);
			}
			break;
		case 5:
			func_105();
			if (func_96(Global_1296859, 64))
			{
				func_110(&(Global_1298000.f_1));
				func_92(7);
			}
			break;
		case 7:
			if (!func_96(Global_1296859, 524288))
			{
				func_97(524288);
			}
			if (func_96(Global_1296859, 4))
			{
				func_112(4);
			}
			if (!func_96(Global_1296859, 128))
			{
				func_113();
				func_114();
				func_97(128);
			}
			if (func_96(Global_1296859, 8))
			{
				func_112(131072);
				func_112(128);
				func_97(2);
				func_92(8);
			}
			break;
		case 8:
			if (func_96(Global_1296859, 8))
			{
				func_112(8);
			}
			if (func_96(Global_1296859, 512))
			{
				func_115();
				func_92(9);
			}
			break;
		case 9:
			if (func_116())
			{
				func_92(2);
			}
			break;
		case 10:
			if (GANG::_0xD6F6ACF4392187FB(Global_1296859.f_15) && GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
			{
				if (!func_91())
				{
					func_92(1);
				}
				else if (func_93(1065353216 /* Float: 1f */))
				{
					func_92(7);
				}
				else if (func_94())
				{
					func_95();
					func_92(4);
				}
				else
				{
					func_92(2);
				}
			}
			break;
	}
}

void func_33()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1298536[iVar0 /*87*/].f_1 == -1)
	{
		return;
	}
	POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
}

bool func_34(int iParam0, var uParam1)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam1))
	{
		if (!SCRIPTS::_0x30BED53646C86D11(*uParam1))
		{
			SCRIPTS::_0x7DE4643157AD646C(*uParam1);
		}
		return false;
	}
	else
	{
		*uParam1 = 0;
		uParam1->f_1 = -1;
	}
	func_17(iParam0, 1);
	return true;
}

void func_35(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_3 = iParam2;
}

void func_36(var uParam0)
{
	struct<87> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = 10;
	Var0.f_5.f_12 = -1;
	Var0.f_5.f_13 = -1;
	Var0.f_19.f_1 = 11;
	Var0.f_42 = 8;
	Var0.f_53 = 8;
	Var0.f_53.f_1.f_1 = -1;
	Var0.f_53.f_1.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_37(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = (func_117(iParam0) && !bParam1);
	if (!bVar0 && !func_118(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051439.f_72[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1051439.f_72[iParam0 /*75*/].f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051439.f_72[iParam0 /*75*/].f_21, true, true);
			}
			ENTITY::DELETE_ENTITY(&(Global_1051439.f_72[iParam0 /*75*/].f_21));
			Global_1051439.f_72[iParam0 /*75*/].f_21 = 0;
		}
		if (STREAMING::IS_MODEL_VALID(Global_1051439.f_72[iParam0 /*75*/].f_19))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051439.f_72[iParam0 /*75*/].f_19);
		}
		Global_1051439.f_72[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_119(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051439.f_72[iParam0 /*75*/].f_21))
	{
		MISC::_0xE98D55C5983F2509(Global_1051439.f_72[iParam0 /*75*/].f_21);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051439.f_72[iParam0 /*75*/].f_24))
	{
		NETWORK::_0xA35E7BF20FA269E0(Global_1051439.f_72[iParam0 /*75*/].f_24);
		POPULATION::_0xA1CFB35069D23C23(Global_1051439.f_72[iParam0 /*75*/].f_24);
		POPULATION::_0x74C2B3DC0B294102(Global_1051439.f_72[iParam0 /*75*/].f_24);
		if (func_118(iParam0, 524288))
		{
			VOLUME::_DELETE_VOLUME(Global_1051439.f_72[iParam0 /*75*/].f_24);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051439.f_72[iParam0 /*75*/].f_25))
	{
		POPULATION::_0xA1CFB35069D23C23(Global_1051439.f_72[iParam0 /*75*/].f_25);
		POPULATION::_0x74C2B3DC0B294102(Global_1051439.f_72[iParam0 /*75*/].f_25);
		if (func_118(iParam0, 524288))
		{
			VOLUME::_DELETE_VOLUME(Global_1051439.f_72[iParam0 /*75*/].f_25);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051439.f_72[iParam0 /*75*/].f_27))
	{
		if (func_118(iParam0, 524288))
		{
			VOLUME::_DELETE_VOLUME(Global_1051439.f_72[iParam0 /*75*/].f_27);
		}
	}
	if (func_119(iParam0, 16384) && !bVar0)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1051439.f_72[iParam0 /*75*/].f_6))
		{
			iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(Global_1051439.f_72[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
			TASK::_DELETE_SCENARIO_POINT(Global_1051439.f_72[iParam0 /*75*/].f_6);
		}
		Global_1051439.f_72[iParam0 /*75*/].f_6 = 0;
		func_120(iParam0, 16384);
	}
	Global_1051439.f_72[iParam0 /*75*/] = -1;
	Global_1051439.f_72[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051439.f_72[iParam0 /*75*/].f_48 = 0;
	Global_1051439.f_72[iParam0 /*75*/].f_73 = 1;
	Global_1915715.f_3[iParam0 /*447*/].f_16 = 0;
	iVar3 = func_121(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915715.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_122(Global_1051439.f_72[iParam0 /*75*/].f_31[iVar2]);
			Global_1051439.f_72[iParam0 /*75*/].f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051439.f_72[iParam0 /*75*/].f_47 = 0;
	}
	func_123(iParam0);
	if (func_118(iParam0, 262144))
	{
		Global_1051439.f_72[iParam0 /*75*/].f_49 = 262144;
	}
	else
	{
		func_124(iParam0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1051439.f_72[iParam0 /*75*/].f_24) && func_125(iParam0, 2))
	{
		VOLUME::_0xFD010A2154B40676(Global_1051439.f_72[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_0x2C87C3E1C7B96EE2(Global_1051439.f_72[iParam0 /*75*/].f_24);
	}
	func_126(iParam0);
	Global_1051439.f_72[iParam0 /*75*/].f_1 &= 2113536;
	func_127(iParam0);
	Global_1051439.f_72[iParam0 /*75*/].f_18 = -1;
	Global_1051439.f_72[iParam0 /*75*/].f_2 = -1;
}

int func_38()
{
	return Global_1572887.f_13;
}

bool func_39()
{
	return Global_1051252.f_8;
}

bool func_40(var uParam0, int iParam1, char* sParam2)
{
	return true;
}

bool func_41(var uParam0, int iParam1, char* sParam2)
{
	return true;
}

void func_42()
{
	int iVar0;

	iVar0 = func_45();
	func_46(iVar0);
	func_128();
}

bool func_43(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

int func_44(int iParam0)
{
	if (func_43(iParam0))
	{
		return Global_1298166.f_201.f_1[iParam0 /*4*/].f_3;
	}
	return 0;
}

int func_45()
{
	if (!func_129(&(Global_1298378.f_62)))
	{
		return -1;
	}
	switch (func_130(Global_1298378.f_62, 405591388, 0, 1))
	{
		case 1580598647:
			return 0;
		case 786277441:
			return 1;
		case 1273401170:
			return 3;
		case -127194573:
			return 2;
		case 1480239309:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_46(int iParam0)
{
	Global_1298536[PLAYER::PLAYER_ID() /*87*/].f_5.f_12 = iParam0;
}

bool func_47(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	iVar0 = func_131(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		iVar1 = func_132(1, iParam0);
		if (iVar1 == 0)
		{
			return false;
		}
		if (NETWORK::_0xFBE782B3165AC8EC(iVar1))
		{
			return true;
		}
	}
	return false;
}

int func_48()
{
	if (func_129(&(Global_1298378.f_62)))
	{
		switch (func_133(Global_1298378.f_62, 897456793, 1, -1))
		{
			case -1647055373:
				return 0;
			case -660379727:
				return 2;
			case 729277565:
				return 1;
			case -1262899184:
				return 3;
			case -553448238:
				return 4;
			case joaat("UPGRADE_MOONSHINER_THEME_GOTHIC"):
				return 5;
			default:
				break;
		}
	}
	return 0;
}

void func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar1 = func_134();
	iVar2 = func_135();
	iVar3 = func_136() + 1;
	iVar4 = func_137();
	if (!func_55())
	{
		iVar3 = 0;
	}
	func_138(3, iVar1, 1);
	func_138(1, iVar2, 1);
	func_138(0, iVar3, 1);
	if (iVar3 > 0)
	{
		func_138(5, 1, 1);
	}
	else
	{
		func_138(5, 0, 1);
	}
	if (iVar2 > 0)
	{
		func_138(4, 0, 1);
	}
	else if (iParam0 == 5)
	{
		func_138(4, 3, 1);
	}
	else if (iVar3 > 1)
	{
		func_138(4, 2, 1);
	}
	else
	{
		func_138(4, 1, 1);
	}
	if (iVar3 > 1)
	{
		func_138(2, 1, 1);
	}
	else
	{
		func_138(2, 0, 1);
	}
	if (iParam0 != 7)
	{
		Global_1298536[iVar0 /*87*/].f_5.f_11 = iParam0;
	}
	if (func_139())
	{
		func_138(6, 1, 1);
	}
	else
	{
		func_138(6, 0, 1);
	}
	func_138(9, iVar4, 1);
	func_140();
}

bool func_50(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_141(Global_1298536[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

int func_51(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1298536[iParam0 /*87*/];
}

void func_52()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1298166.f_211 == 0)
	{
		Global_1298166.f_211 = MISC::_GET_SYSTEM_TIME();
		return;
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1298166.f_211) > 500)
	{
		Global_1298166.f_211 = 0;
	}
	else
	{
		return;
	}
	iVar0 = Global_1298536[Global_1296859 /*87*/].f_3;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && iVar1 != Global_1296859)
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
			else if (Global_1298536[iVar1 /*87*/].f_3 == iVar0 && !func_50(iVar2, 256))
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar3, true, false, iVar0);
			}
			else
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar3, false, false, 256);
			}
		}
		iVar1++;
	}
}

bool func_53(int iParam0)
{
	return func_141(Global_1298378.f_156, iParam0);
}

int func_54(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return 0;
		}
	}
	return Global_1298536[iParam0 /*87*/].f_5[iParam1];
}

bool func_55()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("ROLE_PROGRESSION_MOONSHINE_COOK_SETUP")) || !UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("ROLE_PROGRESSION_MOONSHINE_SUPPLIES_SETUP")))
	{
		return false;
	}
	return true;
}

void func_56(int iParam0)
{
	func_142(&(Global_1298378.f_156), iParam0);
}

void func_57()
{
	bool bVar0;

	bVar0 = func_50(PLAYER::PLAYER_ID(), 512);
	if (Global_1298378.f_131.f_5)
	{
		if (bVar0)
		{
			func_71(512);
		}
		return;
	}
	if (func_143(512))
	{
		if (bVar0)
		{
			func_71(512);
		}
		return;
	}
	if (func_144() || func_145())
	{
		if (bVar0)
		{
			func_71(512);
		}
	}
	else if (!bVar0)
	{
		func_146(512);
	}
}

void func_58()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	char cVar4[128];
	bool bVar20;
	char* sVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	struct<53> Var25;

	if (Global_1298166.f_1 == 3)
	{
		return;
	}
	if (Global_1298166.f_3.f_1 >= 32)
	{
		return;
	}
	if (Global_1298378.f_131.f_5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1298166.f_3.f_1 - 1))
	{
		if (!func_141(Global_1298166.f_3.f_2[iVar0 /*4*/].f_3, 8))
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	if (iVar1 < 0 || iVar1 >= 32)
	{
		Global_1298166.f_3.f_1 = 0;
		return;
	}
	iVar3 = Global_1298166.f_3.f_2[iVar1 /*4*/];
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	if (func_147(255))
	{
		return;
	}
	StringCopy(&cVar4, "", 128);
	switch (func_148(&cVar4, iVar3, 1))
	{
		case 1:
			Global_1298166.f_3.f_2[iVar1 /*4*/].f_2 = 0;
			bVar20 = true;
			break;
		case 2:
			if (!func_141(Global_1298166.f_3.f_2[iVar1 /*4*/].f_3, 1))
			{
				func_149(iVar3);
				Global_1298166.f_3.f_2[iVar1 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				func_150(&(Global_1298166.f_3.f_2[iVar1 /*4*/].f_3), 1);
			}
			return;
		case 3:
			if (Global_1298166.f_3.f_2[iVar1 /*4*/].f_2 == 0)
			{
				Global_1298166.f_3.f_2[iVar1 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				return;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1298166.f_3.f_2[iVar1 /*4*/].f_2) > 3000)
			{
				func_142(&(Global_1298166.f_3.f_2[iVar1 /*4*/].f_3), 2);
				bVar20 = true;
			}
			else
			{
				return;
			}
			break;
		case 4:
			bVar20 = true;
			Global_1298166.f_3.f_2[iVar1 /*4*/].f_2 = 0;
			break;
	}
	sVar21 = func_151(cVar4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar21))
	{
		iVar22 = MISC::GET_HASH_KEY(sVar21);
		iVar23 = iVar22;
		iVar24 = 0;
	}
	else
	{
		iVar22 = joaat("MP_LOBBY_TEXTURES");
		iVar23 = joaat("TEMP_PEDSHOT");
		iVar24 = 1;
	}
	if (bVar20)
	{
		Var25 = 1;
		Var25.f_1 = 1;
		Var25.f_2 = joaat("COLOR_WHITE");
		Var25.f_4 = -1;
		Var25.f_5 = -1;
		Var25.f_6 = -1;
		Var25.f_10 = -1;
		Var25.f_11 = -1;
		Var25.f_12 = -1;
		Var25.f_18 = joaat("COLOR_WHITE");
		Var25.f_19 = joaat("COLOR_WHITE");
		Var25.f_23 = 300;
		Var25.f_31.f_8 = joaat("COLOR_WHITE");
		Var25.f_31.f_11 = joaat("COLOR_WHITE");
		Var25.f_31.f_12 = 8000;
		Var25.f_31.f_13 = 1511356879;
		Var25.f_31.f_15 = joaat("PLAYER_MENU");
		Var25.f_31.f_21 = 1;
		Var25.f_24 = 9;
		Var25.f_25 = iVar3;
		Var25.f_16 = func_153(PLAYER::GET_PLAYER_NAME(iVar3), func_152(iVar3, 1, -1, 0));
		Var25.f_17 = MISC::_CREATE_VAR_STRING(2, "MS_INVITE_MAIN");
		Var25.f_20 = iVar22;
		Var25.f_21 = iVar23;
		Var25.f_23 = 120;
		Var25.f_30 = NETWORK::_0x9C725D149622BFDE(0);
		Var25.f_29 = "IB_GAMERCARD";
		Var25.f_28 = 22;
		Var25.f_31.f_2 = func_153(PLAYER::GET_PLAYER_NAME(iVar3), func_152(iVar3, 1, -1, 0));
		Var25.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "MS_INVITE_MAIN");
		Var25.f_31.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_NOTIFICATION");
		Var25.f_31.f_6 = iVar22;
		Var25.f_31.f_7 = iVar23;
		Var25.f_31.f_17 = "HUD_Toast_Soundset";
		Var25.f_31.f_18 = "Toast_On";
		Var25.f_22 = 0;
		Var25.f_31.f_21 = iVar24;
		func_142(&(Global_1298166.f_3.f_2[iVar1 /*4*/].f_3), 8);
		if (!func_155(func_154(Var25), Global_1298166.f_3.f_2[iVar1 /*4*/]))
		{
			return;
		}
	}
}

void func_59()
{
	if (Global_1298166.f_3.f_1 > 0)
	{
		if (func_68() || func_69())
		{
			func_156();
		}
	}
}

void func_60()
{
	struct<4> Var0;
	int iVar4;

	if (Global_1298166.f_3 == 0)
	{
		Global_1298166.f_3 = MISC::GET_GAME_TIMER();
		return;
	}
	else if ((MISC::GET_GAME_TIMER() - Global_1298166.f_3) < 3000)
	{
		return;
	}
	Global_1298166.f_3 = 0;
	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298166.f_3.f_2[iVar4 /*4*/].f_1) && func_141(Global_1298166.f_3.f_2[iVar4 /*4*/].f_3, 4))
		{
			Global_1298166.f_3.f_2[iVar4 /*4*/] = { Var0 };
			Global_1298166.f_3.f_1 = (Global_1298166.f_3.f_1 - 1);
		}
		iVar4++;
	}
}

void func_61()
{
	struct<2> Var0;
	int iVar2;

	if (Global_1298166.f_3.f_131 == 0)
	{
		Global_1298166.f_3.f_131 = MISC::GET_GAME_TIMER();
		return;
	}
	else if ((MISC::GET_GAME_TIMER() - Global_1298166.f_3.f_131) < 1000)
	{
		return;
	}
	Global_1298166.f_3.f_131 = 0;
	Var0 = 255;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (((Global_1298166.f_3.f_132[iVar2 /*2*/] != 255 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1298166.f_3.f_132[iVar2 /*2*/])) || (Global_1298166.f_3.f_132[iVar2 /*2*/].f_1 != 0 && (MISC::_GET_SYSTEM_TIME() - Global_1298166.f_3.f_132[iVar2 /*2*/].f_1) >= 120000)) || func_157(iVar2))
		{
			Global_1298166.f_3.f_132[iVar2 /*2*/] = { Var0 };
		}
		iVar2++;
	}
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_22();
	iVar2 = func_64(iVar1, 1);
	if (func_44(iVar0) != 3)
	{
		func_158(iVar2);
		func_72(iVar0);
		func_146(32);
	}
	else if (!func_50(PLAYER::PLAYER_ID(), 32))
	{
		func_17(0, 0);
	}
}

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_22();
	iVar2 = func_64(iVar1, 1);
	if (func_44(iVar0) != 3)
	{
		func_158(iVar2);
		func_72(iVar0);
	}
	else if (func_53(8) && func_44(iVar0) != 4)
	{
		func_17(0, 0);
	}
}

int func_64(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1298536[iParam0 /*87*/].f_5.f_12;
}

float func_65(int iParam0)
{
	return Global_1298378.f_6.f_17[iParam0];
}

void func_66(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	if ((Global_1298378.f_66 != -1 && func_64(PLAYER::PLAYER_ID(), 1) == Global_1298378.f_66) || func_53(128))
	{
		if (func_44(iVar0) != 3)
		{
			if (((fParam0 <= 80f && !func_68()) && !func_69()) || func_53(128))
			{
				func_72(0);
				func_21(1);
			}
		}
		else if (func_65(Global_1298378.f_66) > 100f && !func_53(128))
		{
			func_17(0, 0);
		}
	}
	else if (func_44(iVar0) == 3 && !func_50(PLAYER::PLAYER_ID(), 1))
	{
		func_17(0, 0);
	}
}

void func_67(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	if (!func_50(PLAYER::PLAYER_ID(), 8))
	{
		if (func_44(iVar0) != 3)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			{
				if (func_50(PLAYER::PLAYER_ID(), 4) && func_50(iParam0, 2))
				{
					if (func_64(func_22(), 1) == -1)
					{
						return;
					}
					func_19(iParam0);
					func_72(0);
					func_21(2);
					func_158(Global_1298536[iParam0 /*87*/].f_5.f_12);
					func_146(8);
					func_71(4);
					return;
				}
				else if (((((func_64(iParam0, 1) == Global_1298378.f_66 && fParam1 <= 80f) && !func_68()) && !func_69()) && !func_159()) || func_53(128))
				{
					func_72(0);
					func_21(1);
				}
			}
		}
		else
		{
			if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && func_50(iParam0, 2)) && func_50(PLAYER::PLAYER_ID(), 4))
			{
				if (Global_1298166.f_1 == 3)
				{
					return;
				}
				else if (Global_1298166.f_1 != 2)
				{
					func_21(2);
					func_146(8);
					func_71(4);
					return;
				}
			}
			if ((fParam1 > 100f && (Global_1298166.f_1 == 1 || Global_1298166.f_1 == 0)) && !func_50(PLAYER::PLAYER_ID(), 1))
			{
				func_17(0, 0);
			}
		}
	}
	else
	{
		if ((func_44(iVar0) == 3 && fParam1 > 100f) && (Global_1298166.f_1 == 1 || Global_1298166.f_1 == 0))
		{
			func_17(0, 0);
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && !func_50(iParam0, 2))
		{
			func_71(8);
			func_71(16);
			func_21(1);
		}
	}
}

bool func_68()
{
	return Global_263042[Global_1296859 /*70*/] > 2;
}

bool func_69()
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
	if (!func_160(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_70(int iParam0)
{
	func_161(&(Global_1298378.f_156), iParam0);
}

void func_71(int iParam0)
{
	func_161(&(Global_1298536[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

bool func_72(int iParam0)
{
	if (func_43(iParam0))
	{
		if (!MISC::IS_BIT_SET(Global_1298166.f_201, iParam0))
		{
			MISC::SET_BIT(&(Global_1298166.f_201), iParam0);
		}
		else
		{
			return func_44(iParam0) == 3;
		}
	}
	return false;
}

bool func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar1 = func_51(PLAYER::PLAYER_ID(), 1);
	iVar2 = func_64(PLAYER::PLAYER_ID(), 1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_162(PLAYER::INT_TO_PLAYERINDEX(iVar0), &iVar4, &iVar3, 1))
		{
			if (iVar4 == iVar2 && iVar3 == iVar1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_74(int iParam0)
{
	if (func_43(iParam0))
	{
		return MISC::IS_BIT_SET(Global_1298166.f_201, iParam0);
	}
	return false;
}

void func_75(int iParam0, var uParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (!func_163(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = true;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_22()))
	{
		bVar0 = true;
	}
	switch (uParam1->f_3)
	{
		case 0:
			if (bParam2 && !bVar0)
			{
				func_35(iParam0, uParam1, 1);
			}
			break;
		case 1:
			if (bParam2 && !bVar0)
			{
				if (func_164(iParam0))
				{
					func_35(iParam0, uParam1, 2);
				}
			}
			else
			{
				func_165(iParam0);
				func_35(iParam0, uParam1, 0);
			}
			break;
		case 2:
			if (bParam2 && !bVar0)
			{
				if (func_166(iParam0, uParam1))
				{
					func_165(iParam0);
					func_35(iParam0, uParam1, 3);
				}
			}
			else
			{
				func_165(iParam0);
				func_35(iParam0, uParam1, 0);
			}
			break;
		case 3:
			if ((bVar0 || !bParam2) || !SCRIPTS::_DOES_THREAD_EXIST(*uParam1))
			{
				if (func_34(iParam0, uParam1))
				{
					func_35(iParam0, uParam1, 0);
				}
				else
				{
					func_35(iParam0, uParam1, 4);
				}
			}
			break;
		case 4:
			if (func_34(iParam0, uParam1))
			{
				func_35(iParam0, uParam1, 0);
			}
			break;
	}
}

bool func_76()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1298378.f_29.f_10))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Global_1298378.f_29.f_10, false, 0);
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		func_167(1);
	}
	func_167(0);
	MISC::SET_BIT(&(Global_1957959.f_1), 0);
}

void func_78()
{
	Global_1896738.f_371.f_5 = 1;
}

void func_79()
{
	struct<12> Var0;
	int iVar14;
	int iVar15;

	if (!func_129(&(Global_1298378.f_62)))
	{
		func_168(0);
		func_169(0);
		return;
	}
	Var0.f_9 = -1591664384;
	if (func_170(Global_1298378.f_62, 1039159916, &Var0, 0, 1))
	{
		func_168(Var0.f_11);
	}
	else
	{
		func_168(0);
	}
	if (func_170(Global_1298378.f_62, 1111816631, &Var0, 0, 1))
	{
		func_169(Var0.f_11);
	}
	else
	{
		func_169(0);
	}
	iVar14 = func_171();
	func_172(iVar14);
	iVar15 = func_86(Global_1296859.f_154[Global_1296859]);
	if (((((iVar15 == 4 || iVar15 == 5) || iVar15 == 6) || iVar15 == 7) || iVar15 == 8) || iVar15 == 10)
	{
		func_173();
	}
}

void func_80()
{
	int iVar0;

	iVar0 = func_86(Global_1296859.f_154[Global_1296859]);
	if (((iVar0 != 10 && iVar0 > 0) && GANG::_0x0F99F6436528A089(Global_1296859.f_15)) && !GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
	{
		if (func_64(Global_1296859.f_154[Global_1296859], 1) != -1)
		{
			func_174(898, 1);
		}
		func_92(10);
	}
}

void func_81()
{
	if (func_96(Global_1296859, 16))
	{
		if (func_96(Global_1296859, 32))
		{
			Global_1298000.f_8 = 600f;
			Global_1298000.f_33++;
			func_175(&(Global_1298000.f_5), 1);
			func_112(32);
			func_112(64);
		}
	}
	if (!func_96(Global_1296859, 64))
	{
		if (func_106(&(Global_1298000.f_5)) > Global_1298000.f_8)
		{
			func_110(&(Global_1298000.f_5));
			func_97(64);
		}
	}
	if (!func_96(Global_1296859, 16))
	{
		if (func_86(Global_1296859.f_154[Global_1296859]) == 4 || func_86(Global_1296859.f_154[Global_1296859]) == 6)
		{
			func_97(16);
		}
	}
	else if (func_86(Global_1296859.f_154[Global_1296859]) != 4 && func_86(Global_1296859.f_154[Global_1296859]) != 6)
	{
		func_112(16);
	}
}

void func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_20))
	{
		return;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	iVar3 = Global_1298536[iVar1 /*87*/].f_19.f_15;
	iVar4 = Global_1298536[iVar1 /*87*/].f_19.f_16;
	iVar5 = Global_1298536[Global_1296859 /*87*/].f_19.f_17;
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_21))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1298000.f_21, iVar3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_24))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1298000.f_24, iVar4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_23))
	{
		iVar2 = func_176(iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1298000.f_23, iVar2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_26))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1298000.f_26, 100);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_27))
	{
		iVar6 = func_177(iVar5);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1298000.f_27, iVar6);
	}
	if (func_109())
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_29))
		{
			iVar7 = BUILTIN::FLOOR(func_106(&(Global_1298000.f_5)));
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1298000.f_29, iVar7);
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_28))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1298000.f_28, false);
		}
	}
	else if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_28))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1298000.f_28, true);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_31))
	{
		if (func_96(iVar0, 262144))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1298000.f_31, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1298000.f_31, false);
		}
	}
}

void func_83()
{
	if (func_178() && func_179(Global_34, Global_1051439.f_72[33 /*75*/].f_25, 1, 0))
	{
		if (!func_96(Global_1296859, 8192))
		{
			HUD::_HIDE_HUD_COMPONENT(557238883);
			func_97(8192);
		}
	}
	else if (func_96(Global_1296859, 8192))
	{
		HUD::_DISPLAY_HUD_COMPONENT(557238883);
		func_112(8192);
	}
}

void func_84()
{
	char* sVar0;

	if (Global_1298536[Global_1296859 /*87*/].f_5[3] > 0)
	{
		if (func_96(Global_1296859, 524288) && func_179(Global_34, Global_1298536[Global_1296859 /*87*/].f_19.f_22, 1, 0))
		{
			if (!func_180(897))
			{
				sVar0 = func_181(Global_1298536[Global_1296859 /*87*/].f_19.f_20);
				func_182(897, sVar0, 0);
			}
		}
	}
}

void func_85()
{
	if (func_91())
	{
		if (func_179(Global_34, Global_1298536[Global_1296859 /*87*/].f_19.f_22, 1, 0))
		{
			if (!func_180(899))
			{
				func_174(899, 0);
			}
		}
	}
}

int func_86(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return iVar0;
	}
	return Global_1298000;
}

void func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = Global_1298536[Global_1296859 /*87*/].f_19.f_15;
	iVar2 = INVENTORY::_0xE80E50BEE276A54A(joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW"), 1039159916);
	iVar3 = Global_1298536[Global_1296859 /*87*/].f_19.f_16;
	iVar4 = INVENTORY::_0xE80E50BEE276A54A(-545779394, 1111816631);
	iVar5 = Global_1298536[Global_1296859 /*87*/].f_19.f_17;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_20))
	{
		Global_1298000.f_20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Moonshine_ProgressBars");
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_21))
	{
		Global_1298000.f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1298000.f_20, "MoonshineMashValue", iVar1);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_22))
	{
		Global_1298000.f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1298000.f_20, "MoonshineMashMaximum", iVar2);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_23))
	{
		iVar7 = func_176(iVar0);
		Global_1298000.f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1298000.f_20, "MoonshineMashColorID", iVar7);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_24))
	{
		Global_1298000.f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1298000.f_20, "MoonshineBottlesValue", iVar3);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_25))
	{
		Global_1298000.f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1298000.f_20, "MoonshineBottlesMaximum", iVar4);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_26))
	{
		Global_1298000.f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1298000.f_20, "MoonshineBottlesThresholdValue", 100);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_27))
	{
		iVar6 = func_177(iVar5);
		Global_1298000.f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1298000.f_20, "MoonshineFlavor", iVar6);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_28))
	{
		Global_1298000.f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1298000.f_20, "MoonshineFlavorTimeMeterShowLabel", 0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_29))
	{
		Global_1298000.f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1298000.f_20, "FlavoringTimeMeterValue", 0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_30))
	{
		Global_1298000.f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1298000.f_20, "FlavoringTimeMeterMaximum", 600);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1298000.f_31))
	{
		Global_1298000.f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1298000.f_20, "MoonshineShowCash", 0);
	}
}

void func_88()
{
	int iVar0;

	iVar0 = func_171();
	if (iVar0 != 0)
	{
		func_97(64);
	}
	Global_1298000.f_33 = 0;
}

void func_89()
{
	int iVar0;
	int iVar1;

	iVar0 = func_183();
	iVar1 = func_184();
	if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW") || iVar1 == -545779394)
	{
		func_185(joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW"));
		func_97(1024);
	}
	else if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM") || iVar1 == 1532695640)
	{
		func_185(joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"));
		func_97(2048);
	}
	else if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH") || iVar1 == 1847740267)
	{
		func_185(1847740267);
		func_97(4096);
	}
}

void func_90()
{
	if (Global_1298536[Global_1296859 /*87*/].f_19.f_16 == 20)
	{
		func_97(524288);
	}
}

bool func_91()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-319651633) && func_129(&(Global_1298378.f_62)))
	{
		return true;
	}
	return false;
}

void func_92(int iParam0)
{
	Global_1298000 = iParam0;
}

bool func_93(float fParam0)
{
	struct<12> Var0;

	Var0.f_9 = -1591664384;
	if (func_170(Global_1298378.f_62, 1111816631, &Var0, 0, 1))
	{
		if (IntToFloat(Var0.f_11) >= (fParam0 * BUILTIN::TO_FLOAT(INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, 1111816631))))
		{
			return true;
		}
	}
	return false;
}

bool func_94()
{
	int iVar0;

	if (!func_129(&(Global_1298378.f_62)))
	{
		return false;
	}
	iVar0 = func_130(Global_1298378.f_62, 1039159916, 0, 1);
	if ((iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW") || iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM")) || iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
	{
		return true;
	}
	return false;
}

void func_95()
{
	func_112(256);
	func_97(4);
	func_186();
	Global_1298000.f_33 = 0;
}

bool func_96(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_141(Global_1298536[iParam0 /*87*/].f_19, iParam1);
}

void func_97(int iParam0)
{
	if (!func_141(Global_1298536[Global_1296859 /*87*/].f_19, iParam0))
	{
		func_142(&(Global_1298536[Global_1296859 /*87*/].f_19), iParam0);
	}
}

int func_98(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1298536[iVar0 /*87*/].f_19.f_15;
}

int func_99(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1298536[iVar0 /*87*/].f_19.f_16;
}

void func_100()
{
	struct<12> Var0;

	Var0.f_9 = -1591664384;
	if (func_170(Global_1298378.f_62, 1039159916, &Var0, 0, 1))
	{
		return;
	}
	if (func_170(Global_1298378.f_62, 1111816631, &Var0, 0, 1))
	{
		func_187(Var0.f_4, Var0.f_11, 562618531, 1, 1);
	}
}

bool func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<12> Var5;
	struct<12> Var22;

	if (func_108(&(Global_1298000.f_9)))
	{
		return false;
	}
	iVar0 = func_188();
	if (!func_189(iVar0, 0))
	{
		return false;
	}
	if (!func_129(&(Global_1298378.f_62)))
	{
		return false;
	}
	if (func_190(&(Global_1298378.f_62), 1039159916, 1) > 0)
	{
		return false;
	}
	else if (func_190(&(Global_1298378.f_62), 1111816631, 1) > 0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = func_191(iVar0, 0, 1, -1, 1);
	iVar4 = func_192(iVar0, iVar3, 1, 0, 1, 0);
	if (func_193(iVar0, &iVar1, &iVar2, 0) && func_194(iVar1, iVar2, 0, 1) < iVar4)
	{
		Var5.f_9 = 1;
		Var5.f_11 = -1591664384;
		if (!func_195(&(Global_1298000.f_9), iVar1, &Var5, 1, iVar2, -1, 0))
		{
			return false;
		}
		Global_1298000.f_19 = func_194(iVar1, iVar2, 0, 1);
		return true;
	}
	Var22.f_9 = 1;
	Var22.f_11 = -1591664384;
	if (!func_196(&(Global_1298000.f_9), iVar0, Global_1298378.f_62, 1039159916, 1, &Var22, 1, iVar3, -1, 1))
	{
		return false;
	}
	Global_1298000.f_19 = iVar4;
	return true;
}

int func_102(int* iParam0)
{
	return func_197(iParam0->f_1);
}

void func_103()
{
	int iVar0;

	iVar0 = func_183();
	Global_1298536[Global_1296859 /*87*/].f_19.f_19 = iVar0;
}

void func_104(var uParam0, bool bParam1)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	var uVar14;

	func_198(uParam0, &uVar0);
	iVar4 = Global_1298536[Global_1296859 /*87*/].f_5.f_12;
	iVar5 = func_199(iVar4);
	if (bParam1)
	{
		iVar6 = 1535463323;
	}
	else
	{
		iVar6 = 733252738;
	}
	if (bParam1)
	{
		uVar7 = Global_1298000.f_19;
	}
	uVar8 = Global_1298536[Global_1296859 /*87*/].f_19.f_19;
	uVar9 = Global_1298536[Global_1296859 /*87*/].f_19.f_17;
	uVar10 = Global_1298536[Global_1296859 /*87*/].f_19.f_18;
	uVar11 = Global_1298000.f_33;
	iVar12 = func_200();
	uVar13 = Global_1298536[Global_1296859 /*87*/].f_19.f_16;
	uVar14 = Global_1298536[Global_1296859 /*87*/].f_5[0];
	TELEMETRY::_TELEMETRY_MOONSHINE_BREW(&uVar0, iVar5, iVar6, uVar7, uVar8, uVar9, uVar10, uVar11, iVar12, uVar13, uVar14);
}

void func_105()
{
	if (!func_96(Global_1296859, 4))
	{
		func_89();
		func_97(4);
	}
}

float func_106(var uParam0)
{
	if (!func_201(uParam0))
	{
		return 0f;
	}
	return (BUILTIN::TO_FLOAT(func_202(uParam0)) * 0.001f);
}

bool func_107()
{
	int iVar0;
	int iVar1;
	struct<12> Var2;

	if (func_108(&(Global_1298000.f_9)))
	{
		return false;
	}
	if (!func_129(&(Global_1298378.f_62)))
	{
		return false;
	}
	iVar0 = func_130(Global_1298378.f_62, 1039159916, 0, 1);
	iVar1 = 0;
	if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
	{
		iVar1 = 1847740267;
	}
	else if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"))
	{
		iVar1 = 1532695640;
	}
	else if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW"))
	{
		iVar1 = -545779394;
	}
	else
	{
		iVar1 = -545779394;
	}
	Var2.f_9 = 1;
	Var2.f_11 = -1591664384;
	if (func_196(&(Global_1298000.f_9), iVar1, Global_1298378.f_62, 1111816631, 1, &Var2, 1, -489628648, -1, 1))
	{
		return true;
	}
	return false;
}

bool func_108(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_102(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_109()
{
	if (func_201(&(Global_1298000.f_5)))
	{
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_111(var uParam0)
{
	func_203(uParam0, 0);
}

void func_112(int iParam0)
{
	if (func_141(Global_1298536[Global_1296859 /*87*/].f_19, iParam0))
	{
		func_161(&(Global_1298536[Global_1296859 /*87*/].f_19), iParam0);
	}
}

void func_113()
{
	int iVar0;

	iVar0 = func_171();
	if (func_204(iVar0, 1372968408))
	{
		func_206(func_205(joaat("MADE_RECIPE_TYPE"), joaat("MOONSHINE_RECIPE_REGULAR")), 1);
	}
	else if (func_204(iVar0, -710171994))
	{
		func_206(func_205(joaat("MADE_RECIPE_TYPE"), joaat("MOONSHINE_RECIPE_IMPROVED")), 1);
	}
	else if (func_204(iVar0, 956386416))
	{
		func_206(func_205(joaat("MADE_RECIPE_TYPE"), joaat("MOONSHINE_RECIPE_SPECIAL")), 1);
	}
}

void func_114()
{
	struct<22> Var0;

	if (func_207())
	{
		return;
	}
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_11 = joaat("COLOR_WHITE");
	Var0.f_12 = 8000;
	Var0.f_13 = 1511356879;
	Var0.f_15 = joaat("PLAYER_MENU");
	Var0.f_21 = 1;
	Var0 = 5;
	Var0.f_2 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_TITLE");
	Var0.f_3 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_PRODUCTION_COMPLETE");
	Var0.f_7 = joaat("MOONSHINER_WORKBENCH_MOONSHINE");
	Var0.f_6 = joaat("TOASTS_MP_GENERIC");
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_4 = "MOONSHINE_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 2099367966;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	func_208(&Var0);
}

void func_115()
{
	Global_1298000.f_4 = 0f;
	func_110(&(Global_1298000.f_1));
	func_110(&(Global_1298000.f_5));
	func_112(32);
	func_112(2048);
	func_112(1024);
	func_112(4096);
	func_112(64);
	func_112(128);
	func_112(2);
	func_112(512);
	func_112(65536);
}

bool func_116()
{
	if (func_98(Global_1296859.f_10) == 0 && func_99(Global_1296859.f_10) == 0)
	{
		return true;
	}
	return false;
}

bool func_117(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_118(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_118(int iParam0, int iParam1)
{
	return (Global_1051439.f_72[iParam0 /*75*/].f_49 && iParam1) != 0;
}

bool func_119(int iParam0, int iParam1)
{
	return (Global_1051439.f_72[iParam0 /*75*/].f_1 && iParam1) != 0;
}

void func_120(int iParam0, int iParam1)
{
	if (func_119(iParam0, iParam1))
	{
	}
	Global_1051439.f_72[iParam0 /*75*/].f_1 = (Global_1051439.f_72[iParam0 /*75*/].f_1 - (Global_1051439.f_72[iParam0 /*75*/].f_1 && iParam1));
}

int func_121(int iParam0)
{
	return Global_1051439.f_72[iParam0 /*75*/].f_47;
}

void func_122(int iParam0)
{
	if (func_209(iParam0) && func_210())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_123(int iParam0)
{
}

void func_124(int iParam0)
{
	Global_1051439.f_72[iParam0 /*75*/].f_49 = 0;
}

bool func_125(int iParam0, int iParam1)
{
	return func_211(Global_1051439.f_72[iParam0 /*75*/].f_50, iParam1);
}

void func_126(int iParam0)
{
	Global_1051439.f_72[iParam0 /*75*/].f_50 = 0;
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1051439.f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051439.f_41)
	{
		if (iParam0 == Global_1051439[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051439.f_41 = (Global_1051439.f_41 - 1);
	if (Global_1051439.f_41 < 0)
	{
		Global_1051439.f_41 = 0;
	}
	Global_1051439[iVar1] = Global_1051439[Global_1051439.f_41];
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	iVar0 = func_64(PLAYER::GET_PLAYER_INDEX(), 1);
	iVar1 = -1;
	iVar4 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940311.f_1433.f_8125.f_1);
	iVar5 = 0;
	iVar6 = -1;
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		iVar6 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_1433.f_8125.f_234[iVar5]);
		iVar1 = iVar6;
		iVar2 = func_212(iVar1);
		iVar3 = func_191(iVar2, 0, 1, -1, 1);
		bVar7 = func_213(iVar2, 1, iVar3, 0);
		if (func_214(iVar3))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_1433.f_8125.f_2[iVar5 /*23*/].f_1.f_8, joaat("SHOP_REDEEM_REWARD"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_1433.f_8125.f_2[iVar5 /*23*/].f_1.f_8, 1447387479);
		}
		if (iVar0 != -1)
		{
			if (iVar0 == iVar1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_8125.f_2[iVar5 /*23*/].f_1.f_21, true);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_8125.f_2[iVar5 /*23*/].f_1.f_9, false);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_8125.f_2[iVar5 /*23*/].f_1.f_21, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_8125.f_2[iVar5 /*23*/].f_1.f_9, bVar7);
			}
		}
		iVar5++;
	}
}

bool func_129(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_130(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_170(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("CUTSCENE_MPCGOI1");
		case 2:
			return joaat("CUTSCENE_MPCGOI2");
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return joaat("CUTSCENE_MPRM1");
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_133(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_215(&uParam0, iParam4, bParam5, iParam6);
}

int func_134()
{
	if (func_129(&(Global_1298378.f_62)))
	{
		if (func_216(-2020197296, &(Global_1298378.f_62), 104187473, 1, 0))
		{
			return 3;
		}
		else if (func_216(1236975766, &(Global_1298378.f_62), 104187473, 1, 0))
		{
			return 3;
		}
		else if (func_216(joaat("UPGRADE_MOONSHINER_BAR"), &(Global_1298378.f_62), 104187473, 1, 0))
		{
			return 3;
		}
	}
	return 0;
}

int func_135()
{
	if (func_129(&(Global_1298378.f_62)))
	{
		if (func_216(joaat("UPGRADE_MOONSHINER_BAND"), &(Global_1298378.f_62), 104187473, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	if (func_129(&(Global_1298378.f_62)))
	{
		if (func_216(joaat("UPGRADE_MOONSHINER_STILL_03"), &(Global_1298378.f_62), 104187473, 1, 0))
		{
			return 2;
		}
		else if (func_216(joaat("UPGRADE_MOONSHINER_STILL_02"), &(Global_1298378.f_62), 104187473, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_137()
{
	if (func_129(&(Global_1298378.f_62)))
	{
		switch (func_133(Global_1298378.f_62, -1565675519, 1, -1))
		{
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_02"):
				return 2;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_03"):
				return 3;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_04"):
				return 4;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_06"):
				return 6;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_10"):
				return 10;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_05"):
				return 5;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_07"):
				return 7;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_09"):
				return 9;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_13"):
				return 1;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_08"):
				return 8;
			default:
				break;
		}
	}
	return 0;
}

int func_138(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	Global_1298536[PLAYER::PLAYER_ID() /*87*/].f_5[iParam0] = iParam1;
	return 1;
}

bool func_139()
{
	if (!func_217())
	{
		return false;
	}
	return func_141(Global_1901947.f_44.f_5, 8);
}

void func_140()
{
	if (!func_74(1))
	{
		return;
	}
	Global_1298378.f_44 = 1;
}

bool func_141(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_142(var uParam0, int iParam1)
{
	func_218(uParam0, iParam1);
}

bool func_143(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

int func_144()
{
	int iVar0;

	if (func_219())
	{
		return 1;
	}
	if (func_220(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 1;
	}
	if (!func_221())
	{
		return 1;
	}
	if (func_160(func_222(0)))
	{
		return 1;
	}
	if (func_223(0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	iVar0 = func_224(joaat("BOUNTY_PLAYER"), PLAYER::PLAYER_ID(), 0, 1);
	if (func_225(iVar0))
	{
		return 1;
	}
	if (func_159())
	{
		return 1;
	}
	return 0;
}

var func_145()
{
	return Global_1071686.f_7;
}

void func_146(int iParam0)
{
	func_142(&(Global_1298536[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

bool func_147(int iParam0)
{
	return func_226(1, iParam0);
}

int func_148(char* sParam0, int iParam1, int iParam2)
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
	iVar2 = func_227(iParam1, iParam2);
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
					iVar10 = func_228(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_229(iParam1, iParam2, 0);
						return 1;
					}
					func_230(iParam1, iParam2, iVar1);
					func_229(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_231(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_229(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_229(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_229(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_231(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_229(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_IS_STRING_SPACE(sVar12))
					{
						return 3;
					}
					func_229(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_231(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_229(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_149(int iParam0)
{
	struct<4> Var0;

	Var0.f_3 = 0;
	Var0.f_1 = 1;
	Var0 = 2;
	SCRIPTS::_0x31010318BA9897AC(&(Var0.f_2), iParam0);
	func_232(&Var0);
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_151(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_152(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_233(func_222(0)) && func_234(func_222(0)) == 7)
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
			iVar6 = func_235(iParam0);
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
			return func_236(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_141(Global_1071686.f_21416.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return joaat("COLOR_WINNING_PLAYER");
	}
	iVar7 = func_237(iParam0, 1);
	if (!bVar0)
	{
		if (func_238(iParam0, bParam1))
		{
			return func_236(iParam0);
		}
		else if (func_239(iParam0, bParam1))
		{
			if (func_240(iParam0, bParam1))
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
		return func_235(iParam0);
	}
	else if (func_238(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_242(func_241(func_222(0)), 1) == 395262693)
		{
			return func_236(iParam0);
		}
		else
		{
			return func_236(iParam0);
		}
	}
	else if (func_239(iParam0, bParam1))
	{
		return joaat("COLOR_POSSE_ENEMY");
	}
	return joaat("COLOR_FRIENDLY");
}

char* func_153(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_243(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_154(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_244();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_23);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1940311.f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940311.f_242.f_1188, 64);
	func_245(&(Global_1940311.f_242.f_14[iVar0 /*39*/]), Global_1940311.f_242.f_4, cVar3, Param0);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(84), Global_1940311.f_242.f_1188);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(85), 1);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(86), 0);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(74), Param0.f_30);
	if (Param0.f_30)
	{
		Global_1940311.f_242.f_14[iVar0 /*39*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(72), Param0.f_29);
		Global_1940311.f_242.f_14[iVar0 /*39*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(75), Param0.f_28);
	}
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(87), Param0.f_24);
	iVar15 = 0;
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_34 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940311.f_242.f_14[iVar0 /*39*/], 707094655, iVar15);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(50), Param0.f_25);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(51), Param0.f_25.f_1);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(88), Param0.f_25.f_2);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(89), iVar2);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(90), Param0.f_22);
	func_247(Global_1940311.f_242.f_1186 + 1);
	if (Global_1940311.f_242.f_1188 == 2147483647)
	{
		Global_1940311.f_242.f_1188 = 0;
	}
	if (func_248(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = Global_1940311.f_242.f_14[iVar0 /*39*/];
		iVar16 = func_208(&(Param0.f_31));
		Global_1940311.f_242.f_14[iVar0 /*39*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_246(91), iVar16);
	}
	iVar17 = func_249();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1940311.f_242.f_1187++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940311.f_242.f_5, 0, "pm_invite_item", Global_1940311.f_242.f_14[iVar0 /*39*/]);
	}
	return Global_1940311.f_242.f_14[iVar0 /*39*/];
}

bool func_155(var uParam0, int iParam1)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1298166.f_3.f_2[iVar0 /*4*/] == iParam1)
		{
			Global_1298166.f_3.f_2[iVar0 /*4*/].f_1 = uParam0;
			func_150(&(Global_1298166.f_3.f_2[iVar0 /*4*/].f_3), 4);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_156()
{
	struct<4> Var0;
	int iVar4;

	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= (Global_1298166.f_3.f_2 - 1))
	{
		Global_1298166.f_3.f_2[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
	Global_1298166.f_3.f_1 = 0;
	Global_1298166.f_3 = 0;
}

bool func_157(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1298166.f_3.f_132[iParam0 /*2*/]) && func_250(Global_1298166.f_3.f_132[iParam0 /*2*/]))
	{
		return true;
	}
	return false;
}

void func_158(int iParam0)
{
	Global_1298378.f_66 = iParam0;
}

bool func_159()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_160(struct<2> Param0)
{
	if (!func_251(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_252(Param0))
	{
		return false;
	}
	return true;
}

void func_161(var uParam0, int iParam1)
{
	func_253(uParam0, iParam1);
}

bool func_162(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (Global_1298536[iVar0 /*87*/].f_1 == -1)
	{
		return false;
	}
	*iParam1 = Global_1298536[iVar0 /*87*/].f_1;
	*iParam2 = Global_1298536[iVar0 /*87*/].f_3;
	return true;
}

bool func_163(int iParam0, bool bParam1)
{
	return func_51(iParam0, bParam1) != -1;
}

bool func_164(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = func_254(iParam0);
	if (MISC::_IS_STRING_SPACE(sVar0))
	{
		return false;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sVar0))
	{
		return false;
	}
	iVar1 = Global_1298166.f_201.f_1[iParam0 /*4*/].f_2;
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, iVar1, true, 0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	iVar2 = func_256(func_255(iParam0));
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iVar2) <= 0)
	{
		return false;
	}
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		return false;
	}
	return true;
}

void func_165(int iParam0)
{
	char* sVar0;

	sVar0 = func_254(iParam0);
	if (MISC::_IS_STRING_SPACE(sVar0))
	{
		return;
	}
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
}

bool func_166(int iParam0, var uParam1)
{
	func_257(iParam0, uParam1);
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam1))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_254(iParam0));
		return true;
	}
	return false;
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_258(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1904087.f_496[iVar0]), iVar1);
}

void func_168(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901947.f_789.f_5)
	{
		iParam0 = Global_1901947.f_789.f_5;
	}
	if (Global_1298536[Global_1296859 /*87*/].f_19.f_15 != iParam0)
	{
		Global_1298536[Global_1296859 /*87*/].f_19.f_15 = iParam0;
	}
}

void func_169(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (Global_1298536[Global_1296859 /*87*/].f_19.f_16 != iParam0)
	{
		Global_1298536[Global_1296859 /*87*/].f_19.f_16 = iParam0;
	}
}

bool func_170(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_259(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_171()
{
	int iVar0;

	if (!func_129(&(Global_1298378.f_62)))
	{
		return 0;
	}
	iVar0 = func_130(Global_1298378.f_62, -268973591, 0, 1);
	return iVar0;
}

void func_172(int iParam0)
{
	if (Global_1298536[Global_1296859 /*87*/].f_19.f_17 != iParam0)
	{
		Global_1298536[Global_1296859 /*87*/].f_19.f_17 = iParam0;
		func_97(1048576);
	}
	if (iParam0 != 0 && Global_1298536[Global_1296859 /*87*/].f_19.f_17 != Global_1298536[Global_1296859 /*87*/].f_19.f_20)
	{
		Global_1298536[Global_1296859 /*87*/].f_19.f_18 = Global_1298536[Global_1296859 /*87*/].f_19.f_20;
	}
	if ((iParam0 != 0 && iParam0 != Global_1298536[Global_1296859 /*87*/].f_19.f_20) && !func_201(&(Global_1298000.f_5)))
	{
		Global_1298536[Global_1296859 /*87*/].f_19.f_20 = iParam0;
	}
}

void func_173()
{
	int iVar0;
	int iVar1;

	iVar0 = func_183();
	iVar1 = func_184();
	if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW") || iVar1 == -545779394)
	{
		if (!func_96(Global_1296859, 1024))
		{
			func_97(1024);
		}
	}
	else if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM") || iVar1 == 1532695640)
	{
		if (!func_96(Global_1296859, 2048))
		{
			func_97(2048);
		}
	}
	else if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH") || iVar1 == 1847740267)
	{
		if (!func_96(Global_1296859, 4096))
		{
			func_97(4096);
		}
	}
}

void func_174(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_260(iParam0, &iVar0, &iVar1);
	if (!func_261(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_262(iVar0, iVar1);
}

void func_175(var uParam0, bool bParam1)
{
	if (bParam1 || !func_201(uParam0))
	{
		func_111(uParam0);
	}
}

int func_176(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_96(iVar0, 256))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_177(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE"))
	{
		iVar0 = 1;
	}
	else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER"))
	{
		iVar0 = 3;
	}
	else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT"))
	{
		iVar0 = 4;
	}
	else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS"))
	{
		iVar0 = 6;
	}
	else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND"))
	{
		iVar0 = 7;
	}
	else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH"))
	{
		iVar0 = 8;
	}
	else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER"))
	{
		iVar0 = 9;
	}
	else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK"))
	{
		iVar0 = 10;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_178()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (func_263())
	{
		return false;
	}
	if (func_264() != 2)
	{
		return false;
	}
	return true;
}

bool func_179(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

bool func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17411.f_2565[iVar1], iVar2);
}

char* func_181(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK";
			break;
		default:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_UNFLAVORED";
			break;
	}
	return sVar0;
}

void func_182(int iParam0, char* sParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	func_265(iParam0, MISC::GET_HASH_KEY(sParam1), bParam2);
}

int func_183()
{
	int iVar0;

	if (!func_129(&(Global_1298378.f_62)))
	{
		return 0;
	}
	iVar0 = func_130(Global_1298378.f_62, 1039159916, 0, 1);
	return iVar0;
}

int func_184()
{
	int iVar0;

	if (!func_129(&(Global_1298378.f_62)))
	{
		return 0;
	}
	iVar0 = func_130(Global_1298378.f_62, 1111816631, 0, 1);
	return iVar0;
}

void func_185(int iParam0)
{
	Global_1298536[Global_1296859 /*87*/].f_19.f_19 = iParam0;
}

void func_186()
{
	int iVar0;
	int iVar1;

	if (!func_129(&(Global_1298378.f_62)))
	{
		return;
	}
	iVar0 = func_130(Global_1298378.f_62, 1039159916, 0, 1);
	iVar1 = INVENTORY::_0xE80E50BEE276A54A(iVar0, 1039159916);
	if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
	{
		Global_1298000.f_4 = ((Global_1901947.f_789.f_2 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	else if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"))
	{
		Global_1298000.f_4 = ((Global_1901947.f_789.f_1 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	else if (iVar0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW"))
	{
		Global_1298000.f_4 = ((Global_1901947.f_789 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	else
	{
		Global_1298000.f_4 = ((Global_1901947.f_789 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	if (func_266(15) >= 15)
	{
		Global_1298000.f_4 = (Global_1298000.f_4 * 0.8f);
	}
	func_175(&(Global_1298000.f_1), 0);
}

bool func_187(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_189(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_267(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_268(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_269(iParam0, bParam4, 0) };
	Var6 = { func_270(iParam0, Var1, Var1.f_4, bParam4) };
	return func_271(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_188()
{
	if (func_96(Global_1296859, 1024))
	{
		return joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW");
	}
	else if (func_96(Global_1296859, 2048))
	{
		return joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM");
	}
	else if (func_96(Global_1296859, 4096))
	{
		return joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH");
	}
	return 0;
}

bool func_189(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_190(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_259(bParam2), uParam0, iParam1);
}

int func_191(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (func_272(iParam0))
	{
		return func_275(func_273(iParam0, 0), iParam1, bParam2, iParam3, func_274(iParam0));
	}
	if (func_276(iParam0, bParam4) || func_277(iParam0))
	{
		iParam1 = 997808187;
	}
	else if (func_274(iParam0) && (func_278(iParam0, &iVar0) || func_279(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_280(iParam0, -570078785);
		bVar2 = func_280(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			iParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_281())
			{
				iParam1 = -570078785;
			}
			else
			{
				iParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			iParam1 = -915411861;
		}
		else if (func_282(15) && func_280(iParam0, 369710026))
		{
			iParam1 = 369710026;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_192(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_280(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_272(iParam0))
	{
		return func_194(func_273(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_283(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_193(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_189(iParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	*iParam1 = 0;
	iVar0 = func_284(831658232, 1, 0, 1);
	iVar1 = func_284(1964703625, 1, 0, 1);
	bVar2 = UNLOCK::_UNLOCK_IS_UNLOCKED(-577406511);
	if (bParam3)
	{
		iVar0 = 4;
		iVar1 = 0;
	}
	if (iVar1 == 0)
	{
		if (bVar2)
		{
			if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
			{
				*iParam1 = 1770635244;
			}
			else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"))
			{
				*iParam1 = 1694260085;
			}
			else
			{
				*iParam1 = -2006381587;
			}
		}
		else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
		{
			*iParam1 = -1964533269;
		}
		else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"))
		{
			*iParam1 = 100166317;
		}
		else
		{
			*iParam1 = 1038106552;
		}
		switch (iVar0)
		{
			case 1:
				*iParam2 = 600942249;
				break;
			case 2:
				*iParam2 = 747826962;
				break;
			case 3:
				*iParam2 = 502256076;
				break;
			case 4:
				*iParam2 = -834227589;
				break;
		}
	}
	else if (iVar0 == 0)
	{
		if (bVar2)
		{
			if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
			{
				*iParam1 = 1455881441;
			}
			else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"))
			{
				*iParam1 = -98408876;
			}
			else
			{
				*iParam1 = 136850391;
			}
		}
		else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
		{
			*iParam1 = 535276374;
		}
		else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"))
		{
			*iParam1 = 1279048583;
		}
		else
		{
			*iParam1 = 1003713621;
		}
		switch (iVar1)
		{
			case 1:
				*iParam2 = 600942249;
				break;
			case 2:
				*iParam2 = 747826962;
				break;
			case 3:
				*iParam2 = 502256076;
				break;
			case 4:
				*iParam2 = -834227589;
				break;
		}
	}
	else
	{
		if (bVar2)
		{
			if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
			{
				*iParam1 = 683835946;
			}
			else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"))
			{
				*iParam1 = 129815171;
			}
			else
			{
				*iParam1 = -280792819;
			}
		}
		else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
		{
			*iParam1 = -61838317;
		}
		else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"))
		{
			*iParam1 = 185950306;
		}
		else
		{
			*iParam1 = -2110360382;
		}
		if (iVar0 == 1)
		{
			switch (iVar1)
			{
				case 1:
					*iParam2 = 600942249;
					break;
				case 2:
					*iParam2 = 747826962;
					break;
				case 3:
					*iParam2 = 502256076;
					break;
			}
		}
		else if (iVar0 == 2)
		{
			if (iVar1 == 1)
			{
				*iParam2 = -834227589;
			}
			else
			{
				*iParam2 = 1472825031;
			}
		}
		else
		{
			*iParam2 = -489628648;
		}
	}
	if ((iVar0 == 0 && iVar1 == 0) && bVar2)
	{
		if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"))
		{
			*iParam1 = 683835946;
		}
		else if (iParam0 == joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"))
		{
			*iParam1 = 129815171;
		}
		else
		{
			*iParam1 = -280792819;
		}
		*iParam2 = -915411861;
	}
	if (!func_285(*iParam1) || *iParam2 == 0)
	{
		return false;
	}
	return true;
}

int func_194(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_286(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_195(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_275(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_288(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_289(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (COLLECTION::_0x9ADEE485726025D4(iParam1) != 0)
	{
		if (Global_1293346.f_20.f_422 != -1)
		{
		}
		Global_1293346.f_20.f_422.f_1 = iParam1;
		Global_1293346.f_20.f_422 = iParam0->f_1;
	}
	return true;
}

bool func_196(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<16> Var0;
	struct<17> Var16;

	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_191(iParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_290(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_291(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_292(iParam1) == joaat("CLOTHING"))
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_293(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return false;
		}
	}
	else if (!func_294(iParam0, Var0, 2113164098, iParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_197(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_295(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_296(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_296(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_198(var uParam0, var uParam1)
{
	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 2037940248;
		case 0:
			return 1397223979;
		case 1:
			return 677707590;
		case 2:
			return -269277617;
		case 3:
			return -1463831630;
		case 4:
			return 2031672089;
		default:
			break;
	}
	return 2037940248;
}

int func_200()
{
	int iVar0;
	int iVar1;

	if (!func_129(&(Global_1298378.f_62)))
	{
		return 0;
	}
	iVar0 = func_130(Global_1298378.f_62, -268973591, 0, 1);
	if (func_204(iVar0, 1372968408))
	{
		iVar1 = 1372968408;
	}
	else if (func_204(iVar0, -710171994))
	{
		iVar1 = -710171994;
	}
	else if (func_204(iVar0, 956386416))
	{
		iVar1 = 956386416;
	}
	return iVar1;
}

bool func_201(var uParam0)
{
	return func_297(*uParam0, 1);
}

int func_202(var uParam0)
{
	if (!func_201(uParam0))
	{
		return 0;
	}
	if (func_298(uParam0))
	{
		return uParam0->f_2;
	}
	return func_299(uParam0->f_1);
}

void func_203(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_300(uParam0, 1);
	func_301(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_204(int iParam0, int iParam1)
{
	if (!func_189(iParam0, 0))
	{
		return func_303(func_302(iParam0), iParam1);
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

struct<2> func_205(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_206(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_207()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (func_263())
	{
		return false;
	}
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("SHOP_MENU")))
	{
		return false;
	}
	if (Global_1071686.f_28778)
	{
		return false;
	}
	if (Global_1572887.f_9)
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-319651633))
	{
		return false;
	}
	if (func_304())
	{
		return false;
	}
	return true;
}

int func_208(var uParam0)
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
		return func_306(func_305(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_305(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_307(func_305(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_305(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_308(func_305(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_305(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_309(func_305(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_305(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_310(func_305(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_305(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_311(func_305(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_305(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_312(func_305(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_305(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

bool func_209(int iParam0)
{
	if (func_313(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_210()
{
	return true;
}

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1580598647;
		case 1:
			return 786277441;
		case 3:
			return 1273401170;
		case 2:
			return -127194573;
		case 4:
			return 1480239309;
		default:
			break;
	}
	return 0;
}

bool func_213(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar2;

	return func_314(iParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

bool func_214(int iParam0)
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

int func_215(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_315(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_216(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_316(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_217()
{
	int iVar0;

	if (Global_1901947.f_44.f_2 == 1788394582)
	{
		iVar0 = Global_1296859.f_21;
		if (iVar0 > Global_1901947.f_44.f_3 && iVar0 < Global_1901947.f_44.f_4)
		{
			return true;
		}
	}
	return false;
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_219()
{
	return (Global_1296851.f_2.f_1 == 2 || Global_1296851.f_2.f_1 == 1);
}

int func_220(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_317(bParam1, bParam2, bParam3);
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

bool func_221()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

struct<2> func_222(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_223(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

int func_224(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1248240[iVar0 /*683*/].f_559 != iParam0)
		{
		}
		else if (bParam2 && !func_318(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && Global_1237665[iVar0 /*27*/].f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_225(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_226(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_319(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_320())
	{
		return func_319(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_319(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

int func_227(int iParam0, int iParam1)
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

int func_228(int iParam0)
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

void func_229(int iParam0, int iParam1, int iParam2)
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

void func_230(int iParam0, int iParam1, int iParam2)
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

int func_231(int iParam0, int iParam1)
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

void func_232(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_321(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			func_321(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar3]))
					{
					}
					else if (Global_1296859.f_154[iVar3] == Global_1296859.f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, Global_1296859.f_154[iVar3]);
					}
					iVar3++;
				}
				func_322(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_321(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar3]))
						{
						}
						else if (Global_1296859.f_154[iVar3] == Global_1296859.f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, Global_1296859.f_154[iVar3]);
						}
						iVar3++;
					}
					func_322(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

bool func_233(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_323(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_234(var uParam0, var uParam1)
{
	return uParam0;
}

int func_235(int iParam0)
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

int func_236(int iParam0)
{
	if (GANG::_0x901E0DC25080C8B9(iParam0) != Global_1296859.f_15 && !func_69())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	return joaat("COLOR_POSSE_ALLY");
}

int func_237(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_324(iParam0, bParam1));
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

bool func_238(int iParam0, bool bParam1)
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

bool func_239(int iParam0, bool bParam1)
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
	if (func_325(iParam0))
	{
		return true;
	}
	return !func_238(iParam0, 0);
}

bool func_240(int iParam0, bool bParam1)
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
	if (func_326(iParam0))
	{
		return false;
	}
	if (func_325(iParam0))
	{
		return false;
	}
	if (func_327(iParam0))
	{
		return true;
	}
	return func_328(iParam0);
}

int func_241(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_329(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_242(int iParam0, int iParam1)
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

char* func_243(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_244()
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
			if (func_330(Var2))
			{
				func_331(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_332();
}

void func_245(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_333(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_246(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_246(17), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(3), Param10.f_18);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(4), Param10.f_19);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(5), Param10.f_20);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(6), Param10.f_21);
}

char* func_246(int iParam0)
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

void func_247(int iParam0)
{
	Global_1940311.f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1940311.f_242.f_1186), 0));
}

bool func_248(var uParam0)
{
	return true;
}

int func_249()
{
	return Global_1940311.f_242.f_1185;
}

bool func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_162(iParam0, &iVar0, &iVar1, 1);
	bVar2 = ((bVar2 && iVar0 == Global_1298536[PLAYER::PLAYER_ID() /*87*/].f_1) && iVar1 == Global_1298536[PLAYER::PLAYER_ID() /*87*/]);
	return bVar2;
}

bool func_251(int iParam0)
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

int func_252(int iParam0)
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

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "net_moonshine_entrance";
		case 1:
			return "net_moonshine_property";
		default:
			break;
	}
	return "";
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("NET_MOONSHINE_PROPERTY");
		case 0:
			return joaat("MINI");
		default:
			break;
	}
	return joaat("MICRO");
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MICRO"):
			return 128;
		case joaat("NET_FETCH_HIDEOUT_LEADER"):
			return 200;
		case joaat("STABLE_MOUNT"):
			return 400;
		case joaat("MINI"):
			return 512;
		case joaat("CAMP_DOG"):
			return 600;
		case joaat("ABILITY_CARD_EVENTS"):
			return 800;
		case joaat("DEFAULT"):
			return 1024;
		case joaat("HUB_EVENTS"):
			return 1026;
		case joaat("UPDATE"):
			return 1300;
		case joaat("MATCHMAKING"):
			return 1301;
		case joaat("PLAYER_MENU_SCRIPT"):
			return 1400;
		case joaat("POSSE_VERSUS_RACE"):
			return 1600;
		case joaat("POSSE_FEUD"):
			return 1800;
		case joaat("PAUSE_MENU_SCRIPT"):
			return 2000;
		case joaat("SAVE_MENU_EVENTS"):
			return 2024;
		case joaat("SATCHEL_EVENTS"):
			return 2025;
		case joaat("MAP_EVENTS"):
			return 2026;
		case joaat("SHOP_EVENTS"):
			return 2027;
		case joaat("BACKGROUND_SCRIPT"):
			return 2047;
		case joaat("ROLE_PROGRESSION_EVENTS"):
			return 2048;
		case joaat("REWARDS_EVENTS"):
			return 2549;
		case joaat("NET_SYSTEM_EXTENDED"):
			return 2050;
		case joaat("NET_CUTSCENE"):
			return 2051;
		case joaat("NET_BEAT"):
			return 2452;
		case joaat("COUPONS_EVENTS"):
			return 2053;
		case joaat("FME_PV_SMALL"):
			return 3000;
		case joaat("FME_THM_SMALL"):
			return 3001;
		case joaat("FME_STD_SMALL"):
			return 3002;
		case joaat("CAMPWORKS"):
			return 3081;
		case joaat("MP_MISSION_DOWNLOADER"):
			return 3088;
		case joaat("NET_GUN_FOR_HIRE_ONLINE"):
			return 3090;
		case joaat("NET_BEAT_MANAGER"):
			return 3500;
		case joaat("SCRIPT_XML"):
			return 4592;
		case joaat("PAUSE_MENU_EVENT_SCRIPT"):
			return 4700;
		case joaat("CAMP"):
			return 5000;
		case joaat("STRANGER_MISSION_NON_FETCH"):
			return 5001;
		case joaat("DB_MEGA"):
			return 5400;
		case joaat("FME_PV_MEDIUM"):
			return 5500;
		case joaat("FME_THM_MEDIUM"):
			return 5501;
		case joaat("FME_STD_MEDIUM"):
			return 5502;
		case joaat("REGION"):
			return 5503;
		case joaat("SHOWS"):
			return 5504;
		case joaat("FISHING"):
			return 5505;
		case joaat("ENDFLOW"):
			return 5506;
		case joaat("MISSION_INTRO"):
			return 6000;
		case joaat("MINIGAME_INTRO"):
			return 6001;
		case joaat("NET_MAIN"):
			return 6002;
		case joaat("SHOP"):
			return 6005;
		case joaat("NET_GUN_FOR_HIRE_OFFLINE"):
			return 6010;
		case joaat("MINIGAME"):
			return 6500;
		case joaat("CAMP_ITEM"):
			return 6700;
		case joaat("FME_PV_LARGE"):
			return 7000;
		case joaat("FME_THM_LARGE"):
			return 7001;
		case joaat("FME_STD_LARGE"):
			return 7002;
		case joaat("MISSION_TUTORIAL"):
			return 7300;
		case joaat("AUTOSTART"):
			return 7301;
		case joaat("STRANGER_MISSION_FETCH"):
			return 10000;
		case joaat("MP_MISSION_LOBBY"):
			return 10001;
		case joaat("CHARACTER_REROLL"):
			return 10003;
		case joaat("MP_UGC_TRANSITION"):
			return 14335;
		case joaat("TRANSITION"):
			return 25500;
		case joaat("MISSION_CREATOR"):
			return 40500;
		case joaat("MISSION"):
			return 45000;
		case joaat("INSTANCED_CONTENT"):
			return 68000;
		case joaat("NET_BACKGROUND"):
			return 1631;
		case joaat("NET_MOONSHINE_PROPERTY"):
			return 3982;
		case joaat("SOAK_TEST"):
			return 4088;
		case joaat("NETWORK_BOT"):
			return 4096;
		case joaat("DEBUG_SCRIPT"):
			return 4080;
		case joaat("DEBUG_MENU"):
			return 50000;
		case joaat("TOOL_MEGA"):
			return 65536;
		case joaat("DEBUG_MP_STEAL_VEHICLE"):
			return 32768;
		case joaat("VIRTUALIZATION_UNIT_TEST_SUPPORT"):
			return 129;
		default:
			break;
	}
	return 0;
}

void func_257(int iParam0, var uParam1)
{
	struct<10> Var0;

	Var0 = { func_334(iParam0) };
	uParam1->f_1 = Var0.f_1;
	uParam1->f_2 = uParam1->f_1;
	*uParam1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_254(iParam0), &Var0, 10, func_256(func_255(iParam0)));
}

bool func_258(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

int func_259(bool bParam0)
{
	if (func_38() == -1)
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

void func_260(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_261(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_335(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_336(iParam0))
	{
		return false;
	}
	if (func_337(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_338(iParam0, 1)) || func_339(32768))
	{
		if (!func_338(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_340())
	{
		return false;
	}
	return true;
}

void func_262(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

bool func_263()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

int func_264()
{
	if (!func_211(Global_1572887.f_266.f_63, 8))
	{
		return 2;
	}
	if (Global_1572887.f_266.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887.f_266 > 7 && Global_1572887.f_266 < 23)
	{
		return 0;
	}
	return 2;
}

void func_265(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_260(iParam0, &iVar0, &iVar1);
	if (!func_261(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_338(iParam0, 1024))
	{
		return;
	}
	func_262(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

int func_266(int iParam0)
{
	int iVar0;

	if (!func_341(iParam0))
	{
		return 0;
	}
	iVar0 = func_342(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_343(iParam0, 1);
	}
	return 0;
}

int func_267(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_344(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_267(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_345(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_346(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_347(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_348(joaat("USE"), &Var65, 1);
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
			func_349(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_259(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_269(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_350(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_292(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_270(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_351(bParam1) };
			if (bParam2 && func_352(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_216(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_216(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_353(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_354(bParam1) };
			switch (func_355(iParam0))
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
			if (func_356(iParam0, -1823706425))
			{
				Var0 = { func_270(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_356(iParam0, -1483207246))
			{
				Var0 = { func_270(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_270(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_356(iParam0, -1653629781))
			{
				Var0 = { func_270(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_357(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_356(iParam0, -1653629781))
			{
				Var0 = { func_270(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_270(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_189(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_259(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_271(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_344(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_357(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_345(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_38() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_348(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_349(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_259(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_272(int iParam0)
{
	if (func_204(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_273(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_189(iParam0, 0))
	{
		return func_358(func_302(iParam0), bParam1);
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

bool func_274(int iParam0)
{
	if (!func_221() && func_359())
	{
		return true;
	}
	return func_204(iParam0, 1435272033);
}

int func_275(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_285(iParam0))
	{
		return 0;
	}
	bVar1 = func_211(iParam3, 2);
	bVar2 = func_360(iParam0, -570078785, bVar1);
	bVar3 = func_360(iParam0, -915411861, bVar1);
	if (func_360(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_361(iParam0, &iVar0) || func_362(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_281())
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
	else if (func_282(15) && func_360(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_276(int iParam0, bool bParam1)
{
	return (func_280(iParam0, 997808187) && !func_363(iParam0, 997808187, bParam1));
}

bool func_277(int iParam0)
{
	int iVar0;

	iVar0 = func_273(iParam0, 1);
	if (iVar0 != 0 && func_360(iVar0, 997808187, 0))
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_278(int iParam0, int iParam1)
{
	*iParam1 = func_364(iParam0, 1);
	return *iParam1 != 0;
}

bool func_279(int iParam0, int iParam1)
{
	*iParam1 = func_365(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_280(int iParam0, int iParam1)
{
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	if (func_272(iParam0))
	{
		return func_360(func_273(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

bool func_281()
{
	return Global_1915715.f_22477;
}

bool func_282(int iParam0)
{
	if (iParam0 == 34 && Global_1915715.f_22504.f_1)
	{
		return true;
	}
	if (func_223(1))
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_283(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_189(iParam0, 0))
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
		func_366(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_284(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_367(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_259(bParam1), iParam0, iParam3);
}

bool func_285(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

bool func_286(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_285(iParam0))
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
			Jump @114; //curOff = 102
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_368(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_287(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return false;
		}
	}
	if (func_369(&(iParam0->f_6)))
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

int func_288(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_360(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_211(iParam2, 2))
	{
		if (func_370(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_211(iParam2, 8))
	{
		return func_371(iParam0, iParam1);
	}
	return 1;
}

bool func_289(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_372(Param1))
	{
		return false;
	}
	if (!func_373(iParam0, iParam18))
	{
		return false;
	}
	if (func_374(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_375(iParam0, bParam19);
}

int func_290(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	struct<10> Var0;
	struct<4> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (func_211(iParam9, 32))
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_357(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_376(iParam1, func_355(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_211(iParam9, 1))
	{
		if (!func_377(iParam1))
		{
			return 0;
		}
	}
	if (func_211(iParam9, 2))
	{
		if (func_363(iParam1, iParam7, 1))
		{
			return 0;
		}
	}
	if (func_211(iParam9, 4))
	{
		if (!bParam10 && !INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_316(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_378(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_379(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_380(iParam0, iParam1) * iVar21);
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
	if (func_211(iParam9, 8))
	{
		return func_381(iParam0, iParam1, iParam7, iParam8);
	}
	return 1;
}

struct<16> func_291(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_270(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_267(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_382() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_292(int iParam0)
{
	vector3 vVar0;

	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_293(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != joaat("SELL")) && iParam18 != joaat("UPDATE"))
	{
		return false;
	}
	if (!func_383(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_373(iParam0, iParam18))
	{
		return false;
	}
	if (func_384(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_375(iParam0, bParam19);
}

bool func_294(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != joaat("SELL")) && iParam17 != joaat("UPDATE")) && iParam17 != joaat("USE")) && iParam17 != joaat("SPEND"))
	{
		return false;
	}
	if (!func_383(iParam17, &uParam1, iParam19))
	{
		return false;
	}
	if (!func_373(iParam0, iParam17))
	{
		return false;
	}
	if (func_385(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_375(iParam0, bParam18);
}

int func_295(int iParam0)
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

void func_296(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_386(iParam0, iParam1, iParam2, iParam3);
}

bool func_297(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_298(var uParam0)
{
	return func_297(*uParam0, 2);
}

int func_299(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_302(int iParam0)
{
	return iParam0;
}

int func_303(int iParam0, int iParam1)
{
	if (!func_387(iParam0, 2))
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

bool func_304()
{
	struct<2> Var0;

	Var0 = { func_222(0) };
	if (func_160(Var0))
	{
		if ((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 7)
		{
			return true;
		}
	}
	return false;
}

char* func_305(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_243(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_306(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
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

var func_307(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
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

var func_308(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
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

var func_309(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
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

var func_310(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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

var func_311(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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

var func_312(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
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

bool func_313(int iParam0)
{
	return iParam0 != 0;
}

bool func_314(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
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

	if (func_272(iParam0))
	{
		return func_388(func_273(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_283(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_345(0)) && !func_389());
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
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && (bParam7 || func_390(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && (bParam7 || func_391(iVar32)))
			{
			}
			else
			{
				iVar36 = func_392(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_393(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_394(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_395(Var0[iVar34 /*2*/]) || func_396(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_397(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_398(Var0[iVar34 /*2*/], iVar36);
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
							if (bParam5 && ((iVar33 + func_399(7, Var0[iVar34 /*2*/])) + func_400(Var0[iVar34 /*2*/])) >= iVar32)
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

bool func_315(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_259(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_401(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_316(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_267(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_270(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_259(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_259(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_317(bool bParam0, bool bParam1, bool bParam2)
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

bool func_318(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_402(iParam0) && func_211(Global_1238240[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

bool func_319(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_320()
{
	return Global_1102219.f_3672;
}

void func_321(vector3 vParam0)
{
	if (Global_1139381.f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	Global_1139381.f_5079.f_326[Global_1139381.f_5079.f_324 /*3*/] = { vParam0 };
	Global_1139381.f_5079.f_324 = (Global_1139381.f_5079.f_324 + 1 % 50);
	Global_1139381.f_5079.f_325++;
}

void func_322(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
}

int func_323(struct<2> Param0)
{
	int iVar0;

	if (!func_160(Param0))
	{
		return -1;
	}
	iVar0 = func_403(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

float func_324(int iParam0, bool bParam1)
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

bool func_325(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_326(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_327(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_328(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_404(iParam0);
		return false;
	}
	if (func_327(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 2)
		{
			func_405(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1296859.f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 2);
}

bool func_329(struct<2> Param0, var uParam2)
{
	if (!func_160(Param0))
	{
		return false;
	}
	func_406(uParam2);
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

bool func_330(struct<38> Param0, var uParam38)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Param0.f_37))
	{
		return DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Param0);
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_37);
}

void func_331(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940311.f_242.f_5, uParam0);
	func_407(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	func_247((Global_1940311.f_242.f_1186 - 1));
}

int func_332()
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
	func_331(Global_1940311.f_242.f_14[iVar3 /*39*/]);
	return iVar3;
}

void func_333(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_246(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_246(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("IB_SELECT");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_246(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_246(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("IB_SELECT");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_246(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_246(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_246(66), Param10.f_15);
}

struct<10> func_334(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	iVar0 = func_22();
	Var1.f_1 = func_51(iVar0, 1);
	Var1.f_2 = func_64(iVar0, 1);
	Var1 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		Var1.f_3 = { func_408(iVar0) };
	}
	return Var1;
}

bool func_335(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_336(int iParam0)
{
	if (func_338(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_337(int iParam0)
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

bool func_338(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_339(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_340()
{
	if (!func_221())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_341(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_342(int iParam0)
{
	if (!func_341(iParam0))
	{
		return 0;
	}
	return Global_1293346.f_3009[iParam0];
}

int func_343(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_341(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_409(iParam0);
		if (func_189(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_410(255);
			}
			else
			{
				iVar1 = func_316(iVar0, func_350(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			Global_1293346.f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = func_411(iParam0);
		if (func_189(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_316(iVar0, func_350(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			Global_1293346.f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_344(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_345(bool bParam0)
{
	if (func_38() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_259(bParam0));
}

bool func_346(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_267(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_412(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_347(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_270(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_348(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_413(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_414(func_385(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_415(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_349(int iParam0, struct<17> Param1)
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

struct<4> func_350(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_259(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_270(joaat("CHARACTER"), func_382(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_270(joaat("CHARACTER"), func_382(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_270(joaat("CHARACTER"), func_382(), -1591664384, bParam0);
}

struct<4> func_351(bool bParam0)
{
	int iVar0;

	iVar0 = func_259(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_270(923904168, func_350(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_270(923904168, func_350(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_270(923904168, func_350(bParam0), -740156546, 0);
}

bool func_352(int iParam0, bool bParam1)
{
	if (func_355(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_416();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_353(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_417(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_354(bool bParam0)
{
	int iVar0;

	iVar0 = func_259(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_270(271701509, func_350(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_270(271701509, func_350(bParam0), 12999093, 0);
}

int func_355(int iParam0)
{
	struct<2> Var0;

	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_356(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_355(iParam0);
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
			if (func_376(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_357(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_401(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_358(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_387(iParam0, 2))
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

bool func_359()
{
	return func_418(func_222(0));
}

bool func_360(int iParam0, int iParam1, bool bParam2)
{
	if (!func_285(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_370(iParam0, iParam1);
	}
	return true;
}

bool func_361(int iParam0, int iParam1)
{
	*iParam1 = func_419(iParam0, 1);
	return *iParam1 != 0;
}

bool func_362(int iParam0, int iParam1)
{
	*iParam1 = func_420(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_363(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_189(iParam0, 0))
	{
		return func_421(func_302(iParam0), iParam1, bParam2);
	}
	if (func_272(iParam0))
	{
		return func_370(func_273(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_38() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return true;
	}
	if (!func_422(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_364(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_423(iVar0, 1, 0);
		if (!func_283(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_424(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_394(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_365(int iParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_423(iVar0, 0, 1);
		if (!func_283(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_425(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_394(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

void func_366(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_355((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_367(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_368(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_355((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_369(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_370(int iParam0, int iParam1)
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

int func_371(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -570078785)
	{
		iVar0 = func_194(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_391(iVar0))
		{
			if (Global_1915715.f_20644)
			{
				func_427(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_426(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_194(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_390(iVar1))
		{
			if (Global_1915715.f_20644)
			{
				func_427("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_388(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_372(struct<17> Param0)
{
	if (!func_285(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_373(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_428(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_429(iParam0))
		{
			return false;
		}
		if (!func_428(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_374(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_375(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_429(iParam0);
	}
	return true;
}

bool func_376(int iParam0, int iParam1, int iParam2)
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

bool func_377(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_38() == -1)
	{
		if (func_430(iParam0))
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

int func_378(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_189(iParam0, 0) && !func_387(func_302(iParam0), 2))
	{
		return 0;
	}
	if (func_292(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_267(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_259(bParam3), iParam0);
}

bool func_379(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_189(iParam0, 0) && !func_387(func_302(iParam0), 2))
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

int func_380(int* iParam0, int iParam1)
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

int func_381(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_431(iParam1, 1) && !func_432(iParam1, 1))
	{
		if (Global_1915715.f_20644)
		{
			func_427(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_192(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_391((iVar1 + func_433(iParam0, iParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_427(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_192(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_390((iVar3 + func_433(iParam0, iParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_427("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_387(func_302(iParam1), 2))
	{
		if (!func_434(func_302(iParam1), iParam3, iParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_189(iParam1, 0))
	{
		if (!func_314(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

struct<4> func_382()
{
	struct<4> Var0;

	return Var0;
}

bool func_383(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_189(uParam1->f_8, 0) && !func_387(func_302(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_211(iParam2, 128))
	{
		if (func_355(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_211(iParam2, 16))
	{
		if (!func_413(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_384(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_385(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

void func_386(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_435(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_387(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_388(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_286(iParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_390(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!bParam4 && !func_391(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_392(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_393(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_394(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

bool func_389()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

bool func_390(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_38() == 0)
	{
		return func_436(iParam0);
	}
	return iParam0 <= func_437();
}

bool func_391(int iParam0)
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

int func_392(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_204(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_350(0) };
	Var0.f_4 = func_438(iParam1);
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_259(0), &Var5, 0);
	return iVar9;
}

int func_394(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_292(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_439(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_440(iParam0, 0);
	}
	if (func_267(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_259(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_441(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_259(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_395(int iParam0)
{
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	if (func_204(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return true;
	}
	return func_396(iParam0);
}

bool func_396(int iParam0)
{
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	if (func_204(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_397(int iParam0, int iParam1, int iParam2)
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

	iParam0 = func_442(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_189(iParam1, 0))
	{
		return 0;
	}
	if (!func_443(iParam0))
	{
		return 0;
	}
	iVar0 = func_444(iParam0);
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
		if (!func_445(iVar28))
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

int func_398(int iParam0, int iParam1)
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

	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (!func_395(iParam0) && !func_396(iParam0))
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
	iVar13 = func_446(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_447(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_448(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_449(iVar15, iVar1);
			if (func_189(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_450(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_393(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_452(iVar16, func_451(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_453(iVar1);
	}
	return iVar0;
}

int func_399(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_442(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_189(iParam1, 0))
	{
		return 0;
	}
	if (!func_443(iParam0))
	{
		return 0;
	}
	iVar0 = func_444(iParam0);
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

int func_400(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_189(iParam0, 0))
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

bool func_401(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_259(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_402(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

int func_403(struct<2> Param0)
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
	if (!func_329(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_329(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
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

void func_404(int iParam0)
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
	func_454(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_405(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_455(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1296859.f_22[iVar0])
		{
			func_404(iParam0);
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
						func_405(iVar3, iParam1, 0, 1, 0, 0);
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
			func_456(&Var6, uVar4);
		}
	}
}

void func_406(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_407(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_246(91));
	if (func_457(iVar0))
	{
		UIFEED::_0x2F901291EF177B02(iVar0, 1);
	}
}

struct<7> func_408(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
		case 13:
			return joaat("CHARACTER_RANK_SEASON_005");
		case 14:
			return joaat("CHARACTER_RANK_VIP_SEASON_005");
		case 15:
			return joaat("CHARACTER_RANK_MOONSHINER");
		case 16:
			return joaat("CHARACTER_RANK_SEASON_006");
		case 17:
			return joaat("CHARACTER_RANK_VIP_SEASON_006");
		case 18:
			return -296143963;
		case 19:
			return joaat("CHARACTER_RANK_SEASON_007");
		case 20:
			return joaat("CHARACTER_RANK_VIP_SEASON_007");
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

int func_410(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1145091[iParam0 /*35*/];
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_XP");
		case 7:
			return joaat("CHARACTER_XP_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_XP_COLLECTOR");
		case 11:
			return joaat("CHARACTER_XP_TRADER");
		case 13:
			return joaat("CHARACTER_XP_SEASON_005");
		case 14:
			return joaat("CHARACTER_XP_VIP_SEASON_005");
		case 15:
			return joaat("CHARACTER_XP_MOONSHINER");
		case 16:
			return joaat("CHARACTER_XP_SEASON_006");
		case 17:
			return joaat("CHARACTER_XP_VIP_SEASON_006");
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		default:
			break;
	}
	return 0;
}

bool func_412(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_458(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_382() };
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

bool func_413(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_459(uParam1->f_8, iParam0, uVar0, 2048) || func_459(uParam1->f_8, iParam0, uVar0, 32768)) || func_459(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_459(uParam1->f_8, iParam0, uVar0, 4) || func_459(uParam1->f_8, iParam0, uVar0, 256)) || func_459(uParam1->f_8, iParam0, uVar0, 65536)) || func_459(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_459(uParam1->f_8, iParam0, uVar0, 1) || func_459(uParam1->f_8, iParam0, uVar0, 8)) || func_459(uParam1->f_8, iParam0, uVar0, 65536)) || func_459(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_459(uParam1->f_8, iParam0, uVar0, 1) || func_459(uParam1->f_8, iParam0, uVar0, 16)) || func_459(uParam1->f_8, iParam0, uVar0, 2)) || func_459(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_459(uParam1->f_8, iParam0, uVar0, 8) || func_459(uParam1->f_8, iParam0, uVar0, 4096)) || func_459(uParam1->f_8, iParam0, uVar0, 256)) || func_459(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

int func_414(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_296(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_296(iParam1, 2, 0, 0);
	return -1;
}

int func_415(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_296(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_416()
{
	return (func_284(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_133(func_270(joaat("WARDROBE"), func_350(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_417(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_259(0);
	*uParam1 = { func_270(iParam0, func_351(0), iParam3, 0) };
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

bool func_418(struct<2> Param0)
{
	return func_460(Param0, 5, 8);
}

int func_419(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_423(iVar0, 1, 0);
		if (!func_286(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_424(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_394(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_420(int iParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_423(iVar0, 0, 1);
		if (!func_286(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_425(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_394(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

int func_421(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_387(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_38() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_461(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_422(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_189(iParam0, 0))
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

int func_423(int iParam0, bool bParam1, bool bParam2)
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

bool func_424(int iParam0)
{
	return func_355(iParam0) == 1946043663;
}

bool func_425(int iParam0)
{
	return func_355(iParam0) == -126813555;
}

int func_426(int iParam0)
{
	return (iParam0 / 100);
}

void func_427(char* sParam0)
{
	Global_1915715.f_22470 = func_462(sParam0, 10000, 0, 0, 0, 1);
}

bool func_428(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return false;
	}
	return true;
}

bool func_429(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_296(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_296(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_296(*iParam0, 2, 0, 0);
		return false;
	}
	func_296(*iParam0, 1, 0, 0);
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

bool func_430(int iParam0)
{
	return func_292(iParam0) == joaat("WEAPON");
}

bool func_431(int iParam0, bool bParam1)
{
	if (!func_204(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_204(iParam0, -1090933859))
		{
			return func_273(iParam0, 1) != 0;
		}
		if ((func_363(iParam0, -915411861, 0) || func_363(iParam0, 600942249, 0)) || func_363(iParam0, -570078785, 0))
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

bool func_432(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_463(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_370(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_388(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_433(int* iParam0, int iParam1)
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
				iVar0 = (iVar0 + (func_192(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_434(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_464(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_345(0)) && !func_389());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_390(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_391(iVar32))
			{
			}
			else
			{
				iVar33 = func_394(Var0[iVar34 /*2*/], 0, !bVar35, 0);
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

void func_435(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_465(&(uParam0->f_4));
}

bool func_436(int iParam0)
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

int func_437()
{
	if (func_38() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_438(int iParam0)
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

int func_439(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_292(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_204(iParam0, 1399091007))
	{
		func_466(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_440(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_467(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_468(&Var0, func_351(0));
	}
	if (!func_469(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_470(iVar14);
	return uVar15;
}

struct<4> func_441(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_269(iParam0, bParam1, 0) };
	return func_270(iParam0, Var0, Var0.f_4, bParam1);
}

int func_442(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_443(int iParam0)
{
	iParam0 = func_442(iParam0);
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

int func_444(int iParam0)
{
	iParam0 = func_442(iParam0);
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

bool func_445(int iParam0)
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

int func_446(int iParam0, int iParam1)
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

struct<10> func_447(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_448(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_449(int iParam0, int iParam1)
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

int func_450(int iParam0)
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

int func_451(int iParam0)
{
	if (func_204(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_204(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_204(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_452(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_189(uVar0[iVar17], 0) && iParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_453(int iParam0)
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

void func_454(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_455(int iParam0, int iParam1, int iParam2)
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

void func_456(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_471(*uParam0);
}

bool func_457(int iParam0)
{
	return iParam0 != 0;
}

bool func_458(var uParam0)
{
	if (!func_129(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_459(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_141(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_460(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_160(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_472(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_461(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_387(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_473(iParam0, iParam1, &Var0))
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

var func_462(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_463(int iParam0, bool bParam1)
{
	if (!func_431(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PAMPHLET_TRACKING_ARROW"))
	{
		return func_273(joaat("AMMO_ARROW_TRACKING"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_POISON_BOTTLE"))
	{
		return func_273(joaat("AMMO_POISONBOTTLE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_ANIMAL_REVIVER"))
	{
		return func_273(joaat("CONSUMABLE_TONIC_ANIMAL_REVIVER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_AMMO_22_TRANQUILIZER"))
	{
		return func_273(joaat("AMMO_22_TRANQUILIZER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_LEGENDARY_PHEROMONES"))
	{
		return func_273(joaat("CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_TONIC_BLENDING"))
	{
		return func_273(joaat("CONSUMABLE_TONIC_BLENDING"), 1);
	}
	return func_273(iParam0, 1);
}

bool func_464(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_387(iParam0, 2))
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
		func_474(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_465(var uParam0)
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

void func_466(int iParam0, var uParam1, var uParam2)
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

struct<14> func_467(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_468(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_469(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_259(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_470(int iParam0)
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

void func_471(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_472(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_241(Param0);
	}
	return -1;
}

bool func_473(int iParam0, int iParam1, var uParam2)
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

void func_474(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_355((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

