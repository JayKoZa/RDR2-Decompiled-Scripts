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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
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
	func_6(Global_1276641);
	func_7(Global_1277166);
	func_8(Global_1276808);
	func_9();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_10(32, -1);
	func_11();
	if (func_12())
	{
		func_9();
	}
	func_13();
	func_14(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

int func_2()
{
	if (func_15(0, 0))
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_16(iVar0, 1);
		iVar0++;
	}
}

void func_4()
{
	if (!NETWORK::NETWORK_IS_SESSION_ACTIVE() || !func_17())
	{
		return;
	}
	switch (&Global_1276808)
	{
		case 0:
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
			{
				func_18(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
			}
			else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			{
				func_18(PLAYER::PLAYER_ID());
			}
			else
			{
				return;
			}
			func_19();
			func_20(1);
			Global_1276808 = 1;
			break;
		case 1:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_21()))
			{
				func_18(PLAYER::PLAYER_ID());
			}
			func_22();
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
		if (!func_33(iVar0, Global_1276808->f_201.f_1[iVar0 /*4*/]))
		{
			bVar1 = true;
		}
		else
		{
			func_34(iVar0, Global_1276808->f_201.f_1[iVar0 /*4*/], 0);
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
		func_35((*uParam0)[iVar0 /*86*/]);
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

void func_9()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_10(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_9();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_11()
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
		if (func_36() == 0)
		{
			if (func_37())
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

int func_12()
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

bool func_13()
{
	bool bVar0;

	bVar0 = false;
	func_6(Global_1276641);
	func_7(Global_1277166);
	func_8(Global_1276808);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1276641, 1, 36);
	if (!func_38(NETWORK::_0xBA24095EA96DFE17(Global_1276641), 1, "g_mpMoonshineHostData"))
	{
		bVar0 = true;
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1277166, 2753, 37);
	if (!func_39(NETWORK::_0x690806BC83BC8CA2((*Global_1277166)[0 /*86*/]), 2753, "g_mpMoonshinePlayerData"))
	{
		bVar0 = true;
	}
	func_40();
	return !bVar0;
}

void func_14(bool bParam0)
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

int func_15(bool bParam0, bool bParam1)
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

int func_16(int iParam0, bool bParam1)
{
	if (func_41(iParam0))
	{
		if (MISC::IS_BIT_SET(Global_1276808->f_201, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_1276808->f_201), iParam0);
		}
		if (bParam1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_1276808->f_201.f_1[iParam0 /*4*/]), false))
			{
				SCRIPTS::TERMINATE_THREAD(&(Global_1276808->f_201.f_1[iParam0 /*4*/]));
				Global_1276808->f_201.f_1[iParam0 /*4*/] = 0;
				(Global_1276808->f_201.f_1[iParam0 /*4*/])->f_1 = -1;
				(Global_1276808->f_201.f_1[iParam0 /*4*/])->f_3 = 0;
			}
		}
		return func_42(iParam0) == 0;
	}
	return 0;
}

int func_17()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

void func_18(int iParam0)
{
	Global_1276808->f_200 = iParam0;
}

void func_19()
{
	var uVar0;

	uVar0 = func_43();
	func_44(uVar0);
	if (func_45(6))
	{
		Global_1277020->f_44.f_1 = 1;
	}
	else
	{
		Global_1277020->f_44.f_1 = 0;
	}
	func_47(func_46());
}

void func_20(int iParam0)
{
	Global_1276808->f_1 = iParam0;
}

int func_21()
{
	return Global_1276808->f_200;
}

void func_22()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!func_48(PLAYER::PLAYER_ID(), 1))
	{
		((*Global_1277166)[iVar0 /*86*/])->f_1 = -1;
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1276808->f_200))
	{
		((*Global_1277166)[iVar0 /*86*/])->f_1 = -1;
		return;
	}
	iVar1 = ((*Global_1277166)[Global_1276808->f_200 /*86*/])->f_5.f_12;
	if (((*Global_1277166)[iVar0 /*86*/])->f_1 == iVar1)
	{
		return;
	}
	((*Global_1277166)[iVar0 /*86*/])->f_1 = iVar1;
}

void func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if ((!func_17() || !NETWORK::NETWORK_IS_SESSION_ACTIVE()) || !ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
	{
		iVar2 = iVar1;
		if (iVar2 != Global_1277166[&Global_1275573 /*86*/])
		{
			(*Global_1277166)[&Global_1275573 /*86*/] = iVar2;
		}
	}
	else if (_NAMESPACE26::_0x0F99F6436528A089(Global_1275573->f_15))
	{
		iVar3 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
			iVar4 = func_49(iVar3, 1);
			if (Global_1277166[&Global_1275573 /*86*/] != iVar4)
			{
				(*Global_1277166)[&Global_1275573 /*86*/] = iVar4;
			}
		}
	}
	else if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)))
	{
		iVar5 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
			iVar6 = func_49(iVar5, 1);
			if (Global_1277166[&Global_1275573 /*86*/] != iVar6)
			{
				(*Global_1277166)[&Global_1275573 /*86*/] = iVar6;
			}
		}
	}
	func_50();
}

void func_24()
{
	if (!func_51(4096))
	{
		if (func_52(PLAYER::PLAYER_ID(), 0, 1) == 0)
		{
			if (func_53())
			{
				func_47(6);
				func_54(4096);
			}
		}
	}
}

void func_25()
{
	func_55();
	func_56();
	func_57();
	func_58();
	func_59();
}

void func_26()
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_1276808->f_1 == 4)
	{
		func_60();
	}
	else if (Global_1276808->f_1 == 3)
	{
		func_61();
	}
	else
	{
		iVar1 = func_62(Global_1276808->f_200, 1);
		if (iVar1 == -1)
		{
			fVar0 = 1E+08f;
		}
		else
		{
			fVar0 = func_63(iVar1);
		}
		if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_64(fVar0);
		}
		else
		{
			iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
			func_65(iVar2, fVar0);
		}
	}
}

void func_27()
{
	if (func_48(PLAYER::PLAYER_ID(), 1))
	{
		if ((func_42(1) == 0 && !func_66()) && !func_67())
		{
			if (func_51(262144))
			{
				func_68(262144);
			}
			func_68(8192);
			func_69(1);
		}
	}
	else
	{
		switch (func_42(1))
		{
			case 3:
				if (!func_51(8192))
				{
					func_54(8192);
					func_54(262144);
				}
				break;
			case 0:
				if (func_51(262144))
				{
					if (!func_70())
					{
						func_47(6);
						func_68(262144);
					}
				}
				break;
		}
	}
}

void func_28()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_72(iVar0, Global_1276808->f_201.f_1[iVar0 /*4*/], func_71(iVar0));
		iVar0++;
	}
}

void func_29()
{
	if (func_73() || func_48(PLAYER::PLAYER_ID(), 1))
	{
		func_74(1);
		func_75();
	}
}

void func_30()
{
	if (func_48(&(Global_1275573->f_154[&Global_1275573]), 1))
	{
		NETWORK::_0x236905C700FDB54D();
	}
}

void func_31()
{
	int iVar0;

	func_76();
	func_77();
	func_78();
	func_79();
	func_80();
	func_81();
	func_82();
	iVar0 = func_83(&(Global_1275573->f_154[&Global_1275573]));
	switch (iVar0)
	{
		case 0:
			func_84();
			func_85();
			func_86();
			func_87();
			if (!func_88())
			{
				func_89(1);
			}
			else if (func_90(1065353216 /* Float: 1f */))
			{
				func_89(7);
			}
			else if (func_91())
			{
				func_92();
				func_89(4);
			}
			else
			{
				func_89(2);
			}
			break;
		case 1:
			if (func_88())
			{
				func_89(2);
			}
			break;
		case 2:
			if (!func_93(&Global_1275573, 256))
			{
				func_94(256);
			}
			if (!func_95())
			{
				func_92();
				func_89(4);
				return;
			}
			if (func_96())
			{
				func_89(3);
			}
			break;
		case 3:
			if (func_97(&(Global_1276642->f_9)) != 3)
			{
				return;
			}
			if (func_98(Global_1275573->f_10) == 0)
			{
				func_89(2);
				return;
			}
			func_99();
			func_100(Global_1276642->f_9.f_1, 1);
			func_92();
			func_89(4);
			break;
		case 4:
			if (func_101(&(Global_1276642->f_1)) > Global_1276642->f_4)
			{
				if (func_90(1065353216 /* Float: 1f */) || func_102())
				{
					func_89(6);
				}
				else if (func_98(Global_1275573->f_10) == 0)
				{
				}
			}
			break;
		case 6:
			if (func_103(&(Global_1276642->f_9)))
			{
				return;
			}
			if (func_90(1065353216 /* Float: 1f */))
			{
				if (func_104())
				{
					func_89(5);
				}
				else
				{
					func_105(&(Global_1276642->f_1));
					func_89(7);
				}
			}
			else
			{
				func_106(&(Global_1276642->f_1));
				func_89(4);
			}
			break;
		case 5:
			if (func_93(&Global_1275573, 64))
			{
				func_105(&(Global_1276642->f_1));
				func_89(7);
			}
			break;
		case 7:
			if (!func_93(&Global_1275573, 524288))
			{
				func_94(524288);
			}
			if (func_93(&Global_1275573, 4))
			{
				func_107(4);
			}
			if (!func_93(&Global_1275573, 128))
			{
				func_108();
				func_94(128);
			}
			if ((!func_93(&Global_1275573, 1024) && !func_93(&Global_1275573, 2048)) && !func_93(&Global_1275573, 4096))
			{
				func_86();
			}
			if (func_93(&Global_1275573, 8))
			{
				func_107(131072);
				func_107(128);
				func_94(2);
				func_89(8);
			}
			break;
		case 8:
			if (func_93(&Global_1275573, 8))
			{
				func_107(8);
			}
			if (func_93(&Global_1275573, 512))
			{
				func_109();
				func_89(9);
			}
			break;
		case 9:
			if (func_95())
			{
				func_89(2);
			}
			break;
		case 10:
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1275573->f_15) && _NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
			{
				if (!func_88())
				{
					func_89(1);
				}
				else if (func_90(1065353216 /* Float: 1f */))
				{
					func_89(7);
				}
				else if (func_91())
				{
					func_92();
					func_89(4);
				}
				else
				{
					func_89(2);
				}
			}
			break;
	}
}

void func_32()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (((*Global_1277166)[iVar0 /*86*/])->f_1 == -1)
	{
		return;
	}
	POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
}

int func_33(int iParam0, var uParam1)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam1))
	{
		if (!SCRIPTS::_0x30BED53646C86D11(*uParam1))
		{
			SCRIPTS::_0x7DE4643157AD646C(*uParam1);
		}
		return 0;
	}
	else
	{
		*uParam1 = 0;
		uParam1->f_1 = -1;
	}
	func_16(iParam0, 1);
	return 1;
}

void func_34(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_3 = iParam2;
}

void func_35(var uParam0)
{
	struct<86> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = 10;
	Var0.f_5.f_12 = -1;
	Var0.f_5.f_13 = -1;
	Var0.f_19.f_1 = 11;
	Var0.f_41 = 8;
	Var0.f_52 = 8;
	Var0.f_52.f_1.f_1 = -1;
	Var0.f_52.f_1.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	*uParam0 = { Var0 };
}

int func_36()
{
	return Global_1572887->f_13;
}

bool func_37()
{
	return Global_1051202->f_8;
}

int func_38(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_39(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_40()
{
	var uVar0;

	uVar0 = func_43();
	func_44(uVar0);
	func_110();
}

bool func_41(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

int func_42(int iParam0)
{
	if (func_41(iParam0))
	{
		return (Global_1276808->f_201.f_1[iParam0 /*4*/])->f_3;
	}
	return 0;
}

int func_43()
{
	if (!func_111(&(Global_1277020->f_50)))
	{
		return -1;
	}
	switch (func_112(Global_1277020->f_50, 405591388, 0, 1))
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

void func_44(var uParam0)
{
	((*Global_1277166)[PLAYER::PLAYER_ID() /*86*/])->f_5.f_12 = uParam0;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		iVar1 = func_114(1, iParam0);
		if (iVar1 == 0)
		{
			return 0;
		}
		if (NETWORK::_0xFBE782B3165AC8EC(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_46()
{
	if (func_111(&(Global_1277020->f_50)))
	{
		switch (func_115(Global_1277020->f_50, 897456793, 1, -1))
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
			default:
				break;
		}
	}
	return 0;
}

void func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar1 = func_116();
	iVar2 = func_117();
	iVar3 = func_118() + 1;
	iVar4 = func_119();
	if (!func_53())
	{
		iVar3 = 0;
	}
	func_120(3, iVar1, 1);
	func_120(1, iVar2, 1);
	func_120(0, iVar3, 1);
	if (iVar3 > 0)
	{
		func_120(5, 1, 1);
	}
	else
	{
		func_120(5, 0, 1);
	}
	if (iVar2 > 0)
	{
		func_120(4, 0, 1);
	}
	else if (iVar3 > 1)
	{
		func_120(4, 2, 1);
	}
	else
	{
		func_120(4, 1, 1);
	}
	if (iVar3 > 1)
	{
		func_120(2, 1, 1);
	}
	else
	{
		func_120(2, 0, 1);
	}
	if (iParam0 != 6)
	{
		((*Global_1277166)[iVar0 /*86*/])->f_5.f_11 = iParam0;
	}
	if (func_121())
	{
		func_120(6, 1, 1);
	}
	else
	{
		func_120(6, 0, 1);
	}
	func_120(9, iVar4, 1);
	func_122();
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_123(((*Global_1277166)[iVar0 /*86*/])->f_85, iParam1);
	}
	return 0;
}

int func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return -1;
		}
	}
	return Global_1277166[iParam0 /*86*/];
}

void func_50()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1276808->f_211 == 0)
	{
		Global_1276808->f_211 = MISC::_GET_SYSTEM_TIME();
		return;
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1276808->f_211) > 500)
	{
		Global_1276808->f_211 = 0;
	}
	else
	{
		return;
	}
	iVar0 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_3;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && iVar1 != &Global_1275573)
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
			else if (((*Global_1277166)[iVar1 /*86*/])->f_3 == iVar0 && !func_48(iVar2, 256))
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar3, 1, 0, iVar0);
			}
			else
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar3, 0, 0, 256);
			}
		}
		iVar1++;
	}
}

bool func_51(int iParam0)
{
	return func_123(Global_1277020->f_144, iParam0);
}

int func_52(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return 0;
		}
	}
	return &(((*Global_1277166)[iParam0 /*86*/])->f_5[iParam1]);
}

int func_53()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1212196772) || !UNLOCK::_UNLOCK_IS_UNLOCKED(-400403560))
	{
		return 0;
	}
	return 1;
}

void func_54(int iParam0)
{
	func_124(&(Global_1277020->f_144), iParam0);
}

void func_55()
{
	bool bVar0;

	bVar0 = func_48(PLAYER::PLAYER_ID(), 512);
	if (Global_1277020->f_119.f_5)
	{
		if (bVar0)
		{
			func_125(512);
		}
		return;
	}
	if (func_126() || func_127())
	{
		if (bVar0)
		{
			func_125(512);
		}
	}
	else if (!bVar0)
	{
		func_128(512);
	}
}

void func_56()
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

	if (Global_1276808->f_1 == 3)
	{
		return;
	}
	if (Global_1276808->f_3.f_1 >= 32)
	{
		return;
	}
	if (Global_1277020->f_119.f_5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1276808->f_3.f_1 - 1))
	{
		if (!func_123((Global_1276808->f_3.f_2[iVar0 /*4*/])->f_3, 8))
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
		Global_1276808->f_3.f_1 = 0;
		return;
	}
	iVar3 = &Global_1276808->f_3.f_2[iVar1 /*4*/];
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	if (func_129(255))
	{
		return;
	}
	StringCopy(&cVar4, "", 128);
	switch (func_130(&cVar4, iVar3, 1))
	{
		case 1:
			(Global_1276808->f_3.f_2[iVar1 /*4*/])->f_2 = 0;
			bVar20 = true;
			break;
		case 2:
			if (!func_123((Global_1276808->f_3.f_2[iVar1 /*4*/])->f_3, 1))
			{
				func_131(iVar3);
				(Global_1276808->f_3.f_2[iVar1 /*4*/])->f_2 = MISC::GET_GAME_TIMER();
				func_132(&((Global_1276808->f_3.f_2[iVar1 /*4*/])->f_3), 1);
			}
			return;
		case 3:
			if ((Global_1276808->f_3.f_2[iVar1 /*4*/])->f_2 == 0)
			{
				(Global_1276808->f_3.f_2[iVar1 /*4*/])->f_2 = MISC::GET_GAME_TIMER();
				return;
			}
			else if ((MISC::GET_GAME_TIMER() - (Global_1276808->f_3.f_2[iVar1 /*4*/])->f_2) > 3000)
			{
				func_124(&((Global_1276808->f_3.f_2[iVar1 /*4*/])->f_3), 2);
				bVar20 = true;
			}
			else
			{
				return;
			}
			break;
		case 4:
			bVar20 = true;
			(Global_1276808->f_3.f_2[iVar1 /*4*/])->f_2 = 0;
			break;
	}
	sVar21 = func_133(cVar4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar21))
	{
		iVar22 = MISC::GET_HASH_KEY(sVar21);
		iVar23 = iVar22;
		iVar24 = 0;
	}
	else
	{
		iVar22 = 1700592256;
		iVar23 = 1434360011;
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
		Var25.f_31.f_15 = 1433015236;
		Var25.f_31.f_21 = 1;
		Var25.f_24 = 9;
		Var25.f_25 = iVar3;
		Var25.f_16 = func_135(PLAYER::GET_PLAYER_NAME(iVar3), func_134(iVar3, 1, -1, 0));
		Var25.f_17 = MISC::_CREATE_VAR_STRING(2, "MS_INVITE_MAIN");
		Var25.f_20 = iVar22;
		Var25.f_21 = iVar23;
		Var25.f_23 = 120;
		Var25.f_30 = NETWORK::_0x9C725D149622BFDE(0);
		Var25.f_29 = "IB_GAMERCARD";
		Var25.f_28 = 22;
		Var25.f_31.f_2 = func_135(PLAYER::GET_PLAYER_NAME(iVar3), func_134(iVar3, 1, -1, 0));
		Var25.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "MS_INVITE_MAIN");
		Var25.f_31.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_NOTIFICATION");
		Var25.f_31.f_6 = iVar22;
		Var25.f_31.f_7 = iVar23;
		Var25.f_31.f_17 = "HUD_Toast_Soundset";
		Var25.f_31.f_18 = "Toast_On";
		Var25.f_22 = 0;
		Var25.f_31.f_21 = iVar24;
		func_124(&((Global_1276808->f_3.f_2[iVar1 /*4*/])->f_3), 8);
		if (!func_137(func_136(Var25), &(Global_1276808->f_3.f_2[iVar1 /*4*/])))
		{
			return;
		}
	}
}

void func_57()
{
	if (Global_1276808->f_3.f_1 > 0)
	{
		if (func_66() || func_67())
		{
			func_138();
		}
	}
}

void func_58()
{
	struct<4> Var0;
	int iVar4;

	if (Global_1276808->f_3 == 0)
	{
		Global_1276808->f_3 = MISC::GET_GAME_TIMER();
		return;
	}
	else if ((MISC::GET_GAME_TIMER() - Global_1276808->f_3) < 3000)
	{
		return;
	}
	Global_1276808->f_3 = 0;
	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID((Global_1276808->f_3.f_2[iVar4 /*4*/])->f_1) && func_123((Global_1276808->f_3.f_2[iVar4 /*4*/])->f_3, 4))
		{
			*(Global_1276808->f_3.f_2[iVar4 /*4*/]) = { Var0 };
			Global_1276808->f_3.f_1 = (Global_1276808->f_3.f_1 - 1);
		}
		iVar4++;
	}
}

void func_59()
{
	struct<2> Var0;
	int iVar2;

	if (Global_1276808->f_3.f_131 == 0)
	{
		Global_1276808->f_3.f_131 = MISC::GET_GAME_TIMER();
		return;
	}
	else if ((MISC::GET_GAME_TIMER() - Global_1276808->f_3.f_131) < 1000)
	{
		return;
	}
	Global_1276808->f_3.f_131 = 0;
	Var0 = 255;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (((&Global_1276808->f_3.f_132[iVar2 /*2*/] != 255 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1276808->f_3.f_132[iVar2 /*2*/]))) || ((Global_1276808->f_3.f_132[iVar2 /*2*/])->f_1 != 0 && (MISC::_GET_SYSTEM_TIME() - (Global_1276808->f_3.f_132[iVar2 /*2*/])->f_1) >= 120000)) || func_139(iVar2))
		{
			*(Global_1276808->f_3.f_132[iVar2 /*2*/]) = { Var0 };
		}
		iVar2++;
	}
}

void func_60()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_21();
	iVar2 = func_62(iVar1, 1);
	if (func_42(iVar0) != 3)
	{
		func_140(iVar2);
		func_69(iVar0);
		func_128(32);
	}
	else if (!func_48(PLAYER::PLAYER_ID(), 32))
	{
		func_16(0, 0);
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_21();
	iVar2 = func_62(iVar1, 1);
	if (func_42(iVar0) != 3)
	{
		func_140(iVar2);
		func_69(iVar0);
	}
	else if (func_51(8))
	{
		func_16(0, 0);
		func_68(8);
	}
}

int func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return -1;
		}
	}
	return ((*Global_1277166)[iParam0 /*86*/])->f_5.f_12;
}

float func_63(int iParam0)
{
	return &(Global_1277020->f_6.f_17[iParam0]);
}

void func_64(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	if ((Global_1277020->f_54 != -1 && func_62(PLAYER::PLAYER_ID(), 1) == Global_1277020->f_54) || func_51(128))
	{
		if (func_42(iVar0) != 3)
		{
			if (((fParam0 <= 80f && !func_66()) && !func_67()) || func_51(128))
			{
				func_69(0);
				func_20(1);
			}
		}
		else if (func_63(Global_1277020->f_54) > 100f && !func_51(128))
		{
			func_16(0, 0);
		}
	}
	else if (func_42(iVar0) == 3 && !func_48(PLAYER::PLAYER_ID(), 1))
	{
		func_16(0, 0);
	}
}

void func_65(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	if (!func_48(PLAYER::PLAYER_ID(), 8))
	{
		if (func_42(iVar0) != 3)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			{
				if (func_48(PLAYER::PLAYER_ID(), 4) && func_48(iParam0, 2))
				{
					if (func_62(func_21(), 1) == -1)
					{
						return;
					}
					func_18(iParam0);
					func_69(0);
					func_20(2);
					func_140(((*Global_1277166)[iParam0 /*86*/])->f_5.f_12);
					func_128(8);
					func_125(4);
					return;
				}
				else if ((((func_62(iParam0, 1) == Global_1277020->f_54 && fParam1 <= 80f) && !func_66()) && !func_67()) || func_51(128))
				{
					func_69(0);
					func_20(1);
				}
			}
		}
		else
		{
			if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && func_48(iParam0, 2)) && func_48(PLAYER::PLAYER_ID(), 4))
			{
				if (Global_1276808->f_1 == 3)
				{
					return;
				}
				else if (Global_1276808->f_1 != 2)
				{
					func_20(2);
					func_128(8);
					func_125(4);
					return;
				}
			}
			if ((fParam1 > 100f && (Global_1276808->f_1 == 1 || Global_1276808->f_1 == 0)) && !func_48(PLAYER::PLAYER_ID(), 1))
			{
				func_16(0, 0);
			}
		}
	}
	else
	{
		if ((func_42(iVar0) == 3 && fParam1 > 100f) && (Global_1276808->f_1 == 1 || Global_1276808->f_1 == 0))
		{
			func_16(0, 0);
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && !func_48(iParam0, 2))
		{
			func_125(8);
			func_125(16);
			func_20(1);
		}
	}
}

bool func_66()
{
	return Global_262996[&Global_1275573 /*70*/] > 2;
}

int func_67()
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
	if (!func_141(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_68(int iParam0)
{
	func_142(&(Global_1277020->f_144), iParam0);
}

int func_69(int iParam0)
{
	if (func_41(iParam0))
	{
		if (!MISC::IS_BIT_SET(Global_1276808->f_201, iParam0))
		{
			MISC::SET_BIT(&(Global_1276808->f_201), iParam0);
		}
		else
		{
			return func_42(iParam0) == 3;
		}
	}
	return 0;
}

int func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar1 = func_49(PLAYER::PLAYER_ID(), 1);
	iVar2 = func_62(PLAYER::PLAYER_ID(), 1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_143(PLAYER::INT_TO_PLAYERINDEX(iVar0), &iVar4, &iVar3, 1))
		{
			if (iVar4 == iVar2 && iVar3 == iVar1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (func_41(iParam0))
	{
		return MISC::IS_BIT_SET(Global_1276808->f_201, iParam0);
	}
	return 0;
}

void func_72(int iParam0, var uParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (!func_144(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = true;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_21()))
	{
		bVar0 = true;
	}
	switch (uParam1->f_3)
	{
		case 0:
			if (bParam2 && !bVar0)
			{
				func_34(iParam0, uParam1, 1);
			}
			break;
		case 1:
			if (bParam2 && !bVar0)
			{
				if (func_145(iParam0))
				{
					func_34(iParam0, uParam1, 2);
				}
			}
			else
			{
				func_146(iParam0);
				func_34(iParam0, uParam1, 0);
			}
			break;
		case 2:
			if (bParam2 && !bVar0)
			{
				if (func_147(iParam0, uParam1))
				{
					func_146(iParam0);
					func_34(iParam0, uParam1, 3);
				}
			}
			else
			{
				func_146(iParam0);
				func_34(iParam0, uParam1, 0);
			}
			break;
		case 3:
			if ((bVar0 || !bParam2) || !SCRIPTS::_DOES_THREAD_EXIST(*uParam1))
			{
				if (func_33(iParam0, uParam1))
				{
					func_34(iParam0, uParam1, 0);
				}
				else
				{
					func_34(iParam0, uParam1, 4);
				}
			}
			break;
		case 4:
			if (func_33(iParam0, uParam1))
			{
				func_34(iParam0, uParam1, 0);
			}
			break;
	}
}

bool func_73()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1277020->f_29.f_10))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Global_1277020->f_29.f_10, false, 0);
}

void func_74(bool bParam0)
{
	if (bParam0)
	{
		Global_1903929->f_485[1] = 1;
	}
	Global_1903929->f_485[0] = 1;
	MISC::SET_BIT(&(Global_1956131->f_1), 0);
}

void func_75()
{
	Global_1896726->f_371.f_5 = 1;
}

void func_76()
{
	struct<12> Var0;
	int iVar14;

	if (!func_111(&(Global_1277020->f_50)))
	{
		func_148(0);
		func_149(0);
		return;
	}
	Var0.f_9 = -1591664384;
	if (func_150(Global_1277020->f_50, 1039159916, &Var0, 0, 1))
	{
		func_148(Var0.f_11);
	}
	else
	{
		func_148(0);
	}
	if (func_150(Global_1277020->f_50, 1111816631, &Var0, 0, 1))
	{
		func_149(Var0.f_11);
	}
	else
	{
		func_149(0);
	}
	iVar14 = func_151();
	func_152(iVar14);
}

void func_77()
{
	int iVar0;

	iVar0 = func_83(&(Global_1275573->f_154[&Global_1275573]));
	if (((iVar0 != 10 && iVar0 > 0) && _NAMESPACE26::_0x0F99F6436528A089(Global_1275573->f_15)) && !_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
	{
		if (func_62(&(Global_1275573->f_154[&Global_1275573]), 1) != -1)
		{
			func_153(896, 1);
		}
		func_89(10);
	}
}

void func_78()
{
	if (func_93(&Global_1275573, 16))
	{
		if (func_93(&Global_1275573, 32))
		{
			Global_1276642->f_8 = 600f;
			Global_1276642->f_33++;
			func_154(&(Global_1276642->f_5), 1);
			func_107(32);
			func_107(64);
		}
	}
	if (!func_93(&Global_1275573, 64))
	{
		if (func_101(&(Global_1276642->f_5)) > Global_1276642->f_8)
		{
			func_105(&(Global_1276642->f_5));
			func_94(64);
		}
	}
	if (!func_93(&Global_1275573, 16))
	{
		if (func_83(&(Global_1275573->f_154[&Global_1275573])) == 4 || func_83(&(Global_1275573->f_154[&Global_1275573])) == 6)
		{
			func_94(16);
		}
	}
	else if (func_83(&(Global_1275573->f_154[&Global_1275573])) != 4 && func_83(&(Global_1275573->f_154[&Global_1275573])) != 6)
	{
		func_107(16);
	}
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_20))
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	iVar3 = ((*Global_1277166)[iVar1 /*86*/])->f_19.f_15;
	iVar4 = ((*Global_1277166)[iVar1 /*86*/])->f_19.f_16;
	iVar5 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_17;
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_21))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1276642->f_21, iVar3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_24))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1276642->f_24, iVar4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_23))
	{
		iVar2 = func_155(iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1276642->f_23, iVar2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_26))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1276642->f_26, 100);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_27))
	{
		iVar6 = func_156(iVar5);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1276642->f_27, iVar6);
	}
	if (func_104())
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_29))
		{
			iVar7 = BUILTIN::FLOOR(func_101(&(Global_1276642->f_5)));
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1276642->f_29, iVar7);
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_28))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1276642->f_28, 0);
		}
	}
	else if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_28))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1276642->f_28, 1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_31))
	{
		if (func_93(iVar0, 262144))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1276642->f_31, 1);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1276642->f_31, 0);
		}
	}
}

void func_80()
{
	if (func_157() && func_158(Global_34, (Global_1051388->f_69[33 /*76*/])->f_26, 1, 0))
	{
		if (!func_93(&Global_1275573, 8192))
		{
			HUD::_0x4CC5F2FC1332577F(557238883);
			func_94(8192);
		}
	}
	else if (func_93(&Global_1275573, 8192))
	{
		HUD::_0x8BC7C1F929D07BF3(557238883);
		func_107(8192);
	}
}

void func_81()
{
	char* sVar0;

	if (&((*Global_1277166)[&Global_1275573 /*86*/])->f_5[3] > 0)
	{
		if (func_93(&Global_1275573, 524288) && func_158(Global_34, ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_21, 1, 0))
		{
			if (!func_159(895))
			{
				sVar0 = func_160(((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_20);
				func_161(895, sVar0, 0);
			}
		}
	}
}

void func_82()
{
	if (func_88())
	{
		if (func_158(Global_34, ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_21, 1, 0))
		{
			if (!func_159(897))
			{
				func_153(897, 0);
			}
		}
	}
}

int func_83(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return iVar0;
	}
	return &Global_1276642;
}

void func_84()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_15;
	iVar2 = INVENTORY::_0xE80E50BEE276A54A(827714260, 1039159916);
	iVar3 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_16;
	iVar4 = INVENTORY::_0xE80E50BEE276A54A(-545779394, 1111816631);
	iVar5 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_17;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_20))
	{
		Global_1276642->f_20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Moonshine_ProgressBars");
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_21))
	{
		Global_1276642->f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1276642->f_20, "MoonshineMashValue", iVar1);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_22))
	{
		Global_1276642->f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1276642->f_20, "MoonshineMashMaximum", iVar2);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_23))
	{
		iVar7 = func_155(iVar0);
		Global_1276642->f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1276642->f_20, "MoonshineMashColorID", iVar7);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_24))
	{
		Global_1276642->f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1276642->f_20, "MoonshineBottlesValue", iVar3);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_25))
	{
		Global_1276642->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1276642->f_20, "MoonshineBottlesMaximum", iVar4);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_26))
	{
		Global_1276642->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1276642->f_20, "MoonshineBottlesThresholdValue", 100);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_27))
	{
		iVar6 = func_156(iVar5);
		Global_1276642->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1276642->f_20, "MoonshineFlavor", iVar6);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_28))
	{
		Global_1276642->f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1276642->f_20, "MoonshineFlavorTimeMeterShowLabel", 0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_29))
	{
		Global_1276642->f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1276642->f_20, "FlavoringTimeMeterValue", 0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_30))
	{
		Global_1276642->f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1276642->f_20, "FlavoringTimeMeterMaximum", 600);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1276642->f_31))
	{
		Global_1276642->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1276642->f_20, "MoonshineShowCash", 0);
	}
}

void func_85()
{
	int iVar0;

	iVar0 = func_151();
	if (iVar0 != 0)
	{
		func_94(64);
	}
	Global_1276642->f_33 = 0;
}

void func_86()
{
	int iVar0;
	int iVar1;

	iVar0 = func_162();
	iVar1 = func_163();
	if (iVar0 == 827714260 || iVar1 == -545779394)
	{
		func_164(827714260);
		func_94(1024);
	}
	else if (iVar0 == -822124724 || iVar1 == 1532695640)
	{
		func_164(-822124724);
		func_94(2048);
	}
	else if (iVar0 == 1269193435 || iVar1 == 1847740267)
	{
		func_164(1847740267);
		func_94(4096);
	}
}

void func_87()
{
	if (((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_16 == 20)
	{
		func_94(524288);
	}
}

int func_88()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-319651633) && func_111(&(Global_1277020->f_50)))
	{
		return 1;
	}
	return 0;
}

void func_89(int iParam0)
{
	Global_1276642 = iParam0;
}

int func_90(float fParam0)
{
	struct<12> Var0;

	Var0.f_9 = -1591664384;
	if (func_150(Global_1277020->f_50, 1111816631, &Var0, 0, 1))
	{
		if (IntToFloat(Var0.f_11) >= (fParam0 * BUILTIN::TO_FLOAT(INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, 1111816631))))
		{
			return 1;
		}
	}
	return 0;
}

int func_91()
{
	int iVar0;

	if (!func_111(&(Global_1277020->f_50)))
	{
		return 0;
	}
	iVar0 = func_112(Global_1277020->f_50, 1039159916, 0, 1);
	if ((iVar0 == 827714260 || iVar0 == -822124724) || iVar0 == 1269193435)
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	func_107(256);
	func_94(4);
	func_165();
	Global_1276642->f_33 = 0;
}

int func_93(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return func_123(((*Global_1277166)[iParam0 /*86*/])->f_19, iParam1);
}

void func_94(int iParam0)
{
	if (!func_123(((*Global_1277166)[&Global_1275573 /*86*/])->f_19, iParam0))
	{
		func_124(&(((*Global_1277166)[&Global_1275573 /*86*/])->f_19), iParam0);
	}
}

int func_95()
{
	if (func_98(Global_1275573->f_10) == 0 && func_166(Global_1275573->f_10) == 0)
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<12> Var5;
	struct<12> Var22;

	if (func_103(&(Global_1276642->f_9)))
	{
		return 0;
	}
	iVar0 = func_167();
	if (!func_168(iVar0, 0))
	{
		return 0;
	}
	if (!func_111(&(Global_1277020->f_50)))
	{
		return 0;
	}
	if (func_169(&(Global_1277020->f_50), 1039159916, 1) > 0)
	{
		return 0;
	}
	else if (func_169(&(Global_1277020->f_50), 1111816631, 1) > 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = func_170(iVar0, 0, 1, -1, 1);
	iVar4 = func_171(iVar0, iVar3, 1, 0, 1, 0);
	if (func_172(iVar0, &iVar1, &iVar2, 0) && func_173(iVar1, iVar2, 0, 1) < iVar4)
	{
		Var5.f_9 = 1;
		Var5.f_11 = -1591664384;
		if (!func_174(&(Global_1276642->f_9), iVar1, &Var5, 1, iVar2, -1, 0))
		{
			return 0;
		}
		Global_1276642->f_19 = func_173(iVar1, iVar2, 0, 1);
		return 1;
	}
	Var22.f_9 = 1;
	Var22.f_11 = -1591664384;
	if (!func_175(&(Global_1276642->f_9), iVar0, Global_1277020->f_50, 1039159916, 1, &Var22, 1, iVar3, -1, 1))
	{
		return 0;
	}
	Global_1276642->f_19 = iVar4;
	return 1;
}

int func_97(int* iParam0)
{
	return func_176(iParam0->f_1);
}

int func_98(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return ((*Global_1277166)[iVar0 /*86*/])->f_19.f_15;
}

void func_99()
{
	int iVar0;

	iVar0 = func_162();
	((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_19 = iVar0;
}

void func_100(var uParam0, bool bParam1)
{
	var uVar0;
	int iVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;

	func_177(uParam0, &uVar0);
	iVar4 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_5.f_12;
	uVar5 = func_178(iVar4);
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
		uVar7 = Global_1276642->f_19;
	}
	uVar8 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_19;
	uVar9 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_17;
	uVar10 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_18;
	uVar11 = Global_1276642->f_33;
	uVar12 = func_179();
	uVar13 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_16;
	uVar14 = &((*Global_1277166)[&Global_1275573 /*86*/])->f_5[0];
	TELEMETRY::_0xB5013EFBB5516867(&uVar0, uVar5, iVar6, uVar7, uVar8, uVar9, uVar10, uVar11, uVar12, uVar13, uVar14);
}

float func_101(var uParam0)
{
	if (!func_180(uParam0))
	{
		return 0f;
	}
	return (BUILTIN::TO_FLOAT(func_181(uParam0)) * 0.001f);
}

int func_102()
{
	int iVar0;
	int iVar1;
	struct<12> Var2;

	if (func_103(&(Global_1276642->f_9)))
	{
		return 0;
	}
	if (!func_111(&(Global_1277020->f_50)))
	{
		return 0;
	}
	iVar0 = func_112(Global_1277020->f_50, 1039159916, 0, 1);
	iVar1 = 0;
	if (iVar0 == 1269193435)
	{
		iVar1 = 1847740267;
	}
	else if (iVar0 == -822124724)
	{
		iVar1 = 1532695640;
	}
	else if (iVar0 == 827714260)
	{
		iVar1 = -545779394;
	}
	else
	{
		iVar1 = -545779394;
	}
	Var2.f_9 = 1;
	Var2.f_11 = -1591664384;
	if (func_175(&(Global_1276642->f_9), iVar1, Global_1277020->f_50, 1111816631, 1, &Var2, 1, -489628648, -1, 1))
	{
		return 1;
	}
	return 0;
}

int func_103(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return 0;
	}
	iVar0 = func_97(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_104()
{
	if (func_180(&(Global_1276642->f_5)))
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_106(var uParam0)
{
	func_182(uParam0, 0);
}

void func_107(int iParam0)
{
	if (func_123(((*Global_1277166)[&Global_1275573 /*86*/])->f_19, iParam0))
	{
		func_142(&(((*Global_1277166)[&Global_1275573 /*86*/])->f_19), iParam0);
	}
}

void func_108()
{
	struct<22> Var0;

	if (!func_183())
	{
		return;
	}
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_11 = joaat("COLOR_WHITE");
	Var0.f_12 = 8000;
	Var0.f_13 = 1511356879;
	Var0.f_15 = 1433015236;
	Var0.f_21 = 1;
	Var0 = 5;
	Var0.f_2 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_TITLE");
	Var0.f_3 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_PRODUCTION_COMPLETE");
	Var0.f_7 = 1349568299;
	Var0.f_6 = -1734218699;
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_4 = "MOONSHINE_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 2099367966;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	func_184(&Var0);
}

void func_109()
{
	Global_1276642->f_4 = 0f;
	func_105(&(Global_1276642->f_1));
	func_105(&(Global_1276642->f_5));
	func_107(32);
	func_107(2048);
	func_107(1024);
	func_107(4096);
	func_107(64);
	func_107(128);
	func_107(2);
	func_107(512);
	func_107(65536);
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_62(PLAYER::GET_PLAYER_INDEX(), 1);
	iVar1 = -1;
	iVar4 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939231->f_1433.f_7711.f_1);
	iVar5 = 0;
	iVar6 = -1;
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		iVar6 = DATABINDING::_DATABINDING_READ_DATA_INT(&(Global_1939231->f_1433.f_7711.f_234[iVar5]));
		iVar1 = iVar6;
		iVar2 = func_185(iVar1);
		iVar3 = func_170(iVar2, 0, 1, -1, 1);
		iVar7 = func_186(iVar2, 1, iVar3);
		if (iVar0 != -1)
		{
			if (iVar0 == iVar1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939231->f_1433.f_7711.f_2[iVar5 /*23*/])->f_1.f_21, 1);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939231->f_1433.f_7711.f_2[iVar5 /*23*/])->f_1.f_9, 0);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939231->f_1433.f_7711.f_2[iVar5 /*23*/])->f_1.f_21, 0);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939231->f_1433.f_7711.f_2[iVar5 /*23*/])->f_1.f_9, iVar7);
			}
		}
		iVar5++;
	}
}

int func_111(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_112(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_150(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		default:
			break;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
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
	}
	return 0;
}

int func_115(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_187(&uParam0, iParam4, bParam5, iParam6);
}

int func_116()
{
	if (func_111(&(Global_1277020->f_50)))
	{
		if (func_188(-2020197296, &(Global_1277020->f_50), 104187473, 1, 0))
		{
			return 3;
		}
		else if (func_188(1236975766, &(Global_1277020->f_50), 104187473, 1, 0))
		{
			return 3;
		}
		else if (func_188(-1334222892, &(Global_1277020->f_50), 104187473, 1, 0))
		{
			return 3;
		}
	}
	return 0;
}

int func_117()
{
	if (func_111(&(Global_1277020->f_50)))
	{
		if (func_188(-1609310766, &(Global_1277020->f_50), 104187473, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_118()
{
	if (func_111(&(Global_1277020->f_50)))
	{
		if (func_188(-663241357, &(Global_1277020->f_50), 104187473, 1, 0))
		{
			return 2;
		}
		else if (func_188(-950723794, &(Global_1277020->f_50), 104187473, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (func_111(&(Global_1277020->f_50)))
	{
		switch (func_115(Global_1277020->f_50, -1565675519, 1, -1))
		{
			case -1832936964:
				return 2;
			case -998343303:
				return 3;
			case -126163595:
				return 4;
			case -589877714:
				return 6;
			case -361084332:
				return 10;
			case -1557841209:
				return 5;
			case -946797662:
				return 7;
			case -380221660:
				return 9;
			case -110172099:
				return 1;
			case -147791143:
				return 8;
			default:
				break;
		}
	}
	return 0;
}

int func_120(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	((*Global_1277166)[PLAYER::PLAYER_ID() /*86*/])->f_5[iParam0] = iParam1;
	return 1;
}

int func_121()
{
	if (!func_189())
	{
		return 0;
	}
	return func_123(Global_1901929->f_38.f_5, 8);
}

void func_122()
{
	if (!func_71(1))
	{
		return;
	}
	Global_1277020->f_44 = 1;
}

bool func_123(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_124(var uParam0, int iParam1)
{
	func_190(uParam0, iParam1);
}

void func_125(int iParam0)
{
	func_142(&(((*Global_1277166)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_85), iParam0);
}

int func_126()
{
	int iVar0;

	if (func_191())
	{
		return 1;
	}
	if (func_192(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 1;
	}
	if (!func_193())
	{
		return 1;
	}
	if (func_141(func_194(0)))
	{
		return 1;
	}
	if (func_195(0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	iVar0 = func_196(1427578635, PLAYER::PLAYER_ID(), 0, 1);
	if (func_197(iVar0))
	{
		return 1;
	}
	return 0;
}

var func_127()
{
	return Global_1070356->f_7;
}

void func_128(int iParam0)
{
	func_124(&(((*Global_1277166)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_85), iParam0);
}

bool func_129(int iParam0)
{
	return func_198(1, iParam0);
}

int func_130(char* sParam0, int iParam1, int iParam2)
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
	iVar2 = func_199(iParam1, iParam2);
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
					uVar10 = func_200(iParam2);
					iVar1 = NETWORK::_0x6E2FD8CF7EB10E53(iParam1, uVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_201(iParam1, iParam2, 0);
						return 1;
					}
					func_202(iParam1, iParam2, iVar1);
					func_201(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_203(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_201(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::_GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_201(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_201(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_203(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_201(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_0x375F5870A7B8BEC1(sVar12))
					{
						return 3;
					}
					func_201(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_203(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_201(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_131(int iParam0)
{
	struct<4> Var0;

	Var0.f_3 = 0;
	Var0.f_1 = 1;
	Var0 = 2;
	SCRIPTS::_0x31010318BA9897AC(&(Var0.f_2), iParam0);
	func_204(&Var0);
}

void func_132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_133(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_134(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_205(func_194(0)) && func_206(func_194(0)) == 7)
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
			iVar6 = func_207(iParam0);
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
			return func_208(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_123((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_209(iParam0, 1);
	if (!bVar0)
	{
		if (func_210(iParam0, bParam1))
		{
			return func_208(iParam0);
		}
		else if (func_211(iParam0, bParam1))
		{
			if (func_212(iParam0, bParam1))
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
		return func_207(iParam0);
	}
	else if (func_210(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_214(func_213(func_194(0)), 1) == 395262693)
		{
			return func_208(iParam0);
		}
		else
		{
			return func_208(iParam0);
		}
	}
	else if (func_211(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_135(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_215(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_136(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_216();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_23);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1939231->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1939231->f_242.f_1188, 64);
	func_217(Global_1939231->f_242.f_14[iVar0 /*39*/], Global_1939231->f_242.f_4, cVar3, Param0);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(84), Global_1939231->f_242.f_1188);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(85), 1);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(86), 0);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(74), Param0.f_30);
	if (Param0.f_30)
	{
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(72), Param0.f_29);
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(75), Param0.f_28);
	}
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(87), Param0.f_24);
	iVar15 = 0;
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_34 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), 707094655, iVar15);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(50), Param0.f_25);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(51), Param0.f_25.f_1);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_29 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(88), Param0.f_25.f_2);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(89), iVar2);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(90), Param0.f_22);
	func_219(Global_1939231->f_242.f_1186 + 1);
	if (Global_1939231->f_242.f_1188 == 2147483647)
	{
		Global_1939231->f_242.f_1188 = 0;
	}
	if (func_220(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1939231->f_242.f_14[iVar0 /*39*/];
		iVar16 = func_184(&(Param0.f_31));
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_36 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_218(91), iVar16);
	}
	iVar17 = func_221();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1939231->f_242.f_1187++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939231->f_242.f_5, 0, "pm_invite_item", &(Global_1939231->f_242.f_14[iVar0 /*39*/]));
	}
	return &(Global_1939231->f_242.f_14[iVar0 /*39*/]);
}

int func_137(var uParam0, int iParam1)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1276808->f_3.f_2[iVar0 /*4*/] == iParam1)
		{
			(Global_1276808->f_3.f_2[iVar0 /*4*/])->f_1 = uParam0;
			func_132(&((Global_1276808->f_3.f_2[iVar0 /*4*/])->f_3), 4);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_138()
{
	struct<4> Var0;
	int iVar4;

	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= (Global_1276808->f_3.f_2 - 1))
	{
		*(Global_1276808->f_3.f_2[iVar4 /*4*/]) = { Var0 };
		iVar4++;
	}
	Global_1276808->f_3.f_1 = 0;
	Global_1276808->f_3 = 0;
}

int func_139(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1276808->f_3.f_132[iParam0 /*2*/])) && func_222(&(Global_1276808->f_3.f_132[iParam0 /*2*/])))
	{
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	Global_1277020->f_54 = iParam0;
}

int func_141(struct<2> Param0)
{
	if (!func_223(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_224(Param0))
	{
		return 0;
	}
	return 1;
}

void func_142(var uParam0, int iParam1)
{
	func_225(uParam0, iParam1);
}

int func_143(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (((*Global_1277166)[iVar0 /*86*/])->f_1 == -1)
	{
		return 0;
	}
	*iParam1 = ((*Global_1277166)[iVar0 /*86*/])->f_1;
	*iParam2 = ((*Global_1277166)[iVar0 /*86*/])->f_3;
	return 1;
}

bool func_144(int iParam0, bool bParam1)
{
	return func_49(iParam0, bParam1) != -1;
}

int func_145(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = func_226(iParam0);
	if (MISC::_0x375F5870A7B8BEC1(sVar0))
	{
		return 0;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sVar0))
	{
		return 0;
	}
	iVar1 = (Global_1276808->f_201.f_1[iParam0 /*4*/])->f_2;
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, iVar1, true, 0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	iVar2 = func_228(func_227(iParam0));
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iVar2) <= 0)
	{
		return 0;
	}
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		return 0;
	}
	return 1;
}

void func_146(int iParam0)
{
	char* sVar0;

	sVar0 = func_226(iParam0);
	if (MISC::_0x375F5870A7B8BEC1(sVar0))
	{
		return;
	}
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
}

int func_147(int iParam0, var uParam1)
{
	func_229(iParam0, uParam1);
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam1))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_226(iParam0));
		return 1;
	}
	return 0;
}

void func_148(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901929->f_743.f_5)
	{
		iParam0 = Global_1901929->f_743.f_5;
	}
	if (((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_15 != iParam0)
	{
		((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_15 = iParam0;
	}
}

void func_149(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_16 != iParam0)
	{
		((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_16 = iParam0;
	}
}

int func_150(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_230(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_151()
{
	int iVar0;

	if (!func_111(&(Global_1277020->f_50)))
	{
		return 0;
	}
	iVar0 = func_112(Global_1277020->f_50, -268973591, 0, 1);
	return iVar0;
}

void func_152(int iParam0)
{
	if (((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_17 != iParam0)
	{
		((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_17 = iParam0;
		func_231();
		func_94(1048576);
	}
	if (iParam0 != 0 && ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_17 != ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_20)
	{
		((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_18 = ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_20;
	}
	if ((iParam0 != 0 && iParam0 != ((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_20) && !func_180(&(Global_1276642->f_5)))
	{
		((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_20 = iParam0;
	}
}

void func_153(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_232(iParam0, &iVar0, &iVar1);
	if (!func_233(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_234(iVar0, iVar1);
}

void func_154(var uParam0, bool bParam1)
{
	if (bParam1 || !func_180(uParam0))
	{
		func_106(uParam0);
	}
}

int func_155(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_93(iVar0, 256))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_156(int iParam0)
{
	int iVar0;

	if (iParam0 == 1958345007)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 348064119)
	{
		iVar0 = 2;
	}
	else if (iParam0 == -818346432)
	{
		iVar0 = 3;
	}
	else if (iParam0 == -610395813)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 2103594888)
	{
		iVar0 = 5;
	}
	else if (iParam0 == -624685730)
	{
		iVar0 = 6;
	}
	else if (iParam0 == 1739830455)
	{
		iVar0 = 7;
	}
	else if (iParam0 == -1498871949)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 447784640)
	{
		iVar0 = 9;
	}
	else if (iParam0 == -1283370018)
	{
		iVar0 = 10;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_157()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return 0;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	if (func_235())
	{
		return 0;
	}
	return 1;
}

bool func_158(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iVar1]), iVar2);
}

char* func_160(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1958345007:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE";
			break;
		case 348064119:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB";
			break;
		case -818346432:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER";
			break;
		case -610395813:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT";
			break;
		case 2103594888:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN";
			break;
		case -624685730:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS";
			break;
		case 1739830455:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND";
			break;
		case -1498871949:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH";
			break;
		case 447784640:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER";
			break;
		case -1283370018:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK";
			break;
		default:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_UNFLAVORED";
			break;
	}
	return sVar0;
}

void func_161(int iParam0, char* sParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	func_236(iParam0, MISC::GET_HASH_KEY(sParam1), bParam2);
}

int func_162()
{
	int iVar0;

	if (!func_111(&(Global_1277020->f_50)))
	{
		return 0;
	}
	iVar0 = func_112(Global_1277020->f_50, 1039159916, 0, 1);
	return iVar0;
}

int func_163()
{
	int iVar0;

	if (!func_111(&(Global_1277020->f_50)))
	{
		return 0;
	}
	iVar0 = func_112(Global_1277020->f_50, 1111816631, 0, 1);
	return iVar0;
}

void func_164(int iParam0)
{
	((*Global_1277166)[&Global_1275573 /*86*/])->f_19.f_19 = iParam0;
}

void func_165()
{
	int iVar0;
	int iVar1;

	if (!func_111(&(Global_1277020->f_50)))
	{
		return;
	}
	iVar0 = func_112(Global_1277020->f_50, 1039159916, 0, 1);
	iVar1 = INVENTORY::_0xE80E50BEE276A54A(iVar0, 1039159916);
	if (iVar0 == 1269193435)
	{
		Global_1276642->f_4 = ((Global_1901929->f_743.f_2 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	else if (iVar0 == -822124724)
	{
		Global_1276642->f_4 = ((Global_1901929->f_743.f_1 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	else if (iVar0 == 827714260)
	{
		Global_1276642->f_4 = ((Global_1901929->f_743 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	else
	{
		Global_1276642->f_4 = ((Global_1901929->f_743 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	if (func_237(15) >= 15)
	{
		Global_1276642->f_4 = (Global_1276642->f_4 * 0.8f);
	}
	func_154(&(Global_1276642->f_1), 0);
}

int func_166(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return ((*Global_1277166)[iVar0 /*86*/])->f_19.f_16;
}

int func_167()
{
	if (func_93(&Global_1275573, 1024))
	{
		return 827714260;
	}
	else if (func_93(&Global_1275573, 2048))
	{
		return -822124724;
	}
	else if (func_93(&Global_1275573, 4096))
	{
		return 1269193435;
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_169(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_230(bParam2), uParam0, iParam1);
}

int func_170(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	if (func_238(iParam0))
	{
		return func_241(func_239(iParam0, 0), iParam1, bParam2, iParam3, func_240(iParam0));
	}
	if (func_242(iParam0, bParam4) || func_243(iParam0))
	{
		iParam1 = 997808187;
	}
	else if (func_240(iParam0) && (func_244(iParam0, &iVar0) || func_245(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_246(iParam0, -570078785);
		bVar2 = func_246(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			iParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_247())
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

int func_171(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_246(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_238(iParam0))
	{
		return func_173(func_239(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_248(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
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

int func_172(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	*iParam1 = 0;
	iVar0 = func_249(831658232, 1, 0, 1);
	iVar1 = func_249(1964703625, 1, 0, 1);
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
			if (iParam0 == 1269193435)
			{
				*iParam1 = 1770635244;
			}
			else if (iParam0 == -822124724)
			{
				*iParam1 = 1694260085;
			}
			else
			{
				*iParam1 = -2006381587;
			}
		}
		else if (iParam0 == 1269193435)
		{
			*iParam1 = -1964533269;
		}
		else if (iParam0 == -822124724)
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
			if (iParam0 == 1269193435)
			{
				*iParam1 = 1455881441;
			}
			else if (iParam0 == -822124724)
			{
				*iParam1 = -98408876;
			}
			else
			{
				*iParam1 = 136850391;
			}
		}
		else if (iParam0 == 1269193435)
		{
			*iParam1 = 535276374;
		}
		else if (iParam0 == -822124724)
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
			if (iParam0 == 1269193435)
			{
				*iParam1 = 683835946;
			}
			else if (iParam0 == -822124724)
			{
				*iParam1 = 129815171;
			}
			else
			{
				*iParam1 = -280792819;
			}
		}
		else if (iParam0 == 1269193435)
		{
			*iParam1 = -61838317;
		}
		else if (iParam0 == -822124724)
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
		if (iParam0 == 1269193435)
		{
			*iParam1 = 683835946;
		}
		else if (iParam0 == -822124724)
		{
			*iParam1 = 129815171;
		}
		else
		{
			*iParam1 = -280792819;
		}
		*iParam2 = -915411861;
	}
	if (!func_250(*iParam1) || *iParam2 == 0)
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_251(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532) || &Var0[iVar32 /*2*/] == -1295114026)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
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

int func_174(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!func_252(iParam0, 0))
	{
		return 0;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_241(iParam1, 0, 1, iParam5, iParam6);
	}
	if (!func_253(iParam1, iParam4, iParam5))
	{
		return 0;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_254(iParam0, *uParam2, 541670136, iParam3))
	{
		return 0;
	}
	if (COLLECTION::_0x9ADEE485726025D4(iParam1) != 0)
	{
		if (Global_1272170->f_20.f_402 != -1)
		{
		}
		Global_1272170->f_20.f_402.f_1 = iParam1;
		Global_1272170->f_20.f_402 = iParam0->f_1;
	}
	return 1;
}

int func_175(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<16> Var0;
	struct<17> Var16;

	if (!func_252(iParam0, 0))
	{
		return 0;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_170(iParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_255(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return 0;
	}
	Var0 = { func_256(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_257(iParam1) == joaat("clothing"))
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_258(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return 0;
		}
	}
	else if (!func_259(iParam0, Var0, 2113164098, iParam9, iParam11))
	{
		return 0;
	}
	return 1;
}

int func_176(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_260(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_261(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_261(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_177(var uParam0, var uParam1)
{
	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
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

int func_179()
{
	int iVar0;
	int iVar1;

	if (!func_111(&(Global_1277020->f_50)))
	{
		return 0;
	}
	iVar0 = func_112(Global_1277020->f_50, -268973591, 0, 1);
	if (func_262(iVar0, 1372968408))
	{
		iVar1 = 1372968408;
	}
	else if (func_262(iVar0, -710171994))
	{
		iVar1 = -710171994;
	}
	else if (func_262(iVar0, 956386416))
	{
		iVar1 = 956386416;
	}
	return iVar1;
}

bool func_180(var uParam0)
{
	return func_263(*uParam0, 1);
}

int func_181(var uParam0)
{
	if (!func_180(uParam0))
	{
		return 0;
	}
	if (func_264(uParam0))
	{
		return uParam0->f_2;
	}
	return func_265(uParam0->f_1);
}

void func_182(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_266(uParam0, 1);
	func_267(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_183()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return 0;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	if (func_235())
	{
		return 0;
	}
	if (UIAPPS::_IS_APP_RUNNING(1289756680))
	{
		return 0;
	}
	if (Global_1070356->f_27249)
	{
		return 0;
	}
	if (Global_1572887->f_9)
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-319651633))
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	return 1;
}

int func_184(var uParam0)
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
		return func_270(func_269(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_269(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_271(func_269(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_269(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_272(func_269(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_269(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_273(func_269(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_269(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_274(func_269(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_269(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_275(func_269(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_269(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_276(func_269(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_269(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_185(int iParam0)
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

int func_186(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar2;

	return func_277(iParam0, iParam1, iParam2, &uVar0, &uVar2, 0, 0);
}

int func_187(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_278(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_188(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_279(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_189()
{
	int iVar0;

	if (Global_1901929->f_38.f_2 == 1788394582)
	{
		iVar0 = Global_1275573->f_21;
		if (iVar0 > Global_1901929->f_38.f_3 && iVar0 < Global_1901929->f_38.f_4)
		{
			return 1;
		}
	}
	return 0;
}

void func_190(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_191()
{
	return (Global_1275565->f_2.f_1 == 2 || Global_1275565->f_2.f_1 == 1);
}

int func_192(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_280(bParam1, bParam2, bParam3);
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

int func_193()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

struct<2> func_194(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

bool func_195(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

int func_196(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (((*Global_1225057)[iVar0 /*686*/])->f_565 != iParam0)
		{
		}
		else if (bParam2 && !func_281(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && ((*Global_1214482)[iVar0 /*27*/])->f_15 != iParam1)
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

bool func_197(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_282(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_283())
	{
		return func_282(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_282(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_199(int iParam0, int iParam1)
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

int func_200(int iParam0)
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

void func_201(int iParam0, int iParam1, int iParam2)
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

void func_202(int iParam0, int iParam1, int iParam2)
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

int func_203(int iParam0, int iParam1)
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

void func_204(var uParam0)
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
			func_284(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			func_284(vVar0);
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
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
					{
					}
					else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
					}
					iVar3++;
				}
				func_285(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_284(vVar0);
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
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
						{
						}
						else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
						}
						iVar3++;
					}
					func_285(&Var14, uVar5);
				}
			}
		}

bool func_205(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_286(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_206(var uParam0, var uParam1)
{
	return uParam0;
}

int func_207(int iParam0)
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

int func_208(int iParam0)
{
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != Global_1275573->f_15 && !func_67())
	{
		return 636925055;
	}
	return -963477619;
}

int func_209(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_287(iParam0, bParam1));
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

int func_210(int iParam0, bool bParam1)
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

bool func_211(int iParam0, bool bParam1)
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
	if (func_288(iParam0))
	{
		return true;
	}
	return !func_210(iParam0, 0);
}

int func_212(int iParam0, bool bParam1)
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
	if (func_289(iParam0))
	{
		return 0;
	}
	if (func_288(iParam0))
	{
		return 0;
	}
	if (func_290(iParam0))
	{
		return 1;
	}
	return func_291(iParam0);
}

int func_213(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_292(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_214(int iParam0, int iParam1)
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

char* func_215(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_216()
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
			if (func_293(Var2))
			{
				func_294(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_295();
}

void func_217(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_296(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_218(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_218(17), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(3), Param10.f_18);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(4), Param10.f_19);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(5), Param10.f_20);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(6), Param10.f_21);
}

char* func_218(int iParam0)
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

void func_219(int iParam0)
{
	Global_1939231->f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1939231->f_242.f_1186), 0));
}

int func_220(var uParam0)
{
	return 1;
}

int func_221()
{
	return Global_1939231->f_242.f_1185;
}

bool func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_143(iParam0, &iVar0, &iVar1, 1);
	bVar2 = ((bVar2 && iVar0 == ((*Global_1277166)[PLAYER::PLAYER_ID() /*86*/])->f_1) && iVar1 == Global_1277166[PLAYER::PLAYER_ID() /*86*/]);
	return bVar2;
}

int func_223(int iParam0)
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

int func_224(int iParam0)
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

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_226(int iParam0)
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

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1294698649;
		case 0:
			return joaat("mini");
		default:
			break;
	}
	return joaat("micro");
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case joaat("micro"):
			return 128;
		case -1598299820:
			return 200;
		case 746035441:
			return 400;
		case joaat("mini"):
			return 512;
		case 1567969312:
			return 600;
		case 849942934:
			return 800;
		case joaat("default"):
			return 1024;
		case 662654967:
			return 1026;
		case joaat("update"):
			return 1300;
		case 356437857:
			return 1301;
		case 1444727078:
			return 1400;
		case -1152281542: /* GXTEntry: "Posse Race" */
			return 1600;
		case -2027482694:
			return 1800;
		case joaat("pause_menu_script"):
			return 2000;
		case 1371455820:
			return 2024;
		case 1230979482:
			return 2025;
		case -1298200006:
			return 2026;
		case 28140092:
			return 2027;
		case 1497760498:
			return 2047;
		case -346238945:
			return 2048;
		case 627973797:
			return 2549;
		case 1875090462:
			return 2050;
		case -1571441951:
			return 2051;
		case 141976779:
			return 2452;
		case -390588104:
			return 2053;
		case -1156795024:
			return 3000;
		case 1955050002:
			return 3001;
		case 1415704879:
			return 3002;
		case 1168642835:
			return 3081;
		case -1582256496:
			return 3088;
		case 894914127:
			return 3090;
		case -925217315:
			return 3500;
		case joaat("script_xml"):
			return 4592;
		case -299117668:
			return 4700;
		case 2134863183:
			return 5000;
		case 1442743587:
			return 5001;
		case -354964017:
			return 5400;
		case 487844664:
			return 5500;
		case -1050991852:
			return 5501;
		case -544337485:
			return 5502;
		case joaat("region"):
			return 5503;
		case 46285951:
			return 5504;
		case 838854843: /* GXTEntry: "Fishing" */
			return 5505;
		case 2122926971:
			return 5506;
		case -1475898915:
			return 6000;
		case -1644014996:
			return 6001;
		case -45677744:
			return 6002;
		case joaat("shop"):
			return 6005;
		case -192136878:
			return 6010;
		case 1517073634:
			return 6400;
		case 1495295997:
			return 6500;
		case 364255091:
			return 7000;
		case -1330320955:
			return 7001;
		case -901433337:
			return 7002;
		case 1865091110:
			return 7300;
		case 36156066:
			return 7301;
		case -1226137495:
			return 8700;
		case 1524910643:
			return 10001;
		case -1125321488:
			return 10003;
		case 2013232686:
			return 14335;
		case joaat("transition"):
			return 25500;
		case joaat("mission_creator"):
			return 40500;
		case joaat("mission"):
			return 45000;
		case 56269207:
			return 68000;
		case 992915021:
			return 1631;
		case -1294698649:
			return 3482;
		case joaat("soak_test"):
			return 4088;
		case joaat("network_bot"):
			return 4096;
		case joaat("debug_script"):
			return 4080;
		case joaat("debug_menu"):
			return 50000;
		case 708358771:
			return 65536;
		case -800826243:
			return 32768;
		case 1978046393:
			return 129;
		default:
			break;
	}
	return 0;
}

void func_229(int iParam0, var uParam1)
{
	struct<10> Var0;

	Var0 = { func_297(iParam0) };
	uParam1->f_1 = Var0.f_1;
	uParam1->f_2 = uParam1->f_1;
	*uParam1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_226(iParam0), &Var0, 10, func_228(func_227(iParam0)));
}

int func_230(bool bParam0)
{
	if (func_36() == -1)
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

void func_231()
{
	int iVar0;

	iVar0 = func_151();
	if (func_262(iVar0, 1372968408))
	{
		func_299(func_298(-1276738576, -416283678), 1);
	}
	else if (func_262(iVar0, -710171994))
	{
		func_299(func_298(-1276738576, -880881435), 1);
	}
	else if (func_262(iVar0, 956386416))
	{
		func_299(func_298(-1276738576, -98884474), 1);
	}
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_233(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_300(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_301(iParam0))
	{
		return 0;
	}
	if (func_302(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_303(iParam0, 1)) || func_304(32768))
	{
		if (!func_303(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_305())
	{
		return 0;
	}
	return 1;
}

void func_234(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

bool func_235()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

void func_236(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_232(iParam0, &iVar0, &iVar1);
	if (!func_233(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_303(iParam0, 1024))
	{
		return;
	}
	func_234(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

int func_237(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return func_306(255);
		case 7:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			iVar0 = func_307(iParam0);
			if (func_168(iVar0, 0))
			{
				return func_279(iVar0, func_308(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			break;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (func_262(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_168(iParam0, 0))
	{
		return func_310(func_309(iParam0), bParam1);
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

int func_240(int iParam0)
{
	if (!func_193() && func_311())
	{
		return 1;
	}
	return func_262(iParam0, 1435272033);
}

int func_241(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_250(iParam0))
	{
		return 0;
	}
	bVar1 = func_312(iParam3, 2);
	bVar2 = func_313(iParam0, -570078785, bVar1);
	bVar3 = func_313(iParam0, -915411861, bVar1);
	if (func_313(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (iParam4 && (func_314(iParam0, &iVar0) || func_315(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_247())
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
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_242(int iParam0, bool bParam1)
{
	if (iParam0 == -1609310766 && UNLOCK::_UNLOCK_IS_UNLOCKED(-1387714323))
	{
		return true;
	}
	return (func_246(iParam0, 997808187) && !func_316(iParam0, 997808187, bParam1));
}

int func_243(int iParam0)
{
	int iVar0;

	iVar0 = func_239(iParam0, 1);
	if (iVar0 != 0 && func_313(iVar0, 997808187, 0))
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1831140953))
		{
			return 1;
		}
	}
	return 0;
}

bool func_244(int iParam0, int iParam1)
{
	*iParam1 = func_317(iParam0, 1);
	return *iParam1 != 0;
}

bool func_245(int iParam0, int iParam1)
{
	*iParam1 = func_318(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_246(int iParam0, int iParam1)
{
	if (!func_168(iParam0, 0))
	{
		return false;
	}
	if (func_238(iParam0))
	{
		return func_313(func_239(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

bool func_247()
{
	return Global_1915180->f_21962;
}

int func_248(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_319(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_249(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_320(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_230(bParam1), iParam0, iParam3);
}

int func_250(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

int func_251(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_250(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_321(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_252(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_103(iParam0))
		{
			return 0;
		}
	}
	if (func_322(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return 0;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
	{
		return 0;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(-1318406457))
	{
		return 0;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("update")))
	{
		return 0;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("use")))
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return 0;
	}
	return 1;
}

int func_253(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_313(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_312(iParam2, 2))
	{
		if (func_323(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_312(iParam2, 8))
	{
		return func_324(iParam0, iParam1);
	}
	return 1;
}

int func_254(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return 0;
	}
	if (!func_325(Param1))
	{
		return 0;
	}
	if (!func_326(iParam0, iParam18))
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(*iParam0, &Param1, 17))
	{
	}
	else
	{
		return 0;
	}
	return func_327(iParam0, bParam19);
}

int func_255(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	struct<10> Var0;
	struct<4> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (func_312(iParam9, 32))
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_328(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_330(iParam1, func_329(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_312(iParam9, 1))
	{
		if (!func_331(iParam1))
		{
			return 0;
		}
	}
	if (func_312(iParam9, 2))
	{
		if (func_316(iParam1, iParam7, 1))
		{
			return 0;
		}
	}
	if (func_312(iParam9, 4))
	{
		if (!bParam10 && !INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_279(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_332(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_333(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_334(iParam0, iParam1) * iVar21);
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
	if (func_312(iParam9, 8))
	{
		return func_335(iParam0, iParam1, iParam7, iParam8);
	}
	return 1;
}

struct<16> func_256(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_336(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_337(iParam0, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_338() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_257(int iParam0)
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

int func_258(int* iParam0, struct<16> Param1, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != -1318406457) && iParam18 != joaat("update"))
	{
		return 0;
	}
	if (!func_339(iParam18, Param1, iParam20))
	{
		return 0;
	}
	if (!func_326(iParam0, iParam18))
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(*iParam0, &Param1, 17))
	{
	}
	else
	{
		return 0;
	}
	return func_327(iParam0, bParam19);
}

int func_259(int* iParam0, struct<16> Param1, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != -1318406457) && iParam17 != joaat("update")) && iParam17 != joaat("use")) && iParam17 != joaat("spend"))
	{
		return 0;
	}
	if (!func_339(iParam17, Param1, iParam19))
	{
		return 0;
	}
	if (!func_326(iParam0, iParam17))
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(*iParam0, &Param1, 16))
	{
	}
	else
	{
		return 0;
	}
	return func_327(iParam0, bParam18);
}

int func_260(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			return (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_340(iParam0, iParam1, iParam2, iParam3);
}

int func_262(int iParam0, int iParam1)
{
	if (!func_168(iParam0, 0))
	{
		return func_341(func_309(iParam0), iParam1);
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

bool func_263(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_264(var uParam0)
{
	return func_263(*uParam0, 2);
}

int func_265(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_266(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_267(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_268()
{
	struct<2> Var0;

	Var0 = { func_194(0) };
	if (func_141(Var0) && func_205(Var0))
	{
		if ((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 7)
		{
			return 1;
		}
	}
	return 0;
}

char* func_269(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_215(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
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
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_271(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
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
	uVar23 = _NAMESPACE71::_0xC927890AA64E9661(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
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
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_273(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
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
	uVar23 = _NAMESPACE71::_0xC927890AA64E9661(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_274(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_275(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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

var func_276(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_277(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
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

	if (func_238(iParam0))
	{
		return func_342(func_239(iParam0, 1), iParam2, uParam3);
	}
	if (!func_248(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (func_343(0) && !func_344());
	if (iParam6 != 0)
	{
		if (func_36() == 0)
		{
			return 0;
		}
		bParam5 = false;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == 2084597891 && func_345(iVar32))
			{
				Jump @438; //curOff = 179
			}
			else if (&Var0[iVar34 /*2*/] == 773203532 && func_346(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_347(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					iVar33 = func_348(&(Var0[iVar34 /*2*/]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_349(&(Var0[iVar34 /*2*/])) || func_350(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_351(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = func_352(&(Var0[iVar34 /*2*/]), iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*uParam4 = iVar36;
							}
						}
						else
						{
							Jump @422; //curOff = 378
							if (bParam5 && ((iVar33 + func_353(7, &(Var0[iVar34 /*2*/]))) + func_354(&(Var0[iVar34 /*2*/]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *(Var0[iVar34 /*2*/]) };
								return 0;
							}
						}
						iVar34++;
						return 1;
					}
				}
			}
		}
	}

int func_278(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_230(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_355(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_279(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_337(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_336(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_230(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_230(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_280(bool bParam0, bool bParam1, bool bParam2)
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

bool func_281(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_356(iParam0) && func_312(((*(*Global_1215057)[iParam2 /*303*/])[iParam0 /*23*/])->f_19, iParam1));
}

bool func_282(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_283()
{
	return Global_1099294->f_339;
}

void func_284(vector3 vParam0)
{
	if (Global_1132968->f_5808.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*(Global_1132968->f_5808.f_326[Global_1132968->f_5808.f_324 /*3*/]) = { vParam0 };
	Global_1132968->f_5808.f_324 = (Global_1132968->f_5808.f_324 + 1 % 50);
	Global_1132968->f_5808.f_325++;
}

void func_285(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 182;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
}

int func_286(struct<2> Param0)
{
	int iVar0;

	if (!func_141(Param0))
	{
		return -1;
	}
	iVar0 = func_357(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

float func_287(int iParam0, bool bParam1)
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

int func_288(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_291(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_358(iParam0);
		return false;
	}
	if (func_290(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 2)
		{
			func_359(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275573->f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 2);
}

int func_292(struct<2> Param0, var uParam2)
{
	if (!func_141(Param0))
	{
		return 0;
	}
	func_360(uParam2);
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

bool func_293(struct<38> Param0, var uParam38)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_37);
}

void func_294(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1939231->f_242.f_5, uParam0);
	func_361(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	func_219((Global_1939231->f_242.f_1186 - 1));
}

int func_295()
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
	func_294(&(Global_1939231->f_242.f_14[iVar3 /*39*/]));
	return iVar3;
}

void func_296(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_218(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_218(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("ib_select");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_218(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_218(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("ib_select");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_218(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_218(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_218(66), Param10.f_15);
}

struct<10> func_297(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	iVar0 = func_21();
	Var1.f_1 = func_49(iVar0, 1);
	Var1.f_2 = func_62(iVar0, 1);
	Var1 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		Var1.f_3 = { func_362(iVar0) };
	}
	return Var1;
}

struct<2> func_298(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_299(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

bool func_300(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_301(int iParam0)
{
	if (func_303(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3327)
	{
		if ((Global_39.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_39.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904613->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_303(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_304(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_305()
{
	if (!func_193())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

var func_306(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_0x32C90CDFAF40514C();
	}
	return Global_1139395[iParam0 /*34*/];
}

int func_307(int iParam0)
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
			return 705255263 /* GXTEntry: "Club Rewards" */;
		case 14:
			return -471215553 /* GXTEntry: "Club Rewards" */;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426;
		case 17:
			return -170363364;
		default:
			break;
	}
	return 0;
}

struct<4> func_308(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_230(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_336(joaat("character"), func_338(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_336(joaat("character"), func_338(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_336(joaat("character"), func_338(), -1591664384, bParam0);
}

int func_309(int iParam0)
{
	return iParam0;
}

int func_310(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_363(iParam0, 2))
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

bool func_311()
{
	return func_364(func_194(0));
}

bool func_312(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_313(int iParam0, int iParam1, bool bParam2)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_323(iParam0, iParam1);
	}
	return 1;
}

bool func_314(int iParam0, int iParam1)
{
	*iParam1 = func_365(iParam0, 1);
	return *iParam1 != 0;
}

bool func_315(int iParam0, int iParam1)
{
	*iParam1 = func_366(iParam0, 1, 0);
	return *iParam1 != 0;
}

int func_316(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_168(iParam0, 0))
	{
		return func_367(func_309(iParam0), iParam1, bParam2);
	}
	if (func_238(iParam0))
	{
		return func_323(func_239(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_36() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_368(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
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

int func_317(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_369(iVar0, 1, 0);
		if (!func_248(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_370(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_348(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34 /*2*/] == 0)
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

int func_318(int iParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_369(iVar0, 0, 1);
		if (!func_248(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_371(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_348(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 2084597891 || &Var9[iVar41 /*2*/] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41 /*2*/] == 2084597891) || (!bParam2 && &Var9[iVar41 /*2*/] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && (Var9[iVar41 /*2*/])->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = (Var9[iVar41 /*2*/])->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || (Var9[iVar41 /*2*/])->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = (Var9[iVar41 /*2*/])->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 0)
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

void func_319(int iParam0, int iParam1, var uParam2, int iParam3)
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
		uVar6 = &Var7.f_1[iVar1];
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

bool func_320(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

void func_321(int iParam0, int iParam1, var uParam2, int iParam3)
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
		uVar6 = &Var7.f_1[iVar1];
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_322(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_323(int iParam0, int iParam1)
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
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_324(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -570078785)
	{
		iVar0 = func_173(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_346(iVar0))
		{
			if (Global_1915180->f_20142)
			{
				func_373(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_372(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_173(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_345(iVar1))
		{
			if (Global_1915180->f_20142)
			{
				func_373("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_342(iParam0, iParam1, &uVar2))
	{
		return 0;
	}
	return 1;
}

int func_325(struct<17> Param0)
{
	if (!func_250(Param0.f_16))
	{
		return 0;
	}
	return 1;
}

int func_326(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_374(iParam0, iParam1))
		{
			return 0;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_375(iParam0))
		{
			return 0;
		}
		if (!func_374(iParam0, iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_327(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_375(iParam0);
	}
	return 1;
}

bool func_328(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_355(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_329(int iParam0)
{
	struct<2> Var0;

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_330(int iParam0, int iParam1, int iParam2)
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

bool func_331(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_36() == -1)
	{
		if (func_376(iParam0))
		{
			iVar1 = WEAPON::_0x865F36299079FB75(iParam0);
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

int func_332(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_168(iParam0, 0) && !func_363(func_309(iParam0), 2))
	{
		return 0;
	}
	if (func_257(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_337(iParam0, joaat("default")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_230(bParam3), iParam0);
}

int func_333(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_168(iParam0, 0) && !func_363(func_309(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_334(int* iParam0, int iParam1)
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

int func_335(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_377(iParam1, 1) && !func_378(iParam1, 1))
	{
		if (Global_1915180->f_20142)
		{
			func_373(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_171(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_346((iVar1 + func_379(iParam0, iParam2))))
		{
			if (Global_1915180->f_20142)
			{
				func_373(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_171(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_345((iVar3 + func_379(iParam0, iParam2))))
		{
			if (Global_1915180->f_20142)
			{
				func_373("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_363(func_309(iParam1), 2))
	{
		if (!func_380(func_309(iParam1), iParam3, iParam2, &uVar4))
		{
			return 0;
		}
	}
	else if (func_168(iParam1, 0))
	{
		if (!func_277(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 0))
		{
			return 0;
		}
	}
	return 1;
}

struct<4> func_336(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_168(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_230(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_337(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_338()
{
	struct<4> Var0;

	return Var0;
}

int func_339(int iParam0, struct<10> Param1, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17)
{
	if (Param1.f_9 < 1)
	{
		return 0;
	}
	if (!func_168(Param1.f_8, 0) && !func_363(func_309(Param1.f_8), 2))
	{
		return 0;
	}
	if (func_312(iParam17, 128))
	{
		if (func_329(Param1.f_8) == 0)
		{
			return 0;
		}
	}
	if (func_312(iParam17, 16))
	{
		if (!func_381(iParam0, &Param1))
		{
			return 0;
		}
	}
	return 1;
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

int func_341(int iParam0, int iParam1)
{
	if (!func_363(iParam0, 2))
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

int func_342(int iParam0, int iParam1, var uParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_251(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32 /*2*/] == 2084597891)
			{
				if (!func_345((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32 /*2*/] == 773203532)
			{
				if (!func_346((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (func_348(&(Var0[iVar32 /*2*/]), 0, 0, 1) < (Var0[iVar32 /*2*/])->f_1)
			{
				*uParam2 = { *(Var0[iVar32 /*2*/]) };
				return 0;
			}
			iVar32++;
		}
	}
	return 1;
}

int func_343(bool bParam0)
{
	if (func_36() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_230(bParam0));
}

int func_344()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

bool func_345(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_36() == 0)
	{
		return func_382(iParam0);
	}
	return iParam0 <= func_383();
}

bool func_346(int iParam0)
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

int func_347(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_308(0) };
	Var0.f_4 = func_384(iParam1);
	Var5 = { func_336(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_230(0), &Var5, 0);
	return iVar9;
}

int func_348(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_257(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_385(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_386(iParam0, 0);
	}
	if (func_337(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_230(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_387(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_230(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_349(int iParam0)
{
	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	if (func_262(iParam0, -887064662))
	{
		return 1;
	}
	return func_350(iParam0);
}

int func_350(int iParam0)
{
	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	if (func_262(iParam0, -839724752))
	{
		return 1;
	}
	return 0;
}

int func_351(int iParam0, int iParam1, int iParam2)
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

	iParam0 = func_388(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_168(iParam1, 0))
	{
		return 0;
	}
	if (!func_389(iParam0))
	{
		return 0;
	}
	iVar0 = func_390(iParam0);
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
		if (!func_391(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
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

int func_352(int iParam0, int iParam1)
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

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	if (!func_349(iParam0) && !func_350(iParam0))
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
	iVar13 = func_392(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_393(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_394(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_395(iVar15, iVar1);
			if (func_168(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_396(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_347(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_398(iVar16, func_397(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_399(iVar1);
	}
	return iVar0;
}

int func_353(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_388(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_168(iParam1, 0))
	{
		return 0;
	}
	if (!func_389(iParam0))
	{
		return 0;
	}
	iVar0 = func_390(iParam0);
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

int func_354(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_34))
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

int func_355(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_230(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_356(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

int func_357(struct<2> Param0)
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
	if (!func_292(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_292(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
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

void func_358(int iParam0)
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
	func_400(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_359(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_401(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] != 2)
	{
		if (!&Global_1275573->f_22[iVar0])
		{
			func_358(iParam0);
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
						func_359(iVar3, iParam1, 0, 1, 0, 0);
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
			func_402(&Var6, uVar4);
		}
	}
}

void func_360(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_361(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_218(91));
	if (func_403(iVar0))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar0, 1);
	}
}

struct<7> func_362(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_363(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_364(struct<2> Param0)
{
	return func_404(Param0, 5, 8);
}

int func_365(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_369(iVar0, 1, 0);
		if (!func_251(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_370(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_348(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34 /*2*/] == 0)
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

int func_366(int iParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_369(iVar0, 0, 1);
		if (!func_251(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_371(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_348(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 2084597891 || &Var9[iVar41 /*2*/] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41 /*2*/] == 2084597891) || (!bParam2 && &Var9[iVar41 /*2*/] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && (Var9[iVar41 /*2*/])->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = (Var9[iVar41 /*2*/])->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || (Var9[iVar41 /*2*/])->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = (Var9[iVar41 /*2*/])->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 0)
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

int func_367(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_363(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_36() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_405(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
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

int func_368(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

int func_369(int iParam0, bool bParam1, bool bParam2)
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

bool func_370(int iParam0)
{
	return func_329(iParam0) == 1946043663;
}

bool func_371(int iParam0)
{
	return func_329(iParam0) == -126813555;
}

int func_372(int iParam0)
{
	return (iParam0 / 100);
}

void func_373(char* sParam0)
{
	Global_1915180->f_21955 = func_406(sParam0, 10000, 0, 0, 0, 1);
}

int func_374(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 712853601, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_375(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_261(*iParam0, 0, 0, 0);
		return 1;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_261(*iParam0, 4, 0, 0);
		return 1;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_261(*iParam0, 2, 0, 0);
		return 0;
	}
	func_261(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return 1;
}

bool func_376(int iParam0)
{
	return func_257(iParam0) == joaat("weapon");
}

int func_377(int iParam0, bool bParam1)
{
	if (!func_262(iParam0, 947377998))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_262(iParam0, -1090933859))
		{
			return func_239(iParam0, 1) != 0;
		}
		if ((func_316(iParam0, -915411861, 0) || func_316(iParam0, 600942249, 0)) || func_316(iParam0, -570078785, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_378(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_407(iParam0, 1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_323(iVar0, -2141192156))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!func_342(iVar0, -2141192156, &uVar1))
		{
			return 0;
		}
	}
	return 1;
}

int func_379(int* iParam0, int iParam1)
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
				iVar0 = (iVar0 + (func_171(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_380(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_408(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (func_343(0) && !func_344());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == 2084597891 && func_345(iVar32))
			{
				Jump @209; //curOff = 131
			}
			else if (&Var0[iVar34 /*2*/] == 773203532 && func_346(iVar32))
			{
			}
			else
			{
				iVar33 = func_348(&(Var0[iVar34 /*2*/]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *(Var0[iVar34 /*2*/]) };
					return 0;
				}
			}
			iVar34++;
		}
	}
	return 1;
}

int func_381(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_123(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_123(uVar0, 8))
	{
		return 0;
	}
	else if (func_123(uVar0, 16))
	{
		return 0;
	}
	else if (func_123(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

bool func_382(int iParam0)
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

int func_383()
{
	if (func_36() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

int func_385(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_257(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_262(iParam0, 1399091007))
	{
		func_409(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_386(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_410(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_412(&Var0, func_411(0));
	}
	if (!func_413(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_414(iVar14);
	return uVar15;
}

struct<4> func_387(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_415(iParam0, bParam1, 0) };
	return func_336(iParam0, Var0, Var0.f_4, bParam1);
}

int func_388(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

int func_389(int iParam0)
{
	iParam0 = func_388(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903007[iParam0 /*43*/]))
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)
{
	iParam0 = func_388(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903007[iParam0 /*43*/];
}

int func_391(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return 0;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return 0;
	}
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return 0;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_392(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

int func_394(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0, int iParam1)
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

int func_396(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522: /* GXTEntry: "Poor Bluegill" */
		case 1006434513: /* GXTEntry: "Bluegill" */
			iVar0 = joaat("a_c_fishbluegil_01_sm");
			break;
		case 306916738: /* GXTEntry: "Bullhead Catfish" */
		case 1481288777: /* GXTEntry: "Poor Bullhead Catfish" */
			iVar0 = joaat("a_c_fishbullheadcat_01_sm");
			break;
		case -1824685471: /* GXTEntry: "Poor Chain Pickerel" */
		case 724563284: /* GXTEntry: "Chain Pickerel" */
			iVar0 = joaat("a_c_fishchainpickerel_01_sm");
			break;
		case 803930024: /* GXTEntry: "Poor Channel Catfish" */
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			iVar0 = joaat("a_c_fishchannelcatfish_01_lg");
			break;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
		case 1111663869: /* GXTEntry: "Poor Lake Sturgeon" */
			iVar0 = joaat("a_c_fishlakesturgeon_01_lg");
			break;
		case -5376850: /* GXTEntry: "Largemouth Bass" */
		case 1425358430: /* GXTEntry: "Poor Largemouth Bass" */
			iVar0 = joaat("a_c_fishlargemouthbass_01_ms");
			break;
		case 1297433586: /* GXTEntry: "Poor Longnose Gar" */
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			iVar0 = joaat("a_c_fishlongnosegar_01_lg");
			break;
		case -1538397860: /* GXTEntry: "Muskie" */
		case -293259613: /* GXTEntry: "Poor Muskie" */
			iVar0 = joaat("a_c_fishmuskie_01_lg");
			break;
		case 193037129: /* GXTEntry: "Northern Pike" */
		case 588902637: /* GXTEntry: "Poor Northern Pike" */
			iVar0 = joaat("a_c_fishnorthernpike_01_lg");
			break;
		case -861419347: /* GXTEntry: "Poor Perch" */
		case 1416872916: /* GXTEntry: "Perch" */
			iVar0 = joaat("a_c_fishperch_01_sm");
			break;
		case 357567274: /* GXTEntry: "Poor Redfin Pickerel" */
		case 1500919793: /* GXTEntry: "Redfin Pickerel" */
			iVar0 = joaat("a_c_fishredfinpickerel_01_sm");
			break;
		case 683583793: /* GXTEntry: "Poor Rock Bass" */
		case 1042542561: /* GXTEntry: "Rock Bass" */
			iVar0 = joaat("a_c_fishrockbass_01_sm");
			break;
		case -1202625002: /* GXTEntry: "Poor Smallmouth Bass" */
		case 56657913: /* GXTEntry: "Smallmouth Bass" */
			iVar0 = joaat("a_c_fishsmallmouthbass_01_ms");
			break;
		case 485620834: /* GXTEntry: "Poor Sockeye Salmon" */
		case 1570826681: /* GXTEntry: "Sockeye Salmon" */
			iVar0 = joaat("a_c_fishsalmonsockeye_01_ms");
			break;
		case 727522818: /* GXTEntry: "Poor Steelhead Trout" */
		case 785407605: /* GXTEntry: "Steelhead Trout" */
			iVar0 = joaat("a_c_fishrainbowtrout_01_ms");
			break;
		case -1457420231: /* GXTEntry: "Good Bat Carcass" */
		case 563848610: /* GXTEntry: "Poor Bat Carcass" */
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			iVar0 = joaat("a_c_bat_01");
			break;
		case -2120099592: /* GXTEntry: "Poor Blue Jay Carcass" */
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
		case 1848456619: /* GXTEntry: "Good Blue Jay Carcass" */
			iVar0 = joaat("a_c_bluejay_01");
			break;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
		case -1640704323: /* GXTEntry: "Good Bullfrog Carcass" */
		case -1134447619: /* GXTEntry: "Poor Bullfrog Carcass" */
			iVar0 = joaat("a_c_frogbull_01");
			break;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
		case 183958842: /* GXTEntry: "Good Cardinal Carcass" */
		case 1948158930: /* GXTEntry: "Poor Cardinal Carcass" */
			iVar0 = joaat("a_c_cardinal_01");
			break;
		case -1323780599: /* GXTEntry: "Poor Cedar Waxwing Carcass" */
		case -532099639: /* GXTEntry: "Good Cedar Waxwing Carcass" */
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			iVar0 = joaat("a_c_cedarwaxwing_01");
			break;
		case -1586332975: /* GXTEntry: "Poor Chipmunk Carcass" */
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
		case 1857501916: /* GXTEntry: "Good Chipmunk Carcass" */
			iVar0 = joaat("a_c_chipmunk_01");
			break;
		case -1888757291: /* GXTEntry: "Perfect Crab Carcass" */
		case 894877715: /* GXTEntry: "Good Crab Carcass" */
		case 995863399: /* GXTEntry: "Poor Crab Carcass" */
			iVar0 = joaat("a_c_crab_01");
			break;
		case -1905834457: /* GXTEntry: "Good Crow Carcass" */
		case -110353515: /* GXTEntry: "Poor Crow Carcass" */
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			iVar0 = joaat("a_c_crow_01");
			break;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
		case -610456424: /* GXTEntry: "Poor Oriole Carcass" */
		case -284151822: /* GXTEntry: "Good Oriole Carcass" */
			iVar0 = joaat("a_c_oriole_01");
			break;
		case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
		case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
		case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
			iVar0 = joaat("a_c_carolinaparakeet_01");
			break;
		case -1999212658: /* GXTEntry: "Poor Pigeon Carcass" */
		case -593435395: /* GXTEntry: "Good Pigeon Carcass" */
		case -245335326: /* GXTEntry: "Perfect Pigeon Carcass" */
			iVar0 = joaat("a_c_pigeon");
			break;
		case -1726572562: /* GXTEntry: "Good Quail Carcass" */
		case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
		case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
			iVar0 = joaat("a_c_quail_01");
			break;
		case -1909348309: /* GXTEntry: "Good Rat Carcass" */
		case -1788506246: /* GXTEntry: "Poor Rat Carcass" */
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			iVar0 = joaat("a_c_rat_01");
			break;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
		case -350704687: /* GXTEntry: "Poor Robin Carcass" */
		case 765892430: /* GXTEntry: "Good Robin Carcass" */
			iVar0 = joaat("a_c_robin_01");
			break;
		case -318217782: /* GXTEntry: "Good Songbird Carcass" */
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
		case 72307351: /* GXTEntry: "Poor Songbird Carcass" */
			iVar0 = joaat("a_c_songbird_01");
			break;
		case -1867587109: /* GXTEntry: "Good Sparrow Carcass" */
		case 182158309: /* GXTEntry: "Poor Sparrow Carcass" */
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			iVar0 = joaat("a_c_sparrow_01");
			break;
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
		case 1205453831: /* GXTEntry: "Poor Squirrel Carcass" */
		case 1815539745: /* GXTEntry: "Good Squirrel Carcass" */
			iVar0 = joaat("a_c_squirrel_01");
			break;
		case -2123600216: /* GXTEntry: "Poor Toad Carcass" */
		case -146690338: /* GXTEntry: "Good Toad Carcass" */
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			iVar0 = joaat("a_c_toad_01");
			break;
		case -1403731492: /* GXTEntry: "Good Woodpecker Carcass" */
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
		case 1496267371: /* GXTEntry: "Poor Woodpecker Carcass" */
			iVar0 = joaat("a_c_woodpecker_01");
			break;
	}
	return iVar0;
}

int func_397(int iParam0)
{
	if (func_262(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_262(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_262(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_398(int iParam0, var uParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, uParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_168(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_399(int iParam0)
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

void func_400(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_401(int iParam0, int iParam1, int iParam2)
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

void func_402(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_416(*uParam0);
}

bool func_403(int iParam0)
{
	return iParam0 != 0;
}

bool func_404(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_141(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_417(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_405(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_363(iParam0, 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_418(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

var func_406(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_407(int iParam0, bool bParam1)
{
	if (!func_377(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_239(1657716792 /* GXTEntry: "Arrow - Tracking" */, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_239(963726415, 1);
	}
	return func_239(iParam0, 1);
}

int func_408(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_363(iParam0, 2))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xB542632693D53408(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_419(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_409(int iParam0, var uParam1, var uParam2)
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

struct<14> func_410(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_411(bool bParam0)
{
	int iVar0;

	iVar0 = func_230(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_336(923904168, func_308(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_336(923904168, func_308(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_336(923904168, func_308(bParam0), -740156546, 0);
}

void func_412(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_413(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_230(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_414(int iParam0)
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

struct<5> func_415(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_308(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_257(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_336(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_411(bParam1) };
			if (iParam2 && func_420(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_188(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_188(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_421(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_422(bParam1) };
			switch (func_329(iParam0))
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
			if (func_423(iParam0, -1823706425))
			{
				Var0 = { func_336(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_423(iParam0, -1483207246))
			{
				Var0 = { func_336(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_336(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_423(iParam0, -1653629781))
			{
				Var0 = { func_336(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_328(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_423(iParam0, -1653629781))
			{
				Var0 = { func_336(1384535894, Var0, 1784584921, bParam1) };
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

void func_416(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_417(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_213(Param0);
	}
	return -1;
}

int func_418(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_419(int iParam0, int iParam1, var uParam2, int iParam3)
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
		uVar6 = &Var7.f_1[iVar1];
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_420(int iParam0, bool bParam1)
{
	if (func_329(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_424();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_421(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_425(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_422(bool bParam0)
{
	int iVar0;

	iVar0 = func_230(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_336(271701509, func_308(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_336(271701509, func_308(bParam0), 12999093, 0);
}

int func_423(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_329(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_330(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_424()
{
	return (func_249(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_115(func_336(889965687 /* GXTEntry: "Wardrobe" */, func_308(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_425(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_230(0);
	*uParam1 = { func_336(iParam0, func_411(0), iParam3, 0) };
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

