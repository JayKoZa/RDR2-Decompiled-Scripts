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
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

bool func_2(bool bParam0, bool bParam1)
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

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_11();
	}
	func_12();
}

void func_4()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1196095.f_1[iVar0 /*3*/].f_2 != 0)
		{
			CREW::NETWORK_CLAN_RELEASE_EMBLEM(Global_1196095.f_1[iVar0 /*3*/]);
		}
		iVar0++;
	}
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
		if (func_13() == 0)
		{
			if (func_14())
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
	func_15(&Global_1195548);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1195548, 2, 5);
	func_16(NETWORK::_0xBA24095EA96DFE17(&Global_1195548), 2, "g_mpNetCrewHostData");
	func_17(&Global_1195550);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1195550, 545, 6);
	func_18(NETWORK::_0x690806BC83BC8CA2(&(Global_1195550[0 /*17*/])), 545, "g_mpNetCrewPlayerData");
	func_19(&Global_1196095);
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

void func_11()
{
	func_20();
}

void func_12()
{
	switch (Global_1196095)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			{
				return;
			}
			if (func_21(2))
			{
				Global_1195550[PLAYER::PLAYER_ID() /*17*/].f_15 = 1;
			}
			func_22();
			func_23();
			Global_1196095 = 1;
			break;
		case 1:
			func_24();
			break;
	}
}

int func_13()
{
	return Global_1572887.f_13;
}

bool func_14()
{
	return Global_1051252.f_8;
}

void func_15(var uParam0)
{
	struct<2> Var0;

	*uParam0 = { Var0 };
}

int func_16(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_17(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_25(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
}

int func_18(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_19(var uParam0)
{
	struct<110> Var0;

	Var0.f_1 = 32;
	*uParam0 = { Var0 };
}

void func_20()
{
	int iVar0;

	if (Global_1196095.f_108 == 0)
	{
		Global_1195548 = 0;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && Global_1195550[iVar0 /*17*/] != 0)
			{
				Global_1195548++;
			}
			iVar0++;
		}
	}
	else if (Global_1196095.f_108 < 100)
	{
		Global_1196095.f_108++;
	}
	else
	{
		Global_1196095.f_108 = 0;
	}
}

bool func_21(int iParam0)
{
	return func_26(Global_1195155.f_1, iParam0);
}

void func_22()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (Global_1195550[iVar0 /*17*/].f_9[iVar1] != Global_1195155.f_35[iVar1 /*22*/])
		{
			Global_1195550[iVar0 /*17*/].f_9[iVar1] = Global_1195155.f_35[iVar1 /*22*/];
		}
		iVar1++;
	}
}

void func_23()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_27(iVar0);
		iVar0++;
	}
}

void func_24()
{
	if (!func_28())
	{
		return;
	}
	func_29();
	func_30();
	if (func_31())
	{
		func_22();
		func_32();
	}
}

void func_25(var uParam0)
{
	struct<17> Var0;

	Var0.f_9 = 5;
	*uParam0 = { Var0 };
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_27(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam0)))
	{
		Global_1195155.f_168[iParam0 /*7*/] = 0;
		return;
	}
	Global_1195155.f_168[iParam0 /*7*/] = Global_1195550[iParam0 /*17*/];
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1195155.f_168[iParam0 /*7*/].f_1[iVar0] = Global_1195550[iParam0 /*17*/].f_9[iVar0];
		iVar0++;
	}
}

bool func_28()
{
	return (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() && CREW::NETWORK_CLAN_SERVICE_IS_VALID());
}

void func_29()
{
	struct<2> Var0;
	int iVar22;

	if (Global_1195155.f_146 != Global_1195550[PLAYER::PLAYER_ID() /*17*/])
	{
		if (Global_1195155.f_146 == 0)
		{
			Global_1195550[PLAYER::PLAYER_ID() /*17*/] = 0;
			return;
		}
		iVar22 = 0;
		while (iVar22 <= (CREW::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() - 1))
		{
			if (CREW::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Var0, iVar22) && Var0 == Global_1195155.f_146)
			{
				Global_1195550[PLAYER::PLAYER_ID() /*17*/].f_1 = { Var0.f_1 };
				Global_1195550[PLAYER::PLAYER_ID() /*17*/] = Global_1195155.f_146;
			}
			else
			{
				iVar22++;
			}
		}
	}
}

void func_30()
{
	bool bVar0;

	bVar0 = (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Global_1196095.f_109)) && Global_1195550[Global_1196095.f_109 /*17*/] != 0);
	func_33(Global_1196095.f_109, bVar0);
	func_27(Global_1196095.f_109);
	Global_1196095.f_109++;
	if (Global_1196095.f_109 >= 32)
	{
		Global_1196095.f_109 = 0;
	}
}

bool func_31()
{
	if (Global_1196095.f_107 == 0)
	{
		Global_1196095.f_107 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return true;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(Global_1196095.f_107, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 2000)
	{
		Global_1196095.f_107 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return true;
	}
	return false;
}

void func_32()
{
	int iVar0;

	if (Global_1195550[PLAYER::PLAYER_ID() /*17*/] == 0)
	{
		Global_1195550[PLAYER::PLAYER_ID() /*17*/].f_16 = 0;
	}
	else
	{
		Global_1195550[PLAYER::PLAYER_ID() /*17*/].f_16 = 0;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1195550[iVar0 /*17*/] == Global_1195550[PLAYER::PLAYER_ID() /*17*/])
			{
				Global_1195550[PLAYER::PLAYER_ID() /*17*/].f_16++;
			}
			iVar0++;
		}
	}
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_1196095.f_1[iParam0 /*3*/].f_1 == 0)
		{
			if (Global_1196095.f_1[iParam0 /*3*/].f_2 == 0)
			{
				func_34(iParam0, 1);
			}
			else if (Global_1196095.f_1[iParam0 /*3*/] != Global_1195550[iParam0 /*17*/])
			{
				func_34(iParam0, 3);
			}
		}
	}
	else if (Global_1196095.f_1[iParam0 /*3*/].f_1 == 0 && (Global_1196095.f_1[iParam0 /*3*/].f_2 != 0 || Global_1196095.f_1[iParam0 /*3*/] != 0))
	{
		func_34(iParam0, 3);
	}
	switch (Global_1196095.f_1[iParam0 /*3*/].f_1)
	{
		case 0:
			break;
		case 1:
			Global_1196095.f_1[iParam0 /*3*/] = Global_1195550[iParam0 /*17*/];
			if (CREW::NETWORK_CLAN_REQUEST_EMBLEM(Global_1196095.f_1[iParam0 /*3*/]))
			{
				func_34(iParam0, 2);
			}
			else
			{
				func_34(iParam0, 0);
			}
			break;
		case 2:
			if (func_35(iParam0))
			{
				func_34(iParam0, 0);
			}
			break;
		case 3:
			CREW::NETWORK_CLAN_RELEASE_EMBLEM(Global_1196095.f_1[iParam0 /*3*/]);
			Global_1196095.f_1[iParam0 /*3*/].f_2 = 0;
			Global_1196095.f_1[iParam0 /*3*/] = 0;
			func_34(iParam0, 0);
			break;
	}
}

void func_34(int iParam0, int iParam1)
{
	Global_1196095.f_1[iParam0 /*3*/].f_1 = iParam1;
}

bool func_35(int iParam0)
{
	struct<8> Var0;
	char* sVar8;

	if (CREW::NETWORK_CLAN_IS_EMBLEM_READY(Global_1196095.f_1[iParam0 /*3*/], &Var0))
	{
		sVar8 = func_36(Var0);
		Global_1196095.f_1[iParam0 /*3*/].f_2 = MISC::GET_HASH_KEY(sVar8);
		return true;
	}
	return false;
}

var func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

