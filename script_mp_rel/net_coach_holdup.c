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
	struct<341> Local_15 = { 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 4, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 7, 255, 255, 255, 255, 255, 255, 255, -1, -1, -1, 4 } ;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	struct<52> Local_362[32];
	struct<640> Local_2027 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, -1, 1, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 255;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2(Local_2027.f_2))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4(uScriptParam_0);
	func_5();
}

void func_1(var uParam0)
{
	func_6(32, *uParam0);
	func_7();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_15, 347, 44);
	func_8(NETWORK::_0xBA24095EA96DFE17(&Local_15), 347, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_362, 1665, 45);
	func_9(NETWORK::_0x690806BC83BC8CA2(&(Local_362[0 /*52*/])), 1665, "m_clientData");
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	func_11(uParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_12(uParam0);
	}
}

bool func_2(struct<2> Param0)
{
	if (func_13(0, 0))
	{
		return true;
	}
	else if (func_14(Param0, 1, 0))
	{
		return true;
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return true;
	}
	else if (Local_362[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/] == 4)
	{
		return true;
	}
	return false;
}

void func_3()
{
	Local_2027.f_634 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_15(&Local_15, &Local_362, &Local_2027);
	func_16(&Local_15, &Local_362, &Local_2027);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17(&Local_15, &Local_362, &Local_2027);
	}
}

void func_4(var uParam0)
{
	func_18();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_19();
	}
	func_20();
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
		if (func_21() == 0)
		{
			if (func_22())
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

int func_8(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
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

void func_11(var uParam0)
{
	int iVar0;

	Local_2027 = *uParam0;
	Local_2027.f_1 = uParam0->f_5;
	Local_2027.f_2 = { uParam0->f_7 };
	Local_2027.f_4.f_1 = func_23(Local_2027.f_2);
	Local_2027.f_10 = func_26(func_25(func_24(joaat("COACH_HOLDUP_ROBBERY")), Local_2027.f_4.f_1));
	Local_2027.f_10.f_1 = func_24(Local_2027.f_10);
	Local_2027.f_550.f_1 = TASK::_0xE1C105E6BBA48270();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Local_2027.f_202.f_30[iVar0] = 255;
		iVar0++;
	}
}

void func_12(var uParam0)
{
	Local_15.f_316 = GANG::_0x901E0DC25080C8B9(uParam0->f_9);
	if (!GANG::_0xD6F6ACF4392187FB(Local_15.f_316))
	{
		func_27(&Local_15, 7);
		return;
	}
	Local_15.f_315 = GANG::_0x149A2751AB66AC02(Local_15.f_316);
}

bool func_13(bool bParam0, bool bParam1)
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

bool func_14(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_28(Global_1051213) && !func_29(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_30(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_31(iParam3, 255))
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
	if (func_32())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_28(Global_1051213))
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

void func_15(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_33(1);
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -885048077:
				func_34(iVar0, uParam0, uParam1, uParam2);
				break;
			case -1315570756:
				func_35(iVar0, uParam0, uParam1, uParam2, bVar2);
				break;
			case -507840394:
				func_36(iVar0, uParam0, uParam1, uParam2);
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_DAMAGED"):
				func_37(iVar0, uParam0, uParam1, uParam2);
				break;
		}
		iVar0++;
	}
}

void func_16(var uParam0, var uParam1, float fParam2)
{
	if (func_38(uParam0, uParam1, fParam2))
	{
		func_39(uParam1[Local_2027.f_634 /*52*/], 16);
	}
	if (func_40(uParam1[Local_2027.f_634 /*52*/]) != 4 && func_41(uParam1[Local_2027.f_634 /*52*/], 16))
	{
		func_42(uParam1[Local_2027.f_634 /*52*/], 4);
		if (func_41(uParam1[Local_2027.f_634 /*52*/], 32) || func_41(uParam1[Local_2027.f_634 /*52*/], 64))
		{
			func_43(fParam2, uParam1);
		}
	}
	switch (func_40(uParam1[Local_2027.f_634 /*52*/]))
	{
		case 0:
			func_44(uParam0, uParam1, fParam2);
			if (func_45(fParam2) != 8)
			{
				return;
			}
			func_42(uParam1[Local_2027.f_634 /*52*/], 1);
			break;
		case 1:
			func_46(uParam0, uParam1, fParam2);
			if (!func_41(uParam1[Local_2027.f_634 /*52*/], 1) || func_47(uParam0) < 3)
			{
				return;
			}
			func_42(uParam1[Local_2027.f_634 /*52*/], 2);
			break;
		case 2:
			func_48(uParam0, uParam1, fParam2);
			if (func_47(uParam0) != 5)
			{
				return;
			}
			func_42(uParam1[Local_2027.f_634 /*52*/], 3);
			break;
		case 3:
			func_49(uParam0, uParam1, fParam2);
			break;
		case 4:
			func_50(uParam0, uParam1, fParam2);
			break;
	}
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	switch (func_47(uParam0))
	{
		case 0:
			func_51(uParam0, iParam1, bParam2);
			func_27(uParam0, 1);
			break;
		case 1:
			if (!func_52())
			{
				return;
			}
			func_27(uParam0, 2);
			break;
		case 2:
			func_53(uParam0, iParam1, bParam2);
			if (!func_54(iParam1, 1))
			{
				return;
			}
			if (!func_55(uParam0, 1))
			{
				return;
			}
			func_27(uParam0, 3);
			break;
		case 3:
			if (!func_55(uParam0, 8))
			{
				func_56(uParam0);
			}
			func_27(uParam0, 4);
			break;
		case 4:
			func_57(uParam0, iParam1, bParam2);
			if (!func_55(uParam0, 2))
			{
				return;
			}
			if (!func_55(uParam0, 4))
			{
				return;
			}
			uParam0->f_321 = bParam2->f_10.f_13;
			func_27(uParam0, 5);
			break;
		case 5:
			func_58(uParam0, iParam1, bParam2);
			if (!func_55(uParam0, 32768))
			{
				if (func_59(&Local_362, 67108864, 0))
				{
					func_60(uParam0);
				}
			}
			if (!func_61(uParam0, iParam1, bParam2))
			{
				if (!func_55(&Local_15, 536870912) && func_62())
				{
					func_63(&Local_15, 536870912);
				}
				return;
			}
			func_64(uParam0, iParam1, bParam2);
			if (Local_15.f_299 != 0 && Local_15.f_299.f_1 < 3)
			{
				return;
			}
			func_65(uParam0);
			if (!func_66(uParam0, bParam2))
			{
				return;
			}
			func_27(uParam0, 6);
			break;
		case 6:
			func_67(uParam0, iParam1, bParam2);
			break;
		case 7:
			func_68(uParam0, iParam1, bParam2);
			break;
	}
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_33(67108864))
	{
		func_69(0);
	}
	func_70();
	func_71();
	func_72(0);
	func_73();
	func_74();
	func_75();
	func_76(0);
	func_77(0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_78(&(Local_2027.f_189[iVar0]), 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_79(iVar1);
		if (func_80(iVar1, 16) && func_81(iVar1, &iVar2))
		{
			NETWORK::_0xEE5AE9956743BA20(iVar2, false);
		}
		iVar1++;
	}
	func_82(0);
	func_83();
	func_84(0);
	func_85(0);
	func_86(1);
	func_87(0);
	func_88(0, 0);
	if (CAM::DOES_CAM_EXIST(Local_2027.f_559))
	{
		CAM::DESTROY_CAM(Local_2027.f_559, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_2027.f_560))
	{
		CAM::DESTROY_CAM(Local_2027.f_560, false);
	}
	func_89();
	func_90();
	func_91(Local_2027.f_619);
	func_91(Local_2027.f_620);
	func_91(Local_2027.f_625);
	func_91(Local_2027.f_626);
	func_91(Local_2027.f_627);
	func_91(Local_2027.f_627.f_2);
	func_91(Local_2027.f_627.f_1);
	func_91(Local_2027.f_627.f_3);
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_91(Local_2027.f_621[iVar3]);
		if (func_92(iVar3, 32))
		{
			EVENT::REMOVE_SHOCKING_EVENT(Local_2027.f_29[iVar3 /*5*/].f_4);
		}
		iVar3++;
	}
	func_93(&(Local_2027.f_548));
	func_94(&(Local_2027.f_550), 1, 0);
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_95();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar0 /*12*/].f_5))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(NETWORK::_NET_TO_ANIM_SCENE(Local_15.f_16[iVar0 /*12*/].f_5));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_278[iVar1 /*2*/]))
		{
		}
		else if (func_96(iVar1, 1))
		{
			iVar3 = NETWORK::_NET_TO_PROPSET(Local_15.f_278[iVar1 /*2*/]);
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iVar3);
		}
		else
		{
			iVar2 = NETWORK::NET_TO_OBJ(Local_15.f_278[iVar1 /*2*/]);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	func_97(&Local_15);
	func_98(&Local_15, &Local_2027);
	func_99(&Local_15, &Local_2027);
	func_100(&Local_2027);
}

void func_20()
{
	if (DATAFILE::_0x7907969497EA92F5(Local_2027.f_4) && DATAFILE::_0x603AC35FD4602C76(Local_2027.f_4))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_2027.f_4);
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED(func_101()) || HUD::_0x3CF96E16265B7DC8(func_101()))
	{
		HUD::_TEXT_DATABASE_DELETE(func_101());
	}
	func_102(&Local_2027);
	func_103();
	if (func_55(&Local_15, 524288))
	{
		func_104(&Local_15);
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	func_105(Local_15.f_299);
}

int func_21()
{
	return Global_1572887.f_13;
}

bool func_22()
{
	return Global_1051252.f_8;
}

int func_23(struct<2> Param0)
{
	return func_106(Param0);
}

var func_24(int iParam0)
{
	int iVar0;

	iVar0 = func_108(0, (func_107() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_109(iVar0);
}

int func_25(int iParam0, var uParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<5> Var7;
	var uVar12;

	if (!func_110(iParam0, &Var0))
	{
		return 0;
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var7 = { Var0 };
		Var7.f_2 = 1089670230;
		Var7.f_3 = iVar6;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
		{
		}
		else
		{
			Var7.f_2 = 1649401908;
			DATAFILE::_DATAFILE_GET_HASH(&uVar12, &Var7);
			Var7.f_2 = 1196324698;
			Var7.f_3 = uParam1;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
			{
			}
			else
			{
				return uVar12;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COACH_HOLDUP_KIDNAP_INTRO"):
			return joaat("COACH_HOLDUP_KIDNAP");
		case joaat("COACH_HOLDUP_ROBBERY_INTRO"):
			return joaat("COACH_HOLDUP_ROBBERY");
		default:
			break;
	}
	return iParam0;
}

void func_27(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

bool func_28(struct<2> Param0)
{
	if (!func_111(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_112(Param0))
	{
		return false;
	}
	return true;
}

bool func_29(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_30(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_31(int iParam0, int iParam1)
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

bool func_32()
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
	if (!func_28(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_33(int iParam0)
{
	return func_113(Local_2027.f_7, iParam0);
}

void func_34(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<2> Var0;
	var uVar3;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		return;
	}
	if (!func_114(Var0.f_1, uParam1, &uVar3))
	{
		return;
	}
	if (Var0 == PLAYER::PLAYER_PED_ID())
	{
		func_115(uParam2[Local_2027.f_634 /*52*/], uParam3);
	}
}

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<25> Var0;
	var uVar32;
	int iVar33;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!func_116(Var0.f_3, bParam4))
	{
		return;
	}
	if (!func_117(Var0.f_1))
	{
		return;
	}
	if (!func_41(uParam2[Local_2027.f_634 /*52*/], 2) && func_114(Var0, uParam1, &uVar32))
	{
		func_115(uParam2[Local_2027.f_634 /*52*/], uParam3);
		return;
	}
	if (func_118(Var0, uParam1, &iVar33))
	{
		if ((Var0.f_3 && !Var0.f_24) && uParam1->f_16[iVar33 /*12*/].f_2 == joaat("PASSENGER_VIP"))
		{
			func_119(iVar33);
		}
		if (uParam1->f_16[iVar33 /*12*/].f_2 != joaat("DROPOFF_GUARD") && !func_41(uParam2[Local_2027.f_634 /*52*/], 2))
		{
			func_115(uParam2[Local_2027.f_634 /*52*/], uParam3);
		}
		if (uParam1->f_16[iVar33 /*12*/].f_2 == joaat("PASSENGER_VIP"))
		{
			if (!func_41(uParam2[Local_2027.f_634 /*52*/], 262144) && Local_15.f_321 > 1)
			{
				func_39(uParam2[Local_2027.f_634 /*52*/], 262144);
			}
		}
		else if (uParam1->f_16[iVar33 /*12*/].f_2 != joaat("DROPOFF_GUARD"))
		{
			func_39(uParam2[Local_2027.f_634 /*52*/], 524288);
		}
	}
}

void func_36(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 52:
			func_120(iParam0, uParam1, uParam2, uParam3);
			break;
	}
}

void func_37(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<2> Var0;
	var uVar9;

	if (func_41(uParam2[Local_2027.f_634 /*52*/], 2))
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!func_117(Var0.f_1))
	{
		return;
	}
	if (func_121(Var0, uParam1, &uVar9))
	{
		func_115(uParam2[Local_2027.f_634 /*52*/], uParam3);
		return;
	}
}

bool func_38(var uParam0, var uParam1, var uParam2)
{
	if (func_47(uParam0) == 6 || func_47(uParam0) == 7)
	{
		return true;
	}
	return false;
}

void func_39(var uParam0, int iParam1)
{
	func_122(&(uParam0->f_1), iParam1);
}

int func_40(var uParam0)
{
	return *uParam0;
}

bool func_41(var uParam0, int iParam1)
{
	return func_113(uParam0->f_1, iParam1);
}

void func_42(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_43(float fParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!func_41(uParam1[iVar1 /*52*/], 32) && !func_41(uParam1[iVar1 /*52*/], 64))
		{
		}
		else if (!func_123(iVar1, 0, 1))
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		iVar1++;
	}
	SCRIPTS::_0xFFDDF802279BE128(&(fParam0->f_561), &uVar0, &uVar2);
	func_124(uVar0);
}

void func_44(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;

	switch (func_45(uParam2))
	{
		case 0:
			if ((Local_15.f_315 == -1 && func_47(&Local_15) != 6) && func_47(&Local_15) != 7)
			{
				return;
			}
			if (func_125(Local_15.f_316))
			{
				func_126(2097152);
				if (GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_15.f_316)
				{
					func_127();
				}
			}
			switch (Local_2027.f_10)
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					iVar0 = 20;
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					iVar0 = 4;
					break;
				default:
					iVar0 = 0;
					break;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (func_128(iVar1))
				{
					func_129(iVar1, 0);
				}
				iVar1++;
			}
			(uParam1[Local_2027.f_634 /*52*/])->f_1 = 0;
			func_130(uParam2);
			if (func_131())
			{
				func_132(1);
			}
			func_133(uParam2, 1);
			break;
		case 1:
			if (!func_135(func_134(), &(uParam2->f_4), 600, Local_2027, 0, 0))
			{
				func_39(uParam1[Local_2027.f_634 /*52*/], 16);
				return;
			}
			if (!func_136(func_101(), 30, Local_2027, 0, 0))
			{
				func_39(uParam1[Local_2027.f_634 /*52*/], 16);
				return;
			}
			func_137(uParam2);
			func_133(uParam2, 2);
			break;
		case 2:
			func_138(uParam2);
			func_133(uParam2, 3);
			break;
		case 3:
			iVar2 = 0;
			while (iVar2 < uParam2->f_10.f_7)
			{
				func_139(iVar2, uParam2);
				iVar2++;
			}
			func_133(uParam2, 4);
			break;
		case 4:
			iVar3 = 0;
			while (iVar3 < uParam2->f_10.f_8)
			{
				func_140(&Var4);
				if (!func_141(&Local_2027, &Var4, iVar3) || !func_142(Var4))
				{
				}
				else
				{
					func_143(iVar3, uParam2);
					if (uParam2->f_45[iVar3 /*6*/] == joaat("PASSENGER_VIP"))
					{
						uParam2->f_10.f_13++;
					}
					if (func_113(uParam2->f_45[iVar3 /*6*/].f_1, 4))
					{
						uParam2->f_10.f_14++;
					}
				}
				iVar3++;
			}
			func_133(uParam2, 5);
			break;
		case 5:
			func_144(uParam2);
			func_145();
			func_146();
			func_133(uParam2, 7);
			break;
		case 6:
			if (DATAFILE::_0x603AC35FD4602C76(uParam2->f_4))
			{
				DATAFILE::_DATAFILE_UNLOAD(uParam2->f_4);
				return;
			}
			func_133(uParam2, 7);
			break;
		case 7:
			func_147(uParam2, uParam0);
			func_148();
			func_133(uParam2, 8);
			break;
		case 8:
			break;
	}
}

int func_45(var uParam0)
{
	return uParam0->f_6;
}

void func_46(var uParam0, var uParam1, var uParam2)
{
	if (func_41(uParam1[Local_2027.f_634 /*52*/], 1))
	{
		return;
	}
	if (!func_149())
	{
		return;
	}
	if (!func_55(uParam0, 1))
	{
		return;
	}
	if (Local_15.f_338 > NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false))
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_15.f_338);
	}
	if (Local_15.f_337 > NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false))
	{
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_15.f_337);
	}
	if (Local_15.f_339 > NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false))
	{
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_15.f_339);
	}
	func_39(uParam1[Local_2027.f_634 /*52*/], 1);
}

int func_47(var uParam0)
{
	return *uParam0;
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	func_39(uParam1[Local_2027.f_634 /*52*/], 4);
}

void func_49(var uParam0, var uParam1, float fParam2)
{
	func_150();
	func_151(uParam0, uParam1, fParam2);
	func_152();
	func_153(uParam0, uParam1, fParam2);
	func_154(uParam0, uParam1, fParam2);
	func_155();
	func_156(fParam2, uParam1);
	func_157(fParam2, uParam1, uParam0);
	func_158();
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	func_164(uParam0, uParam1, fParam2);
}

void func_50(var uParam0, var uParam1, float fParam2)
{
}

void func_51(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_1 = 0;
}

bool func_52()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;

	iVar0 = func_165();
	iVar1 = func_166(iVar0, Local_2027.f_4.f_1);
	if (Local_15.f_340.f_6 >= iVar1 || Local_15.f_340.f_6 >= 4)
	{
		return true;
	}
	iVar6 = Local_15.f_340.f_6;
	vVar2 = { func_167(iVar0, Local_2027.f_4.f_1, iVar6) };
	if (!func_168(iVar6, vVar2, 20f, -1743346773, &bVar5))
	{
		if (bVar5)
		{
			func_63(&Local_15, 2097152);
			func_63(&Local_15, 524288);
			func_27(&Local_15, 7);
			if (!func_33(2097152))
			{
				func_169(Local_15.f_316, Local_2027.f_2, 0);
			}
			return false;
		}
	}
	else
	{
		Local_15.f_340.f_6++;
		Local_15.f_340.f_5 = 0;
	}
	return false;
}

void func_53(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<5> Var12;
	int iVar17;

	if (func_45(uParam2) != 8)
	{
		return;
	}
	if (func_55(uParam0, 1))
	{
		return;
	}
	if (STREAMING::IS_MODEL_VALID(func_170()) && !func_171(func_170()))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_140(&Var1);
		if (!func_172(&Local_2027, &Var1, iVar0) || !func_142(Var1))
		{
		}
		else
		{
			iVar6 = func_173(uParam2, iVar0);
			if (!STREAMING::IS_MODEL_VALID(iVar6))
			{
			}
			else if (func_171(iVar6))
			{
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar9 = func_174();
	iVar7 = 0;
	while (iVar7 < iVar9)
	{
		func_140(&Var12);
		if (!func_175(&Var12, iVar7) || !func_142(Var12))
		{
		}
		else if (!func_176(Var12, 1339124518, &iVar8, 0))
		{
		}
		else
		{
			if (!func_177(Var12, 873236619, &bVar11, 0) || !bVar11)
			{
				iVar6 = iVar8;
				if (!STREAMING::IS_MODEL_VALID(iVar6))
				{
				}
				else if (func_171(iVar6))
				{
				}
				else
				{
					Jump @314; //curOff = 288
					iVar10 = iVar8;
					PROPSET::_REQUEST_PROPSET_2(iVar10);
					if (PROPSET::_HAS_PROPSET_LOADED_2(iVar10))
					{
					}
					else
					{
						return;
					}
				}
				iVar7++;
				iVar17 = 0;
				while (iVar17 < uParam2->f_10.f_8)
				{
					func_140(&Var1);
					if (!func_141(&Local_2027, &Var1, iVar7) || !func_142(Var1))
					{
					}
					else
					{
						iVar6 = func_178(uParam2, iVar17);
						if (!STREAMING::IS_MODEL_VALID(iVar6))
						{
							iVar6 = func_179(uParam2->f_45[iVar17 /*6*/]);
						}
						if ((func_171(iVar6) && func_171(func_180(uParam2->f_45[iVar17 /*6*/]))) && func_182(func_181(&Local_2027, iVar17)))
						{
						}
						else
						{
							return;
						}
					}
					iVar17++;
				}
				if (uParam2->f_10.f_14 > 0)
				{
					if (!func_171(func_183()))
					{
						return;
					}
				}
				Local_15.f_339 = func_184();
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_15.f_339);
				if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false) < Local_15.f_339)
				{
					func_39(uParam1[Local_2027.f_634 /*52*/], 16);
					func_63(&Local_15, 2097152);
					func_63(&Local_15, 524288);
					func_27(&Local_15, 7);
					if (!func_33(2097152))
					{
						func_169(Local_15.f_316, Local_2027.f_2, 0);
					}
					return;
				}
				Local_15.f_338 = func_185();
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_15.f_338);
				if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) < Local_15.f_338)
				{
					func_39(uParam1[Local_2027.f_634 /*52*/], 16);
					func_63(&Local_15, 2097152);
					func_63(&Local_15, 524288);
					func_27(&Local_15, 7);
					if (!func_33(2097152))
					{
						func_169(Local_15.f_316, Local_2027.f_2, 0);
					}
					return;
				}
				Local_15.f_337 = func_186();
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_15.f_337);
				if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false) < Local_15.f_337)
				{
					func_39(uParam1[Local_2027.f_634 /*52*/], 16);
					func_63(&Local_15, 2097152);
					func_63(&Local_15, 524288);
					func_27(&Local_15, 7);
					if (!func_33(2097152))
					{
						func_169(Local_15.f_316, Local_2027.f_2, 0);
					}
					return;
				}
				func_187();
				func_63(uParam0, 1);
			}
		}
	}
}

bool func_54(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (func_113((uParam0[iVar0 /*52*/])->f_1, iParam1))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_55(var uParam0, int iParam1)
{
	return func_113(uParam0->f_1, iParam1);
}

void func_56(var uParam0)
{
	uParam0->f_317 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_63(uParam0, 8);
}

void func_57(var uParam0, var uParam1, var uParam2)
{
	if (!func_188())
	{
		return;
	}
	if (!func_55(uParam0, 2))
	{
		if (!func_189(uParam0, uParam2))
		{
			return;
		}
		func_63(uParam0, 2);
	}
	if (func_55(uParam0, 4))
	{
		return;
	}
	if (!func_190(uParam0, uParam2))
	{
		return;
	}
	if (!func_191(uParam0))
	{
		return;
	}
	func_63(uParam0, 4);
}

void func_58(var uParam0, int iParam1, bool bParam2)
{
	func_192(uParam0, iParam1, bParam2);
	func_193(uParam0, iParam1, bParam2);
	func_194(uParam0, iParam1, bParam2);
	func_195(uParam0, iParam1, bParam2);
	func_196();
	func_197(uParam0, iParam1, bParam2);
	func_198();
}

bool func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_113((iParam0[iVar0 /*52*/])->f_1, iParam1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (bParam2 && !GANG::_0x81FB74C83C2ED69F(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_60(var uParam0)
{
	if (func_55(uParam0, 32768))
	{
		return;
	}
	uParam0->f_319 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_63(uParam0, 32768);
}

bool func_61(var uParam0, int iParam1, bool bParam2)
{
	if (func_55(&Local_15, 67108864))
	{
		return true;
	}
	if (func_55(&Local_15, 524288))
	{
		return true;
	}
	switch (func_199(bParam2))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (func_55(uParam0, 4096))
			{
				return true;
			}
			if (func_55(uParam0, 1024))
			{
				return true;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (func_55(uParam0, 16384))
			{
				return true;
			}
			break;
	}
	return func_200(uParam0, bParam2);
}

bool func_62()
{
	int iVar0;
	int iVar1;

	if (func_55(&Local_15, 67108864))
	{
		return false;
	}
	if (func_55(&Local_15, 524288))
	{
		return false;
	}
	if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Local_15.f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
			{
			}
			else if (func_201(iVar0, &Local_15, 32) || func_201(iVar0, &Local_15, 67108864))
			{
			}
			else
			{
				return false;
			}
			iVar0++;
		}
	}
	else if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!func_202(iVar1, &Local_15, 128))
			{
			}
			else if ((func_202(iVar1, &Local_15, 2) || func_202(iVar1, &Local_15, 16)) || func_202(iVar1, &Local_15, 4096))
			{
			}
			else
			{
				return false;
			}
			iVar1++;
		}
	}
	return true;
}

void func_63(var uParam0, int iParam1)
{
	func_122(&(uParam0->f_1), iParam1);
}

void func_64(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_55(uParam0, 524288))
	{
		return;
	}
	func_63(uParam0, 524288);
	if (func_200(uParam0, bParam2))
	{
		func_63(&Local_15, 64);
	}
	iVar0 = func_203(uParam0, bParam2);
	switch (iVar0)
	{
		case 1:
			func_63(uParam0, 1048576);
			break;
		case 2:
			func_63(uParam0, 2097152);
			break;
	}
	iVar0 = func_204(uParam0, bParam2);
	switch (iVar0)
	{
		case 1:
			func_63(uParam0, 4194304);
			break;
		case 2:
			func_63(uParam0, 8388608);
			break;
	}
}

void func_65(var uParam0)
{
	if (func_55(uParam0, 32))
	{
		return;
	}
	uParam0->f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_63(uParam0, 32);
}

bool func_66(var uParam0, bool bParam1)
{
	if (!func_55(uParam0, 32))
	{
		return false;
	}
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_318, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 8000;
}

void func_67(var uParam0, int iParam1, bool bParam2)
{
}

void func_68(var uParam0, int iParam1, bool bParam2)
{
}

void func_69(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar15;
	struct<2> Var19;
	struct<2> Var32;

	iVar0 = func_205();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_206(iVar1, bParam0);
		iVar1++;
	}
	if (bParam0)
	{
		func_126(67108864);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < Local_2027.f_635)
		{
			func_207();
			iVar2++;
		}
		Local_2027.f_635 = 0;
		bVar3 = (func_33(1) && !func_33(8192));
		func_208(&iVar4, &iVar5);
		if (func_33(8192) && func_33(1))
		{
			iVar7 = PLAYER::PLAYER_ID();
			iVar8 = GANG::_0x901E0DC25080C8B9(iVar7);
			iVar9 = Local_362[Local_2027.f_634 /*52*/].f_48;
			if (((GANG::_0xD6F6ACF4392187FB(iVar8) && GANG::_0x0F99F6436528A089(iVar8)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::_0x4BE6C13A45CCA8EC(iVar8))) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(GANG::_0x4BE6C13A45CCA8EC(iVar8)))
			{
				iVar10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(GANG::_0x4BE6C13A45CCA8EC(iVar8));
				if (Local_362[iVar10 /*52*/].f_48 != -1)
				{
					iVar9 = Local_362[iVar10 /*52*/].f_48;
				}
			}
			if (iVar9 != -1)
			{
				iVar6 = func_209(iVar9);
			}
		}
		else
		{
			iVar6 = func_210(&Local_15);
		}
		Var19.f_1 = 11;
		Var32.f_1 = 11;
		func_212(&uVar11, &uVar15, &Var19, &Var32, -1516819610, joaat("PVP"), func_211(255), bVar3, 1, GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), iVar4, iVar5, iVar6, Local_2027.f_2);
		func_213(67108864);
	}
}

void func_70()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			func_214(iVar0);
		}
		iVar0++;
	}
}

void func_71()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar0 /*12*/]) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_15.f_16[iVar0 /*12*/]);
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1) == 0)
			{
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1));
			}
		}
		iVar0++;
	}
	func_215(Local_2027.f_10.f_16);
	func_215(Local_2027.f_10.f_17);
	func_215(Local_2027.f_10.f_18);
	func_215(Local_2027.f_10.f_15);
}

void func_72(bool bParam0)
{
	if (func_33(16777216) && !bParam0)
	{
		func_216(1);
		func_213(16777216);
	}
	else if (!func_33(16777216) && bParam0)
	{
		func_216(0);
		func_126(16777216);
	}
}

void func_73()
{
	if (!func_33(262144))
	{
		return;
	}
	func_217(Local_2027.f_2, 0);
	if (!func_218(PLAYER::PLAYER_ID()))
	{
		func_213(262144);
	}
}

void func_74()
{
	if (!func_33(524288))
	{
		return;
	}
	func_219(Local_2027.f_2, 0);
	if (!func_220(PLAYER::PLAYER_ID()))
	{
		func_213(524288);
	}
}

void func_75()
{
	if (!func_33(268435456))
	{
		return;
	}
	func_221(4);
	func_213(268435456);
}

void func_76(bool bParam0)
{
	if (func_33(32768) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_222(1);
		func_126(32768);
	}
	else
	{
		func_222(0);
		func_213(32768);
	}
}

void func_77(bool bParam0)
{
	if (func_33(131072) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		LAW::_0x009CF9A29972C298(joaat("LAW_CUSTOM_NET_PLAINS_SM_DELAYED"));
		func_126(131072);
	}
	else
	{
		LAW::_0x009CF9A29972C298(0);
		func_213(131072);
	}
}

void func_78(var uParam0, int iParam1)
{
	if (func_223(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_79(int iParam0)
{
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(Local_2027.f_202.f_319[iParam0]))
	{
		return;
	}
	HUD::REMOVE_MP_GAMER_TAG(&(Local_2027.f_202.f_319[iParam0]));
}

bool func_80(int iParam0, int iParam1)
{
	return func_113(Local_2027.f_166[iParam0], iParam1);
}

bool func_81(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iParam0 /*5*/]))
	{
		return false;
	}
	*uParam1 = NETWORK::NET_TO_OBJ(Local_15.f_257[iParam0 /*5*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		if (!func_33(4194304))
		{
			func_224(1, 1);
			func_126(4194304);
		}
	}
	else if (func_33(4194304))
	{
		func_225(1, 1, 0);
		func_213(4194304);
	}
}

void func_83()
{
	char* sVar0;

	if (!func_33(8388608))
	{
		return;
	}
	sVar0 = func_226();
	CAM::_0x2412216FCC7B4E3E(sVar0);
	func_213(8388608);
}

void func_84(bool bParam0)
{
	if (func_227(1048576) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_132(1048576);
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		func_228(1048576);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
}

void func_85(bool bParam0)
{
	if (!bParam0)
	{
		if (CAM::DOES_CAM_EXIST(Local_2027.f_559))
		{
			CAM::SET_CAM_ACTIVE(Local_2027.f_559, false);
		}
		if (CAM::DOES_CAM_EXIST(Local_2027.f_560))
		{
			CAM::SET_CAM_ACTIVE(Local_2027.f_560, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_213(8);
		return;
	}
	if (CAM::DOES_CAM_EXIST(Local_2027.f_559))
	{
		CAM::SET_CAM_ACTIVE(Local_2027.f_559, true);
	}
	if (CAM::DOES_CAM_EXIST(Local_2027.f_560))
	{
		CAM::SET_CAM_ACTIVE(Local_2027.f_560, true);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	func_126(8);
}

void func_86(bool bParam0)
{
	if (func_33(32) == !bParam0)
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0, false);
	func_229(bParam0);
	if (bParam0)
	{
		func_213(32);
	}
	else
	{
		func_126(32);
	}
}

void func_87(bool bParam0)
{
	if (func_33(64) == bParam0)
	{
		return;
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), bParam0);
	if (bParam0)
	{
		func_126(64);
	}
	else
	{
		func_213(64);
	}
}

void func_88(bool bParam0, int iParam1)
{
	if (func_33(16) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_126(16);
		if (CAM::IS_SCREEN_FADING_OUT())
		{
			return;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	else
	{
		func_213(16);
		if (CAM::IS_SCREEN_FADING_IN())
		{
			return;
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			return;
		}
		CAM::DO_SCREEN_FADE_IN(iParam1);
	}
}

void func_89()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_230(iVar0, 1);
		STREAMING::REMOVE_ANIM_DICT(func_231(iVar1));
		iVar0++;
	}
}

void func_90()
{
	if (!func_33(4))
	{
		return;
	}
	func_232(0);
	func_213(4);
}

void func_91(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_92(int iParam0, int iParam1)
{
	return func_113(Local_2027.f_29[iParam0 /*5*/], iParam1);
}

void func_93(var uParam0)
{
	if (!func_233(*uParam0))
	{
		return;
	}
	GRAPHICS::DESTROY_TRACKED_POINT(*uParam0);
	*uParam0 = -1;
}

void func_94(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

void func_95()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_15.f_340.f_6)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_15.f_340[iVar0]))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_15.f_340[iVar0]);
		}
		iVar0++;
	}
}

bool func_96(int iParam0, int iParam1)
{
	return func_113(Local_15.f_278[iParam0 /*2*/].f_1, iParam1);
}

void func_97(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
			iVar1 = NETWORK::NET_TO_OBJ(uParam0->f_257[iVar0 /*5*/]);
			GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar1, false);
			ENTITY::_0x18FF3110CF47115D(iVar1, 2, 0);
			ENTITY::_0x18FF3110CF47115D(iVar1, 3, 0);
			ENTITY::_0x18FF3110CF47115D(iVar1, 11, 0);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar1);
		}
		iVar0++;
	}
}

void func_98(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam1->f_10.f_7)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3[iVar0 /*4*/]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_VEH(uParam0->f_3[iVar0 /*4*/]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AITRANSPORT::_0xBA8818212633500A(iVar1, 2, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
}

void func_99(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_15.f_16[iVar0 /*12*/].f_2 == 0)
		{
		}
		else
		{
			func_234(iVar0);
		}
		iVar0++;
	}
}

void func_100(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;

	if (!DATAFILE::_0x7907969497EA92F5(Local_2027.f_4) || !DATAFILE::_0x603AC35FD4602C76(Local_2027.f_4))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10.f_7)
	{
		func_235(func_173(uParam0, iVar0));
		iVar0++;
	}
	func_235(func_170());
	iVar1 = 0;
	while (iVar1 < uParam0->f_10.f_8)
	{
		func_140(&Var3);
		if (!func_141(&Local_2027, &Var3, iVar1))
		{
		}
		else if (!func_176(Var3, 1339124518, &iVar2, 0))
		{
		}
		else
		{
			iVar9 = iVar2;
			if (!STREAMING::IS_MODEL_VALID(iVar9))
			{
				iVar9 = func_179(uParam0->f_45[iVar1 /*6*/]);
			}
			func_235(iVar9);
			func_235(func_180(uParam0->f_45[iVar1 /*6*/]));
			if (!func_176(Var3, 1325183772, &iVar2, 0))
			{
			}
			else if (!func_236(iVar8))
			{
			}
			else
			{
				iVar8 = iVar2;
				func_235(WEAPON::_GET_WEAPONTYPE_MODEL(iVar8));
			}
		}
		iVar1++;
	}
	iVar11 = func_174();
	iVar10 = 0;
	while (iVar10 < iVar11)
	{
		func_140(&Var12);
		if (!func_175(&Var12, iVar10))
		{
		}
		else if (!func_176(Var12, 1339124518, &iVar2, 0))
		{
		}
		else
		{
			iVar9 = iVar2;
			if (!STREAMING::IS_MODEL_VALID(iVar9))
			{
			}
			else
			{
				func_235(iVar9);
			}
		}
		iVar10++;
	}
	func_235(func_237());
	func_235(func_238());
	if (uParam0->f_10.f_14 > 0)
	{
		func_235(func_183());
	}
}

char* func_101()
{
	return "NCHU";
}

void func_102(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_239(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_240(iVar1);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		func_241(iVar2);
		iVar2++;
	}
	func_242();
	func_243(&(fParam0->f_202.f_51));
	func_244();
	func_245(fParam0);
	if (func_246(Local_2027.f_202.f_55))
	{
		UIFEED::_0x2F901291EF177B02(Local_2027.f_202.f_55, 0);
		Local_2027.f_202.f_55 = 0;
	}
	func_247(&(fParam0->f_202.f_77), 0, 0);
	func_248(&(Local_2027.f_202.f_62), 1);
}

void func_103()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (func_33(1))
	{
		func_249(0);
		func_250(0);
		if (!func_33(2))
		{
			func_252(func_251(), 1);
		}
		func_208(&bVar0, &bVar1);
		bVar2 = func_33(8192);
		if (!func_33(134217728) && !func_55(&Local_15, 524288))
		{
			func_253(bVar2);
		}
		else if (bVar0 > 0)
		{
			func_254(bVar2, bVar0 != bVar1);
		}
		else
		{
			func_255(bVar2);
		}
		Var3.f_1 = -1;
		if (func_33(2))
		{
			func_256(Local_2027.f_2, func_33(8192), bVar0, bVar1, &Var3, 0, 255);
		}
		return;
	}
	Local_362[Local_2027.f_634 /*52*/].f_48 = -1;
	func_253(0);
}

void func_104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_OBJ(uParam0->f_257[iVar0 /*5*/]);
			TASK::_0xA21AA2F0C2180125(iVar1, 0);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_257[iVar0 /*5*/]))
			{
			}
			else
			{
				ENTITY::_0x18FF3110CF47115D(iVar1, 2, 0);
				ENTITY::_0x18FF3110CF47115D(iVar1, 3, 0);
				ENTITY::_0x18FF3110CF47115D(iVar1, 11, 0);
			}
		}
		iVar0++;
	}
}

void func_105(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!func_257(2, 255) || func_257(512, 255))
	{
		return;
	}
	func_83();
	func_258();
	if (func_257(1, 255))
	{
		func_85(0);
		func_86(1);
		func_87(0);
		func_84(0);
		func_88(0, 1000);
		func_259(iParam0);
		AUDIO::_0x9428447DED71FC7E("RDRO_Scripted_Cutscene_Scenes");
		func_260();
		NETWORK::_0x4B05B97BA46F419D(1);
	}
	func_261(512);
}

int func_106(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_262(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_107()
{
	return Global_1109804.f_5737.f_632;
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_108(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_108(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_109(int iParam0)
{
	return Global_1109804.f_5737.f_451[iParam0 /*2*/].f_1;
}

bool func_110(int iParam0, var uParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_263(iParam0))
	{
		return false;
	}
	uVar0 = func_264(iParam0);
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	*uParam1 = uVar0;
	uParam1->f_2 = -678729477;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
	{
		return false;
	}
	return true;
}

bool func_111(int iParam0)
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

int func_112(int iParam0)
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

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_114(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return false;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return false;
	}
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (uParam1->f_3[*uParam2 /*4*/] != iVar0)
		{
		}
		else
		{
			return true;
		}
		*uParam2++;
	}
	return false;
}

void func_115(var uParam0, int iParam1)
{
	if (func_41(uParam0, 2))
	{
		return;
	}
	func_266(6, iParam1->f_10.f_15, func_265(), 1);
	func_39(uParam0, 2);
}

bool func_116(bool bParam0, bool bParam1)
{
	if ((!bParam1 && !func_41(&(Local_362[Local_2027.f_634 /*52*/]), 262144)) && !func_41(&(Local_362[Local_2027.f_634 /*52*/]), 524288))
	{
		return true;
	}
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 2) && !bParam0)
	{
		return false;
	}
	return true;
}

bool func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (iParam0 == func_267(iVar0))
	{
		return true;
	}
	iVar1 = PED::GET_MOUNT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iParam0 == func_267(iVar1))
	{
		return true;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return false;
	}
	iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iParam0 == func_267(iVar2))
	{
		return true;
	}
	return false;
}

bool func_118(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		return false;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return false;
	}
	iVar1 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return false;
	}
	*iParam2 = 0;
	while (*iParam2 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[*iParam2 /*12*/]))
		{
		}
		else if (uParam1->f_16[*iParam2 /*12*/] != iVar1)
		{
			iVar2 = NETWORK::NET_TO_PED(uParam1->f_16[*iParam2 /*12*/]);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::IS_PED_ON_MOUNT(iVar2)) && PED::GET_MOUNT(iVar2) == iVar0)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		*iParam2++;
	}
	return false;
}

void func_119(int iParam0)
{
	var uVar0;

	if (!func_33(1))
	{
		return;
	}
	BOUNTY::_0x188B748861B5BA17(&uVar0, joaat("CRIME_MURDER"), 0);
	func_268(joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"), 1, 0);
}

void func_120(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<8> Var0;
	bool bVar8;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Local_2027 != Var0.f_5)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 2:
		case 3:
			if (func_199(bParam3) == joaat("COACH_HOLDUP_ROBBERY"))
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!func_41(uParam2[Local_2027.f_634 /*52*/], 32) && !func_41(uParam2[Local_2027.f_634 /*52*/], 64))
			{
				return;
			}
			if (Var0.f_4 == 3)
			{
				func_132(1024);
			}
			else
			{
				func_132(512);
			}
			break;
		case 4:
		case 5:
			if (Var0.f_7 < 0)
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID())
			{
				func_39(&(Local_362[Local_2027.f_634 /*52*/]), 4194304);
				AUDIO::PLAY_SOUND(func_269(), func_270(), false, 0, true, 0);
			}
			if (bParam3->f_10 == joaat("COACH_HOLDUP_KIDNAP"))
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (bParam3->f_10 == joaat("COACH_HOLDUP_ROBBERY"))
			{
				if (Var0.f_7 > 4)
				{
					return;
				}
			}
			if (Var0.f_6 == 255)
			{
				return;
			}
			if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
			{
				if (func_271(Var0.f_7, 8388608) && !func_271(Var0.f_7, 16777216))
				{
					return;
				}
			}
			else if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
			{
				if (func_80(Var0.f_7, 16) && !func_80(Var0.f_7, 32))
				{
					return;
				}
			}
			if ((func_227(16384) || func_227(4096)) || func_227(8192))
			{
				return;
			}
			if (!func_33(1))
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID() || GANG::_0x3F59FE6F37869576(Var0.f_6, PLAYER::PLAYER_ID()))
			{
				func_132(8192);
			}
			else
			{
				func_132(4096);
			}
			Local_2027.f_202.f_52 = Var0.f_6;
			break;
		case 8:
			if (Var0.f_7 < 0)
			{
				return;
			}
			if (bParam3->f_10 == joaat("COACH_HOLDUP_KIDNAP"))
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (bParam3->f_10 == joaat("COACH_HOLDUP_ROBBERY"))
			{
				if (Var0.f_7 > 4)
				{
					return;
				}
			}
			if ((Var0.f_6 == 255 || !NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_6)) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_6))
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID() || GANG::_0x3F59FE6F37869576(Var0.f_6, PLAYER::PLAYER_ID()))
			{
				bVar8 = true;
				if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
				{
					func_272(Var0.f_7, 16777216);
				}
				else if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
				{
					func_273(Var0.f_7, 32);
				}
			}
			if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
			{
				func_272(Var0.f_7, 8388608);
			}
			else if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
			{
				func_273(Var0.f_7, 16);
			}
			if (bVar8)
			{
				return;
			}
			func_129(Var0.f_7, 0);
			if ((func_227(16384) || func_227(4096)) || func_227(8192))
			{
				return;
			}
			func_132(4096);
			Local_2027.f_202.f_52 = Var0.f_6;
			break;
		case 1:
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!func_41(uParam2[Local_2027.f_634 /*52*/], 32) && !func_41(uParam2[Local_2027.f_634 /*52*/], 64))
			{
				return;
			}
			func_132(2048);
			break;
		case 6:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				return;
			}
			if (func_199(bParam3) != joaat("COACH_HOLDUP_ROBBERY"))
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (!func_201(Var0.f_7, uParam1, 1))
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 2))
			{
				return;
			}
			func_274(Var0.f_7, uParam1, 2);
			break;
		case 7:
			if (Var0.f_6 == 255 || Var0.f_6 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_6))
			{
				return;
			}
			if ((func_227(16384) || func_227(4096)) || func_227(8192))
			{
				return;
			}
			Local_2027.f_202.f_52 = Var0.f_6;
			func_132(16384);
			break;
	}
}

bool func_121(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[*uParam2 /*4*/]))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_VEH(uParam1->f_3[*uParam2 /*4*/]);
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar1) != iVar0)
					{
					}
					else
					{
						return true;
					}
					iVar1++;
				}
			}
		}
		*uParam2++;
	}
	return false;
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	return true;
}

void func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar2 == iVar1)
			{
			}
			else
			{
				NETWORK::_0x157D8F3DE12B307F(iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_125(int iParam0)
{
	int iVar0;

	iVar0 = func_275(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_276(iVar0, 2);
}

void func_126(int iParam0)
{
	func_122(&(Local_2027.f_7), iParam0);
}

void func_127()
{
	func_277(512);
}

bool func_128(int iParam0)
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return func_201(iParam0, &Local_15, 32);
		case joaat("COACH_HOLDUP_ROBBERY"):
			return func_202(iParam0, &Local_15, 2);
		default:
			break;
	}
	return false;
}

void func_129(int iParam0, bool bParam1)
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			func_278(iParam0, bParam1);
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			func_279(iParam0, bParam1);
			break;
		default:
			return;
	}
}

void func_130(var uParam0)
{
	func_280("REL_CHU_ALLY_", &(uParam0->f_10.f_17));
	func_280("REL_CHU_ENEMY_", &(uParam0->f_10.f_16));
	func_280("REL_CHU_PRIMARY_", &(uParam0->f_10.f_15));
	func_280("REL_CHU_KIDNAP_", &(uParam0->f_10.f_18));
	func_266(4, uParam0->f_10.f_15, func_265(), 1);
	func_266(2, uParam0->f_10.f_18, func_265(), 1);
	func_266(2, uParam0->f_10.f_15, joaat("REL_WILD_ANIMAL"), 1);
	func_266(2, uParam0->f_10.f_15, joaat("REL_WILD_ANIMAL_BIRD"), 1);
	func_266(2, uParam0->f_10.f_15, joaat("REL_WILD_ANIMAL_PREDATOR"), 1);
	func_266(2, uParam0->f_10.f_15, joaat("REL_ALLIGATOR"), 1);
	func_266(2, uParam0->f_10.f_15, joaat("REL_BOAR"), 1);
	func_266(1, uParam0->f_10.f_15, joaat("REL_CIVMALE"), 1);
	func_266(1, uParam0->f_10.f_15, joaat("REL_CIVFEMALE"), 1);
	func_266(2, uParam0->f_10.f_15, joaat("REL_COP"), 1);
	func_266(2, uParam0->f_10.f_17, joaat("REL_COP"), 1);
	func_266(2, uParam0->f_10.f_16, joaat("REL_COP"), 1);
	func_266(2, uParam0->f_10.f_17, func_265(), 1);
	func_266(2, uParam0->f_10.f_16, func_265(), 1);
}

bool func_131()
{
	int iVar0;

	iVar0 = func_281(Local_2027.f_10.f_1, 0);
	if (iVar0 <= 3)
	{
		return true;
	}
	return false;
}

void func_132(int iParam0)
{
	func_122(&(Local_2027.f_8), iParam0);
}

void func_133(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	uParam0->f_6 = iParam1;
}

int func_134()
{
	return 1008537084;
}

bool func_135(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887.f_13 != -1)
		{
			bVar1 = func_13(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887.f_13 != -1)
	{
		bVar1 = func_13(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

bool func_136(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
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
		return false;
	}
	bVar1 = false;
	while ((HUD::_TEXT_DATABASE_REQUEST(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	while ((!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_282(iVar0, 1);
		func_284(&(uParam0->f_4), iVar1, func_283(iVar1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar2 = func_285(iVar0, 1);
		func_284(&(uParam0->f_4), iVar2, func_286(iVar2));
		iVar0++;
	}
}

void func_138(var uParam0)
{
	struct<5> Var0;
	bool bVar5;

	uParam0->f_10.f_6 = func_287(uParam0);
	uParam0->f_10.f_2 = { func_288(uParam0) };
	uParam0->f_10.f_7 = func_289(uParam0);
	uParam0->f_10.f_8 = func_290(uParam0);
	uParam0->f_10.f_9 = 0;
	uParam0->f_10.f_5 = func_291(joaat("SUPPRESS_LAW_CRIMES"));
	if ((func_292(uParam0, &Var0) && func_177(Var0, 1594022734, &bVar5, 0)) && bVar5)
	{
		func_126(256);
	}
	if (func_293())
	{
		func_126(16384);
	}
	if (func_294())
	{
		func_126(65536);
	}
	if (func_295())
	{
		func_126(1048576);
	}
}

void func_139(int iParam0, var uParam1)
{
	uParam1->f_29[iParam0 /*5*/].f_1 = { func_296(uParam1, iParam0) };
	if (func_297(uParam1, iParam0))
	{
		func_122(&(uParam1->f_29[iParam0 /*5*/]), 2);
	}
	if (func_298(uParam1, iParam0))
	{
		func_122(&(uParam1->f_29[iParam0 /*5*/]), 4);
	}
}

void func_140(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_2 = 0;
	uParam0->f_1 = 0;
}

bool func_141(int iParam0, var uParam1, int iParam2)
{
	if (func_292(iParam0, uParam1))
	{
		uParam1->f_2 = -788131562;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_142(struct<5> Param0)
{
	int iVar0;
	int iVar1;

	if (func_299(Param0, -507939340, &iVar0, 0) && Local_15.f_315 < iVar0)
	{
		return false;
	}
	if (func_299(Param0, 1146320435, &iVar1, 0) && Local_15.f_315 > iVar1)
	{
		return false;
	}
	return true;
}

void func_143(int iParam0, var uParam1)
{
	struct<5> Var0;

	uParam1->f_45[iParam0 /*6*/].f_1 = 0;
	uParam1->f_45[iParam0 /*6*/] = func_300(uParam1, iParam0);
	uParam1->f_45[iParam0 /*6*/].f_2 = { func_301(uParam1, iParam0) };
	uParam1->f_45[iParam0 /*6*/].f_5 = func_302(uParam1, iParam0);
	if (func_303(uParam1, iParam0))
	{
		func_272(iParam0, 1);
	}
	if (uParam1->f_45[iParam0 /*6*/] == joaat("SECONDARY_DROPOFF_GUARD"))
	{
		func_272(iParam0, 8);
		uParam1->f_45[iParam0 /*6*/] = joaat("DROPOFF_GUARD");
	}
	if (uParam1->f_45[iParam0 /*6*/] != joaat("DROPOFF_GUARD") && func_33(256))
	{
		func_272(iParam0, 8192);
	}
	else if (uParam1->f_45[iParam0 /*6*/] == joaat("SHOTGUN_RIDER") || uParam1->f_45[iParam0 /*6*/] == joaat("DRIVER"))
	{
		func_272(iParam0, 8192);
	}
	if (func_304(iParam0, 1323038251, 0))
	{
		func_272(iParam0, 2);
		uParam1->f_10.f_9++;
	}
	if (((func_305(uParam1, iParam0) && uParam1->f_10.f_14 < 4) && func_141(&Local_2027, &Var0, iParam0)) && func_142(Var0))
	{
		func_272(iParam0, 4);
	}
	func_306(iParam0, -760151658, 16, 0);
	func_306(iParam0, 587406518, 65536, 0);
	func_306(iParam0, 45657025, 32768, 0);
	func_306(iParam0, -697657725, 33554432, 0);
}

void func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_307(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = func_308(uParam0, iVar1, &bVar2);
		if (!VOLUME::_DOES_VOLUME_EXIST(iVar3))
		{
		}
		else if (bVar2)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_620))
			{
				uParam0->f_620 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_620))
				{
				}
				else
				{
					VOLUME::_0x6E0D3C3F828DA773(uParam0->f_620, iVar3);
					Jump @166; //curOff = 114
					if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_619))
					{
						uParam0->f_619 = VOLUME::_CREATE_VOLUME_AGGREGATE();
						if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_619))
						{
						}
						else
						{
							VOLUME::_0x6E0D3C3F828DA773(uParam0->f_619, iVar3);
						}
						iVar1++;
					}
				}
			}
		}
	}
}

void func_145()
{
	vector3 vVar0;

	if (VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
	{
		vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619) };
		Local_2027.f_625 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_PRIMARY");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_620))
	{
		vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_620) };
		Local_2027.f_626 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_SECONDARY");
	}
}

void func_146()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<5> Var6;
	bool bVar11;
	vector3 vVar12;

	fVar0 = 50f;
	fVar1 = 50f;
	fVar2 = 100f;
	fVar3 = 100f;
	iVar4 = func_307(&Local_2027);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		if (!func_309(&Local_2027, &Var6, iVar5))
		{
		}
		else
		{
			bVar11 = false;
			if (func_177(Var6, 1419063592, &bVar11, 0) && bVar11)
			{
				func_310(Var6, -880340422, &fVar1, 0);
				func_310(Var6, 902857663, &fVar3, 0);
			}
			else
			{
				func_310(Var6, -880340422, &fVar0, 0);
				func_310(Var6, 902857663, &fVar2, 0);
			}
		}
		iVar5++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
	{
		vVar12 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619) };
		Local_2027.f_627 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar0, fVar0, fVar0, "AVOID_VOL_PRIMARY");
		Local_2027.f_627.f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar2, fVar2, fVar2, "AVOID_LAW_VOL_PRIMARY");
		POPULATION::_0xB56D41A694E42E86(Local_2027.f_627, 12288, 0, 0, -1, -1, 16);
		POPULATION::_0xB56D41A694E42E86(Local_2027.f_627.f_2, 16384, 0, 0, -1, -1, 16);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_620))
	{
		vVar12 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_620) };
		Local_2027.f_627.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar1, fVar1, fVar1, "AVOID_VOL_SECONDARY");
		Local_2027.f_627.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar3, fVar3, fVar3, "AVOID_LAW_VOL_SECONDARY");
		POPULATION::_0xB56D41A694E42E86(Local_2027.f_627.f_1, 12288, 0, 0, -1, -1, 16);
		POPULATION::_0xB56D41A694E42E86(Local_2027.f_627.f_3, 16384, 0, 0, -1, -1, 16);
	}
}

void func_147(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (GANG::_0x901E0DC25080C8B9(iVar2) != uParam1->f_316)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		iVar1++;
	}
	uParam0->f_561 = uVar0;
	uParam0->f_561.f_52 = { Local_2027.f_2 };
	uParam0->f_561.f_54 = func_311(uParam0);
}

void func_148()
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	var uVar11;
	struct<5> Var12;

	if (!func_292(&Local_2027, &Var1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Var12 = { Var1 };
		if (!func_312(&Var12, 565295571, iVar0, 0))
		{
		}
		else if (!func_176(Var12, -537439784, &iVar7, 0))
		{
		}
		else
		{
			switch (iVar7)
			{
				case joaat("CULL"):
					iVar6 = 1;
					break;
				case joaat("FLATTEN"):
					iVar6 = 2;
					break;
				case joaat("FLATTEN_DEEP_SURFACE"):
					iVar6 = 4;
					break;
				case joaat("EXPLODE"):
					iVar6 = 8;
					break;
				case joaat("PUSH"):
					iVar6 = 16;
					break;
				case joaat("DECAL"):
					iVar6 = 32;
					break;
				default:
					Jump @244; //curOff = 166
					if (!func_313(Var12, 644136394, &vVar8, 0))
					{
					}
					else if (!func_310(Var12, 1357107565, &uVar11, 0))
					{
					}
					else
					{
						Local_2027.f_189[iVar0] = GRAPHICS::_0xFA50F79257745E74(vVar8, uVar11, iVar6, -1, 0);
					}
				}
				iVar0++;
			}
		}

bool func_149()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_230(iVar0, 1);
		STREAMING::REQUEST_ANIM_DICT(func_231(iVar1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_231(iVar1)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_150()
{
	int iVar0;
	int iVar1;

	func_314(&(Local_2027.f_174.f_6), 100);
	if ((func_33(1) && !func_33(8192)) && func_33(2))
	{
		func_315(Local_2027.f_2);
	}
	if (Local_2027.f_174.f_6 != 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_33(1))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 == iVar0)
		{
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2027.f_618), iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			NETWORK::_0x5A91BCEF74944E93(PLAYER::INT_TO_PLAYERINDEX(iVar1), 30f);
		}
		iVar1++;
	}
}

void func_151(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar0 = Local_2027.f_174.f_1;
	func_314(&(Local_2027.f_174.f_1), 32);
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (func_316(iVar1))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Local_2027.f_618), iVar0);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Local_2027.f_618), iVar0);
	}
	if (func_317(16384))
	{
		if (Local_2027.f_638 == 0)
		{
			Local_2027.f_638 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else
		{
			Local_362[Local_2027.f_634 /*52*/].f_47 = func_209(Local_2027.f_638);
			if (Local_362[Local_2027.f_634 /*52*/].f_47 > 45000 && !func_41(&(Local_362[Local_2027.f_634 /*52*/]), 2))
			{
				func_39(&(Local_362[Local_2027.f_634 /*52*/]), 2);
			}
		}
	}
	else
	{
		Local_362[Local_2027.f_634 /*52*/].f_47 = 0;
		Local_2027.f_638 = 0;
	}
	if (func_318(uParam0, uParam2))
	{
		func_39(uParam1[Local_2027.f_634 /*52*/], 8);
	}
	else
	{
		func_319(uParam1[Local_2027.f_634 /*52*/], 8);
	}
	bVar2 = func_41(uParam1[Local_2027.f_634 /*52*/], 32);
	func_320(Local_2027.f_174.f_3);
	func_321();
	func_322();
	func_323();
	func_324();
	if ((func_33(1) && func_325()) && !func_326())
	{
		func_327(2);
	}
	if (func_33(1) && !func_33(2))
	{
		if (func_328())
		{
			func_39(&(Local_362[Local_2027.f_634 /*52*/]), 16777216);
		}
		if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 16777216) && func_329())
		{
			func_252(func_251(), 0);
		}
	}
	if (!func_55(&Local_15, 16))
	{
		if (func_330(uParam0, uParam2, &iVar3))
		{
			Local_362[Local_2027.f_634 /*52*/].f_45 = iVar3;
			if (func_331(Local_15.f_16[iVar3 /*12*/].f_2))
			{
				if (Local_2027.f_171 != 0)
				{
					Local_2027.f_171.f_1 = (Local_2027.f_171.f_1 + NETWORK::GET_TIME_DIFFERENCE(Local_2027.f_171, NETWORK::GET_NETWORK_TIME_ACCURATE()));
				}
				Local_2027.f_171 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else
			{
				Local_2027.f_171 = 0;
			}
		}
		else
		{
			(uParam1[Local_2027.f_634 /*52*/])->f_45 = -1;
			Local_2027.f_171 = 0;
		}
	}
	else
	{
		(uParam1[Local_2027.f_634 /*52*/])->f_45 = -1;
		Local_2027.f_171 = 0;
	}
	if (bVar2)
	{
		if (!GANG::_0xD6F6ACF4392187FB(uParam0->f_316) || !GANG::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 16777216))
			{
				func_103();
				func_319(uParam1[Local_2027.f_634 /*52*/], 32);
				func_213(1);
				func_43(uParam2, uParam1);
				func_39(uParam1[Local_2027.f_634 /*52*/], 8388608);
				if ((!GANG::_0xD6F6ACF4392187FB(uParam0->f_316) || !GANG::_0x0F99F6436528A089(uParam0->f_316)) || (GANG::_0x149A2751AB66AC02(uParam0->f_316) <= 1 && !GANG::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID())))
				{
					func_126(2048);
				}
				else if (!GANG::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
				{
					func_126(4096);
				}
				else
				{
					func_126(512);
				}
			}
		}
	}
	else if (((!func_41(uParam1[Local_2027.f_634 /*52*/], 8388608) && !func_55(&Local_15, 536870912)) && !func_33(1)) && !func_55(&Local_15, 524288))
	{
		if (GANG::_0xD6F6ACF4392187FB(uParam0->f_316) && GANG::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			func_332(1);
		}
	}
	func_333();
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32) && func_334(Local_2027.f_619, Global_35))
	{
		func_39(&(Local_362[Local_2027.f_634 /*52*/]), 65536);
		bVar4 = true;
	}
	else
	{
		func_319(&(Local_362[Local_2027.f_634 /*52*/]), 65536);
	}
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64) && func_334(Local_2027.f_620, Global_35))
	{
		func_39(&(Local_362[Local_2027.f_634 /*52*/]), 131072);
		bVar4 = true;
	}
	else
	{
		func_319(&(Local_362[Local_2027.f_634 /*52*/]), 131072);
	}
	if ((bVar4 && func_33(1)) && func_335(255))
	{
		func_72(1);
	}
	else
	{
		func_72(0);
	}
	if (func_33(1) && func_335(255))
	{
		func_336();
	}
	if (func_337(&iVar5))
	{
		func_338(iVar5);
	}
}

void func_152()
{
	if (Local_2027.f_174.f_7 == 0)
	{
		if (func_339())
		{
			func_82(1);
		}
		else
		{
			func_82(0);
		}
	}
	func_314(&(Local_2027.f_174.f_7), 5);
}

void func_153(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	char cVar7[64];
	vector3 vVar15;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;

	bVar0 = !func_41(uParam1[Local_2027.f_634 /*52*/], 2);
	iVar1 = uParam2->f_174.f_2;
	func_314(&(uParam2->f_174.f_2), 3);
	iVar3 = PLAYER::PLAYER_PED_ID();
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3[iVar1 /*4*/]))
	{
		return;
	}
	iVar2 = NETWORK::NET_TO_VEH(uParam0->f_3[iVar1 /*4*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (!func_92(iVar1, 8))
	{
		VEHICLE::_0xCBF88256E44D5D39(iVar2, 1);
		func_340(iVar1, 8);
	}
	if (!func_92(iVar1, 32) && func_341(iVar1, &Local_15, 1))
	{
		Local_2027.f_29[iVar1 /*5*/].f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), iVar2, -1f, 90f, 40f, -1f, -1f, 180f, false, true, -1, -1);
		func_340(iVar1, 32);
	}
	if ((!func_92(iVar1, 64) && func_341(iVar1, &Local_15, 1)) && func_209(Local_15.f_3[iVar1 /*4*/].f_2) > 60000)
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
		if (!func_33(1))
		{
		}
		else if (BUILTIN::VDIST(vVar4, Global_35) > 100f)
		{
		}
		func_340(iVar1, 64);
	}
	if (!func_92(iVar1, 16))
	{
		StringCopy(&cVar7, "VEH_DEFENSIVE_VOL_", 64);
		StringIntConCat(&cVar7, iVar1, 64);
		vVar15 = { Vector(1f, 1f, 1f) * Vector(20f, 20f, 20f) };
		Local_2027.f_621[iVar1] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 0f, 0f, 0f, vVar15, func_342(cVar7));
		PED::_0x7C00CFC48A782DC0(Local_2027.f_621[iVar1], iVar2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		if (VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_621[iVar1]))
		{
			func_340(iVar1, 16);
		}
	}
	if (bVar0 && PED::IS_PED_IN_VEHICLE(iVar3, iVar2, true))
	{
		func_115(uParam1[Local_2027.f_634 /*52*/], uParam2);
	}
	if (!VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
	{
		return;
	}
	if (!VEHICLE::_0xA19447D83294E29F(iVar2, &uVar19, &iVar18))
	{
		return;
	}
	iVar20 = 0;
	while (iVar20 < iVar18)
	{
		iVar21 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar20);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
		{
		}
		else if (PED::IS_PED_DEAD_OR_DYING(iVar21, true))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar21))
		{
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar21, 294, true);
		}
		iVar20++;
	}
}

void func_154(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	func_343(fParam2->f_174, uParam0, uParam1, fParam2);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_344(iVar0);
		func_345(iVar0);
		func_346(iVar0);
		iVar0++;
	}
	func_314(&(fParam2->f_174), fParam2->f_10.f_8);
}

void func_155()
{
	func_347(Local_2027.f_174.f_4);
	func_314(&(Local_2027.f_174.f_4), 4);
}

void func_156(float fParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = fParam0->f_174.f_3;
	if (!func_123(iVar0, 1, 1))
	{
		func_314(&(fParam0->f_174.f_3), 32);
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		func_314(&(fParam0->f_174.f_3), 32);
		return;
	}
	func_266(2, fParam0->f_10.f_18, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	if (func_41(uParam1[iVar0 /*52*/], 2))
	{
		func_266(6, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	else
	{
		func_266(4, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	func_314(&(fParam0->f_174.f_3), 32);
}

void func_157(float fParam0, var uParam1, var uParam2)
{
	bool bVar0;
	var uVar1;

	if (fParam0->f_561.f_54 == joaat("NONE"))
	{
		return;
	}
	if (!func_348())
	{
		return;
	}
	if (!func_33(128))
	{
		func_126(128);
	}
	if (func_41(uParam1[Local_2027.f_634 /*52*/], 32))
	{
		return;
	}
	if (func_41(uParam1[Local_2027.f_634 /*52*/], 8388608))
	{
		return;
	}
	Local_2027.f_561.f_1 = Local_2027.f_618;
	func_349(fParam0, uParam1, uParam2, fParam0->f_561.f_55);
	if (func_41(uParam1[Local_2027.f_634 /*52*/], 64))
	{
		if (Local_2027.f_631 == 255)
		{
			return;
		}
		if (!func_350(&(fParam0->f_561), Local_2027.f_632))
		{
			return;
		}
		func_103();
		func_319(uParam1[Local_2027.f_634 /*52*/], 64);
		func_213(1);
		func_213(8192);
		func_39(uParam1[Local_2027.f_634 /*52*/], 8388608);
		func_43(fParam0, uParam1);
		if (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1)
		{
			func_126(1024);
		}
		else
		{
			func_126(512);
		}
		return;
	}
	if (func_351(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (func_352(&(fParam0->f_561), &bVar0, &uVar1, 0))
	{
		func_332(2);
		if (!bVar0)
		{
			func_39(&(Local_362[Local_2027.f_634 /*52*/]), 32768);
		}
	}
	else if (func_353(fParam0, uParam1, uParam2))
	{
		func_332(2);
		func_39(&(Local_362[Local_2027.f_634 /*52*/]), 32768);
	}
}

void func_158()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;

	if (Local_15.f_305 != 5)
	{
		func_93(&(Local_2027.f_548));
	}
	if (Local_15.f_305 != 4)
	{
		Local_2027.f_549 = 0;
	}
	switch (Local_15.f_305)
	{
		case 0:
		case 1:
			return;
		case 3:
			func_39(&(Local_362[Local_2027.f_634 /*52*/]), 1024);
			break;
		case 4:
			if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 2048))
			{
				return;
			}
			if (func_354(Local_15.f_305.f_1, &iVar0))
			{
				iVar1 = PED::_GET_CARRIER_AS_HUMAN(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					Local_2027.f_550.f_6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar1) };
				}
			}
			if (!func_355(Local_15.f_305.f_2, &(Local_2027.f_550), &bVar2, 42, 1, 90f, 1101004800 /* Float: 20f */, 80f, 120f, 3f))
			{
				if (!bVar2)
				{
					return;
				}
			}
			else
			{
				Local_2027.f_550.f_3.f_2 = (Local_2027.f_550.f_3.f_2 + 10f);
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_2027.f_550.f_3, &fVar3, false) && fVar3 != 0f)
				{
					if (!VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
					{
						Local_2027.f_550.f_3.f_2 = fVar3;
						Local_362[Local_2027.f_634 /*52*/].f_49 = { Local_2027.f_550.f_3 };
						func_39(&(Local_362[Local_2027.f_634 /*52*/]), 4096);
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619), Local_2027.f_550.f_3, true) > 130f || MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_2027.f_620), Local_2027.f_550.f_3, true) > 130f)
					{
						Local_2027.f_550.f_3.f_2 = fVar3;
						Local_362[Local_2027.f_634 /*52*/].f_49 = { Local_2027.f_550.f_3 };
						func_39(&(Local_362[Local_2027.f_634 /*52*/]), 4096);
					}
				}
			}
			if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 4096) && Local_2027.f_549 < 2)
			{
				func_94(&(Local_2027.f_550), 1, 0);
				Local_2027.f_549++;
				return;
			}
			func_39(&(Local_362[Local_2027.f_634 /*52*/]), 2048);
			break;
		case 5:
			if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8192))
			{
				return;
			}
			if (!func_356(Local_15.f_305.f_2, &bVar4))
			{
				return;
			}
			if (bVar4)
			{
				func_39(&(Local_362[Local_2027.f_634 /*52*/]), 16384);
			}
			func_39(&(Local_362[Local_2027.f_634 /*52*/]), 8192);
			break;
		case 6:
			break;
		case 2:
			if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 1024))
			{
				return;
			}
			func_94(&(Local_2027.f_550), 1, 0);
			func_319(&(Local_362[Local_2027.f_634 /*52*/]), 1024);
			func_319(&(Local_362[Local_2027.f_634 /*52*/]), 2048);
			func_319(&(Local_362[Local_2027.f_634 /*52*/]), 4096);
			func_319(&(Local_362[Local_2027.f_634 /*52*/]), 8192);
			func_319(&(Local_362[Local_2027.f_634 /*52*/]), 16384);
			break;
	}
}

void func_159()
{
	int iVar0;
	bool bVar1;
	struct<30> Var2;
	struct<9> Var32;

	if (func_357(&iVar0, &bVar1))
	{
		func_358(1);
	}
	else
	{
		func_358(0);
	}
	if ((func_33(4) && func_359(255)) && func_360(255))
	{
		func_361(&Var2, &Var32, iVar0, bVar1);
		func_362(Var2, Var32, 1, 1, 1);
	}
}

void func_160()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;

	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 2097152))
	{
		if (func_33(67108864) && func_257(512, 255))
		{
			func_69(0);
		}
		return;
	}
	iVar0 = func_363();
	func_206(iVar0, func_55(&Local_15, 524288));
	if (!func_33(1))
	{
		return;
	}
	if (!func_55(&Local_15, 524288) && !func_33(134217728))
	{
		return;
	}
	if (func_364())
	{
		return;
	}
	iVar1 = func_365(255);
	if (Local_15.f_299 != 0 && iVar1 != 3)
	{
		if (iVar1 == 0)
		{
			return;
		}
		if (func_257(1, 255) && iVar1 == 1)
		{
			return;
		}
	}
	bVar2 = func_257(1, 255);
	func_69(bVar2);
	func_208(&iVar3, &uVar4);
	if (iVar3 > 0)
	{
		func_366(func_257(1, 255));
	}
	func_39(&(Local_362[Local_2027.f_634 /*52*/]), 2097152);
}

void func_161()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_33(1);
	if ((((bVar0 && !func_33(8192)) && func_33(16384)) && !func_55(&Local_15, 512)) && !func_33(33554432))
	{
		if (func_367(0, 0, 0))
		{
			if (Local_2027.f_639 == 0)
			{
				Local_2027.f_639 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_33(32768))
				{
					func_222(1);
				}
			}
			bVar1 = func_33(8192);
			if (((Local_2027.f_639 != 0 && func_209(Local_2027.f_639) < 45000) && !(!bVar1 && func_334(Local_2027.f_627.f_2, Global_35))) && !(bVar1 && func_334(Local_2027.f_627.f_3, Global_35)))
			{
				LAW::_0xBD944A3D36E992DE();
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::GET_PLAYER_INDEX());
			}
		}
		else
		{
			Local_2027.f_639 = 0;
		}
	}
	if (bVar0 && !func_33(33554432))
	{
		func_76(1);
	}
	else
	{
		func_76(0);
	}
	if (bVar0 && !func_33(33554432))
	{
		func_77(1);
	}
	else
	{
		func_77(0);
	}
	if ((bVar0 && !func_33(8192)) && Local_2027.f_10.f_5 != 0)
	{
		iVar2 = PLAYER::PLAYER_ID();
		switch (Local_2027.f_10.f_5)
		{
			case joaat("SUPPRESS_LAW_CRIMES"):
				LAW::_0x785177E4D57D7389(iVar2, joaat("CRIME_ASSAULT_LAW"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, joaat("CRIME_LAW_IS_THREATENED"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, joaat("CRIME_MURDER_LAW"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, joaat("CRIME_THREATEN_LAW"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, joaat("CRIME_THREATEN_LAW"), 0, 0, -1);
				break;
		}
	}
}

void func_162()
{
	int iVar0;

	if (func_33(1))
	{
		iVar0 = func_251();
		func_368(1, 0);
		switch (Local_15.f_2)
		{
			case 1:
				if (iVar0 == 1 && func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8))
				{
					func_368(2, 0);
				}
				break;
			case 2:
				if (iVar0 == 1)
				{
					if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 2) || func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8))
					{
						func_368(2, 0);
					}
				}
				break;
			case 3:
			case 4:
			case 5:
				func_368(4, 0);
				break;
		}
		if (func_55(&Local_15, 524288) && func_41(&(Local_362[Local_2027.f_634 /*52*/]), 2097152))
		{
			if (func_369(1) > 0)
			{
				func_368(8, 1);
			}
			else
			{
				func_368(16, 1);
			}
		}
	}
	else
	{
		if ((!func_370(1) || func_370(16)) || func_370(8))
		{
			return;
		}
		func_368(16, 1);
	}
}

void func_163()
{
	func_371();
}

void func_164(var uParam0, var uParam1, float fParam2)
{
	if (func_372())
	{
		func_102(fParam2);
		return;
	}
	func_373(uParam0, uParam1, fParam2);
	func_374(uParam0, uParam1, fParam2);
	func_375(uParam0, uParam1, fParam2);
	func_376(uParam0, uParam1, fParam2);
	func_377();
	func_378();
	func_379(uParam0, uParam1, fParam2);
	func_380();
	func_381(fParam2);
	func_382(uParam0, uParam1, fParam2);
}

var func_165()
{
	return Local_2027.f_10.f_1;
}

int func_166(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_384(func_383(iParam0, uParam1)))
	{
		return 0;
	}
	if (!func_385(iParam0, &vVar0, uParam1))
	{
		return 1;
	}
	vVar0.f_2 = -146546566;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		return 1;
	}
	return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar0.x, vVar0.y) + 1;
}

Vector3 func_167(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	struct<4> Var3;

	if (iParam2 == 0)
	{
		return func_383(iParam0, uParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_385(iParam0, &Var3, uParam1))
	{
		return vVar0;
	}
	Var3.f_2 = -146546566;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -733684727;
	Var3.f_3 = iParam2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &Var3);
	return vVar0;
}

bool func_168(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6)
{
	int iVar0;
	struct<8> Var1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_15.f_340[iParam0]))
	{
		return true;
	}
	if (func_384(vParam1))
	{
		return true;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_15.f_340.f_5))
	{
		if (VOLUME::_0x397769175A7DBB30(vParam1, fParam4, 0, 0, joaat("NET_TRAIN")))
		{
			*uParam6 = 1;
			return false;
		}
		Var1 = { vParam1 };
		Var1.f_4 = fParam4;
		Var1.f_6 = iParam5;
		Var1.f_7 = Local_2027.f_4.f_1;
		Local_15.f_340.f_5 = VOLUME::_0x183C0B6CFEFFCAE4(&Var1);
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_15.f_340.f_5);
	switch (iVar0)
	{
		case 3:
			Local_15.f_340[iParam0] = VOLUME::_0x351D71B8B72B858B(Local_15.f_340.f_5);
			return true;
		case 4:
			Local_15.f_340.f_5 = 0;
			return true;
		default:
			break;
	}
	return false;
}

int func_169(int iParam0, struct<2> Param1, bool bParam3)
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
	if (!func_28(Param1))
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
	uVar31 = func_386(iParam0);
	if (SCRIPTS::COUNT_PLAYER_BITS(&uVar31) <= 0)
	{
		return 0;
	}
	func_387(&Var0, uVar31);
	Var0.f_4 = 13;
	func_388(&Var0);
	return 1;
}

int func_170()
{
	return joaat("S_INV_MONEYCLIP01X");
}

bool func_171(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_172(int iParam0, var uParam1, int iParam2)
{
	if (func_292(iParam0, uParam1))
	{
		uParam1->f_2 = -911220092;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

int func_173(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_172(iParam0, &Var0, iParam1))
	{
		func_176(Var0, 1339124518, &iVar5, 0);
	}
	return iVar5;
}

int func_174()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_292(&Local_2027, &Var0) && func_312(&Var0, 2067657977, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 10)
	{
		return 10;
	}
	return iVar5;
}

bool func_175(var uParam0, int iParam1)
{
	if (func_292(&Local_2027, uParam0))
	{
		uParam0->f_2 = 2101858238;
		uParam0->f_3 = iParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_176(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_177(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(bParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_178(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1))
	{
		func_176(Var0, 1339124518, &uVar5, 0);
	}
	return uVar5;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STATIONARY_ESCORT"):
		case joaat("PASSENGER_ESCORT"):
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			return joaat("A_M_M_UNICOACHGUARDS_01");
		default:
			break;
	}
	return joaat("A_M_M_UNICOACHGUARDS_01");
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STATIONARY_ESCORT"):
		case joaat("PASSENGER_ESCORT"):
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
		default:
			break;
	}
	return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
}

int func_181(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_176(Var0, 1325183772, &iVar5, 0);
	}
	return iVar5;
}

bool func_182(int iParam0)
{
	if (iParam0 == 0 || iParam0 == joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	if (!func_236(iParam0))
	{
		return true;
	}
	WEAPON::_0x72D4CB5DB927009C(iParam0, -1, 0);
	if (!WEAPON::_0xFF07CF465F48B830(iParam0))
	{
		return false;
	}
	return true;
}

int func_183()
{
	return joaat("S_MP_MONEYBAG02X");
}

int func_184()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_289(&Local_2027);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_172(&Local_2027, &Var3, iVar0) || !func_142(Var3))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_185()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_290(&Local_2027);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_141(&Local_2027, &Var3, iVar0) || !func_142(Var3))
		{
		}
		else
		{
			iVar1++;
			if (!func_389(&Local_2027, iVar0))
			{
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	bool bVar8;
	int iVar9;
	int iVar10;

	iVar2 = func_174();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_175(&Var3, iVar0) || !func_142(Var3))
		{
		}
		else if (func_177(Var3, 873236619, &bVar8, 0) && bVar8)
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar10 = func_290(&Local_2027);
	iVar9 = 0;
	while (iVar9 < iVar10)
	{
		func_140(&Var3);
		if (!func_141(&Local_2027, &Var3, iVar9) || !func_142(Var3))
		{
		}
		else if (!func_305(&Local_2027, iVar9))
		{
		}
		else
		{
			iVar1++;
		}
		iVar9++;
	}
	return iVar1;
}

void func_187()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<5> Var5;
	bool bVar10;

	if (Local_2027.f_10.f_8 <= 0)
	{
		return;
	}
	if (!func_390(2, Local_2027.f_4.f_1))
	{
		return;
	}
	fVar0 = 0f;
	iVar1 = -1;
	iVar4 = func_290(&Local_2027);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (Local_2027.f_45[iVar2 /*6*/] == 0)
		{
		}
		else
		{
			func_140(&Var5);
			if (!func_141(&Local_2027, &Var5, iVar2))
			{
			}
			else if (!func_177(Var5, -359968085, &bVar10, 0) || !bVar10)
			{
			}
			else
			{
				fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (fVar3 > fVar0)
				{
					iVar1 = iVar2;
					fVar0 = fVar3;
				}
			}
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	func_274(iVar1, &Local_15, 33554432);
}

bool func_188()
{
	int iVar0;
	struct<5> Var1;

	if (Local_2027.f_10.f_12 >= func_174())
	{
		return true;
	}
	iVar0 = Local_2027.f_10.f_12;
	if (func_175(&Var1, iVar0) && !func_142(Var1))
	{
		Local_2027.f_10.f_12++;
		return false;
	}
	if (!func_391(iVar0))
	{
		return false;
	}
	Local_2027.f_10.f_12++;
	return false;
}

bool func_189(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	int iVar11;
	int iVar12;

	if (uParam1->f_10.f_10 >= uParam1->f_10.f_7)
	{
		return true;
	}
	iVar0 = uParam1->f_10.f_10;
	if (func_172(&Local_2027, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_10++;
		return false;
	}
	iVar6 = func_173(&Local_2027, iVar0);
	vVar7 = { uParam1->f_29[iVar0 /*5*/].f_1 };
	fVar10 = func_392(&Local_2027, iVar0);
	if (iVar6 == 0 || !STREAMING::IS_MODEL_VALID(iVar6))
	{
		uParam1->f_10.f_10++;
		return false;
	}
	if (func_384(vVar7))
	{
		uParam1->f_10.f_10++;
		return false;
	}
	if (!func_113(uParam1->f_29[iVar0 /*5*/], 4))
	{
		func_393(&vVar7, 1088421888 /* Float: 7f */);
	}
	if (!func_394(&(uParam0->f_3[iVar0 /*4*/]), iVar6, vVar7, fVar10, 1, 0, 0, 0))
	{
		return false;
	}
	iVar11 = NETWORK::NET_TO_VEH(uParam0->f_3[iVar0 /*4*/]);
	VEHICLE::SET_VEHICLE_CAN_BREAK(iVar11, true);
	VEHICLE::_0x850CE59DEC2028F3(iVar11, 1);
	VEHICLE::_SET_VEHICLE_LIGHTS_CAN_BE_VISIBLY_DAMAGED(iVar11, true);
	AITRANSPORT::_0xBA8818212633500A(iVar11, 3, 1);
	AITRANSPORT::_0xBA8818212633500A(iVar11, 9, 1);
	if (func_299(Var1, -1668085295, &iVar12, 0))
	{
		VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iVar11, iVar12);
	}
	if (func_33(256))
	{
		VEHICLE::_0x87B974E54C71BA7B(iVar11, 1);
		VEHICLE::_0xC4A2C11FC0D41916(iVar11, 1);
		ENTITY::_0x9587913B9E772D29(iVar11, 1);
	}
	if (func_113(uParam1->f_29[iVar0 /*5*/], 2))
	{
		func_395(iVar0, uParam0, 2);
	}
	uParam1->f_10.f_10++;
	return false;
}

bool func_190(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	if (uParam1->f_10.f_11 >= uParam1->f_10.f_8)
	{
		return true;
	}
	iVar0 = uParam1->f_10.f_11;
	if (func_141(&Local_2027, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_11++;
		return false;
	}
	if (!func_396(iVar0, uParam0, uParam1))
	{
		return false;
	}
	func_397();
	uParam0->f_16[iVar0 /*12*/].f_2 = uParam1->f_45[iVar0 /*6*/];
	uParam0->f_16[iVar0 /*12*/].f_8 = { uParam1->f_45[iVar0 /*6*/].f_2 };
	uParam0->f_16[iVar0 /*12*/].f_11 = uParam1->f_45[iVar0 /*6*/].f_5;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(uParam0->f_16[iVar0 /*12*/])))
	{
		if (!func_398(iVar0, uParam0, uParam1, 1))
		{
			return false;
		}
	}
	uParam1->f_10.f_11++;
	return false;
}

bool func_191(var uParam0)
{
	if (uParam0->f_327 >= 20)
	{
		return true;
	}
	func_399(uParam0->f_327, uParam0);
	uParam0->f_327++;
	return false;
}

void func_192(var uParam0, int iParam1, bool bParam2)
{
	switch (func_199(bParam2))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (uParam0->f_16[bParam2->f_174 /*12*/].f_2 == joaat("PASSENGER_VIP") && !func_400(bParam2->f_174, 1))
			{
				func_401(bParam2->f_174, NETWORK::NET_TO_PED(uParam0->f_16[bParam2->f_174 /*12*/]), uParam0);
			}
			break;
	}
	func_402(bParam2->f_174, uParam0, iParam1, bParam2);
}

void func_193(var uParam0, int iParam1, bool bParam2)
{
	func_403(bParam2->f_174.f_2, uParam0, iParam1, bParam2);
}

void func_194(var uParam0, int iParam1, bool bParam2)
{
	if (!func_55(&Local_15, 1073741824 /* Float: 2f */) && func_59(iParam1, 32, 0))
	{
		func_63(&Local_15, 1073741824 /* Float: 2f */);
	}
	if (!func_55(&Local_15, 67108864) && func_404(!func_55(&Local_15, 1073741824 /* Float: 2f */)))
	{
		func_63(uParam0, 67108864);
	}
	if (!func_55(uParam0, 16) && func_59(iParam1, 2, 0))
	{
		func_63(uParam0, 16);
	}
	if ((!func_55(&Local_15, 512) && func_405(&Local_15) > 2) && func_59(&Local_362, 64, 0))
	{
		func_63(&Local_15, 512);
	}
	if ((func_55(uParam0, 1024) || func_55(uParam0, 4096)) || func_55(uParam0, 16384))
	{
		return;
	}
	if (func_55(&Local_15, 134217728) && !func_55(&Local_15, 268435456))
	{
		if (Local_15.f_320 == 0)
		{
			Local_15.f_320 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (func_209(Local_15.f_320) > 60000)
		{
			func_63(&Local_15, 268435456);
		}
	}
	if (func_199(bParam2) == joaat("COACH_HOLDUP_ROBBERY") && uParam0->f_322 <= 0)
	{
		func_63(uParam0, 16384);
	}
	if ((func_199(bParam2) == joaat("COACH_HOLDUP_KIDNAP") && !func_406(uParam0, joaat("PASSENGER_VIP"))) && !func_55(uParam0, 2048))
	{
		func_63(uParam0, 1024);
	}
	if ((func_199(bParam2) == joaat("COACH_HOLDUP_KIDNAP") && !func_407(uParam0)) && func_55(uParam0, 2048))
	{
		func_63(uParam0, 4096);
	}
}

void func_195(var uParam0, int iParam1, bool bParam2)
{
	func_408(Local_2027.f_174.f_4, uParam0, bParam2);
}

void func_196()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	switch (Local_15.f_305)
	{
		case 0:
			if (!func_409())
			{
				return;
			}
			func_410();
			func_411(1);
			break;
		case 1:
			if (!func_409())
			{
				func_411(0);
				return;
			}
			if (!func_412())
			{
				return;
			}
			func_63(&Local_15, 128);
			func_411(3);
			break;
		case 3:
			if (!func_54(&Local_362, 1024))
			{
				return;
			}
			if (!func_413(&uVar1, &vVar2))
			{
				switch (Local_2027.f_10)
				{
					case joaat("COACH_HOLDUP_KIDNAP"):
						if (func_414(&Local_15, joaat("PASSENGER_VIP"), 262144) && func_415(&Local_15, joaat("PASSENGER_VIP"), 262144))
						{
							iVar5 = 0;
							while (iVar5 < 20)
							{
								func_416(iVar5, &Local_15, 262144);
								iVar5++;
							}
							return;
						}
						break;
					case joaat("COACH_HOLDUP_ROBBERY"):
						if (func_417(&Local_15, 1024, 0) && func_418(&Local_15, 1024, 0))
						{
							iVar6 = 0;
							while (iVar6 < 4)
							{
								func_419(iVar6, &Local_15, 1024);
								iVar6++;
							}
							return;
						}
						break;
				}
				func_411(2);
				return;
			}
			Local_15.f_305.f_1 = uVar1;
			Local_15.f_305.f_2 = { vVar2 };
			func_411(4);
			break;
		case 4:
			if (!func_54(&Local_362, 2048))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!func_41(&(Local_362[iVar0 /*52*/]), 4096))
				{
				}
				else if (!func_123(iVar0, 0, 1))
				{
				}
				else
				{
					Local_15.f_305.f_2 = { Local_362[iVar0 /*52*/].f_49 };
					func_411(5);
					return;
				}
				iVar0++;
			}
			func_63(&Local_15, 256);
			func_411(2);
			break;
		case 5:
			if (!func_54(&Local_362, 8192))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!func_41(&(Local_362[iVar0 /*52*/]), 16384))
				{
				}
				else if (!func_123(iVar0, 0, 1))
				{
				}
				else
				{
					func_63(&Local_15, 256);
					func_411(2);
					return;
				}
				iVar0++;
			}
			func_411(6);
			break;
		case 6:
			if (Local_15.f_305.f_5 >= Local_15.f_305.f_6)
			{
				if (Local_15.f_305.f_1 == -1)
				{
				}
				else
				{
					switch (Local_2027.f_10)
					{
						case joaat("COACH_HOLDUP_KIDNAP"):
							func_274(Local_15.f_305.f_1, &Local_15, 262144);
							if (func_415(&Local_15, joaat("PASSENGER_VIP"), 262144))
							{
								iVar7 = 0;
								while (iVar7 < 20)
								{
									func_416(iVar7, &Local_15, 262144);
									iVar7++;
								}
							}
							break;
						case joaat("COACH_HOLDUP_ROBBERY"):
							func_420(Local_15.f_305.f_1, &Local_15, 1024);
							if (func_418(&Local_15, 1024, 0))
							{
								iVar8 = 0;
								while (iVar8 < 4)
								{
									func_419(iVar8, &Local_15, 1024);
									iVar8++;
								}
							}
							break;
					}
				}
				func_421(&Local_15, 256);
				func_411(2);
				return;
			}
			if (!func_422(Local_15.f_305.f_5, Local_15.f_305.f_6, Local_15.f_305.f_2))
			{
				return;
			}
			Local_15.f_305.f_8 = -1;
			Local_15.f_305.f_5++;
			break;
		case 2:
			if (func_59(&Local_362, 1024, 0))
			{
				return;
			}
			Local_15.f_305.f_1 = -1;
			Local_15.f_305.f_2 = { 0f, 0f, 0f };
			Local_15.f_305.f_5 = 0;
			Local_15.f_305.f_6 = 0;
			Local_15.f_305.f_7 = 0;
			Local_15.f_305.f_9 = 0;
			Local_15.f_305.f_8 = -1;
			func_411(0);
			break;
	}
}

void func_197(var uParam0, int iParam1, bool bParam2)
{
	switch (func_199(bParam2))
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			func_423(uParam0, iParam1, bParam2);
			return;
		case joaat("COACH_HOLDUP_KIDNAP"):
			func_424(uParam0, iParam1, bParam2);
			return;
		default:
			break;
	}
}

void func_198()
{
	func_425();
}

int func_199(bool bParam0)
{
	return bParam0->f_10;
}

bool func_200(var uParam0, bool bParam1)
{
	if (!func_55(uParam0, 32768))
	{
		return false;
	}
	return func_210(uParam0) > bParam1->f_10.f_6;
}

bool func_201(int iParam0, var uParam1, int iParam2)
{
	return func_113(uParam1->f_16[iParam0 /*12*/].f_4, iParam2);
}

bool func_202(int iParam0, var uParam1, int iParam2)
{
	return func_113(uParam1->f_257[iParam0 /*5*/].f_1, iParam2);
}

int func_203(var uParam0, bool bParam1)
{
	switch (func_199(bParam1))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (!func_55(uParam0, 2048))
			{
				return 2;
			}
			if (uParam0->f_325 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!func_55(uParam0, 8192))
			{
				return 2;
			}
			if (uParam0->f_323 < bParam1->f_10.f_14)
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

int func_204(var uParam0, bool bParam1)
{
	switch (func_199(bParam1))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (!func_55(uParam0, 131072))
			{
				return 2;
			}
			if (uParam0->f_326 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!func_55(uParam0, 262144))
			{
				return 2;
			}
			if (uParam0->f_324 < bParam1->f_10.f_14)
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

int func_205()
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return 20;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 4;
		default:
			break;
	}
	return 0;
}

void func_206(int iParam0, bool bParam1)
{
	if (!func_426(iParam0, 0) && func_128(iParam0))
	{
		if (func_427(iParam0))
		{
			func_129(iParam0, 1);
			if (bParam1)
			{
				Local_2027.f_635++;
			}
			else
			{
				func_207();
			}
		}
		else
		{
			func_129(iParam0, 0);
		}
	}
}

void func_207()
{
	struct<2> Var0;

	Var0.f_1 = 11;
	func_428(&Var0, joaat("DELIVER"), func_211(255), func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32), GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
}

void func_208(bool bParam0, int iParam1)
{
	*bParam0 = 0;
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			*iParam1 = Local_2027.f_10.f_13;
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			*iParam1 = Local_2027.f_10.f_14;
			break;
	}
	*bParam0 = func_369(1);
}

int func_209(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_210(var uParam0)
{
	if (!func_55(&Local_15, 32768))
	{
		return 0;
	}
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_319, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_211(int iParam0)
{
	int iVar0;

	iVar0 = func_429(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_430(iVar0);
}

void func_212(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, struct<2> Param13)
{
	float fVar0;
	int iVar1;
	bool bVar2;

	if (iParam10 == 0)
	{
		return;
	}
	fVar0 = func_431(((BUILTIN::TO_FLOAT(iParam12) / 1000f) / 60f), 0.5f, 30f);
	func_432(iParam2, &iVar1, &bVar2, 0, fVar0);
	func_433(iParam2, &bVar2, 0, iParam4, iParam10, iParam11, bParam7);
	func_434(iParam2, 0, iParam5);
	func_435(iParam2, &bVar2, 0, bParam8, iParam9);
	func_436(iParam2, 0, Param13);
	func_437(iParam2, 0, iParam6);
	func_438(1149539403, uParam0, iParam2, 0, 255, 0, 1);
	func_432(iParam3, &iVar1, &bVar2, 1, fVar0);
	func_435(iParam3, &bVar2, 1, bParam8, iParam9);
	func_433(iParam3, &bVar2, 1, iParam4, iParam10, iParam11, bParam7);
	func_437(iParam3, 1, iParam6);
	if (!bVar2 && iVar1 != 0)
	{
		func_438(iVar1, uParam1, iParam3, 0, 255, 0, 0);
	}
}

void func_213(int iParam0)
{
	func_439(&(Local_2027.f_7), iParam0);
}

void func_214(int iParam0)
{
	int iVar0;

	if (!func_271(iParam0, 64))
	{
		return;
	}
	if (func_271(iParam0, 8388608) && func_440(iParam0, &iVar0, 0, 1))
	{
		NETWORK::_0xEE5AE9956743BA20(iVar0, false);
	}
	func_441(iParam0, 8192);
	func_441(iParam0, 16384);
	func_442(iParam0);
	func_441(iParam0, 64);
	func_441(iParam0, 67108864);
}

void func_215(int iParam0)
{
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iParam0);
	}
}

void func_216(bool bParam0)
{
	func_443(60, !bParam0);
}

void func_217(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_444(iVar0, 1))
	{
		return;
	}
	if (!bParam2 && !func_445(iVar0))
	{
		return;
	}
	func_221(1);
}

bool func_218(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return Global_1128574[iParam0 /*56*/].f_48 & 1 != 0;
}

void func_219(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_444(iVar0, 2))
	{
		return;
	}
	if (!bParam2 && !func_445(iVar0))
	{
		return;
	}
	func_221(2);
}

bool func_220(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return Global_1128574[iParam0 /*56*/].f_48 & 2 != 0;
}

void func_221(int iParam0)
{
	Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_48 = (Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_48 - (Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_48 && iParam0));
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

bool func_223(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_224(int iParam0, int iParam1)
{
	if (!func_446(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_447();
	}
}

void func_225(int iParam0, int iParam1, bool bParam2)
{
	if (func_446(iParam0, iParam1) && (!bParam2 || Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = 0;
		func_447();
	}
}

char* func_226()
{
	return "mp@freemode_cams@gfh_outro_cams";
}

bool func_227(int iParam0)
{
	return func_113(Local_2027.f_8, iParam0);
}

void func_228(int iParam0)
{
	func_439(&(Local_2027.f_8), iParam0);
}

void func_229(bool bParam0)
{
	if (!bParam0)
	{
		func_448(0);
	}
	Global_1940311.f_2 = bParam0;
}

int func_230(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1711865203;
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

char* func_231(int iParam0)
{
	switch (iParam0)
	{
		case 1711865203:
			return "script_common@wave@male@unapproved";
		default:
			break;
	}
	return "";
}

void func_232(bool bParam0)
{
	if (bParam0)
	{
		func_449(49);
	}
	else
	{
		func_450(49);
	}
}

bool func_233(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/].f_5))
	{
		iVar2 = NETWORK::_NET_TO_ANIM_SCENE(Local_15.f_16[iParam0 /*12*/].f_5);
		ANIMSCENE::_DELETE_ANIM_SCENE(iVar2);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/]);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				PED::SET_PED_CAN_RAGDOLL(iVar0, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_RESET_FLAG(iVar0, 36, false);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/].f_1))
	{
		iVar1 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/].f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
}

void func_235(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
}

bool func_236(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_237()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = joaat("S_M_M_AMBIENTLAWRURAL_01");
	if (!func_451(&Var1))
	{
		return iVar0;
	}
	if (!func_452(Var1, 1339124518, &uVar6))
	{
		return iVar0;
	}
	return uVar6;
}

int func_238()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = joaat("A_C_HORSE_MORGAN_BAY");
	if (!func_451(&Var1))
	{
		return iVar0;
	}
	if (!func_452(Var1, -118004582, &uVar6))
	{
		return iVar0;
	}
	return uVar6;
}

void func_239(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202[iParam0]))
	{
		return;
	}
	func_243(&(Local_2027.f_202[iParam0]));
	func_441(iParam0, 256);
	func_441(iParam0, 512);
	func_441(iParam0, 128);
	func_441(iParam0, 1024);
	func_441(iParam0, 2048);
	func_441(iParam0, 4096);
	if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
	{
		Local_2027.f_202.f_30[iParam0] = 255;
	}
}

void func_240(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202.f_21[iParam0]))
	{
		return;
	}
	func_243(&(Local_2027.f_202.f_21[iParam0]));
}

void func_241(int iParam0)
{
	func_243(&(Local_2027.f_202.f_25[iParam0]));
	func_453(iParam0, 2);
	func_453(iParam0, 4);
	func_453(iParam0, 1);
	func_453(iParam0, 8);
	if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
	{
		Local_2027.f_202.f_30[iParam0] = 255;
	}
}

void func_242()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_454(iVar0, 0);
		func_455(iVar0, 0);
		iVar0++;
	}
}

void func_243(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_244()
{
	func_243(&(Local_2027.f_202.f_58));
	if (!func_456(Local_2027.f_202.f_59))
	{
		return;
	}
	UIFEED::_0x2F901291EF177B02(Local_2027.f_202.f_59, 0);
}

void func_245(float fParam0)
{
	func_228(2097152);
	func_228(4194304);
	Local_2027.f_202.f_53 = 255;
	Local_2027.f_202.f_54 = 0;
	if (!func_457(fParam0))
	{
		return;
	}
	UIFEED::_0x2F901291EF177B02(fParam0->f_202.f_56, 0);
	fParam0->f_202.f_56 = 0;
	fParam0->f_202.f_60 = 0;
}

bool func_246(int iParam0)
{
	return iParam0 != 0;
}

void func_247(var uParam0, bool bParam1, bool bParam2)
{
	struct<30> Var0;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar40;

	if (((*uParam0)[0 /*34*/] != 0 || bParam2) || ((uParam0[0 /*34*/])->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1082130432;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_1);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_2);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_3);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_4);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_5);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_6);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_10);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_11);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_12);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_14);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_20);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_21);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_22);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_16);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_17);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_18);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_19);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((*uParam0)[iVar40 /*34*/]);
			if (!bParam1)
			{
				uVar34 = (uParam0[iVar40 /*34*/])->f_23;
				uVar35 = (uParam0[iVar40 /*34*/])->f_25;
				uVar36 = (uParam0[iVar40 /*34*/])->f_26;
				uVar37 = (uParam0[iVar40 /*34*/])->f_27;
				uVar38 = (uParam0[iVar40 /*34*/])->f_28;
				uVar39 = (uParam0[iVar40 /*34*/])->f_29;
			}
			MISC::_COPY_MEMORY(uParam0[iVar40 /*34*/], &Var0, 34);
			if (!bParam1)
			{
				(uParam0[iVar40 /*34*/])->f_23 = uVar34;
				(uParam0[iVar40 /*34*/])->f_25 = uVar35;
				(uParam0[iVar40 /*34*/])->f_26 = uVar36;
				(uParam0[iVar40 /*34*/])->f_27 = uVar37;
				(uParam0[iVar40 /*34*/])->f_28 = uVar38;
				(uParam0[iVar40 /*34*/])->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_248(int iParam0, bool bParam1)
{
	struct<14> Var0;

	if (iParam0->f_2 > 0)
	{
		UIFEED::_0xDD1232B332CBB9E7(12, 1, 0);
		if (bParam1)
		{
			func_458(iParam0);
			func_459();
		}
		func_460(iParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(iParam0->f_4));
		iParam0->f_9 = 0;
		func_461(0);
		func_462(0);
		UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(iParam0, &Var0, 15);
	}
}

int func_249(bool bParam0)
{
	if (!func_463(joaat("FREEMODE"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_250(bool bParam0)
{
	int iVar0;

	if (Global_1900688.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_21() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688.f_2 == 4 && Global_1900688.f_12 != Global_1900688.f_13) && !bParam0)
	{
		Global_1900688.f_1 = Global_1900688.f_2;
		Global_1900688.f_12 = Global_1900688.f_13;
		func_464(iVar0, Global_1900688.f_12);
	}
	else
	{
		Global_1900688.f_1 = 0;
		Global_1900688.f_7 = iVar0;
		Global_1900688.f_8 = func_465();
		Global_1900688.f_9 = func_466(Global_1893587.f_2);
		Global_1900688.f_11 = func_467(Global_1896622.f_41);
		if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
		{
			func_468(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
		else if (Global_1900688.f_11 != -1)
		{
			func_468(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
		}
		else
		{
			func_468(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
	}
	Global_1900688.f_2 = 0;
}

int func_251()
{
	if (func_33(1))
	{
		if (func_33(8192))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_252(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = PLAYER::PLAYER_ID();
	Var1.f_1 = -1;
	if (!bParam1)
	{
		func_469(Local_2027.f_2, iParam0 != 1, &Var1);
	}
	if (iParam0 == 1 && (func_470(iVar0, 1) || func_470(iVar0, 32)))
	{
		func_471(4);
		func_471(8);
	}
	if (!bParam1)
	{
		func_126(2);
	}
	if (Local_2027.f_634 >= 32 || Local_2027.f_634 < 0)
	{
		return;
	}
	func_39(&(Local_362[Local_2027.f_634 /*52*/]), 67108864);
}

void func_253(bool bParam0)
{
	func_472(Local_2027.f_1, bParam0);
}

void func_254(bool bParam0, bool bParam1)
{
	func_473(Local_2027.f_1, bParam1, bParam0);
}

void func_255(bool bParam0)
{
	func_474(Local_2027.f_1, bParam0);
}

void func_256(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_475(Param0);
	if (!func_476(iVar1))
	{
		return;
	}
	iVar0 = func_477(iVar1);
	if (!func_478(iVar0))
	{
		return;
	}
	iVar2 = func_479(iVar1);
	if (!func_480(iVar2))
	{
		return;
	}
	if (bParam4 <= 0)
	{
	}
	else if (bParam3 >= bParam4)
	{
		bVar6 = true;
		bVar4 = true;
		bVar5 = true;
	}
	else
	{
		bVar6 = false;
		bVar4 = bParam3 >= true;
		fVar3 = (BUILTIN::TO_FLOAT(bParam3) / BUILTIN::TO_FLOAT(bParam4));
		bVar5 = fVar3 >= 0.5f;
	}
	if (bVar5)
	{
		switch (iParam6)
		{
			case 0:
			case 2:
				iVar7 = 0;
				break;
			case 1:
				iVar7 = 1;
				break;
		}
	}
	else if (bVar4)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 2;
	}
	iVar10 = func_481(iVar0);
	iVar11 = func_106(Param0);
	iVar8 = func_482(iVar1);
	iVar9 = func_483(iVar0);
	if (func_484())
	{
		func_485(iVar10, iVar11);
		func_486(iVar10, iVar8);
		func_487(iVar10, iVar7);
		func_488(iVar10, bParam2, bVar4);
		func_489(iVar10, bParam2, bVar6);
		func_490(iVar8, bParam2, bVar4, Param0, iParam5, iParam6 == 3, bParam7);
		if (!bParam2)
		{
			if (bVar4)
			{
				func_491(iVar2, iVar0, joaat("PASS_NEAR"), Param0);
			}
			else
			{
				func_491(iVar2, iVar0, joaat("FAIL_NEAR"), Param0);
			}
		}
		func_492(bVar4);
	}
	func_493(iVar9, bParam2, bVar4);
	func_494(Param0, bVar4);
	func_495(1);
	func_495(0);
	func_496(0);
	func_497(0);
	func_221(4);
}

bool func_257(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2027.f_634;
	}
	return func_113(Local_362[iParam1 /*52*/].f_41.f_1, iParam0);
}

void func_258()
{
	int iVar0;

	if (!func_257(4096, 255))
	{
		return;
	}
	iVar0 = -1429099402;
	PED::_0xDE7B2B4144906CDF(iVar0, Global_34);
	func_498(4096);
}

void func_259(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!func_292(&Local_2027, &Var10) || !func_312(&Var10, 556233122, iParam0, 0))
	{
		return;
	}
	iVar15 = func_499(iParam0);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_312(&Var0, -110495140, iVar17, 0))
		{
			return;
		}
		iVar20 = func_500(iParam0, iVar17);
		iVar16 = 0;
		while (iVar16 < iVar20)
		{
			Var5 = { Var0 };
			if ((!func_312(&Var5, 938546485, iVar16, 0) || !func_299(Var5, 957840570, &iVar18, 0)) || !func_176(Var5, -537439784, &uVar19, 0))
			{
			}
			else
			{
				iVar21 = uVar19;
				if (!func_501(iVar21, iVar18, &iVar22))
				{
				}
				else
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar22, 0f);
				}
			}
			iVar16++;
		}
		iVar17++;
	}
}

void func_260()
{
	if (!func_257(8, 255))
	{
		return;
	}
	NETWORK::_0x4B05B97BA46F419D(0);
	NETWORK::_0x89D803CD48622150(0);
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, func_502(), true);
	}
	func_498(8);
}

void func_261(int iParam0)
{
	func_122(&(Local_362[Local_2027.f_634 /*52*/].f_41.f_1), iParam0);
}

bool func_262(struct<2> Param0, int iParam2)
{
	if (!func_28(Param0))
	{
		return false;
	}
	func_503(iParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_263(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_430(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_504(iVar0);
	switch (iVar1)
	{
		case 2:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

var func_264(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_263(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_430(iParam0);
	iVar2 = func_504(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_505(2);
		case 1:
			return func_505(3);
		default:
			break;
	}
	return uVar0;
}

int func_265()
{
	return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}

void func_266(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	if (bParam3)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
	}
}

int func_267(int iParam0)
{
	return iParam0;
}

void func_268(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_21() != 0)
	{
		return;
	}
	if (func_506())
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
		if (!Global_1139381.f_3876.f_2[func_507(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1139381.f_3876.f_2[func_507(iParam0, 1) /*4*/].f_2++;
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
	func_508(&Var0, uVar7);
}

char* func_269()
{
	return "supply_delivered";
}

char* func_270()
{
	return "HUD_MP_FREE_MODE";
}

bool func_271(int iParam0, int iParam1)
{
	return func_113(Local_2027.f_45[iParam0 /*6*/].f_1, iParam1);
}

void func_272(int iParam0, int iParam1)
{
	func_122(&(Local_2027.f_45[iParam0 /*6*/].f_1), iParam1);
}

void func_273(int iParam0, int iParam1)
{
	func_122(&(Local_2027.f_166[iParam0]), iParam1);
}

void func_274(int iParam0, var uParam1, int iParam2)
{
	func_122(&(uParam1->f_16[iParam0 /*12*/].f_4), iParam2);
}

int func_275(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_509(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_276(int iParam0, int iParam1)
{
	return (Global_1107216.f_33[iParam0 /*16*/].f_3.f_8 && iParam1) != 0;
}

void func_277(int iParam0)
{
	Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_54.f_1 = (Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_54.f_1 || iParam0);
}

void func_278(int iParam0, bool bParam1)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_2027.f_540), iParam0);
	if (bParam1)
	{
		MISC::_0xE84AAC1B22A73E99(&(Local_2027.f_540.f_4), iParam0);
	}
}

void func_279(int iParam0, bool bParam1)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_2027.f_540.f_2), iParam0);
	if (bParam1)
	{
		MISC::_0xE84AAC1B22A73E99(&(Local_2027.f_540.f_6), iParam0);
	}
}

void func_280(char* sParam0, int* iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, func_510(Local_2027), 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, iParam1);
}

var func_281(int iParam0, bool bParam1)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	struct<2> Var4;

	Var4.f_1 = -1;
	iVar3 = func_430(iParam0);
	if (bParam1)
	{
		iVar2 = joaat("RIVAL_ATTEMPTS");
	}
	else
	{
		iVar2 = joaat("ATTEMPTS");
	}
	if (!func_511(iVar3, iVar2, &Var4, &Var0))
	{
		return -1;
	}
	return func_512(Var0, -1);
}

int func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -537439784;
		case 1:
			return 1679284980;
		case 2:
			return 1339124518;
		case 3:
			return 1329039358;
		case 4:
			return 1922377121;
		case 5:
			return -1762951883;
		case 6:
			return 1891838186;
		case 7:
			return -1662733059;
		case 8:
			return 1532715368;
		case 9:
			return 1325183772;
		case 10:
			return 1323038251;
		case 11:
			return -1561379682;
		case 12:
			return 1860996644;
		case 13:
			return 2039042927;
		case 14:
			return -1843028879;
		case 15:
			return -2122207177;
		case 16:
			return 644136394;
		case 17:
			return 1794832507;
		case 18:
			return -2119193689;
		case 19:
			return 1419063592;
		case 20:
			return 1111932099;
		case 21:
			return -864073234;
		case 22:
			return -760151658;
		case 23:
			return -1530266946;
		case 24:
			return 1471513692;
		case 25:
			return 873236619;
		case 26:
			return -1852046395;
		case 27:
			return -600916972;
		case 28:
			return -1318702711;
		case 29:
			return -1476590111;
		case 30:
			return -1355034;
		case 31:
			return 1013307464;
		case 32:
			return 957840570;
		case 33:
			return 725091599;
		case 34:
			return -542873544;
		case 35:
			return 1234220482;
		case 36:
			return -19593823;
		case 37:
			return 751620374;
		case 38:
			return -507939340;
		case 39:
			return 1146320435;
		case 40:
			return -333727878;
		case 41:
			return 408107890;
		case 42:
			return 1357107565;
		case 43:
			return -321268365;
		case 44:
			return 1252114078;
		case 45:
			return 592666605;
		case 46:
			return -1321720745;
		case 47:
			return 2064763470;
		case 48:
			return -118004582;
		case 49:
			return 705932105;
		case 50:
			return -1865369028;
		case 51:
			return -900489166;
		case 52:
			return -359968085;
		case 53:
			return 188462142;
		case 54:
			return 733551533;
		case 55:
			return -2107902278;
		case 56:
			return 1645569887;
		case 57:
			return -2117302676;
		case 58:
			return 1594022734;
		case 59:
			return 45657025;
		case 60:
			return 587406518;
		case 61:
			return -1339596857;
		case 62:
			return -779153855;
		case 63:
			return 100469918;
		case 64:
			return -1668085295;
		case 65:
			return 1245766010;
		case 66:
			return -727548384;
		case 67:
			return -36224614;
		case 68:
			return -252450326;
		case 69:
			return -1456038853;
		case 70:
			return 82347414;
		case 71:
			return -1580911258;
		case 72:
			return 999526519;
		case 73:
			return -880340422;
		case 74:
			return 902857663;
		case 75:
			return -697657725;
		case 76:
			return -1404661375;
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

char* func_283(int iParam0)
{
	switch (iParam0)
	{
		case -537439784:
			return ":type";
		case 1679284980:
			return ":drive_to_coords";
		case 1339124518:
			return ":model";
		case 1323038251:
			return ":mounted";
		case 1329039358:
			return ":spawn_pos";
		case 1922377121:
			return ":spawn_heading";
		case 1891838186:
			return ":spawn_offset";
		case -1662733059:
			return ":spawn_seat";
		case 1325183772:
			return ":weapon";
		case 1532715368:
			return ":vehicle_id";
		case -1762951883:
			return ":role";
		case -1561379682:
			return ":mission_time";
		case 1860996644:
			return ":health";
		case 2039042927:
			return ":flee_chance";
		case -1843028879:
			return ":allow_use_no_wagon_nodes";
		case -2122207177:
			return ":has_money_bag";
		case 644136394:
			return ":position";
		case 1794832507:
			return ":scale";
		case -2119193689:
			return ":rotation";
		case 1419063592:
			return ":secondary_dropoff";
		case 1111932099:
			return ":no_z_probe";
		case -864073234:
			return ":box_volume";
		case -760151658:
			return ":dont_acknowledge_players";
		case -1530266946:
			return ":scenario";
		case 1471513692:
			return ":heading";
		case 873236619:
			return ":is_propset";
		case -1852046395:
			return ":end_position";
		case -600916972:
			return ":end_rotation";
		case -1318702711:
			return ":shot_duration_ms";
		case -1476590111:
			return ":fade_time_ms";
		case -1355034:
			return ":effect";
		case 1013307464:
			return ":relative_to_player";
		case 957840570:
			return ":target_index";
		case 725091599:
			return ":delete_after_shot";
		case -542873544:
			return ":fov";
		case 1234220482:
			return ":transition_to_gameplay_cam";
		case -19593823:
			return ":transition_from_gameplay_cam";
		case 751620374:
			return ":id";
		case -507939340:
			return ":min_required_players";
		case 1146320435:
			return ":max_required_players";
		case -333727878:
			return ":delete_turned_in_objectives_after_shot";
		case 408107890:
			return ":exit_instance_at_start_of_shot";
		case 1357107565:
			return ":radius";
		case -321268365:
			return ":enabled";
		case 1252114078:
			return ":min_wave_time";
		case 592666605:
			return ":max_wave_time";
		case -1321720745:
			return ":initial_delay";
		case 2064763470:
			return ":is_law";
		case -118004582:
			return ":mount_model";
		case 705932105:
			return ":weight";
		case -1865369028:
			return ":enable_law";
		case -900489166:
			return ":remove_default_weapons";
		case -359968085:
			return ":can_have_treasure_map_loot";
		case 188462142:
			return ":accuracy";
		case 733551533:
			return ":primary_dropoff_name";
		case -2107902278:
			return ":secondary_dropoff_name";
		case 1645569887:
			return ":placement_type";
		case -2117302676:
			return ":hitch_pos";
		case 1594022734:
			return ":mission_is_stationary";
		case 45657025:
			return ":weapon_out";
		case 587406518:
			return ":dont_spawn_relative";
		case -1339596857:
			return ":outfit";
		case 100469918:
			return ":outfit_index";
		case -779153855:
			return ":loco_motion_type";
		case -1668085295:
			return ":break_wheel_index";
		case 1245766010:
			return ":primary_dropoff_is_near_mission_giver";
		case -727548384:
			return ":cinematic_location_position_offset";
		case -36224614:
			return ":cinematic_location_rotation_offset";
		case -252450326:
			return ":cinematic_location_focus_override";
		case -1456038853:
			return ":cinematic_location_camera_name";
		case 82347414:
			return ":scenario_pos";
		case -1580911258:
			return ":scenario_heading";
		case 999526519:
			return ":override_transition_cam";
		case -880340422:
			return ":avoidance_radius";
		case 902857663:
			return ":law_avoidance_radius";
		case -697657725:
			return ":has_discoverable_name";
		case -1404661375:
			return ":crime_config";
		default:
			break;
	}
	return "";
}

int func_284(var uParam0, int iParam1, char* sParam2)
{
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iParam1, sParam2))
	{
		return 0;
	}
	return 1;
}

int func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1094140359;
		case 1:
			return 1929036093;
		case 2:
			return 167061367;
		case 3:
			return 615415475;
		case 4:
			return -1813459955;
		case 5:
			return -788131562;
		case 6:
			return 1849119077;
		case 7:
			return -911220092;
		case 8:
			return -1874578615;
		case 9:
			return -244186873;
		case 10:
			return -1283139781;
		case 11:
			return 2067657977;
		case 12:
			return 2101858238;
		case 13:
			return 1300919788;
		case 14:
			return 556233122;
		case 15:
			return -1925794261;
		case 16:
			return -110495140;
		case 17:
			return -556151360;
		case 18:
			return -1441758265;
		case 19:
			return 938546485;
		case 20:
			return 565295571;
		case 21:
			return 1281647104;
		case 22:
			return 419371455;
		case 23:
			return -2072295915;
		case 24:
			return -640241378;
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

char* func_286(int iParam0)
{
	switch (iParam0)
	{
		case 1094140359:
			return "data";
		case 1929036093:
			return "activity/locations/location(id=%x)";
		case 167061367:
			return "activity/locations/location(%i)";
		case 615415475:
			return "activity/locations";
		case -1813459955:
			return "variations/variation(id=%x)";
		case -788131562:
			return "peds/ped(%i)";
		case 1849119077:
			return "peds";
		case -911220092:
			return "vehicles/vehicle(%i)";
		case -1874578615:
			return "vehicles";
		case -244186873:
			return "dropoff_volumes";
		case -1283139781:
			return "dropoff_volumes/volume(%i)";
		case 2067657977:
			return "props";
		case 2101858238:
			return "props/prop(%i)";
		case 1300919788:
			return "cutscenes";
		case 556233122:
			return "cutscenes/cutscene(id=%x)";
		case -110495140:
			return "shot(%i)";
		case -556151360:
			return "camera";
		case -1441758265:
			return "actors";
		case 938546485:
			return "actors/actor(%i)";
		case 565295571:
			return "veg_modifiers/veg_modifier(%i)";
		case 1281647104:
			return "veg_modifiers";
		case -1925794261:
			return "cutscenes/cutscene(%i)";
		case 419371455:
			return "chaser_waves";
		case -2072295915:
			return "weapons";
		case -640241378:
			return "weapons/weapon(%i)";
		default:
			break;
	}
	return "";
}

int func_287(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 600000;
	if (func_292(uParam0, &Var0))
	{
		func_299(Var0, -1561379682, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_288(var uParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_292(uParam0, &Var0))
	{
		func_313(Var0, 1679284980, &vVar5, 0);
	}
	return vVar5;
}

int func_289(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_513(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

int func_290(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_514(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 20)
	{
		return 20;
	}
	return iVar5;
}

int func_291(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_176(Var0, -1404661375, &uVar5, 0))
	{
		return uVar5;
	}
	return iParam0;
}

bool func_292(int iParam0, var uParam1)
{
	*uParam1 = iParam0->f_4;
	uParam1->f_2 = 1929036093;
	uParam1->f_3 = iParam0->f_4.f_1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
}

bool func_293()
{
	struct<5> Var0;
	var uVar5;

	if (func_292(&Local_2027, &Var0) && func_177(Var0, -1865369028, &uVar5, 0))
	{
		return uVar5;
	}
	return true;
}

bool func_294()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 1;
	if (!func_451(&Var1))
	{
		return iVar0;
	}
	if (!func_177(Var1, -321268365, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

bool func_295()
{
	struct<5> Var0;
	var uVar5;

	if (!func_292(&Local_2027, &Var0))
	{
		return false;
	}
	if (!func_177(Var0, 1245766010, &uVar5, 0))
	{
		return false;
	}
	return uVar5;
}

Vector3 func_296(var uParam0, var uParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_172(uParam0, &Var0, uParam1))
	{
		func_313(Var0, 1329039358, &vVar5, 0);
	}
	return vVar5;
}

bool func_297(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_172(iParam0, &Var0, iParam1))
	{
		func_177(Var0, -1843028879, &uVar5, 0);
	}
	return uVar5;
}

bool func_298(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_172(iParam0, &Var0, iParam1))
	{
		func_177(Var0, 1111932099, &uVar5, 0);
	}
	return uVar5;
}

bool func_299(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_300(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_176(Var0, -1762951883, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_301(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_313(Var0, 1891838186, &vVar5, 0);
	}
	return vVar5;
}

int func_302(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_299(Var0, 1532715368, &iVar5, 0);
	}
	if (iVar5 >= 3)
	{
		iVar5 = 2;
	}
	else if (iVar5 < 0)
	{
		iVar5 = 0;
	}
	return iVar5;
}

bool func_303(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1) && func_176(Var0, -1662733059, &uVar5, 0))
	{
		return true;
	}
	return false;
}

bool func_304(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = iParam2;
	if (!func_141(&Local_2027, &Var0, iParam0) || !func_177(Var0, iParam1, &iVar5, 0))
	{
		return iParam2;
	}
	return iVar5;
}

bool func_305(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, -2122207177, &iVar5, 0);
	}
	return iVar5;
}

void func_306(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	bool bVar5;

	bVar5 = iParam3;
	if (func_141(&Local_2027, &Var0, iParam0))
	{
		func_177(Var0, iParam1, &bVar5, 0);
	}
	if (bVar5)
	{
		func_122(&(Local_2027.f_45[iParam0 /*6*/].f_1), iParam2);
	}
}

int func_307(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_515(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 4)
	{
		return 4;
	}
	return iVar5;
}

int func_308(var uParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;
	int iVar15;

	if (func_309(uParam0, &Var0, iParam1) && func_313(Var0, 644136394, &vVar5, 1))
	{
		if (!func_313(Var0, 1794832507, &vVar8, 0))
		{
			vVar8.x = 9f;
			vVar8.f_1 = 9f;
			vVar8.f_2 = 10f;
		}
		func_313(Var0, -2119193689, &vVar11, 0);
		func_177(Var0, 1419063592, bParam2, 0);
		func_177(Var0, -864073234, &bVar14, 0);
		if (bVar14)
		{
			iVar15 = VOLUME::_CREATE_VOLUME_BOX(vVar5, vVar11, vVar8);
		}
		else
		{
			iVar15 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar5, vVar11, vVar8);
		}
	}
	return iVar15;
}

bool func_309(int iParam0, var uParam1, int iParam2)
{
	if (func_292(iParam0, uParam1))
	{
		uParam1->f_2 = -1283139781;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_310(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_311(var uParam0)
{
	switch (uParam0->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
		case joaat("COACH_HOLDUP_KIDNAP"):
			return joaat("DELIVER");
		default:
			break;
	}
	return joaat("NONE");
}

bool func_312(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_313(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

void func_314(var uParam0, int iParam1)
{
	*uParam0++;
	if (*uParam0 >= iParam1)
	{
		*uParam0 = 0;
	}
}

void func_315(struct<2> Param0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	if (!func_29(Param0, func_516()))
	{
		return;
	}
	iVar0 = func_517(iVar1);
	if (!func_518(iVar0))
	{
		return;
	}
	func_519(iVar0);
	if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (func_520(1) && func_276(iVar0, 1))
		{
			func_521();
		}
		if (func_520(0) && NETWORK::_NETWORK_SESSION_GET_FLAGS() & 9 != 0)
		{
			func_522();
		}
	}
}

bool func_316(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!func_123(iVar0, 0, 1))
	{
		return false;
	}
	if (!func_41(&(Local_362[iVar0 /*52*/]), 32) && !func_41(&(Local_362[iVar0 /*52*/]), 64))
	{
		return false;
	}
	return true;
}

bool func_317(int iParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 20)
	{
		uVar0 = (uVar0 || Local_2027.f_45[iVar1 /*6*/].f_1);
		iVar1++;
	}
	return func_113(uVar0, iParam0);
}

bool func_318(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3[iVar1 /*4*/]))
		{
		}
		else
		{
			iVar0 = NETWORK::NET_TO_VEH(uParam0->f_3[iVar1 /*4*/]);
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			else if (func_523(iVar0, PLAYER::PLAYER_PED_ID(), 1, 1) > 80f)
			{
			}
			else
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_319(var uParam0, int iParam1)
{
	func_439(&(uParam0->f_1), iParam1);
}

void func_320(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (iVar0 == Local_2027.f_631)
	{
		if (!func_524(iVar0, &fVar1, 1))
		{
			Local_2027.f_631 = 255;
		}
		Local_2027.f_632 = fVar1;
		return;
	}
	if (!func_524(iVar0, &fVar1, 1))
	{
		return;
	}
	if (Local_2027.f_631 != 255 && Local_2027.f_632 < fVar1)
	{
		return;
	}
	Local_2027.f_631 = iVar0;
	Local_2027.f_632 = fVar1;
}

void func_321()
{
	if (func_33(1) && func_526(func_525(&Local_15, &Local_2027), Local_2027.f_10.f_6))
	{
		func_527(Local_2027.f_2);
	}
	if (!func_33(1048576))
	{
		return;
	}
	if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32))
	{
		func_73();
		func_74();
		func_75();
		return;
	}
	func_528();
	if (func_529(255))
	{
		func_530();
	}
	else
	{
		func_73();
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619) && func_531(VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619), 30f, 1))
	{
		func_532();
	}
	else
	{
		func_74();
	}
}

void func_322()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (!func_55(&Local_15, 536870912) || func_55(&Local_15, 524288))
	{
		return;
	}
	if (func_33(134217728))
	{
		if (((func_33(1) && func_227(2)) && func_41(&(Local_362[Local_2027.f_634 /*52*/]), 2097152)) && func_209(Local_2027.f_633) > 8000)
		{
			func_103();
			func_319(&(Local_362[Local_2027.f_634 /*52*/]), 64);
			func_319(&(Local_362[Local_2027.f_634 /*52*/]), 32);
			func_213(1);
			func_213(8192);
			func_43(&Local_2027, &Local_362);
		}
		return;
	}
	bVar0 = func_33(1);
	bVar1 = true;
	iVar4 = PLAYER::PLAYER_ID();
	if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (((!func_202(iVar2, &Local_15, 4096) || !func_202(iVar2, &Local_15, 128)) || func_202(iVar2, &Local_15, 16)) || func_202(iVar2, &Local_15, 2))
			{
			}
			else if (func_80(iVar2, 16))
			{
				if (func_80(iVar2, 32))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar5 = false;
				iVar3 = Local_15.f_257[iVar2 /*5*/].f_3;
				if (bVar0)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (iVar3 == iVar4 || GANG::_0x3F59FE6F37869576(iVar4, iVar3))
						{
							bVar5 = true;
							bVar1 = false;
						}
					}
				}
				if (bVar5)
				{
					func_273(iVar2, 32);
				}
				else
				{
					func_129(iVar2, 0);
				}
				func_273(iVar2, 16);
			}
			iVar2++;
		}
	}
	else if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if (Local_15.f_16[iVar2 /*12*/].f_2 != joaat("PASSENGER_VIP"))
			{
			}
			else if (!func_201(iVar2, &Local_15, 67108864) || func_201(iVar2, &Local_15, 32))
			{
			}
			else if (func_271(iVar2, 8388608))
			{
				if (func_271(iVar2, 16777216))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar5 = false;
				iVar3 = Local_15.f_16[iVar2 /*12*/].f_7;
				if (bVar0)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (iVar3 == iVar4 || GANG::_0x3F59FE6F37869576(iVar4, iVar3))
						{
							bVar5 = true;
							bVar1 = false;
						}
					}
				}
				if (bVar5)
				{
					func_272(iVar2, 16777216);
				}
				else
				{
					func_129(iVar2, 0);
				}
				func_272(iVar2, 8388608);
			}
			iVar2++;
		}
	}
	if (bVar1)
	{
		func_126(134217728);
		Local_2027.f_633 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

void func_323()
{
	float fVar0;

	if (func_533(&fVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_34), fVar0);
	}
}

void func_324()
{
	int iVar0;
	int iVar1;

	if ((func_33(1) && func_534()) && func_55(&Local_15, 268435456))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (GANG::_0x81FB74C83C2ED69F(iVar1))
			{
			}
			else
			{
				func_535(iVar1);
			}
			iVar0++;
		}
	}
	else if ((!func_33(1) && func_55(&Local_15, 268435456)) && func_536(1))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2027.f_618), iVar0))
			{
			}
			else
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
				}
				else if (GANG::_0x81FB74C83C2ED69F(iVar1))
				{
				}
				else
				{
					func_535(iVar1);
				}
			}
			iVar0++;
		}
	}
}

bool func_325()
{
	return (func_537() != 0 || func_538(1));
}

bool func_326()
{
	return func_539() != 0;
}

int func_327(int iParam0)
{
	if (func_326())
	{
		return 0;
	}
	if (!func_325())
	{
		return 0;
	}
	if (func_540())
	{
		func_541(2);
	}
	else
	{
		func_541(1);
	}
	func_542(iParam0);
	return 1;
}

bool func_328()
{
	if (func_543(255) && !func_544(255))
	{
		return false;
	}
	return true;
}

bool func_329()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) || !GANG::_0x3F59FE6F37869576(iVar0, iVar3))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
			{
				return false;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (!func_41(&(Local_362[iVar2 /*52*/]), 16777216))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_330(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (!func_545())
	{
		return false;
	}
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1) && !PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1))
	{
		return false;
	}
	if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, false, 0, false) || !func_236(iVar2))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (func_523(iVar1, PLAYER::PLAYER_PED_ID(), 1, 0) > 30f)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
	{
		iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
		iVar5 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar1));
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1);
			if (ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
		else
		{
			}
			else
			{
				iVar6++;
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return false;
	}
	else
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		return false;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iVar3))
	{
		return false;
	}
	iVar7 = NETWORK::PED_TO_NET(iVar3);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/] != iVar7)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			*iParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_331(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CHASER"):
		case joaat("DROPOFF_GUARD"):
			return false;
		default:
			break;
	}
	return true;
}

void func_332(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_39(&(Local_362[Local_2027.f_634 /*52*/]), 32);
			break;
		case 2:
			func_39(&(Local_362[Local_2027.f_634 /*52*/]), 64);
			func_126(8192);
			func_115(&(Local_362[Local_2027.f_634 /*52*/]), &Local_2027);
			if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				func_547(7, PLAYER::PLAYER_ID(), 0, func_546(0, 8));
			}
			break;
	}
	Local_362[Local_2027.f_634 /*52*/].f_48 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_548(Local_2027.f_1);
	func_549(Local_2027.f_1, 1, func_293(), 0);
	func_550(6);
	func_126(1);
	func_43(&Local_2027, &Local_362);
	func_463(joaat("CAN_KILL"), 0);
}

void func_333()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	vector3 vVar8;

	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 1048576))
	{
		func_551();
	}
	if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 128))
	{
		return;
	}
	if (Local_362[Local_2027.f_634 /*52*/].f_46 == -1)
	{
		func_552(0);
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) || PED::IS_PED_RAGDOLL(iVar0)) || TASK::IS_PED_GETTING_UP(iVar0)) || PED::_0x3BDFCF25B58B0415(iVar0)) || PED::_0x0E99E3BF11BB6367(iVar0)) || PED::IS_PED_ON_MOUNT(iVar0)) || PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		func_552(0);
		return;
	}
	if (Local_15.f_16[Local_362[Local_2027.f_634 /*52*/].f_46 /*12*/].f_3 != 22)
	{
		func_552(0);
		return;
	}
	if (((((!func_440(Local_362[Local_2027.f_634 /*52*/].f_46, &iVar1, 1, 0) || PED::IS_PED_BEING_STUNNED(iVar1, 0)) || PED::_0x3BDFCF25B58B0415(iVar1)) || TASK::IS_PED_GETTING_UP(iVar1)) || PED::_0x0E99E3BF11BB6367(iVar1)) || PED::IS_PED_RAGDOLL(iVar1))
	{
		func_552(0);
		return;
	}
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 256))
	{
		return;
	}
	if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 256) && !func_41(&(Local_362[Local_2027.f_634 /*52*/]), 512))
	{
		func_39(&(Local_362[Local_2027.f_634 /*52*/]), 256);
		return;
	}
	if (func_201(Local_362[Local_2027.f_634 /*52*/].f_46, &Local_15, 2))
	{
		func_552(0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[Local_362[Local_2027.f_634 /*52*/].f_46 /*12*/].f_5))
	{
		return;
	}
	iVar2 = NETWORK::_NET_TO_ANIM_SCENE(Local_15.f_16[Local_362[Local_2027.f_634 /*52*/].f_46 /*12*/].f_5);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar2))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iVar2, false))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_553(), false)))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_554(), false)) && ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_554(), false) != iVar0)
	{
		func_552(0);
		return;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(iVar2, func_554()) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar2, false)) || ANIMSCENE::_0xF94692EB9DC15D74(iVar2, 0))
	{
		func_552(1);
		return;
	}
	if (Local_2027.f_636 == -1)
	{
		Local_2027.f_636 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	Var3 = { func_556(iVar2, func_554(), func_555(0)) };
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) && !func_557(iVar0, -828834893))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
		func_552(0);
		return;
	}
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 1048576))
	{
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar7, false, 0, false) && func_236(iVar7))
	{
		WEAPON::_0x94A3C1B804D291EC(iVar0, 0, 0, 0, 0);
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar7, false, 1, false) && func_236(iVar7))
	{
		WEAPON::_0x94A3C1B804D291EC(iVar0, 1, 1, 1, 0);
		return;
	}
	if (Local_2027.f_636 != -1 && NETWORK::GET_TIME_DIFFERENCE(Local_2027.f_636, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 6000)
	{
		func_39(&(Local_362[Local_2027.f_634 /*52*/]), 1048576);
		return;
	}
	vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_553(), false), 0f, 0.8f, 0f) };
	if (!func_557(iVar0, 713668775))
	{
		if (func_558(iVar0, vVar8, 0) > 0.2f)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar8, 1f, 20000, 0.25f, 512, Var3.f_3);
		}
		else
		{
			func_39(&(Local_362[Local_2027.f_634 /*52*/]), 1048576);
		}
	}
	else if (func_558(iVar0, vVar8, 0) < 0.2f)
	{
		func_39(&(Local_362[Local_2027.f_634 /*52*/]), 1048576);
	}
}

bool func_334(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vParam1);
}

bool func_335(int iParam0)
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			return func_559(iParam0);
		case joaat("COACH_HOLDUP_KIDNAP"):
			return func_560(iParam0);
		default:
			break;
	}
	return false;
}

void func_336()
{
	Global_1051439.f_3259 = MISC::GET_FRAME_COUNT();
}

bool func_337(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32);
	bVar3 = func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64);
	if (!bVar2 && !bVar3)
	{
		return false;
	}
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!func_561())
			{
				return false;
			}
			*iParam0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				return false;
			}
			if (func_55(&Local_15, 524288))
			{
				return true;
			}
			if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8388608))
			{
				return true;
			}
			if (!NETWORK::_0xB07D3185E11657A5(*iParam0))
			{
				return false;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*iParam0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (Local_15.f_257[iVar0 /*5*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar0 /*5*/]))
				{
				}
				else
				{
					if (!func_202(iVar0, &Local_15, 256) && !func_202(iVar0, &Local_15, 512))
					{
						return false;
					}
					return true;
				}
				iVar0++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (!func_562(1))
			{
				return false;
			}
			*iParam0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				return false;
			}
			if (func_55(&Local_15, 524288))
			{
				return true;
			}
			if (!NETWORK::_0xB07D3185E11657A5(*iParam0))
			{
				return false;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*iParam0);
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (Local_15.f_16[iVar0 /*12*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar0 /*12*/]))
				{
				}
				else
				{
					if (!func_201(iVar0, &Local_15, 65536) && !func_201(iVar0, &Local_15, 131072))
					{
						return false;
					}
					return true;
				}
				iVar0++;
			}
			break;
		default:
			return false;
	}
	return false;
}

void func_338(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (func_563(iVar0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		PED::_0xED00D72F81CF7278(iParam0, 0, 0);
		return;
	}
	if (func_564(iVar0, -208384378))
	{
		return;
	}
	TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar0, iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2f, 1);
}

bool func_339()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_33(1))
	{
		return false;
	}
	if (func_55(&Local_15, 524288))
	{
		return false;
	}
	if ((func_257(1, 255) && func_257(2, 255)) && !func_257(512, 255))
	{
		return false;
	}
	if (func_33(8192))
	{
		iVar0 = Local_2027.f_626;
	}
	else
	{
		iVar0 = Local_2027.f_625;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || !func_565(Global_34, iVar0, 1, 0))
	{
		return false;
	}
	if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if (Local_15.f_16[iVar2 /*12*/].f_2 != joaat("PASSENGER_VIP"))
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar2 /*12*/]))
			{
			}
			else if (func_565(NETWORK::NET_TO_PED(Local_15.f_16[iVar2 /*12*/]), iVar0, 1, 0))
			{
				iVar1 = 1;
			}
			else
			{
				iVar2++;
			}
		}
	}
	else if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
	{
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (!func_202(iVar3, &Local_15, 128))
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar3 /*5*/]))
			{
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(NETWORK::NET_TO_OBJ(Local_15.f_257[iVar3 /*5*/]), iVar0, false, 0))
			{
				iVar1 = 1;
			}
			else
			{
				iVar3++;
			}
		}
	}
	return iVar1;
}

void func_340(int iParam0, int iParam1)
{
	func_122(&(Local_2027.f_29[iParam0 /*5*/]), iParam1);
}

bool func_341(int iParam0, var uParam1, int iParam2)
{
	return func_113(uParam1->f_3[iParam0 /*4*/].f_1, iParam2);
}

char* func_342(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_343(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_566(iParam0, uParam1);
	func_567(iParam0);
	if ((iVar0 == -1088690539 || iVar0 == 0) || func_400(iParam0, 0))
	{
		func_214(iParam0);
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/]);
	func_568(iParam0, iVar1);
	func_569(iParam0, iVar1);
	func_570(iParam0, iVar1);
	func_571(iParam0, iVar1);
	func_572(iParam0, iVar1, uParam1, uParam2, fParam3);
	func_573(iParam0, iVar1);
	func_574(iParam0, iVar1);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_575(iParam0, uParam1)))
	{
		return;
	}
	func_576(iParam0, uParam1, uParam2, fParam3);
	func_577(iParam0, iVar1);
	switch (iVar0)
	{
		case joaat("DRIVER"):
			func_578(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("ESCORT"):
			func_579(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("PASSENGER_ESCORT"):
			func_580(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("PASSENGER_VIP"):
			func_581(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("MOUNTED_ESCORT"):
			func_582(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("SHOTGUN_RIDER"):
			func_583(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("DROPOFF_GUARD"):
			func_584(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("CHASER"):
			func_585(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("STATIONARY_ESCORT"):
			func_586(iParam0, uParam1, uParam2, fParam3);
			break;
	}
}

void func_344(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	switch (Local_15.f_16[iParam0 /*12*/].f_2)
	{
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
			break;
		default:
			return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/]))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_16[iParam0 /*12*/]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/]);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		iVar0 = PED::GET_MOUNT(iVar0);
	}
	if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar0))
	{
		return;
	}
	if (!func_587(iParam0, &iVar1))
	{
		return;
	}
	if (func_588(iVar1))
	{
		return;
	}
	vVar2 = { func_589(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_HEADING(iVar1), Local_15.f_16[iParam0 /*12*/].f_8) };
	if (func_558(iVar0, vVar2, 1) < 15f)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iVar0, vVar2, ENTITY::GET_ENTITY_HEADING(iVar1), false, true);
	}
}

void func_345(int iParam0)
{
	int iVar0;

	switch (Local_15.f_16[iParam0 /*12*/].f_2)
	{
		case joaat("PASSENGER_VIP"):
			if ((Local_15.f_16[iParam0 /*12*/].f_3 == 17 || Local_15.f_16[iParam0 /*12*/].f_3 == 25) || Local_15.f_16[iParam0 /*12*/].f_3 == 26)
			{
				return;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_16[iParam0 /*12*/]))
			{
				if (Local_15.f_16[iParam0 /*12*/].f_3 == 19)
				{
					func_272(iParam0, 524288);
				}
				return;
			}
			if (!func_440(iParam0, &iVar0, 1, 0))
			{
				return;
			}
			if (Local_15.f_16[iParam0 /*12*/].f_3 == 19)
			{
				if (!func_271(iParam0, 262144) || func_271(iParam0, 524288))
				{
					PED::_0x89F5E7ADECCCB49C(iVar0, func_590());
					func_272(iParam0, 262144);
				}
			}
			else if (func_271(iParam0, 262144) || func_271(iParam0, 524288))
			{
				PED::_0x58F7DB5BD8FA2288(iVar0);
				func_441(iParam0, 262144);
			}
			func_441(iParam0, 524288);
			if (Local_15.f_16[iParam0 /*12*/].f_3 == 21 && func_201(iParam0, &Local_15, 4194304))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.5f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 2f);
			}
			break;
	}
}

void func_346(int iParam0)
{
	int iVar0;

	if (Local_15.f_16[iParam0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
	{
		return;
	}
	if ((func_201(iParam0, &Local_15, 32) || func_201(iParam0, &Local_15, 65536)) || func_201(iParam0, &Local_15, 131072))
	{
		if (!func_440(iParam0, &iVar0, 1, 0))
		{
			return;
		}
		func_591(iVar0);
		return;
	}
	if (!func_271(iParam0, 8388608))
	{
		return;
	}
	if (!func_440(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	if (func_271(iParam0, 16777216))
	{
		NETWORK::_0xEE5AE9956743BA20(iVar0, false);
		return;
	}
	NETWORK::_0xEE5AE9956743BA20(iVar0, true);
	func_591(iVar0);
}

void func_347(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (!func_202(iParam0, &Local_15, 128))
	{
		return;
	}
	func_592(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iParam0 /*5*/]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(Local_15.f_257[iParam0 /*5*/]);
	if (func_80(iParam0, 16))
	{
		bVar1 = !func_80(iParam0, 32);
		NETWORK::_0xEE5AE9956743BA20(iVar0, bVar1);
	}
	if ((func_202(iParam0, &Local_15, 256) || func_202(iParam0, &Local_15, 512)) || func_202(iParam0, &Local_15, 2))
	{
		bVar2 = true;
	}
	if (func_593(iParam0, bVar2))
	{
		TASK::_0xA21AA2F0C2180125(iVar0, 1);
	}
	else
	{
		TASK::_0xA21AA2F0C2180125(iVar0, 0);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (func_202(iParam0, &Local_15, 64))
	{
		GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, false);
	}
	else
	{
		GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, true);
	}
	if (func_202(iParam0, &Local_15, 16))
	{
		OBJECT::DELETE_OBJECT(&iVar0);
		return;
	}
	iVar3 = ENTITY::_0x61914209C36EFDDB(iVar0);
	switch (iVar3)
	{
		case 3:
			break;
		default:
			return;
	}
	if (bVar2)
	{
		if ((func_55(&Local_15, 524288) && iParam0 == Local_15.f_328) && (func_55(&Local_15, 16777216) || func_55(&Local_15, 33554432)))
		{
			ENTITY::_0x18FF3110CF47115D(iVar0, 2, 1);
			ENTITY::_0x18FF3110CF47115D(iVar0, 22, 0);
			ENTITY::_0x18FF3110CF47115D(iVar0, 21, 0);
		}
		else
		{
			ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
		}
		ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
		ENTITY::_0x18FF3110CF47115D(iVar0, 11, 0);
	}
}

bool func_348()
{
	if (func_55(&Local_15, 524288) || func_55(&Local_15, 536870912))
	{
		return false;
	}
	if (func_405(&Local_15) <= 2)
	{
		return false;
	}
	if (!func_55(&Local_15, 268435456))
	{
		return false;
	}
	return true;
}

void func_349(float fParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (((iParam3 >= 4 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_257[iParam3 /*5*/])) || func_202(iParam3, uParam2, 2)) || func_202(iParam3, uParam2, 16))
			{
				return;
			}
			fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(uParam2->f_257[iParam3 /*5*/]);
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (iParam3 >= fParam0->f_10.f_8)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (!func_201(iVar0, uParam2, 1024))
				{
				}
				else
				{
					if (iVar1 == iParam3)
					{
					}
					else
					{
						iVar1++;
						iVar0++;
					}
					if (((iVar0 >= 20 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_16[iVar0 /*12*/])) || func_201(iVar0, uParam2, 32)) || uParam2->f_16[iVar0 /*12*/].f_2 == -1088690539)
					{
						fParam0->f_561.f_2[iParam3] = 0;
						return;
					}
					fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(uParam2->f_16[iVar0 /*12*/]);
				}
			}
			default:
				break;
	}
}

bool func_350(var uParam0, float fParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), Global_1296859))
	{
		return false;
	}
	if (fParam1 > 800f)
	{
		return true;
	}
	return false;
}

bool func_351(int iParam0, bool bParam1, bool bParam2)
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

bool func_352(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	struct<2> Var1;
	float fVar3;
	int iVar4;
	bool bVar5;

	if (uParam0->f_54 == joaat("NONE"))
	{
		return false;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), Global_1296859))
	{
		return false;
	}
	bVar0 = false;
	Var1 = -1;
	Var1.f_1 = -1;
	fVar3 = 100f;
	if ((func_28(Var1) && !func_29(Var1, uParam0->f_52)) && func_594(Var1))
	{
		return false;
	}
	switch (uParam0->f_54)
	{
		case joaat("ATTACK"):
		case joaat("DELIVER"):
			if (!bParam3)
			{
				bVar0 = true;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[uParam0->f_55]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_2[uParam0->f_55])) && PED::_0x3D9F958834AB9C30(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_2[uParam0->f_55])) == Global_34)
			{
				return true;
			}
			if (func_595(uParam0, bVar0, 1, 0, fVar3, uParam2) && func_596(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
			{
				return true;
			}
			break;
		case joaat("DEFEND"):
			bVar0 = true;
			if (func_595(uParam0, bVar0, 0, 1, fVar3, uParam2) && func_596(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
			{
				return true;
			}
			break;
	}
	if (uParam0->f_55 == 11)
	{
		uParam0->f_55 = 0;
	}
	else
	{
		uParam0->f_55++;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), uParam0->f_56))
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_56);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			if (GANG::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iVar4))
			{
				*bParam1 = 1;
				return true;
			}
			else if (bVar0)
			{
				if (PED::GET_JACK_TARGET(Global_34) == PLAYER::GET_PLAYER_PED(iVar4))
				{
					bVar5 = true;
				}
				else if (PED::_0xD0B7AEB56229D317(Global_34) == PLAYER::GET_PLAYER_PED(iVar4))
				{
					bVar5 = true;
				}
				if (bVar5 && func_596(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
				{
					return true;
				}
			}
		}
	}
	if (uParam0->f_56 == 31)
	{
		uParam0->f_56 = 0;
	}
	else
	{
		uParam0->f_56++;
	}
	return false;
}

bool func_353(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!PED::_IS_PED_CARRYING(iVar0))
			{
				return false;
			}
			iVar2 = 0;
			while (iVar2 < fParam0->f_10.f_14)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_257[iVar2 /*5*/]))
				{
				}
				else if (func_202(iVar2, uParam2, 1))
				{
				}
				else if (func_202(iVar2, uParam2, 2))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(uParam2->f_257[iVar2 /*5*/]), iVar0))
				{
				}
				else
				{
					return true;
				}
				iVar2++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (func_41(uParam1[Local_2027.f_634 /*52*/], 262144) && Local_15.f_321 > 1)
			{
				return true;
			}
			else if (func_41(uParam1[Local_2027.f_634 /*52*/], 524288))
			{
				return true;
			}
			if (!PED::_IS_PED_CARRYING(iVar0))
			{
				return false;
			}
			iVar1 = 0;
			while (iVar1 < fParam0->f_10.f_8)
			{
				if (uParam2->f_16[iVar1 /*12*/].f_2 != joaat("PASSENGER_VIP"))
				{
				}
				else if (func_201(iVar1, uParam2, 32))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_16[iVar1 /*12*/]))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(uParam2->f_16[iVar1 /*12*/]), iVar0))
				{
				}
				else
				{
					return true;
				}
				iVar1++;
			}
			break;
	}
	return false;
}

bool func_354(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (!func_440(iParam0, &iVar0, 0, 1))
			{
				return false;
			}
			*uParam1 = func_267(iVar0);
			return true;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!func_81(iParam0, &iVar1))
			{
				return false;
			}
			*uParam1 = func_267(iVar1);
			return true;
		default:
			break;
	}
	return false;
}

bool func_355(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*iParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_597(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_598(&(iParam3->f_1), iParam5, vParam0);
				if (!func_384(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_599(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*iParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_356(vector3 vParam0, var uParam3)
{
	float fVar0;
	int iVar1;

	fVar0 = BUILTIN::VDIST(Global_35, vParam0);
	if (fVar0 > 200f)
	{
		return true;
	}
	if (fVar0 < 40f)
	{
		*uParam3 = 1;
		return true;
	}
	if (!CAM::IS_SPHERE_VISIBLE(vParam0, 4f))
	{
		return true;
	}
	if (!func_233(Local_2027.f_548))
	{
		Local_2027.f_548 = GRAPHICS::CREATE_TRACKED_POINT();
		GRAPHICS::SET_TRACKED_POINT_INFO(Local_2027.f_548, vParam0 + Vector(0.5f, 0f, 0f), 3f);
		return false;
	}
	iVar1 = GRAPHICS::_0xDFE332A5DA6FE7C9(Local_2027.f_548);
	if (iVar1 == -1)
	{
		return false;
	}
	*uParam3 = GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_2027.f_548);
	return true;
}

bool func_357(var uParam0, var uParam1)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	if (!func_33(1))
	{
		return false;
	}
	bVar0 = func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64);
	fVar2 = 250f;
	fVar4 = 250f;
	fVar6 = 250f;
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if (Local_15.f_16[iVar8 /*12*/].f_2 != joaat("PASSENGER_VIP"))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar8 /*12*/]))
				{
				}
				else
				{
					iVar13 = NETWORK::NET_TO_PED(Local_15.f_16[iVar8 /*12*/]);
					fVar1 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar13, false, false));
					iVar10 = func_267(iVar13);
					bVar11 = func_201(iVar8, &Local_15, 8);
					bVar12 = func_201(iVar8, &Local_15, 16);
					if ((bVar11 && !bVar0) || (bVar12 && bVar0))
					{
						if (fVar1 < fVar6)
						{
							fVar6 = fVar1;
							iVar7 = iVar10;
						}
					}
					else if ((bVar12 && !bVar0) || (bVar11 && bVar0))
					{
						if (fVar1 < fVar4)
						{
							fVar4 = fVar1;
							iVar5 = iVar10;
						}
					}
					else if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar10;
					}
				}
				iVar8++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar9 = 0;
			while (iVar9 < 4)
			{
				if (func_202(iVar9, &Local_15, 2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar9 /*5*/]))
				{
				}
				else
				{
					iVar14 = NETWORK::NET_TO_OBJ(Local_15.f_257[iVar9 /*5*/]);
					fVar1 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar14, false, false));
					iVar10 = func_267(iVar14);
					bVar11 = func_202(iVar9, &Local_15, 1);
					bVar12 = func_202(iVar9, &Local_15, 32);
					if ((bVar11 && !bVar0) || (bVar12 && bVar0))
					{
						if (fVar1 < fVar6)
						{
							fVar6 = fVar1;
							iVar7 = iVar10;
						}
					}
					else if ((bVar12 && !bVar0) || (bVar11 && bVar0))
					{
						if (fVar1 < fVar4)
						{
							fVar4 = fVar1;
							iVar5 = iVar10;
						}
					}
					else if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar10;
					}
				}
				iVar9++;
			}
			break;
		default:
			return false;
	}
	if (fVar2 < 250f)
	{
		*uParam0 = iVar3;
		return true;
	}
	if (fVar4 < 250f)
	{
		*uParam0 = iVar5;
		*uParam1 = 1;
		return true;
	}
	if (fVar6 < 250f)
	{
		*uParam0 = iVar7;
		return true;
	}
	return false;
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		if (func_33(4))
		{
			return;
		}
		if (func_359(255))
		{
			return;
		}
		func_232(1);
		func_126(4);
	}
	else
	{
		if (!func_33(4))
		{
			return;
		}
		func_232(0);
		func_213(4);
	}
}

bool func_359(int iParam0)
{
	return func_600(49, iParam0);
}

bool func_360(int iParam0)
{
	return func_600(48, iParam0);
}

void func_361(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;

	if (!func_33(4))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam3)
	{
		fVar0 = 150f;
		fVar1 = 200f;
		fVar2 = 30f;
	}
	else if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32))
	{
		fVar0 = 70f;
		fVar1 = 130f;
		fVar2 = 25f;
	}
	else
	{
		fVar0 = 115f;
		fVar1 = 180f;
		fVar2 = 25f;
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, false, false) };
	if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vVar3))
	{
		func_393(&vVar3, 200f);
	}
	else
	{
		func_393(&vVar3, 1088421888 /* Float: 7f */);
	}
	uParam0->f_17.f_6 = { vVar3 };
	uParam0->f_17 = { fVar1, fVar1, fVar2 };
	uParam0->f_17.f_9 = joaat("VOLSPHERE");
	uParam0->f_6.f_6 = { vVar3 };
	uParam0->f_6 = { fVar0, fVar0, fVar2 };
	uParam0->f_6.f_9 = joaat("VOLSPHERE");
	uParam0->f_4 = iParam2;
	uParam0->f_5 = 3;
	uParam1->f_5 = 1;
	*uParam1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
	uParam1->f_6 = { vVar3 + func_601(*uParam1) * Vector(10f, 10f, 10f) };
	func_362(*uParam0, *uParam1, 1, 1, 1);
}

int func_362(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_360(255))
	{
		if ((Param0.f_17.f_9 != joaat("VOLBOX") && Param0.f_17.f_9 != joaat("VOLSPHERE")) && Param0.f_17.f_9 != joaat("VOLCYLINDER"))
		{
			Param0.f_17.f_9 = joaat("VOLSPHERE");
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != joaat("VOLBOX") && Param0.f_6.f_9 != joaat("VOLSPHERE")) && Param0.f_6.f_9 != joaat("VOLCYLINDER"))
			{
				Param0.f_6.f_9 = joaat("VOLSPHERE");
			}
		}
		func_602(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = { Param0 };
		func_603(&(Global_1102219.f_3888));
		Global_1102219.f_3888 = { Param30 };
		Global_1102219.f_3919 = iParam39;
		Global_1102219.f_3920 = iParam40;
		Global_1102219.f_3921 = iParam41;
		func_604(Global_1102219.f_3849, 36);
		func_605(Global_1102219.f_3888, 36);
		func_450(48);
		return 1;
	}
	return 0;
}

int func_363()
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return Local_2027.f_174;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return Local_2027.f_174.f_4;
		default:
			break;
	}
	return 0;
}

bool func_364()
{
	if (func_257(1, 255))
	{
		return false;
	}
	if (func_55(&Local_15, 64))
	{
		return false;
	}
	if (func_33(134217728))
	{
		if (func_209(Local_2027.f_633) > 2000)
		{
			return false;
		}
		return true;
	}
	if (func_66(&Local_15, &Local_2027))
	{
		return false;
	}
	if (func_209(Local_15.f_318) > 2000)
	{
		return false;
	}
	return true;
}

int func_365(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Local_2027.f_634;
	}
	return Local_362[iParam0 /*52*/].f_41;
}

void func_366(bool bParam0)
{
	LAW::_0x55F37F5F3F2475E1();
	if (bParam0)
	{
		LAW::_0xC76F252371150D9A(PLAYER::PLAYER_ID());
	}
	func_126(33554432);
}

bool func_367(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return true;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return false;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return true;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_368(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (func_370(iParam0))
	{
		return;
	}
	if (func_607(func_606(iParam0), 1, bParam1))
	{
		func_608(iParam0);
	}
}

int func_369(bool bParam0)
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			return func_609(bParam0);
		case joaat("COACH_HOLDUP_KIDNAP"):
			return func_610(bParam0);
		default:
			break;
	}
	return 0;
}

bool func_370(int iParam0)
{
	return func_113(Local_2027.f_9, iParam0);
}

void func_371()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_365(255) == 3)
	{
		return;
	}
	if (Local_15.f_299 == 0)
	{
		if (func_611() == 3)
		{
			func_612(3);
		}
		return;
	}
	iVar0 = Local_15.f_299;
	iVar1 = func_365(255);
	if (func_257(256, 255) && func_257(1, 255))
	{
		func_613(1, 0, 1);
		func_86(0);
		func_87(1);
		func_84(1);
	}
	if ((func_257(1, 255) && !func_257(512, 255)) && iVar1 != 3)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (func_614(8))
	{
		func_105(iVar0);
		func_612(3);
		return;
	}
	switch (iVar1)
	{
		case 0:
			func_615(iVar0);
			func_616(iVar0);
			if (func_611() == iVar1)
			{
				return;
			}
			if (Local_2027.f_537 == 0)
			{
				func_612(3);
				return;
			}
			func_612(1);
			break;
		case 1:
			if (func_257(256, 255) && func_257(1, 255))
			{
				func_617();
			}
			if (!func_257(32, 255))
			{
				if (func_618(iVar0, Local_15.f_299.f_2))
				{
					func_260();
				}
				func_261(32);
			}
			func_619(iVar0, Local_15.f_299.f_2);
			if (func_611() == iVar1)
			{
				return;
			}
			if (func_257(1, 255))
			{
				func_620();
				func_621(iVar0, Local_15.f_299.f_2);
				func_622(iVar0, Local_15.f_299.f_2);
				if (!func_257(256, 255))
				{
					AUDIO::_0x6339C1EA3979B5F7("default", "RDRO_Scripted_Cutscene_Scenes");
					func_623();
				}
			}
			func_261(256);
			func_624();
			func_612(2);
			break;
		case 2:
			if (!func_257(64, 255))
			{
				iVar2 = func_209(Local_15.f_299.f_3);
				iVar3 = func_625(iVar0, Local_15.f_299.f_2);
				if (func_257(1, 255))
				{
					func_626(iVar0, Local_15.f_299.f_2, iVar3, iVar2);
				}
				if (iVar2 < iVar3)
				{
					return;
				}
			}
			else if (func_257(1, 255))
			{
				func_617();
			}
			func_261(64);
			func_627(iVar0, Local_15.f_299.f_2);
			if (func_611() == iVar1 && !func_614(4))
			{
				return;
			}
			if (Local_15.f_299.f_2 < Local_2027.f_537 && func_611() != 3)
			{
				func_498(32);
				func_498(64);
				func_624();
				func_612(1);
				return;
			}
			func_105(iVar0);
			func_612(3);
			break;
	}
}

bool func_372()
{
	struct<2> Var0;

	if (func_32())
	{
		return true;
	}
	Var0 = { func_628() };
	if (!func_28(Var0))
	{
		return false;
	}
	if (!func_29(Local_2027.f_2, Var0))
	{
		return true;
	}
	return false;
}

void func_373(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_629(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_374(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_630(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_375(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_631(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_376(var uParam0, var uParam1, float fParam2)
{
	if (func_632(uParam0, uParam1, fParam2))
	{
		func_633(uParam1, fParam2);
		func_132(131072);
	}
	else
	{
		func_243(&(fParam2->f_202.f_51));
		func_228(131072);
	}
	if (func_227(131072))
	{
		if (func_227(262144))
		{
			func_634(0);
			func_228(262144);
		}
	}
	else if (!func_227(262144))
	{
		func_634(1);
		func_132(262144);
	}
}

void func_377()
{
	int iVar0;

	iVar0 = Local_2027.f_174.f_1;
	if (func_635(iVar0))
	{
		func_454(iVar0, 1);
	}
	else
	{
		func_454(iVar0, 0);
	}
	if (func_636(iVar0))
	{
		func_455(iVar0, 1);
	}
	else
	{
		func_455(iVar0, 0);
	}
}

void func_378()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_637(&iVar0, &iVar1);
	func_638(iVar2, iVar0, iVar1);
}

void func_379(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_534())
	{
		func_245(fParam2);
		return;
	}
	iVar0 = func_639(uParam0, uParam1, fParam2);
	switch (iVar0)
	{
		case 0:
			func_245(fParam2);
			return;
		case 8:
			if (func_640(uParam0, fParam2, 1, 0))
			{
				iVar0 = 9;
			}
			break;
		case 1:
			if (func_641())
			{
				iVar0 = 2;
			}
			break;
		case 3:
			if (func_641())
			{
				iVar0 = 4;
			}
			break;
		case 10:
			if (func_640(uParam0, fParam2, 1, 0))
			{
				iVar0 = 11;
			}
			break;
		case 12:
			if (func_640(uParam0, fParam2, 1, 0))
			{
				iVar0 = 13;
			}
			break;
		case 18:
			if (!func_640(uParam0, fParam2, 1, 0))
			{
				iVar0 = 19;
			}
			break;
		case 17:
			if (!func_640(uParam0, fParam2, 1, 0))
			{
				iVar0 = 16;
			}
			break;
		case 21:
			if (!func_640(uParam0, fParam2, 1, 0))
			{
				iVar0 = 20;
			}
			break;
		case 24:
			if (func_640(uParam0, fParam2, 1, 0))
			{
				iVar0 = 25;
			}
			break;
		case 27:
			switch (func_199(&Local_2027))
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					func_642(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					func_643(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
			}
			if (func_640(uParam0, fParam2, 1, 0))
			{
				iVar0 = 26;
			}
			else if (bVar2)
			{
				iVar0 = 28;
			}
			if (iVar0 != 28)
			{
				bVar3 = func_644(iVar0, bVar1, iVar4, iVar5);
			}
			break;
		case 22:
			if (func_640(uParam0, fParam2, 1, 1))
			{
				iVar0 = 23;
			}
			break;
		case 14:
			if (func_640(uParam0, fParam2, 1, 1))
			{
				iVar0 = 15;
			}
			break;
		case 31:
			if (func_640(uParam0, fParam2, 1, 1))
			{
				iVar0 = 30;
			}
			break;
	}
	func_645(iVar0, fParam2, bVar3);
}

void func_380()
{
	if (func_646())
	{
		func_647();
		func_132(4);
		return;
	}
	if (func_648())
	{
		func_649();
		func_132(2);
	}
}

void func_381(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_227(65536))
	{
		iVar1 = func_650(fParam0);
		iVar2 = func_651(iVar1);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			func_652(&(Local_2027.f_202.f_77), iVar2, iVar0);
			func_653(&(Local_2027.f_202.f_77), iVar1, iVar0);
			iVar0++;
		}
		func_132(65536);
	}
}

void func_382(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if ((func_654(fParam2->f_202.f_61) && func_655(fParam2->f_202.f_61, 1)) && func_656(fParam2->f_202.f_61, 1))
	{
		iVar0 = func_657(uParam0, fParam2);
		if (iVar0 != -1)
		{
			(uParam1[Local_2027.f_634 /*52*/])->f_46 = iVar0;
			func_39(uParam1[Local_2027.f_634 /*52*/], 128);
		}
	}
	iVar1 = func_525(uParam0, fParam2);
	if (iVar1 < 0)
	{
		iVar1 = 0;
	}
	if (func_658(&bVar2))
	{
		if (bVar2)
		{
			func_659(uParam0, uParam1, fParam2);
		}
		func_660(&(Local_2027.f_202.f_62), &(fParam2->f_202.f_77), iVar1, 0, 30000, 0, joaat("DELIVER"), 0, 0, 0, 0);
	}
	else
	{
		func_247(&(fParam2->f_202.f_77), 0, 0);
		func_248(&(Local_2027.f_202.f_62), 1);
	}
	if (func_661(&iVar3))
	{
		if (func_654(fParam2->f_202.f_61))
		{
			func_662(fParam2->f_202.f_61, 1, 1, 1);
			func_663(fParam2->f_202.f_61, 1, 1);
			func_664(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
		else
		{
			fParam2->f_202.f_61 = func_666(func_665(), joaat("INPUT_INTERACT_LOCKON_ROB"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_664(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
	}
	else if (func_654(fParam2->f_202.f_61))
	{
		func_662(fParam2->f_202.f_61, 0, 1, 1);
		func_663(fParam2->f_202.f_61, 0, 1);
	}
	if (!func_33(1))
	{
		return;
	}
	if (func_667())
	{
		return;
	}
	if (func_227(512))
	{
		func_669(func_668(), 0, 0);
		func_228(512);
	}
	if (func_227(1024))
	{
		func_669(func_670(), 0, 0);
		func_228(1024);
	}
	if (func_227(2048))
	{
		func_669(func_671(), 0, 0);
		func_228(2048);
	}
	if (func_227(8192))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2027.f_202.f_52))
		{
			func_669(func_672(), 0, 0);
		}
		Local_2027.f_202.f_52 = 255;
		func_228(8192);
	}
	if (func_227(4096))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2027.f_202.f_52) && Local_2027.f_202.f_52 != PLAYER::PLAYER_ID())
		{
			func_669(func_673(), 0, 0);
		}
		Local_2027.f_202.f_52 = 255;
		func_228(4096);
	}
	if (!func_227(32768) && func_348())
	{
		func_669(func_674(), func_675(), func_676());
		func_132(32768);
	}
	if (func_227(16384))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2027.f_202.f_52))
		{
			func_669(func_677(), 0, 0);
		}
		Local_2027.f_202.f_52 = 255;
		func_228(16384);
	}
}

Vector3 func_383(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_385(iParam0, &vVar3, uParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &vVar3);
	return vVar0;
}

bool func_384(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_385(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_110(iParam0, uParam1))
	{
		return false;
	}
	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(*uParam1, uParam1->f_1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		Var2 = { *uParam1 };
		Var2.f_2 = 1089670230;
		Var2.f_3 = iVar1;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
		{
		}
		else
		{
			Var2.f_2 = 1196324698;
			Var2.f_3 = uParam2;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
			{
			}
			else
			{
				*uParam1 = { Var2 };
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

var func_386(int iParam0)
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

void func_387(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 26, &uParam1);
}

void func_388(var uParam0)
{
	if (Global_1051252.f_16[0] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0]))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 31, 26, Global_1051252.f_16[0]);
}

bool func_389(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, 1323038251, &iVar5, 0);
	}
	return iVar5;
}

bool func_390(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.05f;
			break;
		case 2:
			fVar0 = 0.05f;
			break;
	}
	bVar2 = fVar1 < fVar0;
	return bVar2;
}

bool func_391(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	bool bVar15;
	int iVar16;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_278[iParam0 /*2*/]))
	{
		return true;
	}
	if (!func_175(&Var0, iParam0))
	{
		return true;
	}
	func_177(Var0, 873236619, &bVar15, 0);
	func_313(Var0, 644136394, &vVar8, 0);
	func_313(Var0, -2119193689, &vVar11, 0);
	func_310(Var0, 1471513692, &fVar14, 0);
	func_176(Var0, 1339124518, &uVar5, 0);
	if (bVar15)
	{
		iVar7 = uVar5;
	}
	else
	{
		iVar6 = uVar5;
	}
	if (!bVar15)
	{
		if (!STREAMING::IS_MODEL_VALID(iVar6) || iVar6 == 0)
		{
			return true;
		}
	}
	if (bVar15)
	{
		iVar16 = PROPSET::_CREATE_PROPSET_2(iVar7, vVar8, func_678(iParam0), fVar14, 1200f, true, true);
		if (!PROPSET::_DOES_PROPSET_EXIST(iVar16))
		{
			return true;
		}
		Local_15.f_278[iParam0 /*2*/] = NETWORK::_PROPSET_TO_NET(iVar16);
		func_679(iParam0, 1);
	}
	else
	{
		if (!func_680(&(Local_15.f_278[iParam0 /*2*/]), iVar6, vVar8, 1, 0))
		{
			return false;
		}
		if (fVar14 == 0f && !func_384(vVar11))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_15.f_278[iParam0 /*2*/]), vVar11, 2, false);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_15.f_278[iParam0 /*2*/]), fVar14);
		}
	}
	return true;
}

float func_392(int iParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_172(iParam0, &Var0, iParam1))
	{
		func_310(Var0, 1922377121, &fVar5, 0);
	}
	return fVar5;
}

int func_393(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

bool func_394(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!func_171(iParam1))
	{
		return false;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return false;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (func_681(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(1054492269, vParam2, true, false, true, true));
	}
	else if (func_682(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(-950361972, vParam2, true, false, true, true));
	}
	else if (iParam8 != 0 && VEHICLE::_0xB9D5BDDA88E1BB66(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_DRAFT_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, iParam8, bParam9));
	}
	else
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam9));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_395(int iParam0, var uParam1, int iParam2)
{
	func_122(&(uParam1->f_3[iParam0 /*4*/].f_1), iParam2);
}

bool func_396(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = uParam2->f_45[iParam0 /*6*/];
	iVar1 = func_178(uParam2, iParam0);
	vVar2 = { uParam2->f_45[iParam0 /*6*/].f_2 };
	fVar5 = func_683(&Local_2027, iParam0);
	iVar6 = func_684(&Local_2027, iParam0);
	iVar7 = uParam2->f_45[iParam0 /*6*/].f_5;
	if (func_685())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/]))
		{
			iVar8 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/]);
			PED::DELETE_PED(&iVar8);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/].f_1))
		{
			iVar8 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/].f_1);
			PED::DELETE_PED(&iVar8);
		}
		return true;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar1 = func_179(iVar0);
	}
	if (func_201(iParam0, &Local_15, 16777216))
	{
		return true;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iVar7 /*4*/]))
	{
		return true;
	}
	iVar9 = NETWORK::NET_TO_VEH(uParam1->f_3[iVar7 /*4*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar9))
	{
		return true;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return true;
	}
	if ((!func_271(iParam0, 1) && !func_271(iParam0, 65536)) && func_686(uParam2->f_45[iParam0 /*6*/]))
	{
		if (func_384(vVar2))
		{
			return true;
		}
		fVar5 = (fVar5 + ENTITY::GET_ENTITY_HEADING(iVar9));
		vVar2 = { func_589(ENTITY::GET_ENTITY_COORDS(iVar9, false, false), fVar5, vVar2) };
		func_393(&vVar2, 1088421888 /* Float: 7f */);
	}
	if (func_271(iParam0, 2) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_1))
	{
		if (!func_687(iParam0, &iVar10))
		{
			iVar10 = func_180(iVar0);
		}
		if (iVar10 == 0)
		{
			return true;
		}
		func_688(&(uParam1->f_16[iParam0 /*12*/].f_1), iVar10, vVar2, fVar5, 1, 0, 1, 1, 1);
		return false;
	}
	func_689(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		if (func_271(iParam0, 2))
		{
			if (!func_690(&(uParam1->f_16[iParam0 /*12*/]), uParam1->f_16[iParam0 /*12*/].f_1, iVar1, -1, 1, 1, 1, 0))
			{
				return false;
			}
		}
		else if (func_271(iParam0, 1))
		{
			if (!func_691(&(uParam1->f_16[iParam0 /*12*/]), uParam1->f_3[iVar7 /*4*/], iVar1, iVar6, 1, 1, 1))
			{
				return false;
			}
		}
		else if (!func_688(&(uParam1->f_16[iParam0 /*12*/]), iVar1, vVar2, fVar5, 1, 0, 1, 1, 1))
		{
			return false;
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_1))
	{
		NETWORK::_0x7182EDDA1EE7DB5A(uParam1->f_16[iParam0 /*12*/].f_1);
	}
	NETWORK::_0x7182EDDA1EE7DB5A(uParam1->f_16[iParam0 /*12*/]);
	if (!func_692(iParam0))
	{
		return false;
	}
	if (func_271(iParam0, 2) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_1))
	{
		ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/].f_1), 1);
	}
	else if (!func_271(iParam0, 1) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), 1);
	}
	if ((func_271(iParam0, 4) && uParam1->f_322 < 4) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_257[uParam1->f_322 /*5*/]))
	{
		iVar11 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar11) && !NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar11))
		{
			return false;
		}
		if (!func_680(&(uParam1->f_257[uParam1->f_322 /*5*/]), func_183(), ENTITY::GET_ENTITY_COORDS(iVar11, true, false), 1, 0))
		{
			return false;
		}
		iVar12 = NETWORK::NET_TO_OBJ(uParam1->f_257[uParam1->f_322 /*5*/]);
		TASK::TASK_CARRIABLE(iVar12, joaat("MP_MONEYBAG"), iVar11, 0, 0);
		MISC::_0x7FA58CED69405F9A(iVar12, 3);
		ENTITY::_0x18FF3110CF47115D(iVar12, 12, 1);
		ENTITY::_0x18FF3110CF47115D(iVar12, 22, 1);
		ENTITY::_0x18FF3110CF47115D(iVar12, 21, 1);
		func_420(uParam1->f_322, uParam1, 8);
		Local_15.f_257[uParam1->f_322 /*5*/].f_2 = iVar7;
		func_420(uParam1->f_322, uParam1, 128);
		func_420(uParam1->f_322, uParam1, 64);
		uParam1->f_322++;
	}
	if (iVar0 == joaat("PASSENGER_VIP"))
	{
		func_274(iParam0, uParam1, 1024);
	}
	if (func_271(iParam0, 8))
	{
		func_274(iParam0, uParam1, 2048);
	}
	func_274(iParam0, &Local_15, 16777216);
	return true;
}

void func_397()
{
	Local_2027.f_637 = 0;
}

bool func_398(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;

	if (bParam3 && !func_693(iParam0, uParam1))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	bVar1 = Local_15.f_16[iParam0 /*12*/].f_2 != joaat("CHASER");
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iVar0, false);
	WEAPON::_0x431240A58484D5D0(iVar0, 0);
	WEAPON::_0x45E57FDD531C9477(iVar0, 0);
	if (bVar1)
	{
		if (func_694(iParam0, &uVar2))
		{
			PED::_0x89F5E7ADECCCB49C(iVar0, func_695(&uVar2));
		}
	}
	if (uParam1->f_16[iParam0 /*12*/].f_2 == joaat("PASSENGER_VIP"))
	{
		fVar10 = func_696(&Local_2027, iParam0);
		fVar11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar10 != 0f && fVar11 <= func_431(fVar10, 0f, 1f))
		{
			func_274(iParam0, uParam1, 256);
		}
	}
	fVar12 = func_697(&Local_2027, iParam0);
	if (fVar12 > 0f)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, BUILTIN::ROUND(fVar12));
		func_698(iVar0, 1f, 0);
	}
	if (Local_15.f_16[iParam0 /*12*/].f_2 == joaat("CHASER") && func_699(&iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else if (bVar1 && func_700(&Local_2027, iParam0, &iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else
	{
		PED::SET_PED_ACCURACY(iVar0, 20);
	}
	if (uParam1->f_16[iParam0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
	}
	PED::SET_PED_COMBAT_RANGE(iVar0, 3);
	PED::SET_PED_ID_RANGE(iVar0, 160f);
	PED::SET_PED_SEEING_RANGE(iVar0, 200f);
	PED::_SET_PED_DAMAGE_MODIFIER(iVar0, 0.48f);
	PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
	if (func_201(iParam0, &Local_15, 32768))
	{
		LAW::_0x819ADD5EF1742F47(iVar0, 7);
		PED::SET_PED_AS_COP(iVar0, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 39, true);
		POPULATION::_0xF74E134F40192884(iVar0, 1);
		if (Global_1901947.f_166.f_31)
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 127, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		}
	}
	if (func_33(256))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
	}
	switch (uParam1->f_16[iParam0 /*12*/].f_2)
	{
		case joaat("SHOTGUN_RIDER"):
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 65, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case joaat("DRIVER"):
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case joaat("PASSENGER_ESCORT"):
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 89, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			iVar14 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
			if (!func_236(iVar14) || WEAPON::_IS_WEAPON_MELEE(iVar14))
			{
				PED::_0x815C0074A1BC0D93(iVar0, 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 93, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 96, true);
			}
			break;
		case joaat("MOUNTED_ESCORT"):
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			break;
		case joaat("CHASER"):
			func_701(iVar0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iVar0, false, 1f);
			PED::_0x712B2C2B2471B493(iVar0, 554382346);
			TASK::_0x3AD8EFF9703BE657(iVar0, 0f);
			break;
		case joaat("ESCORT"):
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case joaat("STATIONARY_ESCORT"):
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case joaat("PASSENGER_VIP"):
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 337, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
			if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 317, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
			}
			else if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
			{
				LAW::_0xFFEBE5AA96BC2E4E(iVar0, joaat("CRIME_KIDNAPPING"), 1);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2048, true);
			DECORATOR::DECOR_SET_BOOL(iVar0, func_702(), true);
			if (func_199(&Local_2027) == joaat("COACH_HOLDUP_KIDNAP"))
			{
				MISC::_0x7FA58CED69405F9A(iVar0, 3);
				PED::SET_PED_CONFIG_FLAG(iVar0, 277, true);
			}
			break;
		case joaat("DROPOFF_GUARD"):
			PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
			PED::SET_PED_RESET_FLAG(iVar0, 36, true);
			PED::SET_PED_CAN_RAGDOLL(iVar0, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
			PED::SET_PED_COMBAT_MOVEMENT(iVar0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
	}
	return true;
}

void func_399(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (uParam1->f_16[iParam0 /*12*/].f_11 < 0)
	{
		return;
	}
	if (func_684(&Local_2027, iParam0) != -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		return;
	}
	iVar0 = uParam1->f_3[uParam1->f_16[iParam0 /*12*/].f_11 /*4*/].f_3;
	iVar1 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!func_271(iParam0, 1))
	{
		return;
	}
	if (PED::DOES_GROUP_EXIST(iVar0))
	{
		return;
	}
	uParam1->f_3[uParam1->f_16[iParam0 /*12*/].f_11 /*4*/].f_3 = PED::CREATE_GROUP(0);
	iVar0 = uParam1->f_3[uParam1->f_16[iParam0 /*12*/].f_11 /*4*/].f_3;
	PED::SET_GROUP_FORMATION(iVar0, 5);
	PED::_0x478F6B9920446CE2(iVar0, 0);
	PED::SET_PED_AS_GROUP_LEADER(iVar1, iVar0, false);
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (uParam1->f_16[iVar3 /*12*/].f_2 != joaat("MOUNTED_ESCORT"))
		{
		}
		else if (uParam1->f_16[iParam0 /*12*/].f_11 != uParam1->f_16[iVar3 /*12*/].f_11)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iVar3 /*12*/]))
		{
		}
		else
		{
			iVar4 = NETWORK::NET_TO_PED(uParam1->f_16[iVar3 /*12*/]);
			PED::ADD_CUSTOM_FORMATION_LOCATION(iVar0, uParam1->f_16[iVar3 /*12*/].f_8, iVar2);
			PED::SET_PED_AS_GROUP_MEMBER(iVar4, iVar0);
			PED::_0x0E9E95FDEDCC9D35(iVar4, iVar2, 0);
			iVar2++;
		}
		iVar3++;
	}
}

bool func_400(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/]))
	{
		return true;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!bParam1 || !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
		{
			return true;
		}
	}
	return false;
}

void func_401(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	int iVar6;

	if (func_201(iParam0, uParam2, 32))
	{
		return;
	}
	if (!func_201(iParam0, uParam2, 4) && !func_201(iParam0, uParam2, 524288))
	{
		if (func_201(iParam0, uParam2, 65536) || func_201(iParam0, uParam2, 131072))
		{
			if (((Local_15.f_16[iParam0 /*12*/].f_3 != 28 && Local_15.f_16[iParam0 /*12*/].f_3 != 24) && !PED::_IS_PED_HOGTIED(iParam1)) && ENTITY::_0x61914209C36EFDDB(iParam1) == 0)
			{
				func_416(iParam0, uParam2, 65536);
				func_416(iParam0, uParam2, 131072);
			}
		}
		return;
	}
	iVar0 = 255;
	if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iParam0 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iParam0 /*12*/].f_7)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_15.f_16[iParam0 /*12*/].f_7))
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_15.f_16[iParam0 /*12*/].f_7);
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	bVar4 = func_201(iParam0, uParam2, 65536);
	bVar5 = func_201(iParam0, uParam2, 131072);
	if (((!bVar4 && !bVar5) && !func_201(iParam0, &Local_15, 67108864)) && iVar0 != 255)
	{
		if ((func_41(&(Local_362[iVar0 /*52*/]), 32) && func_334(Local_2027.f_625, vVar1)) || (func_41(&(Local_362[iVar0 /*52*/]), 64) && func_334(Local_2027.f_626, vVar1)))
		{
			func_703(iParam0, Local_15.f_16[iParam0 /*12*/].f_7);
		}
	}
	iVar6 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if ((Local_15.f_16[iParam0 /*12*/].f_7 == 255 || iVar0 == 255) || !func_704(iParam0, iVar0))
	{
		if (iVar6 != 3 && 1)
		{
			return;
		}
	}
	if (func_201(iParam0, uParam2, 65536))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_705(iParam0, uParam2, 0);
		return;
	}
	else if (func_201(iParam0, uParam2, 131072))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_705(iParam0, uParam2, 1);
		return;
	}
	if (Local_15.f_16[iParam0 /*12*/].f_7 == 255 || iVar0 == 255)
	{
		return;
	}
	if (!bVar4 && !bVar5)
	{
		if (func_41(&(Local_362[iVar0 /*52*/]), 64) && func_704(iParam0, iVar0))
		{
			func_274(iParam0, uParam2, 131072);
		}
		else if (func_41(&(Local_362[iVar0 /*52*/]), 32) && func_704(iParam0, iVar0))
		{
			func_274(iParam0, uParam2, 65536);
		}
	}
}

void func_402(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_566(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 != -1088690539 && func_400(iParam0, func_706(iVar0)))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
		{
			iVar1 = func_707(iParam0, uParam1);
		}
		if (iVar0 == joaat("PASSENGER_VIP"))
		{
			func_708(iParam0, uParam1, bParam3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && DECORATOR::DECOR_EXIST_ON(iVar1, func_702()))
			{
				DECORATOR::DECOR_REMOVE(iVar1, func_702());
			}
		}
		func_709(iParam0, uParam1, 0, 1, 0);
		return;
	}
	if (iVar0 == -1088690539)
	{
		if (func_710(iParam0))
		{
			func_234(iParam0);
			func_711(iParam0);
		}
		return;
	}
	iVar1 = func_707(iParam0, uParam1);
	func_712(iParam0, uParam1, iParam2, bParam3);
	func_713(iParam0, uParam1, iParam2, bParam3);
	func_714(iParam0, iVar1);
	switch (func_566(iParam0, uParam1))
	{
		case joaat("DRIVER"):
			func_715(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("ESCORT"):
			func_716(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("PASSENGER_ESCORT"):
			func_717(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("PASSENGER_VIP"):
			func_718(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("MOUNTED_ESCORT"):
			func_719(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("SHOTGUN_RIDER"):
			func_720(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("DROPOFF_GUARD"):
			func_721(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("CHASER"):
			func_722(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("STATIONARY_ESCORT"):
			func_723(iParam0, uParam1, iParam2, bParam3);
			break;
	}
}

void func_403(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_341(iParam0, uParam1, 1))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iParam0 /*4*/]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(uParam1->f_3[iParam0 /*4*/]);
	if ((func_33(256) && !func_55(uParam1, 16)) && func_558(iVar0, Local_2027.f_29[iParam0 /*5*/].f_1, 0) > 3f)
	{
		func_63(uParam1, 16);
	}
	if (func_724(iVar0) && func_55(uParam1, 16))
	{
		if (!func_33(256))
		{
			if (func_725(uParam1, joaat("DRIVER"), iParam0))
			{
				return;
			}
			if (func_725(uParam1, joaat("SHOTGUN_RIDER"), iParam0))
			{
				return;
			}
		}
		func_395(iParam0, uParam1, 1);
		Local_15.f_3[iParam0 /*4*/].f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_404(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (!func_41(&(Local_362[iVar2 /*52*/]), 32) && !func_41(&(Local_362[iVar2 /*52*/]), 64))
			{
				if (!bParam0 || GANG::_0x901E0DC25080C8B9(iVar1) != Local_15.f_316)
				{
				}
				else if (func_41(&(Local_362[iVar2 /*52*/]), 8388608))
				{
				}
				else
				{
					return false;
					Jump @170; //curOff = 141
					if (bParam0)
					{
						if (GANG::_0x901E0DC25080C8B9(iVar1) != Local_15.f_316)
						{
						}
						else
						{
							return false;
						}
					}
				}
				iVar0++;
				return true;
			}
		}
	}
}

int func_405(var uParam0)
{
	return uParam0->f_2;
}

bool func_406(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_407(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
		{
		}
		else if (func_201(iVar0, uParam0, 32))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_408(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;

	if (!func_202(iParam0, uParam1, 128))
	{
		return;
	}
	if (func_202(iParam0, uParam1, 16))
	{
		return;
	}
	if (func_202(iParam0, uParam1, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_257[iParam0 /*5*/]))
	{
		func_726(iParam0, uParam1);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(uParam1->f_257[iParam0 /*5*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_726(iParam0, uParam1);
		return;
	}
	vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	func_727(iParam0, iVar0, vVar5, &iVar1, &iVar2, &iVar3, &bVar4);
	if (iVar1 != 0)
	{
		vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	}
	bVar8 = func_202(iParam0, &Local_15, 256);
	bVar9 = func_202(iParam0, &Local_15, 512);
	if (iVar1 == 0 || !bVar4)
	{
		if (bVar8)
		{
			func_728(iParam0, uParam1, 0);
			return;
		}
		else if (bVar9)
		{
			func_728(iParam0, uParam1, 1);
			return;
		}
	}
	if ((Local_15.f_257[iParam0 /*5*/].f_3 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_257[iParam0 /*5*/].f_3)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_15.f_257[iParam0 /*5*/].f_3))
	{
		return;
	}
	if ((!bVar8 && !bVar9) && !func_202(iParam0, &Local_15, 4096))
	{
		if ((iVar1 == 2 && func_334(Local_2027.f_625, vVar5)) || (iVar1 == 3 && func_334(Local_2027.f_626, vVar5)))
		{
			func_729(iParam0, Local_15.f_257[iParam0 /*5*/].f_3);
		}
	}
	if (!bVar8 && !bVar9)
	{
		if (func_730(vVar5, iVar1, iVar2, bVar4, iVar3, 0))
		{
			func_420(iParam0, &Local_15, 256);
		}
		else if (func_730(vVar5, iVar1, iVar2, bVar4, iVar3, 1))
		{
			func_420(iParam0, &Local_15, 512);
		}
	}
}

bool func_409()
{
	if (!func_33(65536))
	{
		return false;
	}
	if (func_405(&Local_15) <= 2)
	{
		return false;
	}
	if (!func_55(&Local_15, 134217728))
	{
		return false;
	}
	if (func_55(&Local_15, 524288))
	{
		return false;
	}
	if (func_55(&Local_15, 512))
	{
		return false;
	}
	if (func_406(&Local_15, joaat("CHASER")))
	{
		return false;
	}
	return true;
}

void func_410()
{
	Local_15.f_305.f_5 = 0;
	Local_15.f_305.f_6 = func_731();
	Local_15.f_305.f_7 = func_732();
	Local_15.f_305.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_15.f_305.f_2 = { 0f, 0f, 0f };
}

void func_411(int iParam0)
{
	Local_15.f_305 = iParam0;
}

bool func_412()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_55(&Local_15, 256))
	{
		if (func_209(Local_15.f_305.f_9) < 8000)
		{
			return false;
		}
	}
	else if (func_209(Local_15.f_305.f_9) < Local_15.f_305.f_7)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (Local_15.f_16[iVar1 /*12*/].f_2 != 0)
		{
			if (Local_15.f_16[iVar1 /*12*/].f_2 == joaat("CHASER"))
			{
				iVar2++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 < Local_15.f_305.f_6)
	{
		return false;
	}
	if (iVar2 + Local_15.f_305.f_6) > func_733()
	{
		return false;
	}
	return true;
}

bool func_413(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
	{
		return false;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619) };
	fVar7 = -1f;
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if (Local_15.f_16[iVar8 /*12*/].f_2 != joaat("PASSENGER_VIP"))
				{
				}
				else if (func_201(iVar8, &Local_15, 32) || func_201(iVar8, &Local_15, 262144))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar8 /*12*/]))
				{
				}
				else
				{
					iVar9 = NETWORK::NET_TO_PED(Local_15.f_16[iVar8 /*12*/]);
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
					fVar6 = BUILTIN::VDIST(vVar3, vVar0);
					if (fVar6 < 130f || (fVar7 > 0f && fVar6 > fVar7))
					{
					}
					else
					{
						fVar7 = fVar6;
						*uParam1 = { vVar3 };
						*uParam0 = iVar8;
					}
				}
				iVar8++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar8 = 0;
			while (iVar8 < 4)
			{
				if (((!func_202(iVar8, &Local_15, 128) || func_202(iVar8, &Local_15, 2)) || func_202(iVar8, &Local_15, 16)) || func_202(iVar8, &Local_15, 1024))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar8 /*5*/]))
				{
				}
				else
				{
					iVar10 = NETWORK::NET_TO_OBJ(Local_15.f_257[iVar8 /*5*/]);
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar10, false, false) };
					fVar6 = BUILTIN::VDIST(vVar3, vVar0);
					if (fVar6 < 130f || (fVar7 > 0f && fVar6 > fVar7))
					{
					}
					else
					{
						fVar7 = fVar6;
						*uParam1 = { vVar3 };
						*uParam0 = iVar8;
					}
				}
				iVar8++;
			}
			break;
		default:
			return false;
	}
	if (fVar7 < 0f)
	{
		return false;
	}
	return true;
}

int func_414(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (func_113(uParam0->f_16[iVar0 /*12*/].f_4, iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_415(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (func_113(uParam0->f_16[iVar0 /*12*/].f_4, iParam2))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_416(int iParam0, var uParam1, int iParam2)
{
	func_439(&(uParam1->f_16[iParam0 /*12*/].f_4), iParam2);
}

bool func_417(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, 128))
		{
		}
		else if (func_113(uParam0->f_257[iVar0 /*5*/].f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
		}
		else if (!bParam2 && func_113(uParam0->f_257[iVar0 /*5*/].f_1, 2))
		{
		}
		else if (func_113(uParam0->f_257[iVar0 /*5*/].f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_418(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, 128))
		{
		}
		else if (func_113(uParam0->f_257[iVar0 /*5*/].f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
		}
		else if (!bParam2 && func_113(uParam0->f_257[iVar0 /*5*/].f_1, 2))
		{
		}
		else if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_419(int iParam0, var uParam1, int iParam2)
{
	func_439(&(uParam1->f_257[iParam0 /*5*/].f_1), iParam2);
}

void func_420(int iParam0, var uParam1, int iParam2)
{
	func_122(&(uParam1->f_257[iParam0 /*5*/].f_1), iParam2);
}

void func_421(var uParam0, int iParam1)
{
	func_439(&(uParam0->f_1), iParam1);
}

bool func_422(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	vector3 vVar9;
	bool bVar12;
	float fVar13;

	iVar0 = joaat("CHASER");
	iVar1 = func_237();
	iVar2 = func_238();
	bVar3 = func_734();
	vParam2 = { vParam2 + func_735(iParam0, iParam1) };
	if (!func_171(iVar1))
	{
		return false;
	}
	if (!func_171(iVar2))
	{
		return false;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vParam2);
	if (!ENTITY::_0x6BFBDC46139C45AB(vParam2))
	{
		return false;
	}
	if (Local_15.f_305.f_8 == -1)
	{
		if (!func_736(&iVar4))
		{
			return true;
		}
		Local_15.f_305.f_8 = iVar4;
	}
	else
	{
		iVar4 = Local_15.f_305.f_8;
	}
	iVar5 = 2;
	iVar6 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false);
	iVar7 = (iVar6 - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false));
	if (iVar7 < iVar5)
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS((iVar6 + (iVar5 - iVar7)));
		if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) < (iVar6 + (iVar5 - iVar7)))
		{
			return true;
		}
	}
	if (Local_15.f_305.f_1 != -1)
	{
		switch (Local_2027.f_10)
		{
			case joaat("COACH_HOLDUP_ROBBERY"):
				if (((func_202(Local_15.f_305.f_1, &Local_15, 128) && !func_202(Local_15.f_305.f_1, &Local_15, 16)) && !func_202(Local_15.f_305.f_1, &Local_15, 2)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[Local_15.f_305.f_1 /*5*/]))
				{
					bVar12 = true;
					uVar8 = Local_15.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_15.f_257[Local_15.f_305.f_1 /*5*/]), false, false) };
				}
				break;
			case joaat("COACH_HOLDUP_KIDNAP"):
				if ((func_201(Local_15.f_305.f_1, &Local_15, 1024) && !func_201(Local_15.f_305.f_1, &Local_15, 32)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[Local_15.f_305.f_1 /*12*/]))
				{
					bVar12 = true;
					uVar8 = Local_15.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_15.f_16[Local_15.f_305.f_1 /*12*/]), false, false) };
				}
				break;
		}
	}
	if (!bVar12 && !func_737(vParam2, &uVar8, &vVar9, 1128792064 /* Float: 200f */))
	{
		return true;
	}
	fVar13 = func_738(vParam2, vVar9);
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return true;
	}
	if (iVar2 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar2 = func_180(iVar0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar4 /*12*/].f_1))
	{
		if (iVar2 == 0)
		{
			return true;
		}
		if (!func_688(&(Local_15.f_16[iVar4 /*12*/].f_1), iVar2, vParam2, fVar13, 1, 0, 1, 1, 1))
		{
			return false;
		}
		NETWORK::_0x7182EDDA1EE7DB5A(Local_15.f_16[iVar4 /*12*/].f_1);
		return false;
	}
	NETWORK::_0x7182EDDA1EE7DB5A(Local_15.f_16[iVar4 /*12*/].f_1);
	func_689(iVar4);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar4 /*12*/]) && !func_690(&(Local_15.f_16[iVar4 /*12*/]), Local_15.f_16[iVar4 /*12*/].f_1, iVar1, -1, 1, 1, 1, 0))
	{
		return false;
	}
	NETWORK::_0x7182EDDA1EE7DB5A(Local_15.f_16[iVar4 /*12*/]);
	Local_15.f_16[iVar4 /*12*/].f_2 = iVar0;
	Local_15.f_16[iVar4 /*12*/].f_8 = { func_739(iParam0, iParam1) };
	Local_15.f_16[iVar4 /*12*/].f_11 = uVar8;
	if (bVar3)
	{
		func_274(iVar4, &Local_15, 32768);
	}
	if (!func_398(iVar4, &Local_15, &Local_2027, 1))
	{
		return false;
	}
	return true;
}

void func_423(var uParam0, int iParam1, bool bParam2)
{
	switch (func_405(uParam0))
	{
		case 0:
			func_740(1, uParam0);
			break;
		case 1:
			if (func_741(uParam0, 8, 1))
			{
				if (func_741(uParam0, 64, 1) || func_417(uParam0, 32, 1))
				{
					func_740(5, uParam0);
					return;
				}
				if (!func_742(-1, 1))
				{
					return;
				}
				func_740(3, uParam0);
				return;
			}
			if (!func_743(uParam0, 1))
			{
				return;
			}
			if (func_744(uParam0, -1))
			{
				func_740(2, uParam0);
				return;
			}
			func_740(3, uParam0);
			break;
		case 2:
			if (func_741(uParam0, 8, 1))
			{
				func_740(5, uParam0);
				return;
			}
			if (func_744(uParam0, -1))
			{
				return;
			}
			func_740(3, uParam0);
			break;
		case 3:
			if ((func_417(uParam0, 1, 1) || func_417(uParam0, 32, 1)) || func_741(uParam0, 64, 1))
			{
				func_740(5, uParam0);
				return;
			}
			break;
		case 5:
			if (func_741(uParam0, 8, 1))
			{
				if (func_741(uParam0, 2, 1))
				{
					return;
				}
				func_740(6, uParam0);
				return;
			}
			if (func_418(uParam0, 2, 1))
			{
				return;
			}
			if (!func_745(uParam0, 1, -1))
			{
				func_740(1, uParam0);
				return;
			}
			break;
	}
}

void func_424(var uParam0, int iParam1, bool bParam2)
{
	switch (func_405(uParam0))
	{
		case 0:
			func_740(1, uParam0);
			break;
		case 1:
			if (func_742(-1, 1))
			{
				func_740(4, uParam0);
				return;
			}
			if (!func_743(uParam0, 1))
			{
				return;
			}
			if (func_744(uParam0, -1))
			{
				func_740(2, uParam0);
				return;
			}
			func_740(4, uParam0);
			break;
		case 2:
			if (func_742(-1, 0))
			{
				func_740(4, uParam0);
				return;
			}
			if (func_744(uParam0, -1))
			{
				return;
			}
			func_740(4, uParam0);
			break;
		case 4:
			if (func_742(-1, 1))
			{
				return;
			}
			if (!func_745(uParam0, 1, -1))
			{
				func_740(1, uParam0);
				return;
			}
			if (func_407(uParam0))
			{
				return;
			}
			func_740(6, uParam0);
			break;
	}
}

void func_425()
{
	int iVar0;

	if (func_611() == 3)
	{
		return;
	}
	if (!func_614(1) && !func_746())
	{
		return;
	}
	if (Local_15.f_299 == 0)
	{
		iVar0 = func_747();
		if (iVar0 == 0)
		{
			func_748(3);
			return;
		}
		else if (func_499(iVar0) == 0)
		{
			func_748(3);
			return;
		}
	}
	else
	{
		iVar0 = Local_15.f_299;
	}
	switch (func_611())
	{
		case 0:
			if (!func_614(1))
			{
				Local_15.f_299 = iVar0;
				Local_15.f_299.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_749(1);
			}
			if (func_209(Local_15.f_299.f_4) > 20000)
			{
				func_749(8);
				func_748(3);
			}
			if (!func_750(2, 0))
			{
				return;
			}
			func_751(iVar0);
			if (!func_750(4, 0))
			{
				return;
			}
			func_748(1);
			break;
		case 1:
			if (!func_752(1, 0))
			{
				return;
			}
			if (!func_750(32, 0))
			{
				return;
			}
			if (!func_753(func_500(iVar0, Local_15.f_299.f_2)))
			{
				return;
			}
			Local_15.f_299.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_754(4);
			func_748(2);
			break;
		case 2:
			if (!func_750(64, 0))
			{
				return;
			}
			if (!func_614(4) && !func_753(func_500(iVar0, Local_15.f_299.f_2)))
			{
				return;
			}
			func_749(4);
			if (Local_15.f_299.f_2 < (Local_2027.f_537 - 1))
			{
				func_755();
				func_748(1);
				return;
			}
			Local_15.f_299.f_5 = 0;
			Local_15.f_299.f_2 = 0;
			func_748(3);
			break;
	}
}

bool func_426(int iParam0, bool bParam1)
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (bParam1)
			{
				return MISC::_0x8F4F050054005C27(&(Local_2027.f_540.f_4), iParam0);
			}
			return MISC::_0x8F4F050054005C27(&(Local_2027.f_540), iParam0);
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bParam1)
			{
				return MISC::_0x8F4F050054005C27(&(Local_2027.f_540.f_6), iParam0);
			}
			return MISC::_0x8F4F050054005C27(&(Local_2027.f_540.f_2), iParam0);
		default:
			break;
	}
	return false;
}

bool func_427(int iParam0)
{
	int iVar0;

	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar0 = Local_15.f_16[iParam0 /*12*/].f_7;
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar0 = Local_15.f_257[iParam0 /*5*/].f_3;
			break;
		default:
			return false;
	}
	if (iVar0 == 255)
	{
		return false;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!GANG::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iVar0))
	{
		return false;
	}
	return true;
}

void func_428(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	func_756(iParam0, 0, iParam1);
	func_435(iParam0, &uVar0, 0, bParam3, iParam4);
	func_437(iParam0, 0, iParam2);
	func_757(532584148, iParam0, 0, 255, 0, 1);
}

var func_429(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = func_758(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_482(iVar0);
}

int func_430(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/];
}

float func_431(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_432(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	func_759(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				func_760(iParam0, 1628925866);
				break;
			case 1:
				*uParam2 = 1;
				break;
		}
		return;
	}
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 1295140836);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 1526522745);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 1901367336);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -2012562028);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -1811294830);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -1580699377);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -529994165);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -1356198962);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 592638986);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -71665830);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -369634347);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 523648593);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 224041626);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 1119225168);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 820076967);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 1790072136);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 1490530707);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -1908007825);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 2085779592);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -169152669);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -544685409);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -649710054);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -1023735420);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -1126990539);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -1501736823);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 1614824464);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -1845287019);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 1073415046);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, 1906960099);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					func_760(iParam0, -2023453588);
					break;
				case 1:
					*uParam1 = -1520125470;
					break;
			}
			break;
	}
}

void func_433(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	int iVar1;

	fVar0 = ((BUILTIN::TO_FLOAT(iParam4) / BUILTIN::TO_FLOAT(iParam5)) * 100f);
	iVar1 = BUILTIN::CEIL((fVar0 / 5f)) * 5;
	switch (iParam3)
	{
		case -1516819610:
			switch (iParam2)
			{
				case 0:
					if (iVar1 <= 0)
					{
						func_760(iParam0, 102861655);
					}
					switch (iVar1)
					{
						case 5:
							func_760(iParam0, 1606837351);
							break;
						case 10:
							func_760(iParam0, 1993982606);
							break;
						case 15:
							func_760(iParam0, -1120317616);
							break;
						case 20:
							func_760(iParam0, 1497203110);
							break;
						case 25:
							func_760(iParam0, 1461747036);
							break;
						case 30:
							func_760(iParam0, 1705384279);
							break;
						case 35:
							func_760(iParam0, 587764757);
							break;
						case 40:
							func_760(iParam0, 496010113);
							break;
						case 45:
							func_760(iParam0, -8927412);
							break;
						case 50:
							func_760(iParam0, -1913265366);
							break;
						case 55:
							func_760(iParam0, -1185662490);
							break;
						case 60:
							func_760(iParam0, 1041027017);
							break;
						case 65:
							func_760(iParam0, -1593666129);
							break;
						case 70:
							func_760(iParam0, 1825778741);
							break;
						case 75:
							func_760(iParam0, -1544873376);
							break;
						case 80:
							func_760(iParam0, 1557926776);
							break;
						case 85:
							func_760(iParam0, 1088477734);
							break;
						case 90:
							func_760(iParam0, 1557926776);
							break;
						case 95:
							func_760(iParam0, 956550028);
							break;
						default:
							func_760(iParam0, -781986478);
							break;
					}
					break;
				case 1:
					if (iVar1 <= 0)
					{
						*uParam1 = 1;
					}
					break;
			}
			break;
		case joaat("ALL_OR_NOTHING"):
			if (bParam6)
			{
				switch (iParam2)
				{
					case 0:
						func_760(iParam0, 413085053);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_760(iParam0, 102861655);
						break;
					case 1:
						*uParam1 = 1;
						break;
				}
			}
			break;
	}
}

void func_434(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("PVP"):
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -73489229);
					break;
			}
			break;
		case joaat("COOP"):
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 1981105632);
					break;
			}
			break;
	}
}

void func_435(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	bVar0 = iParam4 <= true;
	if (bParam3)
	{
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_760(iParam0, -57805484);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_760(iParam0, 512977886);
					break;
			}
		}
	}
	else
	{
		*uParam1 = 1;
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_760(iParam0, -1570113901);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_760(iParam0, -1876025097);
					break;
			}
		}
	}
}

void func_436(int iParam0, int iParam1, struct<2> Param2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_475(Param2);
	if (!func_476(iVar0))
	{
		return;
	}
	iVar1 = func_477(iVar0);
	if (func_478(iVar1))
	{
		iVar2 = func_761(func_481(iVar1));
	}
	else
	{
		return;
	}
	if (iVar2 <= 0)
	{
		switch (iParam1)
		{
			case 0:
				func_760(iParam0, 1900669220);
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 402273926);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -1111096805);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -738447737);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 704666254);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 963311971);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -1751075375);
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -1527623564);
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -465252584);
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -225219659);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 2108535411);
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -1845896441);
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 1961468135);
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 1723008122);
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -648222260);
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -921745103);
					break;
			}
			break;
	}
}

void func_437(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_760(iParam0, func_762(iParam2));
			break;
	}
}

int func_438(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_763(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_439(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_440(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/]))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		if (bParam3 && PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_441(int iParam0, int iParam1)
{
	func_439(&(Local_2027.f_45[iParam0 /*6*/].f_1), iParam1);
}

void func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_764(iParam0, &iVar1, &iVar0);
	iVar2 = 0;
	while (iVar2 < 12)
	{
		MISC::CLEAR_BIT(&(Local_362[Local_2027.f_634 /*52*/].f_16[iVar2 /*2*/][iVar1]), iVar0);
		iVar2++;
	}
}

void func_443(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_765(iParam0);
	}
	else
	{
		func_766(iParam0);
	}
}

bool func_444(int iParam0, int iParam1)
{
	return (Global_1128574[iParam0 /*56*/].f_48 && iParam1) != 0;
}

bool func_445(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_517(iParam0);
	if (!func_518(iVar0))
	{
		return false;
	}
	iVar1 = func_479(iVar0);
	if (!func_480(iVar1))
	{
		return false;
	}
	if (!func_767(iVar1, &iVar2))
	{
		return true;
	}
	if (func_768(iVar2, 2))
	{
		return false;
	}
	return true;
}

bool func_446(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1071686.f_22538.f_385[iParam0 /*11*/], iParam1);
}

void func_447()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1071686.f_21416.f_260));
}

void func_448(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

int func_449(int iParam0)
{
	if (func_769(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_450(int iParam0)
{
	if (func_770(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_451(var uParam0)
{
	if (!func_292(&Local_2027, uParam0))
	{
		return false;
	}
	if (!func_312(uParam0, 419371455, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_452(struct<5> Param0, int iParam5, var uParam6)
{
	var uVar0;

	if (func_176(Param0, iParam5, &uVar0, 0))
	{
		*uParam6 = uVar0;
		return true;
	}
	return false;
}

void func_453(int iParam0, int iParam1)
{
	func_439(&(Local_2027.f_166[iParam0]), iParam1);
}

void func_454(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2027.f_202.f_332), iParam0))
		{
			return;
		}
		func_771(iParam0, 1);
		MISC::_0xE84AAC1B22A73E99(&(Local_2027.f_202.f_332), iParam0);
	}
	else
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_2027.f_202.f_332), iParam0))
		{
			return;
		}
		func_771(iParam0, 0);
		MISC::_0xB909149F2BB5F6DA(&(Local_2027.f_202.f_332), iParam0);
	}
}

void func_455(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (bParam1)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2027.f_202.f_329), iParam0))
		{
			return;
		}
		func_772(iVar0);
		func_773(iParam0, 1);
		MISC::_0xE84AAC1B22A73E99(&(Local_2027.f_202.f_329), iParam0);
	}
	else
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_2027.f_202.f_329), iParam0))
		{
			return;
		}
		func_774(iVar0);
		func_773(iParam0, 0);
		MISC::_0xB909149F2BB5F6DA(&(Local_2027.f_202.f_329), iParam0);
	}
}

bool func_456(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_246(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

bool func_457(float fParam0)
{
	if (func_246(fParam0->f_202.f_56))
	{
		return true;
	}
	return false;
}

void func_458(var uParam0)
{
	if (uParam0->f_11 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_11))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

void func_459()
{
	AUDIO::_0x9D746964E0CF2C5F(func_775(), func_776());
	AUDIO::_0x9D746964E0CF2C5F(func_777(), func_776());
	AUDIO::_0x9D746964E0CF2C5F(func_778(), func_776());
	AUDIO::_0x9D746964E0CF2C5F(func_779(), func_776());
	AUDIO::_0x9D746964E0CF2C5F(func_780(), func_781());
	AUDIO::_0x9D746964E0CF2C5F(func_782(), func_783());
}

void func_460(var uParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_3));
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1546991729);
	}
}

void func_461(int iParam0)
{
	if (Global_1903133.f_1 != iParam0)
	{
		Global_1903133.f_1 = iParam0;
	}
}

void func_462(int iParam0)
{
	Global_1903133 = iParam0;
}

bool func_463(int iParam0, bool bParam1)
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
		iVar2 = func_784(iVar4, 1);
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
				func_785(iVar2, bVar3, bParam1);
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
					Global_1139381.f_3876.f_2[func_507(iVar2, 1) /*4*/].f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

void func_464(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_465()
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

int func_466(int iParam0)
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

int func_467(int iParam0)
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

void func_468(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_469(struct<2> Param0, bool bParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_475(Param0);
	if (!func_476(iVar1))
	{
		return;
	}
	iVar0 = func_477(iVar1);
	if (!func_478(iVar0))
	{
		return;
	}
	iVar2 = func_479(iVar1);
	if (!func_480(iVar2))
	{
		return;
	}
	iVar6 = func_482(iVar1);
	if (iVar6 == -1)
	{
		return;
	}
	iVar3 = func_483(iVar0);
	iVar4 = func_481(iVar0);
	iVar5 = func_430(iVar6);
	if (func_484())
	{
		if (bParam2 && GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_786(iVar0, iVar2, Param0, iVar6);
		}
		if (func_787(iVar5) != joaat("SETUP"))
		{
			switch (iVar4)
			{
				case joaat("CRIPPS"):
					break;
				case joaat("MARCEL"):
					func_789(iVar4, func_788());
					func_790(iVar4, 1);
					func_791(iVar0);
					func_792(iVar0);
					func_793(16777216);
					break;
				case joaat("MOONSHINER"):
					func_789(iVar4, func_788());
					func_790(iVar4, 1);
					func_791(iVar0);
					func_792(iVar0);
					func_793(8388608);
					break;
				default:
					func_789(iVar4, func_788());
					func_790(iVar4, 1);
					func_791(iVar0);
					func_792(iVar0);
					break;
			}
		}
		func_794(iVar4, func_788());
		func_795(iVar4, bParam2);
		switch (func_796(iVar5))
		{
			case 7:
				func_797(uParam3);
				break;
		}
		func_798(iVar6, Param0, bParam2, *uParam3);
		func_800(func_799(iVar0), 1);
		func_801(1);
	}
	func_802(iVar3, bParam2);
	func_803();
}

bool func_470(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return func_804(iParam0, iParam1);
}

void func_471(int iParam0)
{
	func_805(iParam0);
}

void func_472(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_806(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (!func_807(Var0) && !func_594(Var0))
	{
		return;
	}
	func_808(iParam0, 2);
	func_808(iParam0, 3);
	func_809(iParam0, 6);
	func_810(Var0, 0, 2, bParam1, 0);
}

void func_473(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_806(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_807(Var0))
	{
		return;
	}
	if (!func_594(Var0))
	{
		return;
	}
	if (func_811(iParam0, PLAYER::PLAYER_ID(), 5))
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
	func_810(Var0, 0, bVar2, bParam2, 0);
	func_809(iParam0, 4);
}

void func_474(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_806(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_807(Var0))
	{
		return;
	}
	if (!func_594(Var0))
	{
		return;
	}
	if (func_811(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_810(Var0, 0, 1, bParam1, 0);
	func_809(iParam0, 5);
}

int func_475(struct<2> Param0)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_29(Param0, func_812(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_476(int iParam0)
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

int func_477(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3;
}

bool func_478(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_479(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_1;
}

bool func_480(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_481(int iParam0)
{
	return Global_1118808[iParam0 /*35*/];
}

int func_482(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_3;
}

int func_483(int iParam0)
{
	return Global_1118808[iParam0 /*35*/].f_1;
}

bool func_484()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_485(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_814(joaat("LAST_MISSION"), func_813(iParam0)) };
	func_815(Var0, iParam1);
}

void func_486(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_814(joaat("LAST_MISSION_TYPE"), func_813(iParam0)) };
	func_816(Var0, iParam1);
}

void func_487(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_814(joaat("WIN_TYPE"), func_813(iParam0)) };
	func_817(Var0, iParam1);
}

void func_488(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<2> Var1;

	if (bParam1)
	{
		if (bParam2)
		{
			iVar0 = joaat("RIVAL_WINS");
		}
		else
		{
			iVar0 = joaat("RIVAL_LOSSES");
		}
	}
	else if (bParam2)
	{
		iVar0 = joaat("WINS");
	}
	else
	{
		iVar0 = joaat("LOSSES");
	}
	Var1 = { func_814(iVar0, func_813(iParam0)) };
	func_818(Var1);
}

void func_489(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;

	if (bParam1)
	{
		return;
	}
	Var0 = { func_814(joaat("REWARD_STREAK"), func_813(iParam0)) };
	if (bParam2)
	{
		func_818(Var0);
	}
	else
	{
		func_819(Var0, 0);
	}
}

void func_490(int iParam0, bool bParam1, bool bParam2, struct<2> Param3, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	Var0 = -1;
	vVar2 = joaat("NONE");
	vVar2.f_2 = 255;
	Var0 = func_430(iParam0);
	Var0.f_1 = func_106(Param3);
	vVar2.f_2 = bParam7;
	if (bParam1)
	{
		vVar2.f_1 = 2;
	}
	else
	{
		vVar2.f_1 = 1;
	}
	iVar8 = func_796(Var0);
	iVar6 = func_787(Var0);
	iVar5 = 0;
	switch (iVar8)
	{
		case 0:
			if (bParam2)
			{
				vVar2.x = -1365731393;
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 11:
			if (bParam2)
			{
				switch (iVar6)
				{
					case joaat("SETUP"):
						vVar2.x = -1365731393;
						func_820(256);
						break;
					case joaat("RESUPPLY"):
						vVar2.x = -1365731393;
						func_820(256);
						break;
					case joaat("SELL"):
						if (func_821(iParam0, 2))
						{
							vVar2.x = -406386912;
						}
						else
						{
							vVar2.x = -356110550;
						}
						break;
					default:
						vVar2.x = -1365731393;
						break;
				}
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 7:
			if (bParam2)
			{
				iVar7 = bParam5->f_2;
				switch (iVar7)
				{
					case 0:
						vVar2.x = -508253498;
						break;
					case 1:
						vVar2.x = 566295171;
						break;
					case 2:
						vVar2.x = -1881397389;
						break;
					default:
						vVar2.x = -1365731393;
						break;
				}
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 15:
			if (bParam2)
			{
				if (func_821(iParam0, 4))
				{
					vVar2.x = 1759419243;
				}
				else
				{
					vVar2.x = -1365731393;
				}
			}
			else if (func_821(iParam0, 4))
			{
				vVar2.x = 475709606;
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 18:
			if (bParam2)
			{
				if (func_821(iParam0, 16))
				{
					if (bParam6)
					{
						vVar2.x = 1759419243;
					}
					else
					{
						vVar2.x = 2062237572;
					}
				}
				else
				{
					vVar2.x = -1365731393;
				}
			}
			else
			{
				vVar2.x = 1923632299;
			}
			iVar5 = func_822();
			break;
		default:
			if (bParam2)
			{
				vVar2.x = -1365731393;
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
	}
	func_823(&Var0, &vVar2, bParam5, iVar5);
}

void func_491(int iParam0, int iParam1, int iParam2, struct<2> Param3)
{
	struct<28> Var0;
	var uVar31;

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
	SCRIPTS::_0x31010318BA9897AC(&uVar31, PLAYER::PLAYER_ID());
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 7;
	Var0.f_16 = iParam2;
	Var0.f_7 = { Param3 };
	func_387(&Var0, uVar31);
}

void func_492(bool bParam0)
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
	POSSE::_0xC684FF658B2E55DA(bParam0);
}

void func_493(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam2)
	{
		iVar0 = joaat("WINS");
	}
	else
	{
		iVar0 = joaat("LOSSES");
	}
	if (bParam1)
	{
		iVar1 = func_824(iParam0);
	}
	else
	{
		iVar1 = func_825(iParam0);
	}
	Var2 = { func_814(iVar0, iVar1) };
	func_818(Var2);
}

void func_494(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (GANG::_0x0F99F6436528A089(iVar0) && GANG::_0x149A2751AB66AC02(iVar0) >= 2)
		{
			func_826(17, 1);
		}
	}
	func_827(4);
	func_828(1);
	func_829(60);
	if (SAVE::_0x3CF46F55C6585590())
	{
	}
	else if (SAVE::_0x1840F3B30ED0105F(-1706799532))
	{
	}
	func_221(1);
	func_221(2);
}

void func_495(int iParam0)
{
	func_830(iParam0);
	func_831(iParam0, MISC::GET_GAME_TIMER());
}

void func_496(int iParam0)
{
	Global_1109804.f_21.f_37.f_1 = iParam0;
}

void func_497(int iParam0)
{
	Global_1109804.f_21.f_37 = iParam0;
}

void func_498(int iParam0)
{
	func_439(&(Local_362[Local_2027.f_634 /*52*/].f_41.f_1), iParam0);
}

int func_499(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_292(&Local_2027, &Var0) && func_312(&Var0, 556233122, iParam0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_500(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (((func_292(&Local_2027, &Var0) && func_312(&Var0, 556233122, iParam0, 0)) && func_312(&Var0, -110495140, iParam1, 0)) && func_312(&Var0, -1441758265, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_501(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("PED"):
			if (iParam1 >= 20)
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam1 /*12*/]))
			{
				return false;
			}
			*iParam2 = NETWORK::NET_TO_ENT(Local_15.f_16[iParam1 /*12*/]);
			break;
		case joaat("PROP"):
			if (iParam1 >= 10)
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_278[iParam1 /*2*/]))
			{
				return false;
			}
			if (func_96(iParam1, 1))
			{
				return false;
			}
			*iParam2 = NETWORK::NET_TO_ENT(Local_15.f_278[iParam1 /*2*/]);
			break;
		case joaat("VEHICLE"):
			if (iParam1 >= 3)
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_3[iParam1 /*4*/]))
			{
				return false;
			}
			*iParam2 = NETWORK::NET_TO_ENT(Local_15.f_3[iParam1 /*4*/]);
			break;
		case joaat("PLAYER"):
			if (iParam1 >= 7)
			{
				return false;
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_329[iParam1]) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_329[iParam1]))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(Local_15.f_329[iParam1])))
			{
				return false;
			}
			*iParam2 = func_267(PLAYER::GET_PLAYER_PED(Local_15.f_329[iParam1]));
			break;
		case joaat("PLAYER_HORSE"):
			if (iParam1 >= 7)
			{
				return false;
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_329[iParam1]) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_329[iParam1]))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(Local_15.f_329[iParam1])))
			{
				return false;
			}
			*iParam2 = func_267(PLAYER::_GET_MOUNT_OF_PLAYER(Local_15.f_329[iParam1]));
			break;
		default:
			return false;
	}
	return true;
}

int func_502()
{
	return func_832((13 + Local_2027), 31);
}

void func_503(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_504(int iParam0)
{
	return func_833(iParam0);
}

var func_505(int iParam0)
{
	return Global_1109804.f_21.f_2.f_1[iParam0];
}

bool func_506()
{
	if (func_21() != 0)
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

int func_507(int iParam0, int iParam1)
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

void func_508(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 5, &uParam1);
}

int func_509(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/];
}

char* func_510(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_511(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Var0, bParam2, 4);
	return func_834(iParam0, iParam1, &Var0, uParam3);
}

int func_512(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return iParam2;
	}
	if (!STATS::STAT_ID_GET_INT(&uParam0, &uVar0))
	{
		return iParam2;
	}
	return uVar0;
}

bool func_513(int iParam0, var uParam1)
{
	if (func_292(iParam0, uParam1))
	{
		uParam1->f_2 = -1874578615;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_514(int iParam0, var uParam1)
{
	if (func_292(iParam0, uParam1))
	{
		uParam1->f_2 = 1849119077;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_515(int iParam0, var uParam1)
{
	if (func_292(iParam0, uParam1))
	{
		uParam1->f_2 = -244186873;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

struct<2> func_516()
{
	return Global_1051213;
}

int func_517(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_758(iParam0);
	iVar1 = func_835(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_518(iVar1))
		{
			func_836(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_518(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_519(int iParam0)
{
	if (!func_837(PLAYER::PLAYER_ID(), iParam0, 8))
	{
		return;
	}
	func_838();
	Global_1109804.f_15 = 1;
	func_839(iParam0, 8);
}

bool func_520(int iParam0)
{
	if (!func_840(iParam0))
	{
		return true;
	}
	return (MISC::GET_GAME_TIMER() - func_841(iParam0)) >= func_842(iParam0);
}

void func_521()
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
	func_495(1);
	func_388(&Var0);
}

void func_522()
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
	func_495(0);
	func_387(&Var0, uVar31);
}

float func_523(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

bool func_524(int iParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	if (bParam2 && !GANG::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false) };
	*fParam1 = -1f;
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar3 /*5*/]))
				{
				}
				else
				{
					fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_15.f_257[iVar3 /*5*/]), false, false), vVar0);
					if (*fParam1 != -1f && fVar4 > *fParam1)
					{
					}
					else
					{
						*fParam1 = fVar4;
					}
				}
				iVar3++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar3 = 0;
			while (iVar3 < 20)
			{
				if (Local_15.f_16[iVar3 /*12*/].f_2 != joaat("PASSENGER_VIP"))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar3 /*12*/]))
				{
				}
				else
				{
					fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_15.f_16[iVar3 /*12*/]), false, false), vVar0);
					if (*fParam1 != -1f && fVar4 > *fParam1)
					{
					}
					else
					{
						*fParam1 = fVar4;
					}
				}
				iVar3++;
			}
			break;
	}
	if (*fParam1 == -1f)
	{
		return false;
	}
	return true;
}

int func_525(var uParam0, float fParam1)
{
	return (fParam1->f_10.f_6 - func_210(uParam0));
}

bool func_526(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 2);
	iVar1 = (iParam1 / 8);
	return (iParam0 <= iVar0 && iParam0 >= iVar1);
}

void func_527(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (func_843())
	{
		if ((MISC::GET_GAME_TIMER() - func_844()) < 75000)
		{
			return;
		}
	}
	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_475(Param0);
	if (!func_476(iVar1))
	{
		return;
	}
	iVar0 = func_477(iVar1);
	if (!func_478(iVar0))
	{
		return;
	}
	uVar2 = func_479(iVar1);
	func_845(uVar2, iVar0, Param0);
	func_496(MISC::GET_GAME_TIMER());
	func_497(1);
}

void func_528()
{
	if (func_33(268435456))
	{
		return;
	}
	func_846(4);
	func_126(268435456);
}

bool func_529(int iParam0)
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			return func_847(iParam0);
		case joaat("COACH_HOLDUP_KIDNAP"):
			return func_848(iParam0);
		default:
			break;
	}
	return false;
}

void func_530()
{
	func_849(Local_2027.f_2);
	func_126(262144);
}

bool func_531(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Local_15.f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
			{
			}
			else if (bParam4)
			{
				if ((func_201(iVar0, &Local_15, 32) || func_201(iVar0, &Local_15, 65536)) || func_201(iVar0, &Local_15, 131072))
				{
				}
				else if (!func_440(iVar0, &iVar1, 1, 0))
				{
				}
				else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), vParam0) > fParam3)
				{
				}
				else
				{
					return true;
				}
				iVar0++;
				Jump @330; //curOff = 161
				if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
				{
					iVar2 = 0;
					while (iVar2 < 4)
					{
						if (!func_202(iVar2, &Local_15, 128))
						{
						}
						else if (bParam4)
						{
							if ((func_202(iVar2, &Local_15, 2) || func_202(iVar2, &Local_15, 256)) || func_202(iVar2, &Local_15, 512))
							{
							}
							else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar2 /*5*/]))
							{
							}
							else
							{
								iVar3 = NETWORK::NET_TO_OBJ(Local_15.f_257[iVar2 /*5*/]);
								if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam0) > fParam3)
								{
								}
								else
								{
									return true;
								}
							}
							iVar2++;
							return false;
						}
					}
				}
			}
		}
	}
}

void func_532()
{
	func_850(Local_2027.f_2);
	func_126(524288);
}

bool func_533(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	var uVar7;

	if (!func_33(1) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_34))
	{
		return false;
	}
	if (func_33(8192))
	{
		iVar0 = Local_2027.f_620;
		iVar1 = Local_2027.f_626;
	}
	else
	{
		iVar0 = Local_2027.f_619;
		iVar1 = Local_2027.f_625;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		return false;
	}
	if (func_334(iVar1, Global_35))
	{
		if (func_257(1, 255) && func_365(255) == 0)
		{
			*uParam0 = 0f;
			return true;
		}
		vVar2 = { VOLUME::_GET_VOLUME_COORDS(iVar0) };
		fVar5 = BUILTIN::VDIST(vVar2, Global_35);
		if (func_847(255) || func_848(255))
		{
			if ((func_851(Global_34, 6) && func_852(Global_34, &uVar6, &uVar7)) && func_334(iVar0, Global_35))
			{
				*uParam0 = 0f;
				return true;
			}
			else if (fVar5 < 6f || func_334(iVar0, Global_35))
			{
				*uParam0 = 0.55f;
				return true;
			}
			else if (fVar5 < 20f)
			{
				*uParam0 = 1.25f;
				return true;
			}
		}
	}
	return false;
}

bool func_534()
{
	struct<2> Var0;

	if (func_32())
	{
		return false;
	}
	Var0 = { func_628() };
	if (!func_28(Var0))
	{
		return false;
	}
	if (!func_29(Local_2027.f_2, Var0))
	{
		return false;
	}
	return true;
}

void func_535(int iParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 354, true);
	Global_1071686.f_21416.f_1[iParam0 /*8*/].f_4 = MISC::GET_FRAME_COUNT();
}

bool func_536(bool bParam0)
{
	if (func_372())
	{
		return false;
	}
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8388608))
	{
		return false;
	}
	if (!func_348())
	{
		return false;
	}
	if (Local_2027.f_632 < 0f)
	{
		return false;
	}
	if (!func_853(Local_2027.f_632, 0, 0, 0))
	{
		return false;
	}
	if (bParam0 && func_351(PLAYER::PLAYER_ID(), 1, 1))
	{
		return false;
	}
	return true;
}

int func_537()
{
	return Global_1301323.f_150;
}

bool func_538(int iParam0)
{
	return (Global_1301323.f_288.f_2 && iParam0) != 0;
}

int func_539()
{
	return Global_1301323.f_288;
}

bool func_540()
{
	int iVar0;

	iVar0 = func_854();
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(iVar0, false);
}

void func_541(int iParam0)
{
	Global_1301323.f_288 = iParam0;
}

void func_542(int iParam0)
{
	Global_1301323.f_288.f_1 = iParam0;
}

bool func_543(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return (func_470(iParam0, 1) && !func_470(iParam0, 2));
}

bool func_544(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return func_470(iParam0, 2);
}

bool func_545()
{
	if (func_855(4))
	{
		return Global_1940258.f_21;
	}
	return func_856();
}

var func_546(int iParam0, int iParam1)
{
	return func_857(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_547(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<8> Var0;

	Var0.f_6 = iParam1;
	Var0.f_7 = iParam2;
	Var0.f_4 = iParam0;
	Var0.f_5 = Local_2027;
	func_858(&Var0, uParam3);
}

void func_548(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_806(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_807(Var0))
	{
		return;
	}
	if (func_594(Var0))
	{
		return;
	}
	func_809(iParam0, 2);
	func_808(iParam0, 3);
	func_808(iParam0, 6);
	func_859(Var0);
}

void func_549(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_806(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (!func_807(Var0))
	{
		return;
	}
	if (func_594(Var0))
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
	func_809(iParam0, 3);
	func_860(Var0, 1, bParam2, bParam3);
}

void func_550(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900688.f_1 == 2 || Global_1900688.f_1 == 5) || Global_1900688.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_21() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_466(Global_1893587.f_2);
	Global_1900688.f_1 = 3;
	Global_1900688.f_2 = 0;
	Global_1900688.f_7 = iVar0;
	Global_1900688.f_8 = iParam0;
	Global_1900688.f_9 = iVar1;
	if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
	{
		func_468(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
	}
	else if (Global_1900688.f_11 != -1)
	{
		func_468(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
	}
}

void func_551()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
}

void func_552(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 1048576))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
	}
	func_319(&(Local_362[Local_2027.f_634 /*52*/]), 128);
	func_319(&(Local_362[Local_2027.f_634 /*52*/]), 1048576);
	func_319(&(Local_362[Local_2027.f_634 /*52*/]), 256);
	func_319(&(Local_362[Local_2027.f_634 /*52*/]), 512);
	iVar0 = Local_362[Local_2027.f_634 /*52*/].f_46;
	Local_362[Local_2027.f_634 /*52*/].f_46 = -1;
	Local_2027.f_636 = -1;
	if (!bParam0)
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && iVar0 != -1) && func_861(iVar0, &iVar2)) && ENTITY::GET_ENTITY_MODEL(iVar2) == func_183())
	{
		PED::_0xED00D72F81CF7278(iVar2, 0, 0);
		ENTITY::DETACH_ENTITY(iVar2, true, true);
		TASK::_0x9EBD34958AB6F824(iVar2);
		TASK::TASK_CARRIABLE(iVar2, joaat("MP_MONEYBAG"), iVar1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iVar2, true);
		MISC::_0x7FA58CED69405F9A(iVar2, 3);
	}
}

char* func_553()
{
	return "giver";
}

char* func_554()
{
	return "RECIEVER";
}

char* func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		default:
			break;
	}
	return "";
}

struct<4> func_556(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	struct<4> Var4;

	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0, sParam1, &Var4, !MISC::IS_STRING_NULL_OR_EMPTY(sParam2), sParam2, 2))
	{
		Var0 = { Var4 };
		Var0.f_3 = Var4.f_3.f_2;
	}
	return Var0;
}

bool func_557(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

float func_558(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_559(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2027.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_362[iParam0 /*52*/].f_2.f_4[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_560(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2027.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_362[iParam0 /*52*/].f_2.f_6[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_561()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (PED::_IS_PED_CARRYING(iVar1))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::_0xB07D3185E11657A5(iVar0)) && ENTITY::GET_ENTITY_MODEL(iVar0) == func_183())
		{
			return true;
		}
	}
	return false;
}

bool func_562(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_15.f_16[iVar0 /*12*/].f_7 != iVar1)
		{
		}
		else if (func_201(iVar0, &Local_15, 32))
		{
		}
		else if (!bParam0)
		{
			if (func_201(iVar0, &Local_15, 65536) || func_201(iVar0, &Local_15, 131072))
			{
			}
			else if (!func_862(iVar0, 255))
			{
			}
			else
			{
				return true;
			}
			iVar0++;
			return false;
		}
	}
}

bool func_563(int iParam0)
{
	return func_851(iParam0, 6);
}

bool func_564(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_565(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_566(int iParam0, var uParam1)
{
	return uParam1->f_16[iParam0 /*12*/].f_2;
}

void func_567(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (Local_2027.f_10 != joaat("COACH_HOLDUP_KIDNAP"))
	{
		return;
	}
	if (!func_201(iParam0, &Local_15, 1024))
	{
		return;
	}
	if (func_201(iParam0, &Local_15, 32))
	{
		func_863(iParam0);
		func_864(iParam0);
		func_865(iParam0);
		return;
	}
	if (((Local_15.f_16[iParam0 /*12*/].f_2 == -1088690539 || Local_15.f_16[iParam0 /*12*/].f_2 == 0) || !func_440(iParam0, &iVar0, 1, 1)) || (!PED::_IS_PED_HOGTIED(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false)))
	{
		func_863(iParam0);
		func_864(iParam0);
		func_865(iParam0);
		return;
	}
	iVar3 = func_866(iVar0, &uVar1, &iVar2);
	iVar5 = ENTITY::_0x61914209C36EFDDB(iVar0);
	if ((func_33(1) && func_867(&Local_2027, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64))) && (Local_15.f_16[iParam0 /*12*/].f_7 == PLAYER::PLAYER_ID() || Local_15.f_16[iParam0 /*12*/].f_7 == 255))
	{
		if (iVar5 == 3 && PED::_IS_PED_HOGTIED(iVar0))
		{
			bVar4 = PED::_0x3D9F958834AB9C30(iVar0) == Global_34;
		}
		else if (((iVar5 == 1 && !ENTITY::IS_ENTITY_DEAD(Global_34)) && PED::_IS_PED_HOGTYING(Global_34)) && func_868(Global_34) == iVar0)
		{
			bVar4 = true;
		}
	}
	if (Local_15.f_16[iParam0 /*12*/].f_7 == PLAYER::PLAYER_ID())
	{
		if (((func_201(iParam0, &Local_15, 65536) && func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32)) || (func_201(iParam0, &Local_15, 131072) && func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64))) || ((iVar3 == 0 && func_33(1)) && func_867(&Local_2027, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64))))
		{
			iVar2 = PLAYER::PLAYER_ID();
		}
	}
	if (bVar4)
	{
	}
	else if (iVar2 != PLAYER::PLAYER_ID())
	{
		if (iVar2 == 255)
		{
			iVar6 = ENTITY::_0x61914209C36EFDDB(iVar0);
			if (iVar6 == 8 || iVar6 == 9)
			{
				return;
			}
		}
		func_863(iParam0);
		func_864(iParam0);
		func_865(iParam0);
		return;
	}
	func_869(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_34) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, Global_34))
	{
		func_870(iParam0);
	}
	else
	{
		func_864(iParam0);
	}
	if (((((func_33(1) && !func_862(iParam0, 255)) && func_867(&Local_2027, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_33(8192))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0)) && iVar5 != 9) && iVar5 != 8)
	{
		func_871(iParam0);
	}
	else
	{
		func_865(iParam0);
	}
}

void func_568(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_271(iParam0, 64))
	{
		if (Local_15.f_16[iParam0 /*12*/].f_2 != joaat("CHASER") && func_271(iParam0, 33554432))
		{
			bVar0 = true;
		}
		if ((!bVar0 && PED::IS_PED_HUMAN(iParam1)) && !func_201(iParam0, &Local_15, 32768))
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_872(iParam1));
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_872(iParam1)));
		}
		func_272(iParam0, 64);
	}
	if (!func_271(iParam0, 67108864) && func_33(1))
	{
		if (Local_15.f_16[iParam0 /*12*/].f_2 != joaat("CHASER") && func_271(iParam0, 33554432))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			iVar1 = func_873(iParam0, iParam1, 1);
			if (iVar1 != 0)
			{
				PLAYER::_0x7C32191D9FB2BDEA(iVar1);
			}
		}
		if (!bVar0)
		{
			switch (func_566(iParam0, &Local_15))
			{
				case joaat("PASSENGER_VIP"):
					switch (Local_2027.f_10)
					{
						case joaat("COACH_HOLDUP_ROBBERY"):
							MISC::_0xF63FA29D4A9ACA86(iParam1, func_874());
							PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_874()));
							func_272(iParam0, 2097152);
							break;
						case joaat("COACH_HOLDUP_KIDNAP"):
							MISC::_0xF63FA29D4A9ACA86(iParam1, func_875());
							PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_875()));
							func_272(iParam0, 2097152);
							break;
					}
					break;
				default:
					if ((PED::IS_PED_HUMAN(iParam1) && Local_15.f_16[iParam0 /*12*/].f_2 != joaat("DROPOFF_GUARD")) && !func_201(iParam0, &Local_15, 32768))
					{
						MISC::_0xF63FA29D4A9ACA86(iParam1, func_876());
						PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_876()));
						func_272(iParam0, 2097152);
					}
					break;
			}
		}
		func_272(iParam0, 67108864);
	}
}

void func_569(int iParam0, int iParam1)
{
}

void func_570(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	int iVar14;

	if (func_201(iParam0, &Local_15, 2))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/].f_5) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_16[iParam0 /*12*/].f_5))
		{
			iVar0 = NETWORK::_NET_TO_ANIM_SCENE(Local_15.f_16[iParam0 /*12*/].f_5);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
			}
		}
		return;
	}
	if (func_566(iParam0, &Local_15) != joaat("PASSENGER_VIP"))
	{
		return;
	}
	if (func_877(iParam0, &Local_15) != 22)
	{
		return;
	}
	if (!func_201(iParam0, &Local_15, 1))
	{
		return;
	}
	if (func_201(iParam0, &Local_15, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/].f_5))
	{
		return;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(Local_15.f_16[iParam0 /*12*/].f_5);
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iVar0, false) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return;
	}
	if (func_400(iParam0, 0))
	{
		return;
	}
	sVar2 = func_553();
	if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar0, sVar2, false)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, sVar2, iParam1, 0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, func_555(0), true);
		func_878(iParam0, iVar0, iParam1);
	}
	ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iVar0, &vVar3, &vVar6, 2);
	if (BUILTIN::VDIST(vVar3, ENTITY::GET_ENTITY_COORDS(iParam1, false, false)) > 1f)
	{
		func_878(iParam0, iVar0, iParam1);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false) && !ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0))
	{
		iVar9 = ANIMSCENE::_GET_ANIM_SCENE_PED(iVar0, func_554(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			if (!PED::IS_PED_A_PLAYER(iVar9))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar0, func_554(), iVar9);
			}
			else if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9) != Local_15.f_16[iParam0 /*12*/].f_7)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar0, func_554(), iVar9);
			}
			return;
		}
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iParam0 /*12*/].f_7))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iParam0 /*12*/].f_7))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_15.f_16[iParam0 /*12*/].f_7))
		{
			return;
		}
		iVar10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_15.f_16[iParam0 /*12*/].f_7);
		if (func_41(&(Local_362[iVar10 /*52*/]), 256))
		{
			return;
		}
		if (!func_41(&(Local_362[iVar10 /*52*/]), 1048576))
		{
			return;
		}
		iVar1 = PLAYER::GET_PLAYER_PED(Local_15.f_16[iParam0 /*12*/].f_7);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_554(), iVar1, 0);
		vVar11 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
		func_393(&vVar11, 0f);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		vVar6 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam1) };
		vVar3 = { vVar3.x, vVar3.y, vVar11.z };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, vVar3, vVar6, 2);
		if (func_879(iParam1, &iVar14))
		{
			PED::_0xED00D72F81CF7278(iVar14, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar14, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_880(), iVar14, 0);
		}
		ANIMSCENE::START_ANIM_SCENE(iVar0);
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		func_547(6, PLAYER::PLAYER_ID(), iParam0, func_546(0, 8));
	}
}

void func_571(int iParam0, int iParam1)
{
	if (Local_15.f_16[iParam0 /*12*/].f_2 == -1088690539 || Local_15.f_16[iParam0 /*12*/].f_2 == joaat("CHASER"))
	{
		return;
	}
	if (!func_201(iParam0, &Local_15, 33554432))
	{
		return;
	}
	if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32))
	{
		return;
	}
	if (func_271(iParam0, 32))
	{
		return;
	}
	func_881(iParam1, 0);
	func_272(iParam0, 32);
}

void func_572(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_41(uParam3[iVar0 /*52*/], 2))
	{
		return;
	}
	if (func_882(iParam1))
	{
		func_115(uParam3[iVar0 /*52*/], iParam4);
		return;
	}
	if (func_883(iParam1))
	{
		func_115(uParam3[iVar0 /*52*/], iParam4);
		return;
	}
	if (func_884(iParam1))
	{
		func_115(uParam3[iVar0 /*52*/], iParam4);
		return;
	}
	if (func_885(iParam1, &(iParam4->f_171)))
	{
		func_115(uParam3[iVar0 /*52*/], iParam4);
		return;
	}
	if (func_886(uParam2, uParam3))
	{
		func_115(uParam3[iVar0 /*52*/], iParam4);
		return;
	}
}

void func_573(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (!func_271(iParam0, 8192) || func_271(iParam0, 16))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		func_441(iParam0, 16384);
		return;
	}
	fVar0 = func_558(iParam1, Global_35, 1);
	if (fVar0 > 25f)
	{
		func_441(iParam0, 16384);
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		func_441(iParam0, 16384);
		return;
	}
	if (!PED::IS_PED_HEADTRACKING_PED(iParam1, Global_34) || fVar0 > 12f)
	{
		fVar1 = 180f;
		if (Local_15.f_16[iParam0 /*12*/].f_2 == joaat("SHOTGUN_RIDER") && !func_33(256))
		{
			fVar1 = 300f;
		}
		if (!func_887(iParam1, Global_34, fVar1))
		{
			func_441(iParam0, 16384);
			return;
		}
		iVar2 = func_267(Global_34);
		if (AITRANSPORT::_0xDC44F405A6B98D03(Global_34, 0))
		{
			iVar2 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_34);
		}
		if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iVar2, 17))
		{
			func_441(iParam0, 16384);
			return;
		}
	}
	func_272(iParam0, 16384);
}

void func_574(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;

	if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32))
	{
		if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	switch (Local_15.f_16[iParam0 /*12*/].f_2)
	{
		case joaat("DROPOFF_GUARD"):
			if (!bVar0 && !bVar1)
			{
				return;
			}
			if (func_201(iParam0, &Local_15, 2048) != bVar1)
			{
				return;
			}
			if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 4194304) && !func_888(iParam0, 8, &Local_362, 1))
			{
				func_889(iParam0, iParam1, 8, &Local_362, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
				func_890(iParam0, 8, &(Local_362[Local_2027.f_634 /*52*/]));
				func_319(&(Local_362[Local_2027.f_634 /*52*/]), 4194304);
				return;
			}
			fVar2 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
			if (func_888(iParam0, 6, &Local_362, 1))
			{
				if (fVar2 > 60f)
				{
					func_890(iParam0, 6, &(Local_362[Local_2027.f_634 /*52*/]));
					func_890(iParam0, 9, &(Local_362[Local_2027.f_634 /*52*/]));
				}
				else if (fVar2 < 18f)
				{
					switch (Local_2027.f_10)
					{
						case joaat("COACH_HOLDUP_ROBBERY"):
							bVar3 = func_561();
							break;
						case joaat("COACH_HOLDUP_KIDNAP"):
							bVar3 = func_891(1);
							break;
					}
					if (bVar3)
					{
						func_889(iParam0, iParam1, 9, &Local_362, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
					}
					return;
				}
			}
			if (fVar2 > 20f)
			{
				return;
			}
			func_889(iParam0, iParam1, 6, &Local_362, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
			break;
		case joaat("STATIONARY_ESCORT"):
			if (Local_15.f_16[iParam0 /*12*/].f_3 == 38 || Local_15.f_16[iParam0 /*12*/].f_3 == 39)
			{
				func_890(iParam0, 6, &(Local_362[Local_2027.f_634 /*52*/]));
				func_890(iParam0, 11, &(Local_362[Local_2027.f_634 /*52*/]));
				func_890(iParam0, 1, &(Local_362[Local_2027.f_634 /*52*/]));
			}
			break;
		case joaat("SHOTGUN_RIDER"):
			if (Local_15.f_16[iParam0 /*12*/].f_3 == 7)
			{
				func_890(iParam0, 6, &(Local_362[Local_2027.f_634 /*52*/]));
				func_890(iParam0, 11, &(Local_362[Local_2027.f_634 /*52*/]));
				func_890(iParam0, 1, &(Local_362[Local_2027.f_634 /*52*/]));
			}
			break;
	}
}

int func_575(int iParam0, var uParam1)
{
	return uParam1->f_16[iParam0 /*12*/];
}

void func_576(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_201(iParam0, uParam1, 32))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), uParam3->f_10.f_18);
		return;
	}
	if (uParam1->f_16[iParam0 /*12*/].f_2 != joaat("DROPOFF_GUARD"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), uParam3->f_10.f_15);
		return;
	}
	if (func_201(iParam0, uParam1, 2048))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), uParam3->f_10.f_16);
		return;
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), uParam3->f_10.f_17);
		return;
	}
}

void func_577(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (((Local_15.f_16[iParam0 /*12*/].f_2 == joaat("DRIVER") || Local_15.f_16[iParam0 /*12*/].f_2 == joaat("SHOTGUN_RIDER")) || Local_15.f_16[iParam0 /*12*/].f_2 == joaat("ESCORT")) || Local_15.f_16[iParam0 /*12*/].f_2 == joaat("PASSENGER_ESCORT"))
	{
		iVar0 = Local_15.f_16[iParam0 /*12*/].f_11;
		if (iVar0 < 0 || iVar0 >= 3)
		{
			return;
		}
		iVar1 = PED::_0xEF2E6F870783369B(iParam1, 0);
		if (iVar1 == Local_2027.f_621[iVar0])
		{
			return;
		}
		PED::_0xFC3DB99C8144CD81(iParam1, Local_2027.f_621[iVar0], 0, 0, 0);
	}
}

void func_578(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	iVar1 = func_575(iParam0, uParam1);
	iVar2 = func_707(iParam0, uParam1);
	vVar4 = { fParam3->f_10.f_2 };
	fVar7 = 10f;
	if (func_588(iVar0))
	{
		return;
	}
	iVar10 = func_894(uParam1->f_16[iParam0 /*12*/].f_11, uParam1);
	switch (func_877(iParam0, uParam1))
	{
		case 2:
			func_895(iVar2);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar2)
			{
				return;
			}
			if (func_33(256))
			{
				return;
			}
			fVar8 = 4.5f;
			if (func_896(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, fParam3))
			{
				iVar3 = NETWORK::NET_TO_VEH(uParam1->f_3[(uParam1->f_16[iParam0 /*12*/].f_11 - 1) /*4*/]);
				fVar9 = func_897((uParam1->f_16[iParam0 /*12*/].f_11 - 1), uParam1->f_16[iParam0 /*12*/].f_11, fParam3);
				func_898(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar0, iVar3, fVar8, iVar10, fVar9);
				return;
			}
			if (func_55(uParam1, 65536))
			{
				func_899(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar0, fVar8, iVar10, fParam3);
				return;
			}
			func_900(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar0, vVar4, fVar8, iVar10, fParam3, fVar7);
			break;
		case 3:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar2)
			{
				return;
			}
			func_889(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
			if (func_33(256))
			{
				func_901(iVar1);
				return;
			}
			fVar8 = 10f;
			if (func_902(iVar0))
			{
				fVar8 = 0f;
			}
			iVar11 = func_903(iVar2, uParam2, 1120403456 /* Float: 100f */);
			if (func_896(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, fParam3))
			{
				iVar3 = NETWORK::NET_TO_VEH(uParam1->f_3[(uParam1->f_16[iParam0 /*12*/].f_11 - 1) /*4*/]);
				fVar9 = func_897((uParam1->f_16[iParam0 /*12*/].f_11 - 1), uParam1->f_16[iParam0 /*12*/].f_11, fParam3);
				func_904((uParam1->f_16[iParam0 /*12*/].f_11 - 1), iVar1, iVar11, iVar0, iVar3, fVar8, iVar10, fVar9);
				return;
			}
			if (func_55(uParam1, 65536))
			{
				func_905(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar11, iVar0, fVar8, iVar10, fParam3);
				return;
			}
			func_906(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar11, iVar0, vVar4, fVar8, iVar10, fParam3, fVar7);
			break;
		case 4:
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			if (func_55(uParam1, 65536))
			{
				func_905(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar11, iVar0, 10f, iVar10, fParam3);
				return;
			}
			func_906(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar11, iVar0, vVar4, 0f, iVar10, fParam3, fVar7);
			break;
		case 1:
			if (!func_907(iVar0, -1, 1))
			{
				return;
			}
			if (PED::IS_PED_ON_VEHICLE(iVar2, false))
			{
				func_908(iVar1, ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 20f, 16777216, 4);
			}
			func_909(iVar1, iVar0, -1, 1073741824 /* Float: 2f */, -1, 1);
			break;
	}
}

void func_579(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	iVar1 = func_575(iParam0, uParam1);
	iVar2 = func_707(iParam0, uParam1);
	iVar4 = 16777217;
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			break;
		case 35:
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 6, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 3, true);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return;
			}
			if (VEHICLE::_0x0E3BF7ED4169EC43(PED::GET_VEHICLE_PED_IS_IN(iVar2, true)))
			{
				iVar4 = 4161;
			}
			iVar3 = func_903(iVar2, &Local_362, 1120403456 /* Float: 100f */);
			if (iVar3 == func_910())
			{
				iVar3 = 0;
			}
			if (func_911(iVar1, iVar4, iVar3))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			}
			break;
		case 34:
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			func_912(iVar1, 0, 1);
			break;
		case 36:
			func_908(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 100f, 0, 4);
			break;
	}
}

void func_580(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	iVar1 = func_707(iParam0, uParam1);
	iVar2 = func_575(iParam0, uParam1);
	switch (func_877(iParam0, uParam1))
	{
		case 14:
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				return;
			}
			func_909(iVar2, iVar0, -2, 1073741824 /* Float: 2f */, -1, 0);
			break;
		case 15:
			func_895(iVar1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			break;
		case 16:
			func_912(iVar2, 0, 0);
			break;
	}
}

void func_581(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;

	iVar1 = func_575(iParam0, uParam1);
	func_587(iParam0, &iVar0);
	iVar2 = func_707(iParam0, uParam1);
	if (func_201(iParam0, uParam1, 32))
	{
		if ((func_55(&Local_15, 524288) && iParam0 == Local_15.f_328) && (func_55(&Local_15, 16777216) || func_55(&Local_15, 33554432)))
		{
			ENTITY::_0x18FF3110CF47115D(iVar2, 2, 1);
		}
		else
		{
			ENTITY::_0x18FF3110CF47115D(iVar2, 2, 0);
		}
		ENTITY::_0x18FF3110CF47115D(iVar2, 1, 0);
		ENTITY::_0x18FF3110CF47115D(iVar2, 3, 0);
		ENTITY::_0x18FF3110CF47115D(iVar2, 7, 0);
		ENTITY::_0x18FF3110CF47115D(iVar2, 11, 0);
		ENTITY::_0x18FF3110CF47115D(iVar2, 10, 0);
		if (PED::_0xE4C11F104620DDCE(iVar2, 0))
		{
			PED::_0x6569F31A01B4C097(iVar2, 0, 0);
		}
		if (PED::_0xE4C11F104620DDCE(iVar2, 1))
		{
			PED::_0x6569F31A01B4C097(iVar2, 1, 0);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar2, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
		return;
	}
	if (func_201(iParam0, &Local_15, 67108864))
	{
		if (PED::_0xE4C11F104620DDCE(iVar2, 0))
		{
			PED::_0x6569F31A01B4C097(iVar2, 0, 0);
		}
		if (PED::_0xE4C11F104620DDCE(iVar2, 1))
		{
			PED::_0x6569F31A01B4C097(iVar2, 1, 0);
		}
	}
	if ((Local_15.f_16[iParam0 /*12*/].f_3 != 0 && Local_15.f_16[iParam0 /*12*/].f_3 != 17) && Local_15.f_16[iParam0 /*12*/].f_3 != 18)
	{
		if (PED::GET_PED_CONFIG_FLAG(iVar2, 277, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar2, 277, false);
		}
	}
	switch (func_877(iParam0, uParam1))
	{
		case 25:
			if (!func_564(iVar2, -1098463898))
			{
				iVar5 = func_913(iParam0);
				if (iVar5 != 0)
				{
					func_914(iVar1, iVar5, Local_2027.f_45[iParam0 /*6*/].f_2, func_683(&Local_2027, iParam0));
				}
				else
				{
					func_915(iVar1, Local_2027.f_45[iParam0 /*6*/].f_2, func_683(&Local_2027, iParam0));
				}
			}
			func_916(iParam0, uParam1, 26);
			break;
		case 26:
			func_917(iVar1);
			func_916(iParam0, uParam1, 25);
			break;
		case 17:
			func_895(iVar2);
			if (func_55(uParam1, 16))
			{
				func_889(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
				if (!func_271(iParam0, 1048576) && func_918(iVar2))
				{
					func_272(iParam0, 1048576);
				}
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
			break;
		case 18:
			func_889(iParam0, iVar2, 1, uParam2, 0, 0, 1, 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
			{
				return;
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			func_911(iVar1, 16777216, 0);
			break;
		case 20:
			func_889(iParam0, iVar2, 4, uParam2, 0, 0, 1, 0);
			if (func_201(iParam0, &Local_15, 16384))
			{
				func_889(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
			}
			if (PED::_0xB7DBB2986B87E230(iVar2, 0.5f))
			{
				func_889(iParam0, iVar2, 5, uParam2, 0, 0, 1, 0);
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			if (!func_919(uParam2, iParam0, &iVar3))
			{
				iVar3 = func_903(iVar2, uParam2, 25f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				func_920(iVar1, iVar3);
			}
			func_920(iVar1, 0);
			break;
		case 19:
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return;
			}
			if (!func_564(iVar2, 518218985))
			{
				iVar3 = func_903(iVar2, uParam2, 25f);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_921(&iVar2, 10000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			if (func_908(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2.2f, 256, 6) && func_922(iVar2, 2.2f, &iVar4))
			{
				TASK::_0x3923EC958249657D(iVar2, iVar4, -1082130432 /* Float: -1f */);
			}
			break;
		case 21:
			if (func_201(iParam0, &Local_15, 16384) && !func_888(iParam0, 10, &Local_362, 0))
			{
				if (func_923(iVar2, joaat("PASSENGER_VIP")))
				{
					func_924(iParam0, 10, &(Local_362[Local_2027.f_634 /*52*/]));
				}
				else
				{
					func_889(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
				}
			}
			else
			{
				func_889(iParam0, iVar2, 2, uParam2, 0, 0, 1, 1);
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			if (func_201(iParam0, uParam1, 4))
			{
				return;
			}
			iVar4 = func_903(iVar2, &Local_362, 1120403456 /* Float: 100f */);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
			}
			else
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
			}
			if (func_908(iVar1, vVar6, 200f, 1, 3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					TASK::_0x3923EC958249657D(iVar2, iVar4, -1082130432 /* Float: -1f */);
				}
			}
			break;
		case 27:
			func_925(iVar1);
			break;
		case 22:
			PED::SET_PED_CONFIG_FLAG(iVar2, 297, true);
			PED::SET_PED_COMBAT_MOVEMENT(iVar2, 0);
			PED::SET_PED_CONFIG_FLAG(iVar2, 121, true);
			PED::_0xEAE3B5B019C8D23F(iVar2, 29);
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			func_889(iParam0, iVar2, 4, uParam2, 0, 0, 1, 0);
			if (func_201(iParam0, &Local_15, 16384))
			{
				func_889(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
			}
			if (PED::_0xB7DBB2986B87E230(iVar2, 0.5f))
			{
				func_889(iParam0, iVar2, 5, uParam2, 0, 0, 1, 1);
			}
			if (uParam1->f_16[iParam0 /*12*/].f_7 != 255)
			{
				func_889(iParam0, iVar2, 3, uParam2, PLAYER::GET_PLAYER_PED(uParam1->f_16[iParam0 /*12*/].f_7), 0, 1, 0);
			}
			else if (!func_564(iVar2, -1519143300))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_5) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(NETWORK::_NET_TO_ANIM_SCENE(uParam1->f_16[iParam0 /*12*/].f_5), false))
				{
					return;
				}
				iVar3 = func_903(iVar2, uParam2, 25f);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					func_920(iVar1, iVar3);
				}
				func_920(iVar1, 0);
				return;
			}
			break;
		case 23:
			if (!func_926(iVar2))
			{
				return;
			}
			func_889(iParam0, iVar2, 3, uParam2, 0, 0, 1, 0);
			func_927(iVar1);
			break;
		case 28:
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
			break;
	}
}

void func_582(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	iVar1 = func_575(iParam0, uParam1);
	iVar2 = func_707(iParam0, uParam1);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_1))
	{
		return;
	}
	iVar3 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/].f_1);
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 29:
			if (func_55(uParam1, 16))
			{
				iVar4 = func_903(iVar2, uParam2, 1120403456 /* Float: 100f */);
				func_928(iVar1, iVar4);
			}
			else
			{
				iVar4 = func_929(iVar2, 1120403456 /* Float: 100f */);
				func_930(iVar1, iVar4, 5000, 0, 31, 0);
			}
			if (func_931(iParam0, iVar2, uParam1))
			{
				if (func_564(iVar2, 1435919172))
				{
					TASK::CLEAR_PED_TASKS(iVar2, true, false);
				}
			}
			else
			{
				func_932(iVar1, iVar0, uParam1->f_16[iParam0 /*12*/].f_8, 1.75f);
			}
			break;
		case 30:
			func_912(iVar1, 0, 1);
			break;
	}
}

void func_583(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;

	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	iVar1 = func_575(iParam0, uParam1);
	iVar2 = func_707(iParam0, uParam1);
	iVar4 = Local_15.f_16[iParam0 /*12*/].f_7;
	switch (func_877(iParam0, uParam1))
	{
		case 6:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) == iVar2)
			{
				return;
			}
			func_909(iVar1, iVar0, 0, 1073741824 /* Float: 2f */, -1, 1);
			break;
		case 7:
			if (!func_933(iVar2))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iVar2, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 0, false))
				{
					func_934(iParam0, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
				}
				else
				{
					func_934(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			break;
		case 8:
			if (!func_933(iVar2))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iVar2, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 0, false))
				{
					func_934(iParam0, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
				}
				else
				{
					func_934(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			if (!func_888(iParam0, 9, &Local_362, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_923(iVar2, 0))
				{
					func_889(iParam0, iVar2, 9, &Local_362, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_924(iParam0, 9, &(Local_362[Local_2027.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_935(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 9:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			func_917(iVar1);
			if (!func_888(iParam0, 6, &Local_362, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_923(iVar2, 0))
				{
					func_889(iParam0, iVar2, 6, &Local_362, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_924(iParam0, 6, &(Local_362[Local_2027.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_921(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 10:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			if (!func_564(iVar2, 1630799643))
			{
				iVar5 = PLAYER::GET_PLAYER_PED(Local_15.f_16[iParam0 /*12*/].f_7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar5) || func_936(iVar2, &iVar5, &uVar6, 1103626240 /* Float: 25f */))
				{
					if (func_933(iVar2))
					{
						func_937(iVar1, iVar5);
					}
					else
					{
						func_934(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
					}
				}
				else
				{
					func_934(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			if (!func_888(iParam0, 11, &Local_362, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_923(iVar2, 0))
				{
					func_889(iParam0, iVar2, 11, &Local_362, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_924(iParam0, 11, &(Local_362[Local_2027.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_921(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
			{
				return;
			}
			iVar7 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (func_123(iVar7, 1, 1))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (Local_362[iVar7 /*52*/].f_47 > 44000 && !func_888(iParam0, 0, &Local_362, 0))
				{
					if (!func_923(iVar2, 0))
					{
						func_889(iParam0, iVar2, 0, &Local_362, iVar3, 0, 0, 0);
					}
				}
				else if (Local_362[iVar7 /*52*/].f_47 > 35000 && !func_888(iParam0, 1, &Local_362, 0))
				{
					if (func_923(iVar2, 0))
					{
						func_924(iParam0, 1, &(Local_362[Local_2027.f_634 /*52*/]));
					}
					else
					{
						func_889(iParam0, iVar2, 1, &Local_362, iVar3, 0, 0, 0);
					}
				}
			}
			break;
		case 11:
			func_889(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
			func_912(iVar1, 1, 0);
			break;
		case 12:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iVar2)
			{
				return;
			}
			func_938(iVar1, iVar0);
			break;
	}
}

void func_584(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar0 = func_707(iParam0, uParam1);
	iVar1 = func_575(iParam0, uParam1);
	if (func_201(iParam0, uParam1, 2048))
	{
		iVar6 = 1;
		iVar2 = fParam3->f_620;
		if (VOLUME::_DOES_VOLUME_EXIST(iVar2))
		{
			vVar3 = { VOLUME::_GET_VOLUME_COORDS(iVar2) };
		}
		else
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		}
	}
	else
	{
		iVar2 = fParam3->f_619;
		if (VOLUME::_DOES_VOLUME_EXIST(iVar2))
		{
			vVar3 = { VOLUME::_GET_VOLUME_COORDS(iVar2) };
		}
		else
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iVar2))
	{
		PED::_0xFC3DB99C8144CD81(iVar0, iVar2, 0, 0, 0);
	}
	iVar8 = 1711865203;
	switch (func_877(iParam0, uParam1))
	{
		case 31:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			if (func_933(iVar0) && !func_271(iParam0, 32768))
			{
				func_895(iVar0);
				return;
			}
			if (!func_271(iParam0, 16))
			{
				if (!func_888(iParam0, 7, &Local_362, 0) && func_939(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 80f, &iVar7, 20f, iVar6, 1))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 0))
					{
						PED::_0xEC6935EBE0847B90(iVar0, func_940(iVar7));
						TASK::CLEAR_PED_TASKS(iVar0, true, false);
					}
					if (func_941(iVar1, iVar8, PLAYER::GET_PLAYER_PED(iVar7), 1))
					{
						func_924(iParam0, 7, &(Local_362[Local_2027.f_634 /*52*/]));
					}
					return;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_231(iVar8), func_942(iVar8), 1))
				{
					return;
				}
				if (func_943(iVar0, 20f, &iVar7))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 0))
					{
						PED::_0xEC6935EBE0847B90(iVar0, func_940(iVar7));
						TASK::CLEAR_PED_TASKS(iVar0, true, false);
					}
					func_917(iVar1);
					return;
				}
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				return;
			}
			iVar9 = func_913(iParam0);
			if (iVar9 == 0)
			{
				func_915(iVar1, Local_2027.f_45[iParam0 /*6*/].f_2, func_683(&Local_2027, iParam0));
			}
			else
			{
				func_914(iVar1, iVar9, Local_2027.f_45[iParam0 /*6*/].f_2, func_683(&Local_2027, iParam0));
			}
			break;
		case 33:
			if (Local_15.f_328 == -1)
			{
				return;
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 1))
			{
				PED::_0xA3A9299C4F2ADB98(iVar0);
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				return;
			}
			if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
			{
				if (func_440(Local_15.f_328, &iVar13, 0, 0))
				{
					vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar13, false, false) };
				}
			}
			else if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[Local_15.f_328 /*5*/]))
				{
					iVar14 = NETWORK::NET_TO_OBJ(Local_15.f_257[Local_15.f_328 /*5*/]);
					vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar14, false, false) };
				}
			}
			if (func_384(vVar10))
			{
				return;
			}
			if (func_564(iVar0, 242628503))
			{
				return;
			}
			if (PED::_IS_PED_CARRYING(iVar0))
			{
				return;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar15);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar10, 1f, 20000, 2f, 1048576, 40000f);
			if (ENTITY::DOES_ENTITY_EXIST(iVar13))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iVar13);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iVar14);
			}
			func_944(iVar0, &iVar15, 0, 0, 1, 1);
			break;
		case 32:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 12, true);
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 0))
			{
				PED::SET_PED_PANIC_EXIT_SCENARIO(iVar0, vVar3);
			}
			break;
	}
}

void func_585(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar7;

	iVar0 = func_707(iParam0, uParam1);
	iVar1 = func_575(iParam0, uParam1);
	if (!func_888(iParam0, 0, &Local_362, 0) && PED::IS_PED_IN_COMBAT(iVar0, 0))
	{
		func_889(iParam0, iVar0, 0, &Local_362, 0, 0, 1, 1);
	}
	switch (func_877(iParam0, uParam1))
	{
		case 44:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
			if (func_945(iParam0, &iVar2))
			{
				func_946(iVar1, ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 200f, 0, 0);
			}
			else
			{
				func_946(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 200f, 0, 0);
			}
			break;
		case 45:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			if (func_564(iVar0, 518218985))
			{
				return;
			}
			iVar3 = func_903(iVar0, &Local_362, 200f);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				bVar7 = func_947(iVar1, iVar3, 4, 200f, 18874368);
			}
			else
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
				bVar7 = func_908(iVar1, vVar4, 200f, 18874368, 4);
			}
			if (bVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					TASK::_0x3923EC958249657D(iVar0, iVar3, -1082130432 /* Float: -1f */);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
				{
					TASK::_0xE8F1A5B4CED3725A(iVar0, VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619), -1082130432 /* Float: -1f */);
				}
			}
			break;
	}
}

void func_586(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	vector3 vVar9;

	iVar0 = func_707(iParam0, uParam1);
	iVar1 = func_575(iParam0, uParam1);
	bVar3 = func_587(iParam0, &iVar2);
	switch (func_877(iParam0, uParam1))
	{
		case 38:
			if (func_564(iVar0, -1098463898) || PED::IS_PED_ON_MOUNT(iVar0))
			{
				return;
			}
			if (func_913(iParam0) != 0)
			{
				return;
			}
			if (func_271(iParam0, 1))
			{
				if ((!bVar3 || PED::IS_PED_IN_VEHICLE(iVar0, iVar2, false)) || PED::_0x1D46B417F926D34D(iVar0))
				{
					return;
				}
				func_909(iVar1, iVar2, func_684(&Local_2027, iParam0), 1073741824 /* Float: 2f */, -1, 1);
				return;
			}
			func_915(iVar1, Local_2027.f_45[iParam0 /*6*/].f_2, func_683(&Local_2027, iParam0));
			break;
		case 39:
			if (func_564(iVar0, -1098463898))
			{
				return;
			}
			if (func_933(iVar0) && !func_271(iParam0, 32768))
			{
				func_895(iVar0);
				return;
			}
			func_914(iVar1, func_913(iParam0), Local_2027.f_45[iParam0 /*6*/].f_2, func_683(&Local_2027, iParam0));
			break;
		case 40:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			if (!func_888(iParam0, 9, &Local_362, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_923(iVar0, joaat("STATIONARY_ESCORT")))
				{
					func_889(iParam0, iVar0, 9, &Local_362, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
					func_917(iVar1);
				}
				else
				{
					func_924(iParam0, 9, &(Local_362[Local_2027.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_935(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 41:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			func_917(iVar1);
			if (!func_888(iParam0, 6, &Local_362, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_923(iVar0, joaat("STATIONARY_ESCORT")))
				{
					func_889(iParam0, iVar0, 6, &Local_362, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
				}
				else
				{
					func_924(iParam0, 6, &(Local_362[Local_2027.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_921(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 42:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			if (!func_564(iVar0, 1630799643))
			{
				iVar6 = PLAYER::GET_PLAYER_PED(Local_15.f_16[iParam0 /*12*/].f_7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar6) || func_936(iVar0, &iVar6, &uVar7, 1103626240 /* Float: 25f */))
				{
					if (func_933(iVar0))
					{
						func_937(iVar1, iVar6);
					}
					else
					{
						func_934(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), 1);
					}
				}
				else
				{
					func_934(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), 1);
				}
			}
			if (!func_888(iParam0, 11, &Local_362, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_923(iVar0, joaat("STATIONARY_ESCORT")))
				{
					func_889(iParam0, iVar0, 11, &Local_362, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
				}
				else
				{
					func_924(iParam0, 11, &(Local_362[Local_2027.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_921(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar5))
			{
				return;
			}
			iVar8 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar5);
			if (func_123(iVar8, 1, 1))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (Local_362[iVar8 /*52*/].f_47 > 44000 && !func_888(iParam0, 0, &Local_362, 0))
				{
					if (!func_923(iVar0, joaat("STATIONARY_ESCORT")))
					{
						func_889(iParam0, iVar0, 0, &Local_362, iVar4, 0, 0, 0);
					}
				}
				else if (Local_362[iVar8 /*52*/].f_47 > 35000 && !func_888(iParam0, 1, &Local_362, 0))
				{
					if (func_923(iVar0, joaat("STATIONARY_ESCORT")))
					{
						func_924(iParam0, 1, &(Local_362[Local_2027.f_634 /*52*/]));
					}
					else
					{
						func_889(iParam0, iVar0, 1, &Local_362, iVar4, 0, 0, 0);
					}
				}
			}
			break;
		case 37:
			func_889(iParam0, iVar0, 0, &Local_362, 0, 0, 1, 1);
			func_912(iVar1, 0, 0);
			break;
		case 43:
			if (bVar3)
			{
				vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			}
			else
			{
				vVar9 = { Local_2027.f_45[iParam0 /*6*/].f_2 };
			}
			func_908(iVar1, vVar9, 100f, 16777216, 3);
			break;
	}
}

bool func_587(int iParam0, int iParam1)
{
	if (Local_15.f_16[iParam0 /*12*/].f_11 < 0 || Local_15.f_16[iParam0 /*12*/].f_11 >= 3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_3[Local_15.f_16[iParam0 /*12*/].f_11 /*4*/]))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_VEH(Local_15.f_3[Local_15.f_16[iParam0 /*12*/].f_11 /*4*/]);
	return true;
}

bool func_588(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

Vector3 func_589(vector3 vParam0, float fParam3, vector3 vParam4)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;

	fVar5 = fParam3;
	while (fVar5 > 360f)
	{
		fVar5 = (fVar5 - 360f);
	}
	while (fVar5 < 360f)
	{
		fVar5 = (fVar5 + 360f);
	}
	fVar0 = vParam4.x;
	fVar1 = vParam4.y;
	func_948(&fVar0, &fVar1, fVar5);
	vVar2 = { (fVar0 + vParam0.x), (fVar1 + vParam0.y), (vParam0.z + vParam4.z) };
	return vVar2;
}

char* func_590()
{
	return "intimidated_on_feet_tough_guy";
}

void func_591(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::_0xCDB682BB47C02F0A(iParam0, joaat("NULL_OVERRIDE_CARRIABLE_PROMPT_TABLE"));
	}
}

void func_592(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (Local_2027.f_10 != joaat("COACH_HOLDUP_ROBBERY"))
	{
		return;
	}
	if (func_202(iParam0, &Local_15, 2) || func_202(iParam0, &Local_15, 16))
	{
		func_949(iParam0);
		func_950(iParam0);
		func_951(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iParam0 /*5*/]))
	{
		func_949(iParam0);
		func_950(iParam0);
		func_951(iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(Local_15.f_257[iParam0 /*5*/]);
	iVar3 = func_866(iVar0, &iVar1, &iVar2);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && !func_952(iParam0, 255))
	{
		if ((((iVar3 != 1 || ENTITY::IS_ENTITY_DEAD(iVar1)) || !NETWORK::_0xB07D3185E11657A5(iVar1)) || !PED::IS_PED_IN_ANY_VEHICLE(iVar1, true)) || !func_114(PED::GET_VEHICLE_PED_IS_IN(iVar1, true), &Local_15, &uVar4))
		{
			func_953(iParam0);
		}
	}
	if (Local_15.f_257[iParam0 /*5*/].f_3 == PLAYER::PLAYER_ID())
	{
		if ((func_202(iParam0, &Local_15, 256) && func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32)) || (func_202(iParam0, &Local_15, 512) && func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64)))
		{
			iVar2 = PLAYER::PLAYER_ID();
		}
	}
	if (iVar2 != PLAYER::PLAYER_ID())
	{
		func_949(iParam0);
		func_950(iParam0);
		func_951(iParam0);
		return;
	}
	func_954(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_34) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, Global_34))
	{
		func_955(iParam0);
	}
	else
	{
		func_950(iParam0);
	}
	if ((func_33(1) && !func_956(iParam0, 255)) && func_867(&Local_2027, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64)))
	{
		func_957(iParam0);
	}
	else
	{
		func_951(iParam0);
	}
}

bool func_593(int iParam0, bool bParam1)
{
	if (func_80(iParam0, 16))
	{
		if (bParam1)
		{
			return false;
		}
		return func_80(iParam0, 32);
	}
	if (bParam1)
	{
		return false;
	}
	if (!func_33(1))
	{
		if (!func_55(&Local_15, 268435456) || func_351(PLAYER::PLAYER_ID(), 1, 1))
		{
			return false;
		}
	}
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8388608) && !func_956(iParam0, 255))
	{
		return false;
	}
	return true;
}

bool func_594(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_958(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_595(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, var uParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				if (func_959(uParam0, bParam1, bParam2, bParam3, fParam4, uParam5, iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	return false;
}

bool func_596(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]) && BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], false, false)) < fParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_597(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_384(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			break;
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((80f - 40f) / 2f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(25f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(40f, 50f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 8f);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(40f, 100f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_960(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_960(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_961(vParam2, 1);
				iVar1 = func_962(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_960(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_960(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_960(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(80f, 150f, 17.5f, iParam1));
				}
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_960(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_960(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_598(var uParam0, int iParam1, vector3 vParam2)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 53:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 51:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			break;
		case 46:
		case 47:
		case 48:
			if (func_961(vParam2, 1) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 52:
			break;
	}
}

Vector3 func_599(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_600(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_963(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_964())
	{
		return func_963(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_963(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

Vector3 func_601(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

void func_602(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_603(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_604(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_605(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_606(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("MP_GFH_GLOBAL_START");
		case 2:
			return joaat("MP_GFH_ENEMIES");
		case 4:
			return joaat("MP_GFH_DELIVERING");
		case 8:
			return joaat("MP_GFH_END");
		case 16:
			return joaat("MP_GFH_FAIL");
		default:
			break;
	}
	return 0;
}

bool func_607(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1071686.f_22971.f_1 || Global_1071686.f_22971.f_1 == 0) || iParam1 > Global_1071686.f_22971) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::_COPY_MEMORY(&(Global_1071686.f_22971), &uVar1, 2);
		}
		else
		{
			Global_1071686.f_22971.f_1 = iVar0;
			Global_1071686.f_22971 = iParam1;
		}
		if (AUDIO::_0x05D6195FB4D428F4(iParam0))
		{
		}
		return true;
	}
	return false;
}

void func_608(int iParam0)
{
	func_122(&(Local_2027.f_9), iParam0);
}

int func_609(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2027.f_540), iVar1))
		{
			if (!bParam0 || MISC::_0x8F4F050054005C27(&(Local_2027.f_540.f_4), iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_610(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2027.f_540.f_2), iVar1))
		{
			if (!bParam0 || MISC::_0x8F4F050054005C27(&(Local_2027.f_540.f_6), iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_611()
{
	return Local_15.f_299.f_1;
}

void func_612(int iParam0)
{
	Local_362[Local_2027.f_634 /*52*/].f_41 = iParam0;
}

void func_613(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1071686.f_7 = 1;
	if ((Global_1296859.f_21 - Global_1071686.f_9) > 2)
	{
		if (bParam2)
		{
			func_965(20f);
		}
	}
	Global_1071686.f_9 = Global_1296859.f_21;
	if (bParam0)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_484())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::_0x634F4A0562CF19B8();
	func_966(250);
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

bool func_614(int iParam0)
{
	return func_113(Local_15.f_299.f_5, iParam0);
}

void func_615(int iParam0)
{
	if (func_257(2, 255))
	{
		return;
	}
	Local_2027.f_537 = func_499(iParam0);
	if (func_967(iParam0))
	{
		func_261(1);
		NETWORK::_0x007FF852DCF49DA4(func_502());
	}
	func_261(2);
}

void func_616(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_257(4, 255))
	{
		return;
	}
	if (func_257(1, 255))
	{
		if (!func_968())
		{
			return;
		}
	}
	if (!func_614(2))
	{
		return;
	}
	if (func_257(1, 255))
	{
		bVar0 = func_969();
		bVar1 = func_970(iParam0);
		func_261(16);
		if (!func_750(16, 1))
		{
			return;
		}
		else if (!bVar1)
		{
			return;
		}
		else if (!bVar0)
		{
			return;
		}
		else if (CAM::_0xA2B1C7EF759A63CE() < 1f)
		{
			return;
		}
		func_971(iParam0);
		func_972();
	}
	func_261(4);
}

void func_617()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if (!func_257(1024, 255))
	{
		return;
	}
	func_261(2048);
	sVar0 = func_226();
	sVar1 = func_973();
	sVar2 = func_974(Local_2027.f_537.f_2);
	CAM::_0x02389579A53C3276(sVar0, sVar1, sVar2, -1);
}

bool func_618(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (((func_292(&Local_2027, &Var0) && func_312(&Var0, 556233122, iParam0, 0)) && func_312(&Var0, -110495140, iParam1, 0)) && func_177(Var0, 408107890, &uVar5, 0))
	{
		return uVar5;
	}
	return false;
}

void func_619(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if ((!func_292(&Local_2027, &Var0) || !func_312(&Var0, 556233122, iParam0, 0)) || !func_312(&Var0, -110495140, iParam1, 0))
	{
		return;
	}
	iVar5 = func_500(iParam0, iParam1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_362[Local_2027.f_634 /*52*/].f_41.f_2), iVar6))
		{
		}
		else if (!func_975(Var0, iVar6))
		{
		}
		else
		{
			MISC::_0xE84AAC1B22A73E99(&(Local_362[Local_2027.f_634 /*52*/].f_41.f_2), iVar6);
		}
		iVar6++;
	}
}

void func_620()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if (!func_257(2048, 255))
	{
		return;
	}
	func_498(2048);
	sVar0 = func_226();
	sVar1 = func_973();
	sVar2 = func_974(Local_2027.f_537.f_2);
	CAM::_0x6D4D25C2137FF511(sVar0, sVar1, sVar2);
}

void func_621(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;

	func_976(iParam0, iParam1);
	if (func_257(1024, 255))
	{
		return;
	}
	if (((!func_292(&Local_2027, &Var0) || !func_312(&Var0, 556233122, iParam0, 0)) || !func_312(&Var0, -110495140, iParam1, 0)) || !func_312(&Var0, -556151360, 0, 0))
	{
		return;
	}
	fVar17 = CAM::GET_GAMEPLAY_CAM_FOV();
	func_313(Var0, 644136394, &vVar5, 0);
	func_177(Var0, 1013307464, &bVar18, 0);
	bVar19 = func_313(Var0, -2119193689, &vVar8, 0);
	bVar20 = func_310(Var0, -542873544, &fVar17, 0);
	iVar21 = PLAYER::PLAYER_PED_ID();
	if (bVar18 && ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		vVar5 = { func_977(vVar5, CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING()) };
		vVar5 = { vVar5 + CAM::GET_GAMEPLAY_CAM_COORD() };
		vVar8 = { vVar8 + CAM::GET_GAMEPLAY_CAM_ROT(2) };
		bVar19 = true;
	}
	if (!CAM::DOES_CAM_EXIST(Local_2027.f_559))
	{
		if (func_384(vVar5))
		{
			return;
		}
		Local_2027.f_559 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar5, vVar8, fVar17, false, 2);
	}
	else
	{
		if (!func_384(vVar5))
		{
			CAM::SET_CAM_COORD(Local_2027.f_559, vVar5);
		}
		if (bVar19)
		{
			CAM::SET_CAM_ROT(Local_2027.f_559, vVar8, 2);
		}
		if (bVar20)
		{
			CAM::SET_CAM_FOV(Local_2027.f_559, fVar17);
		}
	}
	if (func_177(Var0, 1234220482, &bVar22, 0) && bVar22)
	{
		return;
	}
	bVar23 = func_313(Var0, -1852046395, &vVar11, 0);
	bVar24 = func_313(Var0, -600916972, &vVar14, 0);
	if (bVar18 && ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		vVar11 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), (ENTITY::GET_ENTITY_HEADING(iVar21) + CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING()), vVar11) };
		vVar14 = { vVar14 + CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (!bVar23 || func_384(vVar11))
	{
		vVar11 = { vVar5 };
	}
	if (!bVar24)
	{
		vVar14 = { vVar8 };
	}
	if (!CAM::DOES_CAM_EXIST(Local_2027.f_560))
	{
		Local_2027.f_560 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar11, vVar14, fVar17, false, 2);
		return;
	}
	else
	{
		CAM::SET_CAM_COORD(Local_2027.f_560, vVar11);
		CAM::SET_CAM_ROT(Local_2027.f_560, vVar14, 2);
		if (bVar20)
		{
			CAM::SET_CAM_FOV(Local_2027.f_560, fVar17);
		}
	}
}

void func_622(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<5> Var3;
	var uVar8;
	var uVar11;

	if (func_257(1024, 255))
	{
		func_617();
		return;
	}
	iVar2 = 2000;
	if (((func_292(&Local_2027, &Var3) && func_312(&Var3, 556233122, iParam0, 0)) && func_312(&Var3, -110495140, iParam1, 0)) && func_312(&Var3, -556151360, 0, 0))
	{
		func_299(Var3, -1318702711, &iVar2, 0);
		if (func_177(Var3, 1234220482, &bVar0, 0) && bVar0)
		{
			CAM::SET_CAM_ACTIVE(Local_2027.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, false, 0);
		}
		else if (func_177(Var3, -19593823, &bVar1, 0) && bVar1)
		{
			CAM::SET_CAM_ACTIVE(Local_2027.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, true, iVar2, true, false, 0);
		}
		else if (func_313(Var3, -1852046395, &uVar8, 0) || func_313(Var3, -1852046395, &uVar11, 0))
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_2027.f_560, Local_2027.f_559, iVar2, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(Local_2027.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		func_126(8);
	}
}

void func_623()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if ((((ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_RAGDOLL(Global_34)) || PED::IS_PED_INJURED(Global_34)) || PED::_0x3BDFCF25B58B0415(Global_34)) || PED::_IS_PED_HOGTIED(Global_34))
	{
		return;
	}
	if (Local_15.f_328 != -1)
	{
		if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
		{
			if (func_440(Local_15.f_328, &iVar3, 0, 0))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
			}
		}
		else if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
		{
			if (func_81(Local_15.f_328, &iVar4))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
		}
	}
	iVar5 = 0;
	while (iVar5 < 20)
	{
		if (Local_15.f_16[iVar5 /*12*/].f_2 != joaat("DROPOFF_GUARD") || Local_15.f_16[iVar5 /*12*/].f_3 != 33)
		{
		}
		else if (func_440(iVar5, &iVar6, 1, 0))
		{
		}
		else
		{
			iVar5++;
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar7);
	if (!func_384(vVar0))
	{
		if (PED::IS_PED_ON_MOUNT(Global_34))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		}
		if (BUILTIN::VDIST(Global_35, vVar0) < 2.5f)
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vVar0, 6, 1, 2.5f, -1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar6, 0, -1f, -1f, -1f);
	}
	else if (!func_384(vVar0))
	{
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, 0);
	}
	func_944(Global_34, &iVar7, 0, 0, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		func_921(&Global_34, 6000, iVar6, 1, 0, 0, 0, 1);
	}
}

void func_624()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_362[Local_2027.f_634 /*52*/].f_41.f_2[iVar0] = 0;
		iVar0++;
	}
}

int func_625(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if ((((func_292(&Local_2027, &Var1) && func_312(&Var1, 556233122, iParam0, 0)) && func_312(&Var1, -110495140, iParam1, 0)) && func_312(&Var1, -556151360, 0, 0)) && func_299(Var1, -1318702711, &uVar0, 0))
	{
		return uVar0;
	}
	return 2000;
}

void func_626(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (func_257(1024, 255))
	{
		func_617();
	}
	if (((!func_292(&Local_2027, &Var0) || !func_312(&Var0, 556233122, iParam0, 0)) || !func_312(&Var0, -110495140, iParam1, 0)) || !func_312(&Var0, -556151360, 0, 0))
	{
		return;
	}
	func_176(Var0, -1355034, &uVar5, 0);
	iVar6 = uVar5;
	if (!func_299(Var0, -1476590111, &iVar7, 0))
	{
		iVar7 = 1000;
	}
	if (!func_257(1024, 255))
	{
		if ((func_33(8) && func_177(Var0, 1234220482, &bVar8, 0)) && bVar8)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, iParam2, true, false, 0);
			func_213(8);
		}
	}
	switch (iVar6)
	{
		case joaat("FADE_IN"):
			func_88(0, iVar7);
			break;
		case joaat("FADE_OUT"):
			if (iParam3 < func_978((iParam2 - iVar7 + 150), 0))
			{
				return;
			}
			func_88(1, iVar7);
			break;
	}
}

void func_627(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;

	if ((!func_292(&Local_2027, &Var0) || !func_312(&Var0, 556233122, iParam0, 0)) || !func_312(&Var0, -110495140, iParam1, 0))
	{
		return;
	}
	if (func_177(Var0, -333727878, &uVar5, 0))
	{
		func_979(iParam0);
	}
	iVar6 = func_500(iParam0, iParam1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_362[Local_2027.f_634 /*52*/].f_41.f_2), iVar7))
		{
		}
		else if (!func_980(Var0, iVar7))
		{
		}
		else
		{
			MISC::_0xE84AAC1B22A73E99(&(Local_362[Local_2027.f_634 /*52*/].f_41.f_2), iVar7);
		}
		iVar7++;
	}
}

struct<2> func_628()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_981(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_981(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

void func_629(int iParam0, var uParam1, var uParam2, float fParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	if (!func_982(iParam0, uParam1, uParam2, fParam3, &bVar0, &bVar1, &bVar2))
	{
		func_239(iParam0);
		return;
	}
	iVar3 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	bVar4 = MAP::DOES_BLIP_EXIST(Local_2027.f_202[iParam0]);
	if (bVar0 && !bVar4)
	{
		return;
	}
	func_983(iParam0, uParam1, uParam2, fParam3);
	if (!bVar4)
	{
		return;
	}
	iVar6 = PLAYER::PLAYER_ID();
	switch (Local_15.f_16[iParam0 /*12*/].f_2)
	{
		case joaat("CHASER"):
		case joaat("DROPOFF_GUARD"):
			func_984(iParam0, bVar0);
			break;
		case joaat("PASSENGER_VIP"):
			func_985(iParam0, bVar2);
			func_986(iParam0, !func_33(1));
			iVar5 = 255;
			if (func_271(iParam0, 1024))
			{
				func_987(iParam0);
			}
			else if (func_988(iParam0, 255))
			{
				func_989(iParam0);
				iVar5 = iVar6;
				bVar7 = false;
			}
			else if (func_990(Local_15.f_16[iParam0 /*12*/].f_7, iVar3, &bVar7, &iVar5) && iVar5 != iVar6)
			{
				func_989(iParam0);
			}
			else if (bVar7)
			{
				func_987(iParam0);
			}
			else
			{
				func_991(iParam0);
			}
			if (iVar5 == iVar6)
			{
				iVar5 = 255;
			}
			func_992(iParam0, iVar5);
			break;
		default:
			func_993(iParam0, bVar1, func_33(1));
			func_994(iParam0, func_33(1));
			break;
	}
}

void func_630(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (!func_995(iParam0, uParam1, uParam2, fParam3))
	{
		func_240(iParam0);
		return;
	}
	func_996(iParam0, uParam1, uParam2, fParam3);
	if (!MAP::DOES_BLIP_EXIST(fParam3->f_202.f_21[iParam0]))
	{
		return;
	}
	MAP::_BLIP_SET_MODIFIER(fParam3->f_202.f_21[iParam0], -521680853);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(fParam3->f_202.f_21[iParam0], func_997());
}

void func_631(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (!func_998(iParam0, uParam1, uParam2, fParam3))
	{
		func_241(iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(uParam1->f_257[iParam0 /*5*/]);
	func_999(iParam0, iVar0);
	if (!MAP::DOES_BLIP_EXIST(fParam3->f_202.f_25[iParam0]))
	{
		return;
	}
	bVar1 = func_33(1);
	if (bVar1 && func_80(iParam0, 8))
	{
		func_453(iParam0, 8);
		MAP::SET_BLIP_SPRITE(Local_2027.f_202.f_25[iParam0], joaat("BLIP_CASH_BAG"), false);
	}
	else if (!bVar1 && !func_80(iParam0, 8))
	{
		func_273(iParam0, 8);
		MAP::SET_BLIP_SPRITE(Local_2027.f_202.f_25[iParam0], func_1000(2), false);
	}
	iVar4 = PLAYER::PLAYER_ID();
	if (func_80(iParam0, 8))
	{
		func_1001(iParam0);
	}
	else if (func_1002(iParam0, 255))
	{
		func_1003(iParam0);
		iVar3 = iVar4;
		bVar2 = false;
	}
	else if (func_990(Local_15.f_257[iParam0 /*5*/].f_3, iVar0, &bVar2, &iVar3) && iVar3 != iVar4)
	{
		func_1003(iParam0);
	}
	else if (bVar2)
	{
		func_1001(iParam0);
	}
	else
	{
		func_1004(iParam0);
	}
	if (iVar3 == iVar4)
	{
		iVar3 = 255;
	}
	func_1005(iParam0, iVar3);
}

bool func_632(var uParam0, var uParam1, float fParam2)
{
	if (!func_534())
	{
		return false;
	}
	if (!func_41(uParam1[Local_2027.f_634 /*52*/], 32) && !func_41(uParam1[Local_2027.f_634 /*52*/], 64))
	{
		return false;
	}
	switch (fParam2->f_202.f_60)
	{
		case 14:
		case 15:
		case 22:
		case 23:
		case 24:
		case 25:
		case 29:
		case 30:
		case 31:
			break;
		default:
			return false;
	}
	return true;
}

void func_633(var uParam0, float fParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_41(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/], 64);
	if (bVar0)
	{
		iVar1 = fParam1->f_620;
	}
	else
	{
		iVar1 = fParam1->f_619;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar1))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(fParam1->f_202.f_51))
	{
		return;
	}
	fParam1->f_202.f_51 = MAP::_0xA6EF0C54A3443E70(408396114, iVar1);
	MAP::_BLIP_SET_MODIFIER(fParam1->f_202.f_51, -1878373110);
	MAP::_BLIP_SET_MODIFIER(fParam1->f_202.f_51, 231194138);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(fParam1->f_202.f_51, func_1006());
}

void func_634(bool bParam0)
{
	int iVar0;
	int iVar1;

	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar1 = 20;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202[iVar0]))
				{
				}
				else if (bParam0)
				{
					MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iVar0], 231194138);
				}
				else
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iVar0], 231194138);
				}
				iVar0++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar1 = 4;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202.f_25[iVar0]))
				{
				}
				else if (bParam0)
				{
					MAP::_BLIP_SET_MODIFIER(Local_2027.f_202.f_25[iVar0], 231194138);
				}
				else
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202.f_25[iVar0], 231194138);
				}
				iVar0++;
			}
			break;
	}
}

bool func_635(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_33(1) && !func_536(1))
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	if (func_529(iVar2))
	{
		if (func_335(iVar2))
		{
			return true;
		}
		iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3) && AITRANSPORT::_0xDC44F405A6B98D03(iVar3, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_636(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_33(1))
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	if (func_33(1) && !GANG::_0x3F59FE6F37869576(iVar0, PLAYER::PLAYER_ID()))
	{
		if (func_41(&(Local_362[iVar2 /*52*/]), 64) || func_41(&(Local_362[iVar2 /*52*/]), 32))
		{
			return true;
		}
	}
	return false;
}

int func_637(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_456(Local_2027.f_202.f_59);
	bVar1 = func_1007();
	iVar2 = func_251();
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (iVar4 == 0)
		{
		}
		else if (func_1008(iVar4, iVar2, bVar1, bVar0, iParam0, iParam1))
		{
			return iVar4;
		}
		iVar3++;
	}
	return 0;
}

void func_638(int iParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;

	if (iParam0 == 0)
	{
		return;
	}
	func_243(&(Local_2027.f_202.f_58));
	bVar0 = func_1009(iParam0);
	bVar1 = func_1010(iParam0);
	iVar2 = func_1011(iParam0);
	sVar3 = func_1012(iParam0, iParam1, sParam2);
	Local_2027.f_202.f_58 = sParam2;
	if (bVar1)
	{
		func_1013(Local_2027.f_561.f_54, sParam2);
	}
	else
	{
		func_1014(sVar3, iVar2, bVar0);
	}
	if (func_1015(iParam0, &iVar4))
	{
		func_132(iVar4);
	}
}

int func_639(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	bVar0 = func_41(uParam1[Local_2027.f_634 /*52*/], 64);
	if (!func_41(uParam1[Local_2027.f_634 /*52*/], 32) && !bVar0)
	{
		return 0;
	}
	if (!func_33(2))
	{
		return 0;
	}
	if (func_365(255) > 0)
	{
		return 0;
	}
	if (func_227(2))
	{
		return 0;
	}
	if ((func_55(uParam0, 1024) || func_55(uParam0, 16384)) || func_200(uParam0, bParam2))
	{
		return 0;
	}
	switch (func_405(uParam0))
	{
		case 1:
			if (!func_41(uParam1[Local_2027.f_634 /*52*/], 8))
			{
				return 1;
			}
			if (func_33(256))
			{
				return 6;
			}
			return 3;
		case 2:
			if (func_33(256))
			{
				return 6;
			}
			return 5;
		case 3:
			if (!func_1016(uParam0, bParam2, joaat("PASSENGER_VIP")))
			{
				return 8;
			}
			return 18;
		case 4:
			if (func_891(0))
			{
				if (func_867(&Local_2027, Global_35, bVar0))
				{
					return 29;
				}
				return 14;
			}
			if (!func_1017(uParam0, joaat("PASSENGER_VIP"), 65536, 131072))
			{
				return 0;
			}
			if (func_1018(&bVar1))
			{
				return 27;
			}
			else if (bVar1)
			{
				return 24;
			}
			if (func_1017(uParam0, joaat("PASSENGER_VIP"), 4, 524288))
			{
				if (!func_1016(uParam0, bParam2, joaat("PASSENGER_VIP")))
				{
					return 8;
				}
				return 10;
			}
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Local_15.f_16[iVar2 /*12*/].f_2 != joaat("PASSENGER_VIP"))
				{
				}
				else if ((func_201(iVar2, &Local_15, 32) || func_201(iVar2, &Local_15, 65536)) || func_201(iVar2, &Local_15, 131072))
				{
				}
				else
				{
					bVar5 = true;
					if (func_440(iVar2, &iVar3, 1, 1) && ENTITY::_0x61914209C36EFDDB(iVar3) == 7)
					{
						iVar4 = PED::_GET_CARRIER_AS_MOUNT(iVar3);
						if (ENTITY::DOES_ENTITY_EXIST(iVar4) && iVar4 == PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID()))
						{
							return 9;
						}
					}
				}
				iVar2++;
			}
			if (bVar5)
			{
				return 12;
			}
			break;
		case 5:
			if (func_561())
			{
				if (func_867(&Local_2027, Global_35, bVar0))
				{
					if (func_563(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					return 31;
				}
				return 22;
			}
			if (func_1019())
			{
				return 0;
			}
			if (func_1020(&bVar1))
			{
				return 27;
			}
			else if (bVar1)
			{
				return 24;
			}
			if (bVar0)
			{
				if (func_418(uParam0, 32, 0))
				{
					return 24;
				}
			}
			else if (func_418(uParam0, 1, 0))
			{
				return 24;
			}
			if (func_417(uParam0, 64, 0))
			{
				return 18;
			}
			return 17;
	}
	return 0;
}

bool func_640(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (func_199(bParam1))
		{
			case joaat("COACH_HOLDUP_KIDNAP"):
				return true;
			case joaat("COACH_HOLDUP_ROBBERY"):
				return true;
			default:
				break;
		}
	}
	else if (bParam2)
	{
		switch (func_199(bParam1))
		{
			case joaat("COACH_HOLDUP_KIDNAP"):
				return uParam0->f_321 < 2;
			case joaat("COACH_HOLDUP_ROBBERY"):
				return uParam0->f_322 < 2;
			default:
				break;
		}
	}
	else
	{
		switch (func_199(bParam1))
		{
			case joaat("COACH_HOLDUP_KIDNAP"):
				return Local_2027.f_10.f_13 < 2;
			case joaat("COACH_HOLDUP_ROBBERY"):
				return Local_2027.f_10.f_14 < 2;
			default:
				break;
		}
	}
	return true;
}

bool func_641()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Local_15.f_16[iVar2 /*12*/].f_11 == -1)
				{
				}
				else if (bVar1 && iVar0 == Local_15.f_16[iVar2 /*12*/].f_11)
				{
				}
				else if (!func_201(iVar2, &Local_15, 1024))
				{
				}
				else if (!bVar1)
				{
					bVar1 = true;
					iVar0 = Local_15.f_16[iVar2 /*12*/].f_11;
				}
				else
				{
					return true;
				}
				iVar2++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (Local_15.f_257[iVar3 /*5*/].f_2 == -1)
				{
				}
				else if (bVar1 && iVar0 == Local_15.f_257[iVar3 /*5*/].f_2)
				{
				}
				else if (!func_202(iVar3, &Local_15, 8))
				{
				}
				else if (!bVar1)
				{
					bVar1 = true;
					iVar0 = Local_15.f_257[iVar3 /*5*/].f_2;
				}
				else
				{
					return true;
				}
				iVar3++;
			}
			break;
	}
	return false;
}

void func_642(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar3 = PLAYER::PLAYER_ID();
	*iParam2 = 255;
	*iParam3 = 0;
	*bParam0 = 0;
	*bParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_15.f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
		{
		}
		else if (Local_15.f_16[iVar0 /*12*/].f_7 == 255)
		{
		}
		else if ((func_201(iVar0, &Local_15, 32) || func_201(iVar0, &Local_15, 65536)) || func_201(iVar0, &Local_15, 131072))
		{
		}
		else if (!func_1021(Local_15.f_16[iVar0 /*12*/].f_7, &uVar1))
		{
		}
		else if (GANG::_0x3F59FE6F37869576(Local_15.f_16[iVar0 /*12*/].f_7, iVar3))
		{
		}
		else
		{
			if (iVar2 == 0)
			{
				*iParam2 = Local_15.f_16[iVar0 /*12*/].f_7;
				*iParam3 = GANG::_0x901E0DC25080C8B9(*iParam2);
			}
			else if (GANG::_0x901E0DC25080C8B9(Local_15.f_16[iVar0 /*12*/].f_7) != *iParam3)
			{
				*bParam1 = 1;
				return;
			}
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		if ((!GANG::_0xD6F6ACF4392187FB(*iParam3) || !GANG::_0x0F99F6436528A089(*iParam3)) || GANG::_0x149A2751AB66AC02(*iParam3) == 1)
		{
			*bParam0 = 1;
		}
	}
}

void func_643(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar3 = PLAYER::PLAYER_ID();
	*iParam2 = 255;
	*iParam3 = 0;
	*bParam0 = 0;
	*bParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((((!func_202(iVar0, &Local_15, 128) || func_202(iVar0, &Local_15, 2)) || func_202(iVar0, &Local_15, 16)) || func_202(iVar0, &Local_15, 256)) || func_202(iVar0, &Local_15, 512))
		{
		}
		else if (Local_15.f_257[iVar0 /*5*/].f_3 == 255)
		{
		}
		else if (!func_1021(Local_15.f_257[iVar0 /*5*/].f_3, &uVar1))
		{
		}
		else if (GANG::_0x3F59FE6F37869576(Local_15.f_257[iVar0 /*5*/].f_3, iVar3))
		{
		}
		else
		{
			if (iVar2 == 0)
			{
				*iParam2 = Local_15.f_257[iVar0 /*5*/].f_3;
				*iParam3 = GANG::_0x901E0DC25080C8B9(*iParam2);
			}
			else if (GANG::_0x901E0DC25080C8B9(Local_15.f_257[iVar0 /*5*/].f_3) != *iParam3)
			{
				*bParam1 = 1;
				return;
			}
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		if ((!GANG::_0xD6F6ACF4392187FB(*iParam3) || !GANG::_0x0F99F6436528A089(*iParam3)) || GANG::_0x149A2751AB66AC02(*iParam3) == 1)
		{
			*bParam0 = 1;
		}
	}
}

int func_644(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam0 != Local_2027.f_202.f_60)
	{
		return 0;
	}
	if ((bParam1 && func_227(2097152)) && Local_2027.f_202.f_53 == iParam2)
	{
		return 0;
	}
	if ((!bParam1 && func_227(4194304)) && Local_2027.f_202.f_54 == iParam3)
	{
		return 0;
	}
	if (((!func_227(2097152) && !func_227(4194304)) && iParam2 == 255) && iParam3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_645(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;

	if (iParam0 == 0)
	{
		func_245(fParam1);
		return;
	}
	if (((func_246(fParam1->f_202.f_56) && func_456(fParam1->f_202.f_56)) && fParam1->f_202.f_60 == iParam0) && !bParam2)
	{
		return;
	}
	iVar0 = 255;
	iVar1 = 0;
	switch (iParam0)
	{
		case 8:
			sVar3 = func_1022(0);
			break;
		case 9:
			sVar3 = func_1022(1);
			break;
		case 1:
			sVar3 = func_1023(1);
			break;
		case 2:
			sVar3 = func_1023(0);
			break;
		case 3:
			sVar3 = func_1024(1);
			break;
		case 4:
			sVar3 = func_1024(0);
			break;
		case 5:
			sVar3 = func_1025(1);
			break;
		case 7:
			sVar3 = func_1026();
			break;
		case 10:
			sVar3 = func_1027(0);
			break;
		case 11:
			sVar3 = func_1027(1);
			break;
		case 12:
			sVar3 = func_1028(0, 0);
			break;
		case 13:
			sVar3 = func_1028(1, 0);
			break;
		case 16:
			sVar3 = func_1029(0);
			break;
		case 17:
			sVar3 = func_1029(1);
			break;
		case 20:
			sVar3 = func_1030(0, 0);
			break;
		case 21:
			sVar3 = func_1030(1, 0);
			break;
		case 26:
			sVar3 = func_1031(fParam1, 1, &iVar0, &iVar1, &bVar2);
			break;
		case 27:
			sVar3 = func_1031(fParam1, 0, &iVar0, &iVar1, &bVar2);
			break;
		case 28:
			sVar3 = func_1032();
			break;
		case 25:
			sVar3 = func_1033(fParam1, 1);
			break;
		case 24:
			sVar3 = func_1033(fParam1, 0);
			break;
		case 22:
			sVar3 = func_1030(0, 1);
			break;
		case 23:
			sVar3 = func_1030(1, 1);
			break;
		case 15:
			sVar3 = func_1028(1, 1);
			break;
		case 14:
			sVar3 = func_1028(1, 1);
			break;
		case 18:
			sVar3 = func_1034(1);
			break;
		case 19:
			sVar3 = func_1034(0);
			break;
		case 29:
			sVar3 = func_1035();
			break;
		case 30:
			sVar3 = func_1036(1);
			break;
		case 31:
			sVar3 = func_1036(0);
			break;
		case 6:
			sVar3 = func_1025(1);
			break;
		default:
			return;
	}
	if (iVar0 != 255 && bVar2)
	{
		func_132(2097152);
		func_228(4194304);
		Local_2027.f_202.f_53 = iVar0;
		Local_2027.f_202.f_54 = 0;
	}
	else if (iVar1 != 0 && !bVar2)
	{
		func_132(4194304);
		func_228(2097152);
		Local_2027.f_202.f_53 = 255;
		Local_2027.f_202.f_54 = iVar1;
	}
	else
	{
		func_228(2097152);
		func_228(4194304);
	}
	fParam1->f_202.f_56 = func_1037(sVar3, -1, 0, 0, 1);
	fParam1->f_202.f_60 = iParam0;
}

bool func_646()
{
	if (!func_534())
	{
		return false;
	}
	if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32))
	{
		return false;
	}
	if (func_227(4))
	{
		return false;
	}
	if (!func_33(2))
	{
		return false;
	}
	if (CAM::_0xA2B1C7EF759A63CE() > 0f && !CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	return true;
}

void func_647()
{
	bool bVar0;

	bVar0 = func_640(&Local_15, &Local_2027, 0, 0);
	Local_2027.f_202.f_57 = func_1040(func_1038(), func_1039(bVar0));
}

bool func_648()
{
	if (func_227(2))
	{
		return false;
	}
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8388608))
	{
		return true;
	}
	if (!func_33(1))
	{
		return false;
	}
	if (!func_227(4))
	{
		return false;
	}
	if (!func_55(&Local_15, 524288) && !func_33(134217728))
	{
		return false;
	}
	if (func_364())
	{
		return false;
	}
	if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 2097152))
	{
		return false;
	}
	return true;
}

void func_649()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	func_208(&iVar0, &iVar1);
	bVar2 = func_640(&Local_15, &Local_2027, 0, 0);
	bVar3 = !func_33(8192);
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8388608))
	{
		func_1044(func_1042(func_1041(0)), func_1042(func_1038()), func_1042(func_1043(bVar2)), 0);
	}
	else
	{
		Local_2027.f_202.f_57 = func_1045(func_1038(), func_1043(bVar2), iVar0, iVar1, bVar3);
	}
}

int func_650(float fParam0)
{
	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			return joaat("BLIP_CASH_BAG");
		case joaat("COACH_HOLDUP_KIDNAP"):
		default:
			break;
	}
	return joaat("BLIP_AMBIENT_VIP");
}

int func_651(int iParam0)
{
	return func_1046(iParam0);
}

void func_652(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((uParam0[iParam2 /*34*/])->f_25 != iParam1)
	{
		(uParam0[iParam2 /*34*/])->f_25 = iParam1;
	}
}

void func_653(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((uParam0[iParam2 /*34*/])->f_26 != iParam1)
	{
		(uParam0[iParam2 /*34*/])->f_26 = iParam1;
	}
}

bool func_654(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951255[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3);
}

bool func_655(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_654(iParam0))
	{
		return false;
	}
	iVar0 = func_1047(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_656(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_654(iParam0))
	{
		return false;
	}
	iVar0 = func_1047(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

int func_657(var uParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = (3.5f * 2f);
	iVar4 = -1;
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (uParam0->f_16[iVar3 /*12*/].f_2 != joaat("PASSENGER_VIP"))
		{
		}
		else if (uParam0->f_16[iVar3 /*12*/].f_3 != 22)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar3 /*12*/]))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_PED(uParam0->f_16[iVar3 /*12*/]);
			fVar0 = func_523(iVar2, PLAYER::PLAYER_PED_ID(), 1, 1);
			if (fVar0 > fVar1)
			{
			}
			else
			{
				fVar1 = fVar0;
				iVar4 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar4;
}

bool func_658(bool bParam0)
{
	if (!func_534())
	{
		return false;
	}
	if (func_227(2))
	{
		return false;
	}
	if (func_365(255) > 0)
	{
		return false;
	}
	if (!func_33(1))
	{
		return false;
	}
	if (!func_227(4) || func_456(Local_2027.f_202.f_57))
	{
		return false;
	}
	*bParam0 = 0;
	if (Local_15.f_2 > 2)
	{
		*bParam0 = 1;
	}
	return true;
}

void func_659(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar4 = PLAYER::PLAYER_ID();
	switch (fParam2->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (!func_202(iVar2, &Local_15, 128))
				{
				}
				else
				{
					if (func_426(iVar2, 0))
					{
						if (func_426(iVar2, 1))
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_202(iVar2, &Local_15, 2))
					{
						if (GANG::_0x901E0DC25080C8B9(iVar4) == Local_15.f_257[iVar2 /*5*/].f_4)
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_202(iVar2, uParam0, 16) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar2 /*5*/]))
					{
						iVar3 = 2;
					}
					else if (func_1002(iVar2, 255))
					{
						iVar3 = 5;
					}
					else if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_257[iVar2 /*5*/].f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_257[iVar2 /*5*/].f_3)) && Local_15.f_257[iVar2 /*5*/].f_3 != iVar4)
					{
						if (GANG::_0x3F59FE6F37869576(Local_15.f_257[iVar2 /*5*/].f_3, iVar4))
						{
							iVar3 = 5;
						}
						else
						{
							iVar3 = 6;
						}
					}
					else
					{
						iVar3 = 1;
					}
					func_1048(&(fParam2->f_202.f_77), iVar3, iVar0);
					iVar0++;
				}
				iVar2++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_201(iVar1, uParam0, 1024))
				{
				}
				else
				{
					if (func_426(iVar1, 0))
					{
						if (func_426(iVar1, 1))
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_201(iVar1, uParam0, 32))
					{
						if (GANG::_0x901E0DC25080C8B9(iVar4) == Local_15.f_16[iVar1 /*12*/].f_6)
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_988(iVar1, 255))
					{
						iVar3 = 5;
					}
					else if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iVar1 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iVar1 /*12*/].f_7)) && Local_15.f_16[iVar1 /*12*/].f_7 != iVar4)
					{
						if (GANG::_0x3F59FE6F37869576(Local_15.f_16[iVar1 /*12*/].f_7, iVar4))
						{
							iVar3 = 5;
						}
						else
						{
							iVar3 = 6;
						}
					}
					else if (uParam0->f_16[iVar1 /*12*/].f_2 == -1088690539)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					func_1048(&(fParam2->f_202.f_77), iVar3, iVar0);
					iVar0++;
				}
				iVar1++;
			}
			break;
	}
}

void func_660(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam7 != 0)
	{
		iVar1 = -1;
	}
	if (((func_1049(uParam0, &bVar0) && func_1050(uParam0)) && func_1051(uParam0, uParam1, iParam7, 0, 0, 0, 0)) && func_1052(uParam0, -213385216, &bVar0))
	{
		func_1053(uParam0, iParam2, bParam3, iParam4, sParam5);
		func_1054(uParam1, iParam6, bParam8, bParam9, bParam10, iVar1, 0);
	}
	if (bVar0)
	{
		func_247(uParam1, 0, 0);
		func_248(uParam0, 1);
	}
}

bool func_661(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_534())
	{
		return false;
	}
	if (func_365(255) > 0)
	{
		return false;
	}
	if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32))
	{
		return false;
	}
	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 128))
	{
		return false;
	}
	if (Local_2027.f_10 != joaat("COACH_HOLDUP_ROBBERY"))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(iVar0))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(iVar0) || PED::_0x0E99E3BF11BB6367(iVar0))
	{
		return false;
	}
	iVar2 = PLAYER::PLAYER_ID();
	if ((!PLAYER::_0x3EE1F7A8C32F24E1(iVar2, &iVar1, 0, 0) && !PLAYER::GET_PLAYER_TARGET_ENTITY(iVar2, &iVar1)) && !PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(iVar2, &iVar1))
	{
		return false;
	}
	if (func_523(iVar1, iVar0, 1, 1) > 3.5f)
	{
		return false;
	}
	if (!func_118(iVar1, &Local_15, &iVar3))
	{
		return false;
	}
	if (iVar3 == -1)
	{
		return false;
	}
	if (Local_15.f_16[iVar3 /*12*/].f_2 != joaat("PASSENGER_VIP"))
	{
		return false;
	}
	if (Local_15.f_16[iVar3 /*12*/].f_3 != 22)
	{
		return false;
	}
	if (func_201(iVar3, &Local_15, 2))
	{
		return false;
	}
	if (Local_15.f_16[iVar3 /*12*/].f_7 != 255 && Local_15.f_16[iVar3 /*12*/].f_7 != iVar2)
	{
		return false;
	}
	*iParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_RAGDOLL(*iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(*iParam0))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(*iParam0))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(*iParam0))
	{
		return false;
	}
	if (!func_926(*iParam0))
	{
		return false;
	}
	return true;
}

void func_662(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_654(iParam0))
	{
		return;
	}
	iVar0 = func_1047(iParam0);
	if (bParam1)
	{
		func_1055(iParam0, 4);
		if (bParam3)
		{
			func_1056(iVar0, 1);
		}
		func_1057(iVar0, 1);
	}
	else
	{
		func_1058(iParam0, 4);
		func_1057(iVar0, 0);
	}
}

void func_663(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_654(iParam0))
	{
		return;
	}
	iVar0 = func_1047(iParam0);
	func_1056(iVar0, bParam1);
}

void func_664(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && (!func_654(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1)))
	{
		return;
	}
	iVar0 = func_1047(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	if (iParam3 == 1)
	{
		func_1059(iParam0, 18, 0, 1);
		func_1059(iParam0, 17, 0, 1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar0 /*23*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), iParam2);
}

char* func_665()
{
	return "NET_CHU_UC_TAKE_MONEY";
}

int func_666(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_1060(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1061(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_667()
{
	if (!func_246(Local_2027.f_202.f_55))
	{
		return false;
	}
	if (!func_456(Local_2027.f_202.f_55))
	{
		return false;
	}
	return true;
}

char* func_668()
{
	switch (func_199(&Local_2027))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_UPDATE_VIP_KILLED";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_KILLED";
}

void func_669(char* sParam0, int iParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	Local_2027.f_202.f_55 = func_1062(sParam0, joaat("COLOR_WHITE"), -2, iParam1, iParam2, 0, 1);
}

char* func_670()
{
	switch (func_199(&Local_2027))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_UPDATE_VIP_KNOCKEDOUT";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_KNOCKEDOUT";
}

char* func_671()
{
	switch (func_199(&Local_2027))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_UPDATE_VIP_ESCAPED";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_ESCAPED";
}

char* func_672()
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (Local_2027.f_202.f_52 == PLAYER::PLAYER_ID())
			{
				return "NET_CHU_UPDATE_VIP_RETURNED_YOU";
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_VIP_RETURNED", Local_2027.f_202.f_52);
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (Local_2027.f_202.f_52 == PLAYER::PLAYER_ID())
			{
				return "NET_CHU_UPDATE_BAG_RETURNED_YOU";
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_BAG_RETURNED", Local_2027.f_202.f_52);
		default:
			break;
	}
	return "";
}

char* func_673()
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_VIP_PVP_STOLEN", Local_2027.f_202.f_52);
		case joaat("COACH_HOLDUP_ROBBERY"):
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_BAG_PVP_STOLEN", Local_2027.f_202.f_52);
		default:
			break;
	}
	return "";
}

char* func_674()
{
	bool bVar0;

	bVar0 = !func_640(&Local_15, &Local_2027, 1, 0);
	switch (func_199(&Local_2027))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bVar0)
			{
				return "NET_CHU_UPDATE_KIDNAP_PVP_ACTIVE_PLURAL";
			}
			else
			{
				return "NET_CHU_UPDATE_KIDNAP_PVP_ACTIVE";
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (bVar0)
			{
				return "NET_CHU_UPDATE_ROBBERY_PVP_ACTIVE_PLURAL";
			}
			else
			{
				return "NET_CHU_UPDATE_ROBBERY_PVP_ACTIVE";
			}
			break;
	}
	return "";
}

char* func_675()
{
	return "RDRO_GFH_Sounds";
}

char* func_676()
{
	return "match_end";
}

char* func_677()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(Local_2027.f_202.f_52)))
	{
		bVar0 = true;
	}
	iVar1 = Local_2027.f_202.f_52;
	bVar2 = !func_640(&Local_15, &Local_2027, 1, 0);
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bVar0)
			{
				if (bVar2)
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_POSSE_JOIN_PLURAL", func_1063(iVar1, joaat("COLOR_ENEMY")));
				}
				else
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_POSSE_JOIN", func_1063(iVar1, joaat("COLOR_ENEMY")));
				}
			}
			else if (bVar2)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_PLAYER_JOIN_PLURAL", func_1063(iVar1, joaat("COLOR_ENEMY")));
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_PLAYER_JOIN", func_1063(iVar1, joaat("COLOR_ENEMY")));
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (bVar0)
			{
				if (bVar2)
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_POSSE_JOIN_PLURAL", func_1063(iVar1, joaat("COLOR_ENEMY")));
				}
				else
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_POSSE_JOIN", func_1063(iVar1, joaat("COLOR_ENEMY")));
				}
			}
			else if (bVar2)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_PLAYER_JOIN_PLURAL", func_1063(iVar1, joaat("COLOR_ENEMY")));
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_PLAYER_JOIN", func_1063(iVar1, joaat("COLOR_ENEMY")));
			}
			break;
	}
	return "";
}

int func_678(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_175(&Var0, iParam0) && func_176(Var0, 1645569887, &iVar5, 0))
	{
		switch (iVar5)
		{
			case joaat("PROPSET_SNAP_TO_GROUND"):
				return 0;
			case joaat("PROPSET_ALIGN_TO_GROUND"):
				return 1;
			case 1390021295:
				return 4;
			case -656190934:
				return 5;
			case joaat("ALIGN_AS_ONE"):
				return 7;
			default:
				break;
		}
	}
	return 1;
}

void func_679(int iParam0, int iParam1)
{
	func_122(&(Local_15.f_278[iParam0 /*2*/].f_1), iParam1);
}

bool func_680(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_171(iParam1))
	{
		return false;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_681(int iParam0)
{
	if ((iParam0 == joaat("HANDCART") || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return true;
	}
	return false;
}

bool func_682(int iParam0)
{
	return iParam0 == joaat("MINECART01X");
}

float func_683(int iParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_141(iParam0, &Var0, iParam1))
	{
		func_310(Var0, 1922377121, &fVar5, 0);
	}
	return fVar5;
}

int func_684(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(iParam0, &Var0, iParam1))
	{
		func_176(Var0, -1662733059, &iVar5, 0);
		switch (iVar5)
		{
			case 500518742:
				return -2;
			case joaat("VS_DRIVER"):
				return -1;
			case joaat("VS_FRONT_RIGHT"):
				return 0;
			case joaat("VS_BACK_LEFT"):
				return 1;
			case joaat("VS_BACK_RIGHT"):
				return 2;
			case joaat("VS_EXTRA_LEFT_1"):
				return 3;
			case joaat("VS_EXTRA_RIGHT_1"):
				return 4;
			case 786089929:
				return 5;
			case 1129121707:
				return 6;
			case -534828465:
				return 7;
			case 510246373:
				return 8;
			default:
				break;
		}
	}
	return iVar5;
}

bool func_685()
{
	if (Local_2027.f_637 != 0)
	{
		if (func_209(Local_2027.f_637) > 15000)
		{
			return true;
		}
		return false;
	}
	Local_2027.f_637 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return false;
}

bool func_686(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STATIONARY_ESCORT"):
		case joaat("SECONDARY_DROPOFF_GUARD"):
		case joaat("DROPOFF_GUARD"):
			return false;
		default:
			break;
	}
	return true;
}

bool func_687(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2027, &Var0, iParam0) && func_452(Var0, -118004582, uParam1))
	{
		return true;
	}
	return false;
}

bool func_688(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return false;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_171(iParam1))
	{
		return false;
	}
	iVar0 = func_1064(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_689(int iParam0)
{
	int iVar0;

	if (!func_201(iParam0, &Local_15, 512) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/].f_1))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/].f_1);
		func_1065(iVar0);
		func_274(iParam0, &Local_15, 512);
	}
}

bool func_690(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;

	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_171(iParam2))
	{
		return false;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		iVar1 = func_1066(iVar0, iParam2, iParam3, 1, bParam4, !bParam5, bParam7);
		*uParam0 = NETWORK::PED_TO_NET(iVar1);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam5)
			{
				WEAPON::_0x899A04AFCC725D04(iVar1, WEAPON::_0xD42514C182121C23(iParam2));
			}
			if (bParam6)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam2));
			}
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar1, 0);
			if (bParam4)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_691(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_171(iParam2))
	{
		return false;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		iVar0 = NETWORK::NET_TO_VEH(iParam1);
		iVar1 = func_1067(iVar0, iParam2, iParam3, 1, bParam4, !bParam5);
		*uParam0 = NETWORK::PED_TO_NET(iVar1);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam5)
			{
				WEAPON::_0x899A04AFCC725D04(iVar1, WEAPON::_0xD42514C182121C23(iParam2));
			}
			if (bParam6)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam2));
			}
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar1, 0);
			if (bParam4)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (func_201(iParam0, &Local_15, 8388608))
	{
		return true;
	}
	iVar2 = -1;
	if (func_1068(iParam0, &iVar1) || func_1069(iParam0, &iVar2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
		{
			return false;
		}
		else
		{
			if (iVar1 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iVar0, iVar1);
			}
			else
			{
				PED::_SET_PED_OUTFIT_PRESET(iVar0, iVar2, false);
			}
			PED::_UPDATE_PED_VARIATION(iVar0, false, true, true, true, false);
			func_274(iParam0, &Local_15, 8388608);
		}
	}
	return true;
}

bool func_693(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	bool bVar7;
	bool bVar8;

	iVar1 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	if (uParam1->f_16[iParam0 /*12*/].f_2 == joaat("CHASER"))
	{
		iVar0 = func_1070();
		iVar0 = func_1071(iVar1, iVar0, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		return true;
	}
	if (!func_141(&Local_2027, &Var2, iParam0))
	{
		return true;
	}
	bVar7 = false;
	func_177(Var2, -900489166, &bVar7, 0);
	if (bVar7)
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
	}
	if (!func_1072(Var2, 1325183772, &iVar0))
	{
		return true;
	}
	if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	if (iVar0 == 0)
	{
		return true;
	}
	if (!func_236(iVar0))
	{
		return true;
	}
	bVar8 = false;
	if (uParam1->f_16[iParam0 /*12*/].f_2 == joaat("SHOTGUN_RIDER") || func_271(iParam0, 32768))
	{
		bVar8 = true;
	}
	func_1071(iVar1, iVar0, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(iVar1, true);
	if (!bVar8)
	{
		WEAPON::_0x94A3C1B804D291EC(iVar1, 0, 0, 1, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iVar1, iVar0, false, 0, false, false);
	}
	return true;
}

bool func_694(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2027, &Var0, iParam0) && func_1073(Var0, -779153855, uParam1, 0))
	{
		return true;
	}
	return false;
}

var func_695(var uParam0)
{
	return uParam0;
}

float func_696(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (!func_141(iParam0, &Var0, iParam1) || !func_310(Var0, 2039042927, &uVar5, 0))
	{
		return 0.25f;
	}
	return uVar5;
}

float func_697(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(iParam0, &Var0, iParam1))
	{
		func_310(Var0, 1860996644, &uVar5, 0);
	}
	return uVar5;
}

void func_698(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_431(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

bool func_699(int iParam0)
{
	struct<5> Var0;

	if (!func_451(&Var0))
	{
		return false;
	}
	if (!func_299(Var0, 188462142, iParam0, 0))
	{
		return false;
	}
	*iParam0 = func_759(*iParam0, 0, 100);
	return true;
}

bool func_700(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (func_141(iParam0, &Var0, iParam1) && func_299(Var0, 188462142, iParam2, 0))
	{
		return true;
	}
	return false;
}

void func_701(int iParam0)
{
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	if ((WEAPON::_0x95CA12E2C68043E5(iParam0, 0) || WEAPON::_0x80BB243789008A82(iParam0, 0)) || WEAPON::_0x495A04CAEC263AF8(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, joaat("MOUNTEDCOMBAT_RANGEDRIFLE"), -1082130432 /* Float: -1f */);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0xABC18A28BAD4B46F(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, joaat("MOUNTEDCOMBAT_RANGEDSHOTGUN"), -1082130432 /* Float: -1f */);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0x5B235F24472F2C3B(iParam0, 0) || WEAPON::_0xBFCA7AFABF9D7967(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, joaat("MOUNTEDCOMBAT_RANGEDREVOLVER"), -1082130432 /* Float: -1f */);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
}

char* func_702()
{
	return "chu_vip_ped";
}

void func_703(int iParam0, int iParam1)
{
	if (func_201(iParam0, &Local_15, 67108864))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_547(8, iParam1, iParam0, func_546(0, 8));
	func_274(iParam0, &Local_15, 67108864);
}

bool func_704(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2027.f_634;
	}
	return MISC::_0x8F4F050054005C27(&(Local_362[iParam1 /*52*/].f_2.f_12), iParam0);
}

void func_705(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	uParam1->f_321 = (uParam1->f_321 - 1);
	if (bParam2)
	{
		uParam1->f_326++;
		func_274(iParam0, uParam1, 64);
		func_63(uParam1, 131072);
		iVar0 = 5;
		if (uParam1->f_321 == 0)
		{
			func_63(&Local_15, 33554432);
			Local_15.f_328 = iParam0;
		}
	}
	else
	{
		uParam1->f_325++;
		func_63(uParam1, 2048);
		iVar0 = 4;
		if (uParam1->f_321 == 0)
		{
			func_63(&Local_15, 16777216);
			Local_15.f_328 = iParam0;
		}
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iParam0 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iParam0 /*12*/].f_7))
	{
		Local_15.f_16[iParam0 /*12*/].f_6 = GANG::_0x901E0DC25080C8B9(Local_15.f_16[iParam0 /*12*/].f_7);
	}
	func_547(iVar0, Local_15.f_16[iParam0 /*12*/].f_7, iParam0, func_546(0, 8));
	func_274(iParam0, uParam1, 32);
	func_416(iParam0, uParam1, 8);
	func_416(iParam0, uParam1, 16);
}

bool func_706(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PASSENGER_VIP"):
			return true;
		default:
			break;
	}
	return false;
}

int func_707(int iParam0, var uParam1)
{
	return NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
}

void func_708(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar1 = func_1074(iParam0, uParam1);
	if (bVar1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 2;
	}
	if (func_440(iParam0, &iVar2, 0, 0))
	{
		iVar4 = 0;
		while (iVar4 < 20)
		{
			if (iVar4 == iParam0)
			{
			}
			else if (Local_15.f_16[iVar4 /*12*/].f_2 != joaat("PASSENGER_VIP"))
			{
			}
			else if (Local_15.f_16[iVar4 /*12*/].f_3 != 20 && Local_15.f_16[iVar4 /*12*/].f_3 != 22)
			{
			}
			else if (!func_440(iVar4, &iVar3, 1, 0))
			{
			}
			else if (func_523(iVar2, iVar3, 1, 1) > 50f)
			{
			}
			else
			{
				if (!bVar1)
				{
					func_274(iVar4, &Local_15, 256);
				}
				func_274(iVar4, &Local_15, 16384);
			}
			iVar4++;
		}
	}
	func_547(iVar0, PLAYER::PLAYER_ID(), iParam0, func_546(0, 8));
}

void func_709(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (!func_201(iParam0, &Local_15, 1024))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
		{
			iVar0 = func_707(iParam0, uParam1);
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_KEEP_TASK(iVar0, bParam2);
				PED::SET_PED_CONFIG_FLAG(iVar0, 168, bParam3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam4);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if (((uParam1->f_16[iParam0 /*12*/].f_2 == joaat("PASSENGER_VIP") && !func_201(iParam0, uParam1, 2)) && !func_201(iParam0, uParam1, 32)) && uParam1->f_321 > 0)
	{
		uParam1->f_321 = (uParam1->f_321 - 1);
		uParam1->f_16[iParam0 /*12*/].f_7 = 255;
	}
	else if (uParam1->f_16[iParam0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
	{
		uParam1->f_16[iParam0 /*12*/].f_7 = 255;
	}
	func_416(iParam0, uParam1, 8);
	func_416(iParam0, uParam1, 16);
	func_1075(iParam0, uParam1, -1088690539);
}

bool func_710(int iParam0)
{
	if (Local_15.f_16[iParam0 /*12*/].f_2 != -1088690539)
	{
		return false;
	}
	if (func_201(iParam0, &Local_15, 1024))
	{
		return false;
	}
	return true;
}

void func_711(int iParam0)
{
	Local_15.f_16[iParam0 /*12*/].f_11 = -1;
	Local_15.f_16[iParam0 /*12*/].f_3 = 0;
	Local_15.f_16[iParam0 /*12*/].f_2 = 0;
	Local_15.f_16[iParam0 /*12*/].f_4 = 0;
	Local_15.f_16[iParam0 /*12*/].f_1 = 0;
	Local_15.f_16[iParam0 /*12*/] = 0;
	Local_15.f_16[iParam0 /*12*/].f_5 = 0;
	Local_15.f_16[iParam0 /*12*/].f_6 = 0;
	Local_15.f_16[iParam0 /*12*/].f_7 = 255;
	Local_15.f_16[iParam0 /*12*/].f_8 = { 0f, 0f, 0f };
}

void func_712(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (func_566(iParam0, uParam1) != joaat("PASSENGER_VIP"))
	{
		return;
	}
	if (func_877(iParam0, uParam1) != 22)
	{
		return;
	}
	if (func_201(iParam0, uParam1, 2))
	{
		return;
	}
	if (!func_201(iParam0, uParam1, 1))
	{
		iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1076(), func_1077(), func_555(0), true, true);
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
		{
			return;
		}
		ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
		uParam1->f_16[iParam0 /*12*/].f_5 = NETWORK::_ANIM_SCENE_TO_NET(iVar0);
		func_274(iParam0, uParam1, 1);
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_5))
	{
		return;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(uParam1->f_16[iParam0 /*12*/].f_5);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		func_274(iParam0, uParam1, 2);
		return;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0))
	{
		func_274(iParam0, uParam1, 2);
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		func_274(iParam0, uParam1, 2);
		return;
	}
}

void func_713(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_566(iParam0, uParam1);
	if (iVar0 == -1088690539)
	{
		return;
	}
	switch (iVar0)
	{
		case joaat("DRIVER"):
			func_1078(iParam0, uParam1, uParam2, uParam3);
			break;
		case joaat("ESCORT"):
			func_1079(iParam0, uParam1, uParam2, uParam3);
			break;
		case joaat("PASSENGER_ESCORT"):
			func_1080(iParam0, uParam1, uParam2, uParam3);
			break;
		case joaat("MOUNTED_ESCORT"):
			func_1081(iParam0, uParam1, uParam2, uParam3);
			break;
		case joaat("SHOTGUN_RIDER"):
			func_1082(iParam0, uParam1, uParam2, uParam3);
			break;
	}
}

void func_714(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (func_199(&Local_2027) != joaat("COACH_HOLDUP_KIDNAP"))
	{
		return;
	}
	if (!func_201(iParam0, &Local_15, 1024))
	{
		return;
	}
	if (func_201(iParam0, &Local_15, 32))
	{
		return;
	}
	if (func_201(iParam0, &Local_15, 65536) || func_201(iParam0, &Local_15, 131072))
	{
		return;
	}
	if (func_1083(iParam0, &iVar3))
	{
		if (func_41(&(Local_362[iVar3 /*52*/]), 32))
		{
			iVar2 = 2;
		}
		else if (func_41(&(Local_362[iVar3 /*52*/]), 64))
		{
			iVar2 = 3;
		}
		else
		{
			iVar2 = 4;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
	}
	else
	{
		iVar2 = func_866(iParam1, &uVar0, &iVar1);
		if (iVar2 == 2 || iVar2 == 3)
		{
			iVar2 = 0;
		}
	}
	switch (iVar2)
	{
		case 0:
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			if (func_201(iParam0, &Local_15, 4))
			{
				if (func_867(&Local_2027, vVar4, 1) || func_867(&Local_2027, vVar4, 0))
				{
					return;
				}
			}
		case 1:
			func_416(iParam0, &Local_15, 8);
			func_416(iParam0, &Local_15, 16);
			Local_15.f_16[iParam0 /*12*/].f_7 = 255;
			break;
		case 2:
			func_274(iParam0, &Local_15, 8);
			func_416(iParam0, &Local_15, 16);
			Local_15.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_63(&Local_15, 134217728);
			break;
		case 3:
			func_274(iParam0, &Local_15, 16);
			func_416(iParam0, &Local_15, 8);
			Local_15.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_63(&Local_15, 134217728);
			break;
		case 4:
			func_416(iParam0, &Local_15, 8);
			func_416(iParam0, &Local_15, 16);
			Local_15.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_63(&Local_15, 134217728);
			break;
	}
}

void func_715(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	iVar1 = func_707(iParam0, uParam1);
	iVar2 = 255;
	if (func_1084(iParam0, uParam1, uParam3))
	{
		func_63(uParam1, 65536);
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_916(iParam0, uParam1, 1);
				return;
			}
			func_916(iParam0, uParam1, 2);
			break;
		case 2:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_916(iParam0, uParam1, 1);
				return;
			}
			if (!func_1085(iVar1, &iVar2, &uVar3, 1103626240 /* Float: 25f */))
			{
				Local_2027.f_171.f_2 = -1;
			}
			else
			{
				Local_15.f_16[iParam0 /*12*/].f_7 = iVar2;
				if (func_1086(iVar1, iVar2, &(Local_2027.f_171.f_2), 1103626240 /* Float: 25f */, 2000))
				{
					func_916(iParam0, uParam1, 3);
					func_63(&Local_15, 16);
					return;
				}
			}
			if (!func_55(uParam1, 16))
			{
				return;
			}
			func_916(iParam0, uParam1, 3);
			break;
		case 3:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_916(iParam0, uParam1, 1);
				return;
			}
			if (!func_1087(iParam0, uParam1, 1, 0))
			{
				return;
			}
			func_916(iParam0, uParam1, 4);
			break;
		case 4:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_916(iParam0, uParam1, 1);
				return;
			}
			if (func_1087(iParam0, uParam1, 1, 0))
			{
				return;
			}
			func_916(iParam0, uParam1, 3);
			break;
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				return;
			}
			func_916(iParam0, uParam1, 2);
			break;
	}
}

void func_716(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_707(iParam0, uParam1);
	if (!func_892(iParam0, uParam1))
	{
		func_709(iParam0, uParam1, 0, 1, 0);
		return;
	}
	iVar1 = func_893(iParam0, uParam1);
	if (!func_341(Local_15.f_16[iParam0 /*12*/].f_11, &Local_15, 1) && func_523(iVar1, iVar0, 1, 1) > 100f)
	{
		func_709(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
			{
				func_916(iParam0, uParam1, 35);
				return;
			}
			func_916(iParam0, uParam1, 34);
			break;
		case 36:
			break;
		case 34:
			if (func_55(&Local_15, 32))
			{
				func_916(iParam0, uParam1, 36);
				return;
			}
			break;
		case 35:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
			{
				return;
			}
			func_916(iParam0, uParam1, 34);
			break;
	}
}

void func_717(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	iVar1 = func_707(iParam0, uParam1);
	if (func_588(iVar0))
	{
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_916(iParam0, uParam1, 14);
			break;
		case 14:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				return;
			}
			func_916(iParam0, uParam1, 15);
			break;
		case 15:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				func_916(iParam0, uParam1, 14);
				return;
			}
			if (!func_55(uParam1, 16))
			{
				return;
			}
			func_916(iParam0, uParam1, 16);
			break;
		case 16:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				func_916(iParam0, uParam1, 14);
				return;
			}
			break;
	}
}

void func_718(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_892(iParam0, uParam1))
	{
		iVar0 = func_893(iParam0, uParam1);
	}
	iVar1 = func_707(iParam0, uParam1);
	if (PED::GET_PED_CONFIG_FLAG(iVar1, 11, false))
	{
		func_274(iParam0, uParam1, 524288);
		func_916(iParam0, uParam1, 24);
		return;
	}
	else
	{
		func_416(iParam0, uParam1, 524288);
	}
	if (func_199(&Local_2027) != joaat("COACH_HOLDUP_KIDNAP") && func_201(iParam0, &Local_15, 256))
	{
		if (ENTITY::GET_ENTITY_HEALTH(iVar1) < 25)
		{
			func_416(iParam0, &Local_15, 256);
		}
		else if ((PED::_IS_PED_HOGTIED(iVar1) || PED::_IS_PED_LASSOED(iVar1)) || PED::_0x3BDFCF25B58B0415(iVar1))
		{
			func_416(iParam0, &Local_15, 256);
		}
	}
	if (PED::_IS_PED_HOGTIED(iVar1) || (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1) && func_201(iParam0, uParam1, 4)))
	{
		func_274(iParam0, uParam1, 4);
		if (Local_15.f_16[iParam0 /*12*/].f_3 != 28)
		{
			func_916(iParam0, uParam1, 28);
		}
	}
	else
	{
		func_416(iParam0, uParam1, 4);
	}
	if (func_201(iParam0, uParam1, 32))
	{
		return;
	}
	if (Local_15.f_16[iParam0 /*12*/].f_3 != 21)
	{
		func_416(iParam0, &Local_15, 4194304);
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			if (func_33(256) && !func_271(iParam0, 1))
			{
				func_916(iParam0, uParam1, 25);
				func_274(iParam0, &Local_15, 256);
			}
			func_916(iParam0, uParam1, 17);
			break;
		case 25:
			if (func_55(&Local_15, 16))
			{
				func_916(iParam0, uParam1, 21);
				return;
			}
			if (!func_936(iVar1, &uVar2, &fVar3, 100f))
			{
				return;
			}
			func_916(iParam0, uParam1, 26);
			break;
		case 26:
			if (func_55(&Local_15, 16))
			{
				func_916(iParam0, uParam1, 21);
				return;
			}
			if (func_936(iVar1, &uVar2, &fVar3, 100f))
			{
				return;
			}
			func_916(iParam0, uParam1, 25);
			break;
		case 17:
			if (!func_892(iParam0, uParam1))
			{
				func_916(iParam0, uParam1, 18);
				return;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				func_274(iParam0, &Local_15, 256);
				func_916(iParam0, uParam1, 21);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return;
			}
			if (func_902(iVar0) && !func_1088(uParam1->f_16[iParam0 /*12*/].f_11))
			{
				func_916(iParam0, uParam1, 18);
				return;
			}
			if (!func_724(iVar0))
			{
				return;
			}
			if (!func_341(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 1))
			{
				return;
			}
			if (func_405(&Local_15) <= 2 && func_744(uParam1, uParam1->f_16[iParam0 /*12*/].f_11))
			{
				return;
			}
			func_916(iParam0, uParam1, 18);
			break;
		case 18:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
			{
				return;
			}
			if (func_201(iParam0, uParam1, 256))
			{
				func_916(iParam0, uParam1, 21);
				return;
			}
			if (func_199(bParam3) != joaat("COACH_HOLDUP_KIDNAP"))
			{
				func_916(iParam0, uParam1, 19);
				return;
			}
			func_916(iParam0, uParam1, 21);
			break;
		case 19:
			if (func_1089(iParam0, 2.2f))
			{
				return;
			}
			if (func_55(&Local_15, 16) && func_1090(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 25f))
			{
				func_916(iParam0, uParam1, 20);
				return;
			}
			func_916(iParam0, uParam1, 21);
			break;
		case 20:
			if (func_1089(iParam0, 2.2f))
			{
				func_916(iParam0, uParam1, 19);
				return;
			}
			if ((!func_1090(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 25f) || func_201(iParam0, uParam1, 256)) || func_525(&Local_15, &Local_2027) < 6000)
			{
				func_916(iParam0, uParam1, 21);
				return;
			}
			if (func_1091(iVar1, 40f, 1))
			{
				func_916(iParam0, uParam1, 21);
				return;
			}
			if (!func_926(iVar1))
			{
				return;
			}
			if (!func_341(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 1))
			{
				return;
			}
			if (func_725(uParam1, joaat("ESCORT"), uParam1->f_16[iParam0 /*12*/].f_11))
			{
				return;
			}
			if (func_725(uParam1, joaat("PASSENGER_ESCORT"), uParam1->f_16[iParam0 /*12*/].f_11))
			{
				return;
			}
			if ((PED::IS_PED_RAGDOLL(iVar1) || PED::_0x3BDFCF25B58B0415(iVar1)) || PED::_IS_PED_HOGTIED(iVar1))
			{
				return;
			}
			func_916(iParam0, uParam1, 22);
			break;
		case 21:
			iVar4 = func_903(iVar1, &Local_362, 150f);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4) && func_523(iVar1, iVar4, 0, 0) < 80f)
			{
				func_416(iParam0, &Local_15, 4194304);
			}
			else
			{
				func_274(iParam0, &Local_15, 4194304);
			}
			if (func_525(&Local_15, &Local_2027) < 6000)
			{
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				fVar3 = func_523(iVar1, iVar4, 1, 0);
				if ((((fVar3 < 20f && func_55(&Local_15, 16)) && !func_201(iParam0, uParam1, 4096)) && !func_201(iParam0, uParam1, 256)) && !func_1091(iVar1, (40f + 10f), 1))
				{
					func_416(iParam0, &Local_15, 16384);
					func_916(iParam0, uParam1, 20);
					return;
				}
				if (fVar3 < 150f)
				{
					return;
				}
			}
			func_916(iParam0, uParam1, 27);
			break;
		case 27:
			iVar4 = func_903(iVar1, &Local_362, 150f);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				fVar3 = func_523(iVar1, iVar4, 1, 0);
				if ((fVar3 + 10f) > 150f)
				{
					return;
				}
			}
			else
			{
				return;
			}
			func_916(iParam0, uParam1, 21);
			break;
		case 22:
			if (uParam1->f_16[iParam0 /*12*/].f_7 == 255)
			{
				if ((PED::IS_PED_RAGDOLL(iVar1) || PED::_0x3BDFCF25B58B0415(iVar1)) || PED::_IS_PED_HOGTIED(iVar1))
				{
					func_916(iParam0, &Local_15, 20);
					return;
				}
				if ((!func_1090(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 25f) || func_525(&Local_15, &Local_2027) < 6000) || func_201(iParam0, &Local_15, 256))
				{
					func_916(iParam0, uParam1, 21);
					return;
				}
				if (func_1091(iVar1, 40f, 1))
				{
					func_916(iParam0, uParam1, 21);
					return;
				}
				if (func_1089(iParam0, 2.2f))
				{
					func_916(iParam0, uParam1, 19);
					return;
				}
			}
			else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam1->f_16[iParam0 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam1->f_16[iParam0 /*12*/].f_7))
			{
				iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(uParam1->f_16[iParam0 /*12*/].f_7);
				if (func_41(iParam2[iVar5 /*52*/], 256))
				{
					uParam1->f_16[iParam0 /*12*/].f_7 = 255;
					func_916(iParam0, uParam1, 23);
					return;
				}
				if (func_41(iParam2[iVar5 /*52*/], 512))
				{
					return;
				}
			}
			if (!func_201(iParam0, uParam1, 2))
			{
				iVar6 = 0;
				while (iVar6 < 32)
				{
					if (!func_41(iParam2[iVar6 /*52*/], 128))
					{
					}
					else if ((iParam2[iVar6 /*52*/])->f_46 != iParam0)
					{
					}
					else if (!func_123(iVar6, 1, 1))
					{
					}
					else
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar6));
						if (func_1092(iParam0, uParam1, iVar7))
						{
						}
						else
						{
							uParam1->f_16[iParam0 /*12*/].f_7 = iVar7;
							return;
						}
					}
					iVar6++;
				}
				uParam1->f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			uParam1->f_16[iParam0 /*12*/].f_7 = 255;
			func_274(iParam0, uParam1, 4096);
			func_916(iParam0, uParam1, 21);
			break;
		case 23:
			if (func_926(iVar1))
			{
				return;
			}
			func_274(iParam0, uParam1, 4096);
			func_916(iParam0, uParam1, 21);
			break;
		case 24:
			if (func_201(iParam0, &Local_15, 524288))
			{
				return;
			}
			func_916(iParam0, &Local_15, 21);
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
			{
				func_916(iParam0, &Local_15, 18);
			}
			break;
		case 28:
			if (func_201(iParam0, &Local_15, 4))
			{
				return;
			}
			func_916(iParam0, &Local_15, 21);
			break;
	}
}

void func_719(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	iVar1 = func_707(iParam0, uParam1);
	if (!func_201(iParam0, uParam1, 128) && PED::IS_PED_IN_GROUP(iVar1))
	{
		func_274(iParam0, uParam1, 128);
	}
	if (func_55(uParam1, 16) && func_523(iVar0, iVar1, 1, 1) > 100f)
	{
		func_709(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_916(iParam0, uParam1, 29);
			break;
		case 29:
			if (!func_55(uParam1, 16))
			{
				return;
			}
			if ((func_1093(iVar0, iParam2, 50f) && func_523(iVar0, iVar1, 1, 1) < 40f) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false, false))
			{
				func_916(iParam0, uParam1, 30);
				return;
			}
			break;
		case 30:
			if (func_523(iVar0, iVar1, 1, 1) > 40f)
			{
				func_916(iParam0, uParam1, 29);
				return;
			}
			break;
	}
}

void func_720(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	iVar1 = func_707(iParam0, uParam1);
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_916(iParam0, uParam1, 6);
			break;
		case 6:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				return;
			}
			func_916(iParam0, uParam1, 7);
			break;
		case 7:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_916(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_916(iParam0, uParam1, 11);
				return;
			}
			if (func_271(iParam0, 16))
			{
				return;
			}
			if (func_1085(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				Local_15.f_16[iParam0 /*12*/].f_7 = uVar3;
				if (func_201(iParam0, &Local_15, 2097152))
				{
					func_916(iParam0, uParam1, 10);
				}
				else
				{
					func_916(iParam0, uParam1, 8);
				}
				return;
			}
			break;
		case 8:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_916(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_916(iParam0, uParam1, 11);
				return;
			}
			if (!func_1085(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				if (!func_201(iParam0, &Local_15, 1048576))
				{
					func_274(iParam0, &Local_15, 1048576);
					return;
				}
				func_916(iParam0, uParam1, 7);
				Local_15.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_15.f_16[iParam0 /*12*/].f_7 = uVar3;
			func_416(iParam0, &Local_15, 1048576);
			if (iVar2 > 15000)
			{
				func_916(iParam0, uParam1, 9);
				return;
			}
			break;
		case 9:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_916(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_916(iParam0, uParam1, 11);
				return;
			}
			if (!func_1085(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				if (!func_201(iParam0, &Local_15, 1048576))
				{
					func_274(iParam0, &Local_15, 1048576);
					return;
				}
				func_916(iParam0, uParam1, 7);
				Local_15.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_15.f_16[iParam0 /*12*/].f_7 = uVar3;
			func_416(iParam0, &Local_15, 1048576);
			if (!func_201(iParam0, &Local_15, 2097152) && func_888(iParam0, 6, &Local_362, 0))
			{
				func_274(iParam0, &Local_15, 2097152);
			}
			if (iVar2 > 28000)
			{
				func_916(iParam0, uParam1, 10);
				return;
			}
			break;
		case 10:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_916(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_916(iParam0, uParam1, 11);
				return;
			}
			if (!func_1085(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				if (!func_201(iParam0, &Local_15, 1048576))
				{
					func_274(iParam0, &Local_15, 1048576);
					return;
				}
				func_916(iParam0, uParam1, 7);
				Local_15.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_15.f_16[iParam0 /*12*/].f_7 = uVar3;
			func_416(iParam0, &Local_15, 1048576);
			if (iVar2 > 45000)
			{
				func_916(iParam0, uParam1, 11);
				func_63(&Local_15, 16);
				return;
			}
			break;
		case 11:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_916(iParam0, uParam1, 6);
				return;
			}
			if (((!func_33(256) && func_907(iVar0, -1, 0)) && !func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("DRIVER"), -1)) && func_724(iVar0))
			{
				func_916(iParam0, uParam1, 12);
				return;
			}
			break;
		case 12:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
			{
				func_916(iParam0, uParam1, 6);
				return;
			}
			break;
	}
}

void func_721(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_707(iParam0, uParam1);
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_916(iParam0, uParam1, 31);
			break;
		case 31:
			if (!func_55(&Local_15, 524288))
			{
				return;
			}
			if (Local_15.f_328 == -1)
			{
				return;
			}
			if (func_1095(&Local_15, joaat("DROPOFF_GUARD"), 33))
			{
				return;
			}
			if (func_55(&Local_15, 16777216) && !func_201(iParam0, &Local_15, 2048))
			{
				func_916(iParam0, uParam1, 33);
			}
			else if (func_55(&Local_15, 33554432) && func_201(iParam0, &Local_15, 2048))
			{
				func_916(iParam0, uParam1, 33);
			}
			break;
		case 32:
			if ((!PED::IS_PED_IN_COMBAT(iVar0, 0) && !PED::_0x77525BBF433F2CD6(iVar0)) && !PED::IS_PED_FLEEING(iVar0))
			{
				func_916(iParam0, uParam1, 31);
				return;
			}
			break;
	}
}

void func_722(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	var uVar9;

	iVar0 = func_707(iParam0, uParam1);
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
	{
	}
	else
	{
		vVar2 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619) };
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_916(iParam0, uParam1, 44);
			break;
		case 44:
			if (func_55(&Local_15, 512))
			{
				func_916(iParam0, uParam1, 45);
				return;
			}
			if (func_558(iVar0, vVar2, 0) < 110f)
			{
				func_916(iParam0, uParam1, 45);
				return;
			}
			if (func_945(iParam0, &iVar1))
			{
				fVar5 = func_523(iVar1, iVar0, 0, 1);
				if (fVar5 > 300f && !func_1096(iVar0, &Local_362, 200f))
				{
					func_709(iParam0, &Local_15, 0, 1, 0);
					return;
				}
			}
			else
			{
				if (!func_413(&uVar9, &uVar6))
				{
					func_916(iParam0, uParam1, 45);
					return;
				}
				Local_15.f_16[iParam0 /*12*/].f_11 = uVar9;
				return;
			}
			break;
		case 45:
			if (!func_1096(iVar0, &Local_362, 200f))
			{
				func_709(iParam0, &Local_15, 0, 1, 0);
				return;
			}
			break;
	}
}

void func_723(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 255;
	iVar2 = func_707(iParam0, uParam1);
	if (Local_15.f_16[iParam0 /*12*/].f_3 != 43 && func_55(uParam1, 524288))
	{
		func_916(iParam0, uParam1, 43);
		return;
	}
	if (Local_15.f_16[iParam0 /*12*/].f_3 != 37 && func_55(uParam1, 16))
	{
		func_916(iParam0, uParam1, 37);
		return;
	}
	if ((func_55(uParam1, 16) && func_892(iParam0, &Local_15)) && func_523(func_893(iParam0, uParam1), iVar2, 1, 1) > 100f)
	{
		func_709(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_916(iParam0, uParam1, 38);
			break;
		case 38:
			if (func_271(iParam0, 16) || PED::IS_PED_ON_MOUNT(iVar2))
			{
				return;
			}
			func_416(iParam0, &Local_15, 1048576);
			if (func_1085(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (func_201(iParam0, &Local_15, 2097152))
				{
					func_916(iParam0, uParam1, 41);
				}
				else
				{
					func_916(iParam0, uParam1, 40);
				}
				return;
			}
			if (func_913(iParam0) == 0 || func_271(iParam0, 1))
			{
				return;
			}
			func_916(iParam0, uParam1, 39);
			break;
		case 39:
			if (func_271(iParam0, 16))
			{
				return;
			}
			if (PED::IS_PED_ON_MOUNT(iVar2))
			{
				func_916(iParam0, uParam1, 38);
				return;
			}
			if (func_1085(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (func_201(iParam0, &Local_15, 2097152))
				{
					func_916(iParam0, uParam1, 41);
				}
				else
				{
					func_916(iParam0, uParam1, 40);
				}
				Local_15.f_16[iParam0 /*12*/].f_7 = iVar1;
				return;
			}
			break;
		case 40:
			if (!func_1085(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (!func_201(iParam0, &Local_15, 1048576))
				{
					func_274(iParam0, &Local_15, 1048576);
					return;
				}
				func_916(iParam0, uParam1, 38);
				Local_15.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_15.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_416(iParam0, &Local_15, 1048576);
			if (iVar0 > 15000)
			{
				func_916(iParam0, uParam1, 41);
				return;
			}
			break;
		case 41:
			if (!func_1085(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (!func_201(iParam0, &Local_15, 1048576))
				{
					func_274(iParam0, &Local_15, 1048576);
					return;
				}
				func_916(iParam0, uParam1, 38);
				Local_15.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_15.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_416(iParam0, &Local_15, 1048576);
			if (!func_201(iParam0, &Local_15, 2097152) && func_888(iParam0, 6, &Local_362, 0))
			{
				func_274(iParam0, &Local_15, 2097152);
			}
			if (iVar0 > 28000)
			{
				func_916(iParam0, uParam1, 42);
				return;
			}
			break;
		case 42:
			if (!func_1085(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (!func_201(iParam0, &Local_15, 1048576))
				{
					func_274(iParam0, &Local_15, 1048576);
					return;
				}
				func_916(iParam0, uParam1, 38);
				Local_15.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_15.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_416(iParam0, &Local_15, 1048576);
			if (iVar0 > 45000)
			{
				func_916(iParam0, uParam1, 37);
				func_63(&Local_15, 16);
				return;
			}
			break;
		case 43:
			break;
		case 37:
			break;
	}
}

bool func_724(int iParam0)
{
	return ENTITY::GET_ENTITY_SPEED(iParam0) < 0.5f;
}

bool func_725(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (uParam0->f_16[iVar0 /*12*/].f_11 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_726(int iParam0, var uParam1)
{
	func_420(iParam0, uParam1, 16);
	func_419(iParam0, uParam1, 64);
	func_419(iParam0, uParam1, 32);
	func_419(iParam0, uParam1, 1);
	Local_15.f_257[iParam0 /*5*/].f_3 = 255;
	uParam1->f_322 = (uParam1->f_322 - 1);
}

void func_727(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_202(iParam0, &Local_15, 2048) && func_1097(iParam0, &uVar2))
	{
		func_420(iParam0, &Local_15, 2048);
	}
	if (func_1098(iParam0, iParam7))
	{
		if (func_41(&(Local_362[*iParam7 /*52*/]), 32))
		{
			*iParam5 = 2;
		}
		else if (func_41(&(Local_362[*iParam7 /*52*/]), 64))
		{
			*iParam5 = 3;
		}
		else
		{
			*iParam5 = 4;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*iParam7));
		*iParam6 = PLAYER::GET_PLAYER_PED(iVar0);
		*bParam8 = func_956(iParam0, *iParam7);
	}
	else
	{
		*iParam5 = func_866(iParam1, iParam6, &iVar0);
		*bParam8 = 0;
		*iParam7 = 255;
		if (*iParam5 == 2 || *iParam5 == 3)
		{
			*iParam5 = 0;
		}
	}
	if (*iParam5 == 0 && !func_202(iParam0, &Local_15, 2048))
	{
		return;
	}
	switch (*iParam5)
	{
		case 0:
			if (((func_202(iParam0, &Local_15, 256) || func_202(iParam0, &Local_15, 512)) || func_867(&Local_2027, vParam2, 1)) || func_867(&Local_2027, vParam2, 0))
			{
			}
			else
			{
				func_419(iParam0, &Local_15, 64);
				func_419(iParam0, &Local_15, 8);
				func_419(iParam0, &Local_15, 1);
				func_419(iParam0, &Local_15, 32);
				Local_15.f_257[iParam0 /*5*/].f_3 = 255;
				Local_15.f_257[iParam0 /*5*/].f_2 = -1;
			}
			break;
		case 1:
			func_420(iParam0, &Local_15, 64);
			func_419(iParam0, &Local_15, 1);
			func_419(iParam0, &Local_15, 32);
			Local_15.f_257[iParam0 /*5*/].f_3 = 255;
			if ((NETWORK::_0xB07D3185E11657A5(*iParam6) && PED::IS_PED_IN_ANY_VEHICLE(*iParam6, true)) && func_114(PED::GET_VEHICLE_PED_IS_IN(*iParam6, true), &Local_15, &uVar1))
			{
				func_420(iParam0, &Local_15, 8);
				Local_15.f_257[iParam0 /*5*/].f_2 = uVar1;
			}
			else
			{
				func_419(iParam0, &Local_15, 8);
				Local_15.f_257[iParam0 /*5*/].f_2 = -1;
			}
			break;
		case 2:
			func_420(iParam0, &Local_15, 64);
			func_420(iParam0, &Local_15, 1);
			func_419(iParam0, &Local_15, 8);
			func_419(iParam0, &Local_15, 32);
			Local_15.f_257[iParam0 /*5*/].f_3 = iVar0;
			Local_15.f_257[iParam0 /*5*/].f_2 = -1;
			func_63(&Local_15, 134217728);
			break;
		case 3:
			func_420(iParam0, &Local_15, 64);
			func_420(iParam0, &Local_15, 32);
			func_419(iParam0, &Local_15, 8);
			func_419(iParam0, &Local_15, 1);
			Local_15.f_257[iParam0 /*5*/].f_3 = iVar0;
			Local_15.f_257[iParam0 /*5*/].f_2 = -1;
			func_63(&Local_15, 134217728);
			break;
		case 4:
			func_420(iParam0, &Local_15, 64);
			func_419(iParam0, &Local_15, 1);
			func_419(iParam0, &Local_15, 32);
			Local_15.f_257[iParam0 /*5*/].f_3 = iVar0;
			Local_15.f_257[iParam0 /*5*/].f_2 = -1;
			func_63(&Local_15, 134217728);
			break;
	}
}

void func_728(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	uParam1->f_322 = (uParam1->f_322 - 1);
	if (bParam2)
	{
		func_420(iParam0, uParam1, 4);
		func_63(uParam1, 262144);
		uParam1->f_324++;
		iVar0 = 5;
		if (uParam1->f_322 == 0)
		{
			func_63(&Local_15, 33554432);
			Local_15.f_328 = iParam0;
		}
	}
	else
	{
		func_63(uParam1, 8192);
		uParam1->f_323++;
		iVar0 = 4;
		if (uParam1->f_322 == 0)
		{
			func_63(&Local_15, 16777216);
			Local_15.f_328 = iParam0;
		}
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_257[iParam0 /*5*/].f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_257[iParam0 /*5*/].f_3))
	{
		Local_15.f_257[iParam0 /*5*/].f_4 = GANG::_0x901E0DC25080C8B9(Local_15.f_257[iParam0 /*5*/].f_3);
	}
	func_547(iVar0, Local_15.f_257[iParam0 /*5*/].f_3, iParam0, func_546(0, 8));
	func_420(iParam0, uParam1, 2);
}

void func_729(int iParam0, int iParam1)
{
	if (func_202(iParam0, &Local_15, 4096))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_547(8, iParam1, iParam0, func_546(0, 8));
	func_420(iParam0, &Local_15, 4096);
}

bool func_730(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (bParam7)
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 2;
	}
	if (bParam3 != iVar0)
	{
		return false;
	}
	if (iParam6 != 255)
	{
		if (bParam7)
		{
			bVar1 = (bParam5 && func_41(&(Local_362[iParam6 /*52*/]), 131072));
		}
		else
		{
			bVar1 = (bParam5 && func_41(&(Local_362[iParam6 /*52*/]), 65536));
		}
	}
	if (!bVar1 && !func_867(&Local_2027, vParam0, bParam7))
	{
		return false;
	}
	return true;
}

int func_731()
{
	int iVar0;

	if (Local_15.f_315 < 2)
	{
		iVar0 = 2;
	}
	else if (Local_15.f_315 < 3)
	{
		iVar0 = 3;
	}
	else if (Local_15.f_315 < 6)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 4;
	}
	return func_832((iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2)), func_733());
}

int func_732()
{
	if (!func_55(&Local_15, 128))
	{
		return func_978(0, func_1099());
	}
	return func_978(MISC::GET_RANDOM_INT_IN_RANGE(func_1100(), func_1101() + 1), 0);
}

int func_733()
{
	int iVar0;

	if (Local_15.f_315 < 2)
	{
		iVar0 = 2;
	}
	else if (Local_15.f_315 < 3)
	{
		iVar0 = 3;
	}
	else if (Local_15.f_315 < 6)
	{
		iVar0 = 6;
	}
	else
	{
		iVar0 = 8;
	}
	return iVar0;
}

bool func_734()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 1;
	if (!func_451(&Var1))
	{
		return iVar0;
	}
	if (!func_177(Var1, 2064763470, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

Vector3 func_735(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam0 <= 0 || iParam1 <= 1)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 1f, 0f };
	func_948(&vVar0, &(vVar0.f_1), ((360f * IntToFloat((iParam0 - 1))) / IntToFloat((iParam1 - 1))));
	return vVar0;
}

bool func_736(int iParam0)
{
	*iParam0 = 0;
	while (*iParam0 < 20)
	{
		if (Local_15.f_16[*iParam0 /*12*/].f_2 != 0)
		{
		}
		else
		{
			return true;
		}
		*iParam0++;
	}
	return false;
}

bool func_737(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
	{
		return false;
	}
	fVar4 = iParam5;
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar5 = 0;
			while (iVar5 < 20)
			{
				if (Local_15.f_16[iVar5 /*12*/].f_2 != joaat("PASSENGER_VIP"))
				{
				}
				else if (func_201(iVar5, &Local_15, 32))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar5 /*12*/]))
				{
				}
				else
				{
					iVar6 = NETWORK::NET_TO_PED(Local_15.f_16[iVar5 /*12*/]);
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar6, false, false) };
					fVar3 = BUILTIN::VDIST(vVar0, vParam0);
					if (fVar3 > fVar4)
					{
					}
					else
					{
						fVar4 = fVar3;
						*uParam4 = { vVar0 };
						*iParam3 = iVar5;
					}
				}
				iVar5++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar5 = 0;
			while (iVar5 < 4)
			{
				if ((!func_202(iVar5, &Local_15, 128) || func_202(iVar5, &Local_15, 2)) || func_202(iVar5, &Local_15, 16))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar5 /*5*/]))
				{
				}
				else
				{
					iVar7 = NETWORK::NET_TO_OBJ(Local_15.f_257[iVar5 /*5*/]);
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar7, false, false) };
					fVar3 = BUILTIN::VDIST(vVar0, vParam0);
					if (fVar3 > fVar4)
					{
					}
					else
					{
						fVar4 = fVar3;
						*uParam4 = { vVar0 };
						*iParam3 = iVar5;
					}
				}
				iVar5++;
			}
			break;
		default:
			return false;
	}
	if (fVar4 == 0f)
	{
		return false;
	}
	return true;
}

float func_738(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_739(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { 0f, 4f, 0f };
	func_948(&vVar0, &(vVar0.f_1), ((360f * IntToFloat(iParam0)) / IntToFloat(iParam1)));
	return vVar0;
}

void func_740(int iParam0, var uParam1)
{
	uParam1->f_2 = iParam0;
}

bool func_741(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, 128))
		{
		}
		else if (func_113(uParam0->f_257[iVar0 /*5*/].f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
		}
		else if (!bParam2 && func_113(uParam0->f_257[iVar0 /*5*/].f_1, 2))
		{
		}
		else if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_742(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_15.f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
		{
		}
		else if (iParam0 != -1 && Local_15.f_16[iVar0 /*12*/].f_11 != iParam0)
		{
		}
		else if (bParam1)
		{
			if (Local_15.f_16[iVar0 /*12*/].f_3 == 25 || Local_15.f_16[iVar0 /*12*/].f_3 == 26)
			{
			}
			else if (Local_15.f_16[iVar0 /*12*/].f_3 == 17)
			{
			}
			else if (Local_15.f_16[iVar0 /*12*/].f_3 == 0)
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar0 /*12*/]))
			{
			}
			else
			{
				return true;
			}
			iVar0++;
			return false;
		}
	}
}

bool func_743(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3[iVar0 /*4*/]))
		{
		}
		else if (!func_113(uParam0->f_3[iVar0 /*4*/].f_1, iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_744(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 != -1 && uParam0->f_16[iVar0 /*12*/].f_11 != iParam1)
		{
		}
		else if (!func_1102(uParam0->f_16[iVar0 /*12*/].f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_745(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam2 != -1 && iParam2 == iVar0)
		{
		}
		else if (func_113(uParam0->f_3[iVar0 /*4*/].f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_746()
{
	if (func_55(&Local_15, 16777216))
	{
		return true;
	}
	else if (func_55(&Local_15, 33554432))
	{
		return true;
	}
	return false;
}

int func_747()
{
	if (func_55(&Local_15, 16777216))
	{
		return joaat("ON_PRIMARY_FINAL_DROPOFF");
	}
	else if (func_55(&Local_15, 33554432))
	{
		return joaat("ON_SECONDARY_FINAL_DROPOFF");
	}
	return 0;
}

void func_748(int iParam0)
{
	Local_15.f_299.f_1 = iParam0;
}

void func_749(int iParam0)
{
	func_122(&(Local_15.f_299.f_5), iParam0);
}

bool func_750(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (bParam1 && !func_113(Local_362[iVar0 /*52*/].f_41.f_1, 1))
		{
		}
		else if (func_113(Local_362[iVar0 /*52*/].f_41.f_1, iParam0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_751(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_614(2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Local_15.f_329[iVar0] = 255;
		iVar0++;
	}
	bVar1 = !func_1103(iParam0);
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (!func_257(1, iVar3))
			{
			}
			else
			{
				if (!bVar1)
				{
					if (!func_41(&(Local_362[iVar3 /*52*/]), 32))
					{
					}
					else
					{
						Jump @172; //curOff = 149
						if (!func_41(&(Local_362[iVar3 /*52*/]), 64))
						{
						}
						else
						{
							Local_15.f_329[iVar0] = iVar4;
							iVar0++;
							if (iVar0 >= 7)
							{
							}
							else
							{
								iVar2++;
							}
							func_749(2);
						}
					}
				}
			}
		}
	}
}

bool func_752(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (bParam1 && !func_113(Local_362[iVar0 /*52*/].f_41.f_1, 1))
		{
		}
		else if (Local_362[iVar0 /*52*/].f_41 == iParam0)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_753(int iParam0)
{
	var uVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = uVar0;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar4)))
		{
		}
		else
		{
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				uVar0[iVar3] = (uVar0[iVar3] || Local_362[iVar4 /*52*/].f_41.f_2[iVar3]);
				iVar3++;
			}
		}
		iVar4++;
	}
	iVar5 = 0;
	while (iVar5 < iParam0)
	{
		if (!MISC::_0x8F4F050054005C27(&uVar0, iVar5))
		{
			return false;
		}
		iVar5++;
	}
	return true;
}

void func_754(int iParam0)
{
	func_439(&(Local_15.f_299.f_5), iParam0);
}

void func_755()
{
	Local_15.f_299.f_2++;
}

void func_756(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("ATTACK"):
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, -1102018457);
					break;
			}
			break;
		case joaat("DEFEND"):
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 1428825552);
					break;
			}
			break;
		case joaat("DELIVER"):
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 1968287849);
					break;
			}
			break;
		case joaat("COLLECT"):
			switch (iParam1)
			{
				case 0:
					func_760(iParam0, 2039472637);
					break;
			}
			break;
	}
}

int func_757(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	return func_763(iParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

int func_758(int iParam0)
{
	return Global_1128574[iParam0 /*56*/];
}

int func_759(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_760(int iParam0, int iParam1)
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

var func_761(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_814(joaat("REWARD_STREAK"), func_813(iParam0)) };
	return func_512(Var0, -1);
}

int func_762(int iParam0)
{
	return func_1104(iParam0, joaat("PROMO_MODIFIER"), 1);
}

int func_763(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_760(iParam2, -372840566);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1105(uParam1, iParam0, Var3);
	return 1;
}

void func_764(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = iParam0;
	while (*iParam2 >= 32)
	{
		*iParam2 = (*iParam2 - 32);
		*iParam1++;
	}
}

void func_765(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1106(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1904087.f_496[iVar0]), iVar1);
}

void func_766(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1106(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1904087.f_496[iVar0]), iVar1);
}

bool func_767(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_484())
	{
		*iParam1 = 0;
		return true;
	}
	if (func_1107(iParam0, 2))
	{
		if (func_1107(iParam0, 3))
		{
			iVar3 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			if (func_1108(PLAYER::PLAYER_ID(), &uVar0, &iVar1, 1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
					return false;
				}
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
				{
					return false;
				}
				iVar2 = func_1109(iVar3, 1);
				if (iVar2 == iVar1)
				{
					return true;
				}
			}
		}
		else if (func_1111(func_1110(iParam0)))
		{
			return false;
		}
	}
	else
	{
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			if (func_1112(iVar4) != iParam0)
			{
			}
			else if (func_1113(iVar4) != 2)
			{
			}
			else
			{
				*iParam1 = iVar4;
				return true;
			}
			iVar4++;
		}
	}
	return false;
}

bool func_768(int iParam0, int iParam1)
{
	return (Global_1120070[iParam0 /*2115*/].f_19 && iParam1) != 0;
}

bool func_769(var uParam0, int iParam1, int iParam2)
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

bool func_770(var uParam0, int iParam1, int iParam2)
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

void func_771(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21689.f_260), iParam0))
		{
			SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_21689.f_260), iParam0);
		}
	}
	else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21689.f_260), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_21689.f_260), iParam0);
		func_1114(iParam0);
	}
}

void func_772(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28349), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28350), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_28348), iParam0);
}

void func_773(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21689.f_259), iParam0))
		{
			SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_21689.f_259), iParam0);
		}
	}
	else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21689.f_259), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_21689.f_259), iParam0);
		func_1114(iParam0);
	}
}

void func_774(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28348), iParam0);
}

char* func_775()
{
	return "Match_End_Timer";
}

char* func_776()
{
	return "RDRO_Countdown_Sounds";
}

char* func_777()
{
	return "Round_End_Timer";
}

char* func_778()
{
	return "10S";
}

char* func_779()
{
	return "Out_Of_Bounds";
}

char* func_780()
{
	return "321_Countdown";
}

char* func_781()
{
	return "HUD_MP_FREE_MODE";
}

char* func_782()
{
	return "target_spawn";
}

char* func_783()
{
	return "MP005_OBHELT_sounds";
}

int func_784(int iParam0, int iParam1)
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

void func_785(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1139381.f_3876.f_2[func_507(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_1115(iParam0);
	}
	Global_1139381.f_3876.f_2[func_507(iParam0, 1) /*4*/] = bParam1;
}

void func_786(int iParam0, int iParam1, struct<2> Param2, int iParam4)
{
	struct<28> Var0;

	if (!Global_1109804.f_18)
	{
		return;
	}
	if (!func_28(Param2))
	{
		return;
	}
	if (!func_478(iParam0))
	{
		return;
	}
	if (!func_480(iParam1))
	{
		return;
	}
	if (!func_1116(iParam4))
	{
		return;
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
	Var0.f_5 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = { Param2 };
	Var0.f_9 = iParam4;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_4 = 1;
	func_388(&Var0);
}

var func_787(int iParam0)
{
	return func_1117(iParam0);
}

int func_788()
{
	return Global_1902818;
}

void func_789(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_814(joaat("COOLDOWN_START"), func_813(iParam0)) };
	func_1118(Var0, iParam1);
}

void func_790(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_814(joaat("COOLDOWN_TYPE"), func_813(iParam0)) };
	func_1119(Var0, iParam1);
}

void func_791(int iParam0)
{
	if (func_769(&(Global_1109804.f_247.f_6), iParam0, 2))
	{
	}
}

void func_792(int iParam0)
{
	if (func_769(&(Global_1130367[PLAYER::PLAYER_ID() /*7*/]), iParam0, 2))
	{
	}
}

void func_793(int iParam0)
{
	func_1120(&(Global_1298378.f_156), iParam0);
}

void func_794(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_814(joaat("LAST_INTERACTED"), func_813(iParam0)) };
	func_1118(Var0, iParam1);
}

void func_795(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam1)
	{
		iVar0 = joaat("RIVAL_ATTEMPTS");
	}
	else
	{
		iVar0 = joaat("ATTEMPTS");
	}
	Var1 = { func_814(iVar0, func_813(iParam0)) };
	func_818(Var1);
}

int func_796(int iParam0)
{
	return func_1121(iParam0);
}

void func_797(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar35;

	if (!func_1122(*uParam0))
	{
		return;
	}
	vVar3 = 10;
	vVar3.f_1.f_1 = -1;
	vVar3.f_1.f_2 = -1;
	vVar3.f_1.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar35.f_1 = -1;
	func_1123(&vVar3);
	iVar0 = vVar3.f_31;
	while (iVar0 >= 0)
	{
		if (iVar0 == 0)
		{
		}
		else
		{
			if (iVar0 == 10)
			{
			}
			else
			{
				iVar1 = 0;
				if (!func_1122(vVar3[(iVar0 - 1) /*3*/]))
				{
				}
				else
				{
					vVar35.x = vVar3[(iVar0 - 1) /*3*/];
					vVar35.f_1 = vVar3[(iVar0 - 1) /*3*/].f_2;
					vVar35.f_2 = func_1124(vVar3[(iVar0 - 1) /*3*/].f_1);
					if (func_1125(uParam0, &vVar35))
					{
						iVar2 = func_1126((iVar0 - 1));
					}
					else
					{
						iVar1 = func_1126((iVar0 - 1));
						func_1127(iVar1, iVar0);
					}
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (iVar2 == 0)
	{
		iVar2 = func_1128(uParam0);
		if (iVar2 == 0)
		{
			return;
		}
	}
	func_1127(iVar2, 0);
}

void func_798(int iParam0, struct<2> Param1, bool bParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_430(iParam0);
	iVar2 = func_822();
	iVar3 = func_106(Param1);
	iVar5 = func_796(iVar0);
	if (bParam3)
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 1;
	}
	switch (iVar5)
	{
		case 15:
			if (func_821(iParam0, 4))
			{
				iVar4 = 1;
			}
			else
			{
				iVar4 = 0;
			}
			break;
		default:
			iVar4 = 0;
			break;
	}
	if (!func_821(iParam0, 8))
	{
		iVar2 = 0;
	}
	func_1129(iVar0, iVar1, &uParam4, iVar3, iVar2, iVar4);
	if (func_821(iParam0, 8))
	{
		if (iVar2 != 0)
		{
			func_1130(iParam0);
			func_1131(iParam0);
		}
	}
}

int func_799(int iParam0)
{
	switch (func_483(iParam0))
	{
		case joaat("BOUNTY"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_800(int iParam0, int iParam1)
{
	Global_1109804.f_260.f_5[iParam0] = (Global_1109804.f_260.f_5[iParam0] + iParam1);
}

void func_801(int iParam0)
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

void func_802(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam1)
	{
		iVar0 = joaat("RIVAL_ATTEMPTS");
		iVar1 = func_824(iParam0);
	}
	else
	{
		iVar0 = joaat("ATTEMPTS");
		iVar1 = func_825(iParam0);
	}
	Var2 = { func_814(iVar0, iVar1) };
	func_818(Var2);
}

void func_803()
{
	func_1132(4);
	func_828(1);
}

bool func_804(int iParam0, int iParam1)
{
	return (Global_1128574[iParam0 /*56*/].f_34 && iParam1) != 0;
}

void func_805(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_34 = (Global_1128574[iVar0 /*56*/].f_34 || iParam0);
}

struct<2> func_806(int iParam0)
{
	return Global_1210161.f_1[iParam0 /*10*/].f_4;
}

bool func_807(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_958(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_808(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_809(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_811(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_810(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_28(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_594(Param0) && !func_807(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_23(Param0) == 0)
	{
	}
	if ((bParam3 == 0 || bParam3 == 1) || bParam3 == 4)
	{
		if (func_958(Param0) == 3)
		{
			func_1133(1, -1706799532);
		}
		else if (func_958(Param0) == 4)
		{
			func_1133(0, -1706799532);
		}
	}
	if ((func_958(Param0) == 3 || func_958(Param0) == 1) || ((bParam5 && func_958(Param0) == 4) && STATS::_0x01F4D242765C6B24(func_23(Param0))))
	{
		if (bParam3 != -1)
		{
			func_1134(Param0, bParam3, bParam4, 255, 0);
		}
		else
		{
			func_1134(Param0, 2, bParam4, 255, 0);
		}
	}
	func_1135(Param0, 0);
	if (func_29(func_981(0), Param0))
	{
		func_1136(1);
		func_1137(0);
		func_1138(0);
		func_1139(1);
	}
	func_1140(Param0);
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_1141(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

bool func_811(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

struct<2> func_812(int iParam0)
{
	if (!func_476(iParam0))
	{
		return func_1142();
	}
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_5;
}

int func_813(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WAR_VET"):
			return joaat("GFH_WAR_VET");
		case joaat("FLACO_HERNANDEZ"):
			return joaat("GFH_FLACO_HERNANDEZ");
		case joaat("JOSIAH_TRELAWNY"):
			return joaat("GFH_JOSIAH_TRELAWNY");
		case joaat("JOE"):
			return joaat("GFH_JOE");
		case joaat("SEAN_MACQUIRE"):
			return joaat("GFH_SEAN_MACQUIRE");
		case joaat("BLACK_BELLE"):
			return joaat("GFH_BLACK_BELLE");
		case joaat("SADIE_ADLER"):
			return joaat("GFH_SADIE_ADLER");
		case joaat("MAMMA_WATSON"):
			return joaat("GFH_MAMMA_WATSON");
		case joaat("THOMAS_SKIFF_CAPTAIN"):
			return joaat("GFH_THOMAS_SKIFF_CAPTAIN");
		case joaat("OBEDIAH_HINTON"):
			return joaat("GFH_OBEDIAH_HINTON");
		case joaat("ANTHONY_FOREMAN"):
			return joaat("GFH_ANTHONY_FOREMAN");
		case joaat("LANGTON"):
			return joaat("GFH_LANGTON");
		case joaat("BONNIE"):
			return joaat("GFH_BONNIE");
		case joaat("SHERIFF_FREEMAN"):
			return joaat("GFH_SHERIFF_FREEMAN");
		case joaat("SHAKY"):
			return joaat("GFH_SHAKY");
		case joaat("WALLACE_TRAIN_CLERK"):
			return joaat("GFH_TRAIN_CLERK_WALLACE");
		case joaat("ALDEN"):
			return joaat("GFH_ALDEN");
		case joaat("HECTOR"):
			return joaat("GFH_HECTOR");
		case joaat("THE_BOY"):
			return joaat("GFH_THE_BOY");
		case joaat("ABERDEEN_PIG_FARMERS"):
			return joaat("GFH_ABERDEEN_PIG_FARMERS");
		case joaat("SAINT_DENIS_BOUNTY_BOARD"):
			return joaat("SAINT_DENIS_SHERIFF_BOUNTY_BOARD");
		case joaat("VALENTINE_BOUNTY_BOARD"):
			return joaat("VALENTINE_SHERIFF_BOUNTY_BOARD");
		case joaat("RHODES_BOUNTY_BOARD"):
			return joaat("RHODES_SHERIFF_BOUNTY_BOARD");
		case joaat("STRAWBERRY_BOUNTY_BOARD"):
			return joaat("STRAWBERRY_SHERIFF_BOUNTY_BOARD");
		case joaat("TUMBLEWEED_BOUNTY_BOARD"):
			return joaat("TUMBLEWEED_SHERIFF_BOUNTY_BOARD");
		case joaat("ANNESBURG_BOUNTY_BOARD"):
			return joaat("ANNESBURG_SHERIFF_BOUNTY_BOARD");
		case joaat("ARMADILLO_BOUNTY_BOARD"):
			return joaat("ARMADILLO_SHERIFF_BOUNTY_BOARD");
		case joaat("BENEDICT_POINT_BOUNTY_BOARD"):
			return joaat("BENEDICT_POINT_STATION_BOUNTY_BOARD");
		case joaat("BLACKWATER_BOUNTY_BOARD"):
			return joaat("BLACKWATER_SHERIFF_BOUNTY_BOARD");
		case joaat("EMERALD_RANCH_BOUNTY_BOARD"):
			return joaat("EMERALD_RANCH_STATION_BOUNTY_BOARD");
		case joaat("VAN_HORN_BOUNTY_BOARD"):
			return joaat("VAN_HORN_POST_OFFICE_BOUNTY_BOARD");
		case joaat("RIGGS_BOUNTY_BOARD"):
			return joaat("RIGGS_STATION_BOUNTY_BOARD");
		case joaat("WALLACE_BOUNTY_BOARD"):
			return joaat("WALLACE_STATION_BOUNTY_BOARD");
		case joaat("CRIPPS"):
			return joaat("GFH_CRIPPS");
		case joaat("MOONSHINER"):
			return joaat("GFH_MAGGIE");
		case joaat("MARCEL"):
			return joaat("GFH_MARCEL");
		case -465704507:
			return -1719093715;
		default:
			break;
	}
	return 0;
}

struct<2> func_814(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_815(struct<2> Param0, int iParam2)
{
	func_819(Param0, iParam2);
}

void func_816(struct<2> Param0, int iParam2)
{
	func_819(Param0, func_1143(iParam2));
}

void func_817(struct<2> Param0, int iParam2)
{
	func_819(Param0, iParam2);
}

void func_818(var uParam0, var uParam1)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, 1);
}

void func_819(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	if (!STATS::STAT_ID_SET_INT(&uParam0, iParam2, true))
	{
		return;
	}
}

void func_820(int iParam0)
{
	if (!func_1144(Global_1134390[Global_1296859 /*83*/].f_74, iParam0))
	{
		func_1145(&(Global_1134390[Global_1296859 /*83*/].f_74), iParam0);
		Global_1134349.f_32 = Global_1134390[Global_1296859 /*83*/].f_74;
	}
}

bool func_821(int iParam0, int iParam1)
{
	return func_1146(&(Global_1109804.f_5737[iParam0 /*5*/].f_2), iParam1);
}

int func_822()
{
	return joaat("GFH_MISSION_TYPE_COOLDOWN");
}

void func_823(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	int iVar7;

	Var2.f_1 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1->f_2))
	{
	}
	if (!func_1147(*iParam0))
	{
		return;
	}
	MISC::_COPY_MEMORY(&Var2, bParam2, 4);
	Var2.f_4 = iParam0->f_1;
	iVar7 = PLAYER::PLAYER_ID();
	iVar1 |= 8;
	switch (iParam1->f_1)
	{
		case 2:
			iVar1 |= 2;
			break;
		case 1:
			iVar1 |= 1;
			break;
		default:
			break;
	}
	switch (*iParam1)
	{
		case -1365731393:
		case joaat("NONE"):
			iVar1 |= 16;
			break;
		case -508253498:
			iVar1 |= 80;
			break;
		case 566295171:
			iVar1 |= 144;
			break;
		case -1881397389:
			iVar1 |= 272;
			break;
		case -356110550:
			iVar1 |= 528;
			break;
		case -406386912:
			iVar1 |= 1040;
			break;
		case 1759419243:
			iVar1 |= 2064;
			break;
		case 2062237572:
			iVar1 |= 4112;
			break;
		case 1923632299:
			iVar1 |= 32;
			break;
		case 475709606:
			iVar1 |= 2080;
			break;
		default:
			break;
	}
	if (GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar7)) == iVar7)
	{
		iVar1 |= 16384;
	}
	if (iVar7 == iParam1->f_2)
	{
		iVar1 |= 32768;
	}
	func_1148(*iParam0, iVar1, iParam3, &Var2);
	func_1149(*iParam0, iVar1);
	func_1150(*iParam0, iVar1, &Var2);
	switch (iParam1->f_1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = joaat("PRIMARY_END");
			break;
		case 2:
			iVar0 = 824391763;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1151(*iParam0, iVar0, iParam0->f_1);
	}
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STANDARD"):
			return joaat("GUN_FOR_HIRE_ENEMY");
		case joaat("SHERIFF"):
			return joaat("GUN_FOR_HIRE_ENEMY");
		case joaat("POST"):
			return joaat("GUN_FOR_HIRE_ENEMY");
		case joaat("TRAIN"):
			return joaat("GUN_FOR_HIRE_ENEMY");
		case joaat("TRADER"):
			return joaat("GUN_FOR_HIRE_TRADER_RIVAL");
		default:
			break;
	}
	return 0;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STANDARD"):
			return joaat("GUN_FOR_HIRE");
		case joaat("SHERIFF"):
			return joaat("GUN_FOR_HIRE");
		case joaat("POST"):
			return joaat("GUN_FOR_HIRE");
		case joaat("TRAIN"):
			return joaat("GUN_FOR_HIRE");
		case joaat("BOUNTY"):
			return joaat("GUN_FOR_HIRE_BOUNTY");
		case joaat("TRADER"):
			return joaat("GUN_FOR_HIRE_TRADER");
		case joaat("MOONSHINER"):
			return joaat("GUN_FOR_HIRE_MOONSHINER");
		case 1976336482:
			return -576897277;
		default:
			break;
	}
	return 0;
}

int func_826(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1152(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

void func_827(int iParam0)
{
	func_1153(iParam0);
}

void func_828(int iParam0)
{
	func_1154(iParam0);
}

void func_829(int iParam0)
{
	if (func_853(0, 0, 0, 0) || iParam0 > (Global_1296859.f_21 - Global_1109804.f_5729))
	{
		Global_1109804.f_5729 = Global_1296859.f_21;
		Global_1109804.f_5729.f_1 = iParam0;
	}
}

void func_830(int iParam0)
{
	if (func_769(&Global_1130592, iParam0, 1))
	{
	}
}

void func_831(int iParam0, int iParam1)
{
	Global_1130592.f_2[iParam0] = iParam1;
}

int func_832(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

var func_833(int iParam0)
{
	return Global_1297717[iParam0 /*4*/].f_2;
}

bool func_834(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;

	if (!func_1147(iParam0))
	{
		return false;
	}
	if (!func_1155(&Var0))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 16, 0, 0, 0))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 18, iParam1, 0, 0))
	{
		return false;
	}
	func_1157(Var0, uParam2, &uVar6, &uVar5);
	Var0.f_1 = uVar6;
	return func_1158(Var0, iParam1, uParam3, &uVar7, &uVar8);
}

int func_835(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (func_518(iParam1))
	{
		if (iVar0 == func_509(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_509(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_836(int iParam0)
{
	if (!func_518(iParam0))
	{
		return;
	}
	Global_1128574[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
}

bool func_837(int iParam0, int iParam1, int iParam2)
{
	return (Global_1128574[iParam0 /*56*/].f_1[iParam1] && iParam2) != 0;
}

void func_838()
{
	if (!func_1159())
	{
		return;
	}
	if (!func_28(Global_1051213))
	{
		return;
	}
	func_1160(&Global_1051213);
}

void func_839(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_1[iParam0] = (Global_1128574[iVar0 /*56*/].f_1[iParam0] - (Global_1128574[iVar0 /*56*/].f_1[iParam0] && iParam1));
}

bool func_840(int iParam0)
{
	return func_963(&Global_1130592, iParam0, 1);
}

int func_841(int iParam0)
{
	return Global_1130592.f_2[iParam0];
}

int func_842(int iParam0)
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

bool func_843()
{
	return Global_1109804.f_21.f_37;
}

int func_844()
{
	return Global_1109804.f_21.f_37.f_1;
}

void func_845(var uParam0, int iParam1, struct<2> Param2)
{
	struct<28> Var0;
	var uVar31;

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
	SCRIPTS::_0x31010318BA9897AC(&uVar31, PLAYER::PLAYER_ID());
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_6 = uParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 7;
	Var0.f_16 = joaat("IDLE_TIME_RUNNING_OUT_NEAR");
	Var0.f_7 = { Param2 };
	func_387(&Var0, uVar31);
}

void func_846(int iParam0)
{
	Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_48 = (Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_48 || iParam0);
}

int func_847(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2027.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_362[iParam0 /*52*/].f_2[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_848(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2027.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_362[iParam0 /*52*/].f_2.f_2[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_849(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (func_444(iVar0, 1))
	{
		return;
	}
	if (!func_445(iVar0))
	{
		return;
	}
	func_846(1);
}

void func_850(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (func_444(iVar0, 2))
	{
		return;
	}
	if (!func_445(iVar0))
	{
		return;
	}
	func_846(2);
}

int func_851(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_852(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (PED::_IS_PED_CARRYING(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	}
	else if (func_563(iParam0))
	{
		iVar0 = func_1161(iParam0, 6);
	}
	else
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !NETWORK::_0xB07D3185E11657A5(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::_0xF260AF6F43953316(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return 0;
	}
	if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
	{
		if (!ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			return 0;
		}
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((Local_15.f_16[iVar2 /*12*/] != iVar1 || Local_15.f_16[iVar2 /*12*/].f_2 != joaat("PASSENGER_VIP")) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar2 /*12*/]))
			{
			}
			else
			{
				*uParam1 = iVar2;
				*uParam2 = iVar0;
				return 1;
			}
			iVar2++;
		}
	}
	else if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
	{
		if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
		{
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if ((((Local_15.f_257[iVar3 /*5*/] != iVar1 || !func_202(iVar3, &Local_15, 128)) || func_202(iVar3, &Local_15, 2)) || func_202(iVar3, &Local_15, 16)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar3 /*5*/]))
			{
			}
			else
			{
				*uParam1 = iVar3;
				*uParam2 = iVar0;
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

bool func_853(float fParam0, bool bParam1, bool bParam2, float fParam3)
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

int func_854()
{
	return Global_1301323.f_150.f_4;
}

bool func_855(int iParam0)
{
	return (Global_19 && iParam0) != 0;
}

bool func_856()
{
	if (func_1162())
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		if (Global_1940258.f_38 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_34, 311);
	}
	else
	{
		return Global_1956200.f_1716[3];
	}
	return false;
}

var func_857(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_1163() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1164());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1164());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1164());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1165(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_1166(iVar2))
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
				if (iVar9 & 8192 != 0 && func_1167(iVar2) != 1)
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
					if (!func_1168(iVar10))
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

void func_858(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 52;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 43, &uParam1);
}

int func_859(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_1169(Param0))
	{
		return -1;
	}
	iVar1 = func_1170(Param0);
	if (iVar1 >= 0)
	{
		func_1171(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900806;
		Global_1900807[iVar0 /*2*/] = { Param0 };
		Global_1900838[iVar0 /*2*/] = { Var2 };
		func_1171(Param0, 1);
		Global_1900806++;
		if (Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_860(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_28(Param0))
	{
		return;
	}
	if (!func_807(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1172(Param0);
	}
	if (!func_28(func_981(0)))
	{
		func_1135(Param0, 3);
		func_1136(bParam3);
		func_1137(!bParam4);
		func_1173(Param0, -1);
		if (bParam2 && !func_1174(2))
		{
			func_1175(&Global_0, 1024);
		}
		func_1139(1);
	}
	else
	{
		func_1173(Param0, -1);
		func_1135(Param0, 4);
		func_1176(Param0, 0);
	}
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_1141(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1177(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

bool func_861(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iParam0 /*12*/].f_5))
	{
		return false;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(Local_15.f_16[iParam0 /*12*/].f_5);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	*iParam1 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iVar0, func_880(), false);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_862(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2027.f_634;
	}
	return MISC::_0x8F4F050054005C27(&(Local_362[iParam1 /*52*/].f_2.f_6), iParam0);
}

void func_863(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_2), iParam0);
}

void func_864(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_6), iParam0);
}

void func_865(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_12), iParam0);
}

int func_866(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	*iParam1 = func_910();
	*iParam2 = 255;
	if (!func_1178(iParam0, iParam1, 1))
	{
		return 0;
	}
	if (!PED::IS_PED_A_PLAYER(*iParam1))
	{
		return 1;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(*iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(*iParam2) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(*iParam2))
	{
		return 4;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam2);
	if (func_41(&(Local_362[iVar0 /*52*/]), 32))
	{
		return 2;
	}
	if (func_41(&(Local_362[iVar0 /*52*/]), 64))
	{
		return 3;
	}
	return 4;
}

bool func_867(bool bParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
		iVar0 = bParam0->f_620;
	}
	else
	{
		iVar0 = bParam0->f_619;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		return false;
	}
	if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar0, vParam1))
	{
		return false;
	}
	return true;
}

int func_868(int iParam0)
{
	return func_1179(iParam0, 0);
}

void func_869(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_2), iParam0);
}

void func_870(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_6), iParam0);
}

void func_871(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_12), iParam0);
}

char* func_872(int iParam0)
{
	if (PED::IS_PED_MALE(iParam0))
	{
		return "STRANGER_MALE";
	}
	return "STRANGER_FEMALE";
}

int func_873(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	var uVar2;

	if (Local_15.f_16[iParam0 /*12*/].f_2 == joaat("CHASER"))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Local_2027.f_4))
	{
		return 0;
	}
	if (func_1068(iParam0, &iVar1))
	{
		uVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), iVar1, 0);
	}
	else if (func_1069(iParam0, &uVar2))
	{
		uVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), PED::_0x62FDF4E678E40CC6(iParam1, uVar2), 0);
	}
	else if (!bParam2)
	{
		uVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), 0, 0);
	}
	return uVar0;
}

char* func_874()
{
	return "NET_CHU_ILO_TITLE_PASSENGER";
}

char* func_875()
{
	return "NET_CHU_ILO_TITLE_VIP";
}

char* func_876()
{
	return "NET_CHU_ILO_TITLE_ENEMY";
}

bool func_877(int iParam0, var uParam1)
{
	return uParam1->f_16[iParam0 /*12*/].f_3;
}

void func_878(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	vVar3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam2) };
	if (ENTITY::_0x6BFBDC46139C45AB(vVar0) && func_1180(&vVar0, 50, 10, 0, 0))
	{
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1, vVar0, vVar3, 2);
}

bool func_879(int iParam0, int iParam1)
{
	int iVar0;

	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar0 /*5*/]))
		{
		}
		else
		{
			*iParam1 = NETWORK::NET_TO_OBJ(Local_15.f_257[iVar0 /*5*/]);
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*iParam1, iParam0))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

char* func_880()
{
	return "BAG";
}

void func_881(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar3 = func_1181(vVar0, iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	if (!ENTITY::_0x8C03CD6B5E0E85E8(iParam0, iVar3))
	{
	}
}

bool func_882(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::_IS_PED_HOGTIED(iParam0) && PED::_0x3D9F958834AB9C30(iParam0) == iVar0)
	{
		return true;
	}
	if (PED::_IS_PED_LASSOED(iParam0) && PED::_0x0C31C51168E80365(iParam0) == iVar0)
	{
		return true;
	}
	if (((PED::_0x3BDFCF25B58B0415(iParam0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && PED::_0x0E99E3BF11BB6367(iVar0)) && PED::_0xD0B7AEB56229D317(iVar0) == iParam0)
	{
		return true;
	}
	return false;
}

bool func_883(int iParam0)
{
	if (!PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	if (PED::GET_PEDS_JACKER(iParam0) != PLAYER::PLAYER_PED_ID())
	{
		return false;
	}
	return true;
}

bool func_884(int iParam0)
{
	if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam0, 1000))
	{
		return true;
	}
	return false;
}

bool func_885(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;

	if (!func_1182(iParam0, 1, 1, 1, 0, 0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	fVar1 = func_1183(iVar0, iParam0);
	if (((fVar1 < 30f && PED::_0x06087579E7AA85A9(iParam0, iVar0, 180f, 30f, 180f, 30f)) && *uParam1 != 0) && uParam1->f_1 > 1000)
	{
		return true;
	}
	return false;
}

bool func_886(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_55(uParam0, 16))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_123(iVar0, 0, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!GANG::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iVar1))
			{
			}
			else if (!func_41(uParam1[iVar0 /*52*/], 2))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_887(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	if (fParam2 == 180f)
	{
		return func_1184(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar3 - vVar0) > 0f;
	}
	fVar6 = (fParam2 * 0.5f);
	fVar7 = func_1184(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), func_599(vVar3 - vVar0));
	return MISC::ACOS(fVar7) < fVar6;
}

bool func_888(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_764(iParam0, &iVar1, &iVar0);
	if (bParam3)
	{
		return MISC::IS_BIT_SET((uParam2[Local_2027.f_634 /*52*/])->f_16[iParam1 /*2*/][iVar1], iVar0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!MISC::IS_BIT_SET((uParam2[iVar2 /*52*/])->f_16[iParam1 /*2*/][iVar1], iVar0))
		{
		}
		else
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

void func_889(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iParam1))
	{
		return;
	}
	if (iParam2 == 2 && PED::_IS_PED_HOGTIED(iParam1))
	{
		return;
	}
	if (func_888(iParam0, iParam2, uParam3, bParam5))
	{
		return;
	}
	if (bParam7)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam1))
		{
			return;
		}
		if (func_923(iParam1, 0))
		{
			return;
		}
	}
	if (iParam4 == 0)
	{
		if (bParam6)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam1, 0, 1));
			iParam4 = PLAYER::GET_PLAYER_PED(iVar0);
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam4))
	{
		iParam4 = 0;
	}
	iVar1 = func_1185(iParam2);
	sVar2 = func_1186(iParam2, Local_15.f_16[iParam0 /*12*/].f_2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
	}
	else if (!func_1187(iParam1, sVar2, iVar1, iParam4, !bParam5, 0, 0, 1))
	{
		sVar2 = func_1188(iParam2, Local_15.f_16[iParam0 /*12*/].f_2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !func_1187(iParam1, sVar2, iVar1, iParam4, !bParam5, 0, 0, 1))
		{
			sVar2 = func_1189(iParam2, Local_15.f_16[iParam0 /*12*/].f_2);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !func_1187(iParam1, sVar2, iVar1, iParam4, !bParam5, 0, 0, 1))
			{
			}
		}
	}
	func_924(iParam0, iParam2, uParam3[Local_2027.f_634 /*52*/]);
}

void func_890(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_764(iParam0, &iVar1, &iVar0);
	MISC::CLEAR_BIT(&(uParam2->f_16[iParam1 /*2*/][iVar1]), iVar0);
}

bool func_891(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_15.f_16[iVar0 /*12*/].f_7 != iVar1)
		{
		}
		else if (func_201(iVar0, &Local_15, 32))
		{
		}
		else if (!bParam0)
		{
			if (func_201(iVar0, &Local_15, 65536) || func_201(iVar0, &Local_15, 131072))
			{
			}
			else if (!func_988(iVar0, 255))
			{
			}
			else
			{
				return true;
			}
			iVar0++;
			return false;
		}
	}
}

bool func_892(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_16[iParam0 /*12*/].f_11;
	if (iVar0 > 3 || iVar0 < 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iVar0 /*4*/]))
	{
		return false;
	}
	iVar1 = NETWORK::NET_TO_VEH(uParam1->f_3[iVar0 /*4*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	return true;
}

int func_893(int iParam0, var uParam1)
{
	return NETWORK::NET_TO_VEH(uParam1->f_3[uParam1->f_16[iParam0 /*12*/].f_11 /*4*/]);
}

int func_894(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_55(&Local_15, 16))
	{
		iVar1 = 524308;
	}
	else
	{
		iVar1 = 524419;
	}
	if (func_341(iParam0, uParam1, 2))
	{
		iVar0 = iVar1 | 524288 | 4 | 16 | 32 | 2097152 | 67108864;
	}
	else
	{
		iVar0 = iVar1 | 524288 | 4 | 16 | 32;
	}
	return iVar0;
}

void func_895(int iParam0)
{
	if (!func_933(iParam0))
	{
		return;
	}
	if (func_564(iParam0, 716706914))
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iParam0, 1, 1, 0, 0);
}

bool func_896(int iParam0, var uParam1, float fParam2)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return false;
	}
	iVar0 = (iParam0 - 1);
	if (iVar0 >= fParam2->f_10.f_7)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iVar0 /*4*/]))
	{
		return false;
	}
	if (func_341(iVar0, uParam1, 1))
	{
		return false;
	}
	return true;
}

float func_897(int iParam0, int iParam1, float fParam2)
{
	if (iParam0 < 0 || iParam0 >= fParam2->f_10.f_7)
	{
		return 7f;
	}
	if (iParam1 < 0 || iParam1 >= fParam2->f_10.f_7)
	{
		return 7f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(fParam2->f_29[iParam1 /*5*/].f_1, fParam2->f_29[iParam0 /*5*/].f_1, true);
}

int func_898(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6)
{
	int iVar0;

	if (func_1190(&iParam1, -1273030092, 1) == 2 || (Local_2027.f_182[iParam0 /*2*/].f_1 != iParam5 || Local_2027.f_182[iParam0 /*2*/] != fParam4))
	{
		if (func_588(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			return 0;
		}
		Local_2027.f_182[iParam0 /*2*/] = fParam4;
		Local_2027.f_182[iParam0 /*2*/].f_1 = iParam5;
		TASK::TASK_VEHICLE_ESCORT(iVar0, iParam2, iParam3, 3, fParam4, iParam5, fParam6, 20, 20f);
		return 1;
	}
	else if (!func_588(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam4);
	}
	return 0;
}

int func_899(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5)
{
	int iVar0;

	if (func_1190(&iParam1, -258271821, 1) == 2 || (fParam5->f_182[iParam0 /*2*/].f_1 != iParam4 || fParam5->f_182[iParam0 /*2*/] != fParam3))
	{
		if (func_588(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			return 0;
		}
		fParam5->f_182[iParam0 /*2*/] = fParam3;
		fParam5->f_182[iParam0 /*2*/].f_1 = iParam4;
		TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, iParam2, fParam3, iParam4);
		return 1;
	}
	else if (!func_588(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam3);
	}
	return 0;
}

int func_900(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8, float fParam9)
{
	int iVar0;

	if (func_1190(&iParam1, 1199744105, 1) == 2 || (fParam8->f_182[iParam0 /*2*/].f_1 != iParam7 || fParam8->f_182[iParam0 /*2*/] != fParam6))
	{
		if (func_588(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		fParam8->f_182[iParam0 /*2*/] = fParam6;
		fParam8->f_182[iParam0 /*2*/].f_1 = iParam7;
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iVar0, iParam2, vParam3, fParam6, iParam7, 6, fParam9, fParam9, 0);
		return 1;
	}
	else if (!func_588(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam6);
	}
	return 0;
}

int func_901(int iParam0)
{
	int iVar0;

	if (func_1190(&iParam0, -2117564886, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_COMBAT_HATED_TARGETS(iVar0, 3f);
		return 1;
	}
	return 0;
}

bool func_902(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = (iVar0 - 1);
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar2))
		{
		}
		else
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
			}
			else if (PED::IS_PED_DEAD_OR_DYING(iVar3, true))
			{
			}
			else if (!PED::IS_PED_A_PLAYER(iVar3))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_903(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = iParam2;
	iVar4 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_41(uParam1[iVar2 /*52*/], 2))
		{
		}
		else if (!func_123(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(iVar3), true))
			{
			}
			else
			{
				fVar0 = func_558(iParam0, func_940(iVar3), 1);
				if (fVar0 < fVar1)
				{
					iVar4 = iVar3;
					fVar1 = fVar0;
				}
			}
		}
		iVar2++;
	}
	if (iVar4 == 255)
	{
		return func_910();
	}
	return PLAYER::GET_PLAYER_PED(iVar4);
}

int func_904(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;

	func_898(iParam0, iParam1, iParam3, iParam4, fParam5, iParam6, fParam7);
	iVar0 = NETWORK::NET_TO_PED(iParam1);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_236(iVar1))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(iVar1))
	{
		return 0;
	}
	if (func_1191(iVar0, 0, 0, 0) != iVar1)
	{
		func_1071(iVar0, iVar1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	func_1192(iVar0, iParam2, 100f, 40, 1, -753768974);
	return 1;
}

int func_905(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;

	func_899(iParam0, iParam1, iParam3, fParam4, iParam5, fParam6);
	iVar0 = NETWORK::NET_TO_PED(iParam1);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_236(iVar1))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(iVar1))
	{
		return 0;
	}
	if (func_1191(iVar0, 0, 0, 0) != iVar1)
	{
		func_1071(iVar0, iVar1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	func_1192(iVar0, iParam2, 100f, 40, 1, -753768974);
	return 1;
}

int func_906(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8, float fParam9, int iParam10)
{
	int iVar0;
	int iVar1;

	func_900(iParam0, iParam1, iParam3, vParam4, fParam7, iParam8, fParam9, iParam10);
	iVar0 = NETWORK::NET_TO_PED(iParam1);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_236(iVar1))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(iVar1))
	{
		return 0;
	}
	if (func_1191(iVar0, 0, 0, 0) != iVar1)
	{
		func_1071(iVar0, iVar1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	func_1192(iVar0, iParam2, 100f, 40, 1, -753768974);
	return 1;
}

bool func_907(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (PED::IS_PED_A_PLAYER(iVar0) && !bParam2)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	return false;
}

bool func_908(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_1190(&iParam0, 518218985, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		iVar1 = 0;
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			iVar1 = PED::GET_MOUNT(iVar0);
		}
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, vParam1, iParam6, iParam5, fParam4, -1, iVar1);
		return true;
	}
	return false;
}

int func_909(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (func_1190(&iParam0, -1794415470, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam5)
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iParam1, iParam4, iParam2, fParam3, 9, 0);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iParam1, iParam4, iParam2, fParam3, 1, 0);
		}
		return 1;
	}
	return 0;
}

int func_910()
{
	return -1;
}

bool func_911(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_1190(&iParam0, -828834893, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
		if (func_1193(PED::_GET_SEAT_PED_IS_USING(iVar0), iVar1))
		{
			return false;
		}
		TASK::TASK_LEAVE_VEHICLE(iVar0, iVar1, iParam1, iParam2);
		return true;
	}
	return false;
}

int func_912(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_1190(&iParam0, 1345172471, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam2)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam1);
		TASK::TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(iVar0, 200f);
		return 1;
	}
	return 0;
}

int func_913(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(&Local_2027, &Var0, iParam0))
	{
		func_176(Var0, -1530266946, &uVar5, 0);
	}
	return uVar5;
}

int func_914(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (func_1190(&iParam0, -1098463898, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			return 0;
		}
		func_393(&vParam2, 1f);
		func_1194(iVar0, iParam1, vParam2, fParam5, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

int func_915(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;

	if (func_1190(&iParam0, -1098463898, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			return 0;
		}
		iVar1 = func_1195();
		func_393(&vParam1, 1f);
		func_1194(iVar0, iVar1, vParam1, fParam4, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

void func_916(int iParam0, var uParam1, int iParam2)
{
	if (func_877(iParam0, uParam1) == iParam2)
	{
		return;
	}
	uParam1->f_16[iParam0 /*12*/].f_3 = iParam2;
}

int func_917(int iParam0)
{
	int iVar0;

	if (func_1190(&iParam0, joaat("SCRIPT_TASK_TURN_TO_FACE_CLOSEST_PED"), 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		TASK::TASK_TURN_TO_FACE_CLOSEST_PED(iVar0, 40f, 50f, 2);
		return 1;
	}
	return 0;
}

bool func_918(int iParam0)
{
	char* sVar0;

	sVar0 = "Default_Panic";
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iParam0, sVar0);
	if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iParam0, sVar0))
	{
		return false;
	}
	PED::_0xAAB050DA48B57978(iParam0, sVar0, func_903(iParam0, &Local_362, 1120403456 /* Float: 100f */), -1, 4);
	return true;
}

bool func_919(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((uParam0[iVar0 /*52*/])->f_45 != iParam1)
		{
		}
		else if (!func_41(uParam0[iVar0 /*52*/], 32))
		{
		}
		else if (!func_123(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			*iParam2 = PLAYER::GET_PLAYER_PED(iVar1);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_920(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1190(&iParam0, -1519143300, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		TASK::TASK_HANDS_UP(iVar0, -1, iParam1, -1, false);
		return 1;
	}
	return 0;
}

void func_921(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_34;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_1145(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1120(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

bool func_922(int iParam0, float fParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	fVar1 = fParam1;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar2 = 0;
	while (iVar2 < 20)
	{
		if (Local_15.f_16[iVar2 /*12*/].f_2 != joaat("PASSENGER_VIP"))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar2 /*12*/]))
		{
		}
		else
		{
			iVar6 = NETWORK::NET_TO_PED(Local_15.f_16[iVar2 /*12*/]);
			if (iVar6 == iParam0)
			{
			}
			else
			{
				fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, false, false), vVar3);
				if (fVar0 < fVar1)
				{
					*iParam2 = iVar6;
					fVar1 = fVar0;
				}
			}
		}
		iVar2++;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam2);
}

bool func_923(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_15.f_16[iVar0 /*12*/].f_2 == -1088690539 || Local_15.f_16[iVar0 /*12*/].f_2 == 0)
		{
		}
		else if (iParam1 != 0 && Local_15.f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (!func_440(iVar0, &iVar4, 1, 0))
		{
		}
		else if (BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar4, false, false)) > 35f)
		{
		}
		else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar4))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_924(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_764(iParam0, &iVar1, &iVar0);
	MISC::SET_BIT(&(uParam2->f_16[iParam1 /*2*/][iVar1]), iVar0);
}

int func_925(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1190(&iParam0, 474215631, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		PED::_0x935CF6E42BAF7F4D(iVar0);
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iVar0, 0, 3));
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			TASK::TASK_COWER(iVar0, -1, PLAYER::GET_PLAYER_PED(iVar1), 0);
		}
		else
		{
			TASK::TASK_COWER(iVar0, -1, 0, 0);
		}
		return 1;
	}
	return 0;
}

bool func_926(int iParam0)
{
	int iVar0;

	if (PED::_IS_PED_CARRYING(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::_0xB07D3185E11657A5(iVar0)) && ENTITY::GET_ENTITY_MODEL(iVar0) == func_183())
		{
			return true;
		}
	}
	return false;
}

int func_927(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1190(&iParam0, -208384378, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (!PED::_IS_PED_CARRYING(iVar0))
		{
			return 0;
		}
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return 0;
		}
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar0, iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2f, 1);
		return 1;
	}
	return 0;
}

int func_928(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NET_TO_PED(iParam0);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_236(iVar1))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(iVar1))
	{
		return 0;
	}
	func_1192(iVar0, iParam1, 100f, 40, 1, -753768974);
	return 1;
}

int func_929(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = iParam1;
	iVar4 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_123(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			fVar0 = func_558(iParam0, func_940(iVar3), 1);
			if (fVar0 < fVar1)
			{
				iVar4 = iVar3;
				fVar1 = fVar0;
			}
		}
		iVar2++;
	}
	if (iVar4 == 255)
	{
		return func_910();
	}
	return PLAYER::GET_PLAYER_PED(iVar4);
}

int func_930(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_1190(&iParam0, 150319005, 1) == 2 && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(iParam0), iParam1, iParam2, iParam3, iParam4, iParam5);
		return 1;
	}
	return 0;
}

bool func_931(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (uParam2->f_16[iParam0 /*12*/].f_11 < 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/]))
	{
		return false;
	}
	iVar0 = func_893(iParam0, uParam2);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false, false))
	{
		return false;
	}
	if (!PED::DOES_GROUP_EXIST(uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/].f_3))
	{
		return false;
	}
	if (!PED::_0x0455546F23FF08E4(uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/].f_3))
	{
		return false;
	}
	if (!PED::IS_PED_GROUP_MEMBER(iParam1, uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/].f_3, 0))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam1))
	{
		return false;
	}
	if (!PED::IS_PED_IN_VEHICLE(PED::GET_PED_AS_GROUP_LEADER(uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/].f_3), iVar0, true))
	{
		return false;
	}
	return true;
}

int func_932(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (func_1190(&iParam0, 1056466932, 1) == 2 && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iVar0, iParam1, vParam2, fParam5, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
		return 1;
	}
	return 0;
}

bool func_933(int iParam0)
{
	int iVar0;

	iVar0 = func_1191(iParam0, 1, 0, 0);
	if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
	{
		return true;
	}
	if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		return true;
	}
	return false;
}

int func_934(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/]);
	if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, iParam1, 0, false))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false);
	if (iVar1 == iParam1)
	{
		return 1;
	}
	iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, 716706914, false);
	if (iVar2 == 1 || iVar2 == 0)
	{
		return 0;
	}
	if (func_1190(&(Local_15.f_16[iParam0 /*12*/]), 716706914, 0) != 2)
	{
		return 0;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam1, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iVar0, iParam2, 0, 0, 0);
	return 1;
}

void func_935(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_34;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_1145(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1120(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

bool func_936(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	*uParam2 = iParam3;
	*iParam1 = func_910();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_362[iVar0 /*52*/].f_47 == 0)
		{
		}
		else if (!func_123(iVar0, 1, 1))
		{
		}
		else
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, ENTITY::GET_ENTITY_COORDS(iVar6, false, false), true);
			if (fVar4 > *uParam2)
			{
			}
			else if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar6, 17))
			{
			}
			else
			{
				*uParam2 = fVar4;
				*iParam1 = iVar6;
			}
		}
		iVar0++;
	}
	if (*iParam1 == func_910())
	{
		return false;
	}
	return true;
}

int func_937(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1190(&iParam0, 1630799643, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			return 0;
		}
		TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, iParam1, -1, false, 1);
		return 1;
	}
	return 0;
}

int func_938(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1190(&iParam0, 355471868, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iParam1);
		return 1;
	}
	return 0;
}

bool func_939(vector3 vParam0, float fParam3, int iParam4, float fParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 255;
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar4 /*5*/]))
				{
				}
				else
				{
					iVar0 = NETWORK::NET_TO_ENT(Local_15.f_257[iVar4 /*5*/]);
					fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0);
					if (fVar1 > fParam3)
					{
					}
					else if (fVar1 < fParam5)
					{
					}
					else if (!func_1196(iVar0, iParam4))
					{
					}
					else if (bParam7)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(*iParam4))
						{
						}
						else
						{
							iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam4);
							if (!(bParam6 && func_41(&(Local_362[iVar3 /*52*/]), 64)) && !(!bParam6 && func_41(&(Local_362[iVar3 /*52*/]), 32)))
							{
							}
							else
							{
								fParam3 = fVar1;
								iVar2 = *iParam4;
							}
						}
						iVar4++;
						Jump @458; //curOff = 231
						iVar5 = 0;
						while (iVar5 < 20)
						{
							if (Local_15.f_16[iVar5 /*12*/].f_2 != joaat("PASSENGER_VIP"))
							{
							}
							else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar5 /*12*/]))
							{
							}
							else
							{
								iVar0 = NETWORK::NET_TO_ENT(Local_15.f_16[iVar5 /*12*/]);
								fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0);
								if (fVar1 > fParam3)
								{
								}
								else if (fVar1 < fParam5)
								{
								}
								else if (!func_1196(iVar0, iParam4))
								{
								}
								else if (bParam7)
								{
									if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(*iParam4))
									{
									}
									else
									{
										iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam4);
										if (!(bParam6 && func_41(&(Local_362[iVar3 /*52*/]), 64)) && !(!bParam6 && func_41(&(Local_362[iVar3 /*52*/]), 32)))
										{
										}
										else
										{
											fParam3 = fVar1;
											iVar2 = *iParam4;
										}
									}
									iVar5++;
									if (iVar2 != 255)
									{
										*iParam4 = iVar2;
										return true;
									}
									return false;
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

Vector3 func_940(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_941(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (func_1190(&iParam0, -1162159953, 1) != 2)
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			return false;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_231(iParam1), func_942(iParam1), iParam2, -1, 8f, -8f, 0, 0f, false, false, -1f, 0, 0, -1f);
	}
	else
	{
		if (func_1190(&iParam0, -2017877118, 1) != 2)
		{
			return false;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_PLAY_ANIM(iVar0, func_231(iParam1), func_942(iParam1), 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
	}
	return true;
}

char* func_942(int iParam0)
{
	switch (iParam0)
	{
		case 1711865203:
			return "wave_idle_a";
		default:
			break;
	}
	return "";
}

bool func_943(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	iVar0 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam0, 0, 3);
	if (iVar0 == 255)
	{
		return false;
	}
	*iParam2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam2))
	{
		return false;
	}
	if (BUILTIN::VDIST(func_940(*iParam2), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) > fParam1)
	{
		return false;
	}
	return true;
}

void func_944(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

bool func_945(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = Local_15.f_16[iParam0 /*12*/].f_11;
	if (!func_1197(iParam0))
	{
		return false;
	}
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			*iParam1 = NETWORK::NET_TO_ENT(Local_15.f_16[iVar0 /*12*/]);
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			*iParam1 = NETWORK::NET_TO_ENT(Local_15.f_257[iVar0 /*5*/]);
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	return true;
}

int func_946(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (func_1190(&iParam0, 1120685857, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam6)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam5);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, vParam1, fParam4, 0, 0);
		return 1;
	}
	return 0;
}

int func_947(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (func_1190(&iParam0, 518218985, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		iVar1 = 0;
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			iVar1 = PED::GET_MOUNT(iVar0);
		}
		TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iParam1, iParam2, iParam4, fParam3, -1, iVar1);
		return 1;
	}
	return 0;
}

void func_948(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *fParam0;
	fVar1 = *fParam1;
	*fParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*fParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

void func_949(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&(Local_362[Local_2027.f_634 /*52*/].f_2), iParam0);
}

void func_950(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_4), iParam0);
}

void func_951(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_10), iParam0);
}

bool func_952(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2027.f_634;
	}
	return MISC::_0x8F4F050054005C27(&(Local_362[iParam1 /*52*/].f_2.f_8), iParam0);
}

void func_953(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_8), iParam0);
}

void func_954(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_362[Local_2027.f_634 /*52*/].f_2), iParam0);
}

void func_955(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_4), iParam0);
}

bool func_956(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2027.f_634;
	}
	return MISC::_0x8F4F050054005C27(&(Local_362[iParam1 /*52*/].f_2.f_4), iParam0);
}

void func_957(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_362[Local_2027.f_634 /*52*/].f_2.f_10), iParam0);
}

int func_958(struct<2> Param0)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return -1;
	}
	iVar0 = func_1198(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

bool func_959(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, var uParam5, int iParam6)
{
	struct<2> Var0;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	var uVar36;
	var uVar37;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam6, &Var0, 32))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0) || !ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return false;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar32))
	{
		return false;
	}
	iVar33 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar32);
	if (iVar33 != PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_PED(Var0))
		{
			iVar34 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
			if (PED::IS_PED_A_PLAYER(iVar34))
			{
				iVar35 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar34);
				if (SCRIPTS::_0x72B2E00C9BAC6789(uParam0, iVar35) && (!bParam3 || func_596(uParam0, Var0, fParam4)))
				{
					return true;
				}
			}
		}
	}
	if (bParam2)
	{
		if (func_1199(uParam0, &uVar37, Var0, &uVar36))
		{
			if (func_1200(&Var0))
			{
				*uParam5 = uVar37;
			}
			return true;
		}
	}
	return false;
}

float func_960(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_961(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_1201();
	if (func_1202(iVar0))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_1203(vParam0, iParam3);
}

int func_962(vector3 vParam0)
{
	return func_1204(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_963(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_964()
{
	return Global_1102219.f_3672;
}

void func_965(float fParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

void func_966(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

bool func_967(int iParam0)
{
	vector3 vVar0;

	if (!func_33(1))
	{
		return false;
	}
	if (func_1103(iParam0))
	{
		if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32))
		{
			return false;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
		{
			return false;
		}
		vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619) };
	}
	else
	{
		if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64))
		{
			return false;
		}
		if (Local_15.f_328 == -1)
		{
			return false;
		}
		if (Local_2027.f_10 == joaat("COACH_HOLDUP_ROBBERY"))
		{
			if (PLAYER::PLAYER_ID() != Local_15.f_257[Local_15.f_328 /*5*/].f_3 && GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != Local_15.f_257[Local_15.f_328 /*5*/].f_4)
			{
				return false;
			}
		}
		else if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
		{
			if (PLAYER::PLAYER_ID() != Local_15.f_16[Local_15.f_328 /*12*/].f_7 && GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != Local_15.f_16[Local_15.f_328 /*12*/].f_6)
			{
				return false;
			}
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_620))
		{
			return false;
		}
		vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_620) };
	}
	if (BUILTIN::VDIST(Global_35, vVar0) > 100f)
	{
		return false;
	}
	return true;
}

bool func_968()
{
	char* sVar0;

	sVar0 = func_226();
	if (!CAM::_0x595550376B7EA230(sVar0))
	{
		CAM::_0x1B3C2D961F5FC0E1(sVar0);
	}
	if (CAM::_0xAA235E2F2C09E952(sVar0))
	{
		func_126(8388608);
		return true;
	}
	return false;
}

int func_969()
{
	int iVar0;

	if (func_257(4096, 255))
	{
		return 1;
	}
	iVar0 = -1429099402;
	PED::_0xF7EA250B9A919E03(iVar0, Global_34);
	if (!PED::_0x854BC9B1A1CCD034(iVar0, Global_34))
	{
		return 0;
	}
	func_261(4096);
	return 1;
}

bool func_970(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	int iVar30;

	if (!func_292(&Local_2027, &Var10) || !func_312(&Var10, 556233122, iParam0, 0))
	{
		return true;
	}
	iVar15 = func_499(iParam0);
	iVar23 = PLAYER::PLAYER_ID();
	if (!func_1205(&iVar24))
	{
		return true;
	}
	bVar25 = func_1206(iVar23);
	bVar26 = (bVar25 && iVar24 == iVar23);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_312(&Var0, -110495140, iVar17, 0))
		{
		}
		else
		{
			iVar20 = func_500(iParam0, iVar17);
			iVar16 = 0;
			while (iVar16 < iVar20)
			{
				Var5 = { Var0 };
				if ((!func_312(&Var5, 938546485, iVar16, 0) || !func_299(Var5, 957840570, &iVar18, 0)) || !func_176(Var5, -537439784, &iVar19, 0))
				{
				}
				else
				{
					iVar21 = iVar19;
					if (!func_501(iVar21, iVar18, &iVar22))
					{
					}
					else
					{
						func_1207(iVar22, iVar21, iVar23, bVar25, bVar26, &bVar27, iVar17, iVar16);
					}
				}
				iVar16++;
			}
		}
		iVar17++;
	}
	bVar28 = !func_1103(iParam0);
	switch (func_199(&Local_2027))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar29 = 0;
			while (iVar29 < 20)
			{
				if ((!func_201(iVar29, &Local_15, 1024) || !func_201(iVar29, &Local_15, 32)) || func_201(iVar29, &Local_15, 64) != bVar28)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar29 /*12*/]))
				{
				}
				else
				{
					func_1207(NETWORK::NET_TO_ENT(Local_15.f_16[iVar29 /*12*/]), 0, iVar23, bVar25, bVar26, &bVar27, -1, -1);
				}
				iVar29++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
		default:
			iVar30 = 0;
			while (iVar30 < 4)
			{
				if ((!func_202(iVar30, &Local_15, 128) || !func_202(iVar30, &Local_15, 2)) || func_202(iVar30, &Local_15, 4) != bVar28)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar30 /*5*/]))
				{
				}
				else
				{
					func_1207(NETWORK::NET_TO_ENT(Local_15.f_257[iVar30 /*5*/]), 0, iVar23, bVar25, bVar26, &bVar27, -1, -1);
				}
				iVar30++;
			}
			break;
	}
	return !bVar27;
}

void func_971(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!func_292(&Local_2027, &Var10) || !func_312(&Var10, 556233122, iParam0, 0))
	{
		return;
	}
	iVar15 = func_499(iParam0);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_312(&Var0, -110495140, iVar17, 0))
		{
			return;
		}
		iVar20 = func_500(iParam0, iVar17);
		iVar16 = 0;
		while (iVar16 < iVar20)
		{
			Var5 = { Var0 };
			if ((!func_312(&Var5, 938546485, iVar16, 0) || !func_299(Var5, 957840570, &iVar18, 0)) || !func_176(Var5, -537439784, &uVar19, 0))
			{
			}
			else
			{
				iVar21 = uVar19;
				if (!func_501(iVar21, iVar18, &iVar22))
				{
				}
				else
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar22, "RDRO_Scripted_Cutscene_Focus_Entity_Group", 0f);
				}
			}
			iVar16++;
		}
		iVar17++;
	}
}

void func_972()
{
	if (func_257(8, 255))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::_0x4B05B97BA46F419D(0);
		NETWORK::_0x89D803CD48622150(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, func_502(), true);
		func_261(8);
	}
	NETWORK::_0xDC6AD5C046F33AB4(1, 0);
}

char* func_973()
{
	return "ShotSphere";
}

char* func_974(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CAM_NEAR35MM"):
			return "Cam_Near35mm";
		case joaat("CAM_NEAR50MM"):
			return "Cam_Near50mm";
		case joaat("CAM_MED35MM"):
			return "Cam_Med35mm";
		case joaat("CAM_MED50MM"):
			return "Cam_Med50mm";
		case joaat("CAM_FAR35M"):
			return "Cam_Far35m";
		case joaat("CAM_FAR50MM"):
			return "Cam_Far50mm";
		case 0:
			return "None";
		default:
			break;
	}
	return "";
}

bool func_975(struct<5> Param0, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	vector3 vVar26;
	float fVar29;

	if (!func_312(&Param0, 938546485, iParam5, 0))
	{
		return true;
	}
	bVar10 = func_313(Param0, 644136394, &vVar0, 0);
	bVar11 = func_310(Param0, 1471513692, &fVar9, 0);
	bVar12 = func_313(Param0, -2119193689, &vVar3, 0);
	bVar13 = func_313(Param0, -2117302676, &vVar6, 0);
	func_176(Param0, -537439784, &iVar14, 0);
	iVar15 = iVar14;
	iVar16 = -1;
	func_299(Param0, 957840570, &iVar16, 0);
	bVar17 = func_176(Param0, -1530266946, &iVar14, 0);
	iVar18 = iVar14;
	if (func_176(Param0, 999526519, &iVar14, 0))
	{
		iVar19 = iVar14;
	}
	bVar20 = iVar15 == joaat("PLAYER");
	if (bVar20)
	{
		bVar17 = false;
	}
	if ((((!bVar10 && !bVar12) && !bVar11) && !bVar17) && !bVar20)
	{
		return true;
	}
	if (!func_501(iVar15, iVar16, &iVar21))
	{
		if (func_1208(iVar15))
		{
			if (!bVar10)
			{
				return true;
			}
			if (!func_1209(iParam5, iVar16, iVar15, &iVar21, vVar0, fVar9))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar21))
	{
		return false;
	}
	if (bVar10)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar21))
		{
			iVar22 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar21);
			if (iVar22 == PLAYER::PLAYER_PED_ID())
			{
				func_1211(func_1210(iVar19), 0);
			}
			if (AITRANSPORT::_0xDC44F405A6B98D03(iVar22, 0))
			{
				AITRANSPORT::_0x8886D83A430537FD(iVar22, 0);
			}
		}
		ENTITY::SET_ENTITY_COORDS(iVar21, vVar0, false, false, true, true);
	}
	if (bVar11)
	{
		ENTITY::SET_ENTITY_HEADING(iVar21, fVar9);
	}
	else if (bVar12)
	{
		ENTITY::SET_ENTITY_ROTATION(iVar21, vVar3, 2, false);
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar21))
	{
		bVar24 = true;
		iVar23 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar21);
	}
	if (bVar17 && bVar24)
	{
		if (((!PED::IS_PED_DEAD_OR_DYING(iVar23, true) && !PED::IS_PED_INJURED(iVar23)) && !PED::IS_PED_RAGDOLL(iVar23)) && !PED::_0xB655DB7582AEC805(iVar23))
		{
			if (PED::IS_PED_A_PLAYER(iVar23))
			{
				iVar25 = func_625(Local_15.f_299, Local_15.f_299.f_2);
			}
			else
			{
				iVar25 = 0;
			}
			WEAPON::_HIDE_PED_WEAPONS(iVar23, 2, true);
			if (func_313(Param0, 82347414, &vVar26, 0))
			{
				func_310(Param0, -1580911258, &fVar29, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(iVar23, iVar18, vVar26, fVar29, iVar25, true, false, 0, -1f, false);
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar23, iVar18, iVar25, false, 0, -1f, false);
			}
		}
	}
	else if ((bVar20 && bVar24) && iVar23 == Global_34)
	{
		if (((!PED::IS_PED_DEAD_OR_DYING(iVar23, true) && !PED::IS_PED_INJURED(iVar23)) && !PED::IS_PED_RAGDOLL(iVar23)) && !PED::_0xB655DB7582AEC805(iVar23))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iVar23, "FreeRoamSpawn", true, 20);
		}
	}
	if ((bVar24 && bVar13) && func_1212(iVar23))
	{
		PHYSICS::_0x06AADE17334F7A40(iVar23, vVar6);
		TASK::_TASK_START_SCENARIO_IN_PLACE(iVar23, joaat("PROP_HITCHINGTREE"), -1, false, 0, -1f, false);
	}
	return true;
}

void func_976(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	struct<5> Var8;
	bool bVar13;
	var uVar14;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;

	bVar6 = true;
	if (func_1103(iParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
		{
			vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619) };
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_620))
	{
		vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_620) };
	}
	if (((func_292(&Local_2027, &Var8) && func_312(&Var8, 556233122, iParam0, 0)) && func_312(&Var8, -110495140, iParam1, 0)) && func_312(&Var8, -556151360, 0, 0))
	{
		if (func_177(Var8, 1234220482, &bVar13, 0) && bVar13)
		{
			bVar6 = false;
		}
		else if (func_177(Var8, -19593823, &bVar13, 0) && bVar13)
		{
			bVar6 = false;
		}
		if (bVar6 && func_313(Var8, 644136394, &uVar14, 0))
		{
			bVar6 = false;
		}
		if (bVar6)
		{
			if (func_313(Var8, -252450326, &vVar17, 0))
			{
				vVar0 = { vVar17 };
			}
			if (func_313(Var8, -727548384, &vVar20, 0))
			{
				vVar0 = { vVar0 + vVar20 };
			}
			if (func_313(Var8, -36224614, &vVar20, 0))
			{
				vVar3 = { vVar3 + vVar20 };
			}
			if (func_176(Var8, -1456038853, &uVar23, 0))
			{
				iVar7 = uVar23;
			}
		}
	}
	if (bVar6 && iVar7 == 0)
	{
		bVar6 = false;
	}
	if (bVar6)
	{
		func_261(1024);
		Local_2027.f_537.f_2 = iVar7;
		func_1213(vVar0, vVar3);
	}
	else
	{
		func_498(1024);
	}
}

Vector3 func_977(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

int func_978(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_979(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = !func_1103(iParam0);
	switch (func_199(&Local_2027))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_201(iVar1, &Local_15, 1024))
				{
				}
				else if (!func_201(iVar1, &Local_15, 32))
				{
				}
				else if (func_201(iVar1, &Local_15, 64) != bVar0)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar1 /*12*/]))
				{
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_16[iVar1 /*12*/]))
				{
				}
				else
				{
					iVar2 = NETWORK::NET_TO_PED(Local_15.f_16[iVar1 /*12*/]);
					PED::DELETE_PED(&iVar2);
				}
				iVar1++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
		default:
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (!func_202(iVar3, &Local_15, 128))
				{
				}
				else if (!func_202(iVar3, &Local_15, 2))
				{
				}
				else if (func_202(iVar3, &Local_15, 4) != bVar0)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar3 /*5*/]))
				{
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_257[iVar3 /*5*/]))
				{
				}
				else
				{
					iVar4 = NETWORK::NET_TO_OBJ(Local_15.f_257[iVar3 /*5*/]);
					OBJECT::DELETE_OBJECT(&iVar4);
				}
				iVar3++;
			}
			break;
	}
}

bool func_980(struct<5> Param0, int iParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!func_312(&Param0, 938546485, iParam5, 0))
	{
		return true;
	}
	func_177(Param0, 725091599, &bVar0, 0);
	if (!bVar0)
	{
		return true;
	}
	func_176(Param0, -537439784, &iVar1, 0);
	iVar2 = iVar1;
	iVar3 = -1;
	func_299(Param0, 957840570, &iVar3, 0);
	if (iVar3 < 0)
	{
		return true;
	}
	switch (iVar2)
	{
		case joaat("PROP"):
		case joaat("VEHICLE"):
		case joaat("PED"):
			if (!func_501(iVar2, iVar3, &iVar4))
			{
				return true;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = NETWORK::NET_TO_PED(Local_15.f_16[iVar3 /*12*/]);
				PED::DELETE_PED(&iVar5);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar4))
			{
				iVar6 = NETWORK::NET_TO_VEH(Local_15.f_3[iVar3 /*4*/]);
				VEHICLE::DELETE_VEHICLE(&iVar6);
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar4))
			{
				iVar7 = NETWORK::NET_TO_OBJ(Local_15.f_278[iVar3 /*2*/]);
				OBJECT::DELETE_OBJECT(&iVar7);
			}
			break;
		case joaat("PLAYER"):
			return true;
		case joaat("PLAYER_HORSE"):
			return true;
		default:
			return true;
	}
	return true;
}

struct<2> func_981(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_982(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	*bParam6 = 0;
	*bParam4 = 0;
	bVar0 = func_41(uParam2[Local_2027.f_634 /*52*/], 32);
	bVar1 = func_41(uParam2[Local_2027.f_634 /*52*/], 64);
	if (!bVar0 && !bVar1)
	{
		if (!func_536(1))
		{
			return false;
		}
	}
	else if (!func_534())
	{
		return false;
	}
	if (bVar0 && !func_227(4))
	{
		return false;
	}
	if (func_271(iParam0, 8388608) && !func_271(iParam0, 16777216))
	{
		return false;
	}
	if (func_55(uParam1, 32))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		return false;
	}
	iVar2 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		if (!func_706(uParam1->f_16[iParam0 /*12*/].f_2) || !PED::GET_PED_CONFIG_FLAG(iVar2, 11, false))
		{
			return false;
		}
		bVar4 = true;
	}
	*bParam5 = 0;
	switch (uParam1->f_16[iParam0 /*12*/].f_2)
	{
		case joaat("CHASER"):
			if (!bVar0 && !func_41(uParam2[Local_2027.f_634 /*52*/], 2))
			{
				return false;
			}
			if (Local_15.f_16[iParam0 /*12*/].f_3 == 45)
			{
				*bParam4 = 1;
			}
			if (!*bParam4 && BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) > 140f)
			{
				*bParam4 = 1;
			}
			break;
		case joaat("STATIONARY_ESCORT"):
		case joaat("PASSENGER_ESCORT"):
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			*bParam5 = (func_33(256) && !func_55(&Local_15, 16));
			if ((!func_41(uParam2[Local_2027.f_634 /*52*/], 2) && fParam3->f_202.f_60 != 5) && fParam3->f_202.f_60 != 6)
			{
				return false;
			}
			break;
		case joaat("DROPOFF_GUARD"):
			if (!bVar0 && !bVar1)
			{
				return false;
			}
			else if (bVar0 && func_201(iParam0, &Local_15, 2048))
			{
				return false;
			}
			else if (bVar1 && !func_201(iParam0, &Local_15, 2048))
			{
				return false;
			}
			if (BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) > 50f)
			{
				*bParam4 = 1;
			}
			return true;
		case joaat("PASSENGER_VIP"):
			if (fParam3->f_10 != joaat("COACH_HOLDUP_KIDNAP"))
			{
				return false;
			}
			if ((func_201(iParam0, &Local_15, 32) || func_201(iParam0, &Local_15, 65536)) || func_201(iParam0, &Local_15, 131072))
			{
				*bParam6 = 1;
				return true;
			}
			if (func_1178(iVar2, &iVar3, 0) && iVar3 == PLAYER::PLAYER_PED_ID())
			{
				return false;
			}
			if (func_862(iParam0, 255))
			{
				return false;
			}
			switch (fParam3->f_202.f_60)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return false;
				default:
					break;
			}
			if ((((!bVar0 && !bVar1) && !func_227(128)) && !bVar4) && PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return false;
			}
			return true;
		default:
			return false;
	}
	switch (fParam3->f_202.f_60)
	{
		case 1:
		case 3:
			if (!bVar4 && PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_983(int iParam0, var uParam1, var uParam2, float fParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = MAP::DOES_BLIP_EXIST(fParam3->f_202[iParam0]);
	if (bVar0)
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	bVar2 = func_41(uParam2[Local_2027.f_634 /*52*/], 64);
	bVar3 = (func_33(256) && !func_55(&Local_15, 16));
	switch (uParam1->f_16[iParam0 /*12*/].f_2)
	{
		case joaat("DROPOFF_GUARD"):
			if (bVar2 != func_201(iParam0, uParam1, 2048))
			{
				func_1214(iParam0, &(fParam3->f_202[iParam0]), iVar1, 0, 0);
			}
			else
			{
				func_1215(&(fParam3->f_202[iParam0]), iVar1);
			}
			break;
		case joaat("PASSENGER_VIP"):
			if (func_199(&Local_2027) == joaat("COACH_HOLDUP_KIDNAP"))
			{
				func_1216(iParam0, &(fParam3->f_202[iParam0]), iVar1);
			}
			break;
		default:
			if (func_201(iParam0, &Local_15, 32768))
			{
				func_1214(iParam0, &(fParam3->f_202[iParam0]), iVar1, 1, 0);
			}
			else
			{
				func_1214(iParam0, &(fParam3->f_202[iParam0]), iVar1, 0, bVar3);
			}
			break;
	}
}

void func_984(int iParam0, bool bParam1)
{
	if (bParam1 && !func_271(iParam0, 2048))
	{
		func_272(iParam0, 2048);
		MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], 197772266);
	}
	else if (!bParam1 && func_271(iParam0, 2048))
	{
		func_441(iParam0, 2048);
		MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], 197772266);
	}
}

void func_985(int iParam0, bool bParam1)
{
	if (bParam1 && !func_271(iParam0, 4194304))
	{
		func_272(iParam0, 4194304);
		MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], -1186550032);
	}
	else if (!bParam1 && func_271(iParam0, 4194304))
	{
		func_441(iParam0, 4194304);
		MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], -1186550032);
	}
}

void func_986(int iParam0, bool bParam1)
{
	if (!bParam1 && func_271(iParam0, 1024))
	{
		func_441(iParam0, 1024);
		MAP::SET_BLIP_SPRITE(Local_2027.f_202[iParam0], joaat("BLIP_AMBIENT_VIP"), false);
	}
	else if (bParam1 && !func_271(iParam0, 1024))
	{
		func_272(iParam0, 1024);
		MAP::SET_BLIP_SPRITE(Local_2027.f_202[iParam0], func_1000(3), false);
	}
}

void func_987(int iParam0)
{
	if (func_271(iParam0, 512))
	{
		return;
	}
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], 453356795);
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], -1636811933);
	MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], 1938496773);
	func_441(iParam0, 256);
	func_441(iParam0, 128);
	func_272(iParam0, 512);
}

bool func_988(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2027.f_634;
	}
	return MISC::_0x8F4F050054005C27(&(Local_362[iParam1 /*52*/].f_2.f_2), iParam0);
}

void func_989(int iParam0)
{
	if (func_271(iParam0, 256))
	{
		return;
	}
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], -1636811933);
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], 1938496773);
	MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], 453356795);
	func_441(iParam0, 128);
	func_441(iParam0, 512);
	func_272(iParam0, 256);
}

bool func_990(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		*iParam3 = iParam0;
		if (GANG::_0x3F59FE6F37869576(iParam0, PLAYER::PLAYER_ID()))
		{
			*bParam2 = 0;
			return true;
		}
		else
		{
			*bParam2 = 1;
			return false;
		}
	}
	if (func_1178(iParam1, &iVar0, 1))
	{
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			*bParam2 = 0;
		}
		*iParam3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam3))
		{
			*bParam2 = 0;
			return false;
		}
		if (!GANG::_0x3F59FE6F37869576(*iParam3, PLAYER::PLAYER_ID()))
		{
			*bParam2 = 1;
			return false;
		}
		*bParam2 = 0;
		return true;
	}
	*bParam2 = 0;
	return false;
}

void func_991(int iParam0)
{
	if (func_271(iParam0, 128))
	{
		return;
	}
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], 453356795);
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], 1938496773);
	MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], -1636811933);
	func_441(iParam0, 256);
	func_441(iParam0, 512);
	func_272(iParam0, 128);
}

void func_992(int iParam0, int iParam1)
{
	if (Local_2027.f_10 != joaat("COACH_HOLDUP_KIDNAP"))
	{
		return;
	}
	if (Local_2027.f_202.f_30[iParam0] == iParam1)
	{
		return;
	}
	if (iParam1 == 255)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2027.f_202[iParam0], func_1217());
		MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], 723793771);
	}
	else
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Local_2027.f_202[iParam0], func_1218(func_1217(), iParam1));
		MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], 723793771);
	}
	Local_2027.f_202.f_30[iParam0] = iParam1;
}

void func_993(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_271(iParam0, 131072))
	{
		func_272(iParam0, 131072);
		if (bParam2)
		{
			MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], 1550066118);
		}
		else
		{
			MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], -662251075);
		}
	}
	else if (!bParam1 && func_271(iParam0, 131072))
	{
		func_441(iParam0, 131072);
		MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], 1550066118);
		MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], -662251075);
	}
}

void func_994(int iParam0, bool bParam1)
{
	if (bParam1 && func_271(iParam0, 4096))
	{
		func_441(iParam0, 4096);
		if (func_271(iParam0, 131072))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], 1550066118);
			MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], -662251075);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202[iParam0], joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
		}
	}
	else if (!bParam1 && !func_271(iParam0, 4096))
	{
		func_272(iParam0, 4096);
		if (func_271(iParam0, 131072))
		{
			MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], 1550066118);
		}
		else
		{
			MAP::_BLIP_SET_MODIFIER(Local_2027.f_202[iParam0], joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
		}
	}
}

bool func_995(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_534())
	{
		return false;
	}
	if (!func_227(4))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iParam0 /*4*/]))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_VEH(uParam1->f_3[iParam0 /*4*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_55(uParam1, 524288))
	{
		return false;
	}
	if ((fParam3->f_202.f_60 == 5 && func_341(iParam0, &Local_15, 1)) || fParam3->f_202.f_60 == 6)
	{
		return false;
	}
	if (func_405(&Local_15) > 2)
	{
		return false;
	}
	if (Local_2027.f_10 != joaat("COACH_HOLDUP_KIDNAP"))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (Local_15.f_257[iVar1 /*5*/].f_2 != iParam0)
			{
			}
			else if (func_202(iVar1, uParam1, 16))
			{
			}
			else if (!func_202(iVar1, uParam1, 8))
			{
			}
			else
			{
				return true;
			}
			iVar1++;
		}
		return false;
	}
	switch (fParam3->f_202.f_60)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			return false;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (Local_15.f_16[iVar1 /*12*/].f_11 != iParam0)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar1 /*12*/]))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_PED(Local_15.f_16[iVar1 /*12*/]);
			if (PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
			}
			else if (!PED::IS_PED_IN_VEHICLE(iVar2, iVar0, true))
			{
			}
			else
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_996(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(fParam3->f_202.f_21[iParam0]))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iParam0 /*4*/]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(uParam1->f_3[iParam0 /*4*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = 1;
	fParam3->f_202.f_21[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(func_1219(iVar1), iVar0);
	MAP::SET_BLIP_SPRITE(fParam3->f_202.f_21[iParam0], func_1000(iVar1), false);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(fParam3->f_202.f_21[iParam0], func_997());
	MAP::_BLIP_SET_MODIFIER(fParam3->f_202.f_21[iParam0], 580546400);
	MAP::_BLIP_SET_MODIFIER(fParam3->f_202.f_21[iParam0], 231194138);
}

char* func_997()
{
	return "NET_CHU_BLIP_VEHICLE";
}

bool func_998(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	if (func_41(uParam2[Local_2027.f_634 /*52*/], 32))
	{
		if (!func_534())
		{
			return false;
		}
		if (!func_227(4))
		{
			return false;
		}
	}
	else if (func_41(uParam2[Local_2027.f_634 /*52*/], 64))
	{
		if (!func_534())
		{
			return false;
		}
	}
	else if (!func_536(1))
	{
		return false;
	}
	if (func_55(uParam1, 32))
	{
		return false;
	}
	if (func_80(iParam0, 16) && !func_80(iParam0, 32))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_257[iParam0 /*5*/]))
	{
		return false;
	}
	if ((func_202(iParam0, uParam1, 8) && !func_41(uParam2[Local_2027.f_634 /*52*/], 64)) && func_405(&Local_15) <= 2)
	{
		return false;
	}
	if ((func_202(iParam0, uParam1, 2) || func_202(iParam0, uParam1, 256)) || func_202(iParam0, uParam1, 512))
	{
		return false;
	}
	if (func_202(iParam0, uParam1, 16))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_OBJ(uParam1->f_257[iParam0 /*5*/]);
	if (ENTITY::_0x61914209C36EFDDB(iVar0) == 5 && PED::_GET_CARRIER_AS_HUMAN(iVar0) == PLAYER::PLAYER_PED_ID())
	{
		return false;
	}
	if (func_956(iParam0, 255))
	{
		return false;
	}
	return true;
}

void func_999(int iParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(Local_2027.f_202.f_25[iParam0]))
	{
		return;
	}
	Local_2027.f_202.f_25[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(-2086635932, iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2027.f_202.f_25[iParam0], func_1220());
	MAP::_BLIP_SET_MODIFIER(Local_2027.f_202.f_25[iParam0], -1636811933);
	MAP::_BLIP_SET_MODIFIER(Local_2027.f_202.f_25[iParam0], 580546400);
	MAP::_BLIP_SET_MODIFIER(Local_2027.f_202.f_25[iParam0], 231194138);
	if (func_227(262144))
	{
		MAP::_BLIP_SET_MODIFIER(Local_2027.f_202.f_25[iParam0], 231194138);
	}
}

int func_1000(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("BLIP_AMBIENT_COACH");
		case 2:
		case 3:
			return joaat("BLIP_MP_DELIVER_TARGET");
		case 4:
			return 1595806706;
		case 5:
			return joaat("BLIP_AMBIENT_VIP");
		default:
			break;
	}
	return 0;
}

void func_1001(int iParam0)
{
	if (func_80(iParam0, 4))
	{
		return;
	}
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202.f_25[iParam0], -1636811933);
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202.f_25[iParam0], 453356795);
	MAP::_BLIP_SET_MODIFIER(Local_2027.f_202.f_25[iParam0], 1938496773);
	func_453(iParam0, 1);
	func_453(iParam0, 2);
	func_273(iParam0, 4);
}

bool func_1002(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2027.f_634;
	}
	return MISC::_0x8F4F050054005C27(&(Local_362[iParam1 /*52*/].f_2), iParam0);
}

void func_1003(int iParam0)
{
	if (func_80(iParam0, 2))
	{
		return;
	}
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202.f_25[iParam0], -1636811933);
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202.f_25[iParam0], 1938496773);
	MAP::_BLIP_SET_MODIFIER(Local_2027.f_202.f_25[iParam0], 453356795);
	func_453(iParam0, 1);
	func_453(iParam0, 4);
	func_273(iParam0, 2);
}

void func_1004(int iParam0)
{
	if (func_80(iParam0, 1))
	{
		return;
	}
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202.f_25[iParam0], 453356795);
	MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202.f_25[iParam0], 1938496773);
	MAP::_BLIP_SET_MODIFIER(Local_2027.f_202.f_25[iParam0], -1636811933);
	func_453(iParam0, 2);
	func_453(iParam0, 4);
	func_273(iParam0, 1);
}

void func_1005(int iParam0, int iParam1)
{
	if (Local_2027.f_10 != joaat("COACH_HOLDUP_ROBBERY"))
	{
		return;
	}
	if (Local_2027.f_202.f_30[iParam0] == iParam1)
	{
		return;
	}
	if (iParam1 == 255)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2027.f_202.f_25[iParam0], func_1220());
		MAP::_BLIP_REMOVE_MODIFIER(Local_2027.f_202.f_25[iParam0], 723793771);
	}
	else
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Local_2027.f_202.f_25[iParam0], func_1218(func_1220(), iParam1));
		MAP::_BLIP_SET_MODIFIER(Local_2027.f_202.f_25[iParam0], 723793771);
	}
	Local_2027.f_202.f_30[iParam0] = iParam1;
}

char* func_1006()
{
	return "NET_CHU_BLIP_DROPOFF";
}

bool func_1007()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_1008(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int* iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	var uVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	bool bVar14;
	int iVar15;
	int iVar16;

	if (func_1221(iParam0) && !func_227(1))
	{
		return false;
	}
	if (func_33(1) && !func_33(2))
	{
		return false;
	}
	if (bParam2)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			if (iParam1 != 1)
			{
				return false;
			}
			if (func_227(64))
			{
				return false;
			}
			if (!func_227(4))
			{
				return false;
			}
			if (func_456(Local_2027.f_202.f_57))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202.f_21[iVar0]))
				{
				}
				else
				{
					func_1222(1, iParam5);
					return true;
				}
				iVar0++;
			}
			return false;
		case 2:
			if (iParam1 != 1)
			{
				return false;
			}
			if (!func_227(64))
			{
				return false;
			}
			if (func_227(8))
			{
				return false;
			}
			if (func_405(&Local_15) > 1)
			{
				return false;
			}
			if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8))
			{
				return false;
			}
			if (func_33(256))
			{
				if (!func_1223(&Local_15, &Local_2027))
				{
					return false;
				}
			}
			else if (!func_1016(&Local_15, &Local_2027, joaat("DRIVER")))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202.f_21[iVar0]))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_3[iVar0 /*4*/]))
				{
				}
				else
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_15.f_3[iVar0 /*4*/]), false, false) };
					if (!func_1224(vVar5, 2f, 80f))
					{
					}
					else
					{
						func_1222(1, iParam5);
						return true;
					}
				}
				iVar0++;
			}
			return false;
		case 3:
			if (iParam1 != 1)
			{
				return false;
			}
			if (func_199(&Local_2027) != joaat("COACH_HOLDUP_ROBBERY"))
			{
				return false;
			}
			if (func_227(16))
			{
				return false;
			}
			if (!func_742(-1, 1))
			{
				return false;
			}
			return true;
		case 4:
			if (iParam1 != 1)
			{
				return false;
			}
			if (func_199(&Local_2027) != joaat("COACH_HOLDUP_KIDNAP"))
			{
				return false;
			}
			if (func_227(32))
			{
				return false;
			}
			if (!func_742(-1, 1))
			{
				return false;
			}
			return true;
		case 5:
			if (iParam1 != 0)
			{
				return false;
			}
			if (func_227(128) || (func_227(8388608) && func_351(PLAYER::PLAYER_ID(), 1, 1)))
			{
				return false;
			}
			if (!func_536(0))
			{
				return false;
			}
			if (!func_1225(&uVar4))
			{
				return false;
			}
			if (!GANG::_0xD6F6ACF4392187FB(Local_15.f_316) || !GANG::_0x0F99F6436528A089(Local_15.f_316))
			{
				if (!func_59(&Local_362, 32, 0))
				{
					return false;
				}
			}
			switch (Local_2027.f_10)
			{
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (!func_741(&Local_15, 8, 1))
					{
						return false;
					}
					func_1222(2, iParam5);
					break;
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (!func_742(-1, 1))
					{
						return false;
					}
					func_1222(3, iParam5);
					break;
				default:
					return false;
			}
			return true;
		case 6:
			if (iParam1 != 0)
			{
				return false;
			}
			if (func_227(256))
			{
				return false;
			}
			if (!func_227(128))
			{
				return false;
			}
			if (Local_2027.f_632 > 50f)
			{
				return false;
			}
			if (!func_536(1))
			{
				return false;
			}
			if ((!func_351(PLAYER::PLAYER_ID(), 1, 0) || !func_524(PLAYER::PLAYER_ID(), &fVar3, 0)) || fVar3 > 50f)
			{
				return false;
			}
			if (!func_1225(&uVar4))
			{
				return false;
			}
			if (!GANG::_0xD6F6ACF4392187FB(Local_15.f_316) || !GANG::_0x0F99F6436528A089(Local_15.f_316))
			{
				if (!func_59(&Local_362, 32, 0))
				{
					return false;
				}
			}
			switch (Local_2027.f_10)
			{
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (!func_741(&Local_15, 8, 1))
					{
						return false;
					}
					func_1222(2, iParam5);
					break;
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (!func_742(-1, 1))
					{
						return false;
					}
					func_1222(3, iParam5);
					break;
				default:
					return false;
			}
			return true;
		case 7:
			if (func_227(4))
			{
				return false;
			}
			if (!func_41(&(Local_362[Local_2027.f_634 /*52*/]), 64))
			{
				return false;
			}
			iVar8 = PLAYER::PLAYER_ID();
			if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 32768))
			{
				*iParam4 = iVar8;
			}
			else
			{
				*iParam4 = 255;
				iVar9 = GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iVar8));
				iVar1 = 0;
				while (iVar1 < 32)
				{
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
					}
					else if (!func_41(&(Local_362[iVar1 /*52*/]), 64))
					{
					}
					else
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
						if (iVar2 == iVar8)
						{
							iVar10++;
						}
						else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
						{
						}
						else if (!GANG::_0x3F59FE6F37869576(iVar8, iVar2))
						{
						}
						else
						{
							iVar10++;
							if (!func_41(&(Local_362[iVar1 /*52*/]), 32768))
							{
							}
							else
							{
								*iParam4 = iVar2;
							}
							else
							{
								iVar1++;
							}
							if (iVar10 < iVar9)
							{
								return false;
							}
							else if (iVar10 == iVar9 && *iParam4 == 255)
							{
								*iParam4 = iVar8;
							}
							switch (Local_2027.f_10)
							{
								case joaat("COACH_HOLDUP_ROBBERY"):
									func_1222(4, iParam5);
									break;
								case joaat("COACH_HOLDUP_KIDNAP"):
									func_1222(5, iParam5);
									break;
								default:
									return false;
							}
							return true;
							if (func_199(&Local_2027) != joaat("COACH_HOLDUP_KIDNAP"))
							{
								return false;
							}
							if (func_227(524288))
							{
								return false;
							}
							if (!func_848(255))
							{
								return false;
							}
							if (iParam1 == 1)
							{
								if (!VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_619))
								{
									return false;
								}
								vVar11 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_619) };
							}
							else if (iParam1 == 2)
							{
								if (!VOLUME::_DOES_VOLUME_EXIST(Local_2027.f_620))
								{
									return false;
								}
								vVar11 = { VOLUME::_GET_VOLUME_COORDS(Local_2027.f_620) };
							}
							else
							{
								return false;
							}
							if (func_1226(Global_35, vVar11) > 30f)
							{
								return false;
							}
							if (ENTITY::IS_ENTITY_DEAD(Global_34))
							{
								return false;
							}
							if (!PED::IS_PED_ON_MOUNT(Global_34))
							{
								iVar15 = 0;
								while (iVar15 < 20)
								{
									if (Local_15.f_16[iVar15 /*12*/].f_2 != joaat("PASSENGER_VIP"))
									{
									}
									else if (!func_988(iVar15, 255))
									{
									}
									else if (!func_440(iVar15, &iVar16, 1, 0))
									{
									}
									else if (ENTITY::_0x61914209C36EFDDB(iVar16) != 7)
									{
									}
									else
									{
										bVar14 = true;
									}
									else
									{
										iVar15++;
									}
								}
								if (!bVar14)
								{
									return false;
								}
							}
							return true;
							return false;
						}
					}
				}
			}
			default:
				break;
	}
}

int func_1009(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1010(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1011(int iParam0)
{
	return 10000;
}

char* func_1012(int iParam0, int iParam1, char* sParam2)
{
	bool bVar0;

	bVar0 = func_33(256);
	switch (iParam0)
	{
		case 1:
			switch (Local_2027.f_10)
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (Local_15.f_321 < 2)
					{
						if (bVar0)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_STATIONARY", sParam2);
						}
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP", sParam2);
					}
					if (bVar0)
					{
						if (func_641())
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_STATIONARY", sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_STATIONARY_S", sParam2);
						}
					}
					if (func_641())
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL", sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_S", sParam2);
					}
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (Local_15.f_321 < 2)
					{
						if (bVar0)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_STATIONARY", sParam2);
						}
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY", sParam2);
					}
					if (bVar0)
					{
						if (func_641())
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_STATIONARY", sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_STATIONARY_S", sParam2);
						}
					}
					if (func_641())
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL", sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_S", sParam2);
					}
					break;
			}
			return "";
		case 2:
			if (!func_641())
			{
				if (bVar0)
				{
					return "NET_CHU_HELP_STOP_COACH_STATIONARY";
				}
				return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_STOP_COACH", sParam2);
			}
			if (bVar0)
			{
				return "NET_CHU_HELP_STOP_COACH_PLURAL_STATIONARY";
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_STOP_COACH_PLURAL", sParam2);
		case 3:
			return "NET_CHU_HELP_ROB";
		case 4:
			if (Local_15.f_321 < 2)
			{
				return "NET_CHU_HELP_LASSO_VIP";
			}
			return "NET_CHU_HELP_LASSO_VIP_PLURAL";
		case 5:
		case 6:
			switch (Local_2027.f_10)
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_PVP_KIDNAP", func_1227(joaat("COLOR_RED")), sParam2);
				case joaat("COACH_HOLDUP_ROBBERY"):
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_PVP_ROBBERY", func_1227(joaat("COLOR_RED")), sParam2);
				default:
					break;
			}
			return "";
		case 7:
			switch (Local_2027.f_10)
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (iParam1 == PLAYER::PLAYER_ID())
					{
						if (Local_15.f_321 < 2)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_SELF", func_1227(joaat("COLOR_RED")), sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_PLURAL_SELF", func_1227(joaat("COLOR_RED")), sParam2);
						}
					}
					else if (Local_15.f_321 < 2)
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP", func_1228(iParam1, joaat("COLOR_POSSE_ALLY")), func_1227(joaat("COLOR_RED")), sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_PLURAL", func_1228(iParam1, joaat("COLOR_POSSE_ALLY")), func_1227(joaat("COLOR_RED")), sParam2);
					}
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (iParam1 == PLAYER::PLAYER_ID())
					{
						if (Local_15.f_322 < 2)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_SELF", func_1227(joaat("COLOR_RED")), sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_PLURAL_SELF", func_1227(joaat("COLOR_RED")), sParam2);
						}
					}
					else if (Local_15.f_322 < 2)
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY", func_1228(iParam1, joaat("COLOR_POSSE_ALLY")), func_1227(joaat("COLOR_RED")), sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_PLURAL", func_1228(iParam1, joaat("COLOR_POSSE_ALLY")), func_1227(joaat("COLOR_RED")), sParam2);
					}
					break;
			}
			return "";
		case 8:
			return "NET_CHU_HELP_DELIVER_PED_ON_MOUNT";
		default:
			break;
	}
	return "";
}

var func_1013(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	char* sVar3;

	iVar0 = func_1229(iParam0, 1);
	bVar2 = func_351(PLAYER::PLAYER_ID(), 1, 1);
	if (bVar2 || Global_1109804.f_5729.f_2[iVar0] < 5)
	{
		if (bVar2)
		{
			sVar3 = "GFH_HELP_PVP_NEARBY_DEFENSIVE";
		}
		else
		{
			switch (iParam0)
			{
				case joaat("ATTACK"):
					sVar3 = "GFH_HELP_PVP_NEARBY_ATTACK";
					break;
				case joaat("DEFEND"):
					sVar3 = "GFH_HELP_PVP_NEARBY_DEFEND";
					break;
				case joaat("DELIVER"):
					sVar3 = "GFH_HELP_PVP_NEARBY_DELIVER";
					break;
			}
		}
		if (!MAP::DOES_BLIP_EXIST(iParam1))
		{
			uVar1 = func_1230(MISC::_CREATE_VAR_STRING(2, sVar3), 10000, 0, 0, 0, 1);
		}
		else
		{
			uVar1 = func_1230(MISC::_CREATE_VAR_STRING(2, sVar3, iParam1), 10000, 0, 0, 0, 1);
		}
		if (bVar2)
		{
		}
		else
		{
			Global_1109804.f_5729.f_2[iVar0]++;
		}
	}
	return uVar1;
}

void func_1014(char* sParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (bParam2)
	{
		func_1231(1);
	}
	Local_2027.f_202.f_59 = func_1230(sParam0, iParam1, 0, 0, 0, 1);
}

bool func_1015(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 64;
			return true;
		case 2:
			*iParam1 = 8;
			return true;
		case 4:
			*iParam1 = 32;
			return true;
		case 3:
			*iParam1 = 16;
			return true;
		case 5:
			if (func_351(PLAYER::PLAYER_ID(), 1, 1))
			{
				*iParam1 = 8388608;
			}
			else
			{
				*iParam1 = 128;
			}
			return true;
		case 6:
			*iParam1 = 256;
			return true;
		case 8:
			*iParam1 = 524288;
			return true;
		case 7:
			*iParam1 = 4;
			return true;
		default:
			break;
	}
	return false;
}

bool func_1016(var uParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { func_940(PLAYER::PLAYER_ID()) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (uParam0->f_16[iVar4 /*12*/].f_2 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar4 /*12*/]))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(uParam0->f_16[iVar4 /*12*/]);
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > 80f)
			{
			}
			else
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

bool func_1017(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (func_113(uParam0->f_16[iVar0 /*12*/].f_4, iParam2))
		{
		}
		else if (func_113(uParam0->f_16[iVar0 /*12*/].f_4, iParam3))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1018(bool bParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;

	*bParam0 = 1;
	iVar2 = PLAYER::PLAYER_ID();
	bVar3 = true;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_15.f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
		{
		}
		else if ((func_201(iVar0, &Local_15, 32) || func_201(iVar0, &Local_15, 65536)) || func_201(iVar0, &Local_15, 131072))
		{
		}
		else
		{
			bVar3 = false;
			if (Local_15.f_16[iVar0 /*12*/].f_7 == 255)
			{
				*bParam0 = 0;
			}
			else if (Local_15.f_16[iVar0 /*12*/].f_7 == iVar2 && !func_988(iVar0, 255))
			{
				*bParam0 = 0;
			}
			else if (!func_1021(Local_15.f_16[iVar0 /*12*/].f_7, &uVar1))
			{
				*bParam0 = 0;
			}
			else if (!GANG::_0x3F59FE6F37869576(Local_15.f_16[iVar0 /*12*/].f_7, iVar2))
			{
				*bParam0 = 0;
				return true;
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		*bParam0 = 0;
	}
	return false;
}

bool func_1019()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_202(iVar0, &Local_15, 128))
		{
		}
		else if (func_202(iVar0, &Local_15, 2))
		{
		}
		else if (func_202(iVar0, &Local_15, 4))
		{
		}
		else if (func_202(iVar0, &Local_15, 256) || func_202(iVar0, &Local_15, 512))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1020(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;

	*bParam0 = 1;
	iVar1 = PLAYER::PLAYER_ID();
	bVar3 = true;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((((!func_202(iVar0, &Local_15, 128) || func_202(iVar0, &Local_15, 2)) || func_202(iVar0, &Local_15, 16)) || func_202(iVar0, &Local_15, 256)) || func_202(iVar0, &Local_15, 512))
		{
		}
		else
		{
			bVar3 = false;
			if (Local_15.f_257[iVar0 /*5*/].f_3 == 255)
			{
				*bParam0 = 0;
			}
			else if (!func_1021(Local_15.f_257[iVar0 /*5*/].f_3, &uVar2))
			{
				*bParam0 = 0;
			}
			else if (!GANG::_0x3F59FE6F37869576(Local_15.f_257[iVar0 /*5*/].f_3, iVar1))
			{
				*bParam0 = 0;
				return true;
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		*bParam0 = 0;
	}
	return false;
}

bool func_1021(int iParam0, var uParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	*uParam1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	return true;
}

char* func_1022(bool bParam0)
{
	switch (func_199(&Local_2027))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bParam0)
			{
				return "NET_CHU_OBJ_GO_TO_VIP_S";
			}
			return "NET_CHU_OBJ_GO_TO_VIP";
		default:
			break;
	}
	if (bParam0)
	{
		return "NET_CHU_OBJ_GO_TO_PASSENGER_S";
	}
	return "NET_CHU_OBJ_GO_TO_PASSENGER";
}

char* func_1023(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_GO_TO_COACH";
	}
	return "NET_CHU_OBJ_GO_TO_COACH_PLURAL";
}

char* func_1024(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_STOP_COACH";
	}
	return "NET_CHU_OBJ_STOP_COACH_PLURAL";
}

char* func_1025(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_KILL_GUARDS_STATIONARY";
	}
	return "NET_CHU_OBJ_KILL_GUARDS";
}

char* func_1026()
{
	return "NET_CHU_OBJ_GET_CASH";
}

char* func_1027(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_HOGTIE_S";
	}
	return "NET_CHU_OBJ_HOGTIE";
}

char* func_1028(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROPOFF_KIDNAP_S_CARRY", func_1232());
	}
	if (bParam0)
	{
		return "NET_CHU_OBJ_DROPOFF_KIDNAP_S";
	}
	return "NET_CHU_OBJ_DROPOFF_KIDNAP";
}

char* func_1029(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_SECURE_BAG";
	}
	return "NET_CHU_OBJ_SECURE_BAGS";
}

char* func_1030(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TURN_IN_BAG_CARRY", func_1232());
		}
		return "NET_CHU_OBJ_TURN_IN_BAG_S";
	}
	if (bParam1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TURN_IN_BAGS_CARRY", func_1232());
	}
	return "NET_CHU_OBJ_TURN_IN_BAG";
}

char* func_1031(float fParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	char* sVar1;

	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			func_642(bParam4, &uVar0, iParam2, iParam3);
			if (*bParam4)
			{
				sVar1 = func_1228(*iParam2, joaat("COLOR_PURE_WHITE"));
			}
			else
			{
				sVar1 = func_1233(*iParam3, joaat("COLOR_PURE_WHITE"));
			}
			if (iParam1 || *bParam4)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_KIDNAP_S", sVar1);
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_KIDNAP", sVar1);
		case joaat("COACH_HOLDUP_ROBBERY"):
			func_643(bParam4, &uVar0, iParam2, iParam3);
			if (*bParam4)
			{
				sVar1 = func_1228(*iParam2, joaat("COLOR_PURE_WHITE"));
			}
			else
			{
				sVar1 = func_1233(*iParam3, joaat("COLOR_PURE_WHITE"));
			}
			if (iParam1 || *bParam4)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_BAGS_S", sVar1);
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_BAGS", sVar1);
		default:
			break;
	}
	return "";
}

char* func_1032()
{
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_OBJ_PVP_STEAL_KIDNAP_MULTI";
		case joaat("COACH_HOLDUP_ROBBERY"):
			return "NET_CHU_OBJ_PVP_STEAL_BAGS_MULTI";
		default:
			break;
	}
	return "";
}

char* func_1033(float fParam0, bool bParam1)
{
	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bParam1)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_DROPOFF_KIDNAP_S", func_1232());
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_DROPOFF_KIDNAP", func_1232());
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (bParam1)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_TURN_IN_BAG", func_1232());
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_TURN_IN_BAGS", func_1232());
		default:
			break;
	}
	return "";
}

char* func_1034(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_TAKE_BAG";
	}
	return "NET_CHU_OBJ_TAKE_BAGS";
}

char* func_1035()
{
	return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROP_KIDNAP", func_1232());
}

char* func_1036(bool bParam0)
{
	if (bParam0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROP_BAG", func_1232());
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROP_BAGS", func_1232());
}

var func_1037(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	return func_1234(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

char* func_1038()
{
	return "NET_CHU_NAME";
}

char* func_1039(bool bParam0)
{
	switch (func_199(&Local_2027))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bParam0)
			{
				return "NET_CHU_TOAST_START_BODY_KIDNAP";
			}
			if (func_641())
			{
				return "NET_CHU_TOAST_START_BODY_KIDNAP_PLURAL";
			}
			return "NET_CHU_TOAST_START_BODY_KIDNAP_PLURAL_S";
		case joaat("COACH_HOLDUP_ROBBERY"):
		default:
			break;
	}
	if (func_641())
	{
		return "NET_CHU_TOAST_START_BODY_ROBBERY_PLURAL";
	}
	return "NET_CHU_TOAST_START_BODY_ROBBERY";
}

int func_1040(char* sParam0, char* sParam1)
{
	var uVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	uVar0 = func_1237(sParam0, sParam1, 7500, func_1235(), func_1236(), 0, 1, 1);
	return uVar0;
}

char* func_1041(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GEM_GFH_OUTRO_TITLE_OVER";
		case 1:
			return "GEM_GFH_OUTRO_TITLE_PASSED";
		case 2:
			return "GEM_GFH_OUTRO_TITLE_FAILED";
		default:
			break;
	}
	return "";
}

struct<8> func_1042(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

char* func_1043(bool bParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_41(&(Local_362[Local_2027.f_634 /*52*/]), 8388608))
	{
		if (func_33(2048))
		{
			return "NET_CHU_TOAST_END_BODY_ABANDON_DISBAND_POSSE";
		}
		else if (func_33(4096))
		{
			return "NET_CHU_TOAST_END_BODY_ABANDON_LEFT_POSSE";
		}
		else if (func_33(1024))
		{
			return "NET_CHU_TOAST_END_BODY_ABANDON_POSSE";
		}
		return "NET_CHU_TOAST_END_BODY_ABANDON";
	}
	iVar0 = func_1238();
	switch (iVar0)
	{
		case 1:
			func_208(&sVar2, &iVar3);
			switch (func_199(&Local_2027))
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (iVar3 == 1)
					{
						return "NET_CHU_TOAST_END_BODY_WON_KIDNAP";
					}
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_WON_KIDNAP_PLURAL", sVar2, iVar3);
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (iVar3 == 1)
					{
						return "NET_CHU_TOAST_END_BODY_WON_ROBBERY";
					}
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_WON_ROBBERY_PLURAL", sVar2, iVar3);
				default:
					break;
			}
			return "";
		case 0:
			func_208(&sVar2, &iVar3);
			switch (func_199(&Local_2027))
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_OVER_KIDNAP", sVar2, iVar3);
				case joaat("COACH_HOLDUP_ROBBERY"):
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_OVER_ROBBERY", sVar2, iVar3);
				default:
					break;
			}
			return "";
		case 2:
			if (func_55(&Local_15, 64))
			{
				return "NET_CHU_TOAST_END_BODY_EXPIRED";
			}
			switch (func_199(&Local_2027))
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (func_369(0) == 0)
					{
						if (bParam0)
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP";
						}
						else
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PLURAL";
						}
					}
					else if (func_1239(&iVar4, &iVar5, &uVar1))
					{
						if (bParam0)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP", func_1240(iVar4, iVar5, joaat("COLOR_ENEMY")));
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_PLURAL", func_1240(iVar4, iVar5, joaat("COLOR_ENEMY")));
						}
					}
					else if (bParam0)
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_R";
					}
					else
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_R_PLUR";
					}
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (func_369(0) == 0)
					{
						if (bParam0)
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY";
						}
						else
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PLURAL";
						}
					}
					else if (func_1239(&iVar4, &iVar5, &uVar1))
					{
						if (bParam0)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP", func_1240(iVar4, iVar5, joaat("COLOR_ENEMY")));
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_PLURAL", func_1240(iVar4, iVar5, joaat("COLOR_ENEMY")));
						}
					}
					else if (bParam0)
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_R";
					}
					else
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_R_PLUR";
					}
					break;
				default:
					return "";
			}
			break;
	}
	return "";
}

void func_1044(struct<8> Param0, struct<8> Param8, struct<8> Param16, int iParam24)
{
	Global_1109804.f_21.f_82 = 1;
	Global_1109804.f_21.f_82.f_1 = { Param0 };
	Global_1109804.f_21.f_82.f_9 = { Param8 };
	Global_1109804.f_21.f_82.f_17 = { Param16 };
	Global_1109804.f_21.f_82.f_25 = iParam24;
	Global_1109804.f_21.f_82.f_26 = 0;
}

int func_1045(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	char* sVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	UIFEED::_0xDD1232B332CBB9E7(11, 1, 0);
	if (iParam2 <= 0)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_FAILED";
	}
	else if (iParam2 == iParam3)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_PASSED";
	}
	else
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_OVER";
	}
	if (bParam4)
	{
		uVar0 = func_1241(sVar1, sParam0, sParam1, 7500, func_675(), func_676(), 0, 1, 1, 1);
	}
	else
	{
		uVar0 = func_1237(sVar1, sParam1, 7500, func_675(), func_676(), 0, 1, 1);
	}
	return uVar0;
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLIP_MP_DEADEYE"):
		case joaat("BLIP_MP_MISSION_SAMSON_FINCH"):
		case joaat("BLIP_ADVERSARY_MEDIUM"):
		case joaat("BLIP_AMBIENT_HUNTER"):
		case joaat("BLIP_MP_BASE_B"):
		case joaat("BLIP_MP_BASE"):
		case joaat("BLIP_MP_BOUNTY_DEAD"):
		case joaat("BLIP_MP_LOCATION_S"):
		case joaat("BLIP_MP_GUN_FOR_HIRE"):
		case joaat("BLIP_AMBIENT_POSSE_DEPUTY_LOWER"):
		case joaat("BLIP_WANTED_POSTER"):
		case joaat("BLIP_MP_COACH_SMUGGLE"):
		case joaat("BLIP_MP_BASE_A"):
		case joaat("BLIP_MP_BASE_D"):
		case joaat("BLIP_PED_9"):
		case joaat("BLIP_MP_MISSION_OLD_MAN_JONES"):
		case joaat("BLIP_MP_LOCATION_M"):
		case joaat("BLIP_MP_FLAG"):
		case joaat("BLIP_MP_CASH_CHECKPOINT"):
		case joaat("BLIP_MP_MISSION_BRONTE"):
		case joaat("BLIP_PED_10"):
		case joaat("BLIP_MP_SPAWNPOINT"):
		case joaat("BLIP_MP_MISSION_HORLEY"):
		case joaat("BLIP_MP_ROUNDUP"):
		case joaat("BLIP_PED_8"):
		case joaat("BLIP_MP_BASE_C"):
		case joaat("BLIP_MP_LOCATION_E"):
		case joaat("BLIP_MP_MISSION_REVENGE"):
		case joaat("BLIP_TROPHY"):
		case joaat("BLIP_MP_COACH_INTERCEPT"):
		case joaat("BLIP_AMBIENT_HOT_TARGET"):
		case joaat("BLIP_MP_LOCATION_L"):
		case joaat("BLIP_PED_11"):
		case joaat("BLIP_MP_MISSION_TBD"):
		case joaat("BLIP_PREDATOR"):
		case joaat("BLIP_PED_7"):
		case joaat("BLIP_MP_LOCATION_D"):
		case joaat("BLIP_MP_BASE_F"):
		case joaat("BLIP_AMBIENT_VIP"):
		case joaat("BLIP_MP_BEAST"):
		case joaat("BLIP_MP_PLAYLIST_ADVERSARY_SPECIAL"):
		case joaat("BLIP_MP_LOCATION_P"):
		case joaat("BLIP_MP_PLAYLIST_FREEFORALL"):
		case joaat("BLIP_BOLT"):
		case joaat("BLIP_MP_COACH_RECOVER"):
		case joaat("BLIP_MP_LOCATION_N"):
		case joaat("BLIP_MP_LOCATION_O"):
		case joaat("BLIP_MP_SUPPLIES"):
		case joaat("BLIP_PED_6"):
		case joaat("BLIP_GUNSLINGER"):
		case joaat("BLIP_MP_GAME_MAGNIFICENT_FOUR"):
		case joaat("BLIP_AMBIENT_POSSE_LEADER_LOWER"):
		case joaat("BLIP_MP_PLAYLIST_SERIES_8"):
		case joaat("BLIP_MP_BASE_E"):
		case joaat("BLIP_MP_LOCATION_G"):
		case joaat("BLIP_MP_GAME_VIP"):
		case joaat("BLIP_AMBIENT_POSSE_DEPUTY_HIGHER"):
		case joaat("BLIP_MP_MISSION_MARSHALL_TOM_DAVIES"):
		case joaat("BLIP_PED_5"):
		case joaat("BLIP_MP_LOCATION_Y"):
		case joaat("BLIP_MP_LOCATION_H"):
		case joaat("BLIP_AMBIENT_DELIVERY"):
		case joaat("BLIP_MP_LOCATION_A"):
		case joaat("BLIP_AMBIENT_BOUNTY_HUNTER_WAGON"):
		case joaat("BLIP_AMBIENT_CRATE"):
		case joaat("BLIP_MOONSHINE"):
		case joaat("BLIP_MP_LOCATION_K"):
		case joaat("BLIP_JOB_BOARD"):
		case joaat("BLIP_TEAMSTERS"):
		case joaat("BLIP_MP_BASE_H"):
		case joaat("BLIP_MP_MISSION_SEVEN"):
		case joaat("BLIP_ADVERSARY_LARGE"):
		case joaat("BLIP_MP_LOCATION_C"):
		case joaat("BLIP_PED_16"):
		case joaat("BLIP_MP_PLAYLIST_SERIES_4"):
		case joaat("BLIP_MP_PLAYLIST_OBJECTIVE"):
		case joaat("BLIP_MP_LOCATION_J"):
		case joaat("BLIP_MP_MISSION_ROBBERY"):
		case joaat("BLIP_PED_4"):
		case joaat("BLIP_MP_BASE_G"):
		case joaat("BLIP_MP_RUSTLING"):
		case joaat("BLIP_MP_LOCATION_B"):
		case joaat("BLIP_MP_PLAYLIST_ADVERSARY"):
		case joaat("BLIP_MP_MISSION_CLAY"):
		case joaat("BLIP_PED_3"):
		case joaat("BLIP_AMBIENT_KING"):
		case joaat("BLIP_MP_GAME_ANIMAL_PROTECTION"):
		case joaat("BLIP_SPECIAL_SERIES_2"):
		case joaat("BLIP_MOONSHINE_STILL"):
		case joaat("BLIP_MP_GAME_RACE_HORSE"):
		case joaat("BLIP_MP_GAME_MULTI_TARGET"):
		case joaat("BLIP_MP_ATTACK_TARGET"):
		case joaat("BLIP_MP_LOCATION_V"):
		case joaat("BLIP_SPECIAL_SERIES_1"):
		case joaat("BLIP_MP_LOCATION_X"):
		case joaat("BLIP_PED_2"):
		case joaat("BLIP_ADVERSARY_SMALL"):
		case joaat("BLIP_MP_COACH_ESCORT"):
		case joaat("BLIP_MP_LOCATION_U"):
		case joaat("BLIP_PED_12"):
		case joaat("BLIP_OUTLAW"):
		case joaat("BLIP_AMBIENT_POSSE_DEPUTY"):
		case joaat("BLIP_MP_LOCATION_W"):
		case joaat("BLIP_MP_LOCATION_I"):
		case joaat("BLIP_BAG_CAPTURE"):
		case joaat("BLIP_MP_MISSION_JESSE"):
		case joaat("BLIP_MP_PLAYLIST_EXCLUSIVE"):
		case joaat("BLIP_MP_PLAYLIST_TEAMGAME"):
		case joaat("BLIP_HIRE_CAMP_FOLLOWER"):
		case joaat("BLIP_PED_1"):
		case joaat("BLIP_MP_GAME_RUNAWAY_TRAIN"):
		case joaat("BLIP_BAG_DEFEND"):
		case joaat("BLIP_MP_DEFEND_TARGET"):
		case joaat("BLIP_AMBIENT_MARKED_FOR_DEATH"):
		case joaat("BLIP_PED_13"):
		case joaat("BLIP_MP_LOCATION_Z"):
		case joaat("BLIP_MOONSHINE_VAT"):
		case joaat("BLIP_MP_LOCATION_R"):
		case joaat("BLIP_BALL"):
		case joaat("BLIP_HEALTH"):
		case joaat("BLIP_MP_PLAYLIST_SERIES_12"):
		case joaat("BLIP_AMBIENT_POSSE_LEADER_HIGHER"):
		case joaat("BLIP_PED_14"):
		case joaat("BLIP_PRODUCT_MOONSHINE"):
		case joaat("BLIP_MP_LOCATION_F"):
		case joaat("BLIP_MP_GAME_TREASURE_HUNT"):
		case joaat("BLIP_MP_LOCATION_Q"):
		case joaat("BLIP_MP_BASE_J"):
		case joaat("BLIP_NED_KELLY_OUTFIT"):
		case joaat("BLIP_MP_DELIVER_TARGET"):
		case joaat("BLIP_PED_15"):
		case joaat("BLIP_MP_PLAYLIST_RACES"):
		case joaat("BLIP_BUSINESS_MOONSHINE"):
		case joaat("BLIP_AMBIENT_POSSE_LEADER"):
		case joaat("BLIP_MP_GAME_RACE_CANOE"):
		case joaat("BLIP_MP_LOCATION_T"):
		case joaat("BLIP_MP_UGC"):
		case joaat("BLIP_MP_GAME_HILL"):
		case joaat("BLIP_MP_MISSION_BRAITHWAITE"):
		case joaat("BLIP_MP_BASE_I"):
			return joaat("BLIPS_MP");
	}
	return joaat("BLIPS");
}

int func_1047(int iParam0)
{
	return iParam0;
}

void func_1048(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((uParam0[iParam2 /*34*/])->f_23 != iParam1)
	{
		(uParam0[iParam2 /*34*/])->f_23 = iParam1;
	}
}

int func_1049(var uParam0, bool bParam1)
{
	if (!func_1242())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_1243())
			{
				uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-119209833);
				func_462(1);
				func_1244(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1245())
			{
				return 0;
			}
			func_1244(uParam0, 2);
			break;
	}
	Global_1940144.f_110 = 1;
	return 1;
}

int func_1050(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_1246(uParam0->f_5, &(uParam0->f_6), 0);
		func_1246(uParam0->f_5, &(uParam0->f_7), 1);
		func_1246(uParam0->f_5, &(uParam0->f_8), 37);
		func_1247(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_1051(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam2 != 0)
	{
		iParam3 = iParam2;
		iParam4 = iParam2;
	}
	if ((uParam1[0 /*34*/])->f_21 == 0)
	{
		func_1248(uParam0, uParam1, 0, "meter0", iParam3, iParam5);
		func_1248(uParam0, uParam1, 1, "meter1", iParam4, iParam6);
		func_1248(uParam0, uParam1, 2, "meter2", iParam2, 0);
		func_1248(uParam0, uParam1, 3, "meter3", iParam2, 0);
		func_1248(uParam0, uParam1, 4, "meter4", iParam2, 0);
		func_1248(uParam0, uParam1, 5, "meter5", iParam2, 0);
		func_1248(uParam0, uParam1, 6, "meter6", iParam2, 0);
		return 0;
	}
	return 1;
}

int func_1052(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
			{
				func_1249(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, *uParam0);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1546991729, uParam0->f_3);
			}
			func_1249(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_1249(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729) && UISTATEMACHINE::_0xF7C180F57F85D0B8(1546991729))
			{
				UISTATEMACHINE::_0x6B9FE4F0BA521A19(1546991729, 0);
				func_1249(uParam0, 4);
			}
			else
			{
				func_1249(uParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_0x11E73195E735B25B(1546991729))
			{
				*bParam2 = 1;
				func_1249(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_1053(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_1250(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_1251(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_1247(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_1252(uParam0, iParam1, sParam4);
	func_1253(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

void func_1054(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;

	func_1254(iParam1, &iVar1, &uVar2, &iVar3, &uVar4, &uVar5, &uVar6, &uVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		bVar8 = MISC::IS_BIT_SET(iParam5, iVar0);
		bVar9 = MISC::IS_BIT_SET(iParam6, iVar0);
		func_1255(uParam0, iVar0, iVar1, uVar2, iVar3, uVar4, uVar5, uVar6, uVar7, bVar8, bParam2, bParam3, bParam4, bVar9);
		iVar0++;
	}
}

void func_1055(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_1056(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_1060(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_1057(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_1058(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

void func_1059(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_654(iParam0))
	{
		return;
	}
	iVar0 = func_1047(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_1060(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_1061(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = iParam5;
	Global_1951255[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951255[iParam0 /*23*/].f_9 = fParam9;
	Global_1951255[iParam0 /*23*/].f_10 = iParam10;
	Global_1951255[iParam0 /*23*/].f_11 = iParam11;
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_5 = iParam12;
	Global_1951255[iParam0 /*23*/].f_1 = 2;
	Global_1951255[iParam0 /*23*/].f_17 = -1;
	Global_1951255[iParam0 /*23*/].f_18 = iParam16;
	Global_1951255[iParam0 /*23*/].f_19 = iParam15;
	Global_1951255[iParam0 /*23*/].f_20 = bParam25;
	Global_1951255[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_1056(iParam0, 1);
	func_1057(iParam0, 1);
	func_1058(iParam0, 128);
}

var func_1062(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = iParam1;
	uVar16 = UIFEED::_0x8D1249BD28791878(&Var0, &vVar13, iParam6);
	return uVar16;
}

char* func_1063(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (GANG::_0xD6F6ACF4392187FB(iVar0) && GANG::_0x0F99F6436528A089(iVar0))
	{
		return func_1233(iVar0, iParam1);
	}
	return func_1228(iParam0, iParam1);
}

int func_1064(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

void func_1065(int iParam0)
{
	func_1256(iParam0);
	PED::_0xC9151483CC06A414(iParam0);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_USED_SADDLE_000"));
			break;
		case 1:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_USED_SADDLE_004"));
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_BEDROLLS"), 0, 0);
			break;
		case 1:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_000"));
			break;
		case 2:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_001"));
			break;
		case 3:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_002"));
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			func_1258(iParam0, 1);
			break;
		case 1:
			func_1258(iParam0, 2);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_000"));
			break;
		case 1:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_001"));
			break;
		case 2:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_002"));
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLEBAGS"), 0, 0);
			break;
		case 1:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_000"));
			break;
		case 2:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_001"));
			break;
		case 3:
			func_1257(iParam0, joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_002"));
			break;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

int func_1066(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	iVar0 = PED::CREATE_PED_ON_MOUNT(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6);
	return iVar0;
}

int func_1067(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5);
	return iVar0;
}

bool func_1068(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(&Local_2027, &Var0, iParam0) && func_176(Var0, -1339596857, &uVar5, 0))
	{
		*iParam1 = uVar5;
		return true;
	}
	return false;
}

bool func_1069(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2027, &Var0, iParam0) && func_299(Var0, 100469918, iParam1, 0))
	{
		return true;
	}
	return false;
}

int func_1070()
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<5> Var10;
	int iVar15;

	if (((func_292(&Local_2027, &Var0) && func_312(&Var0, 419371455, 0, 0)) && func_312(&Var0, -2072295915, 0, 0)) && func_1259(Var0) > 0)
	{
		iVar8 = func_1259(Var0);
		func_140(&Var0);
		func_292(&Local_2027, &Var0);
		func_312(&Var0, 419371455, 0, 0);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			Var10 = { Var0 };
			if (!func_312(&Var10, -640241378, iVar7, 0))
			{
			}
			else
			{
				if (!func_310(Var10, 705932105, &fVar6, 0))
				{
					fVar6 = 1f;
				}
				fVar6 = func_431(fVar6, 0f, 1f);
				fVar6 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar6);
				if (fVar6 < fVar5)
				{
				}
				else if (!func_176(Var10, 751620374, &iVar9, 0))
				{
				}
				else
				{
					fVar5 = fVar6;
				}
			}
			iVar7++;
		}
		iVar15 = iVar9;
		if (WEAPON::IS_WEAPON_VALID(iVar15))
		{
			return iVar15;
		}
	}
	return func_1260();
}

int func_1071(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26640 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_236(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26640)
						{
							if (func_236(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_21() == -1 && !func_1261(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_34)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_26640) && iParam0 != Global_34) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_1261(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_34)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_34 && func_236(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_34)
	{
		func_1262(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1263(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_1264(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_1072(struct<5> Param0, int iParam5, int iParam6)
{
	var uVar0;

	if (func_176(Param0, iParam5, &uVar0, 0))
	{
		*iParam6 = uVar0;
		return true;
	}
	return false;
}

bool func_1073(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1074(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!PED::GET_PED_CONFIG_FLAG(iVar0, 11, true))
	{
		return 0;
	}
	return 1;
}

void func_1075(int iParam0, var uParam1, int iParam2)
{
	if (func_566(iParam0, uParam1) == iParam2)
	{
		return;
	}
	uParam1->f_16[iParam0 /*12*/].f_2 = iParam2;
	uParam1->f_16[iParam0 /*12*/].f_3 = 0;
}

char* func_1076()
{
	return "script@mp@common@handovers@recieve_bag_holdup";
}

int func_1077()
{
	return 64;
}

void func_1078(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	if (!func_892(iParam0, uParam1))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	if (func_588(iVar0) && func_724(iVar0))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (VEHICLE::_0x0E3BF7ED4169EC43(iVar0))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (func_440(iParam0, &iVar1, 1, 0) && !PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (func_724(iVar0) && func_902(iVar0))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (uParam1->f_16[iParam0 /*12*/].f_3 != 1)
	{
		return;
	}
	if (func_742(Local_15.f_16[iParam0 /*12*/].f_11, 1))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if ((func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("DRIVER"), 3) || func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("DRIVER"), 2)) || func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("SHOTGUN_RIDER"), 12))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
}

void func_1079(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_707(iParam0, uParam1);
	iVar1 = func_877(iParam0, uParam1);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1075(iParam0, uParam1, joaat("MOUNTED_ESCORT"));
		return;
	}
	if (!func_892(iParam0, uParam1))
	{
		return;
	}
	iVar2 = func_893(iParam0, uParam1);
	if ((PED::IS_PED_IN_VEHICLE(iVar0, iVar2, false) && iVar1 != 35) && iVar1 != 0)
	{
		func_1075(iParam0, uParam1, joaat("PASSENGER_ESCORT"));
		return;
	}
}

void func_1080(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_892(iParam0, uParam1))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	if ((!func_724(iVar0) && func_877(iParam0, uParam1) == 14) && func_523(iVar0, func_707(iParam0, uParam1), 1, 1) > 20f)
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (func_902(iVar0) && !func_1088(uParam1->f_16[iParam0 /*12*/].f_11))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (!func_724(iVar0))
	{
		return;
	}
	if (func_588(iVar0))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if ((!func_588(iVar0) && !func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("DRIVER"), -1)) && !func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("SHOTGUN_RIDER"), -1))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
}

void func_1081(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_707(iParam0, uParam1);
	if (!PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
}

void func_1082(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = func_707(iParam0, uParam1);
	if (!func_892(iParam0, uParam1))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	iVar0 = func_893(iParam0, uParam1);
	if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (VEHICLE::_0x0E3BF7ED4169EC43(iVar0))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (func_877(iParam0, uParam1) == 12 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iVar1)
	{
		func_1075(iParam0, uParam1, joaat("DRIVER"));
		return;
	}
	if (func_588(iVar0) && func_724(iVar0))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (func_724(iVar0) && func_902(iVar0))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (func_742(Local_15.f_16[iParam0 /*12*/].f_11, 1))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
		return;
	}
	if (uParam1->f_16[iParam0 /*12*/].f_3 != 6)
	{
		return;
	}
	if (func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("SHOTGUN_RIDER"), 11) || func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("SHOTGUN_RIDER"), 7))
	{
		func_1075(iParam0, uParam1, joaat("ESCORT"));
	}
}

bool func_1083(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 0;
	while (*uParam1 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_362[*uParam1 /*52*/].f_2.f_2), iParam0))
		{
		}
		else
		{
			iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(*uParam1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0)))
			{
			}
			else
			{
				return true;
			}
		}
		*uParam1++;
	}
	return false;
}

bool func_1084(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_16[iParam0 /*12*/].f_11;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iVar0 /*4*/]))
	{
		return false;
	}
	iVar1 = NETWORK::NET_TO_VEH(uParam1->f_3[iVar0 /*4*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (func_558(iVar1, uParam2->f_10.f_2, 1) > 20f)
	{
		return false;
	}
	return true;
}

bool func_1085(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;

	vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	*iParam1 = 255;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_362[iVar1 /*52*/].f_47 == 0)
		{
		}
		else if (!func_123(iVar1, 1, 1))
		{
		}
		else
		{
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, func_940(iVar6), true);
			if (fVar5 > fParam3)
			{
			}
			else if (Local_362[iVar1 /*52*/].f_47 < iVar0)
			{
			}
			else
			{
				iVar0 = Local_362[iVar1 /*52*/].f_47;
				*iParam1 = iVar6;
				*iParam2 = iVar0;
			}
		}
		iVar1++;
	}
	if (*iParam1 == 255)
	{
		return false;
	}
	return true;
}

bool func_1086(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;

	if (!func_1265(iParam0, PLAYER::GET_PLAYER_PED(iParam1), fParam3))
	{
		*uParam2 = -1;
		return false;
	}
	if (*uParam2 == -1)
	{
		*uParam2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return false;
	}
	iVar0 = NETWORK::GET_TIME_DIFFERENCE(*uParam2, NETWORK::GET_NETWORK_TIME_ACCURATE());
	if (iVar0 > iParam4)
	{
		return true;
	}
	return false;
}

bool func_1087(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("SHOTGUN_RIDER"), 6))
	{
		return true;
	}
	if (bParam3 && func_1094(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, joaat("PASSENGER_ESCORT"), 14))
	{
		return true;
	}
	return false;
}

bool func_1088(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam0 != -1 && Local_15.f_16[iVar0 /*12*/].f_11 != iParam0)
		{
		}
		else if (!func_1266(Local_15.f_16[iVar0 /*12*/].f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1089(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (func_400(iParam0, 1))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_16[iParam0 /*12*/]);
	if (!func_892(iParam0, &Local_15))
	{
		return false;
	}
	iVar1 = func_893(iParam0, &Local_15);
	if (func_523(iVar0, iVar1, 1, 1) > fParam1)
	{
		return false;
	}
	return true;
}

bool func_1090(int iParam0, bool bParam1, vector3 vParam2, float fParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_41(iParam0[iVar0 /*52*/], 32))
		{
		}
		else if (!func_123(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_940(iVar1), vParam2, true) > fParam5)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1091(int iParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (Local_15.f_16[iVar4 /*12*/].f_2 == 0 || Local_15.f_16[iVar4 /*12*/].f_2 == -1088690539)
		{
		}
		else if (Local_15.f_16[iVar4 /*12*/].f_2 != joaat("CHASER") && !func_1102(Local_15.f_16[iVar4 /*12*/].f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar4 /*12*/]))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(Local_15.f_16[iVar4 /*12*/]);
			if (iVar3 == iParam0)
			{
			}
			else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > fParam1)
			{
			}
			else
			{
				return true;
			}
		}
		iVar4++;
	}
	if (iParam2 && func_1267(vVar0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_1092(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (uParam1->f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
		{
		}
		else if (uParam1->f_16[iVar0 /*12*/].f_7 != iParam2)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1093(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_123(iVar0, 0, 1) || !func_41(iParam1[iVar0 /*52*/], 2))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_558(iParam0, func_940(iVar1), 1) > fParam2)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1094(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam1->f_16[iVar0 /*12*/].f_11 != iParam0)
		{
		}
		else if (uParam1->f_16[iVar0 /*12*/].f_2 != iParam2)
		{
		}
		else if (iParam3 != -1 && uParam1->f_16[iVar0 /*12*/].f_3 != iParam3)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1095(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (uParam0->f_16[iVar0 /*12*/].f_3 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1096(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_41(uParam1[iVar0 /*52*/], 32) && !func_41(uParam1[iVar0 /*52*/], 64))
		{
		}
		else if (!func_123(iVar0, 0, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_558(iParam0, func_940(iVar1), 1) > fParam2)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1097(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 0;
	while (*uParam1 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_362[*uParam1 /*52*/].f_2.f_8), iParam0))
		{
		}
		else
		{
			iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(*uParam1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0)))
			{
			}
			else
			{
				return true;
			}
		}
		*uParam1++;
	}
	return false;
}

bool func_1098(int iParam0, int iParam1)
{
	int iVar0;

	*iParam1 = 0;
	while (*iParam1 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_362[*iParam1 /*52*/].f_2), iParam0))
		{
		}
		else
		{
			iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(*iParam1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0)))
			{
			}
			else
			{
				return true;
			}
		}
		*iParam1++;
	}
	return false;
}

int func_1099()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 20000;
	if (!func_451(&Var1))
	{
		return iVar0;
	}
	if (!func_299(Var1, -1321720745, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

int func_1100()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 45000;
	if (!func_451(&Var1))
	{
		return iVar0;
	}
	if (!func_299(Var1, 1252114078, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

int func_1101()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 65000;
	if (!func_451(&Var1))
	{
		return iVar0;
	}
	if (!func_299(Var1, 592666605, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

bool func_1102(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STATIONARY_ESCORT"):
		case joaat("PASSENGER_ESCORT"):
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1103(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ON_PRIMARY_FINAL_DROPOFF"):
			return true;
		case joaat("ON_SECONDARY_FINAL_DROPOFF"):
			return false;
		default:
			break;
	}
	return true;
}

var func_1104(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (!func_1147(iParam0))
	{
		return 0;
	}
	if (!func_1155(&Var0))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 23, iParam1, 0, iParam2))
	{
		return 0;
	}
	return func_1268(Var0, 53, 1);
}

void func_1105(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_1269(uParam0))
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

bool func_1106(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_1107(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1116202[iParam0 /*42*/].f_7.f_4, iParam1);
}

bool func_1108(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	*uParam1 = Global_1298536[iVar0 /*87*/].f_1;
	*iParam2 = Global_1298536[iVar0 /*87*/].f_3;
	return true;
}

int func_1109(int iParam0, bool bParam1)
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

int func_1110(int iParam0)
{
	return Global_1116202[iParam0 /*42*/];
}

bool func_1111(int iParam0)
{
	switch (iParam0)
	{
		case -570188536:
		case 82232150:
		case 1456739059:
			return true;
		default:
			break;
	}
	return false;
}

int func_1112(int iParam0)
{
	return Global_1109804.f_146.f_84[iParam0 /*4*/];
}

int func_1113(int iParam0)
{
	return Global_1120070[iParam0 /*2115*/].f_17;
}

void func_1114(int iParam0)
{
	if (!func_1270(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_21416.f_260), iParam0);
	}
}

void func_1115(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1271(&(Global_1139381.f_3876.f_2[func_507(iParam0, 1) /*4*/]));
}

bool func_1116(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 90);
}

var func_1117(int iParam0)
{
	return Global_1297717[iParam0 /*4*/].f_1;
}

void func_1118(struct<2> Param0, int iParam2)
{
	func_819(Param0, iParam2);
}

void func_1119(struct<2> Param0, int iParam2)
{
	func_819(Param0, iParam2);
}

void func_1120(var uParam0, int iParam1)
{
	func_1272(uParam0, iParam1);
}

var func_1121(int iParam0)
{
	return Global_1297717[iParam0 /*4*/].f_3;
}

bool func_1122(int iParam0)
{
	return iParam0 != 0;
}

void func_1123(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;

	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (!func_1273(iVar0, &vVar2))
		{
			MISC::_COPY_MEMORY(uParam0[iVar1 /*3*/], &vVar5, 3);
		}
		else if (vVar2.x == 0)
		{
			MISC::_COPY_MEMORY(uParam0[iVar1 /*3*/], &vVar5, 3);
		}
		else
		{
			MISC::_COPY_MEMORY(uParam0[iVar1 /*3*/], &vVar2, 3);
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_31 = iVar1;
}

int func_1124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EASY");
		case 1:
			return joaat("MEDIUM");
		case 2:
			return joaat("HARD");
		default:
			break;
	}
	return 0;
}

bool func_1125(var uParam0, var uParam1)
{
	return (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1);
}

int func_1126(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_814(joaat("TARGET"), func_1274(iParam0)) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return 0;
	}
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return 0;
	}
	return uVar2;
}

void func_1127(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_814(joaat("TARGET"), func_1274(iParam1)) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	if (!STATS::STAT_ID_SET_INT(&Var0, iParam0, true))
	{
		return;
	}
}

int func_1128(var uParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = func_1275(*uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(1, 31));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(iVar1, 20));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(uParam0->f_1, 10));
	return uVar0;
}

void func_1129(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	Var2.f_1 = -1;
	if (!func_1147(iParam0))
	{
		return;
	}
	MISC::_COPY_MEMORY(&Var2, bParam2, 4);
	Var2.f_4 = iParam3;
	iVar1 |= 4;
	switch (iParam1)
	{
		case 1:
			iVar1 |= 1;
			break;
		case 2:
			iVar1 |= 2;
			break;
		default:
			break;
	}
	switch (iParam5)
	{
		case 0:
			iVar1 |= 4;
			break;
		case 1:
			iVar1 |= 2052;
			break;
		default:
			break;
	}
	if (GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) == PLAYER::PLAYER_ID())
	{
		iVar1 |= 16384;
	}
	if (func_1276(iParam0))
	{
		iVar1 |= 65536;
	}
	func_1148(iParam0, iVar1, iParam4, &Var2);
	func_1149(iParam0, iVar1);
	func_1150(iParam0, iVar1, &Var2);
	func_1277(iVar1, &Var2);
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = joaat("PRIMARY_START");
			break;
		case 2:
			iVar0 = joaat("RIVAL_START");
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1151(iParam0, iVar0, iParam3);
	}
}

void func_1130(int iParam0)
{
	if (func_769(&(Global_1109804.f_247.f_9), iParam0, 3))
	{
	}
}

void func_1131(int iParam0)
{
	if (func_769(&(Global_1130367[PLAYER::PLAYER_ID() /*7*/].f_3), iParam0, 3))
	{
	}
}

void func_1132(int iParam0)
{
	func_1278(iParam0);
}

int func_1133(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_1279())
	{
		return 0;
	}
	if (!func_484())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1175(&Global_0, 8);
	}
	func_1175(&Global_0, 1);
	return 1;
}

void func_1134(struct<2> Param0, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_1280(func_1141(Param0));
	iVar1 = func_23(Param0);
	Var2.f_1 = bParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_21() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_1281(Param0, &Var2);
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
	STATS::_0xD5910ECF81A2278C(iVar0, iVar1, bParam2, &Var2);
}

void func_1135(struct<2> Param0, int iParam2)
{
	if (!func_28(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1282(Param0);
	}
	else
	{
		func_1283(Param0, iParam2);
	}
	func_1284();
}

void func_1136(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1285(&Global_1940258, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_1286(&Global_1940258, 8388608);
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

void func_1137(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1287(iVar0, 1);
		if ((iVar1 == joaat("CRIME_MURDER_PLAYER") || iVar1 == joaat("CRIME_MURDER_PLAYER_HORSE")) || iVar1 == joaat("CRIME_TRAMPLE_PLAYER"))
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1288(cVar2);
			}
			else
			{
				func_1289();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1138(bool bParam0)
{
	if (!bParam0 && func_1290(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_1139(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_1140(struct<2> Param0)
{
	return func_1292(func_1291(Param0));
}

int func_1141(var uParam0, var uParam1)
{
	return uParam0;
}

struct<2> func_1142()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_1143(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/].f_1;
}

bool func_1144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1145(var uParam0, int iParam1)
{
	func_1293(uParam0, iParam1);
}

bool func_1146(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_1147(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

void func_1148(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1294(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1295(iParam0, iVar0, &Var2, uParam3);
		if (Var2.f_2 == 0)
		{
		}
		else if ((Var2.f_3 && iParam1) != Var2.f_3)
		{
		}
		else
		{
			switch (Var2.f_2)
			{
				case joaat("COOLDOWN_TYPE"):
					break;
				case joaat("COOLDOWN"):
					func_1296(iParam0, iParam2, uParam3, 0, 0);
					break;
				case -2104202019:
				case joaat("TRADE_FAR_WINS"):
				case joaat("TRADE_EASY_WINS"):
				case joaat("TRADE_MEDIUM_WINS"):
				case joaat("WINS"):
				case joaat("SPECIAL_LOSSES"):
				case joaat("TRADE_NEAR_WINS"):
				case joaat("TRADE_HARD_WINS"):
				case joaat("SPECIAL_WINS"):
				case joaat("RIVAL_LOSSES"):
				case joaat("TRADE_LOSSES"):
				case joaat("RIVAL_WINS"):
				case joaat("SPECIAL_ATTEMPTS"):
				case joaat("LOSSES"):
				case joaat("TRADE_WINS"):
				case joaat("ATTEMPTS"):
				case joaat("TRADE_ATTEMPTS"):
				case joaat("RIVAL_ATTEMPTS"):
					STATS::_STAT_ID_INCREMENT_INT(&Var2, 1);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_1149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1297(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1298(iParam0, iVar0, &Var2);
		if ((Var2.f_4 && iParam1) != Var2.f_4)
		{
		}
		else if (!STATS::CHAL_IS_GOAL_ACTIVE(Var2, Var2.f_1))
		{
		}
		else
		{
			switch (Var2.f_2)
			{
				case joaat("INT"):
					STATS::CHAL_ADD_GOAL_PROGRESS_INT(Var2, Var2.f_1, Var2.f_3);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_1150(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	var uVar7;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1299(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_1300(iParam0, iVar0, uParam2, &Var2))
		{
		}
		else if ((Var2.f_2 && iParam1) != Var2.f_2)
		{
		}
		else if (!Var2.f_4)
		{
		}
		else
		{
			func_1301(Var2.f_1, &uVar7, Var2.f_3 & 1 == 1, 255, 0, 0);
		}
		iVar0++;
	}
}

void func_1151(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (!func_1302(iParam0, iParam2, iParam1, &iVar0, &uVar1))
	{
		return;
	}
	func_268(iVar0, 0, 0);
}

bool func_1152(int iParam0, var uParam1, var uParam2)
{
	if (!func_1303(iParam0))
	{
		return false;
	}
	if (!func_1304())
	{
		return false;
	}
	if (!func_1305(iParam0, uParam1, uParam2))
	{
		return false;
	}
	if (*uParam1 == joaat("MP_ACHIEVEMENTS") && Global_1572887.f_13 != 0)
	{
		return false;
	}
	else if (*uParam1 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_13 != -1)
	{
		return false;
	}
	return true;
}

void func_1153(int iParam0)
{
	Global_1109804.f_260.f_4367 = (Global_1109804.f_260.f_4367 - (Global_1109804.f_260.f_4367 && iParam0));
}

void func_1154(int iParam0)
{
	Global_1109804.f_260.f_5462 = (Global_1109804.f_260.f_5462 || iParam0);
}

bool func_1155(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = func_1306();
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(iParam0, &uVar1, 5);
	*iParam0 = uVar0;
	return true;
}

bool func_1156(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

int func_1157(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;

	*uParam7 = Param0.f_1;
	*uParam6 = 0;
	if (!func_1156(Param0, &(Param0.f_1), 30, 0, 0, 0))
	{
		*uParam6 = *uParam7;
		return 0;
	}
	iVar1 = func_1307(Param0);
	switch (iVar1)
	{
		case joaat("UNLOCK"):
			iVar0 = uParam5->f_4;
			break;
		case -1503324114:
			iVar0 = *uParam5;
			break;
		case -305921044:
			iVar0 = uParam5->f_2;
			break;
		default:
			break;
	}
	if (!func_1156(Param0, &(Param0.f_1), 31, iVar0, 0, 1))
	{
		*uParam6 = *uParam7;
		return 0;
	}
	*uParam6 = Param0.f_1;
	return 1;
}

bool func_1158(struct<5> Param0, int iParam5, int iParam6, var uParam7, var uParam8)
{
	var uVar0;
	int iVar2;
	int iVar3;

	MISC::_COPY_MEMORY(iParam6, &uVar0, 2);
	iVar2 = func_1308(Param0);
	if (iVar2 == 0)
	{
		return false;
	}
	iVar3 = func_1309(Param0);
	if (iVar3 == 0)
	{
		return false;
	}
	*iParam6 = { func_814(iVar3, iVar2) };
	if (!STATS::_STAT_ID_IS_VALID(iParam6))
	{
		return false;
	}
	*uParam7 = func_1310(Param0, iParam5 == joaat("COOLDOWN"));
	*uParam8 = func_1311(Param0, iParam5 == joaat("COOLDOWN"));
	return true;
}

bool func_1159()
{
	return func_28(Global_1051213);
}

void func_1160(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_1161(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_1162()
{
	switch (Global_1940258.f_38)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
			return true;
		default:
			break;
	}
	return false;
}

int func_1163()
{
	return Global_1051252.f_12;
}

char* func_1164()
{
	return "unnamed";
}

int func_1165(int iParam0)
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

bool func_1166(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_600(36, iParam0);
}

int func_1167(int iParam0)
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

bool func_1168(int iParam0)
{
	if (func_1312(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_1313(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_1169(struct<2> Param0)
{
	return func_958(Param0) == 0;
}

int func_1170(struct<2> Param0)
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
		if (func_29(Global_1900807[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1171(struct<2> Param0, bool bParam2)
{
	if (!func_28(Param0))
	{
		return;
	}
	if (!func_1169(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1314(Param0);
	}
	func_1135(Param0, 1);
	bParam2 = bParam2;
}

void func_1172(struct<2> Param0)
{
	struct<32> Var0;

	if (func_23(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_23(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_23(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_1177(Param0, &Var0))
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

int func_1173(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_1291(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736.f_66;
	func_1315(Param0, iVar0);
	Global_1900736.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736.f_66)
	{
		return iVar0;
	}
	func_1316(iVar0, iParam2);
	return iParam2;
}

bool func_1174(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_1175(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1176(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return 0;
	}
	iVar0 = func_1291(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1317(Param0, func_981(0), iParam2))
	{
		func_1135(func_981(0), 3);
		func_1135(func_981(iVar0), 4);
		return 0;
	}
	func_1316(iVar0, 0);
	func_1135(func_981(0), 3);
	func_1135(func_981(1), 4);
	return 1;
}

bool func_1177(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_262(Param0, &vVar0);
	if (func_1318(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_1178(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = false;
	switch (ENTITY::_0x61914209C36EFDDB(iParam0))
	{
		case 4:
		case 5:
		case 6:
			*iParam1 = PED::_GET_CARRIER_AS_HUMAN(iParam0);
			break;
		case 8:
		case 9:
			*iParam1 = PED::_GET_CARRIER_AS_HUMAN(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				*iParam1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
			}
			if ((ENTITY::DOES_ENTITY_EXIST(*iParam1) && !PED::IS_PED_HUMAN(*iParam1)) && PED::_0x2D64376CF437363E(*iParam1))
			{
				bVar2 = true;
			}
			break;
		case 7:
			*iParam1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
			bVar2 = true;
			break;
		case 3:
			return false;
	}
	if ((bVar2 && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		iVar0 = PED::_GET_RIDER_OF_MOUNT(*iParam1, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && bParam2)
		{
			iVar1 = PLAYER::_0xAD03B03737CE6810(*iParam1);
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
				if (func_523(*iParam1, iVar0, 1, 1) < 30f && !AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
				{
					*iParam1 = iVar0;
				}
			}
		}
		else
		{
			*iParam1 = iVar0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	return true;
}

int func_1179(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1161(iParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

bool func_1180(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_1319(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

int func_1181(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_962(vParam0);
	switch (iVar0)
	{
		case 5:
		case 6:
		case 7:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_AMBARINO");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_AMBARINO_RE");
				default:
					break;
			}
			break;
		case 3:
		case 9:
		case 10:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_HANOVER");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_HANOVER_RE");
				default:
					break;
			}
			break;
		case 0:
		case 2:
		case 11:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_LEMOYNE");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_LEMOYNE_RE");
				default:
					break;
			}
			break;
		case 1:
		case 4:
		case 12:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_WEST_ELIZABETH");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_WEST_ELIZABETH_RE");
				default:
					break;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_AUSTIN");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_AUSTIN_RE");
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_1182(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_38) || joaat("WEAPON_THROWN_BOLAS") == Global_1940258.f_38) && Global_1940258.f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1940258.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940258.f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_523(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_1320(iVar0, 0)))
		{
			if (func_1321(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_1183(int iParam0, int iParam1)
{
	return func_523(iParam0, iParam1, 1, 1);
}

float func_1184(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_1185(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return joaat("SPEECH_PARAMS_SHOUTED_CRITICAL");
		case 7:
			return joaat("SPEECH_PARAMS_SHOUTED_CLEAR");
		case 8:
			return joaat("SPEECH_PARAMS_ALLOW_REPEAT");
		case 9:
			return joaat("SPEECH_PARAMS_SHOUTED_CRITICAL");
		case 0:
			return joaat("SPEECH_PARAMS_SHOUTED_CRITICAL");
		default:
			break;
	}
	return joaat("SPEECH_PARAMS_SHOUTED_CLEAR");
}

char* func_1186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			if (iParam1 == joaat("CHASER"))
			{
				if (Local_15.f_315 > 1)
				{
					iVar0 = 0;
					while (iVar0 < 20)
					{
						if (Local_15.f_16[iVar0 /*12*/].f_2 != joaat("CHASER"))
						{
						}
						else
						{
							iVar1++;
						}
						iVar0++;
					}
					if (iVar1 > 1)
					{
						return "ARRIVAL_COMBAT_NEUTRAL";
					}
				}
				if (func_734())
				{
					return "LAW_TAUNT_GEN_NEUTRAL";
				}
				return "OPENS_FIRE";
			}
			else if (iParam1 == joaat("STATIONARY_ESCORT") || iParam1 == joaat("SHOTGUN_RIDER"))
			{
				return "RT_LET_EM_HAVE_IT";
			}
			return "GENERIC_SHOCKED_HIGH";
		case 1:
			if (iParam1 == joaat("STATIONARY_ESCORT") || iParam1 == joaat("SHOTGUN_RIDER"))
			{
				return "FINAL_WARNING";
			}
			return "GENERIC_FRIGHTENED_HIGH";
		case 2:
			return "SCARED_HELP";
		case 3:
			return "HAND_OVER_MONEY";
		case 4:
			return "GUN_BEG";
		case 5:
			return "PLEAD";
		case 6:
			if (iParam1 == joaat("STATIONARY_ESCORT") || iParam1 == joaat("SHOTGUN_RIDER"))
			{
				return "TIME_TO_GO";
			}
			return "GREET_SHOUTED";
		case 7:
			if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
			{
				return "GREET_PLAYER_CAPTURED_BOUNTY";
			}
			return "GANG_INTERACT_APPROACH_GOODS";
		case 9:
			if (iParam1 == joaat("STATIONARY_ESCORT"))
			{
				return "DISCOVERED_FAR";
			}
			else if (iParam1 == joaat("SHOTGUN_RIDER"))
			{
				if (func_1322())
				{
					return "RT_HEADS_UP_NIGHT_ROAD";
				}
				else
				{
					return "RT_HEADS_UP_WARY_ROAD";
				}
			}
			return "GREET_SHOUTED";
		case 8:
			if (Local_2027.f_10 == joaat("COACH_HOLDUP_KIDNAP"))
			{
				return "GENERIC_THANKS_SHOUTED";
			}
			return "GANG_INTERACT_GOODS_TO_BOSS";
		case 10:
			return "GUN_AVOID";
		case 11:
			return "LEAVE_NOW";
		default:
			break;
	}
	return "";
}

bool func_1187(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_1323(iParam0, &Var0);
}

char* func_1188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == joaat("CHASER"))
			{
				return "TAUNT_GEN_NEUTRAL";
			}
			else if (iParam1 == joaat("STATIONARY_ESCORT") || iParam1 == joaat("SHOTGUN_RIDER"))
			{
				return "OPENS_FIRE";
			}
			return "GENERIC_ANGRY_SHOUT";
		case 1:
			if (iParam1 == joaat("STATIONARY_ESCORT") || iParam1 == joaat("SHOTGUN_RIDER"))
			{
				return "CHALLENGE_THREATEN_ARMED";
			}
			return "INTIMIDATED_GEN";
		case 6:
			if (iParam1 == joaat("STATIONARY_ESCORT") || iParam1 == joaat("SHOTGUN_RIDER"))
			{
				return "GET_LOST";
			}
			return "GREET_GENERAL_STRANGER";
		case 8:
			return "GENERIC_CHEER";
		case 4:
			return "PLEAD";
		case 3:
			return "HAND_OVER_ITEM";
		case 5:
			return "GENERIC_CURSE_HIGH";
		case 2:
		case 10:
			return "PANIC_HELP";
		case 7:
		case 9:
			if (iParam1 == joaat("STATIONARY_ESCORT") || iParam1 == joaat("SHOTGUN_RIDER"))
			{
				return "RT_HEADS_UP_WARY_ROAD";
			}
			return "GREET_GENERAL_FAMILIAR";
		case 11:
			return "DONT_BE_STUPID";
		default:
			break;
	}
	return "";
}

char* func_1189(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			if (iParam1 == joaat("STATIONARY_ESCORT") || iParam1 == joaat("SHOTGUN_RIDER"))
			{
				return "GET_OUT";
			}
			break;
		case 1:
			return "DONT_WANT_TROUBLE";
		case 8:
			return "GENERIC_THANKS";
		case 3:
			return "SICK_BASTARD";
		case 4:
			return "SICK_BASTARD";
		case 7:
		case 9:
			if (iParam1 == joaat("STATIONARY_ESCORT") || iParam1 == joaat("SHOTGUN_RIDER"))
			{
				return "GREET_GENERAL_STRANGER";
			}
			return "GREET_RT_FRIENDLY";
		case 11:
			return "CHALLENGE_THREATEN_ARMED";
		case 10:
			return "GENERIC_FRIGHTENED_HIGH";
	}
	return "";
}

int func_1190(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(*iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), false, false))
		{
			return 0;
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		if (PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return 0;
		}
		if (PED::IS_PED_RAGDOLL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	bVar1 = (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0) || bParam2);
	if ((iParam1 == -2128726980 || ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && bVar1)
	{
		return 2;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iVar2, iParam1, true);
	if (iVar3 == 1 || iVar3 == 0)
	{
		return 3;
	}
	if (!bVar1)
	{
		return 1;
	}
	return 2;
}

int func_1191(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

void func_1192(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			TASK::TASK_DRIVE_BY(iParam0, iParam1, 0, 0f, 0f, 0f, fParam2, iParam3, bParam4, iParam5);
		}
		else
		{
			TASK::TASK_COMBAT_PED(iParam0, iParam1, 0, 0);
		}
	}
}

bool func_1193(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		default:
			return false;
	}
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (iVar1 < 5)
	{
		return false;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iVar0))
	{
		return false;
	}
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iVar0);
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return false;
	}
	if (!AITRANSPORT::_0x660639BC60157048(iVar2, iParam1) && !func_564(iVar2, 1920417248))
	{
		return false;
	}
	return true;
}

void func_1194(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

int func_1195()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	switch (iVar0)
	{
		case 0:
			return joaat("WORLD_HUMAN_WAITING_IMPATIENT");
		case 1:
			return joaat("WORLD_HUMAN_STERNGUY_IDLES");
		case 2:
			return joaat("WORLD_HUMAN_DRINKING");
		case 3:
			return joaat("WORLD_HUMAN_SMOKE");
		case 4:
			return joaat("WORLD_HUMAN_SMOKE_NERVOUS_STRESSED");
		case 5:
			return joaat("WORLD_HUMAN_GUARD_SCOUT");
		case 6:
			return joaat("WORLD_HUMAN_GUARD_MILITARY");
		case 7:
			return joaat("WORLD_HUMAN_DRINK_FLASK");
		default:
			break;
	}
	return joaat("WORLD_HUMAN_GUARD_SCOUT");
}

bool func_1196(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (ENTITY::_0x61914209C36EFDDB(iParam0))
	{
		case 5:
			iVar0 = PED::_GET_CARRIER_AS_HUMAN(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return false;
			}
			if (!PED::IS_PED_A_PLAYER(iVar0))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				return false;
			}
			*iParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			return true;
		case 7:
			iVar1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return false;
			}
			iVar0 = PED::_GET_RIDER_OF_MOUNT(iVar1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return false;
			}
			if (!PED::IS_PED_A_PLAYER(iVar0))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				return false;
			}
			*iParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1197(int iParam0)
{
	int iVar0;

	if (Local_15.f_16[iParam0 /*12*/].f_2 != joaat("CHASER"))
	{
		return false;
	}
	iVar0 = Local_15.f_16[iParam0 /*12*/].f_11;
	if (iVar0 < 0)
	{
		return false;
	}
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (iVar0 >= 20)
			{
				return false;
			}
			if (Local_15.f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
			{
				return false;
			}
			if (func_201(iVar0, &Local_15, 32))
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_16[iVar0 /*12*/]))
			{
				return false;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (iVar0 >= 4)
			{
				return false;
			}
			if ((!func_202(iVar0, &Local_15, 128) || func_202(iVar0, &Local_15, 2)) || func_202(iVar0, &Local_15, 16))
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_257[iVar0 /*5*/]))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_1198(struct<2> Param0)
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
	if (!func_262(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_262(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
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

bool func_1199(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = ENTITY::IS_ENTITY_A_PED(iParam2);
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (uParam0->f_2[iVar0] == iParam2)
			{
				*uParam3 = iVar0;
				*uParam1 = uParam0->f_2[iVar0];
				return true;
			}
			else if (bVar1 && ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_2[iVar0]))
			{
				iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam2);
				if (PED::GET_PED_CONFIG_FLAG(iVar2, 140, false) && PED::_0xE4770DA1B8FF4FD1(iVar2) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2[iVar0]))
				{
					*uParam3 = iVar0;
					*uParam1 = uParam0->f_2[iVar0];
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1200(int iParam0)
{
	if (ENTITY::IS_ENTITY_A_PED(*iParam0))
	{
		if (iParam0->f_3 || iParam0->f_24)
		{
			return true;
		}
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(*iParam0))
	{
		if (iParam0->f_3)
		{
			return true;
		}
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(*iParam0))
	{
		if (iParam0->f_3)
		{
			return true;
		}
	}
	return false;
}

int func_1201()
{
	return Global_1893587.f_2;
}

bool func_1202(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_1203(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_1324(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1892753[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iVar4 /*36*/].f_4))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887339[iVar4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_1204(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_1205(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Local_15.f_329[iVar0] == 255)
		{
		}
		else if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_329[iVar0]) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_329[iVar0]))
		{
		}
		else
		{
			*iParam0 = Local_15.f_329[iVar0];
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1206(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Local_15.f_329[iVar0] == 255)
		{
		}
		else if (Local_15.f_329[iVar0] != iParam0)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1207(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam0, true, false, 256);
	if (iParam1 == joaat("PLAYER"))
	{
		iVar0 = PED::_GET_LAST_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, true, false, 256);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, true, false, 256);
		}
		return;
	}
	else if (iParam1 == joaat("PLAYER_HORSE"))
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0) || !NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return;
	}
	iVar2 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::_0xA6C0787443C9583E(iVar2);
	if (iVar3 == iParam2 && bParam3)
	{
		NETWORK::_0x7182EDDA1EE7DB5A(iVar2);
		return;
	}
	else if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
	{
		*bParam5 = 1;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		*bParam5 = 1;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
	{
		*bParam5 = 1;
	}
	else if (!func_1206(iVar3))
	{
		*bParam5 = 1;
	}
	if (bParam4)
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
}

bool func_1208(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_HORSE"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1209(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7)
{
	int iVar0;

	switch (iParam2)
	{
		case joaat("PLAYER_HORSE"):
			if (iParam1 >= 7 || iParam1 < 0)
			{
				return true;
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_329[iParam1]) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_329[iParam1]))
			{
				return true;
			}
			if (Local_15.f_329[iParam1] != PLAYER::PLAYER_ID())
			{
				return false;
			}
			if (Local_2027.f_537.f_1 > 40)
			{
				return true;
			}
			iVar0 = func_1325(vParam4, fParam7, 0, 0, 1, 100, 0, 1);
			if (iVar0 == 0)
			{
				Local_2027.f_537.f_1++;
				return false;
			}
			*iParam3 = func_267(iVar0);
			break;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam3);
}

float func_1210(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BEHIND_PLAYER"):
			return 0f;
		case 666862086:
			return 270f;
		case 1213581433:
			return 90f;
		case -1518250965:
			return 180f;
		default:
			break;
	}
	return 180f;
}

void func_1211(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

bool func_1212(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

void func_1213(vector3 vParam0, vector3 vParam3)
{
	char* sVar0;

	sVar0 = func_226();
	CAM::_0x0E94C95EC3185FA9(sVar0, vParam0, vParam3);
}

void func_1214(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iParam2);
		MAP::_BLIP_SET_MODIFIER(*uParam1, 942020339);
		MAP::SET_BLIP_SPRITE(*uParam1, joaat("BLIP_AMBIENT_LAW"), true);
		return;
	}
	*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iParam2);
	MAP::_BLIP_SET_MODIFIER(*uParam1, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
	func_272(iParam0, 4096);
	if (bParam4)
	{
		MAP::_BLIP_SET_MODIFIER(*uParam1, -662251075);
		func_272(iParam0, 131072);
	}
}

void func_1215(var uParam0, int iParam1)
{
	*uParam0 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, func_1326());
}

void func_1216(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, iParam2);
	MAP::SET_BLIP_SPRITE(*uParam1, joaat("BLIP_AMBIENT_VIP"), true);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_1217());
	MAP::_BLIP_SET_MODIFIER(*uParam1, -1636811933);
	MAP::_BLIP_SET_MODIFIER(*uParam1, 580546400);
	MAP::_BLIP_SET_MODIFIER(*uParam1, 231194138);
	if (func_227(262144))
	{
		MAP::_BLIP_SET_MODIFIER(*uParam1, 231194138);
	}
	if (func_271(iParam0, 33554432))
	{
		iVar0 = func_873(iParam0, iParam2, 1);
	}
	if (iVar0 != 0)
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam1, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0));
	}
}

char* func_1217()
{
	switch (func_199(&Local_2027))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_BLIP_VIP";
		default:
			break;
	}
	return "NET_CHU_BLIP_PASSENGER";
}

char* func_1218(char* sParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return sParam0;
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_CHU_VAR_PLAYER_ESCORT", sParam0, iParam1);
}

int func_1219(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 408396114;
		case 2:
			return -2086635932;
		case 3:
			return 408396114;
		case 4:
			return -2086635932;
		case 5:
			return 408396114;
		default:
			break;
	}
	return 0;
}

char* func_1220()
{
	return "NET_CHU_BLIP_MONEY_BAG";
}

bool func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

void func_1222(int iParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		func_243(iParam1);
	}
	*iParam1 = MAP::_0x3E593DF9C2962EC6(func_1219(iParam0));
	iVar0 = func_1000(iParam0);
	iVar1 = func_1327(iParam0);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam1, iVar0, false);
	}
	if (iVar1 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(*iParam1, iVar1);
	}
}

bool func_1223(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { func_940(PLAYER::PLAYER_ID()) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (uParam0->f_16[iVar4 /*12*/].f_2 == 0 || uParam0->f_16[iVar4 /*12*/].f_2 == -1088690539)
		{
		}
		else if (!func_1102(uParam0->f_16[iVar4 /*12*/].f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar4 /*12*/]))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(uParam0->f_16[iVar4 /*12*/]);
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > 80f)
			{
			}
			else
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

bool func_1224(vector3 vParam0, float fParam3, float fParam4)
{
	if (fParam4 + fParam3) < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_940(PLAYER::GET_PLAYER_INDEX()), true)
	{
		return false;
	}
	return CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
}

bool func_1225(var uParam0)
{
	int iVar0;

	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202.f_25[iVar0]))
				{
				}
				else
				{
					*uParam0 = Local_2027.f_202.f_25[iVar0];
					return true;
				}
				iVar0++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (Local_15.f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202[iVar0]))
				{
				}
				else
				{
					*uParam0 = Local_2027.f_202[iVar0];
					return true;
				}
				iVar0++;
			}
			break;
	}
	return false;
}

float func_1226(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

char* func_1227(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Local_15.f_316;
	if (GANG::_0xD6F6ACF4392187FB(iVar0) && GANG::_0x0F99F6436528A089(iVar0))
	{
		return func_1233(iVar0, iParam0);
	}
	iVar2 = 255;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!func_41(&(Local_362[iVar1 /*52*/]), 32))
		{
		}
		else if (!func_123(iVar1, 0, 1))
		{
		}
		else
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == 255)
	{
		return "";
	}
	return func_1228(iVar2, iParam0);
}

char* func_1228(int iParam0, int iParam1)
{
	return func_1328(PLAYER::GET_PLAYER_NAME(iParam0), iParam1);
}

int func_1229(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ATTACK"):
			return 1;
		case joaat("COLLECT"):
			return 4;
		case joaat("DELIVER"):
			return 3;
		case joaat("NONE"):
			return 0;
		case joaat("DEFEND"):
			return 2;
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

var func_1230(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1231(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

char* func_1232()
{
	var uVar0;

	switch (func_251())
	{
		case 1:
			if (func_1329(&uVar0))
			{
				return func_695(&uVar0);
			}
			break;
		case 2:
			if (func_1330(&uVar0))
			{
				return func_695(&uVar0);
			}
			break;
	}
	return "NET_CHU_LOC_DEFAULT_DROPOFF";
}

char* func_1233(int iParam0, int iParam1)
{
	return func_1332(func_1331(iParam0, 1, 0), iParam1);
}

var func_1234(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_1235()
{
	return "RDRO_GFH_Sounds";
}

char* func_1236()
{
	return "match_start";
}

var func_1237(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = sParam3;
	Var0.f_2 = sParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = UIFEED::_0xA6F4216AB10EB08E(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

int func_1238()
{
	int iVar0;
	int iVar1;

	func_208(&iVar0, &iVar1);
	if (iVar0 == 0)
	{
		return 2;
	}
	if (iVar0 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_1239(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	*uParam2 = 0;
	*iParam0 = 255;
	*iParam1 = 0;
	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (!func_426(iVar1, 0) || func_426(iVar1, 1))
				{
				}
				else if (GANG::_0x0F99F6436528A089(Local_15.f_257[iVar1 /*5*/].f_4))
				{
					if (bVar0)
					{
						if ((*uParam2 && *iParam1 != Local_15.f_257[iVar1 /*5*/].f_4) || (!*uParam2 && GANG::_0x901E0DC25080C8B9(*iParam0) != Local_15.f_257[iVar1 /*5*/].f_4))
						{
							return false;
						}
					}
					else
					{
						*iParam1 = Local_15.f_257[iVar1 /*5*/].f_4;
						*uParam2 = 1;
						bVar0 = true;
					}
				}
				else if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_257[iVar1 /*5*/].f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_257[iVar1 /*5*/].f_3))
				{
					if (bVar0)
					{
						if ((*uParam2 && GANG::_0x901E0DC25080C8B9(Local_15.f_257[iVar1 /*5*/].f_3) != *iParam1) || (!*uParam2 && GANG::_0x3F59FE6F37869576(*iParam0, Local_15.f_257[iVar1 /*5*/].f_3)))
						{
							return false;
						}
					}
					else
					{
						*iParam0 = Local_15.f_257[iVar1 /*5*/].f_3;
						*uParam2 = 0;
						bVar0 = true;
					}
				}
				else
				{
					return false;
				}
				iVar1++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_426(iVar1, 0) || func_426(iVar1, 1))
				{
				}
				else if (GANG::_0x0F99F6436528A089(Local_15.f_16[iVar1 /*12*/].f_6))
				{
					if (bVar0)
					{
						if ((*uParam2 && *iParam1 != Local_15.f_16[iVar1 /*12*/].f_6) || (!*uParam2 && GANG::_0x901E0DC25080C8B9(*iParam0) != Local_15.f_16[iVar1 /*12*/].f_6))
						{
							return false;
						}
					}
					else
					{
						*iParam1 = Local_15.f_16[iVar1 /*12*/].f_6;
						*uParam2 = 1;
						bVar0 = true;
					}
				}
				else if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_16[iVar1 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_16[iVar1 /*12*/].f_7))
				{
					if (bVar0)
					{
						if ((*uParam2 && GANG::_0x901E0DC25080C8B9(Local_15.f_16[iVar1 /*12*/].f_7) != *iParam1) || (!*uParam2 && GANG::_0x3F59FE6F37869576(*iParam0, Local_15.f_16[iVar1 /*12*/].f_7)))
						{
							return false;
						}
					}
					else
					{
						*iParam0 = Local_15.f_16[iVar1 /*12*/].f_7;
						*uParam2 = 0;
						bVar0 = true;
					}
				}
				else
				{
					return false;
				}
				iVar1++;
			}
			break;
	}
	if (*uParam2)
	{
		return *iParam1 != 0;
	}
	return *iParam0 != 255;
}

char* func_1240(int iParam0, int iParam1, int iParam2)
{
	if (GANG::_0xD6F6ACF4392187FB(iParam1) && GANG::_0x0F99F6436528A089(iParam1))
	{
		return func_1233(iParam1, iParam2);
	}
	return func_1228(iParam0, iParam2);
}

var func_1241(char* sParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = sParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	uVar20 = UIFEED::_0x02BCC0FE9EBA3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

bool func_1242()
{
	return true;
}

bool func_1243()
{
	return (!Global_1903133 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1903133.f_2)) >= 5);
}

void func_1244(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

bool func_1245()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::_0xE368E8422C860BA7(func_775(), func_776(), -2) || !AUDIO::_0xE368E8422C860BA7(func_777(), func_776(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_778(), func_776(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_1333(), func_776(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_779(), func_776(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_780(), func_781(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_782(), func_783(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1246(var uParam0, var uParam1, int iParam2)
{
	switch (func_1334(iParam2))
	{
		case 0:
			func_1335(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1336(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1337(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1338(uParam0, uParam1, iParam2, -1082130432 /* Float: -1f */);
			break;
		case 4:
			func_1339(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1247(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0, bParam1);
}

void func_1248(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam4 == 0)
	{
		iParam4 = joaat("COLOR_PURE_WHITE");
	}
	(*uParam1)[iParam2 /*34*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, sParam3);
	func_1335((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_4), 21, 0);
	func_1335((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_5), 20, 0);
	func_1335((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_7), 23, 0);
	func_1335((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_8), 22, 0);
	func_1335((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_9), 24, 0);
	func_1335((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_2), 18, iParam4);
	if (iParam5 == 0)
	{
		func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25);
	}
	else
	{
		func_1335((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25, iParam5);
	}
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_1), 17);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_3), 19);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_10), 26);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_11), 27);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_20), 16);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_21), 14);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_22), 15);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_12), 29);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_13), 28);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_14), 30);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_15), 31);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_16), 32);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_17), 33);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_18), 34);
	func_1246((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_19), 35);
}

void func_1249(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_1250(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_759((iVar5 / 60), 0, 180);
	iVar7 = func_759((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_0xD8402B858F4DDD88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_1251(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, sParam1);
}

void func_1252(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 10000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_778()))
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, func_778(), func_776(), 1);
			}
			else
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, sParam2, func_776(), 1);
				AUDIO::_0x9821B68CD3E05F2B("Time", 10f, sParam2, func_776());
			}
		}
	}
	else
	{
		func_458(uParam0);
	}
}

void func_1253(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_12, func_1333(), func_776(), 1);
	}
}

void func_1254(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case joaat("ATTACK"):
			*iParam1 = func_1340();
			*uParam2 = func_1340();
			*iParam3 = func_1340();
			*uParam4 = func_1340();
			*uParam5 = func_1341();
			*uParam6 = func_1340();
			*uParam7 = func_1340();
			break;
		case joaat("DELIVER"):
			*iParam1 = func_1342();
			*uParam2 = func_1342();
			*iParam3 = func_1340();
			*uParam4 = func_1341();
			*uParam5 = func_1341();
			*uParam6 = func_1340();
			*uParam7 = func_1340();
			break;
		case joaat("DEFEND"):
			*iParam1 = func_1341();
			*uParam2 = func_1342();
			*iParam3 = func_1340();
			*uParam4 = func_1341();
			*uParam5 = func_1341();
			*uParam6 = func_1340();
			*uParam7 = func_1340();
			break;
		case joaat("COLLECT"):
			*iParam1 = func_1340();
			*uParam2 = func_1340();
			*iParam3 = func_1341();
			*uParam4 = func_1340();
			*uParam5 = func_1341();
			*uParam6 = func_1340();
			*uParam7 = func_1340();
			break;
	}
}

void func_1255(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	float fVar10;
	char[] cVar11[8];

	bVar3 = true;
	bVar4 = true;
	iVar5 = (uParam0[iParam1 /*34*/])->f_25;
	iVar6 = (uParam0[iParam1 /*34*/])->f_26;
	iVar9 = (uParam0[iParam1 /*34*/])->f_23;
	if (bParam10)
	{
		iVar9 = 0;
	}
	switch (iVar9)
	{
		case -1:
		case 0:
			bVar3 = false;
			break;
		case 5:
			iVar0 = iParam5;
			iVar2 = iParam5;
			break;
		case 6:
			iVar0 = iParam7;
			iVar2 = iParam7;
			break;
		case 7:
			bVar4 = false;
			iVar0 = func_1342();
			iVar2 = iParam6;
			iVar1 = iParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			iVar0 = func_1342();
			iVar2 = iParam8;
			iVar1 = iParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			iVar0 = func_1342();
			iVar2 = func_1342();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
		case 9:
			iVar0 = func_1340();
			iVar2 = func_1340();
			break;
		case 4:
			iVar0 = iParam4;
			break;
		default:
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
	}
	func_1247((uParam0[iParam1 /*34*/])->f_21, bVar3);
	if (bVar3)
	{
		func_1343(uParam0, iParam1);
		func_1247((uParam0[iParam1 /*34*/])->f_11, bVar4);
		fVar10 = (uParam0[iParam1 /*34*/])->f_29;
		if ((uParam0[iParam1 /*34*/])->f_28 > 1)
		{
			fVar10 = (BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_27) / BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_28));
			if (bParam11 && !func_1344((uParam0[iParam1 /*34*/])->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_28, 8);
				}
			}
			func_1251((uParam0[iParam1 /*34*/])->f_20, &cVar11);
		}
		else
		{
			func_1251((uParam0[iParam1 /*34*/])->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (!bParam9)
			{
				func_1345((uParam0[iParam1 /*34*/])->f_2, iVar2);
			}
			func_1346((uParam0[iParam1 /*34*/])->f_1, fVar10);
			func_1247((uParam0[iParam1 /*34*/])->f_10, 0);
			func_1247((uParam0[iParam1 /*34*/])->f_3, 1);
		}
		else
		{
			func_1247((uParam0[iParam1 /*34*/])->f_10, 1);
			func_1247((uParam0[iParam1 /*34*/])->f_3, 0);
		}
		if (iVar6 != 0)
		{
			if (!bParam13)
			{
				func_1345((uParam0[iParam1 /*34*/])->f_6, iVar0);
			}
			func_1345((uParam0[iParam1 /*34*/])->f_4, iVar5);
			func_1345((uParam0[iParam1 /*34*/])->f_5, iVar6);
		}
		if (!MISC::IS_STRING_NULL(sVar8))
		{
			func_1345((uParam0[iParam1 /*34*/])->f_14, iVar1);
			func_1251((uParam0[iParam1 /*34*/])->f_12, sVar7);
			func_1251((uParam0[iParam1 /*34*/])->f_13, sVar8);
			func_1247((uParam0[iParam1 /*34*/])->f_15, 1);
		}
		else
		{
			func_1247((uParam0[iParam1 /*34*/])->f_15, 0);
		}
		func_1247((uParam0[iParam1 /*34*/])->f_16, (uParam0[iParam1 /*34*/])->f_30);
	}
}

void func_1256(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_BLANKETS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLES"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("SADDLE_HORNS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("SADDLE_STIRRUPS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_BEDROLLS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLEBAGS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 355515932, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -749728163, 0, 0);
}

void func_1257(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, iVar0, false, func_21() == 0, false);
}

void func_1258(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

int func_1259(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Param0, Param0.f_1);
	return iVar0;
}

int func_1260()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			return joaat("WEAPON_REVOLVER_CATTLEMAN");
		case 1:
			return joaat("WEAPON_REPEATER_CARBINE");
		default:
			break;
	}
	return joaat("WEAPON_REVOLVER_CATTLEMAN");
}

bool func_1261(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1262(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		Var0 = { func_1347(iParam0, 0, 1) };
		if (func_1348(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_1349(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_1350(iParam0, Var0, Var0.f_4, 0) };
				func_1351(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_1352(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_1353(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_1354(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_1263(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_1264(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

bool func_1265(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	float fVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return false;
	}
	if (!ENTITY::GET_ENTITY_SPEED(iParam0) < 0.5f)
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), true);
	if (fVar3 > fParam2)
	{
		return false;
	}
	return true;
}

bool func_1266(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			return true;
		default:
			break;
	}
	return false;
}

int func_1267(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		LAW::_0x0C392DB374655176(vParam0, fParam3, iVar0);
		if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return 1;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return 0;
}

var func_1268(vector3 vParam0, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

bool func_1269(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1270(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21416.f_260), iParam0);
}

void func_1271(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

void func_1272(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1273(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1126(iParam0);
	if (!func_1355(iVar0))
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	iVar1 = BUILTIN::SHIFT_RIGHT(iVar0, 20) & 1023;
	*uParam1 = func_1356(0, iVar1);
	uParam1->f_2 = BUILTIN::SHIFT_RIGHT(iVar0, 10) & 1023;
	if (*uParam1 == 0)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	if (uParam1->f_2 < 0 || uParam1->f_2 >= 512)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	return true;
}

int func_1274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TARGET_0");
		case 1:
			return joaat("TARGET_1");
		case 2:
			return joaat("TARGET_2");
		case 3:
			return joaat("TARGET_3");
		case 4:
			return joaat("TARGET_4");
		case 5:
			return joaat("TARGET_5");
		case 6:
			return joaat("TARGET_6");
		case 7:
			return joaat("TARGET_7");
		case 8:
			return joaat("TARGET_8");
		case 9:
			return joaat("TARGET_9");
		default:
			break;
	}
	return 0;
}

int func_1275(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar7;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar7 = func_1357(iParam0);
	if (iVar7 == -1)
	{
		return 0;
	}
	if (!func_1358(&uVar2))
	{
		return -1;
	}
	if (!func_1359(&uVar2, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1359(&uVar2, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1359(&uVar2, 7, func_1360(iVar7), 0, 1))
	{
		return -1;
	}
	if (!func_1359(&uVar2, 8, 0, 0, 1))
	{
		return -1;
	}
	iVar0 = func_1361(&uVar2, 0);
	if (!func_1359(&uVar2, 9, iParam0, 0, 1))
	{
		return -1;
	}
	iVar1 = func_1362(&uVar2);
	return ((iVar0 - iVar1) - 1);
}

bool func_1276(int iParam0)
{
	struct<5> Var0;

	if (!func_1147(iParam0))
	{
		return false;
	}
	if (!func_1155(&Var0))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	return func_1156(Var0, &(Var0.f_1), 48, 0, 0, 0);
}

void func_1277(int iParam0, var uParam1)
{
	func_1363(iParam0, uParam1);
}

void func_1278(int iParam0)
{
	Global_1109804.f_260.f_4367 = (Global_1109804.f_260.f_4367 || iParam0);
}

bool func_1279()
{
	return !Global_1572887.f_9;
}

int func_1280(int iParam0)
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

void func_1281(struct<2> Param0, var uParam2)
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
	switch (func_1141(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1365(func_1364(Param0));
			iVar5 = func_1366(iVar4);
			if (!func_1367(iVar5, 0))
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

int func_1282(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_1198(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1368(iVar0);
}

int func_1283(struct<2> Param0, int iParam2)
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
	if (!func_262(Param0, &vVar0))
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
		func_262(Global_1071686.f_19550.f_1[iVar9 /*3*/], &vVar3);
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
			func_1369(iVar9);
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

void func_1284()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (func_262(Global_1071686.f_19550.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_1285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1286(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1287(int iParam0, int iParam1)
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

void func_1288(char[12] cParam0)
{
	Global_1939161.f_75.f_67 = { cParam0 };
}

void func_1289()
{
	StringCopy(&(Global_1939161.f_75.f_67), "", 24);
}

bool func_1290(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1370(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1371(iVar1))
	{
		if (Global_1071686.f_19648.f_24 && !func_1372(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1071686.f_19648[iVar1], iVar2) || MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2);
}

int func_1291(struct<2> Param0)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_29(Global_1900736.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1292(int iParam0)
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
		func_1160(&(Global_1900736.f_1[0 /*2*/]));
		return 1;
	}
	func_1160(&(Global_1900736.f_1[iParam0 /*2*/]));
	Global_1900736.f_66 = (Global_1900736.f_66 - 1);
	func_1316(iParam0, Global_1900736.f_66);
	return 1;
}

void func_1293(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1294(int iParam0)
{
	struct<5> Var0;

	if (!func_1147(iParam0))
	{
		return 0;
	}
	if (!func_1155(&Var0))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 16, 0, 0, 0))
	{
		return 0;
	}
	return func_1373(Var0, 1);
}

int func_1295(int iParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	var uVar4;
	var uVar5;
	struct<5> Var6;
	var uVar11;
	var uVar12;
	int iVar13;

	MISC::_COPY_MEMORY(iParam2, &uVar0, 4);
	if (!func_1147(iParam0))
	{
		return 0;
	}
	if (!func_1155(&Var6))
	{
		return 0;
	}
	if (!func_1156(Var6, &(Var6.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var6, &(Var6.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var6, &(Var6.f_1), 16, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1156(Var6, &(Var6.f_1), 17, iParam1, 0, 0))
	{
		return 0;
	}
	iVar13 = func_1374(Var6);
	func_1157(Var6, uParam3, &uVar5, &uVar4);
	Var6.f_1 = uVar5;
	if (!func_1158(Var6, iVar13, iParam2, &uVar11, &uVar12))
	{
		return 0;
	}
	Var6.f_1 = uVar4;
	iParam2->f_2 = iVar13;
	switch (iVar13)
	{
		case joaat("COOLDOWN_TYPE"):
			iParam2->f_3 = -2147483648;
			break;
		default:
			if (func_1373(Var6, 5) != 0)
			{
				iParam2->f_3 = func_1375(Var6, joaat("TRIGGER"));
			}
			break;
	}
	return 1;
}

void func_1296(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	vector3 vVar2;
	var uVar9;
	var uVar11;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	bool bVar17;

	vVar2.f_2 = 4;
	Var0 = { func_1376(iParam3) };
	if (!func_1377(&Var0))
	{
		return;
	}
	if (!func_834(iParam0, Var0, uParam2, &uVar9))
	{
		return;
	}
	if (!func_834(iParam0, Var0.f_1, uParam2, &uVar11))
	{
		return;
	}
	if (!func_1378(iParam0, iParam1, Var0, uParam2, &vVar2))
	{
		return;
	}
	bVar17 = func_1379(iParam0, uParam2, &iVar14, &uVar16, 0, iParam3);
	iVar13 = func_1380(&vVar2, -15, 0, 0, 0);
	iVar15 = func_1380(&vVar2, iVar13, 1, iVar13, joaat("END"));
	if (bVar17 && !bParam4)
	{
		if (iVar14 > iVar15)
		{
			return;
		}
	}
	STATS::STAT_ID_SET_INT(&uVar9, iVar13, true);
	STATS::STAT_ID_SET_INT(&uVar11, iParam1, true);
}

int func_1297(int iParam0)
{
	struct<5> Var0;

	if (!func_1147(iParam0))
	{
		return 0;
	}
	if (!func_1155(&Var0))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 37, 0, 0, 0))
	{
		return 0;
	}
	return func_1373(Var0, 7);
}

int func_1298(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;

	MISC::_COPY_MEMORY(iParam2, &uVar5, 5);
	if (!func_1147(iParam0))
	{
		return 0;
	}
	if (!func_1155(&Var0))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 37, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 38, iParam1, 0, 1))
	{
		return 0;
	}
	iParam2->f_1 = func_1381(Var0);
	*iParam2 = func_1382(Var0);
	iParam2->f_2 = func_1311(Var0, 1);
	iParam2->f_4 = func_1375(Var0, joaat("TRIGGER"));
	switch (iParam2->f_2)
	{
		case joaat("INT"):
			iParam2->f_3 = func_1383(Var0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1299(int iParam0)
{
	struct<5> Var0;

	if (!func_1147(iParam0))
	{
		return 0;
	}
	if (!func_1155(&Var0))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1156(Var0, &(Var0.f_1), 42, 0, 0, 0))
	{
		return 0;
	}
	return func_1373(Var0, 10);
}

bool func_1300(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;

	if (!func_1147(iParam0))
	{
		return false;
	}
	if (!func_1155(&Var0))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 42, 0, 0, 1))
	{
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 43, iParam1, 0, 1))
	{
		return false;
	}
	func_1157(Var0, uParam2, &uVar6, &uVar5);
	Var0.f_1 = uVar6;
	uParam3->f_1 = func_1384(Var0);
	uParam3->f_4 = func_1385(Var0);
	Var0.f_1 = uVar5;
	*uParam3 = func_1386(Var0);
	uParam3->f_2 = func_1375(Var0, joaat("TRIGGER"));
	uParam3->f_3 = func_1375(Var0, joaat("BEHAVIOR"));
	return true;
}

int func_1301(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var12;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_763(iParam0, uParam1, &Var12, &Var0, bParam2, iParam3, iParam4, bParam5);
}

bool func_1302(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_1147(iParam0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1155(&Var0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1156(Var0, &(Var0.f_1), 29, iParam2, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	*iParam3 = func_1387(Var0);
	*uParam4 = func_1388(Var0);
	if (iParam1 != 0)
	{
		if (func_1156(Var0, &(Var0.f_1), 30, 0, 0, 0))
		{
			if (func_1156(Var0, &(Var0.f_1), 31, iParam1, 0, 0))
			{
				*iParam3 = func_1387(Var0);
				*uParam4 = func_1388(Var0);
			}
		}
	}
	if (*iParam3 == 0)
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	return true;
}

bool func_1303(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 33)
	{
		return false;
	}
	return true;
}

bool func_1304()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

bool func_1305(int iParam0, var uParam1, var uParam2)
{
	if (!func_1303(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			if (Global_1572887.f_13 != 0)
			{
				*uParam1 = joaat("SP_ACHIEVEMENTS");
			}
			else
			{
				*uParam1 = joaat("MP_ACHIEVEMENTS");
			}
			*uParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
		case 17:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_PERSISTENT");
			break;
		case 18:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_BUCKLE");
			break;
		case 19:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_MVP");
			break;
		case 20:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_HORSES");
			break;
		case 21:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_COUNTER");
			break;
		case 22:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_HOME");
			break;
		case 23:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_CRAFTAMMO");
			break;
		case 24:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_CRAFT");
			break;
		case 25:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_BUTCHER");
			break;
		case 26:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_HERBS");
			break;
		case 27:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_INTRO");
			break;
		case 29:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_SERIES");
			break;
		case 28:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_GUN4HIRE");
			break;
		case 30:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_FREEMODE");
			break;
		case 31:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_POSSE");
			break;
		case 32:
			if (Global_1572887.f_13 != 0)
			{
				*uParam1 = joaat("SP_ACHIEVEMENTS");
			}
			else
			{
				*uParam1 = joaat("MP_ACHIEVEMENTS");
			}
			*uParam2 = joaat("ACH_MP_BONDING");
			break;
		default:
			return false;
	}
	return true;
}

var func_1306()
{
	return Global_1071686.f_28448[32 /*4*/].f_3;
}

int func_1307(struct<5> Param0)
{
	return func_1268(Param0, 49, 1);
}

int func_1308(struct<5> Param0)
{
	return func_1268(Param0, 51, 1);
}

int func_1309(struct<5> Param0)
{
	return func_1268(Param0, 50, 1);
}

var func_1310(struct<5> Param0, bool bParam5)
{
	return func_1268(Param0, 61, bParam5);
}

var func_1311(struct<5> Param0, bool bParam5)
{
	return func_1268(Param0, 59, bParam5);
}

bool func_1312(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_1313(int iParam0)
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
		func_1389(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1390(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_1314(struct<2> Param0)
{
	if (func_23(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_23(Param0)))
	{
		STATS::_0x99230691875FC218(func_1141(Param0), func_23(Param0), Global_35);
	}
}

void func_1315(struct<2> Param0, int iParam2)
{
	if (!func_28(Param0))
	{
		func_1160(&(Global_1900736.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900736.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_1391(Param0, 0, 1, -1);
}

void func_1316(int iParam0, int iParam1)
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
			func_1392((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1392(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_28(Global_1900736.f_1[0 /*2*/]))
	{
		func_1135(Global_1900736.f_1[0 /*2*/], 3);
	}
}

bool func_1317(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_28(Param0))
	{
		return false;
	}
	if (!func_28(Param2))
	{
		return true;
	}
	iVar0 = func_1141(Param0);
	iVar1 = func_1141(Param2);
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

bool func_1318(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1393(iParam0))
	{
		return false;
	}
	if (func_1394(iParam0, uParam1, &uVar0))
	{
		func_1395(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1319(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_1320(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_1321(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1396(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1322()
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 7 && iVar0 <= 19)
	{
		return false;
	}
	return true;
}

bool func_1323(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_1324(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_1397(vParam0, 0f, 0f, 0, 2);
	return func_1397(vParam0, Global_1892740[iVar0 /*3*/].f_1, Global_1892740[iVar0 /*3*/].f_2, Global_1892740[iVar0 /*3*/], 4);
}

int func_1325(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (func_1398(72))
	{
		func_1399(&(Global_1291734.f_11.f_119));
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	if (Global_1291734.f_581 != 0)
	{
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			iVar2 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar1);
			if (Global_1291734.f_581 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					if (iParam8 == 0)
					{
						return 0;
					}
					else if (bParam9)
					{
						if (!func_1400(1))
						{
							return 0;
						}
					}
					else if (!func_1401(1))
					{
						return 0;
					}
				}
			}
			else
			{
				func_1402(1);
				return 0;
			}
		}
	}
	if (func_1398(70))
	{
		if (!func_1403(&(Global_1291734.f_11.f_119)))
		{
			func_1404(&(Global_1291734.f_11.f_119), 0);
		}
		fVar3 = func_1405(&(Global_1291734.f_11.f_119));
		if (fVar3 > 10f)
		{
			func_1406(1);
			Global_1291734.f_11.f_104 = iVar0;
			return 0;
		}
		if (Global_1291734.f_11.f_70 != 0)
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1291734.f_11.f_70, false))
			{
				func_1406(1);
				return 0;
			}
			if (Global_1291734.f_11.f_70 != iVar0)
			{
				Global_1291734.f_11.f_104 = 0;
				func_1399(&(Global_1291734.f_11.f_119));
				return 0;
			}
		}
		if (Global_1291734.f_11 != 11)
		{
			return 0;
		}
		iVar4 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			return 0;
		}
		Global_1291734.f_11.f_104 = 0;
		func_1399(&(Global_1291734.f_11.f_119));
		func_765(71);
		return iVar4;
	}
	if (Global_1291734.f_11 != 1)
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1291734.f_11.f_71, false) && Global_1291734.f_11.f_71 != iVar0)
	{
		return 0;
	}
	if (func_1407(255) && func_1408(2, 255))
	{
		return 0;
	}
	Global_1291734.f_11.f_70 = iVar0;
	Global_1291734.f_11.f_73 = { vParam0 };
	Global_1291734.f_11.f_77 = iParam3;
	Global_1291734.f_11.f_72 = iParam5;
	Global_1291734.f_11.f_76 = iParam7;
	if (bParam4)
	{
		func_765(73);
	}
	else
	{
		func_766(73);
	}
	if (bParam6)
	{
		func_765(76);
	}
	else
	{
		func_766(76);
	}
	func_765(70);
	func_1409(&(Global_1291734.f_11.f_119));
	return 0;
}

char* func_1326()
{
	return "NET_CHU_BLIP_DROPOFF_GUARD";
}

int func_1327(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			return -401963276;
		case 2:
		case 4:
			if (func_1410(&iVar0))
			{
				if (func_80(iVar0, 4))
				{
					return -2145527776;
				}
				else if (func_80(iVar0, 2))
				{
					return -1445216292;
				}
			}
			return -1636811933;
		case 3:
		case 5:
			if (func_1410(&iVar0))
			{
				if (func_271(iVar0, 512))
				{
					return -2145527776;
				}
				else if (func_271(iVar0, 256))
				{
					return -1445216292;
				}
			}
			return -1636811933;
		default:
			break;
	}
	return 0;
}

char* func_1328(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1411(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_1329(var uParam0)
{
	struct<5> Var0;

	if (func_292(&Local_2027, &Var0) && func_1073(Var0, 733551533, uParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_1330(var uParam0)
{
	struct<5> Var0;

	if (func_292(&Local_2027, &Var0) && func_1073(Var0, -2107902278, uParam0, 0))
	{
		return true;
	}
	return false;
}

char* func_1331(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3;
	struct<10> Var10;
	int iVar20;
	int iVar21;

	sVar0 = "Invalid Posse";
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return sVar0;
	}
	iVar1 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (func_1412(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102219.f_17 != Global_1100469[iVar2 /*53*/].f_17)
				{
					sVar0 = func_1413(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
			{
				sVar0 = func_1413(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_1414(iVar1) };
				iVar21 = 0;
				while (iVar21 <= (POSSE::_0xC084FF658B2E61DA(&Var3) - 1))
				{
					if (POSSE::_0xC084FF658B2E81DA(&Var3, iVar21, &Var10) && Var10.f_9)
					{
						iVar20 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_1332(func_1415(Var10.f_1), joaat("COLOR_PURE_WHITE"));
						}
						else
						{
							sVar0 = func_1332(func_1415(Var10.f_1), iParam2);
						}
					}
					else
					{
						iVar21++;
					}
				}
				if (iVar20 == 0)
				{
					return func_1413(iParam0, bParam1, iParam2);
				}
				if (func_1416(func_1415(Var10.f_1)))
				{
					if (bParam1 == 1 && func_1417(iVar1, sVar0))
					{
						sVar0 = func_1413(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_1413(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_1413(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

char* func_1332(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1411(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_1333()
{
	return "countdown_final_thud";
}

int func_1334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1335(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1418(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, func_1419(iParam2), iParam3);
}

void func_1336(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_1420(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, func_1419(iParam2), sParam3);
}

void func_1337(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1421(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, func_1419(iParam2), iParam3);
}

void func_1338(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1422(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0, func_1419(iParam2), fParam3);
}

void func_1339(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!bParam4)
	{
		iParam3 = func_1423(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, func_1419(iParam2), iParam3);
}

int func_1340()
{
	return joaat("COLOR_MP_OBJECTIVE_ENEMY");
}

int func_1341()
{
	return joaat("COLOR_MP_OBJECTIVE_FRIENDLY");
}

int func_1342()
{
	return joaat("COLOR_MP_OBJECTIVE_NEUTRAL");
}

void func_1343(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1424(&((uParam0[iParam1 /*34*/])->f_31));
	iVar1 = (uParam0[iParam1 /*34*/])->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_1425(&((uParam0[iParam1 /*34*/])->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_1426(&((uParam0[iParam1 /*34*/])->f_31)) < 1500)
		{
			return;
		}
		func_1427(&((uParam0[iParam1 /*34*/])->f_31));
	}
	func_1247((uParam0[iParam1 /*34*/])->f_17, iVar1 == 1);
	func_1247((uParam0[iParam1 /*34*/])->f_18, iVar1 == 2);
	func_1247((uParam0[iParam1 /*34*/])->f_19, iVar1 == 3);
}

bool func_1344(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return true;
	}
	return false;
}

void func_1345(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0, iParam1);
}

void func_1346(var uParam0, float fParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(uParam0, fParam1);
}

struct<5> func_1347(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_1428(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_1429(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_1350(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_1430(bParam1) };
			if (bParam2 && func_1431(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1348(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1348(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_1349(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_1432(bParam1) };
			switch (func_1433(iParam0))
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
			if (func_1434(iParam0, -1823706425))
			{
				Var0 = { func_1350(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_1434(iParam0, -1483207246))
			{
				Var0 = { func_1350(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_1350(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1434(iParam0, -1653629781))
			{
				Var0 = { func_1350(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_1435(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_1434(iParam0, -1653629781))
			{
				Var0 = { func_1350(1384535894, Var0, 1784584921, bParam1) };
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

bool func_1348(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_1436(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_1349(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1437(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1350(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_1438(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_1439(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1351(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_1440(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1435(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_1352(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_21() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1441(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_1442(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_1439(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1352(bool bParam0)
{
	if (func_21() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_1439(bParam0));
}

int func_1353(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1443(iParam0))
	{
		return 0;
	}
	if (!func_1352(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_1354(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_832(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

bool func_1355(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 31) & 1 != 0;
}

var func_1356(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_1358(&uVar0))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 7, func_1360(iParam0), 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 10, iParam1, 0, 1))
	{
		return 0;
	}
	return func_1444(&uVar0);
}

int func_1357(int iParam0)
{
	var uVar0;

	if (!func_1358(&uVar0))
	{
		return -1;
	}
	if (!func_1359(&uVar0, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1359(&uVar0, 6, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1359(&uVar0, 8, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1359(&uVar0, 9, iParam0, 0, 1))
	{
		return -1;
	}
	return func_1445(&uVar0);
}

bool func_1358(int iParam0)
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
	MISC::_COPY_MEMORY(iParam0, &uVar0, 5);
	*iParam0 = uVar5;
	return true;
}

bool func_1359(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_1360(int iParam0)
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

int func_1361(var uParam0, int iParam1)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
	return uVar0;
}

int func_1362(var uParam0)
{
	int iVar0;

	iVar0 = DATAFILE::_0xE13634BB6BAF0734(*uParam0, uParam0->f_1);
	return iVar0;
}

void func_1363(int iParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;

	if (iParam0 & 81920 != 81920)
	{
		return;
	}
	if (*uParam1 == 0)
	{
		return;
	}
	iVar9 = func_1446(*uParam1);
	if (iVar9 == 0)
	{
		return;
	}
	iVar10 = func_1447(*uParam1);
	if (iVar10 == 0)
	{
		return;
	}
	func_1448(iVar10, &Var1);
	iVar11 = 0;
	while (iVar11 <= 5)
	{
		iVar0 = func_1449(iVar11);
		if (iVar9 != func_1450(Var1, iVar0, 0, 0))
		{
			iVar0 = 0;
		}
	else
	{
		}
		else
		{
			iVar11++;
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	Var5 = { func_1350(iVar9, Var1, iVar0, 0) };
	if (func_1451(&Var5))
	{
		return;
	}
	func_1452(&Var5, 1, 1);
}

int func_1364(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_262(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_1365(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1453(&Var1, iParam0))
	{
		iVar0 = ((func_1454() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1366(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_1367(int iParam0, int iParam1)
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

int func_1368(int iParam0)
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

int func_1369(int iParam0)
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

int func_1370(int iParam0, int iParam1)
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

bool func_1371(int iParam0)
{
	int iVar0;

	iVar0 = func_1455(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_1372(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

int func_1373(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam0);
}

int func_1374(struct<5> Param0)
{
	return func_1268(Param0, 49, 1);
}

int func_1375(struct<5> Param0, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	if (!func_1156(Param0, &(Param0.f_1), 40, iParam5, 0, 1))
	{
		return 0;
	}
	uVar5 = Param0.f_1;
	iVar1 = func_1373(Param0, 6);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		iVar4 = 0;
		if (!func_1156(Param0, &(Param0.f_1), 41, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = func_1456(Param0);
			switch (iParam5)
			{
				case joaat("TRIGGER"):
					iVar4 = func_1457(iVar2);
					break;
				case joaat("BEHAVIOR"):
					iVar4 = func_1458(iVar2);
					break;
			}
			uVar3 = (uVar3 || iVar4);
		}
		iVar0++;
	}
	return uVar3;
}

struct<2> func_1376(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = joaat("COOLDOWN");
			Var0.f_1 = joaat("COOLDOWN_TYPE");
			break;
		default:
			Var0 = 0;
			Var0.f_1 = 0;
			break;
	}
	return Var0;
}

bool func_1377(var uParam0)
{
	return (*uParam0 != 0 && uParam0->f_1 != 0);
}

bool func_1378(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	struct<5> Var7;
	int iVar12;

	if (!func_1147(iParam0))
	{
		return false;
	}
	if (!func_1155(&Var7))
	{
		return false;
	}
	if (!func_1156(Var7, &(Var7.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1156(Var7, &(Var7.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	uVar3 = Var7.f_1;
	if (!func_1156(Var7, &(Var7.f_1), 16, 0, 0, 1))
	{
		return false;
	}
	if (!func_1156(Var7, &(Var7.f_1), 18, iParam2, 0, 1))
	{
		return false;
	}
	func_1157(Var7, uParam3, &uVar6, &uVar5);
	Var7.f_1 = uVar6;
	*uParam4 = func_1310(Var7, 1);
	uParam4->f_1 = func_1311(Var7, 1);
	Var7.f_1 = uVar3;
	if (!func_1156(Var7, &(Var7.f_1), 24, 0, 0, 1))
	{
		return false;
	}
	if (!func_1156(Var7, &(Var7.f_1), 25, iParam1, 0, 1))
	{
		return false;
	}
	uVar4 = Var7.f_1;
	iVar1 = func_1373(Var7, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var7.f_1 = uVar4;
		if (!func_1156(Var7, &(Var7.f_1), 27, iVar0, 0, 1))
		{
			return false;
		}
		iVar12 = func_1459(Var7);
		iVar2 = func_1460(iVar12, 1);
		if (iVar2 == -1)
		{
			return false;
		}
		uParam4->f_2[iVar2] = func_1461(Var7, 55, 1);
		if (uParam4->f_2[iVar2] < 0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_1379(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar9;
	var uVar11;
	int iVar13;
	struct<2> Var14;

	vVar2.f_2 = 4;
	Var14 = { func_1376(iParam5) };
	if (!func_1377(&Var14))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_834(iParam0, Var14, uParam1, &uVar11))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_834(iParam0, Var14.f_1, uParam1, &uVar9))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (iParam4 == 0)
	{
		if (!STATS::STAT_ID_GET_INT(&uVar9, &iVar1))
		{
			*iParam2 = 0;
			*uParam3 = 0;
			return 0;
		}
		iVar13 = iVar1;
	}
	else
	{
		iVar13 = iParam4;
	}
	if (iVar13 == 0)
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!STATS::STAT_ID_GET_INT(&uVar11, &iVar0))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_1378(iParam0, iVar13, Var14, uParam1, &vVar2))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	switch (vVar2.x)
	{
		case joaat("START"):
			*iParam2 = func_1380(&vVar2, iVar0, 1, iVar0, joaat("END"));
			break;
		case joaat("END"):
			if (iVar13 == 0)
			{
				*iParam2 = iVar0;
			}
			else
			{
				iVar0 = func_1462(&vVar2, iVar0);
				*iParam2 = func_1380(&vVar2, iVar0, 1, iVar0, 0);
			}
			break;
		default:
			*iParam2 = 0;
			*uParam3 = 0;
			return 0;
	}
	*uParam3 = vVar2.y;
	return 1;
}

int func_1380(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam4 == 0)
	{
		iVar2 = *iParam0;
	}
	else
	{
		iVar2 = iParam4;
	}
	switch (iParam0->f_1)
	{
		case joaat("POSIX"):
			if (bParam2)
			{
				iVar0 = iParam3;
			}
			else
			{
				iVar0 = Global_1296859.f_21;
			}
			switch (iVar2)
			{
				case joaat("START"):
					break;
				case joaat("END"):
					iVar0 = (iVar0 + iParam0->f_2[3]);
					iVar0 = (iVar0 + iParam0->f_2[2] * 60);
					iVar0 = (iVar0 + iParam0->f_2[1] * 3600);
					iVar0 = (iVar0 + (iParam0->f_2[0] * 86400));
					break;
				default:
					break;
			}
			break;
		case joaat("TIMEOFDAY"):
			if (func_1463(iParam1))
			{
				iVar1 = iParam1;
			}
			else
			{
				iVar1 = func_788();
			}
			switch (iVar2)
			{
				case joaat("START"):
					iVar0 = iVar1;
					break;
				case joaat("END"):
					func_1464(&iVar1, iParam0->f_2[3], iParam0->f_2[2], iParam0->f_2[1], iParam0->f_2[0], 0, 0, 0);
					iVar0 = iVar1;
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

var func_1381(struct<5> Param0)
{
	return func_1268(Param0, 58, 1);
}

var func_1382(struct<5> Param0)
{
	return func_1268(Param0, 57, 1);
}

var func_1383(struct<5> Param0)
{
	return func_1461(Param0, 60, 1);
}

var func_1384(struct<5> Param0)
{
	return func_1268(Param0, 62, 1);
}

int func_1385(struct<5> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;

	if (!func_1156(Param0, &(Param0.f_1), 45, 0, 0, 0))
	{
		return 1;
	}
	uVar11 = Param0.f_1;
	iVar1 = func_1373(Param0, 11);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar11;
		bVar10 = false;
		if (!func_1156(Param0, &(Param0.f_1), 46, iVar0, 0, 1))
		{
			return 0;
		}
		iVar8 = func_1465(Param0);
		iVar3 = func_1373(Param0, 12);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			if (!func_1466(Param0, iVar2, &Var4))
			{
				return 0;
			}
			switch (Var4)
			{
				case joaat("AWARD"):
					switch (Var4.f_1)
					{
						case 1858947262:
							bVar9 = Var4.f_3 == NETWORK::_0xFBE782B3165AC8EC(Var4.f_2);
							break;
						default:
							bVar9 = false;
							break;
					}
					break;
				case -1945136514:
					switch (Var4.f_1)
					{
						case joaat("EXISTS"):
							bVar9 = false;
							break;
						default:
							bVar9 = false;
							break;
					}
					break;
				default:
					bVar9 = false;
					break;
			}
			switch (iVar8)
			{
				case joaat("AND"):
					if (bVar9)
					{
					}
					else
					{
						bVar10 = true;
					}
					else
					{
						Jump @318; //curOff = 283
						if (bVar9)
						{
							Jump @327; //curOff = 291
						}
						else if (iVar2 == (iVar3 - 1))
						{
							bVar10 = true;
						}
						else
						{
							iVar2++;
						}
					}
					if (bVar10)
					{
						return 0;
					}
					iVar0++;
					return 1;
					default:
						break;
			}
		}
	}
}

var func_1386(struct<5> Param0)
{
	return func_1268(Param0, 49, 1);
}

var func_1387(struct<5> Param0)
{
	return func_1268(Param0, 54, 1);
}

var func_1388(struct<5> Param0)
{
	return func_1268(Param0, 56, 1);
}

void func_1389(int iParam0)
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
	func_1390(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_1390(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_1391(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_1467(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_106(Param0);
	Var0.f_3 = iParam3;
	func_1468(&Var0, bParam2, iParam4);
	return 1;
}

void func_1392(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900736.f_1[iParam0 /*2*/] };
	Global_1900736.f_1[iParam0 /*2*/] = { Global_1900736.f_1[iParam1 /*2*/] };
	Global_1900736.f_1[iParam1 /*2*/] = { Var0 };
}

bool func_1393(int iParam0)
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

bool func_1394(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1469(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1395(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1470(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1471(iVar0);
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
			uParam2->f_5 = func_1472(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1473(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1474(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_1475(iVar0);
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

bool func_1396(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

int func_1397(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

bool func_1398(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_1904087.f_496[iVar0], iVar1);
}

void func_1399(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_1400(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_1476(iVar0))
		{
			return false;
		}
	}
	func_1477();
	return true;
}

bool func_1401(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_1476(iVar0))
		{
			return false;
		}
	}
	func_1478();
	return true;
}

void func_1402(bool bParam0)
{
	int iVar0;

	if (!func_1398(101))
	{
		return;
	}
	if (func_1398(102))
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (Global_1291734.f_581.f_63 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_765(102);
}

bool func_1403(var uParam0)
{
	return func_1479(*uParam0, 1);
}

void func_1404(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1403(uParam0))
	{
		func_1409(uParam0);
	}
}

float func_1405(var uParam0)
{
	if (!func_1403(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1480(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1481() - uParam0->f_1);
}

void func_1406(bool bParam0)
{
	int iVar0;

	if (!func_1398(70))
	{
		return;
	}
	if (func_1398(72))
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (Global_1291734.f_11.f_70 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_765(72);
}

bool func_1407(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1408(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1291106[iParam1 /*19*/].f_1 && iParam0) != 0;
}

void func_1409(var uParam0)
{
	func_1482(uParam0, 0f);
}

bool func_1410(int iParam0)
{
	int iVar0;

	switch (Local_2027.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202.f_25[iVar0]))
				{
				}
				else
				{
					*iParam0 = iVar0;
					return true;
				}
				iVar0++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (Local_15.f_16[iVar0 /*12*/].f_2 != joaat("PASSENGER_VIP"))
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(Local_2027.f_202[iVar0]))
				{
				}
				else
				{
					*iParam0 = iVar0;
					return true;
				}
				iVar0++;
			}
			break;
	}
	return false;
}

char* func_1411(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_1412(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<10> Var9;
	int iVar19;

	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return false;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_1414(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

char* func_1413(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;

	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::_0x4BE6C13A45CCA8EC(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_1328(PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)), joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar0 = MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_1328(PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)), joaat("COLOR_PURE_WHITE")));
			return func_1411(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)));
	}
	sVar0 = MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)));
	return func_1411(sVar0, iParam2);
}

struct<7> func_1414(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_1415(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_1416(char* sParam0)
{
	return NETWORK::_0xD4022C7286B0DFA2(sParam0, 100, 22);
}

bool func_1417(int iParam0, char* sParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = PLAYER::GET_PLAYER_NAME(iParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0);
	if (MISC::COMPARE_STRINGS(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

int func_1418(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1341();
		case 4:
			return joaat("COLOR_PURE_WHITE");
		case 9:
			return func_1340();
		case 10:
			return joaat("COLOR_PURE_WHITE");
		case 23:
			return joaat("RPG_TEXTURES");
		case 22:
			return joaat("RPG_AGITATION");
		case 24:
			return joaat("COLOR_ENEMY");
		case 18:
			return joaat("COLOR_PURE_WHITE");
		case 25:
			return func_1340();
		case 30:
			return func_1340();
		default:
			break;
	}
	return 0;
}

char* func_1419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_1420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_1421(int iParam0)
{
	return 0;
}

float func_1422(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_1423(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_1424(var uParam0)
{
	return func_1479(*uParam0, 1);
}

void func_1425(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1424(uParam0))
	{
		func_1483(uParam0);
	}
}

int func_1426(var uParam0)
{
	if (!func_1424(uParam0))
	{
		return 0;
	}
	if (func_1484(uParam0))
	{
		return uParam0->f_2;
	}
	return func_1485(uParam0->f_1);
}

void func_1427(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

struct<4> func_1428(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_1439(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_1350(joaat("CHARACTER"), func_1486(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_1350(joaat("CHARACTER"), func_1486(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_1350(joaat("CHARACTER"), func_1486(), -1591664384, bParam0);
}

int func_1429(int iParam0)
{
	vector3 vVar0;

	if (!func_1438(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1430(bool bParam0)
{
	int iVar0;

	iVar0 = func_1439(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_1350(923904168, func_1428(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_1350(923904168, func_1428(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_1350(923904168, func_1428(bParam0), -740156546, 0);
}

bool func_1431(int iParam0, bool bParam1)
{
	if (func_1433(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_1487();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1432(bool bParam0)
{
	int iVar0;

	iVar0 = func_1439(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_1350(271701509, func_1428(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_1350(271701509, func_1428(bParam0), 12999093, 0);
}

int func_1433(int iParam0)
{
	struct<2> Var0;

	if (!func_1438(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_1434(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1433(iParam0);
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
			if (func_1488(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1435(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1489(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1436(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_1438(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1490(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_1350(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_1439(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_1439(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_1437(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_1439(0);
	*uParam1 = { func_1350(iParam0, func_1430(0), iParam3, 0) };
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

bool func_1438(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_1439(bool bParam0)
{
	if (func_21() == -1)
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

bool func_1440(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_1441(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1491(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_1493(func_1492(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1494(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1442(int iParam0, struct<17> Param1)
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

bool func_1443(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_1444(var uParam0)
{
	return func_1495(uParam0, 25, 1);
}

int func_1445(var uParam0)
{
	return func_1496(func_1495(uParam0, 34, 1));
}

int func_1446(int iParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = func_1357(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1358(&uVar0))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 7, func_1360(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 9, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 15, 0, 0, 1))
	{
		return 0;
	}
	return func_1497(&uVar0);
}

int func_1447(int iParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = func_1357(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1358(&uVar0))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 7, func_1360(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 9, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1359(&uVar0, 15, 0, 0, 1))
	{
		return 0;
	}
	return func_1498(&uVar0);
}

void func_1448(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0 = { func_1428(1) };
	*uParam1 = { func_1350(iParam0, Var0, -1591664384, 1) };
}

int func_1449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1132377945;
		case 1:
			return 739936401;
		case 2:
			return 1201880974;
		case 3:
			return 819728896;
		case 4:
			return 1746010219;
		case 5:
			return 1433393959;
		default:
			break;
	}
	return 0;
}

int func_1450(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1499(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1451(var uParam0)
{
	if (!func_1500(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_1452(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1435(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_1429(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_1501(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_1502(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_1503(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_1504(joaat("UPDATE"), &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_1505(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_1506(joaat("UPDATE"), &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_1507(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_1441(joaat("UPDATE"), &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_1453(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_1454()
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

int func_1455(int iParam0)
{
	return func_1508(iParam0) + 30;
}

var func_1456(struct<5> Param0)
{
	return func_1268(Param0, 49, 1);
}

int func_1457(int iParam0)
{
	switch (iParam0)
	{
		case joaat("START"):
			return 4;
		case joaat("COMPLETE"):
			return 8;
		case joaat("PRIMARY"):
			return 1;
		case joaat("RIVAL"):
			return 2;
		case joaat("WIN"):
			return 16;
		case joaat("LOSS"):
			return 32;
		case joaat("EASY"):
			return 64;
		case joaat("MEDIUM"):
			return 128;
		case joaat("HARD"):
			return 256;
		case joaat("NEAR"):
			return 512;
		case joaat("FAR"):
			return 1024;
		case -467684650:
			return 2048;
		case 1946702493:
			return 4096;
		case joaat("POSSE_LEADER"):
			return 16384;
		case 1689792654:
			return 32768;
		case joaat("SCRIPTED"):
			return 8192;
		default:
			break;
	}
	return 0;
}

int func_1458(int iParam0)
{
	switch (iParam0)
	{
		case -1180895447:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_1459(struct<5> Param0)
{
	return func_1268(Param0, 49, 1);
}

int func_1460(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HOURS"):
			return 1;
		case joaat("MINUTES"):
			return 2;
		case joaat("SECONDS"):
			return 3;
		case joaat("DAYS"):
			return 0;
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

var func_1461(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_INT(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1462(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0->f_1)
	{
		case joaat("POSIX"):
			switch (*iParam0)
			{
				case joaat("START"):
					break;
				case joaat("END"):
					iVar0 = iParam1;
					iVar0 = (iVar0 - iParam0->f_2[3]);
					iVar0 = (iVar0 - iParam0->f_2[2] * 60);
					iVar0 = (iVar0 - iParam0->f_2[1] * 3600);
					iVar0 = (iVar0 - (iParam0->f_2[0] * 86400));
					break;
				default:
					break;
			}
			break;
		case joaat("TIMEOFDAY"):
			switch (*iParam0)
			{
				case joaat("START"):
					break;
				case joaat("END"):
					iVar1 = iParam1;
					func_1509(&iVar1, iParam0->f_2[3], iParam0->f_2[2], iParam0->f_2[1], iParam0->f_2[0], 0, 0);
					iVar0 = iVar1;
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_1463(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1510(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1511(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1512(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1513(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1514(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1515(iParam0);
	if (iVar5 < 1 || iVar5 > func_1516(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_1464(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1513(*iParam0);
	iVar1 = func_1514(*iParam0);
	iVar2 = func_1515(*iParam0);
	iVar3 = func_1512(*iParam0);
	iVar4 = func_1511(*iParam0);
	iVar5 = func_1510(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_1516(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1516(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_1517(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

var func_1465(struct<5> Param0)
{
	return func_1268(Param0, 61, 1);
}

bool func_1466(struct<5> Param0, int iParam5, var uParam6)
{
	if (!func_1156(Param0, &(Param0.f_1), 47, iParam5, 0, 1))
	{
		return false;
	}
	*uParam6 = func_1518(Param0);
	uParam6->f_1 = func_1519(Param0);
	uParam6->f_2 = func_1520(Param0);
	uParam6->f_3 = func_1521(Param0);
	return true;
}

int func_1467(struct<2> Param0)
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
		if (func_29(Global_1196205[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1468(var uParam0, bool bParam1, int iParam2)
{
	func_1522(uParam0, iParam2);
	if (Global_1196205.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1523(func_1467(uParam0->f_1));
	}
	else
	{
		func_1524();
	}
}

int func_1469(int iParam0)
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

int func_1470(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1525(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1471(int iParam0)
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

int func_1472(int iParam0)
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

int func_1473(int iParam0)
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

int func_1474(int iParam0)
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

int func_1475(int iParam0)
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

bool func_1476(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;

	if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		return true;
	}
	vVar10 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar0, &vVar3);
	vVar6 = { MISC::ABSF(((vVar3.x - vVar0.x) / 2f)), MISC::ABSF(((vVar3.y - vVar0.y) / 2f)), MISC::ABSF(((vVar3.z - vVar0.z) / 2f)) };
	fVar9 = vVar6.x;
	if (fVar9 < vVar6.y)
	{
		fVar9 = vVar6.y;
	}
	if (fVar9 < vVar6.z)
	{
		fVar9 = vVar6.z;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar10, fVar9) || NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fVar9, 1120403456 /* Float: 100f */))
	{
		return false;
	}
	return true;
}

void func_1477()
{
	if (func_1526(8, 255))
	{
		return;
	}
	func_1527(3);
}

void func_1478()
{
	if (func_1526(8, 255))
	{
		return;
	}
	func_1528(3);
}

bool func_1479(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1480(var uParam0)
{
	return func_1479(*uParam0, 2);
}

float func_1481()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_1482(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1481() - fParam1);
	func_1529(uParam0, 1);
	func_1530(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_1483(var uParam0)
{
	func_1531(uParam0, 0);
}

bool func_1484(var uParam0)
{
	return func_1479(*uParam0, 2);
}

int func_1485(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

struct<4> func_1486()
{
	struct<4> Var0;

	return Var0;
}

bool func_1487()
{
	return (func_1532(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_1533(func_1350(joaat("WARDROBE"), func_1428(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_1488(int iParam0, int iParam1, int iParam2)
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

bool func_1489(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_1439(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_1490(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_1491(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_1534(uParam1->f_8, iParam0, uVar0, 2048) || func_1534(uParam1->f_8, iParam0, uVar0, 32768)) || func_1534(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_1534(uParam1->f_8, iParam0, uVar0, 4) || func_1534(uParam1->f_8, iParam0, uVar0, 256)) || func_1534(uParam1->f_8, iParam0, uVar0, 65536)) || func_1534(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_1534(uParam1->f_8, iParam0, uVar0, 1) || func_1534(uParam1->f_8, iParam0, uVar0, 8)) || func_1534(uParam1->f_8, iParam0, uVar0, 65536)) || func_1534(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_1534(uParam1->f_8, iParam0, uVar0, 1) || func_1534(uParam1->f_8, iParam0, uVar0, 16)) || func_1534(uParam1->f_8, iParam0, uVar0, 2)) || func_1534(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1534(uParam1->f_8, iParam0, uVar0, 8) || func_1534(uParam1->f_8, iParam0, uVar0, 4096)) || func_1534(uParam1->f_8, iParam0, uVar0, 256)) || func_1534(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1492(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_1493(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_1535(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_1535(iParam1, 2, 0, 0);
	return -1;
}

int func_1494(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_1535(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_1495(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_1496(int iParam0)
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

int func_1497(var uParam0)
{
	return func_1495(uParam0, 36, 1);
}

int func_1498(var uParam0)
{
	return func_1495(uParam0, 37, 1);
}

bool func_1499(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_1439(bParam7);
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

bool func_1500(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<28> func_1501(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_1439(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1507(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1502(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1491(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_1493(func_1536(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1494(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_1503(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_1439(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1507(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_1504(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_1493(func_1537(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1494(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_1505(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_1439(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1507(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1506(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1491(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_1493(func_1538(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1494(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_1507(var uParam0, bool bParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_1490(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_1486() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_1508(int iParam0)
{
	return iParam0 * 31;
}

void func_1509(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_1513(*iParam0);
	iVar1 = func_1514(*iParam0);
	iVar2 = func_1515(*iParam0);
	iVar3 = func_1512(*iParam0);
	iVar4 = func_1511(*iParam0);
	iVar5 = func_1510(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_1516(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1517(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1510(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1511(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1512(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1513(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1539(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1514(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1515(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1516(int iParam0, int iParam1)
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

void func_1517(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1540(iParam0, iParam6);
	func_1541(iParam0, iParam5);
	func_1542(iParam0, iParam4);
	func_1543(iParam0, iParam3);
	func_1544(iParam0, iParam2);
	func_1545(iParam0, iParam1);
}

var func_1518(struct<5> Param0)
{
	return func_1268(Param0, 61, 1);
}

var func_1519(struct<5> Param0)
{
	return func_1268(Param0, 64, 1);
}

var func_1520(struct<5> Param0)
{
	return func_1268(Param0, 63, 1);
}

var func_1521(struct<5> Param0)
{
	return func_1546(Param0, 65, 1);
}

void func_1522(var uParam0, int iParam1)
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

void func_1523(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205.f_129)
	{
		return;
	}
	Global_1196205.f_130 = iParam0;
	Global_1196205.f_131 = Global_1196205[iParam0 /*4*/];
}

void func_1524()
{
	if (Global_1196205.f_131 == 0)
	{
		return;
	}
	Global_1196205.f_130 = func_1547(Global_1196205.f_131);
	if (Global_1196205.f_130 < 0)
	{
		Global_1196205.f_131 = 0;
	}
}

bool func_1525(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1548(iParam0, uParam1, &uVar0))
	{
		func_1549(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1526(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1291106[iParam1 /*19*/].f_2 && iParam0) != 0;
}

void func_1527(int iParam0)
{
	func_1550(3, iParam0);
}

void func_1528(int iParam0)
{
	func_1550(2, iParam0);
}

void func_1529(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1530(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1531(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_1529(uParam0, 1);
	func_1530(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_1532(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_1443(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_1439(bParam1), iParam0, iParam3);
}

int func_1533(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1551(&uParam0, iParam4, bParam5, iParam6);
}

int func_1534(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_1144(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_1535(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1552(iParam0, iParam1, iParam2, iParam3);
}

bool func_1536(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_1537(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_1538(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

int func_1539(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1540(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_1541(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1542(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1514(*iParam0);
	iVar1 = func_1513(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1516(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1543(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1544(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1545(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

var func_1546(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_BOOL(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1547(int iParam0)
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

bool func_1548(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1469(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1549(var uParam0, int iParam1, var uParam2)
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

void func_1550(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_0x31010318BA9897AC(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

int func_1551(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1553(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_1552(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1554(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_1553(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_1439(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_1489(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_1554(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1555(&(uParam0->f_4));
}

void func_1555(var uParam0)
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

