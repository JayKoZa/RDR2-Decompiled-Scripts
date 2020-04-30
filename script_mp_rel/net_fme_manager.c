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
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_11();
	}
	func_12();
}

void func_4()
{
	int iVar0;

	func_13();
	if (HUD::_TEXT_DATABASE_HAS_LOADED(func_14()))
	{
		HUD::_TEXT_DATABASE_DELETE(func_14());
	}
	Global_1185132 = 0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		*(Global_1185132->f_227[iVar0 /*26*/]) = { *(Global_1184573->f_1[iVar0 /*26*/]) };
		if (&Global_1185132->f_66[iVar0 /*20*/] > 0 && &Global_1185132->f_66[iVar0 /*20*/] < 4)
		{
			func_15(iVar0, 8);
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_SESSION())
			{
				func_16((*(*Global_1184801)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iVar0]);
			}
			func_17(Global_1185132->f_66[iVar0 /*20*/]);
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
		if (func_18() == 0)
		{
			if (func_19())
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
	func_20(Global_1184573);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1184573, 228, 39);
	func_21(NETWORK::_0xBA24095EA96DFE17(Global_1184573), 228, "g_mpFmeManagerHostData");
	if (func_22())
	{
		*Global_1185122 = { *((*Global_1184801)[func_23() /*10*/]) };
	}
	func_24(Global_1184801);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1184801, 321, 40);
	func_25(NETWORK::_0x690806BC83BC8CA2((*Global_1184801)[0 /*10*/]), 321, "g_mpFmeManagerPlayerData");
	if (!func_22())
	{
		func_26(Global_1185132);
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

void func_11()
{
	switch (&Global_1184573)
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

void func_12()
{
	switch (&Global_1185132)
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

void func_13()
{
	if (DATAFILE::_0x7907969497EA92F5(Global_1185132->f_443))
	{
		DATAFILE::_DATAFILE_UNLOAD(Global_1185132->f_443);
	}
}

char* func_14()
{
	return "FMUI";
}

void func_15(int iParam0, int iParam1)
{
	func_35(&((Global_1185132->f_66[iParam0 /*20*/])->f_6), iParam1);
}

void func_16(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_17(var uParam0)
{
	struct<20> Var0;

	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 5;
	*uParam0 = { Var0 };
}

int func_18()
{
	return Global_1572887->f_13;
}

bool func_19()
{
	return Global_1051202->f_8;
}

void func_20(var uParam0)
{
	struct<228> Var0;

	Var0.f_1 = 8;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_5 = -1;
	Var0.f_1.f_1.f_5.f_1 = -1;
	Var0.f_1.f_1.f_7 = 255;
	Var0.f_1.f_1.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	*uParam0 = { Var0 };
}

int func_21(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_22()
{
	return !Global_1572887->f_9;
}

int func_23()
{
	return Global_1099294->f_339;
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_36((*uParam0)[iVar0 /*10*/]);
		iVar0++;
	}
}

int func_25(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_26(var uParam0)
{
	struct<444> Var0;

	Var0.f_1 = 16;
	Var0.f_66 = 8;
	Var0.f_66.f_1.f_1 = -1;
	Var0.f_66.f_1.f_3 = -1;
	Var0.f_66.f_1.f_7 = -1;
	Var0.f_66.f_1.f_7.f_1 = -1;
	Var0.f_66.f_1.f_10 = 5;
	Var0.f_66.f_1.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_227 = 8;
	Var0.f_227.f_1.f_1 = -1;
	Var0.f_227.f_1.f_5 = -1;
	Var0.f_227.f_1.f_5.f_1 = -1;
	Var0.f_227.f_1.f_7 = 255;
	Var0.f_227.f_1.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_436 = 5;
	*uParam0 = { Var0 };
}

void func_27()
{
	func_37(1);
}

void func_28()
{
	if (func_38())
	{
		func_37(2);
	}
}

void func_29()
{
	if (&Global_1185132 >= 2)
	{
		func_39();
		func_40();
		func_37(3);
	}
}

void func_30()
{
	func_41();
	func_42();
	func_43();
}

void func_31()
{
	int iVar0;

	if (&Global_1184573 > 0)
	{
		if (func_22() && func_44())
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_45(iVar0, 8))
				{
					if (func_45(iVar0, 1) && !SCRIPTS::_DOES_THREAD_EXIST((Global_1185132->f_66[iVar0 /*20*/])->f_5))
					{
						func_16((*(*Global_1184801)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iVar0]);
						func_17(Global_1185132->f_66[iVar0 /*20*/]);
					}
					else
					{
						(*(*Global_1184801)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iVar0] = Global_1185122[iVar0];
					}
				}
				iVar0++;
			}
		}
		func_46();
		func_47(1);
	}
}

void func_32()
{
	if (func_38() && &Global_1184573 > 1)
	{
		func_48();
		func_47(2);
	}
}

void func_33()
{
	if (&Global_1184573 > 2)
	{
		func_47(3);
	}
}

void func_34()
{
	func_49((*Global_1184801)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/]);
	func_50();
}

void func_35(var uParam0, int iParam1)
{
	func_51(uParam0, iParam1);
}

void func_36(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		func_16((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_37(int iParam0)
{
	Global_1184573 = iParam0;
}

int func_38()
{
	int iVar0;

	if (!func_52())
	{
		return 0;
	}
	if (!func_53())
	{
		return 0;
	}
	iVar0 = 1;
	if (!func_54())
	{
		iVar0 = 0;
	}
	HUD::_TEXT_DATABASE_REQUEST(func_14());
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_14()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_39()
{
	struct<7> Var0;
	struct<7> Var7;
	struct<5> Var14;
	int iVar21;

	CLOCK::_0x86A68E84E5884951(&Var0);
	Var7 = { Var0 };
	Var7.f_3 = 0;
	Var7.f_4 = 0;
	Var7.f_5 = 0;
	Var7.f_6 = 0;
	Var14.f_4 = func_55();
	CLOCK::_0x28EEACE9B43D9597(&Var7, &Var14, &Var7);
	iVar21 = 0;
	while (!func_56(Var7, Var0) && iVar21 < 500)
	{
		CLOCK::_0x28EEACE9B43D9597(&Var7, &Var14, &Var7);
		iVar21++;
	}
	Global_1184573->f_226 = iVar21;
	Global_1184573->f_210 = { Var7 };
}

void func_40()
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;
	struct<5> Var15;
	int iVar22;

	uVar0 = Global_1901929->f_295.f_176;
	CLOCK::_0x86A68E84E5884951(&Var1);
	Var8 = { Var1 };
	Var8.f_3 = 0;
	Var8.f_4 = uVar0;
	Var8.f_5 = 0;
	Var8.f_6 = 0;
	Var15.f_4 = func_57();
	CLOCK::_0x28EEACE9B43D9597(&Var8, &Var15, &Var8);
	iVar22 = 0;
	while (!func_56(Var8, Var1) && iVar22 < 500)
	{
		CLOCK::_0x28EEACE9B43D9597(&Var8, &Var15, &Var8);
		iVar22++;
	}
	Global_1184573->f_227 = iVar22;
	Global_1184573->f_217 = { Var8 };
}

void func_41()
{
	struct<7> Var0;
	int iVar7;

	if (!func_58() || Global_1070356->f_27249)
	{
		return;
	}
	if (!func_59(2, 30))
	{
		return;
	}
	CLOCK::_0x86A68E84E5884951(&Var0);
	if (func_56(Var0, Global_1184573->f_210))
	{
		iVar7 = 0;
		if (&Global_1184573->f_1[iVar7 /*26*/] != 0 && !func_60())
		{
			func_61(0);
			return;
		}
		if (func_62(joaat("standard")))
		{
			func_39();
		}
		else
		{
			func_63(joaat("standard"));
		}
	}
}

void func_42()
{
	struct<7> Var0;
	int iVar7;

	if (!func_58() || Global_1070356->f_27249)
	{
		return;
	}
	if (!func_59(3, 30))
	{
		return;
	}
	CLOCK::_0x86A68E84E5884951(&Var0);
	if (func_56(Var0, Global_1184573->f_217))
	{
		iVar7 = 1;
		if (&Global_1184573->f_1[iVar7 /*26*/] != 0 && !func_60())
		{
			func_61(1);
			return;
		}
		if (func_62(joaat("themed")))
		{
			func_40();
		}
		else
		{
			func_63(joaat("themed"));
		}
	}
}

void func_43()
{
	if (&Global_1185132->f_436[1] >= 8)
	{
		Global_1185132->f_436[1] = 0;
	}
	func_64(&(Global_1185132->f_436[1]));
	Global_1185132->f_436[1] = &Global_1185132->f_436[1] + 1;
}

int func_44()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_4;
}

bool func_45(int iParam0, int iParam1)
{
	return func_65((Global_1185132->f_66[iParam0 /*20*/])->f_6, iParam1);
}

void func_46()
{
	Global_1185132->f_443 = DATAFILE::_0xD97D8D905F1562F2(1024887829);
}

void func_47(int iParam0)
{
	Global_1185132 = iParam0;
}

void func_48()
{
	func_66();
	func_67();
}

void func_49(var uParam0)
{
	Global_1185132->f_442 = (Global_1185132->f_442 + 1 % 30);
	if (Global_1185132->f_442 > 0)
	{
		return;
	}
	if (!func_68(uParam0->f_9, 1))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, joaat("weapon_fishingrod"), 0, 0))
		{
			func_69(&(uParam0->f_9), 1);
		}
	}
}

void func_50()
{
	if (&Global_1185132->f_436[0] >= 8)
	{
		Global_1185132->f_436[0] = 0;
	}
	func_70(&(Global_1185132->f_436[0]));
	Global_1185132->f_436[0] = &Global_1185132->f_436[0] + 1;
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_52()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

int func_53()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_5;
}

bool func_54()
{
	return DATAFILE::_0x603AC35FD4602C76(Global_1185132->f_443);
}

var func_55()
{
	var uVar0;

	uVar0 = Global_1901929->f_295.f_174;
	return uVar0;
}

int func_56(struct<7> Param0, struct<7> Param7)
{
	if (Param0 > Param7)
	{
		return 1;
	}
	else if (Param7 > Param0)
	{
		return 0;
	}
	if (Param0.f_1 > Param7.f_1)
	{
		return 1;
	}
	else if (Param7.f_1 > Param0.f_1)
	{
		return 0;
	}
	if (Param0.f_2 > Param7.f_2)
	{
		return 1;
	}
	else if (Param7.f_2 > Param0.f_2)
	{
		return 0;
	}
	if (Param0.f_3 > Param7.f_3)
	{
		return 1;
	}
	else if (Param7.f_3 > Param0.f_3)
	{
		return 0;
	}
	if (Param0.f_4 > Param7.f_4)
	{
		return 1;
	}
	else if (Param7.f_4 > Param0.f_4)
	{
		return 0;
	}
	if (Param0.f_5 > Param7.f_5)
	{
		return 1;
	}
	else if (Param7.f_5 > Param0.f_5)
	{
		return 0;
	}
	if (Param0.f_6 > Param7.f_6)
	{
		return 1;
	}
	else if (Param7.f_6 > Param0.f_6)
	{
		return 0;
	}
	return 0;
}

var func_57()
{
	var uVar0;

	uVar0 = Global_1901929->f_295.f_175;
	return uVar0;
}

int func_58()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	Global_1185132->f_436[iParam0] = &Global_1185132->f_436[iParam0] + 1;
	if (&Global_1185132->f_436[iParam0] < iParam1)
	{
		return 0;
	}
	Global_1185132->f_436[iParam0] = 0;
	return 1;
}

bool func_60()
{
	return Global_1572887->f_106.f_75 != 1;
}

void func_61(int iParam0)
{
	if (func_71() != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (func_72(iParam0) != 0)
	{
		func_73(iParam0, 6);
	}
}

bool func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar0 = func_75(func_74(iParam0));
	MISC::SET_RANDOM_SEED(iVar0);
	switch (iParam0)
	{
		case joaat("standard"):
			if (!func_76(&iVar1, &iVar2, &iVar3))
			{
				MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
				return false;
			}
			break;
		case joaat("themed"):
			if (!func_77(&iVar1, &iVar2, &iVar3))
			{
				MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
				return false;
			}
			break;
	}
	bVar4 = func_78(iVar1, PLAYER::PLAYER_ID(), iVar2, iVar3, iVar0, 0);
	MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
	if (bVar4)
	{
		switch (iParam0)
		{
			case joaat("standard"):
				Global_1184573->f_224 = iVar1;
				break;
			case joaat("themed"):
				Global_1184573->f_225 = iVar1;
				break;
		}
	}
	return bVar4;
}

void func_63(int iParam0)
{
	var uVar0;
	struct<7> Var7;
	struct<5> Var14;

	CLOCK::_0x86A68E84E5884951(&uVar0);
	Var7.f_3 = 0;
	Var7.f_4 = 0;
	Var7.f_5 = 0;
	Var7.f_6 = 0;
	Var14.f_4 = 1;
	CLOCK::_0x28EEACE9B43D9597(&uVar0, &Var14, &Var7);
	switch (iParam0)
	{
		case joaat("standard"):
			Global_1184573->f_210 = { Var7 };
			break;
		case joaat("themed"):
			Global_1184573->f_217 = { Var7 };
			break;
	}
}

void func_64(int iParam0)
{
	if (&Global_1184573->f_1[iParam0 /*26*/] == 0)
	{
		return;
	}
	switch (&Global_1184573->f_1[iParam0 /*26*/])
	{
		case 1:
			func_79(iParam0);
			break;
		case 5:
			func_80(iParam0);
			break;
		case 6:
			func_81(iParam0);
			break;
	}
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_66()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1093317127, "data/events/event(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1782115362, "locations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1574313466, "location(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 454625570, "location(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -171261332, "outro");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 670816652, "respawn");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1701407264, "ui");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -310067910, "variations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1481789088, "variation(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1739269194, "variation(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1648302374, "lobby_positions");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1950557689, "lobby_position(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -704316038, "lobby_position(id=%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 2005647695, ":ambient_blocking_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -75980337, ":award_mod_promo");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -13272314, ":disable_mount");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1576411076, ":duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -2068413581, ":enable_law");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1393462640, ":event_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -135059083, ":spec_cam_pos");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1922656805, ":spec_cam_rot");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -185561597, ":heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1378896287, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -994988323, ":alternative_mode");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1963437248, ":inner_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1220434501, ":intro_shard_primary");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -463492762, ":lobby_duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1168414437, ":lobby_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -823479386, ":max_players");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1189568052, ":min_gangs");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 948567928, ":min_players");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1755025897, ":min_players_start");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -467067774, ":relationship_type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 37194763, ":name_handle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1771940760, ":name_handle_alt");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1509074216, ":on_foot");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 2121037717, ":on_mount");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -415053522, ":outer_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 2060397848, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 221135615, ":lobby_blip_position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1777884256, ":rules_help");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1996633489, ":rules_secondary_help");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -399138777, ":script");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1434638998, ":shocking_event_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 1388840187, ":stack_size");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 915697271, ":stat_group");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -874721119, ":text_block");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1268019774, ":toast_icon");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1641329203, ":toast_icon_dict");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1102158142, ":tod_hour");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 796959411, ":tod_end_hour");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1068020191, ":tod_start_hour");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -1107031930, ":type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -605149915, ":unlock_id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, -993857789, ":unlock_level");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 511429636, ":weather");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1185132->f_443, 733859289, ":xml");
}

void func_67()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		func_82(iVar0);
		iVar0++;
	}
}

bool func_68(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_70(int iParam0)
{
	if (&Global_1184573->f_1[iParam0 /*26*/] == 0 && &Global_1185132->f_66[iParam0 /*20*/] == 0)
	{
		return;
	}
	if (!func_83(iParam0))
	{
		return;
	}
	switch (&Global_1185132->f_66[iParam0 /*20*/])
	{
		case 0:
			func_84(iParam0);
			break;
		case 1:
			func_85(iParam0);
			break;
		case 2:
			func_86(iParam0);
			break;
		case 3:
			func_87(iParam0);
			break;
		case 4:
			func_88(iParam0);
			break;
		case 5:
			func_89(iParam0);
			break;
		case 6:
			func_90(iParam0);
			break;
	}
}

int func_71()
{
	if ((!SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[4])) || !SCRIPTS::IS_THREAD_ACTIVE(&(Global_1051202->f_16[4]), false)) || !NETWORK::_0x31DAD2CD6D49546E(&(Global_1051202->f_16[4])))
	{
		return 255;
	}
	return NETWORK::_0xB4A25351D79B444C(&(Global_1051202->f_16[4]));
}

int func_72(int iParam0)
{
	return &(Global_1184573->f_1[iParam0 /*26*/]);
}

void func_73(int iParam0, int iParam1)
{
	if (&Global_1184573->f_1[iParam0 /*26*/] != iParam1)
	{
		Global_1184573->f_1[iParam0 /*26*/] = iParam1;
	}
}

struct<7> func_74(int iParam0)
{
	switch (iParam0)
	{
		case joaat("standard"):
			return Global_1184573->f_210;
		case joaat("themed"):
			return Global_1184573->f_217;
		default:
			break;
	}
	return Global_1184573->f_210;
}

int func_75(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;

	iVar0 = (Param0 * (Param0.f_1 * (Param0.f_2 * (Param0.f_3 + 1 * Param0.f_4 + 1))));
	return iVar0;
}

int func_76(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[21];
	struct<2> Var26[21];
	int iVar69;
	int iVar70;

	iVar0 = func_91();
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = (Global_1184573->f_226 % iVar0);
	iVar2 = iVar1;
	*uParam0 = func_92(iVar2);
	iVar3 = func_93(iVar2);
	if (iVar3 > -1 && func_94(*uParam0, iVar3, uParam1, uParam2))
	{
		return 1;
	}
	else if (func_95(*uParam0, uParam1, uParam2))
	{
		return 1;
	}
	iVar2 = 0;
	while (iVar2 <= 20)
	{
		*uParam0 = func_92(iVar2);
		if (*uParam0 == Global_1184573->f_224)
		{
		}
		else if (func_95(*uParam0, Var26[iVar69 /*2*/], &((Var26[iVar69 /*2*/])->f_1)))
		{
			uVar4[iVar69] = *uParam0;
			iVar69++;
		}
		iVar2++;
	}
	if (iVar69 <= 0)
	{
		return 0;
	}
	iVar70 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar69);
	if (iVar70 < 0 || iVar70 >= 21)
	{
		return 0;
	}
	*uParam0 = &uVar4[iVar70];
	*uParam1 = &Var26[iVar70 /*2*/];
	*uParam2 = (Var26[iVar70 /*2*/])->f_1;
	return 1;
}

int func_77(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[10];
	struct<2> Var15[10];
	int iVar36;
	int iVar37;

	iVar0 = func_96();
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = (Global_1184573->f_227 % iVar0);
	iVar2 = iVar1;
	*uParam0 = func_97(iVar2);
	iVar3 = func_98(iVar2);
	if (iVar3 > -1 && func_94(*uParam0, iVar3, uParam1, uParam2))
	{
		return 1;
	}
	else if (func_95(*uParam0, uParam1, uParam2))
	{
		return 1;
	}
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		*uParam0 = func_97(iVar2);
		if (*uParam0 == Global_1184573->f_225)
		{
		}
		else if (func_95(*uParam0, Var15[iVar36 /*2*/], &((Var15[iVar36 /*2*/])->f_1)))
		{
			uVar4[iVar36] = *uParam0;
			iVar36++;
		}
		iVar2++;
	}
	if (iVar36 <= 0)
	{
		return 0;
	}
	iVar37 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar36);
	if (iVar37 < 0 || iVar37 >= 10)
	{
		return 0;
	}
	*uParam0 = &uVar4[iVar37];
	*uParam1 = &Var15[iVar37 /*2*/];
	*uParam2 = (Var15[iVar37 /*2*/])->f_1;
	return 1;
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<7> Var4;
	struct<5> Var11;
	struct<7> Var18;
	struct<5> Var25;

	if (func_71() != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	iVar0 = -1;
	iVar1 = func_99(iParam0, iParam1, &iVar0);
	if (iVar1 != 0)
	{
		return 0;
	}
	iVar1 = func_100(iParam0, iParam2);
	if (iVar1 != 0)
	{
		return 0;
	}
	iVar1 = func_101(iParam3);
	if (iVar1 != 0)
	{
		return 0;
	}
	Var2 = { func_102(iParam0, iParam2, iParam3) };
	iVar1 = func_103(Var2);
	if (iVar1 == 13 && func_104(iParam0))
	{
		iParam2 = func_106(iParam0, func_105(iParam1));
		iParam3 = func_107(iParam0, iParam2);
		Var2 = { func_102(iParam0, iParam2, iParam3) };
		iVar1 = func_103(Var2);
	}
	if (iVar1 != 0)
	{
		return 0;
	}
	Global_1184573->f_1[iVar0 /*26*/] = 1;
	(Global_1184573->f_1[iVar0 /*26*/])->f_1 = iParam0;
	(Global_1184573->f_1[iVar0 /*26*/])->f_7 = iParam1;
	(Global_1184573->f_1[iVar0 /*26*/])->f_2 = iParam2;
	(Global_1184573->f_1[iVar0 /*26*/])->f_3 = iParam3;
	(Global_1184573->f_1[iVar0 /*26*/])->f_4 = iParam4;
	(Global_1184573->f_1[iVar0 /*26*/])->f_5 = { Var2 };
	CLOCK::_0x86A68E84E5884951(&Var4);
	Var11.f_4 = 3;
	CLOCK::_0x28EEACE9B43D9597(&Var4, &Var11, &Var4);
	(Global_1184573->f_1[iVar0 /*26*/])->f_12 = { Var4 };
	CLOCK::_0x86A68E84E5884951(&Var18);
	Var25.f_4 = 8;
	CLOCK::_0x28EEACE9B43D9597(&Var18, &Var25, &Var18);
	(Global_1184573->f_1[iVar0 /*26*/])->f_19 = { Var18 };
	return 1;
}

void func_79(int iParam0)
{
	bool bVar0;

	if (func_108(iParam0, 1))
	{
		if (func_109((Global_1185132->f_66[iParam0 /*20*/])->f_3) != -785841056)
		{
			func_73(iParam0, 5);
		}
		else if (func_110(iParam0, &bVar0))
		{
			if (bVar0)
			{
				func_73(iParam0, 6);
			}
			else
			{
				func_73(iParam0, 5);
			}
		}
	}
}

void func_80(int iParam0)
{
	struct<7> Var0;

	if (!func_111(iParam0, 1))
	{
		func_73(iParam0, 6);
		return;
	}
	if (func_108(iParam0, 8))
	{
		func_73(iParam0, 6);
		return;
	}
	if (!func_111(iParam0, 64))
	{
		CLOCK::_0x86A68E84E5884951(&Var0);
		if (func_56(Var0, (Global_1184573->f_1[iParam0 /*26*/])->f_19))
		{
			func_73(iParam0, 6);
		}
	}
}

void func_81(int iParam0)
{
	if (!func_111(iParam0, 1))
	{
		if (VOLUME::_0xF6A8A652A6B186CD((Global_1184573->f_1[iParam0 /*26*/])->f_9.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11((Global_1184573->f_1[iParam0 /*26*/])->f_9.f_1);
		}
		func_112(Global_1184573->f_1[iParam0 /*26*/]);
	}
}

void func_82(int iParam0)
{
	if (&Global_1185132->f_1[iParam0 /*4*/] != 0)
	{
		return;
	}
	Global_1185132->f_1[iParam0 /*4*/] = func_113(iParam0);
	if (&Global_1185132->f_1[iParam0 /*4*/] == joaat("themed"))
	{
		(Global_1185132->f_1[iParam0 /*4*/])->f_3 = func_114(iParam0);
	}
}

int func_83(int iParam0)
{
	if (func_45(iParam0, 8) && &Global_1185132->f_66[iParam0 /*20*/] < 6)
	{
		if (!func_115(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			func_116(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_117(Global_1185132->f_227[iParam0 /*26*/], iParam0);
		}
		else
		{
			(Global_1185132->f_66[iParam0 /*20*/])->f_19++;
			if ((Global_1185132->f_66[iParam0 /*20*/])->f_19 > 120)
			{
				func_118(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
				(Global_1185132->f_66[iParam0 /*20*/])->f_19 = 0;
			}
		}
		return 0;
	}
	if (func_115(iParam0, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (!func_119((Global_1184573->f_1[iParam0 /*26*/])->f_5, (Global_1185132->f_66[iParam0 /*20*/])->f_7))
		{
			return 0;
		}
		func_118(iParam0, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	if (func_120())
	{
		return 0;
	}
	return 1;
}

void func_84(int iParam0)
{
	if (&Global_1184573->f_1[iParam0 /*26*/] > 0 && &Global_1184573->f_1[iParam0 /*26*/] < 6)
	{
		func_121(iParam0, 1);
	}
}

void func_85(int iParam0)
{
	var uVar0;
	struct<5> Var3;
	struct<7> Var8;

	if (&Global_1184573->f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (!func_115(iParam0, 1, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if ((Global_1184573->f_1[iParam0 /*26*/])->f_1 != -1 && func_122((Global_1184573->f_1[iParam0 /*26*/])->f_5))
		{
			if ((func_123(&Var3, (Global_1184573->f_1[iParam0 /*26*/])->f_1) && func_124(&Var3)) && func_125(&Var3, (Global_1184573->f_1[iParam0 /*26*/])->f_2))
			{
				func_126(Var3, 2060397848, &uVar0, 1);
			}
			(Global_1185132->f_66[iParam0 /*20*/])->f_3 = (Global_1184573->f_1[iParam0 /*26*/])->f_1;
			(Global_1185132->f_66[iParam0 /*20*/])->f_7 = { (Global_1184573->f_1[iParam0 /*26*/])->f_5 };
			(Global_1185132->f_66[iParam0 /*20*/])->f_9 = (Global_1184573->f_1[iParam0 /*26*/])->f_11;
			func_116(iParam0, 1, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		}
	}
	else if (&Global_1184573->f_1[iParam0 /*26*/] > 1)
	{
		if (func_109((Global_1185132->f_66[iParam0 /*20*/])->f_3) != -785841056)
		{
			CLOCK::_0x86A68E84E5884951(&Var8);
			if (func_56(Var8, (Global_1184573->f_1[iParam0 /*26*/])->f_12))
			{
				func_121(iParam0, 6);
				return;
			}
			func_121(iParam0, 2);
		}
		else
		{
			func_15(iParam0, 1024);
			func_121(iParam0, 4);
		}
	}
}

void func_86(int iParam0)
{
	if (&Global_1184573->f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (func_45(iParam0, 1) && &Global_1184573->f_1[iParam0 /*26*/] > 2)
	{
		func_121(iParam0, 3);
	}
}

void func_87(int iParam0)
{
	if (&Global_1184573->f_1[iParam0 /*26*/] >= 6)
	{
		if (func_45(iParam0, 512))
		{
			func_127(1024);
		}
		func_121(iParam0, 6);
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST((Global_1185132->f_66[iParam0 /*20*/])->f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
	if (!func_45(iParam0, 512))
	{
		func_129(iParam0);
	}
	else if (!func_115(iParam0, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (func_130())
		{
			func_116(iParam0, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_121(iParam0, 4);
		}
	}
}

void func_88(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	struct<10> Var14;
	int iVar24;
	int iVar25;

	if (&Global_1184573->f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (func_45(iParam0, 1) && !SCRIPTS::_DOES_THREAD_EXIST((Global_1185132->f_66[iParam0 /*20*/])->f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
	iVar0 = (Global_1184573->f_1[iParam0 /*26*/])->f_1;
	if (!func_123(&Var1, iVar0))
	{
		return;
	}
	func_131(Var1, -399138777, &uVar6, 1);
	SCRIPTS::REQUEST_SCRIPT(&uVar6);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(&uVar6))
	{
		return;
	}
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_5 = 255;
	Var14.f_7 = -1;
	Var14.f_7.f_1 = -1;
	Var14.f_1 = iVar0;
	Var14 = iParam0;
	Var14.f_5 = (Global_1184573->f_1[iParam0 /*26*/])->f_7;
	Var14.f_2 = (Global_1184573->f_1[iParam0 /*26*/])->f_2;
	Var14.f_3 = (Global_1184573->f_1[iParam0 /*26*/])->f_3;
	Var14.f_4 = (Global_1184573->f_1[iParam0 /*26*/])->f_4;
	Var14.f_7 = { (Global_1185132->f_66[iParam0 /*20*/])->f_7 };
	Var14.f_9 = &Global_1185132->f_1[iVar0 /*4*/];
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var14.f_5))
	{
		Var14.f_6 = _NAMESPACE26::_0x901E0DC25080C8B9(Var14.f_5);
	}
	iVar24 = 1024;
	if (func_132(Var1, 1388840187, &iVar25, 0))
	{
		iVar24 = func_133(iVar25);
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iVar24) == 0)
	{
		return;
	}
	if (func_134(Var14.f_7, 0, 128))
	{
		return;
	}
	if (func_135((Global_1184573->f_1[iParam0 /*26*/])->f_7, (Global_1184573->f_1[iParam0 /*26*/])->f_1))
	{
		(Global_1185132->f_66[iParam0 /*20*/])->f_4 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&uVar6, &Var14, 10, iVar24);
	}
	func_121(iParam0, 5);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uVar6);
}

void func_89(int iParam0)
{
	if (&Global_1184573->f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST((Global_1185132->f_66[iParam0 /*20*/])->f_4))
	{
		func_121(iParam0, 6);
		return;
	}
	if (func_45(iParam0, 1) && !SCRIPTS::_DOES_THREAD_EXIST((Global_1185132->f_66[iParam0 /*20*/])->f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
}

void func_90(int iParam0)
{
	if (!func_115(iParam0, 8, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_116(iParam0, 8, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	if (SCRIPTS::_DOES_THREAD_EXIST((Global_1185132->f_66[iParam0 /*20*/])->f_4))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE((Global_1185132->f_66[iParam0 /*20*/])->f_4, false))
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1185132->f_66[iParam0 /*20*/])->f_4);
		}
	}
	else if (SCRIPTS::_DOES_THREAD_EXIST((Global_1185132->f_66[iParam0 /*20*/])->f_5))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE((Global_1185132->f_66[iParam0 /*20*/])->f_5, false))
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1185132->f_66[iParam0 /*20*/])->f_5);
		}
	}
	else
	{
		if (func_115(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			func_118(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		}
		if (&Global_1184573->f_1[iParam0 /*26*/] == 6 || !func_119((Global_1184573->f_1[iParam0 /*26*/])->f_5, (Global_1185132->f_66[iParam0 /*20*/])->f_7))
		{
			func_16((*(*Global_1184801)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iParam0]);
			func_17(Global_1185132->f_66[iParam0 /*20*/]);
		}
	}
}

int func_91()
{
	if (Global_1901929->f_295.f_180 == -1)
	{
		return 0;
	}
	else if (Global_1901929->f_295.f_181 == -1)
	{
		return 1;
	}
	else if (Global_1901929->f_295.f_182 == -1)
	{
		return 2;
	}
	else if (Global_1901929->f_295.f_183 == -1)
	{
		return 3;
	}
	else if (Global_1901929->f_295.f_184 == -1)
	{
		return 4;
	}
	else if (Global_1901929->f_295.f_185 == -1)
	{
		return 5;
	}
	else if (Global_1901929->f_295.f_186 == -1)
	{
		return 6;
	}
	else if (Global_1901929->f_295.f_187 == -1)
	{
		return 7;
	}
	else if (Global_1901929->f_295.f_188 == -1)
	{
		return 8;
	}
	else if (Global_1901929->f_295.f_189 == -1)
	{
		return 9;
	}
	else if (Global_1901929->f_295.f_190 == -1)
	{
		return 10;
	}
	else if (Global_1901929->f_295.f_191 == -1)
	{
		return 11;
	}
	else if (Global_1901929->f_295.f_192 == -1)
	{
		return 12;
	}
	else if (Global_1901929->f_295.f_193 == -1)
	{
		return 13;
	}
	else if (Global_1901929->f_295.f_194 == -1)
	{
		return 14;
	}
	else if (Global_1901929->f_295.f_195 == -1)
	{
		return 15;
	}
	else if (Global_1901929->f_295.f_196 == -1)
	{
		return 16;
	}
	else if (Global_1901929->f_295.f_197 == -1)
	{
		return 17;
	}
	else if (Global_1901929->f_295.f_198 == -1)
	{
		return 18;
	}
	else if (Global_1901929->f_295.f_199 == -1)
	{
		return 19;
	}
	else if (Global_1901929->f_295.f_200 == -1)
	{
		return 20;
	}
	return 21;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_180;
		case 1:
			return Global_1901929->f_295.f_181;
		case 2:
			return Global_1901929->f_295.f_182;
		case 3:
			return Global_1901929->f_295.f_183;
		case 4:
			return Global_1901929->f_295.f_184;
		case 5:
			return Global_1901929->f_295.f_185;
		case 6:
			return Global_1901929->f_295.f_186;
		case 7:
			return Global_1901929->f_295.f_187;
		case 8:
			return Global_1901929->f_295.f_188;
		case 9:
			return Global_1901929->f_295.f_189;
		case 10:
			return Global_1901929->f_295.f_190;
		case 11:
			return Global_1901929->f_295.f_191;
		case 12:
			return Global_1901929->f_295.f_192;
		case 13:
			return Global_1901929->f_295.f_193;
		case 14:
			return Global_1901929->f_295.f_194;
		case 15:
			return Global_1901929->f_295.f_195;
		case 16:
			return Global_1901929->f_295.f_196;
		case 17:
			return Global_1901929->f_295.f_197;
		case 18:
			return Global_1901929->f_295.f_198;
		case 19:
			return Global_1901929->f_295.f_199;
		case 20:
			return Global_1901929->f_295.f_200;
		default:
			break;
	}
	return -1;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_202;
		case 1:
			return Global_1901929->f_295.f_203;
		case 2:
			return Global_1901929->f_295.f_204;
		case 3:
			return Global_1901929->f_295.f_205;
		case 4:
			return Global_1901929->f_295.f_206;
		case 5:
			return Global_1901929->f_295.f_207;
		case 6:
			return Global_1901929->f_295.f_208;
		case 7:
			return Global_1901929->f_295.f_209;
		case 8:
			return Global_1901929->f_295.f_210;
		case 9:
			return Global_1901929->f_295.f_211;
		case 10:
			return Global_1901929->f_295.f_212;
		case 11:
			return Global_1901929->f_295.f_213;
		case 12:
			return Global_1901929->f_295.f_214;
		case 13:
			return Global_1901929->f_295.f_215;
		case 14:
			return Global_1901929->f_295.f_216;
		case 15:
			return Global_1901929->f_295.f_217;
		case 16:
			return Global_1901929->f_295.f_218;
		case 17:
			return Global_1901929->f_295.f_219;
		case 18:
			return Global_1901929->f_295.f_220;
		case 19:
			return Global_1901929->f_295.f_221;
		case 20:
			return Global_1901929->f_295.f_222;
		default:
			break;
	}
	return -1;
}

int func_94(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	struct<5> Var15;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;

	if (func_123(&Var0, iParam0))
	{
		Var5 = { Var0 };
		if (func_136(&Var5))
		{
			if (func_137(&Var5, iParam1))
			{
				func_132(Var5, -1378896287, uParam3, 1);
				func_132(Var5, -994988323, &iVar27, 0);
			}
		}
	}
	if (*uParam3 == 0)
	{
		return 0;
	}
	if (func_124(&Var0))
	{
		iVar21 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar23 = 0;
		while (iVar23 <= (iVar21 - 1))
		{
			Var15 = { Var0 };
			if (func_138(&Var15, iVar23))
			{
				Var5 = { Var15 };
				if (func_136(&Var5))
				{
					iVar20 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var5, Var5.f_1);
					if (iVar20 > 0)
					{
						iVar24 = 0;
						while (iVar24 <= (iVar20 - 1))
						{
							Var10 = { Var5 };
							if (func_137(&Var10, iVar24))
							{
								func_132(Var10, -1378896287, &iVar22, 1);
								iVar28 = 0;
								if (iVar27 != 0)
								{
									func_132(Var10, -994988323, &iVar28, 0);
								}
								if (iVar22 == *uParam3 || (iVar27 != 0 && iVar27 == iVar28))
								{
									iVar25++;
								}
							}
							iVar24++;
						}
					}
				}
			}
			iVar23++;
		}
		if (iVar25 == 0)
		{
			return 0;
		}
		iVar26 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar25);
		iVar25 = 0;
		iVar23 = 0;
		while (iVar23 <= (iVar21 - 1))
		{
			Var15 = { Var0 };
			if (func_138(&Var15, iVar23))
			{
				Var5 = { Var15 };
				if (func_136(&Var5))
				{
					iVar20 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var5, Var5.f_1);
					if (iVar20 > 0)
					{
						iVar24 = 0;
						while (iVar24 <= (iVar20 - 1))
						{
							Var10 = { Var5 };
							if (func_137(&Var10, iVar24))
							{
								func_132(Var10, -1378896287, &iVar22, 1);
								iVar28 = 0;
								if (iVar27 != 0)
								{
									func_132(Var10, -994988323, &iVar28, 0);
								}
								if (iVar22 == *uParam3 || (iVar27 != 0 && iVar27 == iVar28))
								{
									if (iVar25 == iVar26)
									{
										*uParam3 = iVar22;
										func_132(Var15, -1378896287, uParam2, 1);
										return 1;
									}
									iVar25++;
								}
							}
							iVar24++;
						}
					}
				}
			}
			iVar23++;
		}
	}
	return 0;
}

int func_95(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var6;
	struct<5> Var11;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	bool bVar23;

	iVar0 = -1;
	if (func_99(iParam0, PLAYER::PLAYER_ID(), &iVar0) == 0)
	{
		*uParam1 = 0;
		if (func_123(&Var1, iParam0) && func_124(&Var1))
		{
			iVar16 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			Var21 = -1;
			Var21.f_1 = -1;
			while (!bVar23)
			{
				if (iVar18 > 99)
				{
					return 0;
				}
				iVar17 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar16);
				Var6 = { Var1 };
				if (func_138(&Var6, iVar17))
				{
					func_132(Var6, -1378896287, uParam1, 1);
					if (func_100(iParam0, *uParam1) == 0 && func_136(&Var6))
					{
						iVar20 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var6, Var6.f_1);
						iVar19 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar20);
						Var11 = { Var6 };
						if (func_137(&Var11, iVar19))
						{
							func_132(Var11, -1378896287, uParam2, 1);
							if (func_101(*uParam2) == 0)
							{
								Var21 = { func_102(iParam0, *uParam1, *uParam2) };
								if (func_103(Var21) == 0)
								{
									bVar23 = true;
								}
							}
						}
					}
				}
				iVar18++;
			}
		}
	}
	return 1;
}

int func_96()
{
	if (Global_1901929->f_295.f_223 == -1)
	{
		return 0;
	}
	else if (Global_1901929->f_295.f_224 == -1)
	{
		return 1;
	}
	else if (Global_1901929->f_295.f_225 == -1)
	{
		return 2;
	}
	else if (Global_1901929->f_295.f_226 == -1)
	{
		return 3;
	}
	else if (Global_1901929->f_295.f_227 == -1)
	{
		return 4;
	}
	else if (Global_1901929->f_295.f_228 == -1)
	{
		return 5;
	}
	else if (Global_1901929->f_295.f_229 == -1)
	{
		return 6;
	}
	else if (Global_1901929->f_295.f_230 == -1)
	{
		return 7;
	}
	else if (Global_1901929->f_295.f_231 == -1)
	{
		return 8;
	}
	else if (Global_1901929->f_295.f_232 == -1)
	{
		return 9;
	}
	return 10;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_223 + 7;
		case 1:
			return Global_1901929->f_295.f_224 + 7;
		case 2:
			return Global_1901929->f_295.f_225 + 7;
		case 3:
			return Global_1901929->f_295.f_226 + 7;
		case 4:
			return Global_1901929->f_295.f_227 + 7;
		case 5:
			return Global_1901929->f_295.f_228 + 7;
		case 6:
			return Global_1901929->f_295.f_229 + 7;
		case 7:
			return Global_1901929->f_295.f_230 + 7;
		case 8:
			return Global_1901929->f_295.f_231 + 7;
		case 9:
			return Global_1901929->f_295.f_232 + 7;
		default:
			break;
	}
	return -1;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_233;
		case 1:
			return Global_1901929->f_295.f_234;
		case 2:
			return Global_1901929->f_295.f_235;
		case 3:
			return Global_1901929->f_295.f_236;
		case 4:
			return Global_1901929->f_295.f_237;
		case 5:
			return Global_1901929->f_295.f_238;
		case 6:
			return Global_1901929->f_295.f_239;
		case 7:
			return Global_1901929->f_295.f_240;
		case 8:
			return Global_1901929->f_295.f_241;
		case 9:
			return Global_1901929->f_295.f_242;
		default:
			break;
	}
	return -1;
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;

	if (iParam1 == 255)
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 2;
	}
	if (func_109(iParam0) == -785841056)
	{
		if (func_139(iParam1, 1))
		{
			return 8;
		}
		iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam1);
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
		{
			return 6;
		}
		if (!func_140(iVar0))
		{
			return 7;
		}
		iVar1 = 2;
		if (_NAMESPACE26::_0x149A2751AB66AC02(iVar0) < iVar1)
		{
			return 9;
		}
		if (func_141(iParam1, 1, 0, 1))
		{
			return 16;
		}
	}
	*iParam2 = func_142(&(Global_1185132->f_1[iParam0 /*4*/]));
	if (*iParam2 == -1)
	{
		return 11;
	}
	if ((Global_1184573->f_1[*iParam2 /*26*/])->f_1 != -1)
	{
		return 12;
	}
	iVar2 = 0;
	iVar3 = 24;
	if (func_123(&Var4, iParam0))
	{
		func_143(Var4, -1068020191, &iVar2, 0);
		func_143(Var4, 796959411, &iVar3, 0);
	}
	iVar9 = func_145(func_144());
	if (iVar2 < iVar3)
	{
		if (iVar9 < iVar2 || iVar9 >= iVar3)
		{
			return 10;
		}
	}
	else if (iVar9 >= iVar3 && iVar9 < iVar2)
	{
		return 10;
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam1 == 0)
	{
		return 3;
	}
	if (func_109(iParam0) == -785841056)
	{
		vVar0 = { func_146(iParam0, iParam1) };
		if (!func_147(vVar0) && (VOLUME::_0x769BB7626B8CDB06(vVar0, 100f, 0, 0, 0) || VOLUME::_0xAA9EE2AAFC717623(vVar0, 0, 0, 0)))
		{
			return 15;
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 == 0)
	{
		return 4;
	}
	return 0;
}

struct<2> func_102(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;
	struct<4> Var6;

	if ((((func_123(&Var0, iParam0) && func_124(&Var0)) && func_125(&Var0, iParam1)) && func_136(&Var0)) && func_148(&Var0, iParam2))
	{
		func_132(Var0, -605149915, &uVar5, 1);
		if (func_149(6, uVar5, &Var6))
		{
			return func_150(Var6.f_3, 6);
		}
	}
	return func_151();
}

int func_103(struct<2> Param0)
{
	if (!func_122(Param0))
	{
		return 5;
	}
	else if (func_152(Param0) != -1)
	{
		return 13;
	}
	else if (!func_153(Param0))
	{
		return 18;
	}
	else if (!func_154(Param0))
	{
		return 19;
	}
	else if (func_130())
	{
		return 14;
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_105(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_106(int iParam0, vector3 vParam1)
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var6;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;

	iVar0 = 0;
	if (func_123(&Var1, iParam0) && func_124(&Var1))
	{
		iVar11 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
		fVar18 = 999999.9f;
		iVar23 = 0;
		while (iVar23 <= (iVar11 - 1))
		{
			Var6 = { Var1 };
			if (func_138(&Var6, iVar23))
			{
				iVar20 = 0;
				func_132(Var6, -1378896287, &iVar20, 1);
				if (func_155(iParam0, iVar20) == -1 && func_100(iParam0, iVar20) == 0)
				{
					func_126(Var6, 2060397848, &vVar12, 1);
					if (func_147(vVar12))
					{
						fVar16 = 0f;
					}
					else
					{
						fVar16 = BUILTIN::VDIST(vParam1, vVar12);
					}
					fVar15 = func_156(iParam0, iVar20);
					fVar17 = 0f;
					if (fVar16 > fVar15)
					{
						fVar17 = (fVar17 + ((fVar16 - fVar15) * 0.01f));
					}
					uVar19 = func_157(vVar12, 0f, 0f, 0f, fVar15, fVar15, fVar15, -432403087, 1, 8);
					iVar21 = 0;
					while (iVar21 <= 31)
					{
						if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar19, iVar21))
						{
							iVar22 = PLAYER::INT_TO_PLAYERINDEX(iVar21);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22) && !_NAMESPACE26::_0x9BE7DCB22D32CCBE(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), iVar22))
							{
								fVar17 = (fVar17 + 1f);
							}
						}
						iVar21++;
					}
					if (fVar17 < fVar18)
					{
						fVar18 = fVar17;
						iVar0 = iVar20;
					}
				}
			}
			iVar23++;
		}
	}
	return iVar0;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	if (((func_123(&Var1, iParam0) && func_124(&Var1)) && func_125(&Var1, iParam1)) && func_136(&Var1))
	{
		iVar6 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
		iVar7 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar6);
		if (func_137(&Var1, iVar7))
		{
			func_132(Var1, -1378896287, &iVar0, 1);
		}
	}
	return iVar0;
}

int func_108(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && !func_65((*Global_1184801)[iVar0 /*10*/][iParam0], iParam1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_109(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1185132->f_1[iParam0 /*4*/]);
}

int func_110(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<8> Var3;

	vVar0 = { func_146((Global_1184573->f_1[iParam0 /*26*/])->f_1, (Global_1184573->f_1[iParam0 /*26*/])->f_2) };
	if (func_147(vVar0))
	{
		return 1;
	}
	if (!VOLUME::_0xA4A4359320345B34((Global_1184573->f_1[iParam0 /*26*/])->f_9))
	{
		if (VOLUME::_0x397769175A7DBB30(vVar0, 100f, 0, 0, MISC::GET_HASH_KEY("NET_TRAIN")))
		{
			*uParam1 = 1;
			return 1;
		}
		Var3 = { vVar0 };
		Var3.f_4 = 100f;
		Var3.f_6 = MISC::GET_HASH_KEY("NET_FME_MANAGER");
		Var3.f_7 = (Global_1184573->f_1[iParam0 /*26*/])->f_4;
		Var3.f_5 = 129;
		(Global_1184573->f_1[iParam0 /*26*/])->f_9 = VOLUME::_0x183C0B6CFEFFCAE4(&Var3);
	}
	switch (VOLUME::_0xB33A604345F58202((Global_1184573->f_1[iParam0 /*26*/])->f_9))
	{
		case 3:
			(Global_1184573->f_1[iParam0 /*26*/])->f_9.f_1 = VOLUME::_0x351D71B8B72B858B((Global_1184573->f_1[iParam0 /*26*/])->f_9);
			return 1;
		case 4:
			*uParam1 = 1;
			(Global_1184573->f_1[iParam0 /*26*/])->f_9 = 0;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_65((*Global_1184801)[iVar0 /*10*/][iParam0], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_112(var uParam0)
{
	struct<26> Var0;

	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_7 = 255;
	*uParam0 = { Var0 };
}

int func_113(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_123(&Var1, iParam0))
	{
		func_132(Var1, -1107031930, &iVar0, 1);
	}
	return iVar0;
}

int func_114(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 4;
	if (func_123(&Var1, iParam0))
	{
		func_132(Var1, -993857789, &iVar0, 0);
	}
	return iVar0;
}

bool func_115(int iParam0, int iParam1, int iParam2)
{
	return func_65((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

void func_116(int iParam0, int iParam1, int iParam2)
{
	func_35((*(*Global_1184801)[iParam2 /*10*/])[iParam0], iParam1);
}

void func_117(var uParam0, int iParam1)
{
	struct<12> Var0;

	if (func_71() == PLAYER::PLAYER_ID())
	{
		func_158(uParam0, iParam1, PLAYER::PLAYER_ID());
	}
	else
	{
		Var0.f_5 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11.f_1 = -1;
		Var0.f_11.f_5 = -1;
		Var0.f_11.f_5.f_1 = -1;
		Var0.f_11.f_7 = 255;
		Var0.f_4 = 2;
		Var0.f_11 = { *uParam0 };
		Var0.f_9 = iParam1;
		func_160(&Var0, func_159(0, 8));
	}
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	func_161((*(*Global_1184801)[iParam2 /*10*/])[iParam0], iParam1);
}

bool func_119(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

int func_120()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_45(iVar0, 8))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_121(int iParam0, int iParam1)
{
	if (&Global_1185132->f_66[iParam0 /*20*/] != iParam1)
	{
		Global_1185132->f_66[iParam0 /*20*/] = iParam1;
	}
}

int func_122(struct<2> Param0)
{
	if (!func_162(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_163(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_123(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1185132->f_443))
	{
		return false;
	}
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_164(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_124(var uParam0)
{
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1782115362;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_125(var uParam0, int iParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_126(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

void func_127(int iParam0)
{
	func_69(&(Global_1572887->f_106.f_16), iParam0);
}

void func_128(int iParam0)
{
	if (!func_115(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && func_45(iParam0, 32))
	{
		func_116(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_45(iParam0, 512))
	{
		return;
	}
	if (!func_45(iParam0, 32))
	{
		return;
	}
	if (func_60())
	{
		func_15(iParam0, 512);
		func_15(iParam0, 1024);
		return;
	}
	if (func_130())
	{
		func_15(iParam0, 512);
		func_15(iParam0, 1024);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		return;
	}
	iVar1 = _NAMESPACE26::_0x149A2751AB66AC02(iVar0);
	if (iVar1 == 1)
	{
		func_165(iParam0);
	}
	else
	{
		iVar2 = func_166(iParam0, 64, iVar0);
		if (iVar2 == iVar1)
		{
			if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				func_165(iParam0);
			}
		}
		else if (!func_167(&((Global_1185132->f_66[iParam0 /*20*/])->f_16)))
		{
			func_168(&((Global_1185132->f_66[iParam0 /*20*/])->f_16), 1);
		}
		else if (func_169(&((Global_1185132->f_66[iParam0 /*20*/])->f_16)) > 15000)
		{
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				iVar3 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) || !func_115(iParam0, 64, iVar3))
				{
					func_170(1);
				}
			}
			else
			{
				iVar5 = 0;
				iVar5 = 0;
				while (iVar5 <= 31)
				{
					iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
					if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4) && iVar4 != PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(iVar0, iVar4)) && !func_115(iParam0, 64, iVar5))
					{
						func_171(iVar4, 0, 120);
					}
					iVar5++;
				}
			}
		}
	}
}

bool func_130()
{
	return func_68(Global_1572887->f_7, 1);
}

int func_131(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
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

int func_133(int iParam0)
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

int func_134(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_122(*Global_1051163) && !func_119(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_172(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_173(iParam3, 255))
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
	if (func_174())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_122(*Global_1051163))
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

int func_135(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 12:
		case 13:
		case 14:
			return Global_1275573->f_15 == _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
		default:
			break;
	}
	return 1;
}

bool func_136(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_137(var uParam0, int iParam1)
{
	uParam0->f_2 = 1481789088;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_138(var uParam0, int iParam1)
{
	uParam0->f_2 = 1574313466;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_139(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if ((Global_1184573->f_1[iVar1 /*26*/])->f_1 != -1 && func_115(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1185132->f_66[iVar1 /*20*/] >= 2)
					{
						return 1;
					}
				}
				else if (&Global_1185132->f_66[iVar1 /*20*/] >= 5)
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<10> Var9;
	int iVar19;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		else
		{
			Var2 = { func_175(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return 1;
				}
				iVar19++;
			}
		}
	}
	return 0;
}

int func_141(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_176(bParam1, bParam2, bParam3);
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

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case joaat("standard"):
		case 1038512660:
			iVar0 = 0;
			iVar1 = 0;
			break;
		case joaat("themed"):
			iVar0 = 1;
			iVar1 = 1;
			break;
		case -785841056:
			iVar0 = 2;
			iVar1 = 7;
			break;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (&Global_1184573->f_1[iVar2 /*26*/] == 0)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_143(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_144()
{
	return &Global_1902689;
}

int func_145(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

Vector3 func_146(int iParam0, int iParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_123(&Var3, iParam0) && func_124(&Var3)) && func_125(&Var3, iParam1))
	{
		func_126(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

int func_147(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_148(var uParam0, int iParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_149(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_177(iParam0))
	{
		return 0;
	}
	if (func_178(iParam0, uParam1, &uVar0))
	{
		func_179(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

struct<2> func_150(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_180(iParam0, &(Global_1070356->f_634), func_163(iParam1));
			break;
		case 3:
			Var0.f_1 = func_180(iParam0, &(Global_1070356->f_634.f_602), func_163(iParam1));
			break;
		case 4:
			Var0.f_1 = func_180(iParam0, &(Global_1070356->f_634.f_2104), func_163(iParam1));
			break;
		case 5:
			Var0.f_1 = func_180(iParam0, &(Global_1070356->f_634.f_12606), func_163(iParam1));
			break;
		case 6:
			Var0.f_1 = func_180(iParam0, &(Global_1070356->f_634.f_12908), func_163(iParam1));
			break;
		case 7:
			Var0.f_1 = func_180(iParam0, &(Global_1070356->f_634.f_15910), func_163(iParam1));
			break;
		case 8:
			Var0.f_1 = func_180(iParam0, &(Global_1070356->f_634.f_15981), func_163(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_151();
	}
	return Var0;
}

struct<2> func_151()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_152(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_119((Global_1184573->f_1[iVar0 /*26*/])->f_5, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_153(struct<2> Param0)
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(func_181(Param0));
}

bool func_154(struct<2> Param0)
{
	return UNLOCK::_UNLOCK_IS_VISIBLE(func_181(Param0));
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if ((Global_1184573->f_1[iVar0 /*26*/])->f_1 == iParam0 && (Global_1184573->f_1[iVar0 /*26*/])->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_156(int iParam0, int iParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = 200f;
	if ((func_123(&Var1, iParam0) && func_124(&Var1)) && func_125(&Var1, iParam1))
	{
		func_182(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

var func_157(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_183() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_184());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_184());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_184());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_185(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_186(iVar2))
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
				if (iVar9 & 8192 != 0 && func_187(iVar2) != 1)
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
					if (!func_188(iVar10))
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

void func_158(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_71() != PLAYER::PLAYER_ID())
	{
		return;
	}
	iVar0 = func_152(uParam0->f_5);
	if (iVar0 != -1)
	{
		func_189(uParam0, iVar0, iParam1, iParam2);
		return;
	}
	iVar0 = func_142(func_109(uParam0->f_1));
	if (iVar0 != -1)
	{
		*(Global_1184573->f_1[iVar0 /*26*/]) = { *uParam0 };
		func_189(uParam0, iVar0, iParam1, iParam2);
	}
	else
	{
		func_189(uParam0, -1, iParam1, iParam2);
	}
}

var func_159(int iParam0, int iParam1)
{
	return func_157(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_160(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 26;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 47, 5, &uParam1);
	func_190(uParam0);
}

void func_161(var uParam0, int iParam1)
{
	func_191(uParam0, iParam1);
}

int func_162(int iParam0)
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

int func_163(int iParam0)
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

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 12:
			return -596286663;
		case 13:
			return 923956646;
		case 14:
			return 1459450644;
		case 15:
			return -2071675432;
		case 7:
			return -552339597;
		case 9:
			return 2144670272;
		case 8:
			return 996459079;
		case 10:
			return 1996177174;
		case 11:
			return -1702168032;
		default:
			break;
	}
	return 0;
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_45(iParam0, 512))
	{
		iVar0 = func_192((Global_1185132->f_66[iParam0 /*20*/])->f_3, (Global_1184573->f_1[iParam0 /*26*/])->f_3);
		iVar1 = func_193(iVar0);
		if (func_194(3, 32, 0, iVar1, (Global_1185132->f_66[iParam0 /*20*/])->f_7, 268435458, -1, 0, 0, 0))
		{
			if (func_167(&((Global_1185132->f_66[iParam0 /*20*/])->f_16)))
			{
				func_195(&((Global_1185132->f_66[iParam0 /*20*/])->f_16));
			}
		}
	}
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam2))
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(iParam2, iVar0)) && func_65((*Global_1184801)[iVar2 /*10*/][iParam0], iParam1))
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_167(var uParam0)
{
	return func_196(*uParam0, 1);
}

void func_168(var uParam0, bool bParam1)
{
	if (bParam1 || !func_167(uParam0))
	{
		func_197(uParam0);
	}
}

int func_169(var uParam0)
{
	if (!func_167(uParam0))
	{
		return 0;
	}
	if (func_198(uParam0))
	{
		return uParam0->f_2;
	}
	return func_199(uParam0->f_1);
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_69(&(Global_1182289->f_3), 32);
		func_69(&(Global_1182289->f_4), 12);
		Global_1182289->f_496 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_69(&(Global_1182289->f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1182289->f_5[5] = 0;
		func_69(Global_1182289->f_5[5], 1);
	}
	Global_1182289->f_5[3] = 0;
	func_69(Global_1182289->f_5[3], 1);
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		func_69(Global_1182289->f_5[3], 6);
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar1))
	{
		func_69(Global_1182289->f_5[3], 6);
		return;
	}
	_NAMESPACE26::_0x0A04A07BC3074EDB(iParam0);
}

int func_171(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (func_140(iVar1))
	{
		if (bParam1)
		{
			Var2 = { func_175(iParam0) };
			POSSE::_0xC08AFF658B2E51DA(&iVar9);
			if (func_200(iVar9, Var2))
			{
				bVar0 = true;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		_NAMESPACE26::_0xCD9E2D9BC52FD80F(iParam0, iParam2);
	}
	return 1;
}

bool func_172(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_173(int iParam0, int iParam1)
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

int func_174()
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
	if (!func_122(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<7> func_175(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
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

int func_177(int iParam0)
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

bool func_178(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_201(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_179(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_202(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_203(iVar0);
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
			uParam2->f_5 = func_204(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_205(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_206(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_207(iVar0);
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

int func_180(int iParam0, var uParam1, int iParam2)
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

int func_181(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_208(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_182(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_183()
{
	return Global_1051202->f_12;
}

char* func_184()
{
	return "unnamed";
}

int func_185(int iParam0)
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

int func_186(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_209(35, iParam0);
}

int func_187(int iParam0)
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

bool func_188(int iParam0)
{
	if (func_210(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_211(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<12> Var0;
	var uVar47;

	if (iParam3 == PLAYER::PLAYER_ID())
	{
		func_212(uParam0, iParam1, iParam2);
	}
	else
	{
		Var0.f_5 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11.f_1 = -1;
		Var0.f_11.f_5 = -1;
		Var0.f_11.f_5.f_1 = -1;
		Var0.f_11.f_7 = 255;
		Var0.f_4 = 3;
		Var0.f_11 = { *uParam0 };
		Var0.f_10 = iParam1;
		Var0.f_9 = iParam2;
		SCRIPTS::_0x31010318BA9897AC(&uVar47, iParam3);
		func_160(&Var0, uVar47);
	}
}

void func_190(var uParam0)
{
	if (uParam0->f_1 != 255)
	{
	}
	if (uParam0->f_11.f_7 != 255)
	{
	}
	if (uParam0->f_37 != 255)
	{
	}
}

void func_191(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_192(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 28;
	if ((func_123(&Var1, iParam0) && func_136(&Var1)) && func_148(&Var1, iParam1))
	{
		func_143(Var1, -823479386, &iVar0, 1);
	}
	return iVar0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 32;
		case 12:
			return 34;
		case 16:
			return 36;
		case 20:
			return 38;
		case 28:
			return 42;
		default:
			break;
	}
	return 42;
}

int func_194(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	struct<7> Var0;
	char cVar57[64];
	struct<56> Var65;

	if (!func_213(iParam2, iParam3))
	{
		return 0;
	}
	if (func_60() && Global_1572887->f_106.f_75 != 8)
	{
		return 0;
	}
	if (!func_214(Global_1275573->f_10))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_215(&Var0);
	func_216(iParam2, iParam3, iParam7, 1);
	func_217(Param4, 1);
	func_218(iParam6);
	func_219(iParam9);
	func_220(iParam10, 1);
	if ((func_122(Param4) && !func_221()) && &Global_1199546 == -1)
	{
		func_222(Param4);
	}
	NETWORK::_0x0AE241A4A9ADEEEC(1);
	if (iParam2 != 2)
	{
		func_223();
	}
	if (func_221())
	{
		func_224(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_225(268435456))
		{
			if (!UIAPPS::_IS_APP_ACTIVE(1433015236))
			{
				func_226(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			func_227(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_228(&(Var65.f_37), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_229(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_231(func_230(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_133, &cVar57);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_135, MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_136);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_137);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_138);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_139);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_140);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_141);
	}
	if ((!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && func_232(255, 0)) && !bParam8)
	{
		func_233("NM_MATCHMAKING_WARNING");
	}
	func_234(9);
	return 1;
}

void func_195(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_196(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_197(var uParam0)
{
	func_235(uParam0, 0);
}

bool func_198(var uParam0)
{
	return func_196(*uParam0, 2);
}

int func_199(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_200(int iParam0, struct<7> Param1)
{
	struct<28> Var0;
	struct<7> Var118;
	bool bVar125;
	int iVar126;

	Var0.f_27 = 10;
	if (iParam0 == 0 || !POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		return 0;
	}
	Var118 = { func_236() };
	if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_19), &Var118))
	{
		return 0;
	}
	if (!func_237(Param1))
	{
		return 0;
	}
	iVar126 = 0;
	while (iVar126 <= (Var0.f_26 - 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var0.f_27[iVar126 /*9*/], &Param1))
		{
			bVar125 = true;
		}
		else
		{
			iVar126++;
		}
	}
	if (!bVar125)
	{
		return 0;
	}
	if (POSSE::_0xC08EFF658B2E51DB(iParam0, &Param1))
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
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

int func_202(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_238(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_203(int iParam0)
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

int func_204(int iParam0)
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

int func_205(int iParam0)
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

int func_206(int iParam0)
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

int func_207(int iParam0)
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

int func_208(struct<2> Param0, var uParam2)
{
	if (!func_122(Param0))
	{
		return 0;
	}
	func_239(uParam2);
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

int func_209(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_240(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_23())
	{
		return func_240(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_240(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_210(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_211(int iParam0)
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
		func_241(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_242(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_212(var uParam0, int iParam1, int iParam2)
{
	func_243(iParam2, 8);
	func_118(iParam2, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	(Global_1185132->f_66[iParam2 /*20*/])->f_19 = 0;
	if (iParam1 == -1)
	{
		func_118(iParam2, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		func_121(iParam2, 6);
	}
	else if (!func_119(uParam0->f_5, (Global_1185132->f_227[iParam2 /*26*/])->f_5))
	{
		func_118(iParam2, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		func_121(iParam2, 6);
	}
	else
	{
		(*(*Global_1184801)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iParam1] = Global_1185122[iParam2];
		if (iParam1 != iParam2)
		{
			*(Global_1185132->f_66[iParam1 /*20*/]) = { *(Global_1185132->f_66[iParam2 /*20*/]) };
			func_16((*(*Global_1184801)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iParam2]);
			func_17(Global_1185132->f_66[iParam2 /*20*/]);
		}
		func_116(iParam1, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
}

bool func_213(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

int func_214(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && !_NAMESPACE26::_0x424B17A7DC5C90BC(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_215(var uParam0)
{
	MISC::_COPY_MEMORY(&(Global_1572887->f_106.f_17), uParam0, 57);
}

void func_216(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_244();
	}
}

void func_217(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_244();
	}
}

void func_218(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_219(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_220(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_244();
	}
}

int func_221()
{
	if (func_230() != 0)
	{
		return 0;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return 0;
	}
	return 1;
}

int func_222(struct<2> Param0)
{
	if (func_245())
	{
		return 0;
	}
	if (!func_122(Param0))
	{
		return 0;
	}
	*Global_1051163 = { Param0 };
	return 1;
}

void func_223()
{
	((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_15.f_9 = 0;
}

void func_224(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_135);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_136);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_137);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_138);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_139);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_140);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_141);
	iVar0 = func_246(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_247(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_248(iVar0);
	Var3 = { func_249(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_133, MISC::_CREATE_VAR_STRING(2, &Var3));
}

bool func_225(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

int func_226(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_250();
	}
	if (!func_251(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_252(iParam0);
	Global_1896726->f_386 = 1;
	Global_1896726->f_387 = bParam1;
	return 1;
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_253(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_254(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_27), {*(Global_265331->f_4[iVar0 /*51*/])}, 3);
	uParam0->f_37 = { (Global_265331->f_4[iVar0 /*51*/])->f_7 };
	uParam0->f_45 = (Global_265331->f_4[iVar0 /*51*/])->f_22;
	uParam0->f_46 = (Global_265331->f_4[iVar0 /*51*/])->f_30;
	uParam0->f_16 = (Global_265331->f_4[iVar0 /*51*/])->f_28;
	uParam0->f_17 = &Global_265331->f_63755[iVar0 /*8*/];
	uParam0->f_61 = { (Global_265331->f_4[iVar0 /*51*/])->f_24 };
	uParam0->f_30 = (Global_265331->f_4[iVar0 /*51*/])->f_34;
	uParam0->f_32 = (Global_265331->f_4[iVar0 /*51*/])->f_32;
	uParam0->f_33 = (Global_265331->f_4[iVar0 /*51*/])->f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = (Global_265331->f_4[iVar0 /*51*/])->f_29;
	uParam0->f_21.f_3 = (Global_265331->f_4[iVar0 /*51*/])->f_31;
	uParam0->f_26 = (Global_265331->f_4[iVar0 /*51*/])->f_31;
	uParam0->f_34 = (Global_265331->f_4[iVar0 /*51*/])->f_40;
	uParam0->f_1 = { (Global_265331->f_4[iVar0 /*51*/])->f_15 };
	MemCopy(&(uParam0->f_8), {(Global_265331->f_4[iVar0 /*51*/])->f_4}, 8);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_255(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_256(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_257(&(Global_265331->f_63755[iVar0 /*8*/]));
	vVar2 = { func_258(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_259(iVar1) };
	}
	else if (func_260(uParam0->f_17))
	{
		uParam0->f_53 = { func_262(func_261(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_263(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_264(uParam0->f_16) };
		if (!func_122(uParam0->f_53))
		{
			uParam0->f_53 = { func_266(func_265(uParam0->f_21.f_2)) };
		}
	}
	func_267(uParam0);
	func_253(uParam0, 4194304);
	return 1;
}

char* func_228(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_268(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_229(int iParam0)
{
	int iVar0;

	iVar0 = func_269(iParam0);
	if (iVar0 == &Global_265308->f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == &Global_265308->f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == &Global_265308->f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == &Global_265308->f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == &Global_265308->f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == &Global_265308->f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == &Global_265308->f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == &Global_265308->f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == &Global_265308->f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == &Global_265308->f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == &Global_265308->f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == &Global_265308->f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == &Global_265308->f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == &Global_265308->f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == &Global_265308->f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_230()
{
	return Global_1572887->f_106;
}

char* func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

int func_232(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_23();
	}
	else if (iParam0 == func_23())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1275573->f_14;
		}
	}
	if (!bVar0)
	{
		if (!&Global_1275573->f_22[iParam0])
		{
			return 0;
		}
		if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iParam0])))
		{
			return 0;
		}
	}
	if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(&(Global_1275573->f_154[iParam0]))) <= 1)
	{
		return 0;
	}
	return 1;
}

var func_233(char* sParam0)
{
	char* sVar0;
	var uVar1;

	sVar0 = MISC::_CREATE_VAR_STRING(2, sParam0);
	uVar1 = func_270(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_234(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

void func_235(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_271(uParam0, 1);
	func_272(uParam0, 2);
	uParam0->f_2 = 0;
}

struct<7> func_236()
{
	struct<7> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

bool func_237(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

int func_238(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_273(iParam0, uParam1, &uVar0))
	{
		func_274(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_239(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_240(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

void func_241(int iParam0)
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
	func_242(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_242(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

void func_243(int iParam0, int iParam1)
{
	func_161(&((Global_1185132->f_66[iParam0 /*20*/])->f_6), iParam1);
}

void func_244()
{
	int iVar0;

	if (func_18() == -1)
	{
		return;
	}
	iVar0 = &Global_1275573;
	if (func_68(Global_1572887->f_7, 1))
	{
		func_69(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 4);
	}
	else
	{
		func_275(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 4);
	}
	((*Global_1055966)[iVar0 /*436*/])->f_153 = Global_1572887->f_106;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_1 = Global_1572887->f_106.f_9;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_2 = Global_1572887->f_106.f_10;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_3 = { Global_1572887->f_106.f_11 };
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_8 = Global_1572887->f_106.f_13;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_5 = { Global_1572887->f_342 };
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_9 = Global_1572887->f_106.f_74;
	if (func_225(1024))
	{
		func_69(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 2);
	}
	else
	{
		func_275(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 2);
	}
}

bool func_245()
{
	return func_122(*Global_1051163);
}

int func_246(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_119((Global_1185132->f_66[iVar0 /*20*/])->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_247(int iParam0)
{
	return (Global_1185132->f_66[iParam0 /*20*/])->f_3;
}

var func_248(int iParam0)
{
	return (Global_1184573->f_1[iParam0 /*26*/])->f_3;
}

struct<8> func_249(int iParam0, int iParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_123(&Var8, iParam0) && func_136(&Var8)) && func_148(&Var8, iParam1)) && func_276(&Var8))
	{
		func_131(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_250()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

int func_251(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_278(bParam2, func_277(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_252(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

void func_253(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

int func_254(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265331->f_2)
	{
		if (&Global_265331->f_63755[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if ((Global_265331->f_4[iVar0 /*51*/])->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_255(int iParam0)
{
	if (func_279(iParam0, 0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0)
{
	if (func_280(iParam0, 0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0)
{
	int iVar0;

	if (func_18() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_281(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_258(int iParam0)
{
	struct<2> Var0;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;

	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_282(&Var0))
	{
		return vVar5;
	}
	if (!func_283(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_283(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_284(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_283(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_283(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_284(&Var0, 1);
			if (!func_283(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}

struct<2> func_259(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_151();
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_1;
}

bool func_260(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_261(iParam0) != -1;
}

int func_261(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_285(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_262(int iParam0)
{
	return func_286(iParam0);
}

struct<2> func_263(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_282(&uVar0))
	{
		return func_151();
	}
	if (!func_283(&uVar0, 13, 0, 0, 1))
	{
		return func_151();
	}
	if (!func_283(&uVar0, 17, 0, 0, 1))
	{
		return func_151();
	}
	if (!func_283(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_151();
	}
	if (!func_283(&uVar0, 20, 0, 0, 1))
	{
		return func_151();
	}
	if (!func_283(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_151();
	}
	iVar5 = func_287(&uVar0);
	return func_266(iVar5);
}

struct<2> func_264(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_151();
	}
	if (!func_288(&uVar0, 7, iParam0, 76966722))
	{
		return func_151();
	}
	func_179(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_151();
	}
	return func_150(Var5.f_3, Var5.f_4);
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 1005649839 /* GXTEntry: "VS Mission" */;
		case 395262693:
			return -47596571 /* GXTEntry: "Deathmatch" */;
		case -933924539:
			return 921725912 /* GXTEntry: "Race" */;
		default:
			break;
	}
	return 0;
}

struct<2> func_266(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_150(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_151();
}

void func_267(var uParam0)
{
	uParam0->f_20 = 0;
}

char* func_268(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_269(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265331->f_117321.f_6758[iVar0] == iParam0)
		{
			return &(Global_265331->f_117321.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

var func_270(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_271(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_272(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_273(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_201(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_274(var uParam0, int iParam1, var uParam2)
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

void func_275(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_276(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_277()
{
	return Global_1915180->f_20141;
}

int func_278(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return 0;
	}
	iVar0 = &Global_1275573->f_154[&Global_1275573];
	iVar1 = Global_1275573->f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_34))
			{
				return 0;
			}
			if (PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1099294->f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915180->f_20136 || Global_1915180->f_21989.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_289())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1939067->f_10 || Global_1939067->f_11) || Global_1939067->f_12) || Global_1939067->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1225057->f_9330 != -1)
		{
			return 0;
		}
		if (((*Global_1122836)[iVar4 /*54*/])->f_34 & 1 != 0 && ((*Global_1122836)[iVar4 /*54*/])->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1124829->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 10 && Global_1572887->f_106.f_75 < 14)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 14)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_279(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_281(int iParam0)
{
	if (!func_290(iParam0))
	{
		return 0;
	}
	if (func_18() == -1)
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_51;
}

int func_282(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = (Global_1070356->f_26934[29 /*4*/])->f_3;
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return 1;
}

int func_283(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uVar0 = uParam0->f_1;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return 0;
	}
	return 1;
}

int func_284(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

int func_285(int iParam0)
{
	return ((*Global_1275761)[iParam0 /*37*/])->f_9;
}

struct<2> func_286(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Var0, &(((*Global_1275761)[iParam0 /*37*/])->f_6), 2);
	return Var0;
}

int func_287(var uParam0)
{
	return func_291(uParam0, 59, 1);
}

bool func_288(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1132968->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_201(iParam1);
	uParam0->f_4 = iParam2;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_289()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

bool func_290(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

var func_291(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

