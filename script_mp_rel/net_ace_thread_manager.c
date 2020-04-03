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
	char* sVar0;
	var uVar1;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	func_1();
	sVar0 = "net_ambient_content_evaluator";
	func_2(&uVar1);
	while (!func_3(0, 0))
	{
		if (func_4())
		{
			func_5(Global_1198382, sVar0);
		}
		else
		{
			func_6(Global_1198382, sVar0, &uVar1);
		}
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		func_6(Global_1198382, sVar0, &uVar1);
		BUILTIN::WAIT(0);
	}
	func_7();
}

void func_1()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_8();
	if (func_9())
	{
		func_7();
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
}

void func_2(var uParam0)
{
	func_10(uParam0, 0);
}

int func_3(bool bParam0, bool bParam1)
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

bool func_4()
{
	return !func_12(func_11(), 0, 0);
}

void func_5(var uParam0, char* sParam1)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sParam1, -1, true, 0))
	{
		return;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) <= 0)
	{
		return;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam1);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam1))
	{
		*uParam0 = SCRIPTS::START_NEW_SCRIPT(sParam1, 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam1);
		return;
	}
	return;
}

void func_6(var uParam0, char* sParam1, var uParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sParam1, -1, true, 0))
	{
		return;
	}
	if (func_13(uParam2, 30000))
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
		{
			SCRIPTS::_0x7DE4643157AD646C(*uParam0);
		}
		func_2(uParam2);
	}
}

void func_7()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_8()
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
			func_7();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_7();
					break;
				case 2:
					func_7();
					break;
				case 4:
					func_7();
					break;
				case 3:
					func_7();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_7();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_7();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_7();
		}
		if (func_14() == 0)
		{
			if (func_15())
			{
				func_7();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_7();
	}
	return 1;
}

int func_9()
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

void func_10(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_16() - iParam1);
	func_17(uParam0, 1);
	func_18(uParam0, 2);
	uParam0->f_2 = 0;
}

struct<2> func_11()
{
	return Global_1124790->f_5.f_3;
}

int func_12(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_19(*Global_1051163) && !func_20(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_21(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_22(iParam3, 255))
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
	if (func_23())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_19(*Global_1051163))
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

int func_13(var uParam0, int iParam1)
{
	if (!func_24(uParam0))
	{
		return 0;
	}
	if (func_25(uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	return Global_1572887->f_13;
}

bool func_15()
{
	return Global_1051202->f_8;
}

int func_16()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_19(struct<2> Param0)
{
	if (!func_26(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_27(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_20(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_21(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_22(int iParam0, int iParam1)
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

int func_23()
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
	if (!func_19(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_24(var uParam0)
{
	return func_28(*uParam0, 1);
}

int func_25(var uParam0)
{
	if (!func_24(uParam0))
	{
		func_29(uParam0, 0);
		return uParam0->f_1;
	}
	if (func_30(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_16() - uParam0->f_1);
}

int func_26(int iParam0)
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

int func_27(int iParam0)
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

bool func_28(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1 || !func_24(uParam0))
	{
		func_2(uParam0);
	}
}

bool func_30(var uParam0)
{
	return func_28(*uParam0, 2);
}

