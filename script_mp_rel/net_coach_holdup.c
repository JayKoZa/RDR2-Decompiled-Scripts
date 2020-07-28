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
	struct<338> Local_17 = { 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 4, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 7, 255, 255, 255, 255, 255, 255, 255, 4 } ;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	struct<52> Local_361[32];
	struct<640> Local_2026 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, -1, 1, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
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
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2(Local_2026.f_2))
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_17, 344, 43);
	func_8(NETWORK::_0xBA24095EA96DFE17(&Local_17), 344, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_361, 1665, 44);
	func_9(NETWORK::_0x690806BC83BC8CA2(Local_361[0 /*52*/]), 1665, "m_clientData");
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	func_11(uParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_12(uParam0);
	}
}

int func_2(struct<2> Param0)
{
	if (func_13(0, 0))
	{
		return 1;
	}
	else if (func_14(Param0, 1, 0))
	{
		return 1;
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 1;
	}
	else if (&Local_361[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/] == 4)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	Local_2026.f_634 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_15(&Local_17, &Local_361, &Local_2026);
	func_16(&Local_17, &Local_361, &Local_2026);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17(&Local_17, &Local_361, &Local_2026);
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

	Local_2026 = *uParam0;
	Local_2026.f_1 = uParam0->f_5;
	Local_2026.f_2 = { uParam0->f_7 };
	Local_2026.f_4.f_1 = func_23(Local_2026.f_2);
	Local_2026.f_10 = func_26(func_25(func_24(-409129282), Local_2026.f_4.f_1));
	Local_2026.f_10.f_1 = func_24(Local_2026.f_10);
	Local_2026.f_550.f_1 = TASK::_0xE1C105E6BBA48270();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Local_2026.f_202.f_30[iVar0] = 255;
		iVar0++;
	}
}

void func_12(var uParam0)
{
	Local_17.f_316 = GANG::_0x901E0DC25080C8B9(uParam0->f_9);
	if (!GANG::_0xD6F6ACF4392187FB(Local_17.f_316))
	{
		func_27(&Local_17, 7);
		return;
	}
	Local_17.f_315 = GANG::_0x149A2751AB66AC02(Local_17.f_316);
}

int func_13(bool bParam0, bool bParam1)
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

int func_14(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_28(*Global_1051163) && !func_29(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_30(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_31(iParam3, 255))
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
	if (func_32())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_28(*Global_1051163))
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
			case 402722103:
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
		func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
	}
	if (func_40((*uParam1)[Local_2026.f_634 /*52*/]) != 4 && func_41((*uParam1)[Local_2026.f_634 /*52*/], 16))
	{
		func_42((*uParam1)[Local_2026.f_634 /*52*/], 4);
		if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 32) || func_41((*uParam1)[Local_2026.f_634 /*52*/], 64))
		{
			func_43(fParam2, uParam1);
		}
	}
	switch (func_40((*uParam1)[Local_2026.f_634 /*52*/]))
	{
		case 0:
			func_44(uParam0, uParam1, fParam2);
			if (func_45(fParam2) != 8)
			{
				return;
			}
			func_42((*uParam1)[Local_2026.f_634 /*52*/], 1);
			break;
		case 1:
			func_46(uParam0, uParam1, fParam2);
			if (!func_41((*uParam1)[Local_2026.f_634 /*52*/], 1) || func_47(uParam0) < 3)
			{
				return;
			}
			func_42((*uParam1)[Local_2026.f_634 /*52*/], 2);
			break;
		case 2:
			func_48(uParam0, uParam1, fParam2);
			if (func_47(uParam0) != 5)
			{
				return;
			}
			func_42((*uParam1)[Local_2026.f_634 /*52*/], 3);
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
				if (func_59(&Local_361, 67108864, 0))
				{
					func_60(uParam0);
				}
			}
			if (!func_61(uParam0, iParam1, bParam2))
			{
				if (!func_55(&Local_17, 536870912) && func_62())
				{
					func_63(&Local_17, 536870912);
				}
				return;
			}
			func_64(uParam0, iParam1, bParam2);
			if (Local_17.f_299 != 0 && Local_17.f_299.f_1 < 3)
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
		func_78(Local_2026.f_189[iVar0], 1);
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
	if (CAM::DOES_CAM_EXIST(Local_2026.f_559))
	{
		CAM::DESTROY_CAM(Local_2026.f_559, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_2026.f_560))
	{
		CAM::DESTROY_CAM(Local_2026.f_560, false);
	}
	func_89();
	func_90();
	func_91(Local_2026.f_619);
	func_91(Local_2026.f_620);
	func_91(Local_2026.f_625);
	func_91(Local_2026.f_626);
	func_91(Local_2026.f_627);
	func_91(Local_2026.f_627.f_2);
	func_91(Local_2026.f_627.f_1);
	func_91(Local_2026.f_627.f_3);
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_91(&(Local_2026.f_621[iVar3]));
		if (func_92(iVar3, 32))
		{
			EVENT::REMOVE_SHOCKING_EVENT((Local_2026.f_29[iVar3 /*5*/])->f_4);
		}
		iVar3++;
	}
	func_93(&(Local_2026.f_548));
	func_94(&(Local_2026.f_550), 1, 0);
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
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iVar0 /*12*/])->f_5))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(NETWORK::_NET_TO_ANIM_SCENE((Local_17.f_16[iVar0 /*12*/])->f_5));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_278[iVar1 /*2*/])))
		{
		}
		else if (func_96(iVar1, 1))
		{
			iVar3 = NETWORK::_0xD08066E00D26C448(&(Local_17.f_278[iVar1 /*2*/]));
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iVar3);
		}
		else
		{
			iVar2 = NETWORK::NET_TO_OBJ(&(Local_17.f_278[iVar1 /*2*/]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	func_97(&Local_17);
	func_98(&Local_17, &Local_2026);
	func_99(&Local_17, &Local_2026);
	func_100(&Local_2026);
}

void func_20()
{
	if (DATAFILE::_0x7907969497EA92F5(Local_2026.f_4) && DATAFILE::_0x603AC35FD4602C76(Local_2026.f_4))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_2026.f_4);
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED(func_101()) || HUD::_0x3CF96E16265B7DC8(func_101()))
	{
		HUD::_TEXT_DATABASE_DELETE(func_101());
	}
	func_102(&Local_2026);
	func_103();
	if (func_55(&Local_17, 524288))
	{
		func_104(&Local_17);
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	func_105(Local_17.f_299);
}

int func_21()
{
	return Global_1572887->f_13;
}

bool func_22()
{
	return Global_1051202->f_8;
}

int func_23(struct<2> Param0)
{
	return func_106(Param0);
}

int func_24(int iParam0)
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
		case 354462382:
			return -19759302;
		case -916626861:
			return -409129282;
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

int func_28(struct<2> Param0)
{
	if (!func_111(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_112(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_29(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_30(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_31(int iParam0, int iParam1)
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

int func_32()
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
	if (!func_28(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_33(int iParam0)
{
	return func_113(Local_2026.f_7, iParam0);
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
		func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
	}
}

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<25> Var0;
	var uVar31;
	int iVar32;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
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
	if (!func_41((*uParam2)[Local_2026.f_634 /*52*/], 2) && func_114(Var0, uParam1, &uVar31))
	{
		func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
		return;
	}
	if (func_118(Var0, uParam1, &iVar32))
	{
		if ((Var0.f_3 && !Var0.f_24) && (uParam1->f_16[iVar32 /*12*/])->f_2 == 1095997463)
		{
			func_119(iVar32);
		}
		if ((uParam1->f_16[iVar32 /*12*/])->f_2 != 1566032419 && !func_41((*uParam2)[Local_2026.f_634 /*52*/], 2))
		{
			func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
		}
		if ((uParam1->f_16[iVar32 /*12*/])->f_2 == 1095997463)
		{
			if (!func_41((*uParam2)[Local_2026.f_634 /*52*/], 262144) && Local_17.f_321 > 1)
			{
				func_39((*uParam2)[Local_2026.f_634 /*52*/], 262144);
			}
		}
		else if ((uParam1->f_16[iVar32 /*12*/])->f_2 != 1566032419)
		{
			func_39((*uParam2)[Local_2026.f_634 /*52*/], 524288);
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

	if (func_41((*uParam2)[Local_2026.f_634 /*52*/], 2))
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
		func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
		return;
	}
}

int func_38(var uParam0, var uParam1, var uParam2)
{
	if (func_47(uParam0) == 6 || func_47(uParam0) == 7)
	{
		return 1;
	}
	return 0;
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
		if (!func_41((*uParam1)[iVar1 /*52*/], 32) && !func_41((*uParam1)[iVar1 /*52*/], 64))
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
			if ((Local_17.f_315 == -1 && func_47(&Local_17) != 6) && func_47(&Local_17) != 7)
			{
				return;
			}
			if (func_125(Local_17.f_316))
			{
				func_126(2097152);
				if (GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_17.f_316)
				{
					func_127();
				}
			}
			switch (Local_2026.f_10)
			{
				case -19759302:
					iVar0 = 20;
					break;
				case -409129282:
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
			((*uParam1)[Local_2026.f_634 /*52*/])->f_1 = 0;
			func_130(uParam2);
			if (func_131())
			{
				func_132(1);
			}
			func_133(uParam2, 1);
			break;
		case 1:
			if (!func_135(func_134(), &(uParam2->f_4), 600, Local_2026, 0, 0))
			{
				func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
				return;
			}
			if (!func_136(func_101(), 30, Local_2026, 0, 0))
			{
				func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
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
				if (!func_141(&Local_2026, &Var4, iVar3) || !func_142(Var4))
				{
				}
				else
				{
					func_143(iVar3, uParam2);
					if (&uParam2->f_45[iVar3 /*6*/] == 1095997463)
					{
						uParam2->f_10.f_13++;
					}
					if (func_113((uParam2->f_45[iVar3 /*6*/])->f_1, 4))
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
	if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 1))
	{
		return;
	}
	if (!func_149())
	{
		return;
	}
	if (!func_150())
	{
		return;
	}
	func_39((*uParam1)[Local_2026.f_634 /*52*/], 1);
}

int func_47(var uParam0)
{
	return *uParam0;
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	func_39((*uParam1)[Local_2026.f_634 /*52*/], 4);
}

void func_49(var uParam0, var uParam1, float fParam2)
{
	func_151();
	func_152(uParam0, uParam1, fParam2);
	func_153();
	func_154(uParam0, uParam1, fParam2);
	func_155(uParam0, uParam1, fParam2);
	func_156();
	func_157(fParam2, uParam1);
	func_158(fParam2, uParam1, uParam0);
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	func_164();
	func_165(uParam0, uParam1, fParam2);
}

void func_50(var uParam0, var uParam1, float fParam2)
{
}

void func_51(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_1 = 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;

	iVar0 = func_166();
	iVar1 = func_167(iVar0, Local_2026.f_4.f_1);
	if (Local_17.f_337.f_6 >= iVar1 || Local_17.f_337.f_6 >= 4)
	{
		return 1;
	}
	iVar6 = Local_17.f_337.f_6;
	vVar2 = { func_168(iVar0, Local_2026.f_4.f_1, iVar6) };
	if (!func_169(iVar6, vVar2, 20f, -1743346773, &bVar5))
	{
		if (bVar5)
		{
			func_63(&Local_17, 2097152);
			func_63(&Local_17, 524288);
			func_27(&Local_17, 7);
			if (!func_33(2097152))
			{
				func_170(Local_17.f_316, Local_2026.f_2, 0);
			}
			return 0;
		}
	}
	else
	{
		Local_17.f_337.f_6++;
		Local_17.f_337.f_5 = 0;
	}
	return 0;
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
	int iVar18;
	int iVar19;
	int iVar20;

	if (func_45(uParam2) != 8)
	{
		return;
	}
	if (func_55(uParam0, 1))
	{
		return;
	}
	if (STREAMING::IS_MODEL_VALID(func_171()) && !func_172(func_171()))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_140(&Var1);
		if (!func_173(&Local_2026, &Var1, iVar0) || !func_142(Var1))
		{
		}
		else
		{
			iVar6 = func_174(uParam2, iVar0);
			if (!STREAMING::IS_MODEL_VALID(iVar6))
			{
			}
			else if (func_172(iVar6))
			{
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar9 = func_175();
	iVar7 = 0;
	while (iVar7 < iVar9)
	{
		func_140(&Var12);
		if (!func_176(&Var12, iVar7) || !func_142(Var12))
		{
		}
		else if (!func_177(Var12, 1339124518, &iVar8, 0))
		{
		}
		else
		{
			if (!func_178(Var12, 873236619, &bVar11, 0) || !bVar11)
			{
				iVar6 = iVar8;
				if (!STREAMING::IS_MODEL_VALID(iVar6))
				{
				}
				else if (func_172(iVar6))
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
					if (!func_141(&Local_2026, &Var1, iVar7) || !func_142(Var1))
					{
					}
					else
					{
						iVar6 = func_179(uParam2, iVar17);
						if (!STREAMING::IS_MODEL_VALID(iVar6))
						{
							iVar6 = func_180(&(uParam2->f_45[iVar17 /*6*/]));
						}
						if ((func_172(iVar6) && func_172(func_181(&(uParam2->f_45[iVar17 /*6*/])))) && func_183(func_182(&Local_2026, iVar17)))
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
					if (!func_172(func_184()))
					{
						return;
					}
				}
				iVar18 = func_185();
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar18);
				if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(0) < iVar18)
				{
					func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
					func_63(&Local_17, 2097152);
					func_63(&Local_17, 524288);
					func_27(&Local_17, 7);
					if (!func_33(2097152))
					{
						func_170(Local_17.f_316, Local_2026.f_2, 0);
					}
					return;
				}
				iVar19 = func_186();
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar19);
				if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < iVar19)
				{
					func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
					func_63(&Local_17, 2097152);
					func_63(&Local_17, 524288);
					func_27(&Local_17, 7);
					if (!func_33(2097152))
					{
						func_170(Local_17.f_316, Local_2026.f_2, 0);
					}
					return;
				}
				iVar20 = func_187();
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar20);
				if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < iVar20)
				{
					func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
					func_63(&Local_17, 2097152);
					func_63(&Local_17, 524288);
					func_27(&Local_17, 7);
					if (!func_33(2097152))
					{
						func_170(Local_17.f_316, Local_2026.f_2, 0);
					}
					return;
				}
				func_188();
				func_63(uParam0, 1);
			}
		}
	}

int func_54(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (func_113(((*uParam0)[iVar0 /*52*/])->f_1, iParam1))
		{
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
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
	if (!func_189())
	{
		return;
	}
	if (!func_55(uParam0, 2))
	{
		if (!func_190(uParam0, uParam2))
		{
			return;
		}
		func_63(uParam0, 2);
	}
	if (func_55(uParam0, 4))
	{
		return;
	}
	if (!func_191(uParam0, uParam2))
	{
		return;
	}
	if (!func_192(uParam0))
	{
		return;
	}
	func_63(uParam0, 4);
}

void func_58(var uParam0, int iParam1, bool bParam2)
{
	func_193(uParam0, iParam1, bParam2);
	func_194(uParam0, iParam1, bParam2);
	func_195(uParam0, iParam1, bParam2);
	func_196(uParam0, iParam1, bParam2);
	func_197();
	func_198(uParam0, iParam1, bParam2);
	func_199();
}

int func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_113(((*iParam0)[iVar0 /*52*/])->f_1, iParam1))
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
			return 1;
		}
		iVar0++;
	}
	return 0;
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

int func_61(var uParam0, int iParam1, bool bParam2)
{
	if (func_55(&Local_17, 67108864))
	{
		return 1;
	}
	if (func_55(&Local_17, 524288))
	{
		return 1;
	}
	switch (func_200(bParam2))
	{
		case -19759302:
			if (func_55(uParam0, 4096))
			{
				return 1;
			}
			if (func_55(uParam0, 1024))
			{
				return 1;
			}
			break;
		case -409129282:
			if (func_55(uParam0, 16384))
			{
				return 1;
			}
			break;
	}
	return func_201(uParam0, bParam2);
}

int func_62()
{
	int iVar0;
	int iVar1;

	if (func_55(&Local_17, 67108864))
	{
		return 0;
	}
	if (func_55(&Local_17, 524288))
	{
		return 0;
	}
	if (Local_2026.f_10 == -19759302)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (func_202(iVar0, &Local_17, 32) || func_202(iVar0, &Local_17, 67108864))
			{
			}
			else
			{
				return 0;
			}
			iVar0++;
		}
	}
	else if (Local_2026.f_10 == -409129282)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!func_203(iVar1, &Local_17, 128))
			{
			}
			else if ((func_203(iVar1, &Local_17, 2) || func_203(iVar1, &Local_17, 16)) || func_203(iVar1, &Local_17, 4096))
			{
			}
			else
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
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
	if (func_201(uParam0, bParam2))
	{
		func_63(&Local_17, 64);
	}
	iVar0 = func_204(uParam0, bParam2);
	switch (iVar0)
	{
		case 1:
			func_63(uParam0, 1048576);
			break;
		case 2:
			func_63(uParam0, 2097152);
			break;
	}
	iVar0 = func_205(uParam0, bParam2);
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

	iVar0 = func_206();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_207(iVar1, bParam0);
		iVar1++;
	}
	if (bParam0)
	{
		func_126(67108864);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < Local_2026.f_635)
		{
			func_208();
			iVar2++;
		}
		Local_2026.f_635 = 0;
		bVar3 = (func_33(1) && !func_33(8192));
		func_209(&iVar4, &iVar5);
		if (func_33(8192) && func_33(1))
		{
			iVar7 = PLAYER::PLAYER_ID();
			iVar8 = GANG::_0x901E0DC25080C8B9(iVar7);
			iVar9 = (Local_361[Local_2026.f_634 /*52*/])->f_48;
			if (((GANG::_0xD6F6ACF4392187FB(iVar8) && GANG::_0x0F99F6436528A089(iVar8)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::_0x4BE6C13A45CCA8EC(iVar8))) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(GANG::_0x4BE6C13A45CCA8EC(iVar8)))
			{
				iVar10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(GANG::_0x4BE6C13A45CCA8EC(iVar8));
				if ((Local_361[iVar10 /*52*/])->f_48 != -1)
				{
					iVar9 = (Local_361[iVar10 /*52*/])->f_48;
				}
			}
			if (iVar9 != -1)
			{
				iVar6 = func_210(iVar9);
			}
		}
		else
		{
			iVar6 = func_211(&Local_17);
		}
		Var19.f_1 = 11;
		Var32.f_1 = 11;
		func_213(&uVar11, &uVar15, &Var19, &Var32, -1516819610, joaat("pvp"), func_212(255), bVar3, 1, iVar4, iVar5, iVar6, Local_2026.f_2);
		func_214(67108864);
	}
}

void func_70()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			func_215(iVar0);
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
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar0 /*12*/]));
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
	func_216(Local_2026.f_10.f_16);
	func_216(Local_2026.f_10.f_17);
	func_216(Local_2026.f_10.f_18);
	func_216(Local_2026.f_10.f_15);
}

void func_72(bool bParam0)
{
	if (func_33(16777216) && !bParam0)
	{
		func_217(1);
		func_214(16777216);
	}
	else if (!func_33(16777216) && bParam0)
	{
		func_217(0);
		func_126(16777216);
	}
}

void func_73()
{
	if (!func_33(262144))
	{
		return;
	}
	func_218(Local_2026.f_2, 0);
	if (!func_219(PLAYER::PLAYER_ID()))
	{
		func_214(262144);
	}
}

void func_74()
{
	if (!func_33(524288))
	{
		return;
	}
	func_220(Local_2026.f_2, 0);
	if (!func_221(PLAYER::PLAYER_ID()))
	{
		func_214(524288);
	}
}

void func_75()
{
	if (!func_33(268435456))
	{
		return;
	}
	func_222(4);
	func_214(268435456);
}

void func_76(bool bParam0)
{
	if (func_33(32768) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_223(1);
		func_126(32768);
	}
	else
	{
		func_223(0);
		func_214(32768);
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
		LAW::_0x009CF9A29972C298(454742288);
		func_126(131072);
	}
	else
	{
		LAW::_0x009CF9A29972C298(0);
		func_214(131072);
	}
}

void func_78(var uParam0, int iParam1)
{
	if (func_224(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_79(int iParam0)
{
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(&(Local_2026.f_202.f_319[iParam0])))
	{
		return;
	}
	HUD::REMOVE_MP_GAMER_TAG(Local_2026.f_202.f_319[iParam0]);
}

bool func_80(int iParam0, int iParam1)
{
	return func_113(&(Local_2026.f_166[iParam0]), iParam1);
}

int func_81(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iParam0 /*5*/])))
	{
		return 0;
	}
	*iParam1 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iParam0 /*5*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	return 1;
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		if (!func_33(4194304))
		{
			func_225(1, 1);
			func_126(4194304);
		}
	}
	else if (func_33(4194304))
	{
		func_226(1, 1, 0);
		func_214(4194304);
	}
}

void func_83()
{
	var uVar0;

	if (!func_33(8388608))
	{
		return;
	}
	uVar0 = func_227();
	CAM::_0x2412216FCC7B4E3E(uVar0);
	func_214(8388608);
}

void func_84(bool bParam0)
{
	if (func_228(1048576) == bParam0)
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
		func_229(1048576);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
}

void func_85(bool bParam0)
{
	if (!bParam0)
	{
		if (CAM::DOES_CAM_EXIST(Local_2026.f_559))
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_559, false);
		}
		if (CAM::DOES_CAM_EXIST(Local_2026.f_560))
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_560, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_214(8);
		return;
	}
	if (CAM::DOES_CAM_EXIST(Local_2026.f_559))
	{
		CAM::SET_CAM_ACTIVE(Local_2026.f_559, true);
	}
	if (CAM::DOES_CAM_EXIST(Local_2026.f_560))
	{
		CAM::SET_CAM_ACTIVE(Local_2026.f_560, true);
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
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0, 0);
	func_230(bParam0);
	if (bParam0)
	{
		func_214(32);
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
		func_214(64);
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
		func_214(16);
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
		iVar1 = func_231(iVar0, 1);
		STREAMING::REMOVE_ANIM_DICT(func_232(iVar1));
		iVar0++;
	}
}

void func_90()
{
	if (!func_33(4))
	{
		return;
	}
	func_233(0);
	func_214(4);
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
	return func_113(&(Local_2026.f_29[iParam0 /*5*/]), iParam1);
}

void func_93(var uParam0)
{
	if (!func_234(*uParam0))
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
	while (iVar0 < Local_17.f_337.f_6)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(&(Local_17.f_337[iVar0])))
		{
			VOLUME::_0xFDFECC6EE4491E11(&(Local_17.f_337[iVar0]));
		}
		iVar0++;
	}
}

bool func_96(int iParam0, int iParam1)
{
	return func_113((Local_17.f_278[iParam0 /*2*/])->f_1, iParam1);
}

void func_97(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
			iVar1 = NETWORK::NET_TO_OBJ(&(uParam0->f_257[iVar0 /*5*/]));
			GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar1, 0);
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
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar0 /*4*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar0 /*4*/]));
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
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 == 0)
		{
		}
		else
		{
			func_235(iVar0);
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

	if (!DATAFILE::_0x7907969497EA92F5(Local_2026.f_4) || !DATAFILE::_0x603AC35FD4602C76(Local_2026.f_4))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10.f_7)
	{
		func_236(func_174(uParam0, iVar0));
		iVar0++;
	}
	func_236(func_171());
	iVar1 = 0;
	while (iVar1 < uParam0->f_10.f_8)
	{
		func_140(&Var3);
		if (!func_141(&Local_2026, &Var3, iVar1))
		{
		}
		else if (!func_177(Var3, 1339124518, &iVar2, 0))
		{
		}
		else
		{
			iVar9 = iVar2;
			if (!STREAMING::IS_MODEL_VALID(iVar9))
			{
				iVar9 = func_180(&(uParam0->f_45[iVar1 /*6*/]));
			}
			func_236(iVar9);
			func_236(func_181(&(uParam0->f_45[iVar1 /*6*/])));
			if (!func_177(Var3, 1325183772, &iVar2, 0))
			{
			}
			else if (!func_237(iVar8))
			{
			}
			else
			{
				iVar8 = iVar2;
				func_236(WEAPON::_GET_WEAPONTYPE_MODEL(iVar8));
			}
		}
		iVar1++;
	}
	iVar11 = func_175();
	iVar10 = 0;
	while (iVar10 < iVar11)
	{
		func_140(&Var12);
		if (!func_176(&Var12, iVar10))
		{
		}
		else if (!func_177(Var12, 1339124518, &iVar2, 0))
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
				func_236(iVar9);
			}
		}
		iVar10++;
	}
	func_236(func_238());
	func_236(func_239());
	if (uParam0->f_10.f_14 > 0)
	{
		func_236(func_184());
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
		func_240(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_241(iVar1);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		func_242(iVar2);
		iVar2++;
	}
	func_243();
	func_244(&(fParam0->f_202.f_51));
	func_245();
	func_246(fParam0);
	if (func_247(Local_2026.f_202.f_55))
	{
		UIFEED::_0x2F901291EF177B02(Local_2026.f_202.f_55, 0);
		Local_2026.f_202.f_55 = 0;
	}
	func_248(&(fParam0->f_202.f_77), 0, 0);
	func_249(&(Local_2026.f_202.f_62), 1);
}

void func_103()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_33(1))
	{
		func_250(0);
		func_251(0);
		if (!func_33(2))
		{
			func_253(func_252(), 1);
		}
		func_209(&bVar0, &bVar1);
		bVar2 = func_33(8192);
		if (!func_33(134217728) && !func_55(&Local_17, 524288))
		{
			func_254(bVar2);
		}
		else if (bVar0 > 0)
		{
			func_255(bVar2, bVar0 != bVar1);
		}
		else
		{
			func_256(bVar2);
		}
		if (func_33(2))
		{
			func_257(Local_2026.f_2, func_33(8192), bVar0, bVar1);
		}
		return;
	}
	(Local_361[Local_2026.f_634 /*52*/])->f_48 = -1;
	func_254(0);
}

void func_104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_OBJ(&(uParam0->f_257[iVar0 /*5*/]));
			TASK::_0xA21AA2F0C2180125(iVar1, 0);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_257[iVar0 /*5*/])))
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
	if (!func_258(2, 255) || func_258(512, 255))
	{
		return;
	}
	func_83();
	func_259();
	if (func_258(1, 255))
	{
		func_85(0);
		func_86(1);
		func_87(0);
		func_84(0);
		func_88(0, 1000);
		func_260(iParam0);
		AUDIO::_0x9428447DED71FC7E("RDRO_Scripted_Cutscene_Scenes");
		func_261();
		NETWORK::_0x4B05B97BA46F419D(1);
	}
	func_262(512);
}

int func_106(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_263(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_107()
{
	return Global_1103537->f_7066.f_492;
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1103537->f_7066.f_351[iVar0 /*2*/])
	{
		return func_108(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1103537->f_7066.f_351[iVar0 /*2*/])
	{
		return func_108(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_109(int iParam0)
{
	return (Global_1103537->f_7066.f_351[iParam0 /*2*/])->f_1;
}

int func_110(int iParam0, var uParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_264(iParam0))
	{
		return 0;
	}
	uVar0 = func_265(iParam0);
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return 0;
	}
	*uParam1 = uVar0;
	uParam1->f_2 = -678729477;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
	{
		return 0;
	}
	return 1;
}

int func_111(int iParam0)
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

int func_112(int iParam0)
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

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_114(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 0;
	}
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (&uParam1->f_3[*uParam2 /*4*/] != iVar0)
		{
		}
		else
		{
			return 1;
		}
		*uParam2++;
	}
	return 0;
}

void func_115(var uParam0, int iParam1)
{
	if (func_41(uParam0, 2))
	{
		return;
	}
	func_267(6, iParam1->f_10.f_15, func_266(), 1);
	func_39(uParam0, 2);
}

int func_116(bool bParam0, bool bParam1)
{
	if ((!bParam1 && !func_41(Local_361[Local_2026.f_634 /*52*/], 262144)) && !func_41(Local_361[Local_2026.f_634 /*52*/], 524288))
	{
		return 1;
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 2) && !bParam0)
	{
		return 0;
	}
	return 1;
}

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (iParam0 == func_268(iVar0))
	{
		return 1;
	}
	iVar1 = PED::GET_MOUNT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iParam0 == func_268(iVar1))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return 0;
	}
	iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iParam0 == func_268(iVar2))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		return 0;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return 0;
	}
	iVar1 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return 0;
	}
	*iParam2 = 0;
	while (*iParam2 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[*iParam2 /*12*/])))
		{
		}
		else if (&uParam1->f_16[*iParam2 /*12*/] != iVar1)
		{
			iVar2 = NETWORK::NET_TO_PED(&(uParam1->f_16[*iParam2 /*12*/]));
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::IS_PED_ON_MOUNT(iVar2)) && PED::GET_MOUNT(iVar2) == iVar0)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		*iParam2++;
	}
	return 0;
}

void func_119(int iParam0)
{
	var uVar0;

	if (!func_33(1))
	{
		return;
	}
	BOUNTY::_0x188B748861B5BA17(&uVar0, -493957506, 0);
	func_269(477974086, 1, 0);
}

void func_120(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<8> Var0;
	bool bVar8;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Local_2026 != Var0.f_5)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 2:
		case 3:
			if (func_200(bParam3) == -409129282)
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!func_41((*uParam2)[Local_2026.f_634 /*52*/], 32) && !func_41((*uParam2)[Local_2026.f_634 /*52*/], 64))
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
				func_39(Local_361[Local_2026.f_634 /*52*/], 4194304);
				AUDIO::PLAY_SOUND(func_270(), func_271(), false, 0, true, 0);
			}
			if (bParam3->f_10 == -19759302)
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (bParam3->f_10 == -409129282)
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
			if (Local_2026.f_10 == -19759302)
			{
				if (func_272(Var0.f_7, 8388608) && !func_272(Var0.f_7, 16777216))
				{
					return;
				}
			}
			else if (Local_2026.f_10 == -409129282)
			{
				if (func_80(Var0.f_7, 16) && !func_80(Var0.f_7, 32))
				{
					return;
				}
			}
			if ((func_228(16384) || func_228(4096)) || func_228(8192))
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
			Local_2026.f_202.f_52 = Var0.f_6;
			break;
		case 8:
			if (Var0.f_7 < 0)
			{
				return;
			}
			if (bParam3->f_10 == -19759302)
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (bParam3->f_10 == -409129282)
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
				if (Local_2026.f_10 == -19759302)
				{
					func_273(Var0.f_7, 16777216);
				}
				else if (Local_2026.f_10 == -409129282)
				{
					func_274(Var0.f_7, 32);
				}
			}
			if (Local_2026.f_10 == -19759302)
			{
				func_273(Var0.f_7, 8388608);
			}
			else if (Local_2026.f_10 == -409129282)
			{
				func_274(Var0.f_7, 16);
			}
			if (bVar8)
			{
				return;
			}
			func_129(Var0.f_7, 0);
			if ((func_228(16384) || func_228(4096)) || func_228(8192))
			{
				return;
			}
			func_132(4096);
			Local_2026.f_202.f_52 = Var0.f_6;
			break;
		case 1:
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!func_41((*uParam2)[Local_2026.f_634 /*52*/], 32) && !func_41((*uParam2)[Local_2026.f_634 /*52*/], 64))
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
			if (func_200(bParam3) != -409129282)
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (!func_202(Var0.f_7, uParam1, 1))
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 2))
			{
				return;
			}
			func_275(Var0.f_7, uParam1, 2);
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
			if ((func_228(16384) || func_228(4096)) || func_228(8192))
			{
				return;
			}
			Local_2026.f_202.f_52 = Var0.f_6;
			func_132(16384);
			break;
	}
}

int func_121(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[*uParam2 /*4*/])))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_VEH(&(uParam1->f_3[*uParam2 /*4*/]));
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
						return 1;
					}
					iVar1++;
				}
			}
		}
		*uParam2++;
	}
	return 0;
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return 0;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	return 1;
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

int func_125(int iParam0)
{
	int iVar0;

	iVar0 = func_276(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_277(iVar0, 2);
}

void func_126(int iParam0)
{
	func_122(&(Local_2026.f_7), iParam0);
}

void func_127()
{
	func_278(512);
}

int func_128(int iParam0)
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return func_202(iParam0, &Local_17, 32);
		case -409129282:
			return func_203(iParam0, &Local_17, 2);
		default:
			break;
	}
	return 0;
}

void func_129(int iParam0, bool bParam1)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			func_279(iParam0, bParam1);
			break;
		case -19759302:
			func_280(iParam0, bParam1);
			break;
		default:
			return;
	}
}

void func_130(var uParam0)
{
	func_281("REL_CHU_ALLY_", &(uParam0->f_10.f_17));
	func_281("REL_CHU_ENEMY_", &(uParam0->f_10.f_16));
	func_281("REL_CHU_PRIMARY_", &(uParam0->f_10.f_15));
	func_281("REL_CHU_KIDNAP_", &(uParam0->f_10.f_18));
	func_267(4, uParam0->f_10.f_15, func_266(), 1);
	func_267(2, uParam0->f_10.f_18, func_266(), 1);
	func_267(2, uParam0->f_10.f_15, -767591988, 1);
	func_267(2, uParam0->f_10.f_15, 1986610512, 1);
	func_267(2, uParam0->f_10.f_15, -989642646, 1);
	func_267(2, uParam0->f_10.f_15, 889541022, 1);
	func_267(2, uParam0->f_10.f_15, -319516747, 1);
	func_267(1, uParam0->f_10.f_15, -1976316465, 1);
	func_267(1, uParam0->f_10.f_15, 841021282, 1);
	func_267(2, uParam0->f_10.f_15, 707888648, 1);
	func_267(2, uParam0->f_10.f_17, 707888648, 1);
	func_267(2, uParam0->f_10.f_16, 707888648, 1);
	func_267(2, uParam0->f_10.f_17, func_266(), 1);
	func_267(2, uParam0->f_10.f_16, func_266(), 1);
}

int func_131()
{
	int iVar0;

	iVar0 = func_282(Local_2026.f_10.f_1, 0);
	if (iVar0 <= 3)
	{
		return 1;
	}
	return 0;
}

void func_132(int iParam0)
{
	func_122(&(Local_2026.f_8), iParam0);
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

int func_135(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(uParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_13(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887->f_13 != -1)
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
		return 0;
	}
	iVar0 = 0;
	return 1;
}

int func_136(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam1 < 1)
	{
		iParam1 = 10;
	}
	if (!HUD::_DOES_TEXT_DATABASE_EXIST(uParam0))
	{
		iVar0 = 0;
		return 0;
	}
	bVar1 = false;
	while ((HUD::_TEXT_DATABASE_REQUEST(uParam0) == 0 && iVar0 < iParam1) && !bVar1)
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
		return 0;
	}
	iVar0 = 0;
	while ((!HUD::_TEXT_DATABASE_HAS_LOADED(uParam0) && iVar0 < iParam1) && !bVar1)
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
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_283(iVar0, 1);
		func_285(&(uParam0->f_4), iVar1, func_284(iVar1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar2 = func_286(iVar0, 1);
		func_285(&(uParam0->f_4), iVar2, func_287(iVar2));
		iVar0++;
	}
}

void func_138(var uParam0)
{
	struct<5> Var0;
	bool bVar5;

	uParam0->f_10.f_6 = func_288(uParam0);
	uParam0->f_10.f_2 = { func_289(uParam0) };
	uParam0->f_10.f_7 = func_290(uParam0);
	uParam0->f_10.f_8 = func_291(uParam0);
	uParam0->f_10.f_9 = 0;
	uParam0->f_10.f_5 = func_292(1503734359);
	if ((func_293(uParam0, &Var0) && func_178(Var0, 1594022734, &bVar5, 0)) && bVar5)
	{
		func_126(256);
	}
	if (func_294())
	{
		func_126(16384);
	}
	if (func_295())
	{
		func_126(65536);
	}
	if (func_296())
	{
		func_126(1048576);
	}
}

void func_139(int iParam0, var uParam1)
{
	(uParam1->f_29[iParam0 /*5*/])->f_1 = { func_297(uParam1, iParam0) };
	if (func_298(uParam1, iParam0))
	{
		func_122(uParam1->f_29[iParam0 /*5*/], 2);
	}
	if (func_299(uParam1, iParam0))
	{
		func_122(uParam1->f_29[iParam0 /*5*/], 4);
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

int func_141(int iParam0, var uParam1, int iParam2)
{
	if (func_293(iParam0, uParam1))
	{
		uParam1->f_2 = -788131562;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_142(struct<5> Param0)
{
	int iVar0;
	int iVar1;

	if (func_300(Param0, -507939340, &iVar0, 0) && Local_17.f_315 < iVar0)
	{
		return 0;
	}
	if (func_300(Param0, 1146320435, &iVar1, 0) && Local_17.f_315 > iVar1)
	{
		return 0;
	}
	return 1;
}

void func_143(int iParam0, var uParam1)
{
	struct<5> Var0;

	(uParam1->f_45[iParam0 /*6*/])->f_1 = 0;
	uParam1->f_45[iParam0 /*6*/] = func_301(uParam1, iParam0);
	(uParam1->f_45[iParam0 /*6*/])->f_2 = { func_302(uParam1, iParam0) };
	(uParam1->f_45[iParam0 /*6*/])->f_5 = func_303(uParam1, iParam0);
	if (func_304(uParam1, iParam0))
	{
		func_273(iParam0, 1);
	}
	if (&uParam1->f_45[iParam0 /*6*/] == 280775267)
	{
		func_273(iParam0, 8);
		uParam1->f_45[iParam0 /*6*/] = 1566032419;
	}
	if (&uParam1->f_45[iParam0 /*6*/] != 1566032419 && func_33(256))
	{
		func_273(iParam0, 8192);
	}
	else if (&uParam1->f_45[iParam0 /*6*/] == 824585797 || &uParam1->f_45[iParam0 /*6*/] == joaat("driver"))
	{
		func_273(iParam0, 8192);
	}
	if (func_305(iParam0, 1323038251, 0))
	{
		func_273(iParam0, 2);
		uParam1->f_10.f_9++;
	}
	if (((func_306(uParam1, iParam0) && uParam1->f_10.f_14 < 4) && func_141(&Local_2026, &Var0, iParam0)) && func_142(Var0))
	{
		func_273(iParam0, 4);
	}
	func_307(iParam0, -760151658, 16, 0);
	func_307(iParam0, 587406518, 65536, 0);
	func_307(iParam0, 45657025, 32768, 0);
	func_307(iParam0, -697657725, 33554432, 0);
}

void func_144(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_308(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = func_309(iParam0, iVar1, &bVar2);
		if (!VOLUME::_DOES_VOLUME_EXIST(iVar3))
		{
		}
		else if (bVar2)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_620))
			{
				iParam0->f_620 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_620))
				{
				}
				else
				{
					VOLUME::_0x6E0D3C3F828DA773(iParam0->f_620, iVar3);
					Jump @166; //curOff = 114
					if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_619))
					{
						iParam0->f_619 = VOLUME::_CREATE_VOLUME_AGGREGATE();
						if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_619))
						{
						}
						else
						{
							VOLUME::_0x6E0D3C3F828DA773(iParam0->f_619, iVar3);
						}
						iVar1++;
					}
				}
			}
		}
	}

void func_145()
{
	vector3 vVar0;

	if (VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
		Local_2026.f_625 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_PRIMARY");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_620))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
		Local_2026.f_626 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_SECONDARY");
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
	iVar4 = func_308(&Local_2026);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		if (!func_310(&Local_2026, &Var6, iVar5))
		{
		}
		else
		{
			bVar11 = false;
			if (func_178(Var6, 1419063592, &bVar11, 0) && bVar11)
			{
				func_311(Var6, -880340422, &fVar1, 0);
				func_311(Var6, 902857663, &fVar3, 0);
			}
			else
			{
				func_311(Var6, -880340422, &fVar0, 0);
				func_311(Var6, 902857663, &fVar2, 0);
			}
		}
		iVar5++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
	{
		vVar12 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
		Local_2026.f_627 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar0, fVar0, fVar0, "AVOID_VOL_PRIMARY");
		Local_2026.f_627.f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar2, fVar2, fVar2, "AVOID_LAW_VOL_PRIMARY");
		POPULATION::_0xB56D41A694E42E86(Local_2026.f_627, 12288, 0, 0, -1, -1, 16);
		POPULATION::_0xB56D41A694E42E86(Local_2026.f_627.f_2, 16384, 0, 0, -1, -1, 16);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_620))
	{
		vVar12 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
		Local_2026.f_627.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar1, fVar1, fVar1, "AVOID_VOL_SECONDARY");
		Local_2026.f_627.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar3, fVar3, fVar3, "AVOID_LAW_VOL_SECONDARY");
		POPULATION::_0xB56D41A694E42E86(Local_2026.f_627.f_1, 12288, 0, 0, -1, -1, 16);
		POPULATION::_0xB56D41A694E42E86(Local_2026.f_627.f_3, 16384, 0, 0, -1, -1, 16);
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
	uParam0->f_561.f_52 = { Local_2026.f_2 };
	uParam0->f_561.f_54 = func_312(uParam0);
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

	if (!func_293(&Local_2026, &Var1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Var12 = { Var1 };
		if (!func_313(&Var12, 565295571, iVar0, 0))
		{
		}
		else if (!func_177(Var12, -537439784, &iVar7, 0))
		{
		}
		else
		{
			switch (iVar7)
			{
				case joaat("cull"):
					iVar6 = 1;
					break;
				case joaat("flatten"):
					iVar6 = 2;
					break;
				case 331632914:
					iVar6 = 4;
					break;
				case 1152024837:
					iVar6 = 8;
					break;
				case joaat("push"):
					iVar6 = 16;
					break;
				case joaat("decal"):
					iVar6 = 32;
					break;
				default:
					Jump @241; //curOff = 166
					if (!func_314(Var12, 644136394, &vVar8, 0))
					{
					}
					else if (!func_311(Var12, 1357107565, &uVar11, 0))
					{
					}
					else
					{
						Local_2026.f_189[iVar0] = GRAPHICS::_0xFA50F79257745E74(vVar8, uVar11, iVar6, -1, 0);
					}
				}
				iVar0++;
			}
		}

int func_149()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_231(iVar0, 1);
		STREAMING::REQUEST_ANIM_DICT(func_232(iVar1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_232(iVar1)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_150()
{
	SCRIPTS::REQUEST_SCRIPT("net_entity_brain");
	return SCRIPTS::HAS_SCRIPT_LOADED("net_entity_brain");
}

void func_151()
{
	int iVar0;
	int iVar1;

	func_315(&(Local_2026.f_174.f_6), 100);
	if ((func_33(1) && !func_33(8192)) && func_33(2))
	{
		func_316(Local_2026.f_2);
	}
	if (Local_2026.f_174.f_6 != 0)
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
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2026.f_618), iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			NETWORK::_0x5A91BCEF74944E93(PLAYER::INT_TO_PLAYERINDEX(iVar1), 30f);
		}
		iVar1++;
	}
}

void func_152(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar0 = Local_2026.f_174.f_1;
	func_315(&(Local_2026.f_174.f_1), 32);
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (func_317(iVar1))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Local_2026.f_618), iVar0);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Local_2026.f_618), iVar0);
	}
	if (func_318(16384))
	{
		if (Local_2026.f_638 == 0)
		{
			Local_2026.f_638 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else
		{
			(Local_361[Local_2026.f_634 /*52*/])->f_47 = func_210(Local_2026.f_638);
			if ((Local_361[Local_2026.f_634 /*52*/])->f_47 > 45000 && !func_41(Local_361[Local_2026.f_634 /*52*/], 2))
			{
				func_39(Local_361[Local_2026.f_634 /*52*/], 2);
			}
		}
	}
	else
	{
		(Local_361[Local_2026.f_634 /*52*/])->f_47 = 0;
		Local_2026.f_638 = 0;
	}
	if (func_319(uParam0, uParam2))
	{
		func_39((*uParam1)[Local_2026.f_634 /*52*/], 8);
	}
	else
	{
		func_320((*uParam1)[Local_2026.f_634 /*52*/], 8);
	}
	bVar2 = func_41((*uParam1)[Local_2026.f_634 /*52*/], 32);
	func_321(Local_2026.f_174.f_3);
	func_322();
	func_323();
	func_324();
	func_325();
	if (func_33(1) && !func_33(2))
	{
		if (func_326())
		{
			func_39(Local_361[Local_2026.f_634 /*52*/], 16777216);
		}
		if (func_41(Local_361[Local_2026.f_634 /*52*/], 16777216) && func_327())
		{
			func_253(func_252(), 0);
		}
	}
	if (!func_55(&Local_17, 16))
	{
		if (func_328(uParam0, uParam2, &iVar3))
		{
			(Local_361[Local_2026.f_634 /*52*/])->f_45 = iVar3;
			if (func_329((Local_17.f_16[iVar3 /*12*/])->f_2))
			{
				if (Local_2026.f_171 != 0)
				{
					Local_2026.f_171.f_1 = (Local_2026.f_171.f_1 + NETWORK::GET_TIME_DIFFERENCE(Local_2026.f_171, NETWORK::GET_NETWORK_TIME_ACCURATE()));
				}
				Local_2026.f_171 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else
			{
				Local_2026.f_171 = 0;
			}
		}
		else
		{
			((*uParam1)[Local_2026.f_634 /*52*/])->f_45 = -1;
			Local_2026.f_171 = 0;
		}
	}
	else
	{
		((*uParam1)[Local_2026.f_634 /*52*/])->f_45 = -1;
		Local_2026.f_171 = 0;
	}
	if (bVar2)
	{
		if (!GANG::_0xD6F6ACF4392187FB(uParam0->f_316) || !GANG::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 16777216))
			{
				func_103();
				func_320((*uParam1)[Local_2026.f_634 /*52*/], 32);
				func_214(1);
				func_43(uParam2, uParam1);
				func_39((*uParam1)[Local_2026.f_634 /*52*/], 8388608);
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
	else if (((!func_41((*uParam1)[Local_2026.f_634 /*52*/], 8388608) && !func_55(&Local_17, 536870912)) && !func_33(1)) && !func_55(&Local_17, 524288))
	{
		if (GANG::_0xD6F6ACF4392187FB(uParam0->f_316) && GANG::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			func_330(1);
		}
	}
	func_331();
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 32) && func_332(Local_2026.f_619, Global_35))
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 65536);
		bVar4 = true;
	}
	else
	{
		func_320(Local_361[Local_2026.f_634 /*52*/], 65536);
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 64) && func_332(Local_2026.f_620, Global_35))
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 131072);
		bVar4 = true;
	}
	else
	{
		func_320(Local_361[Local_2026.f_634 /*52*/], 131072);
	}
	if ((bVar4 && func_33(1)) && func_333(255))
	{
		func_72(1);
	}
	else
	{
		func_72(0);
	}
	if (func_33(1) && func_333(255))
	{
		func_334();
	}
	if (func_335(&iVar5))
	{
		func_336(iVar5);
	}
}

void func_153()
{
	if (Local_2026.f_174.f_7 == 0)
	{
		if (func_337())
		{
			func_82(1);
		}
		else
		{
			func_82(0);
		}
	}
	func_315(&(Local_2026.f_174.f_7), 5);
}

void func_154(var uParam0, var uParam1, int iParam2)
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

	bVar0 = !func_41((*uParam1)[Local_2026.f_634 /*52*/], 2);
	iVar1 = iParam2->f_174.f_2;
	func_315(&(iParam2->f_174.f_2), 3);
	iVar3 = PLAYER::PLAYER_PED_ID();
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar1 /*4*/])))
	{
		return;
	}
	iVar2 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar1 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (!func_92(iVar1, 8))
	{
		VEHICLE::_0xCBF88256E44D5D39(iVar2, 1);
		func_338(iVar1, 8);
	}
	if (!func_92(iVar1, 32) && func_339(iVar1, &Local_17, 1))
	{
		(Local_2026.f_29[iVar1 /*5*/])->f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1215290486, iVar2, -1082130432, 90f, 40f, -1082130432, -1082130432, 1127481344, 0, 1, -1, -1);
		func_338(iVar1, 32);
	}
	if ((!func_92(iVar1, 64) && func_339(iVar1, &Local_17, 1)) && func_210((Local_17.f_3[iVar1 /*4*/])->f_2) > 60000)
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
		if (!func_33(1))
		{
		}
		else if (BUILTIN::VDIST(vVar4, Global_35) > 100f)
		{
		}
		func_338(iVar1, 64);
	}
	if (!func_92(iVar1, 16))
	{
		StringCopy(&cVar7, "VEH_DEFENSIVE_VOL_", 64);
		StringIntConCat(&cVar7, iVar1, 64);
		vVar15 = { Vector(1f, 1f, 1f) * Vector(20f, 20f, 20f) };
		Local_2026.f_621[iVar1] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 0f, 0f, 0f, vVar15, func_340(cVar7));
		PED::_0x7C00CFC48A782DC0(&(Local_2026.f_621[iVar1]), iVar2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		if (VOLUME::_DOES_VOLUME_EXIST(&(Local_2026.f_621[iVar1])))
		{
			func_338(iVar1, 16);
		}
	}
	if (bVar0 && PED::IS_PED_IN_VEHICLE(iVar3, iVar2, true))
	{
		func_115((*uParam1)[Local_2026.f_634 /*52*/], iParam2);
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

void func_155(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	func_341(fParam2->f_174, uParam0, uParam1, fParam2);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_342(iVar0);
		func_343(iVar0);
		func_344(iVar0);
		iVar0++;
	}
	func_315(&(fParam2->f_174), fParam2->f_10.f_8);
}

void func_156()
{
	func_345(Local_2026.f_174.f_4);
	func_315(&(Local_2026.f_174.f_4), 4);
}

void func_157(float fParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = fParam0->f_174.f_3;
	if (!func_123(iVar0, 1, 1))
	{
		func_315(&(fParam0->f_174.f_3), 32);
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		func_315(&(fParam0->f_174.f_3), 32);
		return;
	}
	func_267(2, fParam0->f_10.f_18, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	if (func_41((*uParam1)[iVar0 /*52*/], 2))
	{
		func_267(6, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	else
	{
		func_267(4, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	func_315(&(fParam0->f_174.f_3), 32);
}

void func_158(float fParam0, var uParam1, var uParam2)
{
	bool bVar0;
	var uVar1;

	if (fParam0->f_561.f_54 == joaat("none"))
	{
		return;
	}
	if (!func_346())
	{
		return;
	}
	if (!func_33(128))
	{
		func_126(128);
	}
	if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 32))
	{
		return;
	}
	if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 8388608))
	{
		return;
	}
	Local_2026.f_561.f_1 = Local_2026.f_618;
	func_347(fParam0, uParam1, uParam2, fParam0->f_561.f_55);
	if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 64))
	{
		if (Local_2026.f_631 == 255)
		{
			return;
		}
		if (!func_348(&(fParam0->f_561), Local_2026.f_632))
		{
			return;
		}
		func_103();
		func_320((*uParam1)[Local_2026.f_634 /*52*/], 64);
		func_214(1);
		func_214(8192);
		func_39((*uParam1)[Local_2026.f_634 /*52*/], 8388608);
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
	if (func_349(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (func_350(&(fParam0->f_561), &bVar0, &uVar1, 0))
	{
		func_330(2);
		if (!bVar0)
		{
			func_39(Local_361[Local_2026.f_634 /*52*/], 32768);
		}
	}
	else if (func_351(fParam0, uParam1, uParam2))
	{
		func_330(2);
		func_39(Local_361[Local_2026.f_634 /*52*/], 32768);
	}
}

void func_159()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;

	if (Local_17.f_305 != 5)
	{
		func_93(&(Local_2026.f_548));
	}
	if (Local_17.f_305 != 4)
	{
		Local_2026.f_549 = 0;
	}
	switch (Local_17.f_305)
	{
		case 0:
		case 1:
			return;
		case 3:
			func_39(Local_361[Local_2026.f_634 /*52*/], 1024);
			break;
		case 4:
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 2048))
			{
				return;
			}
			if (func_352(Local_17.f_305.f_1, &iVar0))
			{
				iVar1 = PED::_GET_CARRIER_AS_HUMAN(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					Local_2026.f_550.f_6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar1) };
				}
			}
			if (!func_353(Local_17.f_305.f_2, &(Local_2026.f_550), &bVar2, 42, 1, 90f, 1101004800 /* Float: 20f */, 80f, 120f, 3f))
			{
				if (!bVar2)
				{
					return;
				}
			}
			else
			{
				Local_2026.f_550.f_3.f_2 = (Local_2026.f_550.f_3.f_2 + 10f);
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_2026.f_550.f_3, &fVar3, 0) && fVar3 != 0f)
				{
					if (!VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
					{
						Local_2026.f_550.f_3.f_2 = fVar3;
						(Local_361[Local_2026.f_634 /*52*/])->f_49 = { Local_2026.f_550.f_3 };
						func_39(Local_361[Local_2026.f_634 /*52*/], 4096);
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_0xF70F00013A62F866(Local_2026.f_619), Local_2026.f_550.f_3, true) > 130f || MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_0xF70F00013A62F866(Local_2026.f_620), Local_2026.f_550.f_3, true) > 130f)
					{
						Local_2026.f_550.f_3.f_2 = fVar3;
						(Local_361[Local_2026.f_634 /*52*/])->f_49 = { Local_2026.f_550.f_3 };
						func_39(Local_361[Local_2026.f_634 /*52*/], 4096);
					}
				}
			}
			if (!func_41(Local_361[Local_2026.f_634 /*52*/], 4096) && Local_2026.f_549 < 2)
			{
				func_94(&(Local_2026.f_550), 1, 0);
				Local_2026.f_549++;
				return;
			}
			func_39(Local_361[Local_2026.f_634 /*52*/], 2048);
			break;
		case 5:
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 8192))
			{
				return;
			}
			if (!func_354(Local_17.f_305.f_2, &bVar4))
			{
				return;
			}
			if (bVar4)
			{
				func_39(Local_361[Local_2026.f_634 /*52*/], 16384);
			}
			func_39(Local_361[Local_2026.f_634 /*52*/], 8192);
			break;
		case 6:
			break;
		case 2:
			if (!func_41(Local_361[Local_2026.f_634 /*52*/], 1024))
			{
				return;
			}
			func_94(&(Local_2026.f_550), 1, 0);
			func_320(Local_361[Local_2026.f_634 /*52*/], 1024);
			func_320(Local_361[Local_2026.f_634 /*52*/], 2048);
			func_320(Local_361[Local_2026.f_634 /*52*/], 4096);
			func_320(Local_361[Local_2026.f_634 /*52*/], 8192);
			func_320(Local_361[Local_2026.f_634 /*52*/], 16384);
			break;
	}
}

void func_160()
{
	int iVar0;
	bool bVar1;
	struct<30> Var2;
	struct<9> Var32;

	if (func_355(&iVar0, &bVar1))
	{
		func_356(1);
	}
	else
	{
		func_356(0);
	}
	if ((func_33(4) && func_357(255)) && func_358(255))
	{
		func_359(&Var2, &Var32, iVar0, bVar1);
		func_360(Var2, Var32, 1, 1, 1);
	}
}

void func_161()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;

	if (func_41(Local_361[Local_2026.f_634 /*52*/], 2097152))
	{
		if (func_33(67108864) && func_258(512, 255))
		{
			func_69(0);
		}
		return;
	}
	iVar0 = func_361();
	func_207(iVar0, func_55(&Local_17, 524288));
	if (!func_33(1))
	{
		return;
	}
	if (!func_55(&Local_17, 524288) && !func_33(134217728))
	{
		return;
	}
	if (func_362())
	{
		return;
	}
	iVar1 = func_363(255);
	if (Local_17.f_299 != 0 && iVar1 != 3)
	{
		if (iVar1 == 0)
		{
			return;
		}
		if (func_258(1, 255) && iVar1 == 1)
		{
			return;
		}
	}
	bVar2 = func_258(1, 255);
	func_69(bVar2);
	func_209(&iVar3, &uVar4);
	if (iVar3 > 0)
	{
		func_364(func_258(1, 255));
	}
	func_39(Local_361[Local_2026.f_634 /*52*/], 2097152);
}

void func_162()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_33(1);
	if ((((bVar0 && !func_33(8192)) && func_33(16384)) && !func_55(&Local_17, 512)) && !func_33(33554432))
	{
		if (func_365(0, 0, 0))
		{
			if (Local_2026.f_639 == 0)
			{
				Local_2026.f_639 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_33(32768))
				{
					func_223(1);
				}
			}
			bVar1 = func_33(8192);
			if (((Local_2026.f_639 != 0 && func_210(Local_2026.f_639) < 45000) && !(!bVar1 && func_332(Local_2026.f_627.f_2, Global_35))) && !(bVar1 && func_332(Local_2026.f_627.f_3, Global_35)))
			{
				LAW::_0xBD944A3D36E992DE();
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::GET_PLAYER_INDEX());
			}
		}
		else
		{
			Local_2026.f_639 = 0;
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
	if ((bVar0 && !func_33(8192)) && Local_2026.f_10.f_5 != 0)
	{
		iVar2 = PLAYER::PLAYER_ID();
		switch (Local_2026.f_10.f_5)
		{
			case 1503734359:
				LAW::_0x785177E4D57D7389(iVar2, -683250308, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, 481893872, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, 2006449383, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, 2140177766, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, 2140177766, 0, 0, -1);
				break;
		}
	}
}

void func_163()
{
	int iVar0;

	if (func_33(1))
	{
		iVar0 = func_252();
		func_366(1, 0);
		switch (Local_17.f_2)
		{
			case 1:
				if (iVar0 == 1 && func_41(Local_361[Local_2026.f_634 /*52*/], 8))
				{
					func_366(2, 0);
				}
				break;
			case 2:
				if (iVar0 == 1)
				{
					if (func_41(Local_361[Local_2026.f_634 /*52*/], 2) || func_41(Local_361[Local_2026.f_634 /*52*/], 8))
					{
						func_366(2, 0);
					}
				}
				break;
			case 3:
			case 4:
			case 5:
				func_366(4, 0);
				break;
		}
		if (func_55(&Local_17, 524288) && func_41(Local_361[Local_2026.f_634 /*52*/], 2097152))
		{
			if (func_367(1) > 0)
			{
				func_366(8, 1);
			}
			else
			{
				func_366(16, 1);
			}
		}
	}
	else
	{
		if ((!func_368(1) || func_368(16)) || func_368(8))
		{
			return;
		}
		func_366(16, 1);
	}
}

void func_164()
{
	func_369();
}

void func_165(var uParam0, var uParam1, float fParam2)
{
	if (func_370())
	{
		func_102(fParam2);
		return;
	}
	func_371(uParam0, uParam1, fParam2);
	func_372(uParam0, uParam1, fParam2);
	func_373(uParam0, uParam1, fParam2);
	func_374(uParam0, uParam1, fParam2);
	func_375();
	func_376();
	func_377(uParam0, uParam1, fParam2);
	func_378();
	func_379(fParam2);
	func_380(uParam0, uParam1, fParam2);
}

var func_166()
{
	return Local_2026.f_10.f_1;
}

int func_167(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_382(func_381(iParam0, uParam1)))
	{
		return 0;
	}
	if (!func_383(iParam0, &vVar0, uParam1))
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

Vector3 func_168(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	struct<4> Var3;

	if (iParam2 == 0)
	{
		return func_381(iParam0, uParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_383(iParam0, &Var3, uParam1))
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

int func_169(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6)
{
	int iVar0;
	struct<8> Var1;

	if (VOLUME::_0xF6A8A652A6B186CD(&(Local_17.f_337[iParam0])))
	{
		return 1;
	}
	if (func_382(vParam1))
	{
		return 1;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_17.f_337.f_5))
	{
		if (VOLUME::_0x397769175A7DBB30(vParam1, fParam4, 0, 0, 575122756))
		{
			*uParam6 = 1;
			return 0;
		}
		Var1 = { vParam1 };
		Var1.f_4 = fParam4;
		Var1.f_6 = iParam5;
		Var1.f_7 = Local_2026.f_4.f_1;
		Local_17.f_337.f_5 = VOLUME::_0x183C0B6CFEFFCAE4(&Var1);
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_17.f_337.f_5);
	switch (iVar0)
	{
		case 3:
			Local_17.f_337[iParam0] = VOLUME::_0x351D71B8B72B858B(Local_17.f_337.f_5);
			return 1;
		case 4:
			Local_17.f_337.f_5 = 0;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_170(int iParam0, struct<2> Param1, bool bParam3)
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
	uVar31 = func_384(iParam0);
	if (SCRIPTS::COUNT_PLAYER_BITS(&uVar31) <= 0)
	{
		return 0;
	}
	func_385(&Var0, uVar31);
	Var0.f_4 = 13;
	func_386(&Var0);
	return 1;
}

int func_171()
{
	return -770982987;
}

bool func_172(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_173(int iParam0, var uParam1, int iParam2)
{
	if (func_293(iParam0, uParam1))
	{
		uParam1->f_2 = -911220092;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_174(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_173(iParam0, &Var0, iParam1))
	{
		func_177(Var0, 1339124518, &iVar5, 0);
	}
	return iVar5;
}

int func_175()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_293(&Local_2026, &Var0) && func_313(&Var0, 2067657977, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 10)
	{
		return 10;
	}
	return iVar5;
}

int func_176(var uParam0, int iParam1)
{
	if (func_293(&Local_2026, uParam0))
	{
		uParam0->f_2 = 2101858238;
		uParam0->f_3 = iParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return 0;
}

int func_177(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_178(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_179(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, 1339124518, &uVar5, 0);
	}
	return uVar5;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			return joaat("a_m_m_unicoachguards_01");
		default:
			break;
	}
	return joaat("a_m_m_unicoachguards_01");
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			return -1038436471;
		default:
			break;
	}
	return -1038436471;
}

int func_182(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, 1325183772, &iVar5, 0);
	}
	return iVar5;
}

int func_183(int iParam0)
{
	if (iParam0 == 0 || iParam0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	if (!func_237(iParam0))
	{
		return 1;
	}
	WEAPON::_0x72D4CB5DB927009C(iParam0, -1, 0);
	if (!WEAPON::_0xFF07CF465F48B830(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_184()
{
	return -2040421904;
}

int func_185()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_290(&Local_2026);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_173(&Local_2026, &Var3, iVar0) || !func_142(Var3))
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

int func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_291(&Local_2026);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_141(&Local_2026, &Var3, iVar0) || !func_142(Var3))
		{
		}
		else
		{
			iVar1++;
			if (!func_387(&Local_2026, iVar0))
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

int func_187()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	bool bVar8;
	int iVar9;
	int iVar10;

	iVar2 = func_175();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_176(&Var3, iVar0) || !func_142(Var3))
		{
		}
		else if (func_178(Var3, 873236619, &bVar8, 0) && bVar8)
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar10 = func_291(&Local_2026);
	iVar9 = 0;
	while (iVar9 < iVar10)
	{
		func_140(&Var3);
		if (!func_141(&Local_2026, &Var3, iVar9) || !func_142(Var3))
		{
		}
		else if (!func_306(&Local_2026, iVar9))
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

void func_188()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<5> Var5;
	bool bVar10;

	if (Local_2026.f_10.f_8 <= 0)
	{
		return;
	}
	if (!func_388(2, Local_2026.f_4.f_1))
	{
		return;
	}
	fVar0 = 0f;
	iVar1 = -1;
	iVar4 = func_291(&Local_2026);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (&Local_2026.f_45[iVar2 /*6*/] == 0)
		{
		}
		else
		{
			func_140(&Var5);
			if (!func_141(&Local_2026, &Var5, iVar2))
			{
			}
			else if (!func_178(Var5, -359968085, &bVar10, 0) || !bVar10)
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
	func_275(iVar1, &Local_17, 33554432);
}

int func_189()
{
	int iVar0;
	struct<5> Var1;

	if (Local_2026.f_10.f_12 >= func_175())
	{
		return 1;
	}
	iVar0 = Local_2026.f_10.f_12;
	if (func_176(&Var1, iVar0) && !func_142(Var1))
	{
		Local_2026.f_10.f_12++;
		return 0;
	}
	if (!func_389(iVar0))
	{
		return 0;
	}
	Local_2026.f_10.f_12++;
	return 0;
}

int func_190(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	vector3 vVar7;
	var uVar10;
	int iVar11;
	var uVar12;

	if (uParam1->f_10.f_10 >= uParam1->f_10.f_7)
	{
		return 1;
	}
	iVar0 = uParam1->f_10.f_10;
	if (func_173(&Local_2026, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_10++;
		return 0;
	}
	iVar6 = func_174(&Local_2026, iVar0);
	vVar7 = { (uParam1->f_29[iVar0 /*5*/])->f_1 };
	uVar10 = func_390(&Local_2026, iVar0);
	if (iVar6 == 0 || !STREAMING::IS_MODEL_VALID(iVar6))
	{
		uParam1->f_10.f_10++;
		return 0;
	}
	if (func_382(vVar7))
	{
		uParam1->f_10.f_10++;
		return 0;
	}
	if (!func_113(&(uParam1->f_29[iVar0 /*5*/]), 4))
	{
		func_391(&vVar7, 1088421888 /* Float: 7f */);
	}
	if (!func_392(uParam0->f_3[iVar0 /*4*/], iVar6, vVar7, uVar10, 1, 0, 0, 0))
	{
		return 0;
	}
	iVar11 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar0 /*4*/]));
	VEHICLE::SET_VEHICLE_CAN_BREAK(iVar11, true);
	VEHICLE::_0x850CE59DEC2028F3(iVar11, 1);
	VEHICLE::_SET_VEHICLE_LIGHTS_CAN_BE_VISIBLY_DAMAGED(iVar11, true);
	AITRANSPORT::_0xBA8818212633500A(iVar11, 3, 1);
	AITRANSPORT::_0xBA8818212633500A(iVar11, 9, 1);
	if (func_300(Var1, -1668085295, &uVar12, 0))
	{
		VEHICLE::_0xD4F5EFB55769D272(iVar11, uVar12);
	}
	if (func_33(256))
	{
		VEHICLE::_0x87B974E54C71BA7B(iVar11, 1);
		VEHICLE::_0xC4A2C11FC0D41916(iVar11, 1);
		ENTITY::_0x9587913B9E772D29(iVar11, 1);
	}
	if (func_113(&(uParam1->f_29[iVar0 /*5*/]), 2))
	{
		func_393(iVar0, uParam0, 2);
	}
	uParam1->f_10.f_10++;
	return 0;
}

int func_191(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	if (uParam1->f_10.f_11 >= uParam1->f_10.f_8)
	{
		return 1;
	}
	iVar0 = uParam1->f_10.f_11;
	if (func_141(&Local_2026, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_11++;
		return 0;
	}
	if (!func_394(iVar0, uParam0, uParam1))
	{
		return 0;
	}
	func_395();
	(uParam0->f_16[iVar0 /*12*/])->f_2 = &uParam1->f_45[iVar0 /*6*/];
	(uParam0->f_16[iVar0 /*12*/])->f_8 = { (uParam1->f_45[iVar0 /*6*/])->f_2 };
	(uParam0->f_16[iVar0 /*12*/])->f_11 = (uParam1->f_45[iVar0 /*6*/])->f_5;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(&(uParam0->f_16[iVar0 /*12*/]))))
	{
		if (!func_396(iVar0, uParam0, uParam1, 1))
		{
			return 0;
		}
	}
	uParam1->f_10.f_11++;
	return 0;
}

int func_192(var uParam0)
{
	if (uParam0->f_327 >= 20)
	{
		return 1;
	}
	func_397(uParam0->f_327, uParam0);
	uParam0->f_327++;
	return 0;
}

void func_193(var uParam0, int iParam1, bool bParam2)
{
	switch (func_200(bParam2))
	{
		case -19759302:
			if ((uParam0->f_16[bParam2->f_174 /*12*/])->f_2 == 1095997463 && !func_398(bParam2->f_174, 1))
			{
				func_399(bParam2->f_174, NETWORK::NET_TO_PED(&(uParam0->f_16[bParam2->f_174 /*12*/])), uParam0);
			}
			break;
	}
	func_400(bParam2->f_174, uParam0, iParam1, bParam2);
}

void func_194(var uParam0, int iParam1, bool bParam2)
{
	func_401(bParam2->f_174.f_2, uParam0, iParam1, bParam2);
}

void func_195(var uParam0, int iParam1, bool bParam2)
{
	if (!func_55(&Local_17, 1073741824 /* Float: 2f */) && func_59(iParam1, 32, 0))
	{
		func_63(&Local_17, 1073741824 /* Float: 2f */);
	}
	if (!func_55(&Local_17, 67108864) && func_402(!func_55(&Local_17, 1073741824 /* Float: 2f */)))
	{
		func_63(uParam0, 67108864);
	}
	if (!func_55(uParam0, 16) && func_59(iParam1, 2, 0))
	{
		func_63(uParam0, 16);
	}
	if ((!func_55(&Local_17, 512) && func_403(&Local_17) > 2) && func_59(&Local_361, 64, 0))
	{
		func_63(&Local_17, 512);
	}
	if ((func_55(uParam0, 1024) || func_55(uParam0, 4096)) || func_55(uParam0, 16384))
	{
		return;
	}
	if (func_55(&Local_17, 134217728) && !func_55(&Local_17, 268435456))
	{
		if (Local_17.f_320 == 0)
		{
			Local_17.f_320 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (func_210(Local_17.f_320) > 60000)
		{
			func_63(&Local_17, 268435456);
		}
	}
	if (func_200(bParam2) == -409129282 && uParam0->f_322 <= 0)
	{
		func_63(uParam0, 16384);
	}
	if ((func_200(bParam2) == -19759302 && !func_404(uParam0, 1095997463)) && !func_55(uParam0, 2048))
	{
		func_63(uParam0, 1024);
	}
	if ((func_200(bParam2) == -19759302 && !func_405(uParam0)) && func_55(uParam0, 2048))
	{
		func_63(uParam0, 4096);
	}
}

void func_196(var uParam0, int iParam1, bool bParam2)
{
	func_406(Local_2026.f_174.f_4, uParam0, bParam2);
}

void func_197()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	switch (Local_17.f_305)
	{
		case 0:
			if (!func_407())
			{
				return;
			}
			func_408();
			func_409(1);
			break;
		case 1:
			if (!func_407())
			{
				func_409(0);
				return;
			}
			if (!func_410())
			{
				return;
			}
			func_63(&Local_17, 128);
			func_409(3);
			break;
		case 3:
			if (!func_54(&Local_361, 1024))
			{
				return;
			}
			if (!func_411(&uVar1, &vVar2))
			{
				switch (Local_2026.f_10)
				{
					case -19759302:
						if (func_412(&Local_17, 1095997463, 262144) && func_413(&Local_17, 1095997463, 262144))
						{
							iVar5 = 0;
							while (iVar5 < 20)
							{
								func_414(iVar5, &Local_17, 262144);
								iVar5++;
							}
							return;
						}
						break;
					case -409129282:
						if (func_415(&Local_17, 1024, 0) && func_416(&Local_17, 1024, 0))
						{
							iVar6 = 0;
							while (iVar6 < 4)
							{
								func_417(iVar6, &Local_17, 1024);
								iVar6++;
							}
							return;
						}
						break;
				}
				func_409(2);
				return;
			}
			Local_17.f_305.f_1 = uVar1;
			Local_17.f_305.f_2 = { vVar2 };
			func_409(4);
			break;
		case 4:
			if (!func_54(&Local_361, 2048))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!func_41(Local_361[iVar0 /*52*/], 4096))
				{
				}
				else if (!func_123(iVar0, 0, 1))
				{
				}
				else
				{
					Local_17.f_305.f_2 = { (Local_361[iVar0 /*52*/])->f_49 };
					func_409(5);
					return;
				}
				iVar0++;
			}
			func_63(&Local_17, 256);
			func_409(2);
			break;
		case 5:
			if (!func_54(&Local_361, 8192))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!func_41(Local_361[iVar0 /*52*/], 16384))
				{
				}
				else if (!func_123(iVar0, 0, 1))
				{
				}
				else
				{
					func_63(&Local_17, 256);
					func_409(2);
					return;
				}
				iVar0++;
			}
			func_409(6);
			break;
		case 6:
			if (Local_17.f_305.f_5 >= Local_17.f_305.f_6)
			{
				if (Local_17.f_305.f_1 == -1)
				{
				}
				else
				{
					switch (Local_2026.f_10)
					{
						case -19759302:
							func_275(Local_17.f_305.f_1, &Local_17, 262144);
							if (func_413(&Local_17, 1095997463, 262144))
							{
								iVar7 = 0;
								while (iVar7 < 20)
								{
									func_414(iVar7, &Local_17, 262144);
									iVar7++;
								}
							}
							break;
						case -409129282:
							func_418(Local_17.f_305.f_1, &Local_17, 1024);
							if (func_416(&Local_17, 1024, 0))
							{
								iVar8 = 0;
								while (iVar8 < 4)
								{
									func_417(iVar8, &Local_17, 1024);
									iVar8++;
								}
							}
							break;
					}
				}
				func_419(&Local_17, 256);
				func_409(2);
				return;
			}
			if (!func_420(Local_17.f_305.f_5, Local_17.f_305.f_6, Local_17.f_305.f_2))
			{
				return;
			}
			Local_17.f_305.f_8 = -1;
			Local_17.f_305.f_5++;
			break;
		case 2:
			if (func_59(&Local_361, 1024, 0))
			{
				return;
			}
			Local_17.f_305.f_1 = -1;
			Local_17.f_305.f_2 = { 0f, 0f, 0f };
			Local_17.f_305.f_5 = 0;
			Local_17.f_305.f_6 = 0;
			Local_17.f_305.f_7 = 0;
			Local_17.f_305.f_9 = 0;
			Local_17.f_305.f_8 = -1;
			func_409(0);
			break;
	}
}

void func_198(var uParam0, int iParam1, bool bParam2)
{
	switch (func_200(bParam2))
	{
		case -409129282:
			func_421(uParam0, iParam1, bParam2);
			return;
		case -19759302:
			func_422(uParam0, iParam1, bParam2);
			return;
		default:
			break;
	}
}

void func_199()
{
	func_423();
}

int func_200(bool bParam0)
{
	return bParam0->f_10;
}

bool func_201(var uParam0, bool bParam1)
{
	if (!func_55(uParam0, 32768))
	{
		return false;
	}
	return func_211(uParam0) > bParam1->f_10.f_6;
}

bool func_202(int iParam0, var uParam1, int iParam2)
{
	return func_113((uParam1->f_16[iParam0 /*12*/])->f_4, iParam2);
}

bool func_203(int iParam0, var uParam1, int iParam2)
{
	return func_113((uParam1->f_257[iParam0 /*5*/])->f_1, iParam2);
}

int func_204(var uParam0, bool bParam1)
{
	switch (func_200(bParam1))
	{
		case -19759302:
			if (!func_55(uParam0, 2048))
			{
				return 2;
			}
			if (uParam0->f_325 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case -409129282:
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

int func_205(var uParam0, bool bParam1)
{
	switch (func_200(bParam1))
	{
		case -19759302:
			if (!func_55(uParam0, 131072))
			{
				return 2;
			}
			if (uParam0->f_326 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case -409129282:
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

int func_206()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return 20;
		case -409129282:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_207(int iParam0, bool bParam1)
{
	if (!func_424(iParam0, 0) && func_128(iParam0))
	{
		if (func_425(iParam0))
		{
			func_129(iParam0, 1);
			if (bParam1)
			{
				Local_2026.f_635++;
			}
			else
			{
				func_208();
			}
		}
		else
		{
			func_129(iParam0, 0);
		}
	}
}

void func_208()
{
	struct<2> Var0;

	Var0.f_1 = 11;
	func_426(&Var0, 404851220, func_212(255), func_41(Local_361[Local_2026.f_634 /*52*/], 32));
}

void func_209(bool bParam0, int iParam1)
{
	*bParam0 = 0;
	switch (Local_2026.f_10)
	{
		case -19759302:
			*iParam1 = Local_2026.f_10.f_13;
			break;
		case -409129282:
			*iParam1 = Local_2026.f_10.f_14;
			break;
	}
	*bParam0 = func_367(1);
}

int func_210(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_211(var uParam0)
{
	if (!func_55(&Local_17, 32768))
	{
		return 0;
	}
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_319, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_212(int iParam0)
{
	int iVar0;

	iVar0 = func_427(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_428(iVar0);
}

void func_213(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, struct<2> Param12)
{
	float fVar0;
	int iVar1;
	bool bVar2;

	if (iParam9 == 0)
	{
		return;
	}
	fVar0 = func_429(((BUILTIN::TO_FLOAT(iParam11) / 1000f) / 60f), 0.5f, 30f);
	func_430(iParam2, &iVar1, &bVar2, 0, fVar0);
	func_431(iParam2, &bVar2, 0, iParam4, iParam9, iParam10, bParam7);
	func_432(iParam2, 0, iParam5);
	func_433(iParam2, &bVar2, 0, bParam8);
	func_434(iParam2, 0, Param12);
	func_435(iParam2, 0, iParam6);
	func_436(1149539403, uParam0, iParam2, 0, 255, 0, 1);
	func_430(iParam3, &iVar1, &bVar2, 1, fVar0);
	func_433(iParam3, &bVar2, 1, bParam8);
	func_431(iParam3, &bVar2, 1, iParam4, iParam9, iParam10, bParam7);
	func_435(iParam3, 1, iParam6);
	if (!bVar2 && iVar1 != 0)
	{
		func_436(iVar1, uParam1, iParam3, 0, 255, 0, 0);
	}
}

void func_214(int iParam0)
{
	func_437(&(Local_2026.f_7), iParam0);
}

void func_215(int iParam0)
{
	int iVar0;

	if (!func_272(iParam0, 64))
	{
		return;
	}
	if (func_272(iParam0, 8388608) && func_438(iParam0, &iVar0, 0, 1))
	{
		NETWORK::_0xEE5AE9956743BA20(iVar0, false);
	}
	func_439(iParam0, 8192);
	func_439(iParam0, 16384);
	func_440(iParam0);
	func_439(iParam0, 64);
	func_439(iParam0, 67108864);
}

void func_216(int iParam0)
{
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iParam0);
	}
}

void func_217(bool bParam0)
{
	Global_1903929->f_485[59] = !bParam0;
}

void func_218(var uParam0, int iParam1, bool bParam2)
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
	if (!func_441(iVar0, 1))
	{
		return;
	}
	if (!bParam2 && !func_442(iVar0))
	{
		return;
	}
	func_222(1);
}

bool func_219(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return ((*Global_1122836)[iParam0 /*54*/])->f_47 & 1 != 0;
}

void func_220(var uParam0, int iParam1, bool bParam2)
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
	if (!func_441(iVar0, 2))
	{
		return;
	}
	if (!bParam2 && !func_442(iVar0))
	{
		return;
	}
	func_222(2);
}

bool func_221(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return ((*Global_1122836)[iParam0 /*54*/])->f_47 & 2 != 0;
}

void func_222(int iParam0)
{
	((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_47 = (((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_47 - (((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_47 && iParam0));
}

void func_223(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

bool func_224(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_225(int iParam0, int iParam1)
{
	if (!func_443(iParam0, iParam1))
	{
		MISC::SET_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_444();
	}
}

void func_226(int iParam0, int iParam1, bool bParam2)
{
	if (func_443(iParam0, iParam1) && (!bParam2 || &(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = 0;
		func_444();
	}
}

char* func_227()
{
	return "mp@freemode_cams@gfh_outro_cams";
}

bool func_228(int iParam0)
{
	return func_113(Local_2026.f_8, iParam0);
}

void func_229(int iParam0)
{
	func_437(&(Local_2026.f_8), iParam0);
}

void func_230(bool bParam0)
{
	if (!bParam0)
	{
		func_445(0);
	}
	Global_1939231->f_2 = bParam0;
}

int func_231(int iParam0, int iParam1)
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

char* func_232(int iParam0)
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

void func_233(bool bParam0)
{
	if (bParam0)
	{
		func_446(48);
	}
	else
	{
		func_447(48);
	}
}

int func_234(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

void func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_5))
	{
		iVar2 = NETWORK::_NET_TO_ANIM_SCENE((Local_17.f_16[iParam0 /*12*/])->f_5);
		ANIMSCENE::_DELETE_ANIM_SCENE(iVar2);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
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
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED((Local_17.f_16[iParam0 /*12*/])->f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
}

void func_236(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
}

bool func_237(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_238()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = joaat("s_m_m_ambientlawrural_01");
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_449(Var1, 1339124518, &uVar6))
	{
		return iVar0;
	}
	return uVar6;
}

int func_239()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 2030804811;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_449(Var1, -118004582, &uVar6))
	{
		return iVar0;
	}
	return uVar6;
}

void func_240(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iParam0])))
	{
		return;
	}
	func_244(Local_2026.f_202[iParam0]);
	func_439(iParam0, 256);
	func_439(iParam0, 512);
	func_439(iParam0, 128);
	func_439(iParam0, 1024);
	func_439(iParam0, 2048);
	func_439(iParam0, 4096);
	if (Local_2026.f_10 == -19759302)
	{
		Local_2026.f_202.f_30[iParam0] = 255;
	}
}

void func_241(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_21[iParam0])))
	{
		return;
	}
	func_244(Local_2026.f_202.f_21[iParam0]);
}

void func_242(int iParam0)
{
	func_244(Local_2026.f_202.f_25[iParam0]);
	func_450(iParam0, 2);
	func_450(iParam0, 4);
	func_450(iParam0, 1);
	func_450(iParam0, 8);
	if (Local_2026.f_10 == -409129282)
	{
		Local_2026.f_202.f_30[iParam0] = 255;
	}
}

void func_243()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_451(iVar0, 0);
		func_452(iVar0, 0);
		iVar0++;
	}
}

void func_244(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_245()
{
	func_244(&(Local_2026.f_202.f_58));
	if (!func_453(Local_2026.f_202.f_59))
	{
		return;
	}
	UIFEED::_0x2F901291EF177B02(Local_2026.f_202.f_59, 0);
}

void func_246(float fParam0)
{
	func_229(2097152);
	func_229(4194304);
	Local_2026.f_202.f_53 = 255;
	Local_2026.f_202.f_54 = 0;
	if (!func_454(fParam0))
	{
		return;
	}
	UIFEED::_0x2F901291EF177B02(fParam0->f_202.f_56, 0);
	fParam0->f_202.f_56 = 0;
	fParam0->f_202.f_60 = 0;
}

bool func_247(int iParam0)
{
	return iParam0 != 0;
}

void func_248(var uParam0, bool bParam1, bool bParam2)
{
	struct<30> Var0;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar40;

	if ((uParam0[0 /*34*/] != 0 || bParam2) || (((*uParam0)[0 /*34*/])->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1082130432;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_1);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_2);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_3);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_4);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_5);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_6);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_10);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_11);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_12);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_14);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_20);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_21);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_22);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_16);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_17);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_18);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_19);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0[iVar40 /*34*/]);
			if (!bParam1)
			{
				uVar34 = ((*uParam0)[iVar40 /*34*/])->f_23;
				uVar35 = ((*uParam0)[iVar40 /*34*/])->f_25;
				uVar36 = ((*uParam0)[iVar40 /*34*/])->f_26;
				uVar37 = ((*uParam0)[iVar40 /*34*/])->f_27;
				uVar38 = ((*uParam0)[iVar40 /*34*/])->f_28;
				uVar39 = ((*uParam0)[iVar40 /*34*/])->f_29;
			}
			MISC::_COPY_MEMORY((*uParam0)[iVar40 /*34*/], &Var0, 34);
			if (!bParam1)
			{
				((*uParam0)[iVar40 /*34*/])->f_23 = uVar34;
				((*uParam0)[iVar40 /*34*/])->f_25 = uVar35;
				((*uParam0)[iVar40 /*34*/])->f_26 = uVar36;
				((*uParam0)[iVar40 /*34*/])->f_27 = uVar37;
				((*uParam0)[iVar40 /*34*/])->f_28 = uVar38;
				((*uParam0)[iVar40 /*34*/])->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_249(var uParam0, bool bParam1)
{
	struct<14> Var0;

	if (uParam0->f_2 > 0)
	{
		UIFEED::_0xDD1232B332CBB9E7(12, 1, 0);
		if (bParam1)
		{
			func_455(uParam0);
			func_456();
		}
		func_457(uParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_458(0);
		func_459(0);
		UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(uParam0, &Var0, 15);
	}
}

int func_250(bool bParam0)
{
	if (!func_460(joaat("freemode"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_251(bool bParam0)
{
	int iVar0;

	if (Global_1900670->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_21() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900670->f_2 == 4 && Global_1900670->f_12 != Global_1900670->f_13) && !bParam0)
	{
		Global_1900670->f_1 = Global_1900670->f_2;
		Global_1900670->f_12 = Global_1900670->f_13;
		func_461(iVar0, Global_1900670->f_12);
	}
	else
	{
		Global_1900670->f_1 = 0;
		Global_1900670->f_7 = iVar0;
		Global_1900670->f_8 = func_462();
		Global_1900670->f_9 = func_463(Global_1893575->f_2);
		Global_1900670->f_11 = func_464(Global_1896610->f_41);
		if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
		{
			func_465(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
		else if (Global_1900670->f_11 != -1)
		{
			func_465(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
		}
		else
		{
			func_465(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
	}
	Global_1900670->f_2 = 0;
}

int func_252()
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

void func_253(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam1)
	{
		func_466(Local_2026.f_2, iParam0 != 1);
	}
	if (iParam0 == 1 && (func_467(iVar0, 1) || func_467(iVar0, 32)))
	{
		func_468(4);
		func_468(8);
	}
	if (!bParam1)
	{
		func_126(2);
	}
	if (Local_2026.f_634 >= 32 || Local_2026.f_634 < 0)
	{
		return;
	}
	func_39(Local_361[Local_2026.f_634 /*52*/], 67108864);
}

void func_254(bool bParam0)
{
	func_469(Local_2026.f_1, bParam0);
}

void func_255(bool bParam0, bool bParam1)
{
	func_470(Local_2026.f_1, bParam1, bParam0);
}

void func_256(bool bParam0)
{
	func_471(Local_2026.f_1, bParam0);
}

void func_257(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
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
	iVar1 = func_472(Param0);
	if (!func_473(iVar1))
	{
		return;
	}
	iVar0 = func_474(iVar1);
	if (!func_475(iVar0))
	{
		return;
	}
	iVar2 = func_476(iVar1);
	if (!func_477(iVar2))
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
		iVar7 = 0;
	}
	else if (bVar4)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 2;
	}
	iVar10 = func_478(iVar0);
	iVar11 = func_106(Param0);
	iVar8 = func_479(iVar1);
	iVar9 = func_480(iVar0);
	if (func_481())
	{
		func_482(iVar10, iVar11);
		func_483(iVar10, iVar8);
		func_484(iVar10, iVar7);
		func_485(iVar10, bParam2, bVar4);
		func_486(iVar10, bParam2, bVar6);
		func_487(iVar8, bParam2, bVar4, Param0, iVar1);
		if (!bParam2)
		{
			if (bVar4)
			{
				func_488(iVar2, iVar0, 1545958071, Param0);
			}
			else
			{
				func_488(iVar2, iVar0, -448995989, Param0);
			}
		}
		func_489(bVar4);
	}
	func_490(iVar9, bParam2, bVar4);
	func_491(Param0, bVar4);
	func_492(1);
	func_492(0);
	func_493(0);
	func_494(0);
	func_222(4);
}

bool func_258(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return func_113((Local_361[iParam1 /*52*/])->f_41.f_1, iParam0);
}

void func_259()
{
	int iVar0;

	if (!func_258(4096, 255))
	{
		return;
	}
	iVar0 = -1429099402;
	PED::_0xDE7B2B4144906CDF(iVar0, Global_34);
	func_495(4096);
}

void func_260(int iParam0)
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

	if (!func_293(&Local_2026, &Var10) || !func_313(&Var10, 556233122, iParam0, 0))
	{
		return;
	}
	iVar15 = func_496(iParam0);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_313(&Var0, -110495140, iVar17, 0))
		{
			return;
		}
		iVar20 = func_497(iParam0, iVar17);
		iVar16 = 0;
		while (iVar16 < iVar20)
		{
			Var5 = { Var0 };
			if ((!func_313(&Var5, 938546485, iVar16, 0) || !func_300(Var5, 957840570, &iVar18, 0)) || !func_177(Var5, -537439784, &uVar19, 0))
			{
			}
			else
			{
				iVar21 = uVar19;
				if (!func_498(iVar21, iVar18, &iVar22))
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

void func_261()
{
	if (!func_258(8, 255))
	{
		return;
	}
	NETWORK::_0x4B05B97BA46F419D(0);
	NETWORK::_0x89D803CD48622150(0);
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, func_499(), true);
	}
	func_495(8);
}

void func_262(int iParam0)
{
	func_122(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_1), iParam0);
}

int func_263(struct<2> Param0, var uParam2)
{
	if (!func_28(Param0))
	{
		return 0;
	}
	func_500(uParam2);
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

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_428(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_501(iVar0);
	switch (iVar1)
	{
		case 2:
			return 1;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_265(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_264(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_428(iParam0);
	iVar2 = func_501(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_502(2);
		case 1:
			return func_502(3);
		default:
			break;
	}
	return uVar0;
}

int func_266()
{
	return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}

void func_267(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_268(int iParam0)
{
	return iParam0;
}

void func_269(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_21() != 0)
	{
		return;
	}
	if (func_503())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_504(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_504(iParam0, 1) /*4*/])->f_2++;
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
		else if (!GANG::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar8])))
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
	func_505(&Var0, uVar7);
}

char* func_270()
{
	return "supply_delivered";
}

char* func_271()
{
	return "HUD_MP_FREE_MODE";
}

bool func_272(int iParam0, int iParam1)
{
	return func_113((Local_2026.f_45[iParam0 /*6*/])->f_1, iParam1);
}

void func_273(int iParam0, int iParam1)
{
	func_122(&((Local_2026.f_45[iParam0 /*6*/])->f_1), iParam1);
}

void func_274(int iParam0, int iParam1)
{
	func_122(Local_2026.f_166[iParam0], iParam1);
}

void func_275(int iParam0, var uParam1, int iParam2)
{
	func_122(&((uParam1->f_16[iParam0 /*12*/])->f_4), iParam2);
}

int func_276(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_506(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_277(int iParam0, int iParam1)
{
	return ((Global_1100950->f_33[iParam0 /*16*/])->f_3.f_8 && iParam1) != 0;
}

void func_278(int iParam0)
{
	((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_52.f_1 = (((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_52.f_1 || iParam0);
}

void func_279(int iParam0, bool bParam1)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540), iParam0);
	if (bParam1)
	{
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540.f_4), iParam0);
	}
}

void func_280(int iParam0, bool bParam1)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540.f_2), iParam0);
	if (bParam1)
	{
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540.f_6), iParam0);
	}
}

void func_281(char* sParam0, int* iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, func_507(Local_2026), 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, iParam1);
}

int func_282(int iParam0, bool bParam1)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iVar3 = func_428(iParam0);
	if (bParam1)
	{
		iVar2 = 1822827642;
	}
	else
	{
		iVar2 = joaat("attempts");
	}
	if (!func_508(iVar3, iVar2, &Var0))
	{
		return -1;
	}
	return func_509(Var0, -1);
}

int func_283(int iParam0, int iParam1)
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

char* func_284(int iParam0)
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

int func_285(var uParam0, int iParam1, var uParam2)
{
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

int func_286(int iParam0, int iParam1)
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

char* func_287(int iParam0)
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

int func_288(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 600000;
	if (func_293(uParam0, &Var0))
	{
		func_300(Var0, -1561379682, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_289(var uParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_293(uParam0, &Var0))
	{
		func_314(Var0, 1679284980, &vVar5, 0);
	}
	return vVar5;
}

int func_290(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_510(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

int func_291(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_511(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 20)
	{
		return 20;
	}
	return iVar5;
}

int func_292(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_177(Var0, -1404661375, &uVar5, 0))
	{
		return uVar5;
	}
	return iParam0;
}

bool func_293(int iParam0, var uParam1)
{
	*uParam1 = iParam0->f_4;
	uParam1->f_2 = 1929036093;
	uParam1->f_3 = iParam0->f_4.f_1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
}

int func_294()
{
	struct<5> Var0;
	var uVar5;

	if (func_293(&Local_2026, &Var0) && func_178(Var0, -1865369028, &uVar5, 0))
	{
		return uVar5;
	}
	return 1;
}

int func_295()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 1;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_178(Var1, -321268365, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

int func_296()
{
	struct<5> Var0;
	var uVar5;

	if (!func_293(&Local_2026, &Var0))
	{
		return 0;
	}
	if (!func_178(Var0, 1245766010, &uVar5, 0))
	{
		return 0;
	}
	return uVar5;
}

Vector3 func_297(var uParam0, var uParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_173(uParam0, &Var0, uParam1))
	{
		func_314(Var0, 1329039358, &vVar5, 0);
	}
	return vVar5;
}

bool func_298(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_173(iParam0, &Var0, iParam1))
	{
		func_178(Var0, -1843028879, &uVar5, 0);
	}
	return uVar5;
}

bool func_299(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_173(iParam0, &Var0, iParam1))
	{
		func_178(Var0, 1111932099, &uVar5, 0);
	}
	return uVar5;
}

int func_300(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_301(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, -1762951883, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_302(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_314(Var0, 1891838186, &vVar5, 0);
	}
	return vVar5;
}

int func_303(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_300(Var0, 1532715368, &iVar5, 0);
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

int func_304(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1) && func_177(Var0, -1662733059, &uVar5, 0))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = iParam2;
	if (!func_141(&Local_2026, &Var0, iParam0) || !func_178(Var0, iParam1, &iVar5, 0))
	{
		return iParam2;
	}
	return iVar5;
}

int func_306(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_178(Var0, -2122207177, &iVar5, 0);
	}
	return iVar5;
}

void func_307(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	bool bVar5;

	bVar5 = iParam3;
	if (func_141(&Local_2026, &Var0, iParam0))
	{
		func_178(Var0, iParam1, &bVar5, 0);
	}
	if (bVar5)
	{
		func_122(&((Local_2026.f_45[iParam0 /*6*/])->f_1), iParam2);
	}
}

int func_308(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_512(iParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 4)
	{
		return 4;
	}
	return iVar5;
}

int func_309(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;
	int iVar15;

	if (func_310(iParam0, &Var0, iParam1) && func_314(Var0, 644136394, &vVar5, 1))
	{
		if (!func_314(Var0, 1794832507, &vVar8, 0))
		{
			vVar8.x = 9f;
			vVar8.f_1 = 9f;
			vVar8.f_2 = 10f;
		}
		func_314(Var0, -2119193689, &vVar11, 0);
		func_178(Var0, 1419063592, bParam2, 0);
		func_178(Var0, -864073234, &bVar14, 0);
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

int func_310(int iParam0, var uParam1, int iParam2)
{
	if (func_293(iParam0, uParam1))
	{
		uParam1->f_2 = -1283139781;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_311(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
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

int func_312(var uParam0)
{
	switch (uParam0->f_10)
	{
		case -409129282:
		case -19759302:
			return 404851220;
		default:
			break;
	}
	return joaat("none");
}

bool func_313(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_314(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

void func_315(var uParam0, int iParam1)
{
	*uParam0++;
	if (*uParam0 >= iParam1)
	{
		*uParam0 = 0;
	}
}

void func_316(struct<2> Param0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	if (!func_29(Param0, func_513()))
	{
		return;
	}
	iVar0 = func_514(iVar1);
	if (!func_515(iVar0))
	{
		return;
	}
	func_516(iVar0);
	if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (func_517(1) && func_277(iVar0, 1))
		{
			func_518();
		}
		if (func_517(0) && NETWORK::_0x51F33DBC1A41CBFD() & 9 != 0)
		{
			func_519();
		}
	}
}

int func_317(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!func_123(iVar0, 0, 1))
	{
		return 0;
	}
	if (!func_41(Local_361[iVar0 /*52*/], 32) && !func_41(Local_361[iVar0 /*52*/], 64))
	{
		return 0;
	}
	return 1;
}

bool func_318(int iParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 20)
	{
		uVar0 = (uVar0 || (Local_2026.f_45[iVar1 /*6*/])->f_1);
		iVar1++;
	}
	return func_113(uVar0, iParam0);
}

int func_319(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar1 /*4*/])))
		{
		}
		else
		{
			iVar0 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar1 /*4*/]));
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			else if (func_520(iVar0, PLAYER::PLAYER_PED_ID(), 1, 1) > 80f)
			{
			}
			else
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_320(var uParam0, int iParam1)
{
	func_437(&(uParam0->f_1), iParam1);
}

void func_321(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (iVar0 == Local_2026.f_631)
	{
		if (!func_521(iVar0, &fVar1, 1))
		{
			Local_2026.f_631 = 255;
		}
		Local_2026.f_632 = fVar1;
		return;
	}
	if (!func_521(iVar0, &fVar1, 1))
	{
		return;
	}
	if (Local_2026.f_631 != 255 && Local_2026.f_632 < fVar1)
	{
		return;
	}
	Local_2026.f_631 = iVar0;
	Local_2026.f_632 = fVar1;
}

void func_322()
{
	if (func_33(1) && func_523(func_522(&Local_17, &Local_2026), Local_2026.f_10.f_6))
	{
		func_524(Local_2026.f_2);
	}
	if (!func_33(1048576))
	{
		return;
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		func_73();
		func_74();
		func_75();
		return;
	}
	func_525();
	if (func_526(255))
	{
		func_527();
	}
	else
	{
		func_73();
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619) && func_528(VOLUME::_0xF70F00013A62F866(Local_2026.f_619), 30f, 1))
	{
		func_529();
	}
	else
	{
		func_74();
	}
}

void func_323()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (!func_55(&Local_17, 536870912) || func_55(&Local_17, 524288))
	{
		return;
	}
	if (func_33(134217728))
	{
		if (((func_33(1) && func_228(2)) && func_41(Local_361[Local_2026.f_634 /*52*/], 2097152)) && func_210(Local_2026.f_633) > 8000)
		{
			func_103();
			func_320(Local_361[Local_2026.f_634 /*52*/], 64);
			func_320(Local_361[Local_2026.f_634 /*52*/], 32);
			func_214(1);
			func_214(8192);
			func_43(&Local_2026, &Local_361);
		}
		return;
	}
	bVar0 = func_33(1);
	bVar1 = true;
	iVar4 = PLAYER::PLAYER_ID();
	if (Local_2026.f_10 == -409129282)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (((!func_203(iVar2, &Local_17, 4096) || !func_203(iVar2, &Local_17, 128)) || func_203(iVar2, &Local_17, 16)) || func_203(iVar2, &Local_17, 2))
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
				iVar3 = (Local_17.f_257[iVar2 /*5*/])->f_3;
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
					func_274(iVar2, 32);
				}
				else
				{
					func_129(iVar2, 0);
				}
				func_274(iVar2, 16);
			}
			iVar2++;
		}
	}
	else if (Local_2026.f_10 == -19759302)
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (!func_202(iVar2, &Local_17, 67108864) || func_202(iVar2, &Local_17, 32))
			{
			}
			else if (func_272(iVar2, 8388608))
			{
				if (func_272(iVar2, 16777216))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar5 = false;
				iVar3 = (Local_17.f_16[iVar2 /*12*/])->f_7;
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
					func_273(iVar2, 16777216);
				}
				else
				{
					func_129(iVar2, 0);
				}
				func_273(iVar2, 8388608);
			}
			iVar2++;
		}
	}
	if (bVar1)
	{
		func_126(134217728);
		Local_2026.f_633 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

void func_324()
{
	float fVar0;

	if (func_530(&fVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_34), fVar0);
	}
}

void func_325()
{
	int iVar0;
	int iVar1;

	if ((func_33(1) && func_531()) && func_55(&Local_17, 268435456))
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
				func_532(iVar1);
			}
			iVar0++;
		}
	}
	else if ((!func_33(1) && func_55(&Local_17, 268435456)) && func_533(1))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2026.f_618), iVar0))
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
					func_532(iVar1);
				}
			}
			iVar0++;
		}
	}
}

int func_326()
{
	if (func_534(255) && !func_535(255))
	{
		return 0;
	}
	return 1;
}

int func_327()
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
				return 0;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (!func_41(Local_361[iVar2 /*52*/], 16777216))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_328(var uParam0, var uParam1, int iParam2)
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
		return 0;
	}
	if (!func_536())
	{
		return 0;
	}
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1) && !PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1))
	{
		return 0;
	}
	if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, false, 0, false) || !func_237(iVar2))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (func_520(iVar1, PLAYER::PLAYER_PED_ID(), 1, 0) > 30f)
	{
		return 0;
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
		return 0;
	}
	else
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		return 0;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iVar3))
	{
		return 0;
	}
	iVar7 = NETWORK::PED_TO_NET(iVar3);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&uParam0->f_16[iVar0 /*12*/] != iVar7)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			*iParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 401658241:
		case 1566032419:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_330(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_39(Local_361[Local_2026.f_634 /*52*/], 32);
			break;
		case 2:
			func_39(Local_361[Local_2026.f_634 /*52*/], 64);
			func_126(8192);
			func_115(Local_361[Local_2026.f_634 /*52*/], &Local_2026);
			if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				func_538(7, PLAYER::PLAYER_ID(), 0, func_537(0, 8));
			}
			break;
	}
	(Local_361[Local_2026.f_634 /*52*/])->f_48 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_539(Local_2026.f_1);
	func_540(Local_2026.f_1, 1, func_294(), 0);
	func_541(6);
	func_126(1);
	func_43(&Local_2026, &Local_361);
	func_460(-1256206172, 0);
}

void func_331()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	vector3 vVar8;

	if (func_41(Local_361[Local_2026.f_634 /*52*/], 1048576))
	{
		func_542();
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 128))
	{
		return;
	}
	if ((Local_361[Local_2026.f_634 /*52*/])->f_46 == -1)
	{
		func_543(0);
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) || PED::IS_PED_RAGDOLL(iVar0)) || TASK::IS_PED_GETTING_UP(iVar0)) || PED::_0x3BDFCF25B58B0415(iVar0)) || PED::_0x0E99E3BF11BB6367(iVar0)) || PED::IS_PED_ON_MOUNT(iVar0)) || PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		func_543(0);
		return;
	}
	if ((Local_17.f_16[(Local_361[Local_2026.f_634 /*52*/])->f_46 /*12*/])->f_3 != 22)
	{
		func_543(0);
		return;
	}
	if (((((!func_438((Local_361[Local_2026.f_634 /*52*/])->f_46, &iVar1, 1, 0) || PED::IS_PED_BEING_STUNNED(iVar1, 0)) || PED::_0x3BDFCF25B58B0415(iVar1)) || TASK::IS_PED_GETTING_UP(iVar1)) || PED::_0x0E99E3BF11BB6367(iVar1)) || PED::IS_PED_RAGDOLL(iVar1))
	{
		func_543(0);
		return;
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 256))
	{
		return;
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 256) && !func_41(Local_361[Local_2026.f_634 /*52*/], 512))
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 256);
		return;
	}
	if (func_202((Local_361[Local_2026.f_634 /*52*/])->f_46, &Local_17, 2))
	{
		func_543(0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[(Local_361[Local_2026.f_634 /*52*/])->f_46 /*12*/])->f_5))
	{
		return;
	}
	iVar2 = NETWORK::_NET_TO_ANIM_SCENE((Local_17.f_16[(Local_361[Local_2026.f_634 /*52*/])->f_46 /*12*/])->f_5);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar2))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iVar2, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_544(), false)))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_545(), false)) && ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_545(), false) != iVar0)
	{
		func_543(0);
		return;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(iVar2, func_545()) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar2, 0)) || ANIMSCENE::_0xF94692EB9DC15D74(iVar2, 0))
	{
		func_543(1);
		return;
	}
	if (Local_2026.f_636 == -1)
	{
		Local_2026.f_636 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	Var3 = { func_547(iVar2, func_545(), func_546(0)) };
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) && !func_548(iVar0, -828834893))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
		func_543(0);
		return;
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 1048576))
	{
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &bVar7, false, 0, false) && func_237(bVar7))
	{
		WEAPON::_0x94A3C1B804D291EC(iVar0, 0, 0, 0, 0);
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &bVar7, false, 1, false) && func_237(bVar7))
	{
		WEAPON::_0x94A3C1B804D291EC(iVar0, 1, 1, 1, 0);
		return;
	}
	if (Local_2026.f_636 != -1 && NETWORK::GET_TIME_DIFFERENCE(Local_2026.f_636, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 6000)
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 1048576);
		return;
	}
	vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_544(), false), 0f, 0.8f, 0f) };
	if (!func_548(iVar0, 713668775))
	{
		if (func_549(iVar0, vVar8, 0) > 0.2f)
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar8, 1f, 20000, 0.25f, 512, Var3.f_3);
		}
		else
		{
			func_39(Local_361[Local_2026.f_634 /*52*/], 1048576);
		}
	}
	else if (func_549(iVar0, vVar8, 0) < 0.2f)
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 1048576);
	}
}

bool func_332(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

int func_333(int iParam0)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			return func_550(iParam0);
		case -19759302:
			return func_551(iParam0);
		default:
			break;
	}
	return 0;
}

void func_334()
{
	Global_1051388->f_3215 = MISC::GET_FRAME_COUNT();
}

int func_335(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_41(Local_361[Local_2026.f_634 /*52*/], 32);
	bVar3 = func_41(Local_361[Local_2026.f_634 /*52*/], 64);
	if (!bVar2 && !bVar3)
	{
		return 0;
	}
	switch (Local_2026.f_10)
	{
		case -409129282:
			if (!func_552())
			{
				return 0;
			}
			*iParam0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				return 0;
			}
			if (func_55(&Local_17, 524288))
			{
				return 1;
			}
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 8388608))
			{
				return 1;
			}
			if (!NETWORK::_0xB07D3185E11657A5(*iParam0))
			{
				return 0;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*iParam0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (&Local_17.f_257[iVar0 /*5*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar0 /*5*/])))
				{
				}
				else
				{
					if (!func_203(iVar0, &Local_17, 256) && !func_203(iVar0, &Local_17, 512))
					{
						return 0;
					}
					return 1;
				}
				iVar0++;
			}
			break;
		case -19759302:
			if (!func_553(1))
			{
				return 0;
			}
			*iParam0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				return 0;
			}
			if (func_55(&Local_17, 524288))
			{
				return 1;
			}
			if (!NETWORK::_0xB07D3185E11657A5(*iParam0))
			{
				return 0;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*iParam0);
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (&Local_17.f_16[iVar0 /*12*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
				{
				}
				else
				{
					if (!func_202(iVar0, &Local_17, 65536) && !func_202(iVar0, &Local_17, 131072))
					{
						return 0;
					}
					return 1;
				}
				iVar0++;
			}
			break;
		default:
			return 0;
	}
	return 0;
}

void func_336(int iParam0)
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
	if (func_554(iVar0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		PED::_0xED00D72F81CF7278(iParam0, 0, 0);
		return;
	}
	if (func_555(iVar0, -208384378))
	{
		return;
	}
	TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar0, iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1073741824, 1);
}

int func_337()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_33(1))
	{
		return 0;
	}
	if (func_55(&Local_17, 524288))
	{
		return 0;
	}
	if ((func_258(1, 255) && func_258(2, 255)) && !func_258(512, 255))
	{
		return 0;
	}
	if (func_33(8192))
	{
		iVar0 = Local_2026.f_626;
	}
	else
	{
		iVar0 = Local_2026.f_625;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || !func_556(Global_34, iVar0, 1, 0))
	{
		return 0;
	}
	if (Local_2026.f_10 == -19759302)
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar2 /*12*/])))
			{
			}
			else if (func_556(NETWORK::NET_TO_PED(&(Local_17.f_16[iVar2 /*12*/])), iVar0, 1, 0))
			{
				iVar1 = 1;
			}
			else
			{
				iVar2++;
			}
		}
	}
	else if (Local_2026.f_10 == -409129282)
	{
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (!func_203(iVar3, &Local_17, 128))
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar3 /*5*/])))
			{
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar3 /*5*/])), iVar0, false, 0))
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

void func_338(int iParam0, int iParam1)
{
	func_122(Local_2026.f_29[iParam0 /*5*/], iParam1);
}

bool func_339(int iParam0, var uParam1, int iParam2)
{
	return func_113((uParam1->f_3[iParam0 /*4*/])->f_1, iParam2);
}

char* func_340(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_341(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_557(iParam0, uParam1);
	func_558(iParam0);
	if ((iVar0 == -1088690539 || iVar0 == 0) || func_398(iParam0, 0))
	{
		func_215(iParam0);
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	func_559(iParam0, iVar1);
	func_560(iParam0, iVar1);
	func_561(iParam0, iVar1);
	func_562(iParam0, iVar1);
	func_563(iParam0, iVar1, uParam1, uParam2, fParam3);
	func_564(iParam0, iVar1);
	func_565(iParam0, iVar1);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_566(iParam0, uParam1)))
	{
		return;
	}
	func_567(iParam0, uParam1, uParam2, fParam3);
	func_568(iParam0, iVar1);
	switch (iVar0)
	{
		case joaat("driver"):
			func_569(iParam0, uParam1, uParam2, fParam3);
			break;
		case -193064196:
			func_570(iParam0, uParam1, uParam2, fParam3);
			break;
		case -522830230:
			func_571(iParam0, uParam1, uParam2, fParam3);
			break;
		case 1095997463:
			func_572(iParam0, uParam1, uParam2, fParam3);
			break;
		case -306837416:
			func_573(iParam0, uParam1, uParam2, fParam3);
			break;
		case 824585797:
			func_574(iParam0, uParam1, uParam2, fParam3);
			break;
		case 1566032419:
			func_575(iParam0, uParam1, uParam2, fParam3);
			break;
		case 401658241:
			func_576(iParam0, uParam1, uParam2, fParam3);
			break;
		case -2133983324:
			func_577(iParam0, uParam1, uParam2, fParam3);
			break;
	}
}

void func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case -306837416:
		case -193064196:
			break;
		default:
			return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		iVar0 = PED::GET_MOUNT(iVar0);
	}
	if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar0))
	{
		return;
	}
	if (!func_578(iParam0, &iVar1))
	{
		return;
	}
	if (func_579(iVar1))
	{
		return;
	}
	vVar2 = { func_580(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_HEADING(iVar1), (Local_17.f_16[iParam0 /*12*/])->f_8) };
	if (func_549(iVar0, vVar2, 1) < 15f)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iVar0, vVar2, ENTITY::GET_ENTITY_HEADING(iVar1), 0, 1);
	}
}

void func_343(int iParam0)
{
	int iVar0;

	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case 1095997463:
			if (((Local_17.f_16[iParam0 /*12*/])->f_3 == 17 || (Local_17.f_16[iParam0 /*12*/])->f_3 == 25) || (Local_17.f_16[iParam0 /*12*/])->f_3 == 26)
			{
				return;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iParam0 /*12*/])))
			{
				if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 19)
				{
					func_273(iParam0, 524288);
				}
				return;
			}
			if (!func_438(iParam0, &iVar0, 1, 0))
			{
				return;
			}
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 19)
			{
				if (!func_272(iParam0, 262144) || func_272(iParam0, 524288))
				{
					PED::_0x89F5E7ADECCCB49C(iVar0, func_581());
					func_273(iParam0, 262144);
				}
			}
			else if (func_272(iParam0, 262144) || func_272(iParam0, 524288))
			{
				PED::_0x58F7DB5BD8FA2288(iVar0);
				func_439(iParam0, 262144);
			}
			func_439(iParam0, 524288);
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 21 && func_202(iParam0, &Local_17, 4194304))
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

void func_344(int iParam0)
{
	int iVar0;

	if ((Local_17.f_16[iParam0 /*12*/])->f_2 != 1095997463)
	{
		return;
	}
	if ((func_202(iParam0, &Local_17, 32) || func_202(iParam0, &Local_17, 65536)) || func_202(iParam0, &Local_17, 131072))
	{
		if (!func_438(iParam0, &iVar0, 1, 0))
		{
			return;
		}
		func_582(iVar0);
		return;
	}
	if (!func_272(iParam0, 8388608))
	{
		return;
	}
	if (!func_438(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	if (func_272(iParam0, 16777216))
	{
		NETWORK::_0xEE5AE9956743BA20(iVar0, false);
		return;
	}
	NETWORK::_0xEE5AE9956743BA20(iVar0, true);
	func_582(iVar0);
}

void func_345(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (!func_203(iParam0, &Local_17, 128))
	{
		return;
	}
	func_583(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iParam0 /*5*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iParam0 /*5*/]));
	if (func_80(iParam0, 16))
	{
		bVar1 = !func_80(iParam0, 32);
		NETWORK::_0xEE5AE9956743BA20(iVar0, bVar1);
	}
	if ((func_203(iParam0, &Local_17, 256) || func_203(iParam0, &Local_17, 512)) || func_203(iParam0, &Local_17, 2))
	{
		bVar2 = true;
	}
	if (func_584(iParam0, bVar2))
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
	if (func_203(iParam0, &Local_17, 64))
	{
		GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, 0);
	}
	else
	{
		GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, 1);
	}
	if (func_203(iParam0, &Local_17, 16))
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
		if ((func_55(&Local_17, 524288) && iParam0 == Local_17.f_328) && (func_55(&Local_17, 16777216) || func_55(&Local_17, 33554432)))
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

int func_346()
{
	if (func_55(&Local_17, 524288) || func_55(&Local_17, 536870912))
	{
		return 0;
	}
	if (func_403(&Local_17) <= 2)
	{
		return 0;
	}
	if (!func_55(&Local_17, 268435456))
	{
		return 0;
	}
	return 1;
}

void func_347(float fParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	switch (fParam0->f_10)
	{
		case -409129282:
			if (((iParam3 >= 4 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_257[iParam3 /*5*/]))) || func_203(iParam3, uParam2, 2)) || func_203(iParam3, uParam2, 16))
			{
				return;
			}
			fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(&(uParam2->f_257[iParam3 /*5*/]));
			break;
		case -19759302:
			if (iParam3 >= fParam0->f_10.f_8)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (!func_202(iVar0, uParam2, 1024))
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
					if (((iVar0 >= 20 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_16[iVar0 /*12*/]))) || func_202(iVar0, uParam2, 32)) || (uParam2->f_16[iVar0 /*12*/])->f_2 == -1088690539)
					{
						fParam0->f_561.f_2[iParam3] = 0;
						return;
					}
					fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(&(uParam2->f_16[iVar0 /*12*/]));
				}
			}
		}

int func_348(var uParam0, float fParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), &Global_1275573))
	{
		return 0;
	}
	if (fParam1 > 800f)
	{
		return 1;
	}
	return 0;
}

bool func_349(int iParam0, bool bParam1, bool bParam2)
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

int func_350(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	struct<2> Var1;
	float fVar3;
	int iVar4;
	bool bVar5;

	if (uParam0->f_54 == joaat("none"))
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), &Global_1275573))
	{
		return 0;
	}
	bVar0 = false;
	Var1 = -1;
	Var1.f_1 = -1;
	fVar3 = 100f;
	if ((func_28(Var1) && !func_29(Var1, uParam0->f_52)) && func_585(Var1))
	{
		return 0;
	}
	switch (uParam0->f_54)
	{
		case joaat("attack"):
		case 404851220:
			if (!bParam3)
			{
				bVar0 = true;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_2[uParam0->f_55])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_2[uParam0->f_55]))) && PED::_0x3D9F958834AB9C30(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_2[uParam0->f_55]))) == Global_34)
			{
				return 1;
			}
			if (func_586(uParam0, bVar0, 1, 0, fVar3, uParam2) && func_587(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
			{
				return 1;
			}
			break;
		case joaat("defend"):
			bVar0 = true;
			if (func_586(uParam0, bVar0, 0, 1, fVar3, uParam2) && func_587(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
			{
				return 1;
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
				return 1;
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
				if (bVar5 && func_587(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
				{
					return 1;
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
	return 0;
}

int func_351(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	switch (fParam0->f_10)
	{
		case -409129282:
			if (!PED::_IS_PED_CARRYING(iVar0))
			{
				return 0;
			}
			iVar2 = 0;
			while (iVar2 < fParam0->f_10.f_14)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_257[iVar2 /*5*/])))
				{
				}
				else if (func_203(iVar2, uParam2, 1))
				{
				}
				else if (func_203(iVar2, uParam2, 2))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(&(uParam2->f_257[iVar2 /*5*/])), iVar0))
				{
				}
				else
				{
					return 1;
				}
				iVar2++;
			}
			break;
		case -19759302:
			if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 262144) && Local_17.f_321 > 1)
			{
				return 1;
			}
			else if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 524288))
			{
				return 1;
			}
			if (!PED::_IS_PED_CARRYING(iVar0))
			{
				return 0;
			}
			iVar1 = 0;
			while (iVar1 < fParam0->f_10.f_8)
			{
				if ((uParam2->f_16[iVar1 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (func_202(iVar1, uParam2, 32))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_16[iVar1 /*12*/])))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(&(uParam2->f_16[iVar1 /*12*/])), iVar0))
				{
				}
				else
				{
					return 1;
				}
				iVar1++;
			}
			break;
	}
	return 0;
}

int func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (Local_2026.f_10)
	{
		case -19759302:
			if (!func_438(iParam0, &iVar0, 0, 1))
			{
				return 0;
			}
			*iParam1 = func_268(iVar0);
			return 1;
		case -409129282:
			if (!func_81(iParam0, &iVar1))
			{
				return 0;
			}
			*iParam1 = func_268(iVar1);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_353(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return 0;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_588(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_589(&(iParam3->f_1), iParam5, vParam0);
				if (!func_382(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_590(iParam3->f_6));
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
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return 1;
					}
					break;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_354(vector3 vParam0, bool bParam3)
{
	float fVar0;
	int iVar1;

	fVar0 = BUILTIN::VDIST(Global_35, vParam0);
	if (fVar0 > 200f)
	{
		return 1;
	}
	if (fVar0 < 40f)
	{
		*bParam3 = 1;
		return 1;
	}
	if (!CAM::IS_SPHERE_VISIBLE(vParam0, 4f))
	{
		return 1;
	}
	if (!func_234(Local_2026.f_548))
	{
		Local_2026.f_548 = GRAPHICS::CREATE_TRACKED_POINT();
		GRAPHICS::SET_TRACKED_POINT_INFO(Local_2026.f_548, vParam0 + Vector(0.5f, 0f, 0f), 3f);
		return 0;
	}
	iVar1 = GRAPHICS::_0xDFE332A5DA6FE7C9(Local_2026.f_548);
	if (iVar1 == -1)
	{
		return 0;
	}
	*bParam3 = GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_2026.f_548);
	return 1;
}

int func_355(var uParam0, var uParam1)
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
		return 0;
	}
	bVar0 = func_41(Local_361[Local_2026.f_634 /*52*/], 64);
	fVar2 = 250f;
	fVar4 = 250f;
	fVar6 = 250f;
	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if ((Local_17.f_16[iVar8 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar8 /*12*/])))
				{
				}
				else
				{
					iVar13 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar8 /*12*/]));
					fVar1 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar13, false, false));
					iVar10 = func_268(iVar13);
					bVar11 = func_202(iVar8, &Local_17, 8);
					bVar12 = func_202(iVar8, &Local_17, 16);
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
		case -409129282:
			iVar9 = 0;
			while (iVar9 < 4)
			{
				if (func_203(iVar9, &Local_17, 2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar9 /*5*/])))
				{
				}
				else
				{
					iVar14 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar9 /*5*/]));
					fVar1 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar14, false, false));
					iVar10 = func_268(iVar14);
					bVar11 = func_203(iVar9, &Local_17, 1);
					bVar12 = func_203(iVar9, &Local_17, 32);
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
			return 0;
	}
	if (fVar2 < 250f)
	{
		*uParam0 = iVar3;
		return 1;
	}
	if (fVar4 < 250f)
	{
		*uParam0 = iVar5;
		*uParam1 = 1;
		return 1;
	}
	if (fVar6 < 250f)
	{
		*uParam0 = iVar7;
		return 1;
	}
	return 0;
}

void func_356(bool bParam0)
{
	if (bParam0)
	{
		if (func_33(4))
		{
			return;
		}
		if (func_357(255))
		{
			return;
		}
		func_233(1);
		func_126(4);
	}
	else
	{
		if (!func_33(4))
		{
			return;
		}
		func_233(0);
		func_214(4);
	}
}

bool func_357(int iParam0)
{
	return func_591(48, iParam0);
}

bool func_358(int iParam0)
{
	return func_591(47, iParam0);
}

void func_359(var uParam0, var uParam1, int iParam2, bool bParam3)
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
	else if (func_41(Local_361[Local_2026.f_634 /*52*/], 32))
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
	if (INTERIOR::_IS_COLLISION_MARKED_OUTSIDE(vVar3))
	{
		func_391(&vVar3, 200f);
	}
	else
	{
		func_391(&vVar3, 1088421888 /* Float: 7f */);
	}
	uParam0->f_17.f_6 = { vVar3 };
	uParam0->f_17 = { fVar1, fVar1, fVar2 };
	uParam0->f_17.f_9 = -432403087;
	uParam0->f_6.f_6 = { vVar3 };
	uParam0->f_6 = { fVar0, fVar0, fVar2 };
	uParam0->f_6.f_9 = -432403087;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = 3;
	uParam1->f_5 = 1;
	*uParam1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
	uParam1->f_6 = { vVar3 + func_592(*uParam1) * Vector(10f, 10f, 10f) };
	func_360(*uParam0, *uParam1, 1, 1, 1);
}

int func_360(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_358(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_593(&(Global_1099294->f_516));
		Global_1099294->f_516 = { Param0 };
		func_594(&(Global_1099294->f_555));
		Global_1099294->f_555 = { Param30 };
		Global_1099294->f_586 = iParam39;
		Global_1099294->f_587 = iParam40;
		Global_1099294->f_588 = iParam41;
		func_595(Global_1099294->f_516, 36);
		func_596(Global_1099294->f_555, 36);
		func_447(47);
		return 1;
	}
	return 0;
}

int func_361()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return Local_2026.f_174;
		case -409129282:
			return Local_2026.f_174.f_4;
		default:
			break;
	}
	return 0;
}

int func_362()
{
	if (func_258(1, 255))
	{
		return 0;
	}
	if (func_55(&Local_17, 64))
	{
		return 0;
	}
	if (func_33(134217728))
	{
		if (func_210(Local_2026.f_633) > 2000)
		{
			return 0;
		}
		return 1;
	}
	if (func_66(&Local_17, &Local_2026))
	{
		return 0;
	}
	if (func_210(Local_17.f_318) > 2000)
	{
		return 0;
	}
	return 1;
}

int func_363(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	return (Local_361[iParam0 /*52*/])->f_41;
}

void func_364(bool bParam0)
{
	LAW::_0x55F37F5F3F2475E1();
	if (bParam0)
	{
		LAW::_0xC76F252371150D9A(PLAYER::PLAYER_ID());
	}
	func_126(33554432);
}

int func_365(bool bParam0, bool bParam1, bool bParam2)
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

void func_366(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (func_368(iParam0))
	{
		return;
	}
	if (func_598(func_597(iParam0), 1, bParam1))
	{
		func_599(iParam0);
	}
}

int func_367(bool bParam0)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			return func_600(bParam0);
		case -19759302:
			return func_601(bParam0);
		default:
			break;
	}
	return 0;
}

bool func_368(int iParam0)
{
	return func_113(Local_2026.f_9, iParam0);
}

void func_369()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_363(255) == 3)
	{
		return;
	}
	if (Local_17.f_299 == 0)
	{
		if (func_602() == 3)
		{
			func_603(3);
		}
		return;
	}
	iVar0 = Local_17.f_299;
	iVar1 = func_363(255);
	if (func_258(256, 255) && func_258(1, 255))
	{
		func_604(1, 0, 1);
		func_86(0);
		func_87(1);
		func_84(1);
	}
	if ((func_258(1, 255) && !func_258(512, 255)) && iVar1 != 3)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (func_605(8))
	{
		func_105(iVar0);
		func_603(3);
		return;
	}
	switch (iVar1)
	{
		case 0:
			func_606(iVar0);
			func_607(iVar0);
			if (func_602() == iVar1)
			{
				return;
			}
			if (Local_2026.f_537 == 0)
			{
				func_603(3);
				return;
			}
			func_603(1);
			break;
		case 1:
			if (func_258(256, 255) && func_258(1, 255))
			{
				func_608();
			}
			if (!func_258(32, 255))
			{
				if (func_609(iVar0, Local_17.f_299.f_2))
				{
					func_261();
				}
				func_262(32);
			}
			func_610(iVar0, Local_17.f_299.f_2);
			if (func_602() == iVar1)
			{
				return;
			}
			if (func_258(1, 255))
			{
				func_611();
				func_612(iVar0, Local_17.f_299.f_2);
				func_613(iVar0, Local_17.f_299.f_2);
				if (!func_258(256, 255))
				{
					AUDIO::_0x6339C1EA3979B5F7("default", "RDRO_Scripted_Cutscene_Scenes");
					func_614();
				}
			}
			func_262(256);
			func_615();
			func_603(2);
			break;
		case 2:
			if (!func_258(64, 255))
			{
				iVar2 = func_210(Local_17.f_299.f_3);
				iVar3 = func_616(iVar0, Local_17.f_299.f_2);
				if (func_258(1, 255))
				{
					func_617(iVar0, Local_17.f_299.f_2, iVar3, iVar2);
				}
				if (iVar2 < iVar3)
				{
					return;
				}
			}
			else if (func_258(1, 255))
			{
				func_608();
			}
			func_262(64);
			func_618(iVar0, Local_17.f_299.f_2);
			if (func_602() == iVar1 && !func_605(4))
			{
				return;
			}
			if (Local_17.f_299.f_2 < Local_2026.f_537 && func_602() != 3)
			{
				func_495(32);
				func_495(64);
				func_615();
				func_603(1);
				return;
			}
			func_105(iVar0);
			func_603(3);
			break;
	}
}

int func_370()
{
	struct<2> Var0;

	if (func_32())
	{
		return 1;
	}
	Var0 = { func_619() };
	if (!func_28(Var0))
	{
		return 0;
	}
	if (!func_29(Local_2026.f_2, Var0))
	{
		return 1;
	}
	return 0;
}

void func_371(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_620(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_372(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_621(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_373(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_622(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_374(var uParam0, var uParam1, float fParam2)
{
	if (func_623(uParam0, uParam1, fParam2))
	{
		func_624(uParam1, fParam2);
		func_132(131072);
	}
	else
	{
		func_244(&(fParam2->f_202.f_51));
		func_229(131072);
	}
	if (func_228(131072))
	{
		if (func_228(262144))
		{
			func_625(0);
			func_229(262144);
		}
	}
	else if (!func_228(262144))
	{
		func_625(1);
		func_132(262144);
	}
}

void func_375()
{
	int iVar0;

	iVar0 = Local_2026.f_174.f_1;
	if (func_626(iVar0))
	{
		func_451(iVar0, 1);
	}
	else
	{
		func_451(iVar0, 0);
	}
	if (func_627(iVar0))
	{
		func_452(iVar0, 1);
	}
	else
	{
		func_452(iVar0, 0);
	}
}

void func_376()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_628(&iVar0, &iVar1);
	func_629(iVar2, iVar0, iVar1);
}

void func_377(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_531())
	{
		func_246(fParam2);
		return;
	}
	iVar0 = func_630(uParam0, uParam1, fParam2);
	switch (iVar0)
	{
		case 0:
			func_246(fParam2);
			return;
		case 8:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 9;
			}
			break;
		case 1:
			if (func_632())
			{
				iVar0 = 2;
			}
			break;
		case 3:
			if (func_632())
			{
				iVar0 = 4;
			}
			break;
		case 10:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 11;
			}
			break;
		case 12:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 13;
			}
			break;
		case 18:
			if (!func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 19;
			}
			break;
		case 17:
			if (!func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 16;
			}
			break;
		case 21:
			if (!func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 20;
			}
			break;
		case 24:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 25;
			}
			break;
		case 27:
			switch (func_200(&Local_2026))
			{
				case -19759302:
					func_633(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
				case -409129282:
					func_634(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
			}
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 26;
			}
			else if (bVar2)
			{
				iVar0 = 28;
			}
			if (iVar0 != 28)
			{
				bVar3 = func_635(iVar0, bVar1, iVar4, iVar5);
			}
			break;
		case 22:
			if (func_631(uParam0, fParam2, 1, 1))
			{
				iVar0 = 23;
			}
			break;
		case 14:
			if (func_631(uParam0, fParam2, 1, 1))
			{
				iVar0 = 15;
			}
			break;
		case 31:
			if (func_631(uParam0, fParam2, 1, 1))
			{
				iVar0 = 30;
			}
			break;
	}
	func_636(iVar0, fParam2, bVar3);
}

void func_378()
{
	if (func_637())
	{
		func_638();
		func_132(4);
		return;
	}
	if (func_639())
	{
		func_640();
		func_132(2);
	}
}

void func_379(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_228(65536))
	{
		iVar1 = func_641(fParam0);
		iVar2 = func_642(iVar1);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			func_643(&(Local_2026.f_202.f_77), iVar2, iVar0);
			func_644(&(Local_2026.f_202.f_77), iVar1, iVar0);
			iVar0++;
		}
		func_132(65536);
	}
}

void func_380(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if ((func_645(fParam2->f_202.f_61) && func_646(fParam2->f_202.f_61, 1)) && func_647(fParam2->f_202.f_61, 1))
	{
		iVar0 = func_648(uParam0, fParam2);
		if (iVar0 != -1)
		{
			((*uParam1)[Local_2026.f_634 /*52*/])->f_46 = iVar0;
			func_39((*uParam1)[Local_2026.f_634 /*52*/], 128);
		}
	}
	iVar1 = func_522(uParam0, fParam2);
	if (iVar1 < 0)
	{
		iVar1 = 0;
	}
	if (func_649(&bVar2))
	{
		if (bVar2)
		{
			func_650(uParam0, uParam1, fParam2);
		}
		func_651(&(Local_2026.f_202.f_62), &(fParam2->f_202.f_77), iVar1, 0, 30000, 0, 404851220, 0, 0, 0, 0);
	}
	else
	{
		func_248(&(fParam2->f_202.f_77), 0, 0);
		func_249(&(Local_2026.f_202.f_62), 1);
	}
	if (func_652(&iVar3))
	{
		if (func_645(fParam2->f_202.f_61))
		{
			func_653(fParam2->f_202.f_61, 1, 1, 1);
			func_654(fParam2->f_202.f_61, 1, 1);
			func_655(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
		else
		{
			fParam2->f_202.f_61 = func_657(func_656(), joaat("INPUT_INTERACT_LOCKON_ROB"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_655(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
	}
	else if (func_645(fParam2->f_202.f_61))
	{
		func_653(fParam2->f_202.f_61, 0, 1, 1);
		func_654(fParam2->f_202.f_61, 0, 1);
	}
	if (!func_33(1))
	{
		return;
	}
	if (func_658())
	{
		return;
	}
	if (func_228(512))
	{
		func_660(func_659(), 0, 0);
		func_229(512);
	}
	if (func_228(1024))
	{
		func_660(func_661(), 0, 0);
		func_229(1024);
	}
	if (func_228(2048))
	{
		func_660(func_662(), 0, 0);
		func_229(2048);
	}
	if (func_228(8192))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2026.f_202.f_52))
		{
			func_660(func_663(), 0, 0);
		}
		Local_2026.f_202.f_52 = 255;
		func_229(8192);
	}
	if (func_228(4096))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2026.f_202.f_52) && Local_2026.f_202.f_52 != PLAYER::PLAYER_ID())
		{
			func_660(func_664(), 0, 0);
		}
		Local_2026.f_202.f_52 = 255;
		func_229(4096);
	}
	if (!func_228(32768) && func_346())
	{
		func_660(func_665(), func_666(), func_667());
		func_132(32768);
	}
	if (func_228(16384))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2026.f_202.f_52))
		{
			func_660(func_668(), 0, 0);
		}
		Local_2026.f_202.f_52 = 255;
		func_229(16384);
	}
}

Vector3 func_381(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_383(iParam0, &vVar3, uParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &vVar3);
	return vVar0;
}

int func_382(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_110(iParam0, uParam1))
	{
		return 0;
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
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

var func_384(int iParam0)
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
		iVar53 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar52 /*7*/]);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar53))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_385(var uParam0, var uParam1)
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

void func_386(var uParam0)
{
	if (&Global_1051202->f_16[0] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 31, 26, &(Global_1051202->f_16[0]));
}

int func_387(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_178(Var0, 1323038251, &iVar5, 0);
	}
	return iVar5;
}

bool func_388(int iParam0, var uParam1)
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

int func_389(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	bool bVar15;
	int iVar16;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_278[iParam0 /*2*/])))
	{
		return 1;
	}
	if (!func_176(&Var0, iParam0))
	{
		return 1;
	}
	func_178(Var0, 873236619, &bVar15, 0);
	func_314(Var0, 644136394, &vVar8, 0);
	func_314(Var0, -2119193689, &vVar11, 0);
	func_311(Var0, 1471513692, &fVar14, 0);
	func_177(Var0, 1339124518, &iVar5, 0);
	if (bVar15)
	{
		iVar7 = iVar5;
	}
	else
	{
		iVar6 = iVar5;
	}
	if (!bVar15)
	{
		if (!STREAMING::IS_MODEL_VALID(iVar6) || iVar6 == 0)
		{
			return 1;
		}
	}
	if (bVar15)
	{
		iVar16 = PROPSET::_CREATE_PROPSET_2(iVar7, vVar8, func_669(iParam0), fVar14, 1200f, true, true);
		if (!PROPSET::_DOES_PROPSET_EXIST(iVar16))
		{
			return 1;
		}
		Local_17.f_278[iParam0 /*2*/] = NETWORK::_0x74F99EF7EF503398(iVar16);
		func_670(iParam0, 1);
	}
	else
	{
		if (!func_671(Local_17.f_278[iParam0 /*2*/], iVar6, vVar8, 1, 0))
		{
			return 0;
		}
		if (fVar14 == 0f && !func_382(vVar11))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(&(Local_17.f_278[iParam0 /*2*/])), vVar11, 2, false);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(&(Local_17.f_278[iParam0 /*2*/])), fVar14);
		}
	}
	return 1;
}

float func_390(int iParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_173(iParam0, &Var0, iParam1))
	{
		func_311(Var0, 1922377121, &fVar5, 0);
	}
	return fVar5;
}

int func_391(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

int func_392(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!func_172(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (func_672(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(1054492269, vParam2, 1, 0, 1, 1));
	}
	else if (func_673(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(-950361972, vParam2, 1, 0, 1, 1));
	}
	else if (bParam8 != 0 && VEHICLE::_0xB9D5BDDA88E1BB66(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_DRAFT_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam8, bParam9));
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
		return 1;
	}
	return 0;
}

void func_393(int iParam0, var uParam1, int iParam2)
{
	func_122(&((uParam1->f_3[iParam0 /*4*/])->f_1), iParam2);
}

int func_394(int iParam0, var uParam1, var uParam2)
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

	iVar0 = &uParam2->f_45[iParam0 /*6*/];
	iVar1 = func_179(uParam2, iParam0);
	vVar2 = { (uParam2->f_45[iParam0 /*6*/])->f_2 };
	fVar5 = func_674(&Local_2026, iParam0);
	iVar6 = func_675(&Local_2026, iParam0);
	iVar7 = (uParam2->f_45[iParam0 /*6*/])->f_5;
	if (func_676())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
		{
			iVar8 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
			PED::DELETE_PED(&iVar8);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_1))
		{
			iVar8 = NETWORK::NET_TO_PED((Local_17.f_16[iParam0 /*12*/])->f_1);
			PED::DELETE_PED(&iVar8);
		}
		return 1;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar1 = func_180(iVar0);
	}
	if (func_202(iParam0, &Local_17, 16777216))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iVar7 /*4*/])))
	{
		return 1;
	}
	iVar9 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iVar7 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar9))
	{
		return 1;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return 1;
	}
	if ((!func_272(iParam0, 1) && !func_272(iParam0, 65536)) && func_677(&(uParam2->f_45[iParam0 /*6*/])))
	{
		if (func_382(vVar2))
		{
			return 1;
		}
		fVar5 = (fVar5 + ENTITY::GET_ENTITY_HEADING(iVar9));
		vVar2 = { func_580(ENTITY::GET_ENTITY_COORDS(iVar9, false, false), fVar5, vVar2) };
		func_391(&vVar2, 1088421888 /* Float: 7f */);
	}
	if (func_272(iParam0, 2) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		if (!func_678(iParam0, &iVar10))
		{
			iVar10 = func_181(iVar0);
		}
		if (iVar10 == 0)
		{
			return 1;
		}
		func_679(&((uParam1->f_16[iParam0 /*12*/])->f_1), iVar10, vVar2, fVar5, 1, 0, 1, 1, 1);
		return 0;
	}
	func_680(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		if (func_272(iParam0, 2))
		{
			if (!func_681(uParam1->f_16[iParam0 /*12*/], (uParam1->f_16[iParam0 /*12*/])->f_1, iVar1, -1, 1, 1, 1, 0))
			{
				return 0;
			}
		}
		else if (func_272(iParam0, 1))
		{
			if (!func_682(uParam1->f_16[iParam0 /*12*/], &(uParam1->f_3[iVar7 /*4*/]), iVar1, iVar6, 1, 1, 1))
			{
				return 0;
			}
		}
		else if (!func_679(uParam1->f_16[iParam0 /*12*/], iVar1, vVar2, fVar5, 1, 0, 1, 1, 1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		NETWORK::_0x7182EDDA1EE7DB5A((uParam1->f_16[iParam0 /*12*/])->f_1);
	}
	NETWORK::_0x7182EDDA1EE7DB5A(&(uParam1->f_16[iParam0 /*12*/]));
	if (!func_683(iParam0))
	{
		return 0;
	}
	if (func_272(iParam0, 2) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED((uParam1->f_16[iParam0 /*12*/])->f_1), 1);
	}
	else if (!func_272(iParam0, 1) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), 1);
	}
	if ((func_272(iParam0, 4) && uParam1->f_322 < 4) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_257[uParam1->f_322 /*5*/])))
	{
		iVar11 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar11) && !NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar11))
		{
			return 0;
		}
		if (!func_671(uParam1->f_257[uParam1->f_322 /*5*/], func_184(), ENTITY::GET_ENTITY_COORDS(iVar11, true, false), 1, 0))
		{
			return 0;
		}
		iVar12 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[uParam1->f_322 /*5*/]));
		TASK::TASK_CARRIABLE(iVar12, -2141086268, iVar11, 0, 0);
		MISC::_0x7FA58CED69405F9A(iVar12, 3);
		ENTITY::_0x18FF3110CF47115D(iVar12, 12, 1);
		ENTITY::_0x18FF3110CF47115D(iVar12, 22, 1);
		ENTITY::_0x18FF3110CF47115D(iVar12, 21, 1);
		func_418(uParam1->f_322, uParam1, 8);
		(Local_17.f_257[uParam1->f_322 /*5*/])->f_2 = iVar7;
		func_418(uParam1->f_322, uParam1, 128);
		func_418(uParam1->f_322, uParam1, 64);
		uParam1->f_322++;
	}
	if (iVar0 == 1095997463)
	{
		func_275(iParam0, uParam1, 1024);
	}
	if (func_272(iParam0, 8))
	{
		func_275(iParam0, uParam1, 2048);
	}
	func_275(iParam0, &Local_17, 16777216);
	return 1;
}

void func_395()
{
	Local_2026.f_637 = 0;
}

int func_396(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	bool bVar14;

	if (bParam3 && !func_684(iParam0, uParam1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	bVar1 = (Local_17.f_16[iParam0 /*12*/])->f_2 != 401658241;
	if (bVar1)
	{
		if (func_685(iParam0, &uVar2))
		{
			PED::_0x89F5E7ADECCCB49C(iVar0, func_686(&uVar2));
		}
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 == 1095997463)
	{
		fVar10 = func_687(&Local_2026, iParam0);
		fVar11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar10 != 0f && fVar11 <= func_429(fVar10, 0f, 1f))
		{
			func_275(iParam0, uParam1, 256);
		}
	}
	fVar12 = func_688(&Local_2026, iParam0);
	if (fVar12 > 0f)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, BUILTIN::ROUND(fVar12));
		func_689(iVar0, 1f, 0);
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_2 == 401658241 && func_690(&iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else if (bVar1 && func_691(&Local_2026, iParam0, &iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else
	{
		PED::SET_PED_ACCURACY(iVar0, 20);
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 != 1095997463)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
	}
	PED::SET_PED_COMBAT_RANGE(iVar0, 3);
	PED::SET_PED_ID_RANGE(iVar0, 160f);
	PED::SET_PED_SEEING_RANGE(iVar0, 200f);
	PED::_0xD77AE48611B7B10A(iVar0, 0.48f);
	PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
	if (func_202(iParam0, &Local_17, 32768))
	{
		LAW::_0x819ADD5EF1742F47(iVar0, 7);
		PED::SET_PED_AS_COP(iVar0, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 39, true);
		POPULATION::_0xF74E134F40192884(iVar0, 1);
		if (Global_1901929->f_160.f_31)
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 127, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		}
	}
	if (func_33(256))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
	}
	switch ((uParam1->f_16[iParam0 /*12*/])->f_2)
	{
		case 824585797:
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 65, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case joaat("driver"):
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case -522830230:
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
			bVar14 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
			if (!func_237(bVar14) || WEAPON::_IS_WEAPON_MELEE(bVar14))
			{
				PED::_0x815C0074A1BC0D93(iVar0, 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 93, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 96, true);
			}
			break;
		case -306837416:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			break;
		case 401658241:
			func_692(iVar0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iVar0, 0, 1065353216);
			PED::_0x712B2C2B2471B493(iVar0, 554382346);
			TASK::_0x3AD8EFF9703BE657(iVar0, 0f);
			break;
		case -193064196:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case -2133983324:
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case 1095997463:
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 337, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
			if (Local_2026.f_10 == -409129282)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 317, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
			}
			else if (Local_2026.f_10 == -19759302)
			{
				LAW::_0xFFEBE5AA96BC2E4E(iVar0, -1728509733, 1);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2048, true);
			DECORATOR::DECOR_SET_BOOL(iVar0, func_693(), true);
			if (func_200(&Local_2026) == -19759302)
			{
				MISC::_0x7FA58CED69405F9A(iVar0, 3);
				PED::SET_PED_CONFIG_FLAG(iVar0, 277, true);
			}
			break;
		case 1566032419:
			PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
			PED::SET_PED_RESET_FLAG(iVar0, 36, true);
			PED::SET_PED_CAN_RAGDOLL(iVar0, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
			PED::SET_PED_COMBAT_MOVEMENT(iVar0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
	}
	return 1;
}

void func_397(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if ((uParam1->f_16[iParam0 /*12*/])->f_11 < 0)
	{
		return;
	}
	if (func_675(&Local_2026, iParam0) != -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		return;
	}
	iVar0 = (uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3;
	iVar1 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!func_272(iParam0, 1))
	{
		return;
	}
	if (PED::DOES_GROUP_EXIST(iVar0))
	{
		return;
	}
	(uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3 = PED::CREATE_GROUP(0);
	iVar0 = (uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3;
	PED::SET_GROUP_FORMATION(iVar0, 5);
	PED::_0x478F6B9920446CE2(iVar0, 0);
	PED::SET_PED_AS_GROUP_LEADER(iVar1, iVar0, 0);
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if ((uParam1->f_16[iVar3 /*12*/])->f_2 != -306837416)
		{
		}
		else if ((uParam1->f_16[iParam0 /*12*/])->f_11 != (uParam1->f_16[iVar3 /*12*/])->f_11)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iVar3 /*12*/])))
		{
		}
		else
		{
			iVar4 = NETWORK::NET_TO_PED(&(uParam1->f_16[iVar3 /*12*/]));
			PED::ADD_CUSTOM_FORMATION_LOCATION(iVar0, (uParam1->f_16[iVar3 /*12*/])->f_8, iVar2);
			PED::SET_PED_AS_GROUP_MEMBER(iVar4, iVar0);
			PED::_0x0E9E95FDEDCC9D35(iVar4, iVar2, 0);
			iVar2++;
		}
		iVar3++;
	}
}

int func_398(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!bParam1 || !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_399(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	int iVar6;

	if (func_202(iParam0, uParam2, 32))
	{
		return;
	}
	if (!func_202(iParam0, uParam2, 4) && !func_202(iParam0, uParam2, 524288))
	{
		if (func_202(iParam0, uParam2, 65536) || func_202(iParam0, uParam2, 131072))
		{
			if ((((Local_17.f_16[iParam0 /*12*/])->f_3 != 28 && (Local_17.f_16[iParam0 /*12*/])->f_3 != 24) && !PED::_IS_PED_HOGTIED(iParam1)) && ENTITY::_0x61914209C36EFDDB(iParam1) == 0)
			{
				func_414(iParam0, uParam2, 65536);
				func_414(iParam0, uParam2, 131072);
			}
		}
		return;
	}
	iVar0 = 255;
	if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((Local_17.f_16[iParam0 /*12*/])->f_7))
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX((Local_17.f_16[iParam0 /*12*/])->f_7);
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	bVar4 = func_202(iParam0, uParam2, 65536);
	bVar5 = func_202(iParam0, uParam2, 131072);
	if (((!bVar4 && !bVar5) && !func_202(iParam0, &Local_17, 67108864)) && iVar0 != 255)
	{
		if ((func_41(Local_361[iVar0 /*52*/], 32) && func_332(Local_2026.f_625, vVar1)) || (func_41(Local_361[iVar0 /*52*/], 64) && func_332(Local_2026.f_626, vVar1)))
		{
			func_694(iParam0, (Local_17.f_16[iParam0 /*12*/])->f_7);
		}
	}
	iVar6 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (((Local_17.f_16[iParam0 /*12*/])->f_7 == 255 || iVar0 == 255) || !func_695(iParam0, iVar0))
	{
		if (iVar6 != 3 && 1)
		{
			return;
		}
	}
	if (func_202(iParam0, uParam2, 65536))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_696(iParam0, uParam2, 0);
		return;
	}
	else if (func_202(iParam0, uParam2, 131072))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_696(iParam0, uParam2, 1);
		return;
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_7 == 255 || iVar0 == 255)
	{
		return;
	}
	if (!bVar4 && !bVar5)
	{
		if (func_41(Local_361[iVar0 /*52*/], 64) && func_695(iParam0, iVar0))
		{
			func_275(iParam0, uParam2, 131072);
		}
		else if (func_41(Local_361[iVar0 /*52*/], 32) && func_695(iParam0, iVar0))
		{
			func_275(iParam0, uParam2, 65536);
		}
	}
}

void func_400(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_557(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 != -1088690539 && func_398(iParam0, func_697(iVar0)))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
		{
			iVar1 = func_698(iParam0, uParam1);
		}
		if (iVar0 == 1095997463)
		{
			func_699(iParam0, uParam1, bParam3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && DECORATOR::DECOR_EXIST_ON(iVar1, func_693()))
			{
				DECORATOR::DECOR_REMOVE(iVar1, func_693());
			}
		}
		func_700(iParam0, uParam1, 0, 1, 0);
		return;
	}
	if (iVar0 == -1088690539)
	{
		if (func_701(iParam0))
		{
			func_235(iParam0);
			func_702(iParam0);
		}
		return;
	}
	iVar1 = func_698(iParam0, uParam1);
	func_703(iParam0, uParam1, iParam2, bParam3);
	func_704(iParam0, uParam1, iParam2, bParam3);
	func_705(iParam0, iVar1);
	switch (func_557(iParam0, uParam1))
	{
		case joaat("driver"):
			func_706(iParam0, uParam1, iParam2, bParam3);
			break;
		case -193064196:
			func_707(iParam0, uParam1, iParam2, bParam3);
			break;
		case -522830230:
			func_708(iParam0, uParam1, iParam2, bParam3);
			break;
		case 1095997463:
			func_709(iParam0, uParam1, iParam2, bParam3);
			break;
		case -306837416:
			func_710(iParam0, uParam1, iParam2, bParam3);
			break;
		case 824585797:
			func_711(iParam0, uParam1, iParam2, bParam3);
			break;
		case 1566032419:
			func_712(iParam0, uParam1, iParam2, bParam3);
			break;
		case 401658241:
			func_713(iParam0, uParam1, iParam2, bParam3);
			break;
		case -2133983324:
			func_714(iParam0, uParam1, iParam2, bParam3);
			break;
	}
}

void func_401(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_339(iParam0, uParam1, 1))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iParam0 /*4*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iParam0 /*4*/]));
	if ((func_33(256) && !func_55(uParam1, 16)) && func_549(iVar0, (Local_2026.f_29[iParam0 /*5*/])->f_1, 0) > 3f)
	{
		func_63(uParam1, 16);
	}
	if (func_715(iVar0) && func_55(uParam1, 16))
	{
		if (!func_33(256))
		{
			if (func_716(uParam1, joaat("driver"), iParam0))
			{
				return;
			}
			if (func_716(uParam1, 824585797, iParam0))
			{
				return;
			}
		}
		func_393(iParam0, uParam1, 1);
		(Local_17.f_3[iParam0 /*4*/])->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

int func_402(bool bParam0)
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
			if (!func_41(Local_361[iVar2 /*52*/], 32) && !func_41(Local_361[iVar2 /*52*/], 64))
			{
				if (!bParam0 || GANG::_0x901E0DC25080C8B9(iVar1) != Local_17.f_316)
				{
				}
				else if (func_41(Local_361[iVar2 /*52*/], 8388608))
				{
				}
				else
				{
					return 0;
					Jump @170; //curOff = 141
					if (bParam0)
					{
						if (GANG::_0x901E0DC25080C8B9(iVar1) != Local_17.f_316)
						{
						}
						else
						{
							return 0;
						}
					}
				}
				iVar0++;
				return 1;
			}
		}
	}

int func_403(var uParam0)
{
	return uParam0->f_2;
}

int func_404(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_405(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if (func_202(iVar0, uParam0, 32))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_406(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;

	if (!func_203(iParam0, uParam1, 128))
	{
		return;
	}
	if (func_203(iParam0, uParam1, 16))
	{
		return;
	}
	if (func_203(iParam0, uParam1, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_257[iParam0 /*5*/])))
	{
		func_717(iParam0, uParam1);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[iParam0 /*5*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_717(iParam0, uParam1);
		return;
	}
	vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	func_718(iParam0, iVar0, vVar5, &iVar1, &iVar2, &iVar3, &bVar4);
	if (iVar1 != 0)
	{
		vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	}
	bVar8 = func_203(iParam0, &Local_17, 256);
	bVar9 = func_203(iParam0, &Local_17, 512);
	if (iVar1 == 0 || !bVar4)
	{
		if (bVar8)
		{
			func_719(iParam0, uParam1, 0);
			return;
		}
		else if (bVar9)
		{
			func_719(iParam0, uParam1, 1);
			return;
		}
	}
	if (((Local_17.f_257[iParam0 /*5*/])->f_3 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_257[iParam0 /*5*/])->f_3)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((Local_17.f_257[iParam0 /*5*/])->f_3))
	{
		return;
	}
	if ((!bVar8 && !bVar9) && !func_203(iParam0, &Local_17, 4096))
	{
		if ((iVar1 == 2 && func_332(Local_2026.f_625, vVar5)) || (iVar1 == 3 && func_332(Local_2026.f_626, vVar5)))
		{
			func_720(iParam0, (Local_17.f_257[iParam0 /*5*/])->f_3);
		}
	}
	if (!bVar8 && !bVar9)
	{
		if (func_721(vVar5, iVar1, iVar2, bVar4, iVar3, 0))
		{
			func_418(iParam0, &Local_17, 256);
		}
		else if (func_721(vVar5, iVar1, iVar2, bVar4, iVar3, 1))
		{
			func_418(iParam0, &Local_17, 512);
		}
	}
}

int func_407()
{
	if (!func_33(65536))
	{
		return 0;
	}
	if (func_403(&Local_17) <= 2)
	{
		return 0;
	}
	if (!func_55(&Local_17, 134217728))
	{
		return 0;
	}
	if (func_55(&Local_17, 524288))
	{
		return 0;
	}
	if (func_55(&Local_17, 512))
	{
		return 0;
	}
	if (func_404(&Local_17, 401658241))
	{
		return 0;
	}
	return 1;
}

void func_408()
{
	Local_17.f_305.f_5 = 0;
	Local_17.f_305.f_6 = func_722();
	Local_17.f_305.f_7 = func_723();
	Local_17.f_305.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_17.f_305.f_2 = { 0f, 0f, 0f };
}

void func_409(int iParam0)
{
	Local_17.f_305 = iParam0;
}

int func_410()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_55(&Local_17, 256))
	{
		if (func_210(Local_17.f_305.f_9) < 8000)
		{
			return 0;
		}
	}
	else if (func_210(Local_17.f_305.f_9) < Local_17.f_305.f_7)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if ((Local_17.f_16[iVar1 /*12*/])->f_2 != 0)
		{
			if ((Local_17.f_16[iVar1 /*12*/])->f_2 == 401658241)
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
	if (iVar0 < Local_17.f_305.f_6)
	{
		return 0;
	}
	if (iVar2 + Local_17.f_305.f_6) > func_724()
	{
		return 0;
	}
	return 1;
}

int func_411(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
	fVar7 = -1f;
	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if ((Local_17.f_16[iVar8 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (func_202(iVar8, &Local_17, 32) || func_202(iVar8, &Local_17, 262144))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar8 /*12*/])))
				{
				}
				else
				{
					iVar9 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar8 /*12*/]));
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
		case -409129282:
			iVar8 = 0;
			while (iVar8 < 4)
			{
				if (((!func_203(iVar8, &Local_17, 128) || func_203(iVar8, &Local_17, 2)) || func_203(iVar8, &Local_17, 16)) || func_203(iVar8, &Local_17, 1024))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar8 /*5*/])))
				{
				}
				else
				{
					iVar10 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar8 /*5*/]));
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
			return 0;
	}
	if (fVar7 < 0f)
	{
		return 0;
	}
	return 1;
}

int func_412(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (func_113((uParam0->f_16[iVar0 /*12*/])->f_4, iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_413(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (func_113((uParam0->f_16[iVar0 /*12*/])->f_4, iParam2))
		{
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_414(int iParam0, var uParam1, int iParam2)
{
	func_437(&((uParam1->f_16[iParam0 /*12*/])->f_4), iParam2);
}

int func_415(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 128))
		{
		}
		else if (func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else if (!bParam2 && func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 2))
		{
		}
		else if (func_113((uParam0->f_257[iVar0 /*5*/])->f_1, iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_416(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 128))
		{
		}
		else if (func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else if (!bParam2 && func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 2))
		{
		}
		else if (!func_113((uParam0->f_257[iVar0 /*5*/])->f_1, iParam1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_417(int iParam0, var uParam1, int iParam2)
{
	func_437(&((uParam1->f_257[iParam0 /*5*/])->f_1), iParam2);
}

void func_418(int iParam0, var uParam1, int iParam2)
{
	func_122(&((uParam1->f_257[iParam0 /*5*/])->f_1), iParam2);
}

void func_419(var uParam0, int iParam1)
{
	func_437(&(uParam0->f_1), iParam1);
}

int func_420(int iParam0, int iParam1, vector3 vParam2)
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

	iVar0 = 401658241;
	iVar1 = func_238();
	iVar2 = func_239();
	bVar3 = func_725();
	vParam2 = { vParam2 + func_726(iParam0, iParam1) };
	if (!func_172(iVar1))
	{
		return 0;
	}
	if (!func_172(iVar2))
	{
		return 0;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vParam2);
	if (!ENTITY::_0x6BFBDC46139C45AB(vParam2))
	{
		return 0;
	}
	if (Local_17.f_305.f_8 == -1)
	{
		if (!func_727(&iVar4))
		{
			return 1;
		}
		Local_17.f_305.f_8 = iVar4;
	}
	else
	{
		iVar4 = Local_17.f_305.f_8;
	}
	iVar5 = 2;
	iVar6 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0);
	iVar7 = (iVar6 - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false));
	if (iVar7 < iVar5)
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS((iVar6 + (iVar5 - iVar7)));
		if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < (iVar6 + (iVar5 - iVar7)))
		{
			return 1;
		}
	}
	if (Local_17.f_305.f_1 != -1)
	{
		switch (Local_2026.f_10)
		{
			case -409129282:
				if (((func_203(Local_17.f_305.f_1, &Local_17, 128) && !func_203(Local_17.f_305.f_1, &Local_17, 16)) && !func_203(Local_17.f_305.f_1, &Local_17, 2)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[Local_17.f_305.f_1 /*5*/])))
				{
					bVar12 = true;
					uVar8 = Local_17.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_257[Local_17.f_305.f_1 /*5*/])), false, false) };
				}
				break;
			case -19759302:
				if ((func_202(Local_17.f_305.f_1, &Local_17, 1024) && !func_202(Local_17.f_305.f_1, &Local_17, 32)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[Local_17.f_305.f_1 /*12*/])))
				{
					bVar12 = true;
					uVar8 = Local_17.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_16[Local_17.f_305.f_1 /*12*/])), false, false) };
				}
				break;
		}
	}
	if (!bVar12 && !func_728(vParam2, &uVar8, &vVar9, 1128792064 /* Float: 200f */))
	{
		return 1;
	}
	fVar13 = func_729(vParam2, vVar9);
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return 1;
	}
	if (iVar2 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar2 = func_181(iVar0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iVar4 /*12*/])->f_1))
	{
		if (iVar2 == 0)
		{
			return 1;
		}
		if (!func_679(&((Local_17.f_16[iVar4 /*12*/])->f_1), iVar2, vParam2, fVar13, 1, 0, 1, 1, 1))
		{
			return 0;
		}
		NETWORK::_0x7182EDDA1EE7DB5A((Local_17.f_16[iVar4 /*12*/])->f_1);
		return 0;
	}
	NETWORK::_0x7182EDDA1EE7DB5A((Local_17.f_16[iVar4 /*12*/])->f_1);
	func_680(iVar4);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar4 /*12*/])) && !func_681(Local_17.f_16[iVar4 /*12*/], (Local_17.f_16[iVar4 /*12*/])->f_1, iVar1, -1, 1, 1, 1, 0))
	{
		return 0;
	}
	NETWORK::_0x7182EDDA1EE7DB5A(&(Local_17.f_16[iVar4 /*12*/]));
	(Local_17.f_16[iVar4 /*12*/])->f_2 = iVar0;
	(Local_17.f_16[iVar4 /*12*/])->f_8 = { func_730(iParam0, iParam1) };
	(Local_17.f_16[iVar4 /*12*/])->f_11 = uVar8;
	if (bVar3)
	{
		func_275(iVar4, &Local_17, 32768);
	}
	if (!func_396(iVar4, &Local_17, &Local_2026, 1))
	{
		return 0;
	}
	return 1;
}

void func_421(var uParam0, int iParam1, bool bParam2)
{
	switch (func_403(uParam0))
	{
		case 0:
			func_731(1, uParam0);
			break;
		case 1:
			if (func_732(uParam0, 8, 1))
			{
				if (func_732(uParam0, 64, 1) || func_415(uParam0, 32, 1))
				{
					func_731(5, uParam0);
					return;
				}
				if (!func_733(-1, 1))
				{
					return;
				}
				func_731(3, uParam0);
				return;
			}
			if (!func_734(uParam0, 1))
			{
				return;
			}
			if (func_735(uParam0, -1))
			{
				func_731(2, uParam0);
				return;
			}
			func_731(3, uParam0);
			break;
		case 2:
			if (func_732(uParam0, 8, 1))
			{
				func_731(5, uParam0);
				return;
			}
			if (func_735(uParam0, -1))
			{
				return;
			}
			func_731(3, uParam0);
			break;
		case 3:
			if ((func_415(uParam0, 1, 1) || func_415(uParam0, 32, 1)) || func_732(uParam0, 64, 1))
			{
				func_731(5, uParam0);
				return;
			}
			break;
		case 5:
			if (func_732(uParam0, 8, 1))
			{
				if (func_732(uParam0, 2, 1))
				{
					return;
				}
				func_731(6, uParam0);
				return;
			}
			if (func_416(uParam0, 2, 1))
			{
				return;
			}
			if (!func_736(uParam0, 1, -1))
			{
				func_731(1, uParam0);
				return;
			}
			break;
	}
}

void func_422(var uParam0, int iParam1, bool bParam2)
{
	switch (func_403(uParam0))
	{
		case 0:
			func_731(1, uParam0);
			break;
		case 1:
			if (func_733(-1, 1))
			{
				func_731(4, uParam0);
				return;
			}
			if (!func_734(uParam0, 1))
			{
				return;
			}
			if (func_735(uParam0, -1))
			{
				func_731(2, uParam0);
				return;
			}
			func_731(4, uParam0);
			break;
		case 2:
			if (func_733(-1, 0))
			{
				func_731(4, uParam0);
				return;
			}
			if (func_735(uParam0, -1))
			{
				return;
			}
			func_731(4, uParam0);
			break;
		case 4:
			if (func_733(-1, 1))
			{
				return;
			}
			if (!func_736(uParam0, 1, -1))
			{
				func_731(1, uParam0);
				return;
			}
			if (func_405(uParam0))
			{
				return;
			}
			func_731(6, uParam0);
			break;
	}
}

void func_423()
{
	int iVar0;

	if (func_602() == 3)
	{
		return;
	}
	if (!func_605(1) && !func_737())
	{
		return;
	}
	if (Local_17.f_299 == 0)
	{
		iVar0 = func_738();
		if (iVar0 == 0)
		{
			func_739(3);
			return;
		}
		else if (func_496(iVar0) == 0)
		{
			func_739(3);
			return;
		}
	}
	else
	{
		iVar0 = Local_17.f_299;
	}
	switch (func_602())
	{
		case 0:
			if (!func_605(1))
			{
				Local_17.f_299 = iVar0;
				Local_17.f_299.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_740(1);
			}
			if (func_210(Local_17.f_299.f_4) > 20000)
			{
				func_740(8);
				func_739(3);
			}
			if (!func_741(2, 0))
			{
				return;
			}
			func_742(iVar0);
			if (!func_741(4, 0))
			{
				return;
			}
			func_739(1);
			break;
		case 1:
			if (!func_743(1, 0))
			{
				return;
			}
			if (!func_741(32, 0))
			{
				return;
			}
			if (!func_744(func_497(iVar0, Local_17.f_299.f_2)))
			{
				return;
			}
			Local_17.f_299.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_745(4);
			func_739(2);
			break;
		case 2:
			if (!func_741(64, 0))
			{
				return;
			}
			if (!func_605(4) && !func_744(func_497(iVar0, Local_17.f_299.f_2)))
			{
				return;
			}
			func_740(4);
			if (Local_17.f_299.f_2 < (Local_2026.f_537 - 1))
			{
				func_746();
				func_739(1);
				return;
			}
			Local_17.f_299.f_5 = 0;
			Local_17.f_299.f_2 = 0;
			func_739(3);
			break;
	}
}

int func_424(int iParam0, bool bParam1)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			if (bParam1)
			{
				return MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_4), iParam0);
			}
			return MISC::_0x8F4F050054005C27(&(Local_2026.f_540), iParam0);
		case -19759302:
			if (bParam1)
			{
				return MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_6), iParam0);
			}
			return MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_2), iParam0);
		default:
			break;
	}
	return 0;
}

int func_425(int iParam0)
{
	int iVar0;

	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar0 = (Local_17.f_16[iParam0 /*12*/])->f_7;
			break;
		case -409129282:
			iVar0 = (Local_17.f_257[iParam0 /*5*/])->f_3;
			break;
		default:
			return 0;
	}
	if (iVar0 == 255)
	{
		return 0;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (!GANG::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iVar0))
	{
		return 0;
	}
	return 1;
}

void func_426(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	func_747(iParam0, 0, iParam1);
	func_433(iParam0, &uVar0, 0, bParam3);
	func_435(iParam0, 0, iParam2);
	func_748(532584148, iParam0, 0, 255, 0, 1);
}

int func_427(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = func_749(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_479(iVar0);
}

int func_428(int iParam0)
{
	return &(Global_1103537->f_7066[iParam0 /*5*/]);
}

float func_429(float fParam0, float fParam1, float fParam2)
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

void func_430(int iParam0, int iParam1, bool bParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	func_750(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				func_751(iParam0, 1628925866);
				break;
			case 1:
				*bParam2 = 1;
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
					func_751(iParam0, 1295140836);
					break;
				case 1:
					*bParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1526522745);
					break;
				case 1:
					*bParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1901367336);
					break;
				case 1:
					*iParam1 = 1706540001;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -2012562028);
					break;
				case 1:
					*iParam1 = 1706540001;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1811294830);
					break;
				case 1:
					*iParam1 = 1706540001;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1580699377);
					break;
				case 1:
					*iParam1 = -398376814;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -529994165);
					break;
				case 1:
					*iParam1 = -398376814;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1356198962);
					break;
				case 1:
					*iParam1 = -398376814;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 592638986);
					break;
				case 1:
					*iParam1 = -1203216227;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -71665830);
					break;
				case 1:
					*iParam1 = -1203216227;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -369634347);
					break;
				case 1:
					*iParam1 = -1203216227;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 523648593);
					break;
				case 1:
					*iParam1 = 329552932;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 224041626);
					break;
				case 1:
					*iParam1 = 329552932;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1119225168);
					break;
				case 1:
					*iParam1 = 329552932;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 820076967);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1790072136);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1490530707);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1908007825);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 2085779592);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -169152669);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -544685409);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -649710054);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1023735420);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1126990539);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1501736823);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1614824464);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1845287019);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1073415046);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1906960099);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -2023453588);
					break;
				case 1:
					*iParam1 = -1520125470;
					break;
			}
			break;
	}
}

void func_431(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
						func_751(iParam0, 102861655);
					}
					switch (iVar1)
					{
						case 5:
							func_751(iParam0, 1606837351);
							break;
						case 10:
							func_751(iParam0, 1993982606);
							break;
						case 15:
							func_751(iParam0, -1120317616);
							break;
						case 20:
							func_751(iParam0, 1497203110);
							break;
						case 25:
							func_751(iParam0, 1461747036);
							break;
						case 30:
							func_751(iParam0, 1705384279);
							break;
						case 35:
							func_751(iParam0, 587764757);
							break;
						case 40:
							func_751(iParam0, 496010113);
							break;
						case 45:
							func_751(iParam0, -8927412);
							break;
						case 50:
							func_751(iParam0, -1913265366);
							break;
						case 55:
							func_751(iParam0, -1185662490);
							break;
						case 60:
							func_751(iParam0, 1041027017);
							break;
						case 65:
							func_751(iParam0, -1593666129);
							break;
						case 70:
							func_751(iParam0, 1825778741);
							break;
						case 75:
							func_751(iParam0, -1544873376);
							break;
						case 80:
							func_751(iParam0, 1557926776);
							break;
						case 85:
							func_751(iParam0, 1088477734);
							break;
						case 90:
							func_751(iParam0, 1557926776);
							break;
						case 95:
							func_751(iParam0, 956550028);
							break;
						default:
							func_751(iParam0, -781986478);
							break;
					}
					break;
				case 1:
					if (iVar1 <= 0)
					{
						*bParam1 = 1;
					}
					break;
			}
			break;
		case 1891766540:
			if (bParam6)
			{
				switch (iParam2)
				{
					case 0:
						func_751(iParam0, 413085053);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_751(iParam0, 102861655);
						break;
					case 1:
						*bParam1 = 1;
						break;
				}
			}
			break;
	}
}

void func_432(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("pvp"):
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -73489229);
					break;
			}
			break;
		case 1038512660:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 1981105632);
					break;
			}
			break;
	}
}

void func_433(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;

	bVar0 = GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= true;
	if (bParam3)
	{
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_751(iParam0, -57805484);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_751(iParam0, 512977886);
					break;
			}
		}
	}
	else
	{
		*bParam1 = 1;
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_751(iParam0, -1570113901);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_751(iParam0, -1876025097);
					break;
			}
		}
	}
}

void func_434(int iParam0, int iParam1, struct<2> Param2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_472(Param2);
	if (!func_473(iVar0))
	{
		return;
	}
	iVar1 = func_474(iVar0);
	if (func_475(iVar1))
	{
		iVar2 = func_752(func_478(iVar1));
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
				func_751(iParam0, 1900669220);
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 402273926);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -1111096805);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -738447737);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 704666254);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 963311971);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -1751075375);
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -1527623564);
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -465252584);
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -225219659);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 2108535411);
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -1845896441);
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 1961468135);
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 1723008122);
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -648222260);
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -921745103);
					break;
			}
			break;
	}
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_751(iParam0, func_753(iParam2));
			break;
	}
}

int func_436(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_754(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_437(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_438(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return 0;
	}
	*iParam1 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (!bParam2)
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		if (bParam3 && PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_439(int iParam0, int iParam1)
{
	func_437(&((Local_2026.f_45[iParam0 /*6*/])->f_1), iParam1);
}

void func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_755(iParam0, &iVar1, &iVar0);
	iVar2 = 0;
	while (iVar2 < 12)
	{
		MISC::CLEAR_BIT((*(Local_361[Local_2026.f_634 /*52*/])->f_16[iVar2 /*2*/])[iVar1], iVar0);
		iVar2++;
	}
}

bool func_441(int iParam0, int iParam1)
{
	return (((*Global_1122836)[iParam0 /*54*/])->f_47 && iParam1) != 0;
}

int func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_514(iParam0);
	if (!func_515(iVar0))
	{
		return 0;
	}
	iVar1 = func_476(iVar0);
	if (!func_477(iVar1))
	{
		return 0;
	}
	if (!func_756(iVar1, &iVar2))
	{
		return 1;
	}
	if (func_757(iVar2, 2))
	{
		return 0;
	}
	return 1;
}

bool func_443(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_1070356->f_20795.f_353[iParam0 /*11*/]), iParam1);
}

void func_444()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1070356->f_19683.f_260));
}

void func_445(bool bParam0)
{
	if (bParam0)
	{
		Global_1939231 = 1;
	}
	else
	{
		Global_1939231 = 2;
	}
}

int func_446(int iParam0)
{
	if (func_758(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_447(int iParam0)
{
	if (func_759(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_448(var uParam0)
{
	if (!func_293(&Local_2026, uParam0))
	{
		return 0;
	}
	if (!func_313(uParam0, 419371455, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_449(struct<5> Param0, int iParam5, var uParam6)
{
	var uVar0;

	if (func_177(Param0, iParam5, &uVar0, 0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	return 0;
}

void func_450(int iParam0, int iParam1)
{
	func_437(Local_2026.f_166[iParam0], iParam1);
}

void func_451(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_332), iParam0))
		{
			return;
		}
		func_760(iParam0, 1);
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_202.f_332), iParam0);
	}
	else
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_332), iParam0))
		{
			return;
		}
		func_760(iParam0, 0);
		MISC::_0xB909149F2BB5F6DA(&(Local_2026.f_202.f_332), iParam0);
	}
}

void func_452(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (bParam1)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_329), iParam0))
		{
			return;
		}
		func_761(iVar0);
		func_762(iParam0, 1);
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_202.f_329), iParam0);
	}
	else
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_329), iParam0))
		{
			return;
		}
		func_763(iVar0);
		func_762(iParam0, 0);
		MISC::_0xB909149F2BB5F6DA(&(Local_2026.f_202.f_329), iParam0);
	}
}

bool func_453(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_247(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

int func_454(float fParam0)
{
	if (func_247(fParam0->f_202.f_56))
	{
		return 1;
	}
	return 0;
}

void func_455(var uParam0)
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

void func_456()
{
	AUDIO::_0x9D746964E0CF2C5F(func_764(), func_765());
	AUDIO::_0x9D746964E0CF2C5F(func_766(), func_765());
	AUDIO::_0x9D746964E0CF2C5F(func_767(), func_765());
	AUDIO::_0x9D746964E0CF2C5F(func_768(), func_765());
	AUDIO::_0x9D746964E0CF2C5F(func_769(), func_770());
	AUDIO::_0x9D746964E0CF2C5F(func_771(), func_772());
}

void func_457(var uParam0)
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

void func_458(int iParam0)
{
	if (Global_1903004->f_1 != iParam0)
	{
		Global_1903004->f_1 = iParam0;
	}
}

void func_459(int iParam0)
{
	Global_1903004 = iParam0;
}

int func_460(int iParam0, bool bParam1)
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
		iVar2 = func_773(iVar4, 1);
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
				func_774(iVar2, bVar3, bParam1);
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
					(Global_1132968->f_4641.f_2[func_504(iVar2, 1) /*4*/])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

void func_461(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_462()
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

int func_463(int iParam0)
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

int func_464(int iParam0)
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

void func_465(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_466(struct<2> Param0, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar9;
	int iVar10;

	Var5.f_1 = -1;
	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_472(Param0);
	if (!func_473(iVar1))
	{
		return;
	}
	iVar0 = func_474(iVar1);
	if (!func_475(iVar0))
	{
		return;
	}
	iVar2 = func_476(iVar1);
	if (!func_477(iVar2))
	{
		return;
	}
	iVar10 = func_479(iVar1);
	if (iVar10 == -1)
	{
		return;
	}
	iVar3 = func_480(iVar0);
	iVar4 = func_478(iVar0);
	iVar9 = func_428(iVar10);
	if (func_481())
	{
		if (bParam2 && GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_775(iVar0, iVar2, Param0, iVar10);
		}
		if (func_776(iVar9) != joaat("setup"))
		{
			switch (iVar4)
			{
				case 2132950130:
					break;
				case -408236271:
					func_778(iVar4, func_777());
					func_779(iVar4, 1);
					func_780(iVar0);
					func_781(iVar0);
					func_782(8388608);
					break;
				case 1766283257:
					func_778(iVar4, func_777());
					func_779(iVar4, 1);
					func_780(iVar0);
					func_781(iVar0);
					func_782(4194304);
					break;
				default:
					func_778(iVar4, func_777());
					func_779(iVar4, 1);
					func_780(iVar0);
					func_781(iVar0);
					break;
			}
		}
		func_783(iVar4, func_777());
		func_784(iVar4, bParam2);
		switch (func_785(iVar9))
		{
			case 7:
				func_786(iVar1, &Var5);
				func_787(&Var5);
				break;
		}
		func_788(iVar10, Param0, bParam2);
		func_790(func_789(iVar0), 1);
		func_791(1);
	}
	func_792(iVar3, bParam2);
	func_793();
}

int func_467(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	return func_794(iParam0, iParam1);
}

void func_468(int iParam0)
{
	func_795(iParam0);
}

void func_469(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_796(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (!func_797(Var0) && !func_585(Var0))
	{
		return;
	}
	func_798(iParam0, 2);
	func_798(iParam0, 3);
	func_799(iParam0, 6);
	func_800(Var0, 0, 2, bParam1);
}

void func_470(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_796(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_797(Var0))
	{
		return;
	}
	if (!func_585(Var0))
	{
		return;
	}
	if (func_801(iParam0, PLAYER::PLAYER_ID(), 5))
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
	func_800(Var0, 0, bVar2, bParam2);
	func_799(iParam0, 4);
}

void func_471(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_796(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_797(Var0))
	{
		return;
	}
	if (!func_585(Var0))
	{
		return;
	}
	if (func_801(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_800(Var0, 0, 1, bParam1);
	func_799(iParam0, 5);
}

int func_472(struct<2> Param0)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_29(Param0, func_802(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_473(int iParam0)
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

int func_474(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3;
}

bool func_475(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 35);
}

int func_476(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_1;
}

bool func_477(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 59);
}

int func_478(int iParam0)
{
	return Global_1113601[iParam0 /*35*/];
}

int func_479(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_3;
}

int func_480(int iParam0)
{
	return ((*Global_1113601)[iParam0 /*35*/])->f_1;
}

int func_481()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_482(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(-1808811965, func_803(iParam0)) };
	func_805(Var0, iParam1);
}

void func_483(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(-746839750, func_803(iParam0)) };
	func_806(Var0, iParam1);
}

void func_484(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(829565093, func_803(iParam0)) };
	func_807(Var0, iParam1);
}

void func_485(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<2> Var1;

	if (bParam1)
	{
		if (bParam2)
		{
			iVar0 = 622623048;
		}
		else
		{
			iVar0 = 123615871;
		}
	}
	else if (bParam2)
	{
		iVar0 = -1892463704;
	}
	else
	{
		iVar0 = 1374282888;
	}
	Var1 = { func_804(iVar0, func_803(iParam0)) };
	func_808(Var1);
}

void func_486(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;

	if (bParam1)
	{
		return;
	}
	Var0 = { func_804(741274143, func_803(iParam0)) };
	if (bParam2)
	{
		func_808(Var0);
	}
	else
	{
		func_809(Var0, 0);
	}
}

void func_487(int iParam0, bool bParam1, bool bParam2, struct<2> Param3, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar9;

	iVar0 = func_428(iParam0);
	iVar3 = func_776(iVar0);
	iVar4 = func_785(iVar0);
	vVar5.f_1 = -1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 1;
	}
	switch (iVar4)
	{
		case 0:
			if (bParam2)
			{
				iVar2 = -1365731393;
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		case 11:
			if (bParam2)
			{
				switch (iVar3)
				{
					case -1562099170:
						func_810(256);
						break;
					case -1318406457:
						if (func_811(iParam0, 2))
						{
							iVar2 = -406386912;
						}
						else
						{
							iVar2 = -356110550;
						}
						break;
					default:
						iVar2 = -1365731393;
						break;
				}
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		case 7:
			if (bParam2)
			{
				func_786(iParam5, &vVar5);
				iVar9 = vVar5.z;
				switch (iVar9)
				{
					case 0:
						iVar2 = -508253498;
						break;
					case 1:
						iVar2 = 566295171;
						break;
					case 2:
						iVar2 = -1881397389;
						break;
					default:
						iVar2 = -1365731393;
						break;
				}
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		case 15:
			if (bParam2)
			{
				if (func_811(iParam0, 4))
				{
					iVar2 = -1553095031;
				}
				else
				{
					iVar2 = -1365731393;
				}
			}
			else if (func_811(iParam0, 4))
			{
				iVar2 = 475709606;
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		default:
			if (bParam2)
			{
				iVar2 = -1365731393;
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
	}
	func_812(iVar0, iVar1, iVar2, func_106(Param3));
}

void func_488(int iParam0, int iParam1, int iParam2, struct<2> Param3)
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
	func_385(&Var0, uVar31);
}

void func_489(bool bParam0)
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
	POSSE::_0xC684FF658B2E55DA(bParam0);
}

void func_490(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam2)
	{
		iVar0 = -1892463704;
	}
	else
	{
		iVar0 = 1374282888;
	}
	if (bParam1)
	{
		iVar1 = func_813(iParam0);
	}
	else
	{
		iVar1 = func_814(iParam0);
	}
	Var2 = { func_804(iVar0, iVar1) };
	func_808(Var2);
}

void func_491(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (GANG::_0x0F99F6436528A089(iVar0) && GANG::_0x149A2751AB66AC02(iVar0) >= 2)
		{
			func_815(17, 1);
		}
	}
	func_816(4);
	func_817(1);
	func_818(60);
	if (SAVE::_0x3CF46F55C6585590())
	{
	}
	else if (SAVE::_0x1840F3B30ED0105F(-1706799532))
	{
	}
	func_222(1);
	func_222(2);
}

void func_492(int iParam0)
{
	func_819(iParam0);
	func_820(iParam0, MISC::GET_GAME_TIMER());
}

void func_493(int iParam0)
{
	Global_1103537->f_21.f_37.f_1 = iParam0;
}

void func_494(int iParam0)
{
	Global_1103537->f_21.f_37 = iParam0;
}

void func_495(int iParam0)
{
	func_437(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_1), iParam0);
}

int func_496(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_293(&Local_2026, &Var0) && func_313(&Var0, 556233122, iParam0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_497(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (((func_293(&Local_2026, &Var0) && func_313(&Var0, 556233122, iParam0, 0)) && func_313(&Var0, -110495140, iParam1, 0)) && func_313(&Var0, -1441758265, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_498(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("ped"):
			if (iParam1 >= 20)
			{
				return 0;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam1 /*12*/])))
			{
				return 0;
			}
			*iParam2 = NETWORK::NET_TO_ENT(&(Local_17.f_16[iParam1 /*12*/]));
			break;
		case joaat("prop"):
			if (iParam1 >= 10)
			{
				return 0;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_278[iParam1 /*2*/])))
			{
				return 0;
			}
			if (func_96(iParam1, 1))
			{
				return 0;
			}
			*iParam2 = NETWORK::NET_TO_ENT(&(Local_17.f_278[iParam1 /*2*/]));
			break;
		case joaat("vehicle"):
			if (iParam1 >= 3)
			{
				return 0;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_3[iParam1 /*4*/])))
			{
				return 0;
			}
			*iParam2 = NETWORK::NET_TO_ENT(&(Local_17.f_3[iParam1 /*4*/]));
			break;
		case joaat("player"):
			if (iParam1 >= 7)
			{
				return 0;
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(&(Local_17.f_329[iParam1])) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_329[iParam1])))
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(&(Local_17.f_329[iParam1]))))
			{
				return 0;
			}
			*iParam2 = func_268(PLAYER::GET_PLAYER_PED(&(Local_17.f_329[iParam1])));
			break;
		case 130495496:
			if (iParam1 >= 7)
			{
				return 0;
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(&(Local_17.f_329[iParam1])) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_329[iParam1])))
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xF49F14462F0AE27C(&(Local_17.f_329[iParam1]))))
			{
				return 0;
			}
			*iParam2 = func_268(PLAYER::_0xF49F14462F0AE27C(&(Local_17.f_329[iParam1])));
			break;
		default:
			return 0;
	}
	return 1;
}

int func_499()
{
	return func_821((13 + Local_2026), 31);
}

void func_500(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_501(int iParam0)
{
	return func_822(iParam0);
}

var func_502(int iParam0)
{
	return &(Global_1103537->f_21.f_2.f_1[iParam0]);
}

int func_503()
{
	if (func_21() != 0)
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

int func_504(int iParam0, int iParam1)
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

void func_505(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 3, &uParam1);
}

int func_506(int iParam0)
{
	return &(Global_1100950->f_33[iParam0 /*16*/]);
}

var func_507(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_508(int iParam0, int iParam1, var uParam2)
{
	return func_823(iParam0, iParam1, uParam2);
}

int func_509(var uParam0, int iParam1, int iParam2)
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

int func_510(int iParam0, var uParam1)
{
	if (func_293(iParam0, uParam1))
	{
		uParam1->f_2 = -1874578615;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_511(int iParam0, var uParam1)
{
	if (func_293(iParam0, uParam1))
	{
		uParam1->f_2 = 1849119077;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_512(int iParam0, var uParam1)
{
	if (func_293(iParam0, uParam1))
	{
		uParam1->f_2 = -244186873;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

struct<2> func_513()
{
	return *Global_1051163;
}

int func_514(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_749(iParam0);
	iVar1 = func_824(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_515(iVar1))
		{
			func_825(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_515(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_516(int iParam0)
{
	if (!func_826(PLAYER::PLAYER_ID(), iParam0, 8))
	{
		return;
	}
	func_827();
	Global_1103537->f_15 = 1;
	func_828(iParam0, 8);
}

bool func_517(int iParam0)
{
	if (!func_829(iParam0))
	{
		return true;
	}
	return (MISC::GET_GAME_TIMER() - func_830(iParam0)) >= func_831(iParam0);
}

void func_518()
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
	func_492(1);
	func_386(&Var0);
}

void func_519()
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
	func_492(0);
	func_385(&Var0, uVar31);
}

float func_520(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_521(int iParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;

	if (iParam0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return 0;
	}
	if (bParam2 && !GANG::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false) };
	*fParam1 = -1f;
	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar3 /*5*/])))
				{
				}
				else
				{
					fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_257[iVar3 /*5*/])), false, false), vVar0);
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
		case -19759302:
			iVar3 = 0;
			while (iVar3 < 20)
			{
				if ((Local_17.f_16[iVar3 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar3 /*12*/])))
				{
				}
				else
				{
					fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_16[iVar3 /*12*/])), false, false), vVar0);
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
		return 0;
	}
	return 1;
}

int func_522(var uParam0, float fParam1)
{
	return (fParam1->f_10.f_6 - func_211(uParam0));
}

bool func_523(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 2);
	iVar1 = (iParam1 / 8);
	return (iParam0 <= iVar0 && iParam0 >= iVar1);
}

void func_524(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_832())
	{
		if ((MISC::GET_GAME_TIMER() - func_833()) < 75000)
		{
			return;
		}
	}
	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_472(Param0);
	if (!func_473(iVar1))
	{
		return;
	}
	iVar0 = func_474(iVar1);
	if (!func_475(iVar0))
	{
		return;
	}
	iVar2 = func_476(iVar1);
	func_834(iVar2, iVar0, Param0);
	func_493(MISC::GET_GAME_TIMER());
	func_494(1);
}

void func_525()
{
	if (func_33(268435456))
	{
		return;
	}
	func_835(4);
	func_126(268435456);
}

int func_526(int iParam0)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			return func_836(iParam0);
		case -19759302:
			return func_837(iParam0);
		default:
			break;
	}
	return 0;
}

void func_527()
{
	func_838(Local_2026.f_2);
	func_126(262144);
}

int func_528(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_2026.f_10 == -19759302)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (bParam4)
			{
				if ((func_202(iVar0, &Local_17, 32) || func_202(iVar0, &Local_17, 65536)) || func_202(iVar0, &Local_17, 131072))
				{
				}
				else if (!func_438(iVar0, &iVar1, 1, 0))
				{
				}
				else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), vParam0) > fParam3)
				{
				}
				else
				{
					return 1;
				}
				iVar0++;
				Jump @330; //curOff = 161
				if (Local_2026.f_10 == -409129282)
				{
					iVar2 = 0;
					while (iVar2 < 4)
					{
						if (!func_203(iVar2, &Local_17, 128))
						{
						}
						else if (bParam4)
						{
							if ((func_203(iVar2, &Local_17, 2) || func_203(iVar2, &Local_17, 256)) || func_203(iVar2, &Local_17, 512))
							{
							}
							else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar2 /*5*/])))
							{
							}
							else
							{
								iVar3 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar2 /*5*/]));
								if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam0) > fParam3)
								{
								}
								else
								{
									return 1;
								}
							}
							iVar2++;
							return 0;
						}
					}
				}
			}
		}
	}

void func_529()
{
	func_839(Local_2026.f_2);
	func_126(524288);
}

int func_530(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	var uVar7;

	if (!func_33(1) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_34))
	{
		return 0;
	}
	if (func_33(8192))
	{
		iVar0 = Local_2026.f_620;
		iVar1 = Local_2026.f_626;
	}
	else
	{
		iVar0 = Local_2026.f_619;
		iVar1 = Local_2026.f_625;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		return 0;
	}
	if (func_332(iVar1, Global_35))
	{
		if (func_258(1, 255) && func_363(255) == 0)
		{
			*uParam0 = 0f;
			return 1;
		}
		vVar2 = { VOLUME::_0xF70F00013A62F866(iVar0) };
		fVar5 = BUILTIN::VDIST(vVar2, Global_35);
		if (func_836(255) || func_837(255))
		{
			if ((func_840(Global_34, 6) && func_841(Global_34, &uVar6, &uVar7)) && func_332(iVar0, Global_35))
			{
				*uParam0 = 0f;
				return 1;
			}
			else if (fVar5 < 6f || func_332(iVar0, Global_35))
			{
				*uParam0 = 0.55f;
				return 1;
			}
			else if (fVar5 < 20f)
			{
				*uParam0 = 1.25f;
				return 1;
			}
		}
	}
	return 0;
}

int func_531()
{
	struct<2> Var0;

	if (func_32())
	{
		return 0;
	}
	Var0 = { func_619() };
	if (!func_28(Var0))
	{
		return 0;
	}
	if (!func_29(Local_2026.f_2, Var0))
	{
		return 0;
	}
	return 1;
}

void func_532(int iParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 354, true);
	(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_4 = MISC::GET_FRAME_COUNT();
}

int func_533(bool bParam0)
{
	if (func_370())
	{
		return 0;
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 8388608))
	{
		return 0;
	}
	if (!func_346())
	{
		return 0;
	}
	if (Local_2026.f_632 < 0f)
	{
		return 0;
	}
	if (!func_842(Local_2026.f_632, 0, 0, 0))
	{
		return 0;
	}
	if (bParam0 && func_349(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_534(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return (func_467(iParam0, 1) && !func_467(iParam0, 2));
}

bool func_535(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return func_467(iParam0, 2);
}

bool func_536()
{
	if (func_843(4))
	{
		return Global_1939178->f_21;
	}
	return func_844();
}

var func_537(int iParam0, int iParam1)
{
	return func_845(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_538(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<8> Var0;

	Var0.f_6 = iParam1;
	Var0.f_7 = iParam2;
	Var0.f_4 = iParam0;
	Var0.f_5 = Local_2026;
	func_846(&Var0, uParam3);
}

void func_539(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_796(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_797(Var0))
	{
		return;
	}
	if (func_585(Var0))
	{
		return;
	}
	func_799(iParam0, 2);
	func_798(iParam0, 3);
	func_798(iParam0, 6);
	func_847(Var0);
}

void func_540(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_796(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (!func_797(Var0))
	{
		return;
	}
	if (func_585(Var0))
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
	func_799(iParam0, 3);
	func_848(Var0, 1, bParam2, bParam3);
}

void func_541(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_1900670->f_1 == 2 || Global_1900670->f_1 == 5) || Global_1900670->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_21() != -1)
	{
		iVar0 = 1;
	}
	uVar1 = func_463(Global_1893575->f_2);
	Global_1900670->f_1 = 3;
	Global_1900670->f_2 = 0;
	Global_1900670->f_7 = iVar0;
	Global_1900670->f_8 = iParam0;
	Global_1900670->f_9 = uVar1;
	if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
	{
		func_465(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
	}
	else if (Global_1900670->f_11 != -1)
	{
		func_465(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
	}
}

void func_542()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
}

void func_543(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_41(Local_361[Local_2026.f_634 /*52*/], 1048576))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, 0);
	}
	func_320(Local_361[Local_2026.f_634 /*52*/], 128);
	func_320(Local_361[Local_2026.f_634 /*52*/], 1048576);
	func_320(Local_361[Local_2026.f_634 /*52*/], 256);
	func_320(Local_361[Local_2026.f_634 /*52*/], 512);
	iVar0 = (Local_361[Local_2026.f_634 /*52*/])->f_46;
	(Local_361[Local_2026.f_634 /*52*/])->f_46 = -1;
	Local_2026.f_636 = -1;
	if (!bParam0)
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && iVar0 != -1) && func_849(iVar0, &iVar2)) && ENTITY::GET_ENTITY_MODEL(iVar2) == func_184())
	{
		PED::_0xED00D72F81CF7278(iVar2, 0, 0);
		ENTITY::DETACH_ENTITY(iVar2, true, true);
		TASK::_0x9EBD34958AB6F824(iVar2);
		TASK::TASK_CARRIABLE(iVar2, -2141086268, iVar1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iVar2, true);
		MISC::_0x7FA58CED69405F9A(iVar2, 3);
	}
}

char* func_544()
{
	return "giver";
}

char* func_545()
{
	return "RECIEVER";
}

char* func_546(int iParam0)
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

struct<4> func_547(int iParam0, char* sParam1, char* sParam2)
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

int func_548(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

float func_549(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_550(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&(Local_361[iParam0 /*52*/])->f_2.f_4[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_551(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&(Local_361[iParam0 /*52*/])->f_2.f_6[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_552()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (PED::_IS_PED_CARRYING(iVar1))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::_0xB07D3185E11657A5(iVar0)) && ENTITY::GET_ENTITY_MODEL(iVar0) == func_184())
		{
			return 1;
		}
	}
	return 0;
}

int func_553(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_7 != iVar1)
		{
		}
		else if (func_202(iVar0, &Local_17, 32))
		{
		}
		else if (!bParam0)
		{
			if (func_202(iVar0, &Local_17, 65536) || func_202(iVar0, &Local_17, 131072))
			{
			}
			else if (!func_850(iVar0, 255))
			{
			}
			else
			{
				return 1;
			}
			iVar0++;
			return 0;
		}
	}

bool func_554(int iParam0)
{
	return func_840(iParam0, 6);
}

int func_555(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_556(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_557(int iParam0, var uParam1)
{
	return (uParam1->f_16[iParam0 /*12*/])->f_2;
}

void func_558(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (Local_2026.f_10 != -19759302)
	{
		return;
	}
	if (!func_202(iParam0, &Local_17, 1024))
	{
		return;
	}
	if (func_202(iParam0, &Local_17, 32))
	{
		func_851(iParam0);
		func_852(iParam0);
		func_853(iParam0);
		return;
	}
	if ((((Local_17.f_16[iParam0 /*12*/])->f_2 == -1088690539 || (Local_17.f_16[iParam0 /*12*/])->f_2 == 0) || !func_438(iParam0, &iVar0, 1, 1)) || (!PED::_IS_PED_HOGTIED(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false)))
	{
		func_851(iParam0);
		func_852(iParam0);
		func_853(iParam0);
		return;
	}
	iVar3 = func_854(iVar0, &uVar1, &iVar2);
	iVar5 = ENTITY::_0x61914209C36EFDDB(iVar0);
	if ((func_33(1) && func_855(&Local_2026, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_41(Local_361[Local_2026.f_634 /*52*/], 64))) && ((Local_17.f_16[iParam0 /*12*/])->f_7 == PLAYER::PLAYER_ID() || (Local_17.f_16[iParam0 /*12*/])->f_7 == 255))
	{
		if (iVar5 == 3 && PED::_IS_PED_HOGTIED(iVar0))
		{
			bVar4 = PED::_0x3D9F958834AB9C30(iVar0) == Global_34;
		}
		else if (((iVar5 == 1 && !ENTITY::IS_ENTITY_DEAD(Global_34)) && PED::_IS_PED_HOGTYING(Global_34)) && func_856(Global_34) == iVar0)
		{
			bVar4 = true;
		}
	}
	if (Local_17.f_16[iParam0 /*12*/])->f_7 == PLAYER::PLAYER_ID()
	{
		if (((func_202(iParam0, &Local_17, 65536) && func_41(Local_361[Local_2026.f_634 /*52*/], 32)) || (func_202(iParam0, &Local_17, 131072) && func_41(Local_361[Local_2026.f_634 /*52*/], 64))) || ((iVar3 == 0 && func_33(1)) && func_855(&Local_2026, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_41(Local_361[Local_2026.f_634 /*52*/], 64))))
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
		func_851(iParam0);
		func_852(iParam0);
		func_853(iParam0);
		return;
	}
	func_857(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_34) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, Global_34))
	{
		func_858(iParam0);
	}
	else
	{
		func_852(iParam0);
	}
	if (((((func_33(1) && !func_850(iParam0, 255)) && func_855(&Local_2026, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_33(8192))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0)) && iVar5 != 9) && iVar5 != 8)
	{
		func_859(iParam0);
	}
	else
	{
		func_853(iParam0);
	}
}

void func_559(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_272(iParam0, 64))
	{
		if ((Local_17.f_16[iParam0 /*12*/])->f_2 != 401658241 && func_272(iParam0, 33554432))
		{
			bVar0 = true;
		}
		if ((!bVar0 && PED::IS_PED_HUMAN(iParam1)) && !func_202(iParam0, &Local_17, 32768))
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_860(iParam1));
			PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_860(iParam1)));
		}
		func_273(iParam0, 64);
	}
	if (!func_272(iParam0, 67108864) && func_33(1))
	{
		if ((Local_17.f_16[iParam0 /*12*/])->f_2 != 401658241 && func_272(iParam0, 33554432))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			iVar1 = func_861(iParam0, iParam1, 1);
			if (iVar1 != 0)
			{
				PLAYER::_0x7C32191D9FB2BDEA(iVar1);
			}
		}
		if (!bVar0)
		{
			switch (func_557(iParam0, &Local_17))
			{
				case 1095997463:
					switch (Local_2026.f_10)
					{
						case -409129282:
							MISC::_0xF63FA29D4A9ACA86(iParam1, func_862());
							PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_862()));
							func_273(iParam0, 2097152);
							break;
						case -19759302:
							MISC::_0xF63FA29D4A9ACA86(iParam1, func_863());
							PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_863()));
							func_273(iParam0, 2097152);
							break;
					}
					break;
				default:
					if ((PED::IS_PED_HUMAN(iParam1) && (Local_17.f_16[iParam0 /*12*/])->f_2 != 1566032419) && !func_202(iParam0, &Local_17, 32768))
					{
						MISC::_0xF63FA29D4A9ACA86(iParam1, func_864());
						PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_864()));
						func_273(iParam0, 2097152);
					}
					break;
			}
		}
		func_273(iParam0, 67108864);
	}
}

void func_560(int iParam0, int iParam1)
{
}

void func_561(int iParam0, int iParam1)
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

	if (func_202(iParam0, &Local_17, 2))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_5) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((Local_17.f_16[iParam0 /*12*/])->f_5))
		{
			iVar0 = NETWORK::_NET_TO_ANIM_SCENE((Local_17.f_16[iParam0 /*12*/])->f_5);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
			}
		}
		return;
	}
	if (func_557(iParam0, &Local_17) != 1095997463)
	{
		return;
	}
	if (func_865(iParam0, &Local_17) != 22)
	{
		return;
	}
	if (!func_202(iParam0, &Local_17, 1))
	{
		return;
	}
	if (func_202(iParam0, &Local_17, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_5))
	{
		return;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE((Local_17.f_16[iParam0 /*12*/])->f_5);
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iVar0, 0) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar0, 1, 0))
	{
		return;
	}
	if (func_398(iParam0, 0))
	{
		return;
	}
	sVar2 = func_544();
	if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar0, sVar2, false)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, sVar2, iParam1, 0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, func_546(0), true);
		func_866(iParam0, iVar0, iParam1);
	}
	ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iVar0, &vVar3, &vVar6, 2);
	if (BUILTIN::VDIST(vVar3, ENTITY::GET_ENTITY_COORDS(iParam1, false, false)) > 1f)
	{
		func_866(iParam0, iVar0, iParam1);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, 0) && !ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0))
	{
		iVar9 = ANIMSCENE::_GET_ANIM_SCENE_PED(iVar0, func_545(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			if (!PED::IS_PED_A_PLAYER(iVar9))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar0, func_545(), iVar9);
			}
			else if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9) != (Local_17.f_16[iParam0 /*12*/])->f_7)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar0, func_545(), iVar9);
			}
			return;
		}
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((Local_17.f_16[iParam0 /*12*/])->f_7))
		{
			return;
		}
		iVar10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX((Local_17.f_16[iParam0 /*12*/])->f_7);
		if (func_41(Local_361[iVar10 /*52*/], 256))
		{
			return;
		}
		if (!func_41(Local_361[iVar10 /*52*/], 1048576))
		{
			return;
		}
		iVar1 = PLAYER::GET_PLAYER_PED((Local_17.f_16[iParam0 /*12*/])->f_7);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_545(), iVar1, 0);
		vVar11 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
		func_391(&vVar11, 0f);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		vVar6 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam1) };
		vVar3 = { vVar3.x, vVar3.y, vVar11.z };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, vVar3, vVar6, 2);
		if (func_867(iParam1, &iVar14))
		{
			PED::_0xED00D72F81CF7278(iVar14, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar14, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_868(), iVar14, 0);
		}
		ANIMSCENE::START_ANIM_SCENE(iVar0);
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, 0))
	{
		func_538(6, PLAYER::PLAYER_ID(), iParam0, func_537(0, 8));
	}
}

void func_562(int iParam0, int iParam1)
{
	if ((Local_17.f_16[iParam0 /*12*/])->f_2 == -1088690539 || (Local_17.f_16[iParam0 /*12*/])->f_2 == 401658241)
	{
		return;
	}
	if (!func_202(iParam0, &Local_17, 33554432))
	{
		return;
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		return;
	}
	if (func_272(iParam0, 32))
	{
		return;
	}
	func_869(iParam1, 0);
	func_273(iParam0, 32);
}

void func_563(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_41((*uParam3)[iVar0 /*52*/], 2))
	{
		return;
	}
	if (func_870(iParam1))
	{
		func_115((*uParam3)[iVar0 /*52*/], iParam4);
		return;
	}
	if (func_871(iParam1))
	{
		func_115((*uParam3)[iVar0 /*52*/], iParam4);
		return;
	}
	if (func_872(iParam1))
	{
		func_115((*uParam3)[iVar0 /*52*/], iParam4);
		return;
	}
	if (func_873(iParam1, &(iParam4->f_171)))
	{
		func_115((*uParam3)[iVar0 /*52*/], iParam4);
		return;
	}
	if (func_874(uParam2, uParam3))
	{
		func_115((*uParam3)[iVar0 /*52*/], iParam4);
		return;
	}
}

void func_564(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (!func_272(iParam0, 8192) || func_272(iParam0, 16))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		func_439(iParam0, 16384);
		return;
	}
	fVar0 = func_549(iParam1, Global_35, 1);
	if (fVar0 > 25f)
	{
		func_439(iParam0, 16384);
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		func_439(iParam0, 16384);
		return;
	}
	if (!PED::IS_PED_HEADTRACKING_PED(iParam1, Global_34) || fVar0 > 12f)
	{
		fVar1 = 180f;
		if ((Local_17.f_16[iParam0 /*12*/])->f_2 == 824585797 && !func_33(256))
		{
			fVar1 = 300f;
		}
		if (!func_875(iParam1, Global_34, fVar1))
		{
			func_439(iParam0, 16384);
			return;
		}
		iVar2 = func_268(Global_34);
		if (AITRANSPORT::_0xDC44F405A6B98D03(Global_34, 0))
		{
			iVar2 = PED::_0x849BD6C6314793D0(Global_34);
		}
		if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iVar2, 17))
		{
			func_439(iParam0, 16384);
			return;
		}
	}
	func_273(iParam0, 16384);
}

void func_565(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;

	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		if (func_41(Local_361[Local_2026.f_634 /*52*/], 64))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case 1566032419:
			if (!bVar0 && !bVar1)
			{
				return;
			}
			if (func_202(iParam0, &Local_17, 2048) != bVar1)
			{
				return;
			}
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 4194304) && !func_876(iParam0, 8, &Local_361, 1))
			{
				func_877(iParam0, iParam1, 8, &Local_361, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
				func_878(iParam0, 8, Local_361[Local_2026.f_634 /*52*/]);
				func_320(Local_361[Local_2026.f_634 /*52*/], 4194304);
				return;
			}
			fVar2 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
			if (func_876(iParam0, 6, &Local_361, 1))
			{
				if (fVar2 > 60f)
				{
					func_878(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
					func_878(iParam0, 9, Local_361[Local_2026.f_634 /*52*/]);
				}
				else if (fVar2 < 18f)
				{
					switch (Local_2026.f_10)
					{
						case -409129282:
							bVar3 = func_552();
							break;
						case -19759302:
							bVar3 = func_879(1);
							break;
					}
					if (bVar3)
					{
						func_877(iParam0, iParam1, 9, &Local_361, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
					}
					return;
				}
			}
			if (fVar2 > 20f)
			{
				return;
			}
			func_877(iParam0, iParam1, 6, &Local_361, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
			break;
		case -2133983324:
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 38 || (Local_17.f_16[iParam0 /*12*/])->f_3 == 39)
			{
				func_878(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
				func_878(iParam0, 11, Local_361[Local_2026.f_634 /*52*/]);
				func_878(iParam0, 1, Local_361[Local_2026.f_634 /*52*/]);
			}
			break;
		case 824585797:
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 7)
			{
				func_878(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
				func_878(iParam0, 11, Local_361[Local_2026.f_634 /*52*/]);
				func_878(iParam0, 1, Local_361[Local_2026.f_634 /*52*/]);
			}
			break;
	}
}

int func_566(int iParam0, var uParam1)
{
	return &(uParam1->f_16[iParam0 /*12*/]);
}

void func_567(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_202(iParam0, uParam1, 32))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), uParam3->f_10.f_18);
		return;
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 != 1566032419)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), uParam3->f_10.f_15);
		return;
	}
	if (func_202(iParam0, uParam1, 2048))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), uParam3->f_10.f_16);
		return;
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), uParam3->f_10.f_17);
		return;
	}
}

void func_568(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((((Local_17.f_16[iParam0 /*12*/])->f_2 == joaat("driver") || (Local_17.f_16[iParam0 /*12*/])->f_2 == 824585797) || (Local_17.f_16[iParam0 /*12*/])->f_2 == -193064196) || (Local_17.f_16[iParam0 /*12*/])->f_2 == -522830230)
	{
		iVar0 = (Local_17.f_16[iParam0 /*12*/])->f_11;
		if (iVar0 < 0 || iVar0 >= 3)
		{
			return;
		}
		iVar1 = PED::_0xEF2E6F870783369B(iParam1, 0);
		if (iVar1 == &Local_2026.f_621[iVar0])
		{
			return;
		}
		PED::_0xFC3DB99C8144CD81(iParam1, &(Local_2026.f_621[iVar0]), 0, 0, 0);
	}
}

void func_569(int iParam0, var uParam1, var uParam2, float fParam3)
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

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_566(iParam0, uParam1);
	iVar2 = func_698(iParam0, uParam1);
	vVar4 = { fParam3->f_10.f_2 };
	fVar7 = 10f;
	if (func_579(iVar0))
	{
		return;
	}
	iVar10 = func_882((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1);
	switch (func_865(iParam0, uParam1))
	{
		case 2:
			func_883(iVar2);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar2)
			{
				return;
			}
			if (func_33(256))
			{
				return;
			}
			fVar8 = 4.5f;
			if (func_884((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, fParam3))
			{
				iVar3 = NETWORK::NET_TO_VEH(&(uParam1->f_3[((uParam1->f_16[iParam0 /*12*/])->f_11 - 1) /*4*/]));
				fVar9 = func_885(((uParam1->f_16[iParam0 /*12*/])->f_11 - 1), (uParam1->f_16[iParam0 /*12*/])->f_11, fParam3);
				func_886((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar0, iVar3, fVar8, iVar10, fVar9);
				return;
			}
			if (func_55(uParam1, 65536))
			{
				func_887((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar0, fVar8, iVar10, fParam3);
				return;
			}
			func_888((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar0, vVar4, fVar8, iVar10, fParam3, fVar7);
			break;
		case 3:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar2)
			{
				return;
			}
			func_877(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
			if (func_33(256))
			{
				func_889(iVar1);
				return;
			}
			fVar8 = 10f;
			if (func_890(iVar0))
			{
				fVar8 = 0f;
			}
			iVar11 = func_891(iVar2, uParam2, 1120403456 /* Float: 100f */);
			if (func_884((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, fParam3))
			{
				iVar3 = NETWORK::NET_TO_VEH(&(uParam1->f_3[((uParam1->f_16[iParam0 /*12*/])->f_11 - 1) /*4*/]));
				fVar9 = func_885(((uParam1->f_16[iParam0 /*12*/])->f_11 - 1), (uParam1->f_16[iParam0 /*12*/])->f_11, fParam3);
				func_892(((uParam1->f_16[iParam0 /*12*/])->f_11 - 1), iVar1, iVar11, iVar0, iVar3, fVar8, iVar10, fVar9);
				return;
			}
			if (func_55(uParam1, 65536))
			{
				func_893((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar11, iVar0, fVar8, iVar10, fParam3);
				return;
			}
			func_894((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar11, iVar0, vVar4, fVar8, iVar10, fParam3, fVar7);
			break;
		case 4:
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			if (func_55(uParam1, 65536))
			{
				func_893((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar11, iVar0, 10f, iVar10, fParam3);
				return;
			}
			func_894((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar11, iVar0, vVar4, 0f, iVar10, fParam3, fVar7);
			break;
		case 1:
			if (!func_895(iVar0, -1, 1))
			{
				return;
			}
			if (PED::IS_PED_ON_VEHICLE(iVar2, false))
			{
				func_896(iVar1, ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 20f, 16777216, 4);
			}
			func_897(iVar1, iVar0, -1, 1073741824 /* Float: 2f */, -1, 1);
			break;
	}
}

void func_570(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_566(iParam0, uParam1);
	iVar2 = func_698(iParam0, uParam1);
	iVar4 = 16777217;
	switch (func_865(iParam0, uParam1))
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
			iVar3 = func_891(iVar2, &Local_361, 1120403456 /* Float: 100f */);
			if (iVar3 == func_898())
			{
				iVar3 = 0;
			}
			if (func_899(iVar1, iVar4, iVar3))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			}
			break;
		case 34:
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			func_900(iVar1, 0, 1);
			break;
		case 36:
			func_896(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 100f, 0, 4);
			break;
	}
}

void func_571(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	iVar2 = func_566(iParam0, uParam1);
	switch (func_865(iParam0, uParam1))
	{
		case 14:
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				return;
			}
			func_897(iVar2, iVar0, -2, 1073741824 /* Float: 2f */, -1, 0);
			break;
		case 15:
			func_883(iVar1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			break;
		case 16:
			func_900(iVar2, 0, 0);
			break;
	}
}

void func_572(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;

	iVar1 = func_566(iParam0, uParam1);
	func_578(iParam0, &iVar0);
	iVar2 = func_698(iParam0, uParam1);
	if (func_202(iParam0, uParam1, 32))
	{
		if ((func_55(&Local_17, 524288) && iParam0 == Local_17.f_328) && (func_55(&Local_17, 16777216) || func_55(&Local_17, 33554432)))
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
	if (func_202(iParam0, &Local_17, 67108864))
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
	if (((Local_17.f_16[iParam0 /*12*/])->f_3 != 0 && (Local_17.f_16[iParam0 /*12*/])->f_3 != 17) && (Local_17.f_16[iParam0 /*12*/])->f_3 != 18)
	{
		if (PED::GET_PED_CONFIG_FLAG(iVar2, 277, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar2, 277, false);
		}
	}
	switch (func_865(iParam0, uParam1))
	{
		case 25:
			if (!func_555(iVar2, -1098463898))
			{
				iVar5 = func_901(iParam0);
				if (iVar5 != 0)
				{
					func_902(iVar1, iVar5, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
				}
				else
				{
					func_903(iVar1, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
				}
			}
			func_904(iParam0, uParam1, 26);
			break;
		case 26:
			func_905(iVar1);
			func_904(iParam0, uParam1, 25);
			break;
		case 17:
			func_883(iVar2);
			if (func_55(uParam1, 16))
			{
				func_877(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
				if (!func_272(iParam0, 1048576) && func_906(iVar2))
				{
					func_273(iParam0, 1048576);
				}
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
			break;
		case 18:
			func_877(iParam0, iVar2, 1, uParam2, 0, 0, 1, 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
			{
				return;
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			func_899(iVar1, 16777216, 0);
			break;
		case 20:
			func_877(iParam0, iVar2, 4, uParam2, 0, 0, 1, 0);
			if (func_202(iParam0, &Local_17, 16384))
			{
				func_877(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
			}
			if (PED::_0xB7DBB2986B87E230(iVar2, 0.5f))
			{
				func_877(iParam0, iVar2, 5, uParam2, 0, 0, 1, 0);
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			if (!func_907(uParam2, iParam0, &iVar3))
			{
				iVar3 = func_891(iVar2, uParam2, 25f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				func_908(iVar1, iVar3);
			}
			func_908(iVar1, 0);
			break;
		case 19:
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return;
			}
			if (!func_555(iVar2, 518218985))
			{
				iVar3 = func_891(iVar2, uParam2, 25f);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_909(&iVar2, 10000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			if (func_896(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2.2f, 256, 6) && func_910(iVar2, 2.2f, &iVar4))
			{
				TASK::_0x3923EC958249657D(iVar2, iVar4, -1082130432);
			}
			break;
		case 21:
			if (func_202(iParam0, &Local_17, 16384) && !func_876(iParam0, 10, &Local_361, 0))
			{
				if (func_911(iVar2, 1095997463))
				{
					func_912(iParam0, 10, Local_361[Local_2026.f_634 /*52*/]);
				}
				else
				{
					func_877(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
				}
			}
			else
			{
				func_877(iParam0, iVar2, 2, uParam2, 0, 0, 1, 1);
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			if (func_202(iParam0, uParam1, 4))
			{
				return;
			}
			iVar4 = func_891(iVar2, &Local_361, 1120403456 /* Float: 100f */);
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
			if (func_896(iVar1, vVar6, 200f, 1, 3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					TASK::_0x3923EC958249657D(iVar2, iVar4, -1082130432);
				}
			}
			break;
		case 27:
			func_913(iVar1);
			break;
		case 22:
			PED::SET_PED_CONFIG_FLAG(iVar2, 297, true);
			PED::SET_PED_COMBAT_MOVEMENT(iVar2, 0);
			PED::SET_PED_CONFIG_FLAG(iVar2, 121, true);
			PED::_0xEAE3B5B019C8D23F(iVar2, 29);
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			func_877(iParam0, iVar2, 4, uParam2, 0, 0, 1, 0);
			if (func_202(iParam0, &Local_17, 16384))
			{
				func_877(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
			}
			if (PED::_0xB7DBB2986B87E230(iVar2, 0.5f))
			{
				func_877(iParam0, iVar2, 5, uParam2, 0, 0, 1, 1);
			}
			if ((uParam1->f_16[iParam0 /*12*/])->f_7 != 255)
			{
				func_877(iParam0, iVar2, 3, uParam2, PLAYER::GET_PLAYER_PED((uParam1->f_16[iParam0 /*12*/])->f_7), 0, 1, 0);
			}
			else if (!func_555(iVar2, -1519143300))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_5) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(NETWORK::_NET_TO_ANIM_SCENE((uParam1->f_16[iParam0 /*12*/])->f_5), 0))
				{
					return;
				}
				iVar3 = func_891(iVar2, uParam2, 25f);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					func_908(iVar1, iVar3);
				}
				func_908(iVar1, 0);
				return;
			}
			break;
		case 23:
			if (!func_914(iVar2))
			{
				return;
			}
			func_877(iParam0, iVar2, 3, uParam2, 0, 0, 1, 0);
			func_915(iVar1);
			break;
		case 28:
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
			break;
	}
}

void func_573(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_566(iParam0, uParam1);
	iVar2 = func_698(iParam0, uParam1);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		return;
	}
	iVar3 = NETWORK::NET_TO_PED((uParam1->f_16[iParam0 /*12*/])->f_1);
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		return;
	}
	switch (func_865(iParam0, uParam1))
	{
		case 29:
			if (func_55(uParam1, 16))
			{
				iVar4 = func_891(iVar2, uParam2, 1120403456 /* Float: 100f */);
				func_916(iVar1, iVar4);
			}
			else
			{
				iVar4 = func_917(iVar2, 1120403456 /* Float: 100f */);
				func_918(iVar1, iVar4, 5000, 0, 31, 0);
			}
			if (func_919(iParam0, iVar2, uParam1))
			{
				if (func_555(iVar2, 1435919172))
				{
					TASK::CLEAR_PED_TASKS(iVar2, 1, 0);
				}
			}
			else
			{
				func_920(iVar1, iVar0, (uParam1->f_16[iParam0 /*12*/])->f_8, 1.75f);
			}
			break;
		case 30:
			func_900(iVar1, 0, 1);
			break;
	}
}

void func_574(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_566(iParam0, uParam1);
	iVar2 = func_698(iParam0, uParam1);
	iVar4 = (Local_17.f_16[iParam0 /*12*/])->f_7;
	switch (func_865(iParam0, uParam1))
	{
		case 6:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) == iVar2)
			{
				return;
			}
			func_897(iVar1, iVar0, 0, 1073741824 /* Float: 2f */, -1, 1);
			break;
		case 7:
			if (!func_921(iVar2))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iVar2, joaat("weapon_shotgun_doublebarrel"), 0, 0))
				{
					func_922(iParam0, joaat("weapon_shotgun_doublebarrel"), 1);
				}
				else
				{
					func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			break;
		case 8:
			if (!func_921(iVar2))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iVar2, joaat("weapon_shotgun_doublebarrel"), 0, 0))
				{
					func_922(iParam0, joaat("weapon_shotgun_doublebarrel"), 1);
				}
				else
				{
					func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			if (!func_876(iParam0, 9, &Local_361, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_911(iVar2, 0))
				{
					func_877(iParam0, iVar2, 9, &Local_361, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 9, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_923(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 9:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			func_905(iVar1);
			if (!func_876(iParam0, 6, &Local_361, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_911(iVar2, 0))
				{
					func_877(iParam0, iVar2, 6, &Local_361, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_909(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 10:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			if (!func_555(iVar2, 1630799643))
			{
				iVar5 = PLAYER::GET_PLAYER_PED((Local_17.f_16[iParam0 /*12*/])->f_7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar5) || func_924(iVar2, &iVar5, &uVar6, 1103626240 /* Float: 25f */))
				{
					if (func_921(iVar2))
					{
						func_925(iVar1, iVar5);
					}
					else
					{
						func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
					}
				}
				else
				{
					func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			if (!func_876(iParam0, 11, &Local_361, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_911(iVar2, 0))
				{
					func_877(iParam0, iVar2, 11, &Local_361, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 11, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_909(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
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
				if ((Local_361[iVar7 /*52*/])->f_47 > 44000 && !func_876(iParam0, 0, &Local_361, 0))
				{
					if (!func_911(iVar2, 0))
					{
						func_877(iParam0, iVar2, 0, &Local_361, iVar3, 0, 0, 0);
					}
				}
				else if ((Local_361[iVar7 /*52*/])->f_47 > 35000 && !func_876(iParam0, 1, &Local_361, 0))
				{
					if (func_911(iVar2, 0))
					{
						func_912(iParam0, 1, Local_361[Local_2026.f_634 /*52*/]);
					}
					else
					{
						func_877(iParam0, iVar2, 1, &Local_361, iVar3, 0, 0, 0);
					}
				}
			}
			break;
		case 11:
			func_877(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
			func_900(iVar1, 1, 0);
			break;
		case 12:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iVar2)
			{
				return;
			}
			func_926(iVar1, iVar0);
			break;
	}
}

void func_575(int iParam0, var uParam1, var uParam2, float fParam3)
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

	iVar0 = func_698(iParam0, uParam1);
	iVar1 = func_566(iParam0, uParam1);
	if (func_202(iParam0, uParam1, 2048))
	{
		iVar6 = 1;
		iVar2 = fParam3->f_620;
		if (VOLUME::_DOES_VOLUME_EXIST(iVar2))
		{
			vVar3 = { VOLUME::_0xF70F00013A62F866(iVar2) };
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
			vVar3 = { VOLUME::_0xF70F00013A62F866(iVar2) };
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
	switch (func_865(iParam0, uParam1))
	{
		case 31:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			if (func_921(iVar0) && !func_272(iParam0, 32768))
			{
				func_883(iVar0);
				return;
			}
			if (!func_272(iParam0, 16))
			{
				if (!func_876(iParam0, 7, &Local_361, 0) && func_927(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 80f, &iVar7, 20f, iVar6, 1))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 0))
					{
						PED::_0xEC6935EBE0847B90(iVar0, func_928(iVar7));
						TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
					}
					if (func_929(iVar1, iVar8, PLAYER::GET_PLAYER_PED(iVar7), 1))
					{
						func_912(iParam0, 7, Local_361[Local_2026.f_634 /*52*/]);
					}
					return;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_232(iVar8), func_930(iVar8), 1))
				{
					return;
				}
				if (func_931(iVar0, 20f, &iVar7))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 0))
					{
						PED::_0xEC6935EBE0847B90(iVar0, func_928(iVar7));
						TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
					}
					func_905(iVar1);
					return;
				}
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				return;
			}
			iVar9 = func_901(iParam0);
			if (iVar9 == 0)
			{
				func_903(iVar1, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
			}
			else
			{
				func_902(iVar1, iVar9, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
			}
			break;
		case 33:
			if (Local_17.f_328 == -1)
			{
				return;
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 1))
			{
				PED::_0xA3A9299C4F2ADB98(iVar0);
				TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
				return;
			}
			if (Local_2026.f_10 == -19759302)
			{
				if (func_438(Local_17.f_328, &iVar13, 0, 0))
				{
					vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar13, false, false) };
				}
			}
			else if (Local_2026.f_10 == -409129282)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[Local_17.f_328 /*5*/])))
				{
					iVar14 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[Local_17.f_328 /*5*/]));
					vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar14, false, false) };
				}
			}
			if (func_382(vVar10))
			{
				return;
			}
			if (func_555(iVar0, 242628503))
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
			func_932(iVar0, &iVar15, 0, 0, 1, 1);
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

void func_576(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar7;

	iVar0 = func_698(iParam0, uParam1);
	iVar1 = func_566(iParam0, uParam1);
	if (!func_876(iParam0, 0, &Local_361, 0) && PED::IS_PED_IN_COMBAT(iVar0, 0))
	{
		func_877(iParam0, iVar0, 0, &Local_361, 0, 0, 1, 1);
	}
	switch (func_865(iParam0, uParam1))
	{
		case 44:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
			if (func_933(iParam0, &iVar2))
			{
				func_934(iVar1, ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 200f, 0, 0);
			}
			else
			{
				func_934(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 200f, 0, 0);
			}
			break;
		case 45:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			if (func_555(iVar0, 518218985))
			{
				return;
			}
			iVar3 = func_891(iVar0, &Local_361, 200f);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				bVar7 = func_935(iVar1, iVar3, 4, 200f, 18874368);
			}
			else
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
				bVar7 = func_896(iVar1, vVar4, 200f, 18874368, 4);
			}
			if (bVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					TASK::_0x3923EC958249657D(iVar0, iVar3, -1082130432);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
				{
					TASK::_0xE8F1A5B4CED3725A(iVar0, VOLUME::_0xF70F00013A62F866(Local_2026.f_619), -1082130432);
				}
			}
			break;
	}
}

void func_577(int iParam0, var uParam1, var uParam2, float fParam3)
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

	iVar0 = func_698(iParam0, uParam1);
	iVar1 = func_566(iParam0, uParam1);
	bVar3 = func_578(iParam0, &iVar2);
	switch (func_865(iParam0, uParam1))
	{
		case 38:
			if (func_555(iVar0, -1098463898) || PED::IS_PED_ON_MOUNT(iVar0))
			{
				return;
			}
			if (func_901(iParam0) != 0)
			{
				return;
			}
			if (func_272(iParam0, 1))
			{
				if ((!bVar3 || PED::IS_PED_IN_VEHICLE(iVar0, iVar2, false)) || PED::_0x1D46B417F926D34D(iVar0))
				{
					return;
				}
				func_897(iVar1, iVar2, func_675(&Local_2026, iParam0), 1073741824 /* Float: 2f */, -1, 1);
				return;
			}
			func_903(iVar1, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
			break;
		case 39:
			if (func_555(iVar0, -1098463898))
			{
				return;
			}
			if (func_921(iVar0) && !func_272(iParam0, 32768))
			{
				func_883(iVar0);
				return;
			}
			func_902(iVar1, func_901(iParam0), (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
			break;
		case 40:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			if (!func_876(iParam0, 9, &Local_361, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_911(iVar0, -2133983324))
				{
					func_877(iParam0, iVar0, 9, &Local_361, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
					func_905(iVar1);
				}
				else
				{
					func_912(iParam0, 9, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_923(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 41:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			func_905(iVar1);
			if (!func_876(iParam0, 6, &Local_361, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_911(iVar0, -2133983324))
				{
					func_877(iParam0, iVar0, 6, &Local_361, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_909(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 42:
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			if (!func_555(iVar0, 1630799643))
			{
				iVar6 = PLAYER::GET_PLAYER_PED((Local_17.f_16[iParam0 /*12*/])->f_7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar6) || func_924(iVar0, &iVar6, &uVar7, 1103626240 /* Float: 25f */))
				{
					if (func_921(iVar0))
					{
						func_925(iVar1, iVar6);
					}
					else
					{
						func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), 1);
					}
				}
				else
				{
					func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), 1);
				}
			}
			if (!func_876(iParam0, 11, &Local_361, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_911(iVar0, -2133983324))
				{
					func_877(iParam0, iVar0, 11, &Local_361, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 11, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_909(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
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
				if ((Local_361[iVar8 /*52*/])->f_47 > 44000 && !func_876(iParam0, 0, &Local_361, 0))
				{
					if (!func_911(iVar0, -2133983324))
					{
						func_877(iParam0, iVar0, 0, &Local_361, iVar4, 0, 0, 0);
					}
				}
				else if ((Local_361[iVar8 /*52*/])->f_47 > 35000 && !func_876(iParam0, 1, &Local_361, 0))
				{
					if (func_911(iVar0, -2133983324))
					{
						func_912(iParam0, 1, Local_361[Local_2026.f_634 /*52*/]);
					}
					else
					{
						func_877(iParam0, iVar0, 1, &Local_361, iVar4, 0, 0, 0);
					}
				}
			}
			break;
		case 37:
			func_877(iParam0, iVar0, 0, &Local_361, 0, 0, 1, 1);
			func_900(iVar1, 0, 0);
			break;
		case 43:
			if (bVar3)
			{
				vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			}
			else
			{
				vVar9 = { (Local_2026.f_45[iParam0 /*6*/])->f_2 };
			}
			func_896(iVar1, vVar9, 100f, 16777216, 3);
			break;
	}
}

int func_578(int iParam0, int iParam1)
{
	if ((Local_17.f_16[iParam0 /*12*/])->f_11 < 0 || (Local_17.f_16[iParam0 /*12*/])->f_11 >= 3)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_3[(Local_17.f_16[iParam0 /*12*/])->f_11 /*4*/])))
	{
		return 0;
	}
	*iParam1 = NETWORK::NET_TO_VEH(&(Local_17.f_3[(Local_17.f_16[iParam0 /*12*/])->f_11 /*4*/]));
	return 1;
}

int func_579(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_580(vector3 vParam0, float fParam3, vector3 vParam4)
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
	func_936(&fVar0, &fVar1, fVar5);
	vVar2 = { (fVar0 + vParam0.x), (fVar1 + vParam0.y), (vParam0.z + vParam4.z) };
	return vVar2;
}

char* func_581()
{
	return "intimidated_on_feet_tough_guy";
}

void func_582(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::_0xCDB682BB47C02F0A(iParam0, 257258026);
	}
}

void func_583(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (Local_2026.f_10 != -409129282)
	{
		return;
	}
	if (func_203(iParam0, &Local_17, 2) || func_203(iParam0, &Local_17, 16))
	{
		func_937(iParam0);
		func_938(iParam0);
		func_939(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iParam0 /*5*/])))
	{
		func_937(iParam0);
		func_938(iParam0);
		func_939(iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iParam0 /*5*/]));
	iVar3 = func_854(iVar0, &iVar1, &iVar2);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && !func_940(iParam0, 255))
	{
		if ((((iVar3 != 1 || ENTITY::IS_ENTITY_DEAD(iVar1)) || !NETWORK::_0xB07D3185E11657A5(iVar1)) || !PED::IS_PED_IN_ANY_VEHICLE(iVar1, true)) || !func_114(PED::GET_VEHICLE_PED_IS_IN(iVar1, true), &Local_17, &uVar4))
		{
			func_941(iParam0);
		}
	}
	if (Local_17.f_257[iParam0 /*5*/])->f_3 == PLAYER::PLAYER_ID()
	{
		if ((func_203(iParam0, &Local_17, 256) && func_41(Local_361[Local_2026.f_634 /*52*/], 32)) || (func_203(iParam0, &Local_17, 512) && func_41(Local_361[Local_2026.f_634 /*52*/], 64)))
		{
			iVar2 = PLAYER::PLAYER_ID();
		}
	}
	if (iVar2 != PLAYER::PLAYER_ID())
	{
		func_937(iParam0);
		func_938(iParam0);
		func_939(iParam0);
		return;
	}
	func_942(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_34) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, Global_34))
	{
		func_943(iParam0);
	}
	else
	{
		func_938(iParam0);
	}
	if ((func_33(1) && !func_944(iParam0, 255)) && func_855(&Local_2026, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_41(Local_361[Local_2026.f_634 /*52*/], 64)))
	{
		func_945(iParam0);
	}
	else
	{
		func_939(iParam0);
	}
}

int func_584(int iParam0, bool bParam1)
{
	if (func_80(iParam0, 16))
	{
		if (bParam1)
		{
			return 0;
		}
		return func_80(iParam0, 32);
	}
	if (bParam1)
	{
		return 0;
	}
	if (!func_33(1))
	{
		if (!func_55(&Local_17, 268435456) || func_349(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 0;
		}
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 8388608) && !func_944(iParam0, 255))
	{
		return 0;
	}
	return 1;
}

bool func_585(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_946(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_586(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, var uParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				if (func_947(uParam0, bParam1, bParam2, bParam3, fParam4, uParam5, iVar0))
				{
					return 1;
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

int func_587(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_2[iVar0])) && BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(&(uParam0->f_2[iVar0]), false, false)) < fParam2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_588(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_382(vParam2))
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
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_948(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_948(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_949(vParam2, 1);
				iVar1 = func_950(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_948(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_948(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_948(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(80f, 150f, 17.5f, iParam1));
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
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_948(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_948(150f, 190f, 10f, iParam1));
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

void func_589(var uParam0, int iParam1, vector3 vParam2)
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
		case 51:
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
		case 46:
		case 47:
		case 48:
			if (func_949(vParam2, 1) == 5)
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
	}
}

Vector3 func_590(vector3 vParam0)
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

int func_591(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_951(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_952())
	{
		return func_951(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_951(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

Vector3 func_592(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

void func_593(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_594(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_595(struct<29> Param0, var uParam29, int iParam30)
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

void func_596(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1231609204;
		case 2:
			return -2071073626;
		case 4:
			return -137751918;
		case 8:
			return -1416703903;
		case 16:
			return 758533472;
		default:
			break;
	}
	return 0;
}

int func_598(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1070356->f_21185.f_1 || Global_1070356->f_21185.f_1 == 0) || iParam1 > Global_1070356->f_21185) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::_COPY_MEMORY(&(Global_1070356->f_21185), &uVar1, 2);
		}
		else
		{
			Global_1070356->f_21185.f_1 = iVar0;
			Global_1070356->f_21185 = iParam1;
		}
		if (AUDIO::_0x05D6195FB4D428F4(uParam0))
		{
		}
		return 1;
	}
	return 0;
}

void func_599(int iParam0)
{
	func_122(&(Local_2026.f_9), iParam0);
}

int func_600(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_540), iVar1))
		{
			if (!bParam0 || MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_4), iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_601(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_2), iVar1))
		{
			if (!bParam0 || MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_6), iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_602()
{
	return Local_17.f_299.f_1;
}

void func_603(int iParam0)
{
	(Local_361[Local_2026.f_634 /*52*/])->f_41 = iParam0;
}

void func_604(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1070356->f_7 = 1;
	if ((Global_1275573->f_21 - Global_1070356->f_9) > 2)
	{
		if (bParam2)
		{
			func_953(20f);
		}
	}
	Global_1070356->f_9 = Global_1275573->f_21;
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
			else
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_481())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::_0x634F4A0562CF19B8();
	func_954();
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

bool func_605(int iParam0)
{
	return func_113(Local_17.f_299.f_5, iParam0);
}

void func_606(int iParam0)
{
	if (func_258(2, 255))
	{
		return;
	}
	Local_2026.f_537 = func_496(iParam0);
	if (func_955(iParam0))
	{
		func_262(1);
		NETWORK::_0x007FF852DCF49DA4(func_499());
	}
	func_262(2);
}

void func_607(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_258(4, 255))
	{
		return;
	}
	if (func_258(1, 255))
	{
		if (!func_956())
		{
			return;
		}
	}
	if (!func_605(2))
	{
		return;
	}
	if (func_258(1, 255))
	{
		bVar0 = func_957();
		bVar1 = func_958(iParam0);
		func_262(16);
		if (!func_741(16, 1))
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
		func_959(iParam0);
		func_960();
	}
	func_262(4);
}

void func_608()
{
	var uVar0;
	var uVar1;
	var uVar2;

	if (!func_258(1024, 255))
	{
		return;
	}
	func_262(2048);
	uVar0 = func_227();
	uVar1 = func_961();
	uVar2 = func_962(Local_2026.f_537.f_2);
	CAM::_0x02389579A53C3276(uVar0, uVar1, uVar2, -1);
}

int func_609(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (((func_293(&Local_2026, &Var0) && func_313(&Var0, 556233122, iParam0, 0)) && func_313(&Var0, -110495140, iParam1, 0)) && func_178(Var0, 408107890, &uVar5, 0))
	{
		return uVar5;
	}
	return 0;
}

void func_610(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if ((!func_293(&Local_2026, &Var0) || !func_313(&Var0, 556233122, iParam0, 0)) || !func_313(&Var0, -110495140, iParam1, 0))
	{
		return;
	}
	iVar5 = func_497(iParam0, iParam1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (MISC::_0x8F4F050054005C27(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_2), iVar6))
		{
		}
		else if (!func_963(Var0, iVar6))
		{
		}
		else
		{
			MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_2), iVar6);
		}
		iVar6++;
	}
}

void func_611()
{
	var uVar0;
	var uVar1;
	var uVar2;

	if (!func_258(2048, 255))
	{
		return;
	}
	func_495(2048);
	uVar0 = func_227();
	uVar1 = func_961();
	uVar2 = func_962(Local_2026.f_537.f_2);
	CAM::_0x6D4D25C2137FF511(uVar0, uVar1, uVar2);
}

void func_612(int iParam0, int iParam1)
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

	func_964(iParam0, iParam1);
	if (func_258(1024, 255))
	{
		return;
	}
	if (((!func_293(&Local_2026, &Var0) || !func_313(&Var0, 556233122, iParam0, 0)) || !func_313(&Var0, -110495140, iParam1, 0)) || !func_313(&Var0, -556151360, 0, 0))
	{
		return;
	}
	fVar17 = CAM::GET_GAMEPLAY_CAM_FOV();
	func_314(Var0, 644136394, &vVar5, 0);
	func_178(Var0, 1013307464, &bVar18, 0);
	bVar19 = func_314(Var0, -2119193689, &vVar8, 0);
	bVar20 = func_311(Var0, -542873544, &fVar17, 0);
	iVar21 = PLAYER::PLAYER_PED_ID();
	if (bVar18 && ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		vVar5 = { func_965(vVar5, CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING()) };
		vVar5 = { vVar5 + CAM::GET_GAMEPLAY_CAM_COORD() };
		vVar8 = { vVar8 + CAM::GET_GAMEPLAY_CAM_ROT(2) };
		bVar19 = true;
	}
	if (!CAM::DOES_CAM_EXIST(Local_2026.f_559))
	{
		if (func_382(vVar5))
		{
			return;
		}
		Local_2026.f_559 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar5, vVar8, fVar17, false, 2);
	}
	else
	{
		if (!func_382(vVar5))
		{
			CAM::SET_CAM_COORD(Local_2026.f_559, vVar5);
		}
		if (bVar19)
		{
			CAM::SET_CAM_ROT(Local_2026.f_559, vVar8, 2);
		}
		if (bVar20)
		{
			CAM::SET_CAM_FOV(Local_2026.f_559, fVar17);
		}
	}
	if (func_178(Var0, 1234220482, &bVar22, 0) && bVar22)
	{
		return;
	}
	bVar23 = func_314(Var0, -1852046395, &vVar11, 0);
	bVar24 = func_314(Var0, -600916972, &vVar14, 0);
	if (bVar18 && ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		vVar11 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), (ENTITY::GET_ENTITY_HEADING(iVar21) + CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING()), vVar11) };
		vVar14 = { vVar14 + CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (!bVar23 || func_382(vVar11))
	{
		vVar11 = { vVar5 };
	}
	if (!bVar24)
	{
		vVar14 = { vVar8 };
	}
	if (!CAM::DOES_CAM_EXIST(Local_2026.f_560))
	{
		Local_2026.f_560 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar11, vVar14, fVar17, false, 2);
		return;
	}
	else
	{
		CAM::SET_CAM_COORD(Local_2026.f_560, vVar11);
		CAM::SET_CAM_ROT(Local_2026.f_560, vVar14, 2);
		if (bVar20)
		{
			CAM::SET_CAM_FOV(Local_2026.f_560, fVar17);
		}
	}
}

void func_613(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<5> Var3;
	var uVar8;
	var uVar11;

	if (func_258(1024, 255))
	{
		func_608();
		return;
	}
	iVar2 = 2000;
	if (((func_293(&Local_2026, &Var3) && func_313(&Var3, 556233122, iParam0, 0)) && func_313(&Var3, -110495140, iParam1, 0)) && func_313(&Var3, -556151360, 0, 0))
	{
		func_300(Var3, -1318702711, &iVar2, 0);
		if (func_178(Var3, 1234220482, &bVar0, 0) && bVar0)
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, false, 0);
		}
		else if (func_178(Var3, -19593823, &bVar1, 0) && bVar1)
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, true, iVar2, true, false, 0);
		}
		else if (func_314(Var3, -1852046395, &uVar8, 0) || func_314(Var3, -1852046395, &uVar11, 0))
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_2026.f_560, Local_2026.f_559, iVar2, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		func_126(8);
	}
}

void func_614()
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
	if (Local_17.f_328 != -1)
	{
		if (Local_2026.f_10 == -19759302)
		{
			if (func_438(Local_17.f_328, &iVar3, 0, 0))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
			}
		}
		else if (Local_2026.f_10 == -409129282)
		{
			if (func_81(Local_17.f_328, &iVar4))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
		}
	}
	iVar5 = 0;
	while (iVar5 < 20)
	{
		if ((Local_17.f_16[iVar5 /*12*/])->f_2 != 1566032419 || (Local_17.f_16[iVar5 /*12*/])->f_3 != 33)
		{
		}
		else if (func_438(iVar5, &iVar6, 1, 0))
		{
		}
		else
		{
			iVar5++;
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar7);
	if (!func_382(vVar0))
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
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar6, 0, -1082130432, -1082130432, -1082130432);
	}
	else if (!func_382(vVar0))
	{
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, 0);
	}
	func_932(Global_34, &iVar7, 0, 0, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		func_909(&Global_34, 6000, iVar6, 1, 0, 0, 0, 1);
	}
}

void func_615()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		(Local_361[Local_2026.f_634 /*52*/])->f_41.f_2[iVar0] = 0;
		iVar0++;
	}
}

int func_616(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if ((((func_293(&Local_2026, &Var1) && func_313(&Var1, 556233122, iParam0, 0)) && func_313(&Var1, -110495140, iParam1, 0)) && func_313(&Var1, -556151360, 0, 0)) && func_300(Var1, -1318702711, &uVar0, 0))
	{
		return uVar0;
	}
	return 2000;
}

void func_617(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (func_258(1024, 255))
	{
		func_608();
	}
	if (((!func_293(&Local_2026, &Var0) || !func_313(&Var0, 556233122, iParam0, 0)) || !func_313(&Var0, -110495140, iParam1, 0)) || !func_313(&Var0, -556151360, 0, 0))
	{
		return;
	}
	func_177(Var0, -1355034, &uVar5, 0);
	iVar6 = uVar5;
	if (!func_300(Var0, -1476590111, &iVar7, 0))
	{
		iVar7 = 1000;
	}
	if (!func_258(1024, 255))
	{
		if ((func_33(8) && func_178(Var0, 1234220482, &bVar8, 0)) && bVar8)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, iParam2, true, false, 0);
			func_214(8);
		}
	}
	switch (iVar6)
	{
		case -1232371728:
			func_88(0, iVar7);
			break;
		case -1303284479:
			if (iParam3 < func_966((iParam2 - iVar7 + 150), 0))
			{
				return;
			}
			func_88(1, iVar7);
			break;
	}
}

void func_618(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;

	if ((!func_293(&Local_2026, &Var0) || !func_313(&Var0, 556233122, iParam0, 0)) || !func_313(&Var0, -110495140, iParam1, 0))
	{
		return;
	}
	if (func_178(Var0, -333727878, &uVar5, 0))
	{
		func_967(iParam0);
	}
	iVar6 = func_497(iParam0, iParam1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		if (MISC::_0x8F4F050054005C27(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_2), iVar7))
		{
		}
		else if (!func_968(Var0, iVar7))
		{
		}
		else
		{
			MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_2), iVar7);
		}
		iVar7++;
	}
}

struct<2> func_619()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_969(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_969(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

void func_620(int iParam0, var uParam1, var uParam2, float fParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	if (!func_970(iParam0, uParam1, uParam2, fParam3, &bVar0, &bVar1, &bVar2))
	{
		func_240(iParam0);
		return;
	}
	iVar3 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	bVar4 = MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iParam0]));
	if (bVar0 && !bVar4)
	{
		return;
	}
	func_971(iParam0, uParam1, uParam2, fParam3);
	if (!bVar4)
	{
		return;
	}
	iVar6 = PLAYER::PLAYER_ID();
	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case 401658241:
		case 1566032419:
			func_972(iParam0, bVar0);
			break;
		case 1095997463:
			func_973(iParam0, bVar2);
			func_974(iParam0, !func_33(1));
			iVar5 = 255;
			if (func_272(iParam0, 1024))
			{
				func_975(iParam0);
			}
			else if (func_976(iParam0, 255))
			{
				func_977(iParam0);
				iVar5 = iVar6;
				bVar7 = false;
			}
			else if (func_978((Local_17.f_16[iParam0 /*12*/])->f_7, iVar3, &bVar7, &iVar5) && iVar5 != iVar6)
			{
				func_977(iParam0);
			}
			else if (bVar7)
			{
				func_975(iParam0);
			}
			else
			{
				func_979(iParam0);
			}
			if (iVar5 == iVar6)
			{
				iVar5 = 255;
			}
			func_980(iParam0, iVar5);
			break;
		default:
			func_981(iParam0, bVar1, func_33(1));
			func_982(iParam0, func_33(1));
			break;
	}
}

void func_621(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (!func_983(iParam0, uParam1, uParam2, fParam3))
	{
		func_241(iParam0);
		return;
	}
	func_984(iParam0, uParam1, uParam2, fParam3);
	if (!MAP::DOES_BLIP_EXIST(&(fParam3->f_202.f_21[iParam0])))
	{
		return;
	}
	MAP::_BLIP_SET_MODIFIER(&(fParam3->f_202.f_21[iParam0]), -521680853);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(fParam3->f_202.f_21[iParam0]), func_985());
}

void func_622(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (!func_986(iParam0, uParam1, uParam2, fParam3))
	{
		func_242(iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[iParam0 /*5*/]));
	func_987(iParam0, iVar0);
	if (!MAP::DOES_BLIP_EXIST(&(fParam3->f_202.f_25[iParam0])))
	{
		return;
	}
	bVar1 = func_33(1);
	if (bVar1 && func_80(iParam0, 8))
	{
		func_450(iParam0, 8);
		MAP::SET_BLIP_SPRITE(&(Local_2026.f_202.f_25[iParam0]), 688589278, false);
	}
	else if (!bVar1 && !func_80(iParam0, 8))
	{
		func_274(iParam0, 8);
		MAP::SET_BLIP_SPRITE(&(Local_2026.f_202.f_25[iParam0]), func_988(2), false);
	}
	iVar4 = PLAYER::PLAYER_ID();
	if (func_80(iParam0, 8))
	{
		func_989(iParam0);
	}
	else if (func_990(iParam0, 255))
	{
		func_991(iParam0);
		iVar3 = iVar4;
		bVar2 = false;
	}
	else if (func_978((Local_17.f_257[iParam0 /*5*/])->f_3, iVar0, &bVar2, &iVar3) && iVar3 != iVar4)
	{
		func_991(iParam0);
	}
	else if (bVar2)
	{
		func_989(iParam0);
	}
	else
	{
		func_992(iParam0);
	}
	if (iVar3 == iVar4)
	{
		iVar3 = 255;
	}
	func_993(iParam0, iVar3);
}

int func_623(var uParam0, var uParam1, float fParam2)
{
	if (!func_531())
	{
		return 0;
	}
	if (!func_41((*uParam1)[Local_2026.f_634 /*52*/], 32) && !func_41((*uParam1)[Local_2026.f_634 /*52*/], 64))
	{
		return 0;
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
			return 0;
	}
	return 1;
}

void func_624(var uParam0, float fParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_41((*uParam0)[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/], 64);
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
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(fParam1->f_202.f_51, func_994());
}

void func_625(bool bParam0)
{
	int iVar0;
	int iVar1;

	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar1 = 20;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iVar0])))
				{
				}
				else if (bParam0)
				{
					MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iVar0]), 231194138);
				}
				else
				{
					MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iVar0]), 231194138);
				}
				iVar0++;
			}
			break;
		case -409129282:
			iVar1 = 4;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_25[iVar0])))
				{
				}
				else if (bParam0)
				{
					MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202.f_25[iVar0]), 231194138);
				}
				else
				{
					MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202.f_25[iVar0]), 231194138);
				}
				iVar0++;
			}
			break;
	}
}

int func_626(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_33(1) && !func_533(1))
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	if (func_526(iVar2))
	{
		if (func_333(iVar2))
		{
			return 1;
		}
		iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3) && AITRANSPORT::_0xDC44F405A6B98D03(iVar3, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_627(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_33(1))
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	if (func_33(1) && !GANG::_0x3F59FE6F37869576(iVar0, PLAYER::PLAYER_ID()))
	{
		if (func_41(Local_361[iVar2 /*52*/], 64) || func_41(Local_361[iVar2 /*52*/], 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_628(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_453(Local_2026.f_202.f_59);
	bVar1 = func_995();
	iVar2 = func_252();
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (iVar4 == 0)
		{
		}
		else if (func_996(iVar4, iVar2, bVar1, bVar0, iParam0, iParam1))
		{
			return iVar4;
		}
		iVar3++;
	}
	return 0;
}

void func_629(int iParam0, int iParam1, char* sParam2)
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
	func_244(&(Local_2026.f_202.f_58));
	bVar0 = func_997(iParam0);
	bVar1 = func_998(iParam0);
	iVar2 = func_999(iParam0);
	sVar3 = func_1000(iParam0, iParam1, sParam2);
	Local_2026.f_202.f_58 = sParam2;
	if (bVar1)
	{
		func_1001(Local_2026.f_561.f_54, sParam2);
	}
	else
	{
		func_1002(sVar3, iVar2, bVar0);
	}
	if (func_1003(iParam0, &iVar4))
	{
		func_132(iVar4);
	}
}

int func_630(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	bVar0 = func_41((*uParam1)[Local_2026.f_634 /*52*/], 64);
	if (!func_41((*uParam1)[Local_2026.f_634 /*52*/], 32) && !bVar0)
	{
		return 0;
	}
	if (!func_33(2))
	{
		return 0;
	}
	if (func_363(255) > 0)
	{
		return 0;
	}
	if (func_228(2))
	{
		return 0;
	}
	if ((func_55(uParam0, 1024) || func_55(uParam0, 16384)) || func_201(uParam0, bParam2))
	{
		return 0;
	}
	switch (func_403(uParam0))
	{
		case 1:
			if (!func_41((*uParam1)[Local_2026.f_634 /*52*/], 8))
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
			if (!func_1004(uParam0, bParam2, 1095997463))
			{
				return 8;
			}
			return 18;
		case 4:
			if (func_879(0))
			{
				if (func_855(&Local_2026, Global_35, bVar0))
				{
					return 29;
				}
				return 14;
			}
			if (!func_1005(uParam0, 1095997463, 65536, 131072))
			{
				return 0;
			}
			if (func_1006(&bVar1))
			{
				return 27;
			}
			else if (bVar1)
			{
				return 24;
			}
			if (func_1005(uParam0, 1095997463, 4, 524288))
			{
				if (!func_1004(uParam0, bParam2, 1095997463))
				{
					return 8;
				}
				return 10;
			}
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
				{
				}
				else if ((func_202(iVar2, &Local_17, 32) || func_202(iVar2, &Local_17, 65536)) || func_202(iVar2, &Local_17, 131072))
				{
				}
				else
				{
					bVar5 = true;
					if (func_438(iVar2, &iVar3, 1, 1) && ENTITY::_0x61914209C36EFDDB(iVar3) == 7)
					{
						iVar4 = PED::_GET_CARRIER_AS_MOUNT(iVar3);
						if (ENTITY::DOES_ENTITY_EXIST(iVar4) && iVar4 == PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()))
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
			if (func_552())
			{
				if (func_855(&Local_2026, Global_35, bVar0))
				{
					if (func_554(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					return 31;
				}
				return 22;
			}
			if (func_1007())
			{
				return 0;
			}
			if (func_1008(&bVar1))
			{
				return 27;
			}
			else if (bVar1)
			{
				return 24;
			}
			if (bVar0)
			{
				if (func_416(uParam0, 32, 0))
				{
					return 24;
				}
			}
			else if (func_416(uParam0, 1, 0))
			{
				return 24;
			}
			if (func_415(uParam0, 64, 0))
			{
				return 18;
			}
			return 17;
	}
	return 0;
}

int func_631(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (func_200(bParam1))
		{
			case -19759302:
				return 1;
			case -409129282:
				return 1;
			default:
				break;
		}
	}
	else if (bParam2)
	{
		switch (func_200(bParam1))
		{
			case -19759302:
				return uParam0->f_321 < 2;
			case -409129282:
				return uParam0->f_322 < 2;
			default:
				break;
		}
	}
	else
	{
		switch (func_200(bParam1))
		{
			case -19759302:
				return Local_2026.f_10.f_13 < 2;
			case -409129282:
				return Local_2026.f_10.f_14 < 2;
			default:
				break;
		}
	}
	return 1;
}

int func_632()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if ((Local_17.f_16[iVar2 /*12*/])->f_11 == -1)
				{
				}
				else if (bVar1 && iVar0 == (Local_17.f_16[iVar2 /*12*/])->f_11)
				{
				}
				else if (!func_202(iVar2, &Local_17, 1024))
				{
				}
				else if (!bVar1)
				{
					bVar1 = true;
					iVar0 = (Local_17.f_16[iVar2 /*12*/])->f_11;
				}
				else
				{
					return 1;
				}
				iVar2++;
			}
			break;
		case -409129282:
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if ((Local_17.f_257[iVar3 /*5*/])->f_2 == -1)
				{
				}
				else if (bVar1 && iVar0 == (Local_17.f_257[iVar3 /*5*/])->f_2)
				{
				}
				else if (!func_203(iVar3, &Local_17, 8))
				{
				}
				else if (!bVar1)
				{
					bVar1 = true;
					iVar0 = (Local_17.f_257[iVar3 /*5*/])->f_2;
				}
				else
				{
					return 1;
				}
				iVar3++;
			}
			break;
	}
	return 0;
}

void func_633(bool bParam0, bool bParam1, int iParam2, int iParam3)
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
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if ((Local_17.f_16[iVar0 /*12*/])->f_7 == 255)
		{
		}
		else if ((func_202(iVar0, &Local_17, 32) || func_202(iVar0, &Local_17, 65536)) || func_202(iVar0, &Local_17, 131072))
		{
		}
		else if (!func_1009((Local_17.f_16[iVar0 /*12*/])->f_7, &uVar1))
		{
		}
		else if (GANG::_0x3F59FE6F37869576((Local_17.f_16[iVar0 /*12*/])->f_7, iVar3))
		{
		}
		else
		{
			if (iVar2 == 0)
			{
				*iParam2 = (Local_17.f_16[iVar0 /*12*/])->f_7;
				*iParam3 = GANG::_0x901E0DC25080C8B9(*iParam2);
			}
			else if (GANG::_0x901E0DC25080C8B9((Local_17.f_16[iVar0 /*12*/])->f_7) != *iParam3)
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

void func_634(bool bParam0, bool bParam1, int iParam2, int iParam3)
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
		if ((((!func_203(iVar0, &Local_17, 128) || func_203(iVar0, &Local_17, 2)) || func_203(iVar0, &Local_17, 16)) || func_203(iVar0, &Local_17, 256)) || func_203(iVar0, &Local_17, 512))
		{
		}
		else if ((Local_17.f_257[iVar0 /*5*/])->f_3 == 255)
		{
		}
		else if (!func_1009((Local_17.f_257[iVar0 /*5*/])->f_3, &uVar1))
		{
		}
		else if (GANG::_0x3F59FE6F37869576((Local_17.f_257[iVar0 /*5*/])->f_3, iVar3))
		{
		}
		else
		{
			if (iVar2 == 0)
			{
				*iParam2 = (Local_17.f_257[iVar0 /*5*/])->f_3;
				*iParam3 = GANG::_0x901E0DC25080C8B9(*iParam2);
			}
			else if (GANG::_0x901E0DC25080C8B9((Local_17.f_257[iVar0 /*5*/])->f_3) != *iParam3)
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

int func_635(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam0 != Local_2026.f_202.f_60)
	{
		return 0;
	}
	if ((bParam1 && func_228(2097152)) && Local_2026.f_202.f_53 == iParam2)
	{
		return 0;
	}
	if ((!bParam1 && func_228(4194304)) && Local_2026.f_202.f_54 == iParam3)
	{
		return 0;
	}
	if (((!func_228(2097152) && !func_228(4194304)) && iParam2 == 255) && iParam3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_636(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;

	if (iParam0 == 0)
	{
		func_246(fParam1);
		return;
	}
	if (((func_247(fParam1->f_202.f_56) && func_453(fParam1->f_202.f_56)) && fParam1->f_202.f_60 == iParam0) && !bParam2)
	{
		return;
	}
	iVar0 = 255;
	iVar1 = 0;
	switch (iParam0)
	{
		case 8:
			uVar3 = func_1010(0);
			break;
		case 9:
			uVar3 = func_1010(1);
			break;
		case 1:
			uVar3 = func_1011(1);
			break;
		case 2:
			uVar3 = func_1011(0);
			break;
		case 3:
			uVar3 = func_1012(1);
			break;
		case 4:
			uVar3 = func_1012(0);
			break;
		case 5:
			uVar3 = func_1013(1);
			break;
		case 7:
			uVar3 = func_1014();
			break;
		case 10:
			uVar3 = func_1015(0);
			break;
		case 11:
			uVar3 = func_1015(1);
			break;
		case 12:
			uVar3 = func_1016(0, 0);
			break;
		case 13:
			uVar3 = func_1016(1, 0);
			break;
		case 16:
			uVar3 = func_1017(0);
			break;
		case 17:
			uVar3 = func_1017(1);
			break;
		case 20:
			uVar3 = func_1018(0, 0);
			break;
		case 21:
			uVar3 = func_1018(1, 0);
			break;
		case 26:
			uVar3 = func_1019(fParam1, 1, &iVar0, &iVar1, &bVar2);
			break;
		case 27:
			uVar3 = func_1019(fParam1, 0, &iVar0, &iVar1, &bVar2);
			break;
		case 28:
			uVar3 = func_1020();
			break;
		case 25:
			uVar3 = func_1021(fParam1, 1);
			break;
		case 24:
			uVar3 = func_1021(fParam1, 0);
			break;
		case 22:
			uVar3 = func_1018(0, 1);
			break;
		case 23:
			uVar3 = func_1018(1, 1);
			break;
		case 15:
			uVar3 = func_1016(1, 1);
			break;
		case 14:
			uVar3 = func_1016(1, 1);
			break;
		case 18:
			uVar3 = func_1022(1);
			break;
		case 19:
			uVar3 = func_1022(0);
			break;
		case 29:
			uVar3 = func_1023();
			break;
		case 30:
			uVar3 = func_1024(1);
			break;
		case 31:
			uVar3 = func_1024(0);
			break;
		case 6:
			uVar3 = func_1013(1);
			break;
		default:
			return;
	}
	if (iVar0 != 255 && bVar2)
	{
		func_132(2097152);
		func_229(4194304);
		Local_2026.f_202.f_53 = iVar0;
		Local_2026.f_202.f_54 = 0;
	}
	else if (iVar1 != 0 && !bVar2)
	{
		func_132(4194304);
		func_229(2097152);
		Local_2026.f_202.f_53 = 255;
		Local_2026.f_202.f_54 = iVar1;
	}
	else
	{
		func_229(2097152);
		func_229(4194304);
	}
	fParam1->f_202.f_56 = func_1025(uVar3, -1, 0, 0, 1);
	fParam1->f_202.f_60 = iParam0;
}

int func_637()
{
	if (!func_531())
	{
		return 0;
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		return 0;
	}
	if (func_228(4))
	{
		return 0;
	}
	if (!func_33(2))
	{
		return 0;
	}
	if (CAM::_0xA2B1C7EF759A63CE() > 0f && !CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	return 1;
}

void func_638()
{
	bool bVar0;

	bVar0 = func_631(&Local_17, &Local_2026, 0, 0);
	Local_2026.f_202.f_57 = func_1028(func_1026(), func_1027(bVar0));
}

int func_639()
{
	if (func_228(2))
	{
		return 0;
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 8388608))
	{
		return 1;
	}
	if (!func_33(1))
	{
		return 0;
	}
	if (!func_228(4))
	{
		return 0;
	}
	if (!func_55(&Local_17, 524288) && !func_33(134217728))
	{
		return 0;
	}
	if (func_362())
	{
		return 0;
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 2097152))
	{
		return 0;
	}
	return 1;
}

void func_640()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	func_209(&iVar0, &iVar1);
	bVar2 = func_631(&Local_17, &Local_2026, 0, 0);
	bVar3 = !func_33(8192);
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 8388608))
	{
		func_1032(func_1030(func_1029(0)), func_1030(func_1026()), func_1030(func_1031(bVar2)), 0);
	}
	else
	{
		Local_2026.f_202.f_57 = func_1033(func_1026(), func_1031(bVar2), iVar0, iVar1, bVar3);
	}
}

int func_641(float fParam0)
{
	switch (fParam0->f_10)
	{
		case -409129282:
			return 688589278 /* GXTEntry: "Cash Bag" */;
		case -19759302:
		default:
			break;
	}
	return -1103135225;
}

int func_642(int iParam0)
{
	return func_1034(iParam0);
}

void func_643(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if (((*uParam0)[iParam2 /*34*/])->f_25 != iParam1)
	{
		((*uParam0)[iParam2 /*34*/])->f_25 = iParam1;
	}
}

void func_644(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if (((*uParam0)[iParam2 /*34*/])->f_26 != iParam1)
	{
		((*uParam0)[iParam2 /*34*/])->f_26 = iParam1;
	}
}

bool func_645(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

bool func_646(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_645(iParam0))
	{
		return false;
	}
	iVar0 = func_1035(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

bool func_647(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_645(iParam0))
	{
		return false;
	}
	iVar0 = func_1035(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_648(var uParam0, float fParam1)
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
		if ((uParam0->f_16[iVar3 /*12*/])->f_2 != 1095997463)
		{
		}
		else if ((uParam0->f_16[iVar3 /*12*/])->f_3 != 22)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar3 /*12*/])))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_PED(&(uParam0->f_16[iVar3 /*12*/]));
			fVar0 = func_520(iVar2, PLAYER::PLAYER_PED_ID(), 1, 1);
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

int func_649(bool bParam0)
{
	if (!func_531())
	{
		return 0;
	}
	if (func_228(2))
	{
		return 0;
	}
	if (func_363(255) > 0)
	{
		return 0;
	}
	if (!func_33(1))
	{
		return 0;
	}
	if (!func_228(4) || func_453(Local_2026.f_202.f_57))
	{
		return 0;
	}
	*bParam0 = 0;
	if (Local_17.f_2 > 2)
	{
		*bParam0 = 1;
	}
	return 1;
}

void func_650(var uParam0, var uParam1, float fParam2)
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
		case -409129282:
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (!func_203(iVar2, &Local_17, 128))
				{
				}
				else
				{
					if (func_424(iVar2, 0))
					{
						if (func_424(iVar2, 1))
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_203(iVar2, &Local_17, 2))
					{
						if (GANG::_0x901E0DC25080C8B9(iVar4) == (Local_17.f_257[iVar2 /*5*/])->f_4)
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_203(iVar2, uParam0, 16) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar2 /*5*/])))
					{
						iVar3 = 2;
					}
					else if (func_990(iVar2, 255))
					{
						iVar3 = 5;
					}
					else if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_257[iVar2 /*5*/])->f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_257[iVar2 /*5*/])->f_3)) && (Local_17.f_257[iVar2 /*5*/])->f_3 != iVar4)
					{
						if (GANG::_0x3F59FE6F37869576((Local_17.f_257[iVar2 /*5*/])->f_3, iVar4))
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
					func_1036(&(fParam2->f_202.f_77), iVar3, iVar0);
					iVar0++;
				}
				iVar2++;
			}
			break;
		case -19759302:
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_202(iVar1, uParam0, 1024))
				{
				}
				else
				{
					if (func_424(iVar1, 0))
					{
						if (func_424(iVar1, 1))
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_202(iVar1, uParam0, 32))
					{
						if (GANG::_0x901E0DC25080C8B9(iVar4) == (Local_17.f_16[iVar1 /*12*/])->f_6)
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_976(iVar1, 255))
					{
						iVar3 = 5;
					}
					else if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iVar1 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iVar1 /*12*/])->f_7)) && (Local_17.f_16[iVar1 /*12*/])->f_7 != iVar4)
					{
						if (GANG::_0x3F59FE6F37869576((Local_17.f_16[iVar1 /*12*/])->f_7, iVar4))
						{
							iVar3 = 5;
						}
						else
						{
							iVar3 = 6;
						}
					}
					else if ((uParam0->f_16[iVar1 /*12*/])->f_2 == -1088690539)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					func_1036(&(fParam2->f_202.f_77), iVar3, iVar0);
					iVar0++;
				}
				iVar1++;
			}
			break;
	}
}

void func_651(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;

	if (((func_1037(uParam0, &bVar0) && func_1038(uParam0)) && func_1039(uParam0, uParam1, iParam7)) && func_1040(uParam0, -213385216, &bVar0))
	{
		func_1041(uParam0, iParam2, bParam3, iParam4, sParam5);
		func_1042(uParam1, iParam6, iParam7, bParam8, bParam9, bParam10);
	}
	if (bVar0)
	{
		func_248(uParam1, 0, 0);
		func_249(uParam0, 1);
	}
}

int func_652(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_531())
	{
		return 0;
	}
	if (func_363(255) > 0)
	{
		return 0;
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		return 0;
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 128))
	{
		return 0;
	}
	if (Local_2026.f_10 != -409129282)
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return 0;
	}
	if (TASK::IS_PED_GETTING_UP(iVar0))
	{
		return 0;
	}
	if (PED::_0x3BDFCF25B58B0415(iVar0) || PED::_0x0E99E3BF11BB6367(iVar0))
	{
		return 0;
	}
	iVar2 = PLAYER::PLAYER_ID();
	if ((!PLAYER::_0x3EE1F7A8C32F24E1(iVar2, &iVar1, 0, 0) && !PLAYER::GET_PLAYER_TARGET_ENTITY(iVar2, &iVar1)) && !PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(iVar2, &iVar1))
	{
		return 0;
	}
	if (func_520(iVar1, iVar0, 1, 1) > 3.5f)
	{
		return 0;
	}
	if (!func_118(iVar1, &Local_17, &iVar3))
	{
		return 0;
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	if ((Local_17.f_16[iVar3 /*12*/])->f_2 != 1095997463)
	{
		return 0;
	}
	if ((Local_17.f_16[iVar3 /*12*/])->f_3 != 22)
	{
		return 0;
	}
	if (func_202(iVar3, &Local_17, 2))
	{
		return 0;
	}
	if ((Local_17.f_16[iVar3 /*12*/])->f_7 != 255 && (Local_17.f_16[iVar3 /*12*/])->f_7 != iVar2)
	{
		return 0;
	}
	*iParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_RAGDOLL(*iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_GETTING_UP(*iParam0))
	{
		return 0;
	}
	if (PED::_IS_PED_HOGTIED(*iParam0))
	{
		return 0;
	}
	if (PED::_0x3BDFCF25B58B0415(*iParam0))
	{
		return 0;
	}
	if (!func_914(*iParam0))
	{
		return 0;
	}
	return 1;
}

void func_653(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_645(iParam0))
	{
		return;
	}
	iVar0 = func_1035(iParam0);
	if (bParam1)
	{
		func_1043(iParam0, 4);
		if (bParam3)
		{
			func_1044(iVar0, 1);
		}
		func_1045(iVar0, 1);
	}
	else
	{
		func_1046(iParam0, 4);
		func_1045(iVar0, 0);
	}
}

void func_654(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_645(iParam0))
	{
		return;
	}
	iVar0 = func_1035(iParam0);
	func_1044(iVar0, iParam1);
}

void func_655(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && (!func_645(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1)))
	{
		return;
	}
	iVar0 = func_1035(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	if (iParam3 == 1)
	{
		func_1047(iParam0, 18, 0, 1);
		func_1047(iParam0, 17, 0, 1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar0 /*23*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), iParam2);
}

char* func_656()
{
	return "NET_CHU_UC_TAKE_MONEY";
}

int func_657(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_1048(iVar0, 2))
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
		func_1049(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

int func_658()
{
	if (!func_247(Local_2026.f_202.f_55))
	{
		return 0;
	}
	if (!func_453(Local_2026.f_202.f_55))
	{
		return 0;
	}
	return 1;
}

char* func_659()
{
	switch (func_200(&Local_2026))
	{
		case -19759302:
			return "NET_CHU_UPDATE_VIP_KILLED";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_KILLED";
}

void func_660(char* sParam0, int iParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	Local_2026.f_202.f_55 = func_1050(sParam0, joaat("COLOR_WHITE"), -2, iParam1, iParam2, 0, 1);
}

char* func_661()
{
	switch (func_200(&Local_2026))
	{
		case -19759302:
			return "NET_CHU_UPDATE_VIP_KNOCKEDOUT";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_KNOCKEDOUT";
}

char* func_662()
{
	switch (func_200(&Local_2026))
	{
		case -19759302:
			return "NET_CHU_UPDATE_VIP_ESCAPED";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_ESCAPED";
}

char* func_663()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			if (Local_2026.f_202.f_52 == PLAYER::PLAYER_ID())
			{
				return "NET_CHU_UPDATE_VIP_RETURNED_YOU";
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_VIP_RETURNED", Local_2026.f_202.f_52);
		case -409129282:
			if (Local_2026.f_202.f_52 == PLAYER::PLAYER_ID())
			{
				return "NET_CHU_UPDATE_BAG_RETURNED_YOU";
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_BAG_RETURNED", Local_2026.f_202.f_52);
		default:
			break;
	}
	return "";
}

char* func_664()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_VIP_PVP_STOLEN", Local_2026.f_202.f_52);
		case -409129282:
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_BAG_PVP_STOLEN", Local_2026.f_202.f_52);
		default:
			break;
	}
	return "";
}

char* func_665()
{
	bool bVar0;

	bVar0 = !func_631(&Local_17, &Local_2026, 1, 0);
	switch (func_200(&Local_2026))
	{
		case -19759302:
			if (bVar0)
			{
				return "NET_CHU_UPDATE_KIDNAP_PVP_ACTIVE_PLURAL";
			}
			else
			{
				return "NET_CHU_UPDATE_KIDNAP_PVP_ACTIVE";
			}
			break;
		case -409129282:
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

char* func_666()
{
	return "RDRO_GFH_Sounds";
}

char* func_667()
{
	return "match_end";
}

char* func_668()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(Local_2026.f_202.f_52)))
	{
		bVar0 = true;
	}
	iVar1 = Local_2026.f_202.f_52;
	bVar2 = !func_631(&Local_17, &Local_2026, 1, 0);
	switch (Local_2026.f_10)
	{
		case -19759302:
			if (bVar0)
			{
				if (bVar2)
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_POSSE_JOIN_PLURAL", func_1051(iVar1, -5208416));
				}
				else
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_POSSE_JOIN", func_1051(iVar1, -5208416));
				}
			}
			else if (bVar2)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_PLAYER_JOIN_PLURAL", func_1051(iVar1, -5208416));
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_PLAYER_JOIN", func_1051(iVar1, -5208416));
			}
			break;
		case -409129282:
			if (bVar0)
			{
				if (bVar2)
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_POSSE_JOIN_PLURAL", func_1051(iVar1, -5208416));
				}
				else
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_POSSE_JOIN", func_1051(iVar1, -5208416));
				}
			}
			else if (bVar2)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_PLAYER_JOIN_PLURAL", func_1051(iVar1, -5208416));
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_PLAYER_JOIN", func_1051(iVar1, -5208416));
			}
			break;
	}
	return "";
}

int func_669(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_176(&Var0, iParam0) && func_177(Var0, 1645569887, &iVar5, 0))
	{
		switch (iVar5)
		{
			case -198566504:
				return 0;
			case 1746896664:
				return 1;
			case 1390021295:
				return 4;
			case -656190934:
				return 5;
			case 520141149:
				return 7;
			default:
				break;
		}
	}
	return 1;
}

void func_670(int iParam0, int iParam1)
{
	func_122(&((Local_17.f_278[iParam0 /*2*/])->f_1), iParam1);
}

int func_671(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_172(iParam1))
	{
		return 0;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

int func_672(int iParam0)
{
	if ((iParam0 == joaat("handcart") || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return 1;
	}
	return 0;
}

bool func_673(int iParam0)
{
	return iParam0 == -1005911451;
}

float func_674(int iParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_141(iParam0, &Var0, iParam1))
	{
		func_311(Var0, 1922377121, &fVar5, 0);
	}
	return fVar5;
}

int func_675(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(iParam0, &Var0, iParam1))
	{
		func_177(Var0, -1662733059, &iVar5, 0);
		switch (iVar5)
		{
			case 500518742:
				return -2;
			case -672771472:
				return -1;
			case -625377317:
				return 0;
			case -507863514:
				return 1;
			case -2129500879:
				return 2;
			case 1015571236:
				return 3;
			case 822436636:
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

int func_676()
{
	if (Local_2026.f_637 != 0)
	{
		if (func_210(Local_2026.f_637) > 15000)
		{
			return 1;
		}
		return 0;
	}
	Local_2026.f_637 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return 0;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case 280775267:
		case 1566032419:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_678(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2026, &Var0, iParam0) && func_449(Var0, -118004582, uParam1))
	{
		return 1;
	}
	return 0;
}

int func_679(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_172(iParam1))
	{
		return 0;
	}
	iVar0 = func_1052(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7, bParam9);
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
		return 1;
	}
	return 0;
}

void func_680(int iParam0)
{
	int iVar0;

	if (!func_202(iParam0, &Local_17, 512) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_1))
	{
		iVar0 = NETWORK::NET_TO_PED((Local_17.f_16[iParam0 /*12*/])->f_1);
		func_1053(iVar0);
		func_275(iParam0, &Local_17, 512);
	}
}

int func_681(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;

	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_172(iParam2))
	{
		return 0;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		iVar1 = func_1054(iVar0, iParam2, iParam3, 1, bParam4, !bParam5, bParam7);
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
			return 1;
		}
	}
	return 0;
}

int func_682(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_172(iParam2))
	{
		return 0;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		iVar0 = NETWORK::NET_TO_VEH(iParam1);
		iVar1 = func_1055(iVar0, iParam2, iParam3, 1, bParam4, !bParam5);
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
			return 1;
		}
	}
	return 0;
}

int func_683(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (func_202(iParam0, &Local_17, 8388608))
	{
		return 1;
	}
	iVar2 = -1;
	if (func_1056(iParam0, &iVar1) || func_1057(iParam0, &iVar2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
		{
			return 0;
		}
		else
		{
			if (iVar1 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iVar0, iVar1);
			}
			else
			{
				PED::_SET_PED_OUTFIT_PRESET(iVar0, iVar2, 0);
			}
			PED::_UPDATE_PED_VARIATION(iVar0, 0, 1, 1, 1, 0);
			func_275(iParam0, &Local_17, 8388608);
		}
	}
	return 1;
}

int func_684(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	bool bVar7;
	bool bVar8;

	iVar1 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 == 401658241)
	{
		iVar0 = func_1058();
		iVar0 = func_1059(iVar1, iVar0, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		return 1;
	}
	if (!func_141(&Local_2026, &Var2, iParam0))
	{
		return 1;
	}
	bVar7 = false;
	func_178(Var2, -900489166, &bVar7, 0);
	if (bVar7)
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
	}
	if (!func_1060(Var2, 1325183772, &iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	if (!func_237(iVar0))
	{
		return 1;
	}
	bVar8 = false;
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 == 824585797 || func_272(iParam0, 32768))
	{
		bVar8 = true;
	}
	func_1059(iVar1, iVar0, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	WEAPON::_0x4F806A6CFED89468(iVar1, 1);
	if (!bVar8)
	{
		WEAPON::_0x94A3C1B804D291EC(iVar1, 0, 0, 1, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iVar1, iVar0, false, 0, false, false);
	}
	return 1;
}

int func_685(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2026, &Var0, iParam0) && func_1061(Var0, -779153855, uParam1, 0))
	{
		return 1;
	}
	return 0;
}

var func_686(var uParam0)
{
	return uParam0;
}

float func_687(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (!func_141(iParam0, &Var0, iParam1) || !func_311(Var0, 2039042927, &uVar5, 0))
	{
		return 0.25f;
	}
	return uVar5;
}

float func_688(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(iParam0, &Var0, iParam1))
	{
		func_311(Var0, 1860996644, &uVar5, 0);
	}
	return uVar5;
}

void func_689(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_429(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

int func_690(int iParam0)
{
	struct<5> Var0;

	if (!func_448(&Var0))
	{
		return 0;
	}
	if (!func_300(Var0, 188462142, iParam0, 0))
	{
		return 0;
	}
	*iParam0 = func_750(*iParam0, 0, 100);
	return 1;
}

int func_691(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (func_141(iParam0, &Var0, iParam1) && func_300(Var0, 188462142, iParam2, 0))
	{
		return 1;
	}
	return 0;
}

void func_692(int iParam0)
{
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	if ((WEAPON::_0x95CA12E2C68043E5(iParam0, 0) || WEAPON::_0x80BB243789008A82(iParam0, 0)) || WEAPON::_0x495A04CAEC263AF8(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, -289314967, -1082130432);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0xABC18A28BAD4B46F(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, 1164657302, -1082130432);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0x5B235F24472F2C3B(iParam0, 0) || WEAPON::_0xBFCA7AFABF9D7967(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, -68970303, -1082130432);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
}

char* func_693()
{
	return "chu_vip_ped";
}

void func_694(int iParam0, int iParam1)
{
	if (func_202(iParam0, &Local_17, 67108864))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_538(8, iParam1, iParam0, func_537(0, 8));
	func_275(iParam0, &Local_17, 67108864);
}

bool func_695(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return MISC::_0x8F4F050054005C27(&((Local_361[iParam1 /*52*/])->f_2.f_12), iParam0);
}

void func_696(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	uParam1->f_321 = (uParam1->f_321 - 1);
	if (bParam2)
	{
		uParam1->f_326++;
		func_275(iParam0, uParam1, 64);
		func_63(uParam1, 131072);
		iVar0 = 5;
		if (uParam1->f_321 == 0)
		{
			func_63(&Local_17, 33554432);
			Local_17.f_328 = iParam0;
		}
	}
	else
	{
		uParam1->f_325++;
		func_63(uParam1, 2048);
		iVar0 = 4;
		if (uParam1->f_321 == 0)
		{
			func_63(&Local_17, 16777216);
			Local_17.f_328 = iParam0;
		}
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
	{
		(Local_17.f_16[iParam0 /*12*/])->f_6 = GANG::_0x901E0DC25080C8B9((Local_17.f_16[iParam0 /*12*/])->f_7);
	}
	func_538(iVar0, (Local_17.f_16[iParam0 /*12*/])->f_7, iParam0, func_537(0, 8));
	func_275(iParam0, uParam1, 32);
	func_414(iParam0, uParam1, 8);
	func_414(iParam0, uParam1, 16);
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case 1095997463:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_698(int iParam0, var uParam1)
{
	return NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
}

void func_699(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar1 = func_1062(iParam0, uParam1);
	if (bVar1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 2;
	}
	if (func_438(iParam0, &iVar2, 0, 0))
	{
		iVar4 = 0;
		while (iVar4 < 20)
		{
			if (iVar4 == iParam0)
			{
			}
			else if ((Local_17.f_16[iVar4 /*12*/])->f_2 != 1095997463)
			{
			}
			else if ((Local_17.f_16[iVar4 /*12*/])->f_3 != 20 && (Local_17.f_16[iVar4 /*12*/])->f_3 != 22)
			{
			}
			else if (!func_438(iVar4, &iVar3, 1, 0))
			{
			}
			else if (func_520(iVar2, iVar3, 1, 1) > 50f)
			{
			}
			else
			{
				if (!bVar1)
				{
					func_275(iVar4, &Local_17, 256);
				}
				func_275(iVar4, &Local_17, 16384);
			}
			iVar4++;
		}
	}
	func_538(iVar0, PLAYER::PLAYER_ID(), iParam0, func_537(0, 8));
}

void func_700(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (!func_202(iParam0, &Local_17, 1024))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
		{
			iVar0 = func_698(iParam0, uParam1);
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_KEEP_TASK(iVar0, bParam2);
				PED::SET_PED_CONFIG_FLAG(iVar0, 168, bParam3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam4);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if ((((uParam1->f_16[iParam0 /*12*/])->f_2 == 1095997463 && !func_202(iParam0, uParam1, 2)) && !func_202(iParam0, uParam1, 32)) && uParam1->f_321 > 0)
	{
		uParam1->f_321 = (uParam1->f_321 - 1);
		(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
	}
	else if ((uParam1->f_16[iParam0 /*12*/])->f_2 != 1095997463)
	{
		(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
	}
	func_414(iParam0, uParam1, 8);
	func_414(iParam0, uParam1, 16);
	func_1063(iParam0, uParam1, -1088690539);
}

int func_701(int iParam0)
{
	if ((Local_17.f_16[iParam0 /*12*/])->f_2 != -1088690539)
	{
		return 0;
	}
	if (func_202(iParam0, &Local_17, 1024))
	{
		return 0;
	}
	return 1;
}

void func_702(int iParam0)
{
	(Local_17.f_16[iParam0 /*12*/])->f_11 = -1;
	(Local_17.f_16[iParam0 /*12*/])->f_3 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_2 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_4 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_1 = 0;
	Local_17.f_16[iParam0 /*12*/] = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_5 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_6 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
	(Local_17.f_16[iParam0 /*12*/])->f_8 = { 0f, 0f, 0f };
}

void func_703(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (func_557(iParam0, uParam1) != 1095997463)
	{
		return;
	}
	if (func_865(iParam0, uParam1) != 22)
	{
		return;
	}
	if (func_202(iParam0, uParam1, 2))
	{
		return;
	}
	if (!func_202(iParam0, uParam1, 1))
	{
		iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1064(), func_1065(), func_546(0), true, true);
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
		{
			return;
		}
		ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
		(uParam1->f_16[iParam0 /*12*/])->f_5 = NETWORK::_ANIM_SCENE_TO_NET(iVar0);
		func_275(iParam0, uParam1, 1);
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_5))
	{
		return;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE((uParam1->f_16[iParam0 /*12*/])->f_5);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		func_275(iParam0, uParam1, 2);
		return;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0))
	{
		func_275(iParam0, uParam1, 2);
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, 0))
	{
		func_275(iParam0, uParam1, 2);
		return;
	}
}

void func_704(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_557(iParam0, uParam1);
	if (iVar0 == -1088690539)
	{
		return;
	}
	switch (iVar0)
	{
		case joaat("driver"):
			func_1066(iParam0, uParam1, uParam2, uParam3);
			break;
		case -193064196:
			func_1067(iParam0, uParam1, uParam2, uParam3);
			break;
		case -522830230:
			func_1068(iParam0, uParam1, uParam2, uParam3);
			break;
		case -306837416:
			func_1069(iParam0, uParam1, uParam2, uParam3);
			break;
		case 824585797:
			func_1070(iParam0, uParam1, uParam2, uParam3);
			break;
	}
}

void func_705(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (func_200(&Local_2026) != -19759302)
	{
		return;
	}
	if (!func_202(iParam0, &Local_17, 1024))
	{
		return;
	}
	if (func_202(iParam0, &Local_17, 32))
	{
		return;
	}
	if (func_202(iParam0, &Local_17, 65536) || func_202(iParam0, &Local_17, 131072))
	{
		return;
	}
	if (func_1071(iParam0, &iVar3))
	{
		if (func_41(Local_361[iVar3 /*52*/], 32))
		{
			iVar2 = 2;
		}
		else if (func_41(Local_361[iVar3 /*52*/], 64))
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
		iVar2 = func_854(iParam1, &uVar0, &iVar1);
		if (iVar2 == 2 || iVar2 == 3)
		{
			iVar2 = 0;
		}
	}
	switch (iVar2)
	{
		case 0:
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			if (func_202(iParam0, &Local_17, 4))
			{
				if (func_855(&Local_2026, vVar4, 1) || func_855(&Local_2026, vVar4, 0))
				{
					return;
				}
			}
		case 1:
			func_414(iParam0, &Local_17, 8);
			func_414(iParam0, &Local_17, 16);
			(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
			break;
		case 2:
			func_275(iParam0, &Local_17, 8);
			func_414(iParam0, &Local_17, 16);
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			func_63(&Local_17, 134217728);
			break;
		case 3:
			func_275(iParam0, &Local_17, 16);
			func_414(iParam0, &Local_17, 8);
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			func_63(&Local_17, 134217728);
			break;
		case 4:
			func_414(iParam0, &Local_17, 8);
			func_414(iParam0, &Local_17, 16);
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			func_63(&Local_17, 134217728);
			break;
	}
}

void func_706(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	iVar2 = 255;
	if (func_1072(iParam0, uParam1, uParam3))
	{
		func_63(uParam1, 65536);
	}
	switch (func_865(iParam0, uParam1))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_904(iParam0, uParam1, 1);
				return;
			}
			func_904(iParam0, uParam1, 2);
			break;
		case 2:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_904(iParam0, uParam1, 1);
				return;
			}
			if (!func_1073(iVar1, &iVar2, &uVar3, 1103626240 /* Float: 25f */))
			{
				Local_2026.f_171.f_2 = -1;
			}
			else
			{
				(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar2;
				if (func_1074(iVar1, iVar2, &(Local_2026.f_171.f_2), 1103626240 /* Float: 25f */, 2000))
				{
					func_904(iParam0, uParam1, 3);
					func_63(&Local_17, 16);
					return;
				}
			}
			if (!func_55(uParam1, 16))
			{
				return;
			}
			func_904(iParam0, uParam1, 3);
			break;
		case 3:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_904(iParam0, uParam1, 1);
				return;
			}
			if (!func_1075(iParam0, uParam1, 1, 0))
			{
				return;
			}
			func_904(iParam0, uParam1, 4);
			break;
		case 4:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_904(iParam0, uParam1, 1);
				return;
			}
			if (func_1075(iParam0, uParam1, 1, 0))
			{
				return;
			}
			func_904(iParam0, uParam1, 3);
			break;
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				return;
			}
			func_904(iParam0, uParam1, 2);
			break;
	}
}

void func_707(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_698(iParam0, uParam1);
	if (!func_880(iParam0, uParam1))
	{
		func_700(iParam0, uParam1, 0, 1, 0);
		return;
	}
	iVar1 = func_881(iParam0, uParam1);
	if (!func_339((Local_17.f_16[iParam0 /*12*/])->f_11, &Local_17, 1) && func_520(iVar1, iVar0, 1, 1) > 100f)
	{
		func_700(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (func_865(iParam0, uParam1))
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
			{
				func_904(iParam0, uParam1, 35);
				return;
			}
			func_904(iParam0, uParam1, 34);
			break;
		case 36:
			break;
		case 34:
			if (func_55(&Local_17, 32))
			{
				func_904(iParam0, uParam1, 36);
				return;
			}
			break;
		case 35:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
			{
				return;
			}
			func_904(iParam0, uParam1, 34);
			break;
	}
}

void func_708(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	if (func_579(iVar0))
	{
		return;
	}
	switch (func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 14);
			break;
		case 14:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				return;
			}
			func_904(iParam0, uParam1, 15);
			break;
		case 15:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				func_904(iParam0, uParam1, 14);
				return;
			}
			if (!func_55(uParam1, 16))
			{
				return;
			}
			func_904(iParam0, uParam1, 16);
			break;
		case 16:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				func_904(iParam0, uParam1, 14);
				return;
			}
			break;
	}
}

void func_709(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_880(iParam0, uParam1))
	{
		iVar0 = func_881(iParam0, uParam1);
	}
	iVar1 = func_698(iParam0, uParam1);
	if (PED::GET_PED_CONFIG_FLAG(iVar1, 11, false))
	{
		func_275(iParam0, uParam1, 524288);
		func_904(iParam0, uParam1, 24);
		return;
	}
	else
	{
		func_414(iParam0, uParam1, 524288);
	}
	if (func_200(&Local_2026) != -19759302 && func_202(iParam0, &Local_17, 256))
	{
		if (ENTITY::GET_ENTITY_HEALTH(iVar1) < 25)
		{
			func_414(iParam0, &Local_17, 256);
		}
		else if ((PED::_IS_PED_HOGTIED(iVar1) || PED::_IS_PED_LASSOED(iVar1)) || PED::_0x3BDFCF25B58B0415(iVar1))
		{
			func_414(iParam0, &Local_17, 256);
		}
	}
	if (PED::_IS_PED_HOGTIED(iVar1) || (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1) && func_202(iParam0, uParam1, 4)))
	{
		func_275(iParam0, uParam1, 4);
		if ((Local_17.f_16[iParam0 /*12*/])->f_3 != 28)
		{
			func_904(iParam0, uParam1, 28);
		}
	}
	else
	{
		func_414(iParam0, uParam1, 4);
	}
	if (func_202(iParam0, uParam1, 32))
	{
		return;
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_3 != 21)
	{
		func_414(iParam0, &Local_17, 4194304);
	}
	switch (func_865(iParam0, uParam1))
	{
		case 0:
			if (func_33(256) && !func_272(iParam0, 1))
			{
				func_904(iParam0, uParam1, 25);
				func_275(iParam0, &Local_17, 256);
			}
			func_904(iParam0, uParam1, 17);
			break;
		case 25:
			if (func_55(&Local_17, 16))
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (!func_924(iVar1, &uVar2, &fVar3, 100f))
			{
				return;
			}
			func_904(iParam0, uParam1, 26);
			break;
		case 26:
			if (func_55(&Local_17, 16))
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (func_924(iVar1, &uVar2, &fVar3, 100f))
			{
				return;
			}
			func_904(iParam0, uParam1, 25);
			break;
		case 17:
			if (!func_880(iParam0, uParam1))
			{
				func_904(iParam0, uParam1, 18);
				return;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				func_275(iParam0, &Local_17, 256);
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return;
			}
			if (func_890(iVar0) && !func_1076((uParam1->f_16[iParam0 /*12*/])->f_11))
			{
				func_904(iParam0, uParam1, 18);
				return;
			}
			if (!func_715(iVar0))
			{
				return;
			}
			if (!func_339((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 1))
			{
				return;
			}
			if (func_403(&Local_17) <= 2 && func_735(uParam1, (uParam1->f_16[iParam0 /*12*/])->f_11))
			{
				return;
			}
			func_904(iParam0, uParam1, 18);
			break;
		case 18:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
			{
				return;
			}
			if (func_202(iParam0, uParam1, 256))
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (func_200(bParam3) != -19759302)
			{
				func_904(iParam0, uParam1, 19);
				return;
			}
			func_904(iParam0, uParam1, 21);
			break;
		case 19:
			if (func_1077(iParam0, 2.2f))
			{
				return;
			}
			if (func_55(&Local_17, 16) && func_1078(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 25f))
			{
				func_904(iParam0, uParam1, 20);
				return;
			}
			func_904(iParam0, uParam1, 21);
			break;
		case 20:
			if (func_1077(iParam0, 2.2f))
			{
				func_904(iParam0, uParam1, 19);
				return;
			}
			if ((!func_1078(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 25f) || func_202(iParam0, uParam1, 256)) || func_522(&Local_17, &Local_2026) < 6000)
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (func_1079(iVar1, 40f, 1))
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (!func_914(iVar1))
			{
				return;
			}
			if (!func_339((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 1))
			{
				return;
			}
			if (func_716(uParam1, -193064196, (uParam1->f_16[iParam0 /*12*/])->f_11))
			{
				return;
			}
			if (func_716(uParam1, -522830230, (uParam1->f_16[iParam0 /*12*/])->f_11))
			{
				return;
			}
			if ((PED::IS_PED_RAGDOLL(iVar1) || PED::_0x3BDFCF25B58B0415(iVar1)) || PED::_IS_PED_HOGTIED(iVar1))
			{
				return;
			}
			func_904(iParam0, uParam1, 22);
			break;
		case 21:
			iVar4 = func_891(iVar1, &Local_361, 150f);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4) && func_520(iVar1, iVar4, 0, 0) < 80f)
			{
				func_414(iParam0, &Local_17, 4194304);
			}
			else
			{
				func_275(iParam0, &Local_17, 4194304);
			}
			if (func_522(&Local_17, &Local_2026) < 6000)
			{
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				fVar3 = func_520(iVar1, iVar4, 1, 0);
				if ((((fVar3 < 20f && func_55(&Local_17, 16)) && !func_202(iParam0, uParam1, 4096)) && !func_202(iParam0, uParam1, 256)) && !func_1079(iVar1, (40f + 10f), 1))
				{
					func_414(iParam0, &Local_17, 16384);
					func_904(iParam0, uParam1, 20);
					return;
				}
				if (fVar3 < 150f)
				{
					return;
				}
			}
			func_904(iParam0, uParam1, 27);
			break;
		case 27:
			iVar4 = func_891(iVar1, &Local_361, 150f);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				fVar3 = func_520(iVar1, iVar4, 1, 0);
				if ((fVar3 + 10f) > 150f)
				{
					return;
				}
			}
			else
			{
				return;
			}
			func_904(iParam0, uParam1, 21);
			break;
		case 22:
			if ((uParam1->f_16[iParam0 /*12*/])->f_7 == 255)
			{
				if ((PED::IS_PED_RAGDOLL(iVar1) || PED::_0x3BDFCF25B58B0415(iVar1)) || PED::_IS_PED_HOGTIED(iVar1))
				{
					func_904(iParam0, &Local_17, 20);
					return;
				}
				if ((!func_1078(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 25f) || func_522(&Local_17, &Local_2026) < 6000) || func_202(iParam0, &Local_17, 256))
				{
					func_904(iParam0, uParam1, 21);
					return;
				}
				if (func_1079(iVar1, 40f, 1))
				{
					func_904(iParam0, uParam1, 21);
					return;
				}
				if (func_1077(iParam0, 2.2f))
				{
					func_904(iParam0, uParam1, 19);
					return;
				}
			}
			else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam1->f_16[iParam0 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam1->f_16[iParam0 /*12*/])->f_7))
			{
				iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX((uParam1->f_16[iParam0 /*12*/])->f_7);
				if (func_41((*iParam2)[iVar5 /*52*/], 256))
				{
					(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
					func_904(iParam0, uParam1, 23);
					return;
				}
				if (func_41((*iParam2)[iVar5 /*52*/], 512))
				{
					return;
				}
			}
			if (!func_202(iParam0, uParam1, 2))
			{
				iVar6 = 0;
				while (iVar6 < 32)
				{
					if (!func_41((*iParam2)[iVar6 /*52*/], 128))
					{
					}
					else if (((*iParam2)[iVar6 /*52*/])->f_46 != iParam0)
					{
					}
					else if (!func_123(iVar6, 1, 1))
					{
					}
					else
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar6));
						if (func_1080(iParam0, uParam1, iVar7))
						{
						}
						else
						{
							(uParam1->f_16[iParam0 /*12*/])->f_7 = iVar7;
							return;
						}
					}
					iVar6++;
				}
				(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
			func_275(iParam0, uParam1, 4096);
			func_904(iParam0, uParam1, 21);
			break;
		case 23:
			if (func_914(iVar1))
			{
				return;
			}
			func_275(iParam0, uParam1, 4096);
			func_904(iParam0, uParam1, 21);
			break;
		case 24:
			if (func_202(iParam0, &Local_17, 524288))
			{
				return;
			}
			func_904(iParam0, &Local_17, 21);
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
			{
				func_904(iParam0, &Local_17, 18);
			}
			break;
		case 28:
			if (func_202(iParam0, &Local_17, 4))
			{
				return;
			}
			func_904(iParam0, &Local_17, 21);
			break;
	}
}

void func_710(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	if (!func_202(iParam0, uParam1, 128) && PED::IS_PED_IN_GROUP(iVar1))
	{
		func_275(iParam0, uParam1, 128);
	}
	if (func_55(uParam1, 16) && func_520(iVar0, iVar1, 1, 1) > 100f)
	{
		func_700(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 29);
			break;
		case 29:
			if (!func_55(uParam1, 16))
			{
				return;
			}
			if ((func_1081(iVar0, iParam2, 50f) && func_520(iVar0, iVar1, 1, 1) < 40f) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0, 0))
			{
				func_904(iParam0, uParam1, 30);
				return;
			}
			break;
		case 30:
			if (func_520(iVar0, iVar1, 1, 1) > 40f)
			{
				func_904(iParam0, uParam1, 29);
				return;
			}
			break;
	}
}

void func_711(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	switch (func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 6);
			break;
		case 6:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				return;
			}
			func_904(iParam0, uParam1, 7);
			break;
		case 7:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_904(iParam0, uParam1, 11);
				return;
			}
			if (func_272(iParam0, 16))
			{
				return;
			}
			if (func_1073(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				(Local_17.f_16[iParam0 /*12*/])->f_7 = uVar3;
				if (func_202(iParam0, &Local_17, 2097152))
				{
					func_904(iParam0, uParam1, 10);
				}
				else
				{
					func_904(iParam0, uParam1, 8);
				}
				return;
			}
			break;
		case 8:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_904(iParam0, uParam1, 11);
				return;
			}
			if (!func_1073(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				if (!func_202(iParam0, &Local_17, 1048576))
				{
					func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 7);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = uVar3;
			func_414(iParam0, &Local_17, 1048576);
			if (iVar2 > 15000)
			{
				func_904(iParam0, uParam1, 9);
				return;
			}
			break;
		case 9:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_904(iParam0, uParam1, 11);
				return;
			}
			if (!func_1073(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				if (!func_202(iParam0, &Local_17, 1048576))
				{
					func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 7);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = uVar3;
			func_414(iParam0, &Local_17, 1048576);
			if (!func_202(iParam0, &Local_17, 2097152) && func_876(iParam0, 6, &Local_361, 0))
			{
				func_275(iParam0, &Local_17, 2097152);
			}
			if (iVar2 > 28000)
			{
				func_904(iParam0, uParam1, 10);
				return;
			}
			break;
		case 10:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_904(iParam0, uParam1, 11);
				return;
			}
			if (!func_1073(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				if (!func_202(iParam0, &Local_17, 1048576))
				{
					func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 7);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = uVar3;
			func_414(iParam0, &Local_17, 1048576);
			if (iVar2 > 45000)
			{
				func_904(iParam0, uParam1, 11);
				func_63(&Local_17, 16);
				return;
			}
			break;
		case 11:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (((!func_33(256) && func_895(iVar0, -1, 0)) && !func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, joaat("driver"), -1)) && func_715(iVar0))
			{
				func_904(iParam0, uParam1, 12);
				return;
			}
			break;
		case 12:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			break;
	}
}

void func_712(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_698(iParam0, uParam1);
	switch (func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 31);
			break;
		case 31:
			if (!func_55(&Local_17, 524288))
			{
				return;
			}
			if (Local_17.f_328 == -1)
			{
				return;
			}
			if (func_1083(&Local_17, 1566032419, 33))
			{
				return;
			}
			if (func_55(&Local_17, 16777216) && !func_202(iParam0, &Local_17, 2048))
			{
				func_904(iParam0, uParam1, 33);
			}
			else if (func_55(&Local_17, 33554432) && func_202(iParam0, &Local_17, 2048))
			{
				func_904(iParam0, uParam1, 33);
			}
			break;
		case 32:
			if ((!PED::IS_PED_IN_COMBAT(iVar0, 0) && !PED::_0x77525BBF433F2CD6(iVar0)) && !PED::IS_PED_FLEEING(iVar0))
			{
				func_904(iParam0, uParam1, 31);
				return;
			}
			break;
	}
}

void func_713(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	var uVar9;

	iVar0 = func_698(iParam0, uParam1);
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
	{
	}
	else
	{
		vVar2 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
	}
	switch (func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 44);
			break;
		case 44:
			if (func_55(&Local_17, 512))
			{
				func_904(iParam0, uParam1, 45);
				return;
			}
			if (func_549(iVar0, vVar2, 0) < 110f)
			{
				func_904(iParam0, uParam1, 45);
				return;
			}
			if (func_933(iParam0, &iVar1))
			{
				fVar5 = func_520(iVar1, iVar0, 0, 1);
				if (fVar5 > 300f && !func_1084(iVar0, &Local_361, 200f))
				{
					func_700(iParam0, &Local_17, 0, 1, 0);
					return;
				}
			}
			else
			{
				if (!func_411(&uVar9, &uVar6))
				{
					func_904(iParam0, uParam1, 45);
					return;
				}
				(Local_17.f_16[iParam0 /*12*/])->f_11 = uVar9;
				return;
			}
			break;
		case 45:
			if (!func_1084(iVar0, &Local_361, 200f))
			{
				func_700(iParam0, &Local_17, 0, 1, 0);
				return;
			}
			break;
	}
}

void func_714(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 255;
	iVar2 = func_698(iParam0, uParam1);
	if ((Local_17.f_16[iParam0 /*12*/])->f_3 != 43 && func_55(uParam1, 524288))
	{
		func_904(iParam0, uParam1, 43);
		return;
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_3 != 37 && func_55(uParam1, 16))
	{
		func_904(iParam0, uParam1, 37);
		return;
	}
	if ((func_55(uParam1, 16) && func_880(iParam0, &Local_17)) && func_520(func_881(iParam0, uParam1), iVar2, 1, 1) > 100f)
	{
		func_700(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 38);
			break;
		case 38:
			if (func_272(iParam0, 16) || PED::IS_PED_ON_MOUNT(iVar2))
			{
				return;
			}
			func_414(iParam0, &Local_17, 1048576);
			if (func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (func_202(iParam0, &Local_17, 2097152))
				{
					func_904(iParam0, uParam1, 41);
				}
				else
				{
					func_904(iParam0, uParam1, 40);
				}
				return;
			}
			if (func_901(iParam0) == 0 || func_272(iParam0, 1))
			{
				return;
			}
			func_904(iParam0, uParam1, 39);
			break;
		case 39:
			if (func_272(iParam0, 16))
			{
				return;
			}
			if (PED::IS_PED_ON_MOUNT(iVar2))
			{
				func_904(iParam0, uParam1, 38);
				return;
			}
			if (func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (func_202(iParam0, &Local_17, 2097152))
				{
					func_904(iParam0, uParam1, 41);
				}
				else
				{
					func_904(iParam0, uParam1, 40);
				}
				(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
				return;
			}
			break;
		case 40:
			if (!func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (!func_202(iParam0, &Local_17, 1048576))
				{
					func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 38);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			func_414(iParam0, &Local_17, 1048576);
			if (iVar0 > 15000)
			{
				func_904(iParam0, uParam1, 41);
				return;
			}
			break;
		case 41:
			if (!func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (!func_202(iParam0, &Local_17, 1048576))
				{
					func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 38);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			func_414(iParam0, &Local_17, 1048576);
			if (!func_202(iParam0, &Local_17, 2097152) && func_876(iParam0, 6, &Local_361, 0))
			{
				func_275(iParam0, &Local_17, 2097152);
			}
			if (iVar0 > 28000)
			{
				func_904(iParam0, uParam1, 42);
				return;
			}
			break;
		case 42:
			if (!func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (!func_202(iParam0, &Local_17, 1048576))
				{
					func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 38);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			func_414(iParam0, &Local_17, 1048576);
			if (iVar0 > 45000)
			{
				func_904(iParam0, uParam1, 37);
				func_63(&Local_17, 16);
				return;
			}
			break;
		case 43:
			break;
		case 37:
			break;
	}
}

bool func_715(int iParam0)
{
	return ENTITY::GET_ENTITY_SPEED(iParam0) < 0.5f;
}

int func_716(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if ((uParam0->f_16[iVar0 /*12*/])->f_11 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_717(int iParam0, var uParam1)
{
	func_418(iParam0, uParam1, 16);
	func_417(iParam0, uParam1, 64);
	func_417(iParam0, uParam1, 32);
	func_417(iParam0, uParam1, 1);
	(Local_17.f_257[iParam0 /*5*/])->f_3 = 255;
	uParam1->f_322 = (uParam1->f_322 - 1);
}

void func_718(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_203(iParam0, &Local_17, 2048) && func_1085(iParam0, &uVar2))
	{
		func_418(iParam0, &Local_17, 2048);
	}
	if (func_1086(iParam0, iParam7))
	{
		if (func_41(Local_361[*iParam7 /*52*/], 32))
		{
			*iParam5 = 2;
		}
		else if (func_41(Local_361[*iParam7 /*52*/], 64))
		{
			*iParam5 = 3;
		}
		else
		{
			*iParam5 = 4;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*iParam7));
		*iParam6 = PLAYER::GET_PLAYER_PED(iVar0);
		*bParam8 = func_944(iParam0, *iParam7);
	}
	else
	{
		*iParam5 = func_854(iParam1, iParam6, &iVar0);
		*bParam8 = 0;
		*iParam7 = 255;
		if (*iParam5 == 2 || *iParam5 == 3)
		{
			*iParam5 = 0;
		}
	}
	if (*iParam5 == 0 && !func_203(iParam0, &Local_17, 2048))
	{
		return;
	}
	switch (*iParam5)
	{
		case 0:
			if (((func_203(iParam0, &Local_17, 256) || func_203(iParam0, &Local_17, 512)) || func_855(&Local_2026, vParam2, 1)) || func_855(&Local_2026, vParam2, 0))
			{
			}
			else
			{
				func_417(iParam0, &Local_17, 64);
				func_417(iParam0, &Local_17, 8);
				func_417(iParam0, &Local_17, 1);
				func_417(iParam0, &Local_17, 32);
				(Local_17.f_257[iParam0 /*5*/])->f_3 = 255;
				(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			}
			break;
		case 1:
			func_418(iParam0, &Local_17, 64);
			func_417(iParam0, &Local_17, 1);
			func_417(iParam0, &Local_17, 32);
			(Local_17.f_257[iParam0 /*5*/])->f_3 = 255;
			if ((NETWORK::_0xB07D3185E11657A5(*iParam6) && PED::IS_PED_IN_ANY_VEHICLE(*iParam6, true)) && func_114(PED::GET_VEHICLE_PED_IS_IN(*iParam6, true), &Local_17, &uVar1))
			{
				func_418(iParam0, &Local_17, 8);
				(Local_17.f_257[iParam0 /*5*/])->f_2 = uVar1;
			}
			else
			{
				func_417(iParam0, &Local_17, 8);
				(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			}
			break;
		case 2:
			func_418(iParam0, &Local_17, 64);
			func_418(iParam0, &Local_17, 1);
			func_417(iParam0, &Local_17, 8);
			func_417(iParam0, &Local_17, 32);
			(Local_17.f_257[iParam0 /*5*/])->f_3 = iVar0;
			(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			func_63(&Local_17, 134217728);
			break;
		case 3:
			func_418(iParam0, &Local_17, 64);
			func_418(iParam0, &Local_17, 32);
			func_417(iParam0, &Local_17, 8);
			func_417(iParam0, &Local_17, 1);
			(Local_17.f_257[iParam0 /*5*/])->f_3 = iVar0;
			(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			func_63(&Local_17, 134217728);
			break;
		case 4:
			func_418(iParam0, &Local_17, 64);
			func_417(iParam0, &Local_17, 1);
			func_417(iParam0, &Local_17, 32);
			(Local_17.f_257[iParam0 /*5*/])->f_3 = iVar0;
			(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			func_63(&Local_17, 134217728);
			break;
	}
}

void func_719(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	uParam1->f_322 = (uParam1->f_322 - 1);
	if (bParam2)
	{
		func_418(iParam0, uParam1, 4);
		func_63(uParam1, 262144);
		uParam1->f_324++;
		iVar0 = 5;
		if (uParam1->f_322 == 0)
		{
			func_63(&Local_17, 33554432);
			Local_17.f_328 = iParam0;
		}
	}
	else
	{
		func_63(uParam1, 8192);
		uParam1->f_323++;
		iVar0 = 4;
		if (uParam1->f_322 == 0)
		{
			func_63(&Local_17, 16777216);
			Local_17.f_328 = iParam0;
		}
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_257[iParam0 /*5*/])->f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_257[iParam0 /*5*/])->f_3))
	{
		(Local_17.f_257[iParam0 /*5*/])->f_4 = GANG::_0x901E0DC25080C8B9((Local_17.f_257[iParam0 /*5*/])->f_3);
	}
	func_538(iVar0, (Local_17.f_257[iParam0 /*5*/])->f_3, iParam0, func_537(0, 8));
	func_418(iParam0, uParam1, 2);
}

void func_720(int iParam0, int iParam1)
{
	if (func_203(iParam0, &Local_17, 4096))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_538(8, iParam1, iParam0, func_537(0, 8));
	func_418(iParam0, &Local_17, 4096);
}

int func_721(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		return 0;
	}
	if (iParam6 != 255)
	{
		if (bParam7)
		{
			bVar1 = (bParam5 && func_41(Local_361[iParam6 /*52*/], 131072));
		}
		else
		{
			bVar1 = (bParam5 && func_41(Local_361[iParam6 /*52*/], 65536));
		}
	}
	if (!bVar1 && !func_855(&Local_2026, vParam0, bParam7))
	{
		return 0;
	}
	return 1;
}

int func_722()
{
	int iVar0;

	if (Local_17.f_315 < 2)
	{
		iVar0 = 2;
	}
	else if (Local_17.f_315 < 3)
	{
		iVar0 = 3;
	}
	else if (Local_17.f_315 < 6)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 4;
	}
	return func_821((iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2)), func_724());
}

int func_723()
{
	if (!func_55(&Local_17, 128))
	{
		return func_966(0, func_1087());
	}
	return func_966(MISC::GET_RANDOM_INT_IN_RANGE(func_1088(), func_1089() + 1), 0);
}

int func_724()
{
	int iVar0;

	if (Local_17.f_315 < 2)
	{
		iVar0 = 2;
	}
	else if (Local_17.f_315 < 3)
	{
		iVar0 = 3;
	}
	else if (Local_17.f_315 < 6)
	{
		iVar0 = 6;
	}
	else
	{
		iVar0 = 8;
	}
	return iVar0;
}

int func_725()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 1;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_178(Var1, 2064763470, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

Vector3 func_726(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam0 <= 0 || iParam1 <= 1)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 1f, 0f };
	func_936(&vVar0, &(vVar0.f_1), ((360f * IntToFloat((iParam0 - 1))) / IntToFloat((iParam1 - 1))));
	return vVar0;
}

int func_727(int iParam0)
{
	*iParam0 = 0;
	while (*iParam0 < 20)
	{
		if ((Local_17.f_16[*iParam0 /*12*/])->f_2 != 0)
		{
		}
		else
		{
			return 1;
		}
		*iParam0++;
	}
	return 0;
}

int func_728(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
	{
		return 0;
	}
	fVar4 = iParam5;
	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar5 = 0;
			while (iVar5 < 20)
			{
				if ((Local_17.f_16[iVar5 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (func_202(iVar5, &Local_17, 32))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar5 /*12*/])))
				{
				}
				else
				{
					iVar6 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar5 /*12*/]));
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
		case -409129282:
			iVar5 = 0;
			while (iVar5 < 4)
			{
				if ((!func_203(iVar5, &Local_17, 128) || func_203(iVar5, &Local_17, 2)) || func_203(iVar5, &Local_17, 16))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar5 /*5*/])))
				{
				}
				else
				{
					iVar7 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar5 /*5*/]));
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
			return 0;
	}
	if (fVar4 == 0f)
	{
		return 0;
	}
	return 1;
}

float func_729(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_730(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { 0f, 4f, 0f };
	func_936(&vVar0, &(vVar0.f_1), ((360f * IntToFloat(iParam0)) / IntToFloat(iParam1)));
	return vVar0;
}

void func_731(int iParam0, var uParam1)
{
	uParam1->f_2 = iParam0;
}

int func_732(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 128))
		{
		}
		else if (func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else if (!bParam2 && func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 2))
		{
		}
		else if (!func_113((uParam0->f_257[iVar0 /*5*/])->f_1, iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_733(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if (iParam0 != -1 && (Local_17.f_16[iVar0 /*12*/])->f_11 != iParam0)
		{
		}
		else if (bParam1)
		{
			if ((Local_17.f_16[iVar0 /*12*/])->f_3 == 25 || (Local_17.f_16[iVar0 /*12*/])->f_3 == 26)
			{
			}
			else if ((Local_17.f_16[iVar0 /*12*/])->f_3 == 17)
			{
			}
			else if ((Local_17.f_16[iVar0 /*12*/])->f_3 == 0)
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
			{
			}
			else
			{
				return 1;
			}
			iVar0++;
			return 0;
		}
	}

int func_734(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar0 /*4*/])))
		{
		}
		else if (!func_113((uParam0->f_3[iVar0 /*4*/])->f_1, iParam1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_735(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 != -1 && (uParam0->f_16[iVar0 /*12*/])->f_11 != iParam1)
		{
		}
		else if (!func_1090((uParam0->f_16[iVar0 /*12*/])->f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_736(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam2 != -1 && iParam2 == iVar0)
		{
		}
		else if (func_113((uParam0->f_3[iVar0 /*4*/])->f_1, iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_737()
{
	if (func_55(&Local_17, 16777216))
	{
		return 1;
	}
	else if (func_55(&Local_17, 33554432))
	{
		return 1;
	}
	return 0;
}

int func_738()
{
	if (func_55(&Local_17, 16777216))
	{
		return -94224997;
	}
	else if (func_55(&Local_17, 33554432))
	{
		return 575287677;
	}
	return 0;
}

void func_739(int iParam0)
{
	Local_17.f_299.f_1 = iParam0;
}

void func_740(int iParam0)
{
	func_122(&(Local_17.f_299.f_5), iParam0);
}

int func_741(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (bParam1 && !func_113((Local_361[iVar0 /*52*/])->f_41.f_1, 1))
		{
		}
		else if (func_113((Local_361[iVar0 /*52*/])->f_41.f_1, iParam0))
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
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_742(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_605(2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Local_17.f_329[iVar0] = 255;
		iVar0++;
	}
	bVar1 = !func_1091(iParam0);
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
			if (!func_258(1, iVar3))
			{
			}
			else
			{
				if (!bVar1)
				{
					if (!func_41(Local_361[iVar3 /*52*/], 32))
					{
					}
					else
					{
						Jump @172; //curOff = 149
						if (!func_41(Local_361[iVar3 /*52*/], 64))
						{
						}
						else
						{
							Local_17.f_329[iVar0] = iVar4;
							iVar0++;
							if (iVar0 >= 7)
							{
							}
							else
							{
								iVar2++;
							}
							func_740(2);
						}
					}
				}
			}
		}
	}

int func_743(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (bParam1 && !func_113((Local_361[iVar0 /*52*/])->f_41.f_1, 1))
		{
		}
		else if ((Local_361[iVar0 /*52*/])->f_41 == iParam0)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_744(int iParam0)
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
				uVar0[iVar3] = (uVar0[iVar3] || (Local_361[iVar4 /*52*/])->f_41.f_2[iVar3]) // PointerArith;
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
			return 0;
		}
		iVar5++;
	}
	return 1;
}

void func_745(int iParam0)
{
	func_437(&(Local_17.f_299.f_5), iParam0);
}

void func_746()
{
	Local_17.f_299.f_2++;
}

void func_747(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("attack"):
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -1102018457);
					break;
			}
			break;
		case joaat("defend"):
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 1428825552);
					break;
			}
			break;
		case 404851220:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 1968287849);
					break;
			}
			break;
		case joaat("COLLECT"):
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 2039472637);
					break;
			}
			break;
	}
}

int func_748(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	return func_754(iParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

int func_749(int iParam0)
{
	return Global_1122836[iParam0 /*54*/];
}

int func_750(int iParam0, int iParam1, int iParam2)
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

void func_751(int iParam0, int iParam1)
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

int func_752(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_804(741274143, func_803(iParam0)) };
	return func_509(Var0, -1);
}

int func_753(int iParam0)
{
	return func_1092(iParam0, 887702464, 1);
}

int func_754(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_751(iParam2, -372840566);
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
	func_1093(uParam1, iParam0, Var3);
	return 1;
}

void func_755(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = iParam0;
	while (*iParam2 >= 32)
	{
		*iParam2 = (*iParam2 - 32);
		*iParam1++;
	}
}

int func_756(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_481())
	{
		*iParam1 = 0;
		return 1;
	}
	if (func_1094(iParam0, 2))
	{
		if (func_1094(iParam0, 3))
		{
			iVar3 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			if (func_1095(PLAYER::PLAYER_ID(), &uVar0, &iVar1, 1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
					return 0;
				}
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
				{
					return 0;
				}
				iVar2 = func_1096(iVar3, 1);
				if (iVar2 == iVar1)
				{
					return 1;
				}
			}
		}
	}
	else
	{
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			if (func_1097(iVar4) != iParam0)
			{
			}
			else if (func_1098(iVar4) != 2)
			{
			}
			else
			{
				*iParam1 = iVar4;
				return 1;
			}
			iVar4++;
		}
	}
	return 0;
}

bool func_757(int iParam0, int iParam1)
{
	return (((*Global_1114828)[iParam0 /*1991*/])->f_19 && iParam1) != 0;
}

bool func_758(var uParam0, int iParam1, int iParam2)
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

bool func_759(var uParam0, int iParam1, int iParam2)
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

void func_760(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_260), iParam0))
		{
			SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19946.f_260), iParam0);
		}
	}
	else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_260), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_19946.f_260), iParam0);
		func_1099(iParam0);
	}
}

void func_761(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26835), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26836), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_26834), iParam0);
}

void func_762(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_259), iParam0))
		{
			SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19946.f_259), iParam0);
		}
	}
	else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_259), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_19946.f_259), iParam0);
		func_1099(iParam0);
	}
}

void func_763(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26834), iParam0);
}

char* func_764()
{
	return "Match_End_Timer";
}

char* func_765()
{
	return "RDRO_Countdown_Sounds";
}

char* func_766()
{
	return "Round_End_Timer";
}

char* func_767()
{
	return "10S";
}

char* func_768()
{
	return "Out_Of_Bounds";
}

char* func_769()
{
	return "321_Countdown";
}

char* func_770()
{
	return "HUD_MP_FREE_MODE";
}

char* func_771()
{
	return "target_spawn";
}

char* func_772()
{
	return "MP005_OBHELT_sounds";
}

int func_773(int iParam0, int iParam1)
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

void func_774(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1132968->f_4641.f_2[func_504(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_1100(iParam0);
	}
	Global_1132968->f_4641.f_2[func_504(iParam0, 1) /*4*/] = bParam1;
}

void func_775(int iParam0, int iParam1, struct<2> Param2, int iParam4)
{
	struct<28> Var0;

	if (!Global_1103537->f_18)
	{
		return;
	}
	if (!func_28(Param2))
	{
		return;
	}
	if (!func_475(iParam0))
	{
		return;
	}
	if (!func_477(iParam1))
	{
		return;
	}
	if (!func_1101(iParam4))
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
	func_386(&Var0);
}

int func_776(int iParam0)
{
	return func_1102(iParam0);
}

int func_777()
{
	return &Global_1902689;
}

void func_778(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(-1919535953, func_803(iParam0)) };
	func_1103(Var0, iParam1);
}

void func_779(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(817387112, func_803(iParam0)) };
	func_1104(Var0, iParam1);
}

void func_780(int iParam0)
{
	if (func_758(&(Global_1103537->f_1739.f_6), iParam0, 2))
	{
	}
}

void func_781(int iParam0)
{
	if (func_758((*Global_1124565)[PLAYER::PLAYER_ID() /*7*/], iParam0, 2))
	{
	}
}

void func_782(int iParam0)
{
	func_1105(&(Global_1277020->f_144), iParam0);
}

void func_783(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(440364183, func_803(iParam0)) };
	func_1103(Var0, iParam1);
}

void func_784(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam1)
	{
		iVar0 = 1822827642;
	}
	else
	{
		iVar0 = joaat("attempts");
	}
	Var1 = { func_804(iVar0, func_803(iParam0)) };
	func_808(Var1);
}

int func_785(int iParam0)
{
	return func_1106(iParam0);
}

void func_786(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &((Global_1100950->f_33[iParam0 /*16*/])->f_3.f_9), 4);
}

void func_787(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar35;

	if (!func_1107(*uParam0))
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
	func_1108(&vVar3);
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
				if (!func_1107(&(vVar3[(iVar0 - 1) /*3*/])))
				{
				}
				else
				{
					vVar35.x = &vVar3[(iVar0 - 1) /*3*/];
					vVar35.f_1 = (vVar3[(iVar0 - 1) /*3*/])->f_2;
					vVar35.f_2 = func_1109((vVar3[(iVar0 - 1) /*3*/])->f_1);
					if (func_1110(uParam0, &vVar35))
					{
						iVar2 = func_1111((iVar0 - 1));
					}
					else
					{
						iVar1 = func_1111((iVar0 - 1));
						func_1112(iVar1, iVar0);
					}
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (iVar2 == 0)
	{
		iVar2 = func_1113(uParam0);
		if (iVar2 == 0)
		{
			return;
		}
	}
	func_1112(iVar2, 0);
}

void func_788(int iParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_428(iParam0);
	iVar2 = func_1114();
	iVar3 = func_106(Param1);
	iVar5 = func_785(iVar0);
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
			if (func_811(iParam0, 4))
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
	if (!func_811(iParam0, 8))
	{
		iVar2 = 0;
	}
	func_1115(iVar0, iVar1, iVar3, iVar2, iVar4);
	if (func_811(iParam0, 8))
	{
		if (iVar2 != 0)
		{
			func_1116(iParam0);
			func_1117(iParam0);
		}
	}
}

int func_789(int iParam0)
{
	switch (func_480(iParam0))
	{
		case -323664079:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_790(int iParam0, int iParam1)
{
	Global_1103537->f_1752.f_5[iParam0] = (&Global_1103537->f_1752.f_5[iParam0] + iParam1);
}

void func_791(int iParam0)
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

void func_792(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam1)
	{
		iVar0 = 1822827642;
		iVar1 = func_813(iParam0);
	}
	else
	{
		iVar0 = joaat("attempts");
		iVar1 = func_814(iParam0);
	}
	Var2 = { func_804(iVar0, iVar1) };
	func_808(Var2);
}

void func_793()
{
	func_1118(4);
	func_817(1);
}

bool func_794(int iParam0, int iParam1)
{
	return (((*Global_1122836)[iParam0 /*54*/])->f_34 && iParam1) != 0;
}

void func_795(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1122836)[iVar0 /*54*/])->f_34 = (((*Global_1122836)[iVar0 /*54*/])->f_34 || iParam0);
}

struct<2> func_796(int iParam0)
{
	return (Global_1198382->f_1[iParam0 /*10*/])->f_4;
}

bool func_797(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_946(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_798(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_799(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_801(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_800(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (!func_28(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_585(Param0) && !func_797(Param0))
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
		if (func_946(Param0) == 3)
		{
			func_1119(1, -1706799532);
		}
		else if (func_946(Param0) == 4)
		{
			func_1119(0, -1706799532);
		}
	}
	if (func_946(Param0) == 3 || (func_946(Param0) == 1 && STATS::_0x01F4D242765C6B24(func_23(Param0))))
	{
		if (bParam3 != -1)
		{
			func_1120(Param0, bParam3, bParam4);
		}
		else
		{
			func_1120(Param0, 2, bParam4);
		}
	}
	func_1121(Param0, 0);
	if (func_29(func_969(0), Param0))
	{
		func_1122(1);
		func_1123(0);
		func_1124(0);
		func_1125(1);
	}
	func_1126(Param0);
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_1127(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

bool func_801(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

struct<2> func_802(int iParam0)
{
	if (!func_473(iParam0))
	{
		return func_1128();
	}
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_5;
}

int func_803(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case joaat("joe"):
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case joaat("alden"):
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		default:
			break;
	}
	return 0;
}

struct<2> func_804(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_805(struct<2> Param0, int iParam2)
{
	func_809(Param0, iParam2);
}

void func_806(struct<2> Param0, int iParam2)
{
	func_809(Param0, func_1129(iParam2));
}

void func_807(struct<2> Param0, int iParam2)
{
	func_809(Param0, iParam2);
}

void func_808(var uParam0, var uParam1)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, 1);
}

void func_809(var uParam0, int iParam1, int iParam2)
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

void func_810(int iParam0)
{
	if (!func_1130(((*Global_1128435)[&Global_1275573 /*83*/])->f_74, iParam0))
	{
		func_1131(&(((*Global_1128435)[&Global_1275573 /*83*/])->f_74), iParam0);
		Global_1128395->f_32 = ((*Global_1128435)[&Global_1275573 /*83*/])->f_74;
	}
}

bool func_811(int iParam0, int iParam1)
{
	return func_1132(&((Global_1103537->f_7066[iParam0 /*5*/])->f_2), iParam1);
}

void func_812(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar7;
	var uVar8;

	if (!func_1133(iParam0))
	{
		return;
	}
	iVar7 |= 8;
	switch (iParam1)
	{
		case 2:
			iVar7 |= 2;
			break;
		case 1:
			iVar7 |= 1;
			break;
		default:
			break;
	}
	switch (iParam2)
	{
		case -1365731393:
		case joaat("none"):
			iVar7 |= 16;
			break;
		case -508253498:
			iVar7 |= 80;
			break;
		case 566295171:
			iVar7 |= 144;
			break;
		case -1881397389:
			iVar7 |= 272;
			break;
		case -356110550:
			iVar7 |= 528;
			break;
		case -406386912:
			iVar7 |= 1040;
			break;
		case -1553095031:
			iVar7 |= 2064;
			break;
		case 1923632299:
			iVar7 |= 32;
			break;
		case 475709606:
			iVar7 |= 2080;
			break;
		default:
			break;
	}
	iVar1 = func_1134(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1135(iParam0, iVar0, &uVar3);
		func_1136(&uVar3, iVar7);
		iVar0++;
	}
	switch (iParam1)
	{
		case 0:
			iVar2 = 0;
			break;
		case 1:
			iVar2 = 1575427269;
			break;
		case 2:
			iVar2 = 824391763;
			break;
		default:
			iVar2 = 0;
			break;
	}
	if (iVar2 != 0)
	{
		func_1137(iParam0, iVar2, iParam3);
	}
	iVar1 = func_1138(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1139(iParam0, iVar0, &uVar8);
		func_1140(&uVar8, iVar7);
		iVar0++;
	}
}

int func_813(int iParam0)
{
	switch (iParam0)
	{
		case joaat("standard"):
			return 1963482335;
		case joaat("sheriff"):
			return 1963482335;
		case joaat("post"):
			return 1963482335;
		case joaat("train"):
			return 1963482335;
		case 64621749:
			return 416516838;
		default:
			break;
	}
	return 0;
}

int func_814(int iParam0)
{
	switch (iParam0)
	{
		case joaat("standard"):
			return -1165569262;
		case joaat("sheriff"):
			return -1165569262;
		case joaat("post"):
			return -1165569262;
		case joaat("train"):
			return -1165569262;
		case -323664079:
			return 1397040943;
		case 64621749:
			return 133648705;
		case 1766283257:
			return -741823262;
		default:
			break;
	}
	return 0;
}

int func_815(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	if (!func_1141(iParam0, &uVar0, &uVar1))
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(uVar0, uVar1, iParam1);
	return 1;
}

void func_816(int iParam0)
{
	func_1142(iParam0);
}

void func_817(int iParam0)
{
	func_1143(iParam0);
}

void func_818(int iParam0)
{
	if (func_842(0, 0, 0, 0) || iParam0 > (Global_1275573->f_21 - Global_1103537->f_7058))
	{
		Global_1103537->f_7058 = Global_1275573->f_21;
		Global_1103537->f_7058.f_1 = iParam0;
	}
}

void func_819(int iParam0)
{
	if (func_758(Global_1124790, iParam0, 1))
	{
	}
}

void func_820(int iParam0, int iParam1)
{
	Global_1124790->f_2[iParam0] = iParam1;
}

int func_821(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

var func_822(int iParam0)
{
	return ((*Global_1276359)[iParam0 /*4*/])->f_2;
}

int func_823(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	struct<5> Var2;
	int iVar7;
	int iVar8;

	MISC::_COPY_MEMORY(uParam2, &uVar0, 2);
	if (!func_1133(iParam0))
	{
		return 0;
	}
	if (!func_1144(&Var2))
	{
		return 0;
	}
	if (!func_1145(Var2, &(Var2.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var2, &(Var2.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var2, &(Var2.f_1), 10, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1145(Var2, &(Var2.f_1), 12, iParam1, 0, 0))
	{
		return 0;
	}
	iVar7 = func_1146(Var2);
	if (iVar7 == 0)
	{
		return 0;
	}
	iVar8 = func_1147(Var2);
	if (iVar8 == 0)
	{
		return 0;
	}
	*uParam2 = { func_804(iVar8, iVar7) };
	if (!STATS::_STAT_ID_IS_VALID(uParam2))
	{
		return 0;
	}
	return 1;
}

int func_824(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (func_515(iParam1))
	{
		if (iVar0 == func_506(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_506(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_825(int iParam0)
{
	if (!func_515(iParam0))
	{
		return;
	}
	(*Global_1122836)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*54*/] = iParam0;
}

bool func_826(int iParam0, int iParam1, int iParam2)
{
	return (((*Global_1122836)[iParam0 /*54*/])->f_1[iParam1] && iParam2) != 0;
}

void func_827()
{
	if (!func_1148())
	{
		return;
	}
	if (!func_28(*Global_1051163))
	{
		return;
	}
	func_1149(Global_1051163);
}

void func_828(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] = (&((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] - (((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] && iParam1));
}

bool func_829(int iParam0)
{
	return func_951(Global_1124790, iParam0, 1);
}

int func_830(int iParam0)
{
	return &(Global_1124790->f_2[iParam0]);
}

int func_831(int iParam0)
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

bool func_832()
{
	return Global_1103537->f_21.f_37;
}

int func_833()
{
	return Global_1103537->f_21.f_37.f_1;
}

void func_834(int iParam0, int iParam1, struct<2> Param2)
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
	Var0.f_16 = 304038664;
	Var0.f_7 = { Param2 };
	func_385(&Var0, uVar31);
}

void func_835(int iParam0)
{
	((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_47 = (((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_47 || iParam0);
}

int func_836(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&(Local_361[iParam0 /*52*/])->f_2[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_837(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&(Local_361[iParam0 /*52*/])->f_2.f_2[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_838(var uParam0, var uParam1)
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
	if (func_441(iVar0, 1))
	{
		return;
	}
	if (!func_442(iVar0))
	{
		return;
	}
	func_835(1);
}

void func_839(var uParam0, var uParam1)
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
	if (func_441(iVar0, 2))
	{
		return;
	}
	if (!func_442(iVar0))
	{
		return;
	}
	func_835(2);
}

int func_840(int iParam0, int iParam1)
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

int func_841(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (PED::_IS_PED_CARRYING(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	}
	else if (func_554(iParam0))
	{
		iVar0 = func_1150(iParam0, 6);
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
	if (Local_2026.f_10 == -19759302)
	{
		if (!ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			return 0;
		}
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((&Local_17.f_16[iVar2 /*12*/] != iVar1 || (Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar2 /*12*/])))
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
	else if (Local_2026.f_10 == -409129282)
	{
		if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
		{
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if ((((&Local_17.f_257[iVar3 /*5*/] != iVar1 || !func_203(iVar3, &Local_17, 128)) || func_203(iVar3, &Local_17, 2)) || func_203(iVar3, &Local_17, 16)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar3 /*5*/])))
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

bool func_842(float fParam0, bool bParam1, bool bParam2, float fParam3)
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

bool func_843(int iParam0)
{
	return (Global_19 && iParam0) != 0;
}

int func_844()
{
	if (func_1151())
	{
		return 0;
	}
	if (Global_1572887->f_13 == -1)
	{
		if (Global_1939178->f_38 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_34, 311);
	}
	else
	{
		return &(Global_1954472->f_1616[3]);
	}
	return 0;
}

var func_845(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_1152() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1153());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1153());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1153());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1154(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_1155(iVar2))
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
				if (iVar9 & 8192 != 0 && func_1156(iVar2) != 1)
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
					if (!func_1157(iVar10))
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

void func_846(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 52;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 42, &uParam1);
}

int func_847(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (&Global_1900788 == 15)
	{
		return -1;
	}
	if (!func_1158(Param0))
	{
		return -1;
	}
	iVar1 = func_1159(Param0);
	if (iVar1 >= 0)
	{
		func_1160(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900788;
		*((*Global_1900789)[iVar0 /*2*/]) = { Param0 };
		*((*Global_1900820)[iVar0 /*2*/]) = { Var2 };
		func_1160(Param0, 1);
		Global_1900788 = &Global_1900788 + 1;
		if (&Global_1900788 > 15)
		{
			Global_1900788 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_848(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_28(Param0))
	{
		return;
	}
	if (!func_797(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1161(Param0);
	}
	if (!func_28(func_969(0)))
	{
		func_1121(Param0, 3);
		func_1122(bParam3);
		func_1123(!bParam4);
		func_1162(Param0, -1);
		if (bParam2 && !func_1163(2))
		{
			func_1164(&Global_0, 1024);
		}
		func_1125(1);
	}
	else
	{
		func_1162(Param0, -1);
		func_1121(Param0, 4);
		func_1165(Param0, 0);
	}
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_1127(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1166(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_849(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_5))
	{
		return 0;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE((Local_17.f_16[iParam0 /*12*/])->f_5);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0;
	}
	*iParam1 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iVar0, func_868(), false);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	return 1;
}

bool func_850(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return MISC::_0x8F4F050054005C27(&((Local_361[iParam1 /*52*/])->f_2.f_6), iParam0);
}

void func_851(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_2), iParam0);
}

void func_852(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_6), iParam0);
}

void func_853(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_12), iParam0);
}

int func_854(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	*iParam1 = func_898();
	*iParam2 = 255;
	if (!func_1167(iParam0, iParam1, 1))
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
	if (func_41(Local_361[iVar0 /*52*/], 32))
	{
		return 2;
	}
	if (func_41(Local_361[iVar0 /*52*/], 64))
	{
		return 3;
	}
	return 4;
}

int func_855(bool bParam0, vector3 vParam1, bool bParam4)
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
		return 0;
	}
	if (!VOLUME::_0xF256A75210C5C0EB(iVar0, vParam1))
	{
		return 0;
	}
	return 1;
}

int func_856(int iParam0)
{
	return func_1168(iParam0, 0);
}

void func_857(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_2), iParam0);
}

void func_858(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_6), iParam0);
}

void func_859(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_12), iParam0);
}

char* func_860(int iParam0)
{
	if (PED::IS_PED_MALE(iParam0))
	{
		return "STRANGER_MALE";
	}
	return "STRANGER_FEMALE";
}

int func_861(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	var uVar2;

	if ((Local_17.f_16[iParam0 /*12*/])->f_2 == 401658241)
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Local_2026.f_4))
	{
		return 0;
	}
	if (func_1056(iParam0, &iVar1))
	{
		uVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), iVar1, 0);
	}
	else if (func_1057(iParam0, &uVar2))
	{
		uVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), PED::_0x62FDF4E678E40CC6(iParam1, uVar2), 0);
	}
	else if (!bParam2)
	{
		uVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), 0, 0);
	}
	return uVar0;
}

char* func_862()
{
	return "NET_CHU_ILO_TITLE_PASSENGER";
}

char* func_863()
{
	return "NET_CHU_ILO_TITLE_VIP";
}

char* func_864()
{
	return "NET_CHU_ILO_TITLE_ENEMY";
}

bool func_865(int iParam0, var uParam1)
{
	return (uParam1->f_16[iParam0 /*12*/])->f_3;
}

void func_866(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	vVar3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam2) };
	if (ENTITY::_0x6BFBDC46139C45AB(vVar0) && func_1169(&vVar0, 50, 10, 0, 0))
	{
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1, vVar0, vVar3, 2);
}

int func_867(int iParam0, int iParam1)
{
	int iVar0;

	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar0 /*5*/])))
		{
		}
		else
		{
			*iParam1 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar0 /*5*/]));
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*iParam1, iParam0))
			{
			}
			else
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_868()
{
	return "BAG";
}

void func_869(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar3 = func_1170(vVar0, iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	if (!ENTITY::_0x8C03CD6B5E0E85E8(iParam0, iVar3))
	{
	}
}

int func_870(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::_IS_PED_HOGTIED(iParam0) && PED::_0x3D9F958834AB9C30(iParam0) == iVar0)
	{
		return 1;
	}
	if (PED::_IS_PED_LASSOED(iParam0) && PED::_0x0C31C51168E80365(iParam0) == iVar0)
	{
		return 1;
	}
	if (((PED::_0x3BDFCF25B58B0415(iParam0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && PED::_0x0E99E3BF11BB6367(iVar0)) && PED::_0xD0B7AEB56229D317(iVar0) == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_871(int iParam0)
{
	if (!PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	if (PED::GET_PEDS_JACKER(iParam0) != PLAYER::PLAYER_PED_ID())
	{
		return 0;
	}
	return 1;
}

int func_872(int iParam0)
{
	if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam0, 1000))
	{
		return 1;
	}
	return 0;
}

int func_873(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;

	if (!func_1171(iParam0, 1, 1, 1, 0, 0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	fVar1 = func_1172(iVar0, iParam0);
	if (((fVar1 < 30f && PED::_0x06087579E7AA85A9(iParam0, iVar0, 180f, 30f, 180f, 30f)) && *uParam1 != 0) && uParam1->f_1 > 1000)
	{
		return 1;
	}
	return 0;
}

int func_874(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_55(uParam0, 16))
	{
		return 0;
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
			else if (!func_41((*uParam1)[iVar0 /*52*/], 2))
			{
			}
			else
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_875(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	if (fParam2 == 180f)
	{
		return func_1173(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar3 - vVar0) > 0f;
	}
	fVar6 = (fParam2 * 0.5f);
	fVar7 = func_1173(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), func_590(vVar3 - vVar0));
	return MISC::ACOS(fVar7) < fVar6;
}

int func_876(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_755(iParam0, &iVar1, &iVar0);
	if (bParam3)
	{
		return MISC::IS_BIT_SET(((*uParam2)[Local_2026.f_634 /*52*/])->f_16[iParam1 /*2*/][iVar1], iVar0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!MISC::IS_BIT_SET(((*uParam2)[iVar2 /*52*/])->f_16[iParam1 /*2*/][iVar1], iVar0))
		{
		}
		else
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_877(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	var uVar1;
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
	if (func_876(iParam0, iParam2, uParam3, bParam5))
	{
		return;
	}
	if (bParam7)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam1))
		{
			return;
		}
		if (func_911(iParam1, 0))
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
	uVar1 = func_1174(iParam2);
	sVar2 = func_1175(iParam2, (Local_17.f_16[iParam0 /*12*/])->f_2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
	}
	else if (!func_1176(iParam1, sVar2, uVar1, iParam4, !bParam5, 0, 0, 1))
	{
		sVar2 = func_1177(iParam2, (Local_17.f_16[iParam0 /*12*/])->f_2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !func_1176(iParam1, sVar2, uVar1, iParam4, !bParam5, 0, 0, 1))
		{
			sVar2 = func_1178(iParam2, (Local_17.f_16[iParam0 /*12*/])->f_2);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !func_1176(iParam1, sVar2, uVar1, iParam4, !bParam5, 0, 0, 1))
			{
			}
		}
	}
	func_912(iParam0, iParam2, (*uParam3)[Local_2026.f_634 /*52*/]);
}

void func_878(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_755(iParam0, &iVar1, &iVar0);
	MISC::CLEAR_BIT((*uParam2->f_16[iParam1 /*2*/])[iVar1], iVar0);
}

int func_879(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_7 != iVar1)
		{
		}
		else if (func_202(iVar0, &Local_17, 32))
		{
		}
		else if (!bParam0)
		{
			if (func_202(iVar0, &Local_17, 65536) || func_202(iVar0, &Local_17, 131072))
			{
			}
			else if (!func_976(iVar0, 255))
			{
			}
			else
			{
				return 1;
			}
			iVar0++;
			return 0;
		}
	}

int func_880(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (uParam1->f_16[iParam0 /*12*/])->f_11;
	if (iVar0 > 3 || iVar0 < 0)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iVar0 /*4*/])))
	{
		return 0;
	}
	iVar1 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iVar0 /*4*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_881(int iParam0, var uParam1)
{
	return NETWORK::NET_TO_VEH(&(uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/]));
}

int func_882(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_55(&Local_17, 16))
	{
		iVar1 = 524308;
	}
	else
	{
		iVar1 = 524419;
	}
	if (func_339(iParam0, uParam1, 2))
	{
		iVar0 = iVar1 | 524288 | 4 | 16 | 32 | 2097152 | 67108864;
	}
	else
	{
		iVar0 = iVar1 | 524288 | 4 | 16 | 32;
	}
	return iVar0;
}

void func_883(int iParam0)
{
	if (!func_921(iParam0))
	{
		return;
	}
	if (func_555(iParam0, 716706914))
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iParam0, 1, 1, 0, 0);
}

int func_884(int iParam0, var uParam1, float fParam2)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return 0;
	}
	iVar0 = (iParam0 - 1);
	if (iVar0 >= fParam2->f_10.f_7)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iVar0 /*4*/])))
	{
		return 0;
	}
	if (func_339(iVar0, uParam1, 1))
	{
		return 0;
	}
	return 1;
}

float func_885(int iParam0, int iParam1, float fParam2)
{
	if (iParam0 < 0 || iParam0 >= fParam2->f_10.f_7)
	{
		return 7f;
	}
	if (iParam1 < 0 || iParam1 >= fParam2->f_10.f_7)
	{
		return 7f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS((fParam2->f_29[iParam1 /*5*/])->f_1, (fParam2->f_29[iParam0 /*5*/])->f_1, true);
}

int func_886(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6)
{
	int iVar0;

	if (func_1179(&iParam1, -1273030092, 1) == 2 || ((Local_2026.f_182[iParam0 /*2*/])->f_1 != iParam5 || &Local_2026.f_182[iParam0 /*2*/] != fParam4))
	{
		if (func_579(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			return 0;
		}
		Local_2026.f_182[iParam0 /*2*/] = fParam4;
		(Local_2026.f_182[iParam0 /*2*/])->f_1 = iParam5;
		TASK::TASK_VEHICLE_ESCORT(iVar0, iParam2, iParam3, 3, fParam4, iParam5, fParam6, 20, 20f);
		return 1;
	}
	else if (!func_579(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam4);
	}
	return 0;
}

int func_887(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5)
{
	int iVar0;

	if (func_1179(&iParam1, -258271821, 1) == 2 || ((fParam5->f_182[iParam0 /*2*/])->f_1 != iParam4 || &fParam5->f_182[iParam0 /*2*/] != fParam3))
	{
		if (func_579(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			return 0;
		}
		fParam5->f_182[iParam0 /*2*/] = fParam3;
		(fParam5->f_182[iParam0 /*2*/])->f_1 = iParam4;
		TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, iParam2, fParam3, iParam4);
		return 1;
	}
	else if (!func_579(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam3);
	}
	return 0;
}

int func_888(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8, float fParam9)
{
	int iVar0;

	if (func_1179(&iParam1, 1199744105, 1) == 2 || ((fParam8->f_182[iParam0 /*2*/])->f_1 != iParam7 || &fParam8->f_182[iParam0 /*2*/] != fParam6))
	{
		if (func_579(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		fParam8->f_182[iParam0 /*2*/] = fParam6;
		(fParam8->f_182[iParam0 /*2*/])->f_1 = iParam7;
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iVar0, iParam2, vParam3, fParam6, iParam7, 6, fParam9, fParam9, 0);
		return 1;
	}
	else if (!func_579(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam6);
	}
	return 0;
}

int func_889(int iParam0)
{
	int iVar0;

	if (func_1179(&iParam0, -2117564886, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_COMBAT_HATED_TARGETS(iVar0, 3f);
		return 1;
	}
	return 0;
}

int func_890(int iParam0)
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
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_891(int iParam0, var uParam1, int iParam2)
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
		if (!func_41((*uParam1)[iVar2 /*52*/], 2))
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
				fVar0 = func_549(iParam0, func_928(iVar3), 1);
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
		return func_898();
	}
	return PLAYER::GET_PLAYER_PED(iVar4);
}

int func_892(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	bool bVar1;

	func_886(iParam0, iParam1, iParam3, iParam4, fParam5, iParam6, fParam7);
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
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_237(bVar1))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(bVar1))
	{
		return 0;
	}
	if (func_1180(iVar0, 0, 0, 0) != bVar1)
	{
		func_1059(iVar0, bVar1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	func_1181(iVar0, iParam2, 100f, 40, 1, -753768974);
	return 1;
}

int func_893(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	bool bVar1;

	func_887(iParam0, iParam1, iParam3, fParam4, iParam5, fParam6);
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
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_237(bVar1))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(bVar1))
	{
		return 0;
	}
	if (func_1180(iVar0, 0, 0, 0) != bVar1)
	{
		func_1059(iVar0, bVar1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	func_1181(iVar0, iParam2, 100f, 40, 1, -753768974);
	return 1;
}

int func_894(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8, float fParam9, int iParam10)
{
	int iVar0;
	bool bVar1;

	func_888(iParam0, iParam1, iParam3, vParam4, fParam7, iParam8, fParam9, iParam10);
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
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_237(bVar1))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(bVar1))
	{
		return 0;
	}
	if (func_1180(iVar0, 0, 0, 0) != bVar1)
	{
		func_1059(iVar0, bVar1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	func_1181(iVar0, iParam2, 100f, 40, 1, -753768974);
	return 1;
}

int func_895(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_A_PLAYER(iVar0) && !bParam2)
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 1;
	}
	return 0;
}

int func_896(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, 518218985, 1) == 2)
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
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, vParam1, iParam6, iParam5, fParam4, -1, iVar1);
		return 1;
	}
	return 0;
}

int func_897(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (func_1179(&iParam0, -1794415470, 1) == 2)
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

int func_898()
{
	return -1;
}

int func_899(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, -828834893, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
		if (func_1182(PED::_0x4E76CB57222A00E5(iVar0), iVar1))
		{
			return 0;
		}
		TASK::TASK_LEAVE_VEHICLE(iVar0, iVar1, iParam1, iParam2);
		return 1;
	}
	return 0;
}

int func_900(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_1179(&iParam0, 1345172471, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam2)
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam1);
		TASK::TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(iVar0, 200f);
		return 1;
	}
	return 0;
}

int func_901(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(&Local_2026, &Var0, iParam0))
	{
		func_177(Var0, -1530266946, &uVar5, 0);
	}
	return uVar5;
}

int func_902(int iParam0, int iParam1, vector3 vParam2, var uParam5)
{
	int iVar0;

	if (func_1179(&iParam0, -1098463898, 1) == 2)
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
		func_391(&vParam2, 1f);
		func_1183(iVar0, iParam1, vParam2, uParam5, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

int func_903(int iParam0, vector3 vParam1, var uParam4)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, -1098463898, 1) == 2)
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
		iVar1 = func_1184();
		func_391(&vParam1, 1f);
		func_1183(iVar0, iVar1, vParam1, uParam4, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

void func_904(int iParam0, var uParam1, int iParam2)
{
	if (func_865(iParam0, uParam1) == iParam2)
	{
		return;
	}
	(uParam1->f_16[iParam0 /*12*/])->f_3 = iParam2;
}

int func_905(int iParam0)
{
	int iVar0;

	if (func_1179(&iParam0, joaat("SCRIPT_TASK_TURN_TO_FACE_CLOSEST_PED"), 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		TASK::TASK_TURN_TO_FACE_CLOSEST_PED(iVar0, 1109393408, 1112014848, 2);
		return 1;
	}
	return 0;
}

int func_906(int iParam0)
{
	char* sVar0;

	sVar0 = "Default_Panic";
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iParam0, sVar0);
	if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iParam0, sVar0))
	{
		return 0;
	}
	PED::_0xAAB050DA48B57978(iParam0, sVar0, func_891(iParam0, &Local_361, 1120403456 /* Float: 100f */), -1, 4);
	return 1;
}

int func_907(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*uParam0)[iVar0 /*52*/])->f_45 != iParam1)
		{
		}
		else if (!func_41((*uParam0)[iVar0 /*52*/], 32))
		{
		}
		else if (!func_123(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			*iParam2 = PLAYER::GET_PLAYER_PED(iVar1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_908(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1179(&iParam0, -1519143300, 1) == 2)
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

void func_909(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1131(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1105(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

bool func_910(int iParam0, float fParam1, int iParam2)
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
		if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar2 /*12*/])))
		{
		}
		else
		{
			iVar6 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar2 /*12*/]));
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

int func_911(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 == -1088690539 || (Local_17.f_16[iVar0 /*12*/])->f_2 == 0)
		{
		}
		else if (iParam1 != 0 && (Local_17.f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (!func_438(iVar0, &iVar4, 1, 0))
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
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_912(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_755(iParam0, &iVar1, &iVar0);
	MISC::SET_BIT((*uParam2->f_16[iParam1 /*2*/])[iVar1], iVar0);
}

int func_913(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, 474215631, 1) == 2)
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

int func_914(int iParam0)
{
	int iVar0;

	if (PED::_IS_PED_CARRYING(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::_0xB07D3185E11657A5(iVar0)) && ENTITY::GET_ENTITY_MODEL(iVar0) == func_184())
		{
			return 1;
		}
	}
	return 0;
}

int func_915(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, -208384378, 1) == 2)
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
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar0, iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1073741824, 1);
		return 1;
	}
	return 0;
}

int func_916(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

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
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_237(bVar1))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(bVar1))
	{
		return 0;
	}
	func_1181(iVar0, iParam1, 100f, 40, 1, -753768974);
	return 1;
}

int func_917(int iParam0, int iParam1)
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
			fVar0 = func_549(iParam0, func_928(iVar3), 1);
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
		return func_898();
	}
	return PLAYER::GET_PLAYER_PED(iVar4);
}

int func_918(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_1179(&iParam0, 150319005, 1) == 2 && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(iParam0), iParam1, iParam2, iParam3, iParam4, iParam5);
		return 1;
	}
	return 0;
}

int func_919(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	if ((uParam2->f_16[iParam0 /*12*/])->f_11 < 0)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])))
	{
		return 0;
	}
	iVar0 = func_881(iParam0, uParam2);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0, 0))
	{
		return 0;
	}
	if (!PED::DOES_GROUP_EXIST((uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3))
	{
		return 0;
	}
	if (!PED::_0x0455546F23FF08E4((uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3))
	{
		return 0;
	}
	if (!PED::IS_PED_GROUP_MEMBER(iParam1, (uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3, 0))
	{
		return 0;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam1))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_VEHICLE(PED::GET_PED_AS_GROUP_LEADER((uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3), iVar0, true))
	{
		return 0;
	}
	return 1;
}

int func_920(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (func_1179(&iParam0, 1056466932, 1) == 2 && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iVar0, iParam1, vParam2, fParam5, -1, 1036831949, 1, 1, 0, 0, 1);
		return 1;
	}
	return 0;
}

int func_921(int iParam0)
{
	bool bVar0;

	bVar0 = func_1180(iParam0, 1, 0, 0);
	if (bVar0 == 0 || bVar0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
	{
		return 1;
	}
	if (WEAPON::_IS_WEAPON_TWO_HANDED(bVar0))
	{
		return 1;
	}
	return 0;
}

int func_922(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, bParam1, 0, 0))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false);
	if (iVar1 == bParam1)
	{
		return 1;
	}
	iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, 716706914, 0);
	if (iVar2 == 1 || iVar2 == 0)
	{
		return 0;
	}
	if (func_1179(Local_17.f_16[iParam0 /*12*/], 716706914, 0) != 2)
	{
		return 0;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, bParam1, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iVar0, iParam2, 0, 0, 0);
	return 1;
}

void func_923(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1131(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1105(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

int func_924(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	*uParam2 = iParam3;
	*iParam1 = func_898();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((Local_361[iVar0 /*52*/])->f_47 == 0)
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
	if (*iParam1 == func_898())
	{
		return 0;
	}
	return 1;
}

int func_925(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1179(&iParam0, 1630799643, 1) == 2)
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
		TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, iParam1, -1, 0, 1);
		return 1;
	}
	return 0;
}

int func_926(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1179(&iParam0, 355471868, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iParam1);
		return 1;
	}
	return 0;
}

int func_927(vector3 vParam0, float fParam3, int iParam4, float fParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 255;
	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar4 /*5*/])))
				{
				}
				else
				{
					iVar0 = NETWORK::NET_TO_ENT(&(Local_17.f_257[iVar4 /*5*/]));
					fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0);
					if (fVar1 > fParam3)
					{
					}
					else if (fVar1 < fParam5)
					{
					}
					else if (!func_1185(iVar0, iParam4))
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
							if (!(bParam6 && func_41(Local_361[iVar3 /*52*/], 64)) && !(!bParam6 && func_41(Local_361[iVar3 /*52*/], 32)))
							{
							}
							else
							{
								fParam3 = fVar1;
								iVar2 = *iParam4;
							}
						}
						iVar4++;
						Jump @456; //curOff = 231
						iVar5 = 0;
						while (iVar5 < 20)
						{
							if ((Local_17.f_16[iVar5 /*12*/])->f_2 != 1095997463)
							{
							}
							else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar5 /*12*/])))
							{
							}
							else
							{
								iVar0 = NETWORK::NET_TO_ENT(&(Local_17.f_16[iVar5 /*12*/]));
								fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0);
								if (fVar1 > fParam3)
								{
								}
								else if (fVar1 < fParam5)
								{
								}
								else if (!func_1185(iVar0, iParam4))
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
										if (!(bParam6 && func_41(Local_361[iVar3 /*52*/], 64)) && !(!bParam6 && func_41(Local_361[iVar3 /*52*/], 32)))
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
										return 1;
									}
									return 0;
								}
							}
						}
					}
				}
			}
		}

Vector3 func_928(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_929(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (func_1179(&iParam0, -1162159953, 1) != 2)
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_232(iParam1), func_930(iParam1), iParam2, -1, 1090519040, -1056964608, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
	}
	else
	{
		if (func_1179(&iParam0, -2017877118, 1) != 2)
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_PLAY_ANIM(iVar0, func_232(iParam1), func_930(iParam1), 1090519040, -1056964608, -1, 0, 0, 0, 0, 0, 0, 0);
	}
	return 1;
}

char* func_930(int iParam0)
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

int func_931(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	iVar0 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam0, 0, 3);
	if (iVar0 == 255)
	{
		return 0;
	}
	*iParam2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam2))
	{
		return 0;
	}
	if (BUILTIN::VDIST(func_928(*iParam2), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) > fParam1)
	{
		return 0;
	}
	return 1;
}

void func_932(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_933(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = (Local_17.f_16[iParam0 /*12*/])->f_11;
	if (!func_1186(iParam0))
	{
		return 0;
	}
	switch (Local_2026.f_10)
	{
		case -19759302:
			*iParam1 = NETWORK::NET_TO_ENT(&(Local_17.f_16[iVar0 /*12*/]));
			break;
		case -409129282:
			*iParam1 = NETWORK::NET_TO_ENT(&(Local_17.f_257[iVar0 /*5*/]));
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_934(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (func_1179(&iParam0, 1120685857, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam6)
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam5);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, vParam1, fParam4, 0, 0);
		return 1;
	}
	return 0;
}

int func_935(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, 518218985, 1) == 2)
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

void func_936(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *fParam0;
	fVar1 = *fParam1;
	*fParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*fParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

void func_937(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&((Local_361[Local_2026.f_634 /*52*/])->f_2), iParam0);
}

void func_938(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_4), iParam0);
}

void func_939(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_10), iParam0);
}

bool func_940(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return MISC::_0x8F4F050054005C27(&((Local_361[iParam1 /*52*/])->f_2.f_8), iParam0);
}

void func_941(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_8), iParam0);
}

void func_942(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_2), iParam0);
}

void func_943(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_4), iParam0);
}

bool func_944(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return MISC::_0x8F4F050054005C27(&((Local_361[iParam1 /*52*/])->f_2.f_4), iParam0);
}

void func_945(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_2.f_10), iParam0);
}

int func_946(struct<2> Param0)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return -1;
	}
	iVar0 = func_1187(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_947(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, var uParam5, int iParam6)
{
	struct<2> Var0;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	var uVar35;
	var uVar36;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam6, &Var0, 31))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0) || !ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return 0;
	}
	iVar31 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar31))
	{
		return 0;
	}
	iVar32 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar31);
	if (iVar32 != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_PED(Var0))
		{
			iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
			if (PED::IS_PED_A_PLAYER(iVar33))
			{
				iVar34 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar33);
				if (SCRIPTS::_0x72B2E00C9BAC6789(uParam0, iVar34) && (!bParam3 || func_587(uParam0, Var0, fParam4)))
				{
					return 1;
				}
			}
		}
	}
	if (bParam2)
	{
		if (func_1188(uParam0, &uVar36, Var0, &uVar35))
		{
			if (func_1189(&Var0))
			{
				*uParam5 = uVar36;
			}
			return 1;
		}
	}
	return 0;
}

float func_948(float fParam0, float fParam1, float fParam2, int iParam3)
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

int func_949(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_1190();
	if (func_1191(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar0 /*36*/])->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_1192(vParam0, iParam3);
}

int func_950(vector3 vParam0)
{
	return func_1193(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_951(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_952()
{
	return Global_1099294->f_339;
}

void func_953(float fParam0)
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

void func_954()
{
	Global_1939231->f_1433.f_7962 = 0;
	Global_1939231->f_1433.f_7963 = MISC::GET_GAME_TIMER() + 1000;
}

int func_955(int iParam0)
{
	vector3 vVar0;

	if (!func_33(1))
	{
		return 0;
	}
	if (func_1091(iParam0))
	{
		if (!func_41(Local_361[Local_2026.f_634 /*52*/], 32))
		{
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
		{
			return 0;
		}
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
	}
	else
	{
		if (!func_41(Local_361[Local_2026.f_634 /*52*/], 64))
		{
			return 0;
		}
		if (Local_17.f_328 == -1)
		{
			return 0;
		}
		if (Local_2026.f_10 == -409129282)
		{
			if (PLAYER::PLAYER_ID() != (Local_17.f_257[Local_17.f_328 /*5*/])->f_3 && GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != (Local_17.f_257[Local_17.f_328 /*5*/])->f_4)
			{
				return 0;
			}
		}
		else if (Local_2026.f_10 == -19759302)
		{
			if (PLAYER::PLAYER_ID() != (Local_17.f_16[Local_17.f_328 /*12*/])->f_7 && GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != (Local_17.f_16[Local_17.f_328 /*12*/])->f_6)
			{
				return 0;
			}
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_620))
		{
			return 0;
		}
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
	}
	if (BUILTIN::VDIST(Global_35, vVar0) > 100f)
	{
		return 0;
	}
	return 1;
}

int func_956()
{
	var uVar0;

	uVar0 = func_227();
	if (!CAM::_0x595550376B7EA230(uVar0))
	{
		CAM::_0x1B3C2D961F5FC0E1(uVar0);
	}
	if (CAM::_0xAA235E2F2C09E952(uVar0))
	{
		func_126(8388608);
		return 1;
	}
	return 0;
}

int func_957()
{
	int iVar0;

	if (func_258(4096, 255))
	{
		return 1;
	}
	iVar0 = -1429099402;
	PED::_0xF7EA250B9A919E03(iVar0, Global_34);
	if (!PED::_0x854BC9B1A1CCD034(iVar0, Global_34))
	{
		return 0;
	}
	func_262(4096);
	return 1;
}

bool func_958(int iParam0)
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

	if (!func_293(&Local_2026, &Var10) || !func_313(&Var10, 556233122, iParam0, 0))
	{
		return true;
	}
	iVar15 = func_496(iParam0);
	iVar23 = PLAYER::PLAYER_ID();
	if (!func_1194(&iVar24))
	{
		return true;
	}
	bVar25 = func_1195(iVar23);
	bVar26 = (bVar25 && iVar24 == iVar23);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_313(&Var0, -110495140, iVar17, 0))
		{
		}
		else
		{
			iVar20 = func_497(iParam0, iVar17);
			iVar16 = 0;
			while (iVar16 < iVar20)
			{
				Var5 = { Var0 };
				if ((!func_313(&Var5, 938546485, iVar16, 0) || !func_300(Var5, 957840570, &iVar18, 0)) || !func_177(Var5, -537439784, &iVar19, 0))
				{
				}
				else
				{
					iVar21 = iVar19;
					if (!func_498(iVar21, iVar18, &iVar22))
					{
					}
					else
					{
						func_1196(iVar22, iVar21, iVar23, bVar25, bVar26, &bVar27, iVar17, iVar16);
					}
				}
				iVar16++;
			}
		}
		iVar17++;
	}
	bVar28 = !func_1091(iParam0);
	switch (func_200(&Local_2026))
	{
		case -19759302:
			iVar29 = 0;
			while (iVar29 < 20)
			{
				if ((!func_202(iVar29, &Local_17, 1024) || !func_202(iVar29, &Local_17, 32)) || func_202(iVar29, &Local_17, 64) != bVar28)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar29 /*12*/])))
				{
				}
				else
				{
					func_1196(NETWORK::NET_TO_ENT(&(Local_17.f_16[iVar29 /*12*/])), 0, iVar23, bVar25, bVar26, &bVar27, -1, -1);
				}
				iVar29++;
			}
			break;
		case -409129282:
		default:
			iVar30 = 0;
			while (iVar30 < 4)
			{
				if ((!func_203(iVar30, &Local_17, 128) || !func_203(iVar30, &Local_17, 2)) || func_203(iVar30, &Local_17, 4) != bVar28)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar30 /*5*/])))
				{
				}
				else
				{
					func_1196(NETWORK::NET_TO_ENT(&(Local_17.f_257[iVar30 /*5*/])), 0, iVar23, bVar25, bVar26, &bVar27, -1, -1);
				}
				iVar30++;
			}
			break;
	}
	return !bVar27;
}

void func_959(int iParam0)
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

	if (!func_293(&Local_2026, &Var10) || !func_313(&Var10, 556233122, iParam0, 0))
	{
		return;
	}
	iVar15 = func_496(iParam0);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_313(&Var0, -110495140, iVar17, 0))
		{
			return;
		}
		iVar20 = func_497(iParam0, iVar17);
		iVar16 = 0;
		while (iVar16 < iVar20)
		{
			Var5 = { Var0 };
			if ((!func_313(&Var5, 938546485, iVar16, 0) || !func_300(Var5, 957840570, &iVar18, 0)) || !func_177(Var5, -537439784, &uVar19, 0))
			{
			}
			else
			{
				iVar21 = uVar19;
				if (!func_498(iVar21, iVar18, &iVar22))
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

void func_960()
{
	if (func_258(8, 255))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::_0x4B05B97BA46F419D(0);
		NETWORK::_0x89D803CD48622150(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, func_499(), true);
		func_262(8);
	}
	NETWORK::_0xDC6AD5C046F33AB4(1, 0);
}

char* func_961()
{
	return "ShotSphere";
}

char* func_962(int iParam0)
{
	switch (iParam0)
	{
		case -1446305837:
			return "Cam_Near35mm";
		case 733100135:
			return "Cam_Near50mm";
		case -1603076223:
			return "Cam_Med35mm";
		case -919897303:
			return "Cam_Med50mm";
		case -1315315274:
			return "Cam_Far35m";
		case -1278043032:
			return "Cam_Far50mm";
		case 0:
			return "None";
		default:
			break;
	}
	return "";
}

int func_963(struct<5> Param0, int iParam5)
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
	int iVar29;

	if (!func_313(&Param0, 938546485, iParam5, 0))
	{
		return 1;
	}
	bVar10 = func_314(Param0, 644136394, &vVar0, 0);
	bVar11 = func_311(Param0, 1471513692, &fVar9, 0);
	bVar12 = func_314(Param0, -2119193689, &vVar3, 0);
	bVar13 = func_314(Param0, -2117302676, &vVar6, 0);
	func_177(Param0, -537439784, &iVar14, 0);
	iVar15 = iVar14;
	iVar16 = -1;
	func_300(Param0, 957840570, &iVar16, 0);
	bVar17 = func_177(Param0, -1530266946, &iVar14, 0);
	iVar18 = iVar14;
	if (func_177(Param0, 999526519, &iVar14, 0))
	{
		iVar19 = iVar14;
	}
	bVar20 = iVar15 == joaat("player");
	if (bVar20)
	{
		bVar17 = false;
	}
	if ((((!bVar10 && !bVar12) && !bVar11) && !bVar17) && !bVar20)
	{
		return 1;
	}
	if (!func_498(iVar15, iVar16, &iVar21))
	{
		if (func_1197(iVar15))
		{
			if (!bVar10)
			{
				return 1;
			}
			if (!func_1198(iParam5, iVar16, iVar15, &iVar21, vVar0, fVar9))
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar21))
	{
		return 0;
	}
	if (bVar10)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar21))
		{
			iVar22 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar21);
			if (iVar22 == PLAYER::PLAYER_PED_ID())
			{
				func_1200(func_1199(iVar19), 0);
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
				iVar25 = func_616(Local_17.f_299, Local_17.f_299.f_2);
			}
			else
			{
				iVar25 = 0;
			}
			WEAPON::_HIDE_PED_WEAPONS(iVar23, 2, 1);
			if (func_314(Param0, 82347414, &vVar26, 0))
			{
				func_311(Param0, -1580911258, &iVar29, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(iVar23, iVar18, vVar26, iVar29, iVar25, 1, 0, 0, -1082130432, 0);
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar23, iVar18, iVar25, 0, 0, -1082130432, 0);
			}
		}
	}
	else if ((bVar20 && bVar24) && iVar23 == Global_34)
	{
		if (((!PED::IS_PED_DEAD_OR_DYING(iVar23, true) && !PED::IS_PED_INJURED(iVar23)) && !PED::IS_PED_RAGDOLL(iVar23)) && !PED::_0xB655DB7582AEC805(iVar23))
		{
			PED::_0xCB9401F918CB0F75(iVar23, "FreeRoamSpawn", 1, 20);
		}
	}
	if ((bVar24 && bVar13) && func_1201(iVar23))
	{
		PHYSICS::_0x06AADE17334F7A40(iVar23, vVar6);
		TASK::_TASK_START_SCENARIO_IN_PLACE(iVar23, -493351432, -1, 0, 0, -1082130432, 0);
	}
	return 1;
}

void func_964(int iParam0, int iParam1)
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
	int iVar23;

	bVar6 = true;
	if (func_1091(iParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
		{
			vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_620))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
	}
	if (((func_293(&Local_2026, &Var8) && func_313(&Var8, 556233122, iParam0, 0)) && func_313(&Var8, -110495140, iParam1, 0)) && func_313(&Var8, -556151360, 0, 0))
	{
		if (func_178(Var8, 1234220482, &bVar13, 0) && bVar13)
		{
			bVar6 = false;
		}
		else if (func_178(Var8, -19593823, &bVar13, 0) && bVar13)
		{
			bVar6 = false;
		}
		if (bVar6 && func_314(Var8, 644136394, &uVar14, 0))
		{
			bVar6 = false;
		}
		if (bVar6)
		{
			if (func_314(Var8, -252450326, &vVar17, 0))
			{
				vVar0 = { vVar17 };
			}
			if (func_314(Var8, -727548384, &vVar20, 0))
			{
				vVar0 = { vVar0 + vVar20 };
			}
			if (func_314(Var8, -36224614, &vVar20, 0))
			{
				vVar3 = { vVar3 + vVar20 };
			}
			if (func_177(Var8, -1456038853, &iVar23, 0))
			{
				iVar7 = iVar23;
			}
		}
	}
	if (bVar6 && iVar7 == 0)
	{
		bVar6 = false;
	}
	if (bVar6)
	{
		func_262(1024);
		Local_2026.f_537.f_2 = iVar7;
		func_1202(vVar0, vVar3);
	}
	else
	{
		func_495(1024);
	}
}

Vector3 func_965(vector3 vParam0, float fParam3)
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

int func_966(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_967(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = !func_1091(iParam0);
	switch (func_200(&Local_2026))
	{
		case -19759302:
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_202(iVar1, &Local_17, 1024))
				{
				}
				else if (!func_202(iVar1, &Local_17, 32))
				{
				}
				else if (func_202(iVar1, &Local_17, 64) != bVar0)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar1 /*12*/])))
				{
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iVar1 /*12*/])))
				{
				}
				else
				{
					iVar2 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar1 /*12*/]));
					PED::DELETE_PED(&iVar2);
				}
				iVar1++;
			}
			break;
		case -409129282:
		default:
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (!func_203(iVar3, &Local_17, 128))
				{
				}
				else if (!func_203(iVar3, &Local_17, 2))
				{
				}
				else if (func_203(iVar3, &Local_17, 4) != bVar0)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar3 /*5*/])))
				{
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_257[iVar3 /*5*/])))
				{
				}
				else
				{
					iVar4 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar3 /*5*/]));
					OBJECT::DELETE_OBJECT(&iVar4);
				}
				iVar3++;
			}
			break;
	}
}

int func_968(struct<5> Param0, int iParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!func_313(&Param0, 938546485, iParam5, 0))
	{
		return 1;
	}
	func_178(Param0, 725091599, &bVar0, 0);
	if (!bVar0)
	{
		return 1;
	}
	func_177(Param0, -537439784, &iVar1, 0);
	iVar2 = iVar1;
	iVar3 = -1;
	func_300(Param0, 957840570, &iVar3, 0);
	if (iVar3 < 0)
	{
		return 1;
	}
	switch (iVar2)
	{
		case joaat("prop"):
		case joaat("vehicle"):
		case joaat("ped"):
			if (!func_498(iVar2, iVar3, &iVar4))
			{
				return 1;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
			{
				return 0;
			}
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar3 /*12*/]));
				PED::DELETE_PED(&iVar5);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar4))
			{
				iVar6 = NETWORK::NET_TO_VEH(&(Local_17.f_3[iVar3 /*4*/]));
				VEHICLE::DELETE_VEHICLE(&iVar6);
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar4))
			{
				iVar7 = NETWORK::NET_TO_OBJ(&(Local_17.f_278[iVar3 /*2*/]));
				OBJECT::DELETE_OBJECT(&iVar7);
			}
			break;
		case joaat("player"):
			return 1;
		case 130495496:
			return 1;
		default:
			return 1;
	}
	return 1;
}

struct<2> func_969(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_970(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	*bParam6 = 0;
	*bParam4 = 0;
	bVar0 = func_41((*uParam2)[Local_2026.f_634 /*52*/], 32);
	bVar1 = func_41((*uParam2)[Local_2026.f_634 /*52*/], 64);
	if (!bVar0 && !bVar1)
	{
		if (!func_533(1))
		{
			return 0;
		}
	}
	else if (!func_531())
	{
		return 0;
	}
	if (bVar0 && !func_228(4))
	{
		return 0;
	}
	if (func_272(iParam0, 8388608) && !func_272(iParam0, 16777216))
	{
		return 0;
	}
	if (func_55(uParam1, 32))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		return 0;
	}
	iVar2 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		if (!func_697((uParam1->f_16[iParam0 /*12*/])->f_2) || !PED::GET_PED_CONFIG_FLAG(iVar2, 11, false))
		{
			return 0;
		}
		bVar4 = true;
	}
	*bParam5 = 0;
	switch ((uParam1->f_16[iParam0 /*12*/])->f_2)
	{
		case 401658241:
			if (!bVar0 && !func_41((*uParam2)[Local_2026.f_634 /*52*/], 2))
			{
				return 0;
			}
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 45)
			{
				*bParam4 = 1;
			}
			if (!*bParam4 && BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) > 140f)
			{
				*bParam4 = 1;
			}
			break;
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			*bParam5 = (func_33(256) && !func_55(&Local_17, 16));
			if ((!func_41((*uParam2)[Local_2026.f_634 /*52*/], 2) && fParam3->f_202.f_60 != 5) && fParam3->f_202.f_60 != 6)
			{
				return 0;
			}
			break;
		case 1566032419:
			if (!bVar0 && !bVar1)
			{
				return 0;
			}
			else if (bVar0 && func_202(iParam0, &Local_17, 2048))
			{
				return 0;
			}
			else if (bVar1 && !func_202(iParam0, &Local_17, 2048))
			{
				return 0;
			}
			if (BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) > 50f)
			{
				*bParam4 = 1;
			}
			return 1;
		case 1095997463:
			if (fParam3->f_10 != -19759302)
			{
				return 0;
			}
			if ((func_202(iParam0, &Local_17, 32) || func_202(iParam0, &Local_17, 65536)) || func_202(iParam0, &Local_17, 131072))
			{
				*bParam6 = 1;
				return 1;
			}
			if (func_1167(iVar2, &iVar3, 0) && iVar3 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
			if (func_850(iParam0, 255))
			{
				return 0;
			}
			switch (fParam3->f_202.f_60)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return 0;
				default:
					break;
			}
			if ((((!bVar0 && !bVar1) && !func_228(128)) && !bVar4) && PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return 0;
			}
			return 1;
		default:
			return 0;
	}
	switch (fParam3->f_202.f_60)
	{
		case 1:
		case 3:
			if (!bVar4 && PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_971(int iParam0, var uParam1, var uParam2, float fParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = MAP::DOES_BLIP_EXIST(&(fParam3->f_202[iParam0]));
	if (bVar0)
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	bVar2 = func_41((*uParam2)[Local_2026.f_634 /*52*/], 64);
	bVar3 = (func_33(256) && !func_55(&Local_17, 16));
	switch ((uParam1->f_16[iParam0 /*12*/])->f_2)
	{
		case 1566032419:
			if (bVar2 != func_202(iParam0, uParam1, 2048))
			{
				func_1203(iParam0, fParam3->f_202[iParam0], iVar1, 0, 0);
			}
			else
			{
				func_1204(fParam3->f_202[iParam0], iVar1);
			}
			break;
		case 1095997463:
			if (func_200(&Local_2026) == -19759302)
			{
				func_1205(iParam0, fParam3->f_202[iParam0], iVar1);
			}
			break;
		default:
			if (func_202(iParam0, &Local_17, 32768))
			{
				func_1203(iParam0, fParam3->f_202[iParam0], iVar1, 1, 0);
			}
			else
			{
				func_1203(iParam0, fParam3->f_202[iParam0], iVar1, 0, bVar3);
			}
			break;
	}
}

void func_972(int iParam0, bool bParam1)
{
	if (bParam1 && !func_272(iParam0, 2048))
	{
		func_273(iParam0, 2048);
		MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), 197772266);
	}
	else if (!bParam1 && func_272(iParam0, 2048))
	{
		func_439(iParam0, 2048);
		MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), 197772266);
	}
}

void func_973(int iParam0, bool bParam1)
{
	if (bParam1 && !func_272(iParam0, 4194304))
	{
		func_273(iParam0, 4194304);
		MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), -1186550032);
	}
	else if (!bParam1 && func_272(iParam0, 4194304))
	{
		func_439(iParam0, 4194304);
		MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), -1186550032);
	}
}

void func_974(int iParam0, bool bParam1)
{
	if (!bParam1 && func_272(iParam0, 1024))
	{
		func_439(iParam0, 1024);
		MAP::SET_BLIP_SPRITE(&(Local_2026.f_202[iParam0]), -1103135225, false);
	}
	else if (bParam1 && !func_272(iParam0, 1024))
	{
		func_273(iParam0, 1024);
		MAP::SET_BLIP_SPRITE(&(Local_2026.f_202[iParam0]), func_988(3), false);
	}
}

void func_975(int iParam0)
{
	if (func_272(iParam0, 512))
	{
		return;
	}
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), 453356795);
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), -1636811933);
	MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), 1938496773);
	func_439(iParam0, 256);
	func_439(iParam0, 128);
	func_273(iParam0, 512);
}

bool func_976(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return MISC::_0x8F4F050054005C27(&((Local_361[iParam1 /*52*/])->f_2.f_2), iParam0);
}

void func_977(int iParam0)
{
	if (func_272(iParam0, 256))
	{
		return;
	}
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), -1636811933);
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), 1938496773);
	MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), 453356795);
	func_439(iParam0, 128);
	func_439(iParam0, 512);
	func_273(iParam0, 256);
}

int func_978(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		*iParam3 = iParam0;
		if (GANG::_0x3F59FE6F37869576(iParam0, PLAYER::PLAYER_ID()))
		{
			*bParam2 = 0;
			return 1;
		}
		else
		{
			*bParam2 = 1;
			return 0;
		}
	}
	if (func_1167(iParam1, &iVar0, 1))
	{
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			*bParam2 = 0;
		}
		*iParam3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam3))
		{
			*bParam2 = 0;
			return 0;
		}
		if (!GANG::_0x3F59FE6F37869576(*iParam3, PLAYER::PLAYER_ID()))
		{
			*bParam2 = 1;
			return 0;
		}
		*bParam2 = 0;
		return 1;
	}
	*bParam2 = 0;
	return 0;
}

void func_979(int iParam0)
{
	if (func_272(iParam0, 128))
	{
		return;
	}
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), 453356795);
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), 1938496773);
	MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), -1636811933);
	func_439(iParam0, 256);
	func_439(iParam0, 512);
	func_273(iParam0, 128);
}

void func_980(int iParam0, int iParam1)
{
	if (Local_2026.f_10 != -19759302)
	{
		return;
	}
	if (&Local_2026.f_202.f_30[iParam0] == iParam1)
	{
		return;
	}
	if (iParam1 == 255)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_2026.f_202[iParam0]), func_1206());
		MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), 723793771);
	}
	else
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(&(Local_2026.f_202[iParam0]), func_1207(func_1206(), iParam1));
		MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), 723793771);
	}
	Local_2026.f_202.f_30[iParam0] = iParam1;
}

void func_981(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_272(iParam0, 131072))
	{
		func_273(iParam0, 131072);
		if (bParam2)
		{
			MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), 1550066118);
		}
		else
		{
			MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), -662251075);
		}
	}
	else if (!bParam1 && func_272(iParam0, 131072))
	{
		func_439(iParam0, 131072);
		MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), 1550066118);
		MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), -662251075);
	}
}

void func_982(int iParam0, bool bParam1)
{
	if (bParam1 && func_272(iParam0, 4096))
	{
		func_439(iParam0, 4096);
		if (func_272(iParam0, 131072))
		{
			MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), 1550066118);
			MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), -662251075);
		}
		else
		{
			MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202[iParam0]), 2096805056);
		}
	}
	else if (!bParam1 && !func_272(iParam0, 4096))
	{
		func_273(iParam0, 4096);
		if (func_272(iParam0, 131072))
		{
			MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), 1550066118);
		}
		else
		{
			MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202[iParam0]), 2096805056);
		}
	}
}

int func_983(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_531())
	{
		return 0;
	}
	if (!func_228(4))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iParam0 /*4*/])))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iParam0 /*4*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (func_55(uParam1, 524288))
	{
		return 0;
	}
	if ((fParam3->f_202.f_60 == 5 && func_339(iParam0, &Local_17, 1)) || fParam3->f_202.f_60 == 6)
	{
		return 0;
	}
	if (func_403(&Local_17) > 2)
	{
		return 0;
	}
	if (Local_2026.f_10 != -19759302)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if ((Local_17.f_257[iVar1 /*5*/])->f_2 != iParam0)
			{
			}
			else if (func_203(iVar1, uParam1, 16))
			{
			}
			else if (!func_203(iVar1, uParam1, 8))
			{
			}
			else
			{
				return 1;
			}
			iVar1++;
		}
		return 0;
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
			return 0;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if ((Local_17.f_16[iVar1 /*12*/])->f_11 != iParam0)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar1 /*12*/])))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar1 /*12*/]));
			if (PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
			}
			else if (!PED::IS_PED_IN_VEHICLE(iVar2, iVar0, true))
			{
			}
			else
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_984(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(&(fParam3->f_202.f_21[iParam0])))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iParam0 /*4*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iParam0 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = 1;
	fParam3->f_202.f_21[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(func_1208(iVar1), iVar0);
	MAP::SET_BLIP_SPRITE(&(fParam3->f_202.f_21[iParam0]), func_988(iVar1), false);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(fParam3->f_202.f_21[iParam0]), func_985());
	MAP::_BLIP_SET_MODIFIER(&(fParam3->f_202.f_21[iParam0]), 580546400);
	MAP::_BLIP_SET_MODIFIER(&(fParam3->f_202.f_21[iParam0]), 231194138);
}

char* func_985()
{
	return "NET_CHU_BLIP_VEHICLE";
}

int func_986(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	if (func_41((*uParam2)[Local_2026.f_634 /*52*/], 32))
	{
		if (!func_531())
		{
			return 0;
		}
		if (!func_228(4))
		{
			return 0;
		}
	}
	else if (func_41((*uParam2)[Local_2026.f_634 /*52*/], 64))
	{
		if (!func_531())
		{
			return 0;
		}
	}
	else if (!func_533(1))
	{
		return 0;
	}
	if (func_55(uParam1, 32))
	{
		return 0;
	}
	if (func_80(iParam0, 16) && !func_80(iParam0, 32))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_257[iParam0 /*5*/])))
	{
		return 0;
	}
	if ((func_203(iParam0, uParam1, 8) && !func_41((*uParam2)[Local_2026.f_634 /*52*/], 64)) && func_403(&Local_17) <= 2)
	{
		return 0;
	}
	if ((func_203(iParam0, uParam1, 2) || func_203(iParam0, uParam1, 256)) || func_203(iParam0, uParam1, 512))
	{
		return 0;
	}
	if (func_203(iParam0, uParam1, 16))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[iParam0 /*5*/]));
	if (ENTITY::_0x61914209C36EFDDB(iVar0) == 5 && PED::_GET_CARRIER_AS_HUMAN(iVar0) == PLAYER::PLAYER_PED_ID())
	{
		return 0;
	}
	if (func_944(iParam0, 255))
	{
		return 0;
	}
	return 1;
}

void func_987(int iParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_25[iParam0])))
	{
		return;
	}
	Local_2026.f_202.f_25[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(-2086635932, iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_2026.f_202.f_25[iParam0]), func_1209());
	MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202.f_25[iParam0]), -1636811933);
	MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202.f_25[iParam0]), 580546400);
	MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202.f_25[iParam0]), 231194138);
	if (func_228(262144))
	{
		MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202.f_25[iParam0]), 231194138);
	}
}

int func_988(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1012165077 /* GXTEntry: "Wagon" */;
		case 2:
		case 3:
			return 1865251988;
		case 4:
			return 1595806706;
		case 5:
			return -1103135225;
		default:
			break;
	}
	return 0;
}

void func_989(int iParam0)
{
	if (func_80(iParam0, 4))
	{
		return;
	}
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202.f_25[iParam0]), -1636811933);
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202.f_25[iParam0]), 453356795);
	MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202.f_25[iParam0]), 1938496773);
	func_450(iParam0, 1);
	func_450(iParam0, 2);
	func_274(iParam0, 4);
}

bool func_990(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return MISC::_0x8F4F050054005C27(&((Local_361[iParam1 /*52*/])->f_2), iParam0);
}

void func_991(int iParam0)
{
	if (func_80(iParam0, 2))
	{
		return;
	}
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202.f_25[iParam0]), -1636811933);
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202.f_25[iParam0]), 1938496773);
	MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202.f_25[iParam0]), 453356795);
	func_450(iParam0, 1);
	func_450(iParam0, 4);
	func_274(iParam0, 2);
}

void func_992(int iParam0)
{
	if (func_80(iParam0, 1))
	{
		return;
	}
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202.f_25[iParam0]), 453356795);
	MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202.f_25[iParam0]), 1938496773);
	MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202.f_25[iParam0]), -1636811933);
	func_450(iParam0, 2);
	func_450(iParam0, 4);
	func_274(iParam0, 1);
}

void func_993(int iParam0, int iParam1)
{
	if (Local_2026.f_10 != -409129282)
	{
		return;
	}
	if (&Local_2026.f_202.f_30[iParam0] == iParam1)
	{
		return;
	}
	if (iParam1 == 255)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_2026.f_202.f_25[iParam0]), func_1209());
		MAP::_SET_BLIP_FLASH_STYLE(&(Local_2026.f_202.f_25[iParam0]), 723793771);
	}
	else
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(&(Local_2026.f_202.f_25[iParam0]), func_1207(func_1209(), iParam1));
		MAP::_BLIP_SET_MODIFIER(&(Local_2026.f_202.f_25[iParam0]), 723793771);
	}
	Local_2026.f_202.f_30[iParam0] = iParam1;
}

char* func_994()
{
	return "NET_CHU_BLIP_DROPOFF";
}

bool func_995()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

int func_996(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int* iParam5)
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

	if (func_1210(iParam0) && !func_228(1))
	{
		return 0;
	}
	if (func_33(1) && !func_33(2))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			if (iParam1 != 1)
			{
				return 0;
			}
			if (func_228(64))
			{
				return 0;
			}
			if (!func_228(4))
			{
				return 0;
			}
			if (func_453(Local_2026.f_202.f_57))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_21[iVar0])))
				{
				}
				else
				{
					func_1211(1, iParam5);
					return 1;
				}
				iVar0++;
			}
			return 0;
		case 2:
			if (iParam1 != 1)
			{
				return 0;
			}
			if (!func_228(64))
			{
				return 0;
			}
			if (func_228(8))
			{
				return 0;
			}
			if (func_403(&Local_17) > 1)
			{
				return 0;
			}
			if (!func_41(Local_361[Local_2026.f_634 /*52*/], 8))
			{
				return 0;
			}
			if (func_33(256))
			{
				if (!func_1212(&Local_17, &Local_2026))
				{
					return 0;
				}
			}
			else if (!func_1004(&Local_17, &Local_2026, joaat("driver")))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_21[iVar0])))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_3[iVar0 /*4*/])))
				{
				}
				else
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(&(Local_17.f_3[iVar0 /*4*/])), false, false) };
					if (!func_1213(vVar5, 2f, 80f))
					{
					}
					else
					{
						func_1211(1, iParam5);
						return 1;
					}
				}
				iVar0++;
			}
			return 0;
		case 3:
			if (iParam1 != 1)
			{
				return 0;
			}
			if (func_200(&Local_2026) != -409129282)
			{
				return 0;
			}
			if (func_228(16))
			{
				return 0;
			}
			if (!func_733(-1, 1))
			{
				return 0;
			}
			return 1;
		case 4:
			if (iParam1 != 1)
			{
				return 0;
			}
			if (func_200(&Local_2026) != -19759302)
			{
				return 0;
			}
			if (func_228(32))
			{
				return 0;
			}
			if (!func_733(-1, 1))
			{
				return 0;
			}
			return 1;
		case 5:
			if (iParam1 != 0)
			{
				return 0;
			}
			if (func_228(128) || (func_228(8388608) && func_349(PLAYER::PLAYER_ID(), 1, 1)))
			{
				return 0;
			}
			if (!func_533(0))
			{
				return 0;
			}
			if (!func_1214(&uVar4))
			{
				return 0;
			}
			if (!GANG::_0xD6F6ACF4392187FB(Local_17.f_316) || !GANG::_0x0F99F6436528A089(Local_17.f_316))
			{
				if (!func_59(&Local_361, 32, 0))
				{
					return 0;
				}
			}
			switch (Local_2026.f_10)
			{
				case -409129282:
					if (!func_732(&Local_17, 8, 1))
					{
						return 0;
					}
					func_1211(2, iParam5);
					break;
				case -19759302:
					if (!func_733(-1, 1))
					{
						return 0;
					}
					func_1211(3, iParam5);
					break;
				default:
					return 0;
			}
			return 1;
		case 6:
			if (iParam1 != 0)
			{
				return 0;
			}
			if (func_228(256))
			{
				return 0;
			}
			if (!func_228(128))
			{
				return 0;
			}
			if (Local_2026.f_632 > 50f)
			{
				return 0;
			}
			if (!func_533(1))
			{
				return 0;
			}
			if ((!func_349(PLAYER::PLAYER_ID(), 1, 0) || !func_521(PLAYER::PLAYER_ID(), &fVar3, 0)) || fVar3 > 50f)
			{
				return 0;
			}
			if (!func_1214(&uVar4))
			{
				return 0;
			}
			if (!GANG::_0xD6F6ACF4392187FB(Local_17.f_316) || !GANG::_0x0F99F6436528A089(Local_17.f_316))
			{
				if (!func_59(&Local_361, 32, 0))
				{
					return 0;
				}
			}
			switch (Local_2026.f_10)
			{
				case -409129282:
					if (!func_732(&Local_17, 8, 1))
					{
						return 0;
					}
					func_1211(2, iParam5);
					break;
				case -19759302:
					if (!func_733(-1, 1))
					{
						return 0;
					}
					func_1211(3, iParam5);
					break;
				default:
					return 0;
			}
			return 1;
		case 7:
			if (func_228(4))
			{
				return 0;
			}
			if (!func_41(Local_361[Local_2026.f_634 /*52*/], 64))
			{
				return 0;
			}
			iVar8 = PLAYER::PLAYER_ID();
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 32768))
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
					else if (!func_41(Local_361[iVar1 /*52*/], 64))
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
							if (!func_41(Local_361[iVar1 /*52*/], 32768))
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
								return 0;
							}
							else if (iVar10 == iVar9 && *iParam4 == 255)
							{
								*iParam4 = iVar8;
							}
							switch (Local_2026.f_10)
							{
								case -409129282:
									func_1211(4, iParam5);
									break;
								case -19759302:
									func_1211(5, iParam5);
									break;
								default:
									return 0;
							}
							return 1;
							if (func_200(&Local_2026) != -19759302)
							{
								return 0;
							}
							if (func_228(524288))
							{
								return 0;
							}
							if (!func_837(255))
							{
								return 0;
							}
							if (iParam1 == 1)
							{
								if (!VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_619))
								{
									return 0;
								}
								vVar11 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
							}
							else if (iParam1 == 2)
							{
								if (!VOLUME::_DOES_VOLUME_EXIST(Local_2026.f_620))
								{
									return 0;
								}
								vVar11 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
							}
							else
							{
								return 0;
							}
							if (func_1215(Global_35, vVar11) > 30f)
							{
								return 0;
							}
							if (ENTITY::IS_ENTITY_DEAD(Global_34))
							{
								return 0;
							}
							if (!PED::IS_PED_ON_MOUNT(Global_34))
							{
								iVar15 = 0;
								while (iVar15 < 20)
								{
									if ((Local_17.f_16[iVar15 /*12*/])->f_2 != 1095997463)
									{
									}
									else if (!func_976(iVar15, 255))
									{
									}
									else if (!func_438(iVar15, &iVar16, 1, 0))
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
									return 0;
								}
							}
							return 1;
							return 0;
						}
					}
				}
			}
		}

int func_997(int iParam0)
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

int func_998(int iParam0)
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

int func_999(int iParam0)
{
	return 10000;
}

char* func_1000(int iParam0, int iParam1, char* sParam2)
{
	bool bVar0;

	bVar0 = func_33(256);
	switch (iParam0)
	{
		case 1:
			switch (Local_2026.f_10)
			{
				case -19759302:
					if (Local_17.f_321 < 2)
					{
						if (bVar0)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_STATIONARY", sParam2);
						}
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP", sParam2);
					}
					if (bVar0)
					{
						if (func_632())
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_STATIONARY", sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_STATIONARY_S", sParam2);
						}
					}
					if (func_632())
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL", sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_S", sParam2);
					}
					break;
				case -409129282:
					if (Local_17.f_321 < 2)
					{
						if (bVar0)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_STATIONARY", sParam2);
						}
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY", sParam2);
					}
					if (bVar0)
					{
						if (func_632())
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_STATIONARY", sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_STATIONARY_S", sParam2);
						}
					}
					if (func_632())
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
			if (!func_632())
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
			if (Local_17.f_321 < 2)
			{
				return "NET_CHU_HELP_LASSO_VIP";
			}
			return "NET_CHU_HELP_LASSO_VIP_PLURAL";
		case 5:
		case 6:
			switch (Local_2026.f_10)
			{
				case -19759302:
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_PVP_KIDNAP", func_1216(joaat("COLOR_RED")), sParam2);
				case -409129282:
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_PVP_ROBBERY", func_1216(joaat("COLOR_RED")), sParam2);
				default:
					break;
			}
			return "";
		case 7:
			switch (Local_2026.f_10)
			{
				case -19759302:
					if (iParam1 == PLAYER::PLAYER_ID())
					{
						if (Local_17.f_321 < 2)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_SELF", func_1216(joaat("COLOR_RED")), sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_PLURAL_SELF", func_1216(joaat("COLOR_RED")), sParam2);
						}
					}
					else if (Local_17.f_321 < 2)
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP", func_1217(iParam1, -963477619), func_1216(joaat("COLOR_RED")), sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_PLURAL", func_1217(iParam1, -963477619), func_1216(joaat("COLOR_RED")), sParam2);
					}
					break;
				case -409129282:
					if (iParam1 == PLAYER::PLAYER_ID())
					{
						if (Local_17.f_322 < 2)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_SELF", func_1216(joaat("COLOR_RED")), sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_PLURAL_SELF", func_1216(joaat("COLOR_RED")), sParam2);
						}
					}
					else if (Local_17.f_322 < 2)
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY", func_1217(iParam1, -963477619), func_1216(joaat("COLOR_RED")), sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_PLURAL", func_1217(iParam1, -963477619), func_1216(joaat("COLOR_RED")), sParam2);
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

var func_1001(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	char* sVar3;

	iVar0 = func_1218(iParam0, 1);
	bVar2 = func_349(PLAYER::PLAYER_ID(), 1, 1);
	if (bVar2 || &Global_1103537->f_7058.f_2[iVar0] < 5)
	{
		if (bVar2)
		{
			sVar3 = "GFH_HELP_PVP_NEARBY_DEFENSIVE";
		}
		else
		{
			switch (iParam0)
			{
				case joaat("attack"):
					sVar3 = "GFH_HELP_PVP_NEARBY_ATTACK";
					break;
				case joaat("defend"):
					sVar3 = "GFH_HELP_PVP_NEARBY_DEFEND";
					break;
				case 404851220:
					sVar3 = "GFH_HELP_PVP_NEARBY_DELIVER";
					break;
			}
		}
		if (!MAP::DOES_BLIP_EXIST(iParam1))
		{
			uVar1 = func_1219(MISC::_CREATE_VAR_STRING(2, sVar3), 10000, 0, 0, 0, 1);
		}
		else
		{
			uVar1 = func_1219(MISC::_CREATE_VAR_STRING(2, sVar3, iParam1), 10000, 0, 0, 0, 1);
		}
		if (bVar2)
		{
		}
		else
		{
			Global_1103537->f_7058.f_2[iVar0] = &Global_1103537->f_7058.f_2[iVar0] + 1;
		}
	}
	return uVar1;
}

void func_1002(char* sParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (bParam2)
	{
		func_1220(1);
	}
	Local_2026.f_202.f_59 = func_1219(sParam0, iParam1, 0, 0, 0, 1);
}

int func_1003(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 64;
			return 1;
		case 2:
			*iParam1 = 8;
			return 1;
		case 4:
			*iParam1 = 32;
			return 1;
		case 3:
			*iParam1 = 16;
			return 1;
		case 5:
			if (func_349(PLAYER::PLAYER_ID(), 1, 1))
			{
				*iParam1 = 8388608;
			}
			else
			{
				*iParam1 = 128;
			}
			return 1;
		case 6:
			*iParam1 = 256;
			return 1;
		case 8:
			*iParam1 = 524288;
			return 1;
		case 7:
			*iParam1 = 4;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1004(var uParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { func_928(PLAYER::PLAYER_ID()) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if ((uParam0->f_16[iVar4 /*12*/])->f_2 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar4 /*12*/])))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(&(uParam0->f_16[iVar4 /*12*/]));
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > 80f)
			{
			}
			else
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

int func_1005(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (func_113((uParam0->f_16[iVar0 /*12*/])->f_4, iParam2))
		{
		}
		else if (func_113((uParam0->f_16[iVar0 /*12*/])->f_4, iParam3))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1006(bool bParam0)
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
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if ((func_202(iVar0, &Local_17, 32) || func_202(iVar0, &Local_17, 65536)) || func_202(iVar0, &Local_17, 131072))
		{
		}
		else
		{
			bVar3 = false;
			if ((Local_17.f_16[iVar0 /*12*/])->f_7 == 255)
			{
				*bParam0 = 0;
			}
			else if ((Local_17.f_16[iVar0 /*12*/])->f_7 == iVar2 && !func_976(iVar0, 255))
			{
				*bParam0 = 0;
			}
			else if (!func_1009((Local_17.f_16[iVar0 /*12*/])->f_7, &uVar1))
			{
				*bParam0 = 0;
			}
			else if (!GANG::_0x3F59FE6F37869576((Local_17.f_16[iVar0 /*12*/])->f_7, iVar2))
			{
				*bParam0 = 0;
				return 1;
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		*bParam0 = 0;
	}
	return 0;
}

int func_1007()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_203(iVar0, &Local_17, 128))
		{
		}
		else if (func_203(iVar0, &Local_17, 2))
		{
		}
		else if (func_203(iVar0, &Local_17, 4))
		{
		}
		else if (func_203(iVar0, &Local_17, 256) || func_203(iVar0, &Local_17, 512))
		{
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_1008(bool bParam0)
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
		if ((((!func_203(iVar0, &Local_17, 128) || func_203(iVar0, &Local_17, 2)) || func_203(iVar0, &Local_17, 16)) || func_203(iVar0, &Local_17, 256)) || func_203(iVar0, &Local_17, 512))
		{
		}
		else
		{
			bVar3 = false;
			if ((Local_17.f_257[iVar0 /*5*/])->f_3 == 255)
			{
				*bParam0 = 0;
			}
			else if (!func_1009((Local_17.f_257[iVar0 /*5*/])->f_3, &uVar2))
			{
				*bParam0 = 0;
			}
			else if (!GANG::_0x3F59FE6F37869576((Local_17.f_257[iVar0 /*5*/])->f_3, iVar1))
			{
				*bParam0 = 0;
				return 1;
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		*bParam0 = 0;
	}
	return 0;
}

int func_1009(int iParam0, var uParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return 0;
	}
	*uParam1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	return 1;
}

char* func_1010(bool bParam0)
{
	switch (func_200(&Local_2026))
	{
		case -19759302:
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

char* func_1011(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_GO_TO_COACH";
	}
	return "NET_CHU_OBJ_GO_TO_COACH_PLURAL";
}

char* func_1012(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_STOP_COACH";
	}
	return "NET_CHU_OBJ_STOP_COACH_PLURAL";
}

char* func_1013(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_KILL_GUARDS_STATIONARY";
	}
	return "NET_CHU_OBJ_KILL_GUARDS";
}

char* func_1014()
{
	return "NET_CHU_OBJ_GET_CASH";
}

char* func_1015(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_HOGTIE_S";
	}
	return "NET_CHU_OBJ_HOGTIE";
}

char* func_1016(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROPOFF_KIDNAP_S_CARRY", func_1221());
	}
	if (bParam0)
	{
		return "NET_CHU_OBJ_DROPOFF_KIDNAP_S";
	}
	return "NET_CHU_OBJ_DROPOFF_KIDNAP";
}

char* func_1017(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_SECURE_BAG";
	}
	return "NET_CHU_OBJ_SECURE_BAGS";
}

char* func_1018(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TURN_IN_BAG_CARRY", func_1221());
		}
		return "NET_CHU_OBJ_TURN_IN_BAG_S";
	}
	if (bParam1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TURN_IN_BAGS_CARRY", func_1221());
	}
	return "NET_CHU_OBJ_TURN_IN_BAG";
}

char* func_1019(float fParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	char* sVar1;

	switch (fParam0->f_10)
	{
		case -19759302:
			func_633(bParam4, &uVar0, iParam2, iParam3);
			if (*bParam4)
			{
				sVar1 = func_1217(*iParam2, joaat("COLOR_PURE_WHITE"));
			}
			else
			{
				sVar1 = func_1222(*iParam3, joaat("COLOR_PURE_WHITE"));
			}
			if (iParam1 || *bParam4)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_KIDNAP_S", sVar1);
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_KIDNAP", sVar1);
		case -409129282:
			func_634(bParam4, &uVar0, iParam2, iParam3);
			if (*bParam4)
			{
				sVar1 = func_1217(*iParam2, joaat("COLOR_PURE_WHITE"));
			}
			else
			{
				sVar1 = func_1222(*iParam3, joaat("COLOR_PURE_WHITE"));
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

char* func_1020()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return "NET_CHU_OBJ_PVP_STEAL_KIDNAP_MULTI";
		case -409129282:
			return "NET_CHU_OBJ_PVP_STEAL_BAGS_MULTI";
		default:
			break;
	}
	return "";
}

char* func_1021(float fParam0, bool bParam1)
{
	switch (fParam0->f_10)
	{
		case -19759302:
			if (bParam1)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_DROPOFF_KIDNAP_S", func_1221());
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_DROPOFF_KIDNAP", func_1221());
		case -409129282:
			if (bParam1)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_TURN_IN_BAG", func_1221());
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_TURN_IN_BAGS", func_1221());
		default:
			break;
	}
	return "";
}

char* func_1022(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_TAKE_BAG";
	}
	return "NET_CHU_OBJ_TAKE_BAGS";
}

char* func_1023()
{
	return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROP_KIDNAP", func_1221());
}

char* func_1024(bool bParam0)
{
	if (bParam0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROP_BAG", func_1221());
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROP_BAGS", func_1221());
}

var func_1025(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	return func_1223(uParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

char* func_1026()
{
	return "NET_CHU_NAME";
}

char* func_1027(bool bParam0)
{
	switch (func_200(&Local_2026))
	{
		case -19759302:
			if (bParam0)
			{
				return "NET_CHU_TOAST_START_BODY_KIDNAP";
			}
			if (func_632())
			{
				return "NET_CHU_TOAST_START_BODY_KIDNAP_PLURAL";
			}
			return "NET_CHU_TOAST_START_BODY_KIDNAP_PLURAL_S";
		case -409129282:
		default:
			break;
	}
	if (func_632())
	{
		return "NET_CHU_TOAST_START_BODY_ROBBERY_PLURAL";
	}
	return "NET_CHU_TOAST_START_BODY_ROBBERY";
}

int func_1028(char* sParam0, char* sParam1)
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
	uVar0 = func_1226(sParam0, sParam1, 7500, func_1224(), func_1225(), 0, 1, 1);
	return uVar0;
}

char* func_1029(int iParam0)
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

struct<8> func_1030(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

char* func_1031(bool bParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_41(Local_361[Local_2026.f_634 /*52*/], 8388608))
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
	iVar0 = func_1227();
	switch (iVar0)
	{
		case 1:
			func_209(&sVar2, &iVar3);
			switch (func_200(&Local_2026))
			{
				case -19759302:
					if (iVar3 == 1)
					{
						return "NET_CHU_TOAST_END_BODY_WON_KIDNAP";
					}
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_WON_KIDNAP_PLURAL", sVar2, iVar3);
				case -409129282:
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
			func_209(&sVar2, &iVar3);
			switch (func_200(&Local_2026))
			{
				case -19759302:
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_OVER_KIDNAP", sVar2, iVar3);
				case -409129282:
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_OVER_ROBBERY", sVar2, iVar3);
				default:
					break;
			}
			return "";
		case 2:
			if (func_55(&Local_17, 64))
			{
				return "NET_CHU_TOAST_END_BODY_EXPIRED";
			}
			switch (func_200(&Local_2026))
			{
				case -19759302:
					if (func_367(0) == 0)
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
					else if (func_1228(&iVar4, &iVar5, &uVar1))
					{
						if (bParam0)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP", func_1229(iVar4, iVar5, -5208416));
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_PLURAL", func_1229(iVar4, iVar5, -5208416));
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
				case -409129282:
					if (func_367(0) == 0)
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
					else if (func_1228(&iVar4, &iVar5, &uVar1))
					{
						if (bParam0)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP", func_1229(iVar4, iVar5, -5208416));
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_PLURAL", func_1229(iVar4, iVar5, -5208416));
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

void func_1032(struct<8> Param0, struct<8> Param8, struct<8> Param16, int iParam24)
{
	Global_1103537->f_21.f_80 = 1;
	Global_1103537->f_21.f_80.f_1 = { Param0 };
	Global_1103537->f_21.f_80.f_9 = { Param8 };
	Global_1103537->f_21.f_80.f_17 = { Param16 };
	Global_1103537->f_21.f_80.f_25 = iParam24;
	Global_1103537->f_21.f_80.f_26 = 0;
}

int func_1033(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
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
		uVar0 = func_1230(sVar1, sParam0, sParam1, 7500, func_666(), func_667(), 0, 1, 1, 1);
	}
	else
	{
		uVar0 = func_1226(sVar1, sParam1, 7500, func_666(), func_667(), 0, 1, 1);
	}
	return uVar0;
}

int func_1034(int iParam0)
{
	switch (iParam0)
	{
		case -2121688190:
		case -2106580172:
		case -2048736478:
		case -2034972265:
		case -2030232380:
		case -2024635066: /* GXTEntry: "Team Base" */
		case -1998058959:
		case -1988105196:
		case -1906191545:
		case -1816664083:
		case -1747825963: /* GXTEntry: "Wanted Poster" */
		case -1747775003:
		case -1741111493:
		case -1693203215:
		case -1688128310:
		case -1662942683:
		case -1633216922:
		case -1595467349:
		case -1567930587:
		case -1566323707:
		case -1559242154:
		case -1513632695:
		case -1478891674:
		case -1462274666:
		case -1456680863:
		case -1396905917:
		case -1395051846:
		case -1392193699:
		case -1389658546:
		case -1371003729:
		case -1357626643:
		case -1321714808:
		case -1263043163:
		case -1237816179:
		case -1210145388:
		case -1199313137:
		case -1134374451:
		case -1117222502:
		case -1103135225:
		case -1085232344:
		case -1081805875:
		case -1031152097:
		case -1025216818:
		case -1018697504: /* GXTEntry: "Bolt" */
		case -992598136:
		case -992156975:
		case -985996415:
		case -984192463:
		case -968848760:
		case -963916715:
		case -879802008:
		case -867923254:
		case -822028324:
		case -818533067:
		case -780469251:
		case -755765764: /* GXTEntry: "VIP" */
		case -747104616:
		case -740629317:
		case -737237468:
		case -735182489:
		case -701364869:
		case -592068833:
		case -511566837:
		case -507621590:
		case -426139257:
		case -392465725:
		case -352964861:
		case -272216216:
		case -243818172:
		case -235048253:
		case -222767785:
		case -180188163:
		case -164117130:
		case -158269097:
		case -152950882:
		case -118871741:
		case -104543072:
		case -60720396:
		case -1770032:
		case 60954128:
		case 90287351:
		case 133359852:
		case 214435071:
		case 221316808:
		case 228563269:
		case 233295963:
		case 263099185:
		case 338003170:
		case 553094466:
		case 564457427:
		case 615597833:
		case 639638961:
		case 748106308:
		case 778811758:
		case 820034251:
		case 994636947:
		case 1001245999:
		case 1045919449:
		case 1055774449:
		case 1069847489:
		case 1095891419:
		case 1116438174:
		case 1118985838:
		case 1147888108:
		case 1151744703:
		case 1153710309:
		case 1181380553:
		case 1183081869:
		case 1202244626: /* GXTEntry: "Hire Camp Follower" */
		case 1257411558:
		case 1258184551:
		case 1264416627:
		case 1293773224:
		case 1366733613:
		case 1368078158:
		case 1368652849:
		case 1391579593:
		case 1406173366:
		case 1433472988: /* GXTEntry: "Ball" */
		case 1451797164:
		case 1454572348:
		case 1493420112:
		case 1508919320:
		case 1654787099:
		case 1664261990:
		case 1735233562:
		case 1763355466:
		case 1834871186:
		case 1862205446:
		case 1865251988:
		case 1875669968:
		case 1896900580:
		case 1961764827:
		case 1974270787:
		case 2005921736:
		case 2017085833:
		case 2107754879:
		case 2113496404:
		case 2121165562:
		case 2123729925:
			return 672378911;
	}
	return joaat("blips");
}

int func_1035(int iParam0)
{
	return iParam0;
}

void func_1036(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if (((*uParam0)[iParam2 /*34*/])->f_23 != iParam1)
	{
		((*uParam0)[iParam2 /*34*/])->f_23 = iParam1;
	}
}

int func_1037(var uParam0, bool bParam1)
{
	if (!func_1231())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_1232())
			{
				uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-119209833);
				func_459(1);
				func_1233(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1234())
			{
				return 0;
			}
			func_1233(uParam0, 2);
			break;
	}
	Global_1939067->f_107 = 1;
	return 1;
}

int func_1038(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_1235(uParam0->f_5, &(uParam0->f_6), 0);
		func_1235(uParam0->f_5, &(uParam0->f_7), 1);
		func_1235(uParam0->f_5, &(uParam0->f_8), 37);
		func_1236(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_1039(var uParam0, var uParam1, int iParam2)
{
	if (((*uParam1)[0 /*34*/])->f_21 == 0)
	{
		func_1237(uParam0, uParam1, 0, "meter0", iParam2);
		func_1237(uParam0, uParam1, 1, "meter1", iParam2);
		func_1237(uParam0, uParam1, 2, "meter2", iParam2);
		func_1237(uParam0, uParam1, 3, "meter3", iParam2);
		func_1237(uParam0, uParam1, 4, "meter4", iParam2);
		func_1237(uParam0, uParam1, 5, "meter5", iParam2);
		func_1237(uParam0, uParam1, 6, "meter6", iParam2);
		return 0;
	}
	return 1;
}

int func_1040(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
			{
				func_1238(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, *uParam0);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1546991729, uParam0->f_3);
			}
			func_1238(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_1238(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729) && UISTATEMACHINE::_0xF7C180F57F85D0B8(1546991729))
			{
				UISTATEMACHINE::_0x6B9FE4F0BA521A19(1546991729, 0);
				func_1238(uParam0, 4);
			}
			else
			{
				func_1238(uParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_0x11E73195E735B25B(1546991729))
			{
				*bParam2 = 1;
				func_1238(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_1041(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char[] cVar0[8];
	bool bVar1;

	cVar0 = func_1239(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_1240(uParam0->f_6, cVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_1236(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_1241(uParam0, iParam1, sParam4);
	func_1242(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

void func_1042(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;

	func_1243(iParam1, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5, &uVar6, &uVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_1244(uParam0, iVar0, uVar1, uVar2, uVar3, uVar4, uVar5, uVar6, uVar7, iParam2, bParam3, bParam4, bParam5);
		iVar0++;
	}
}

void func_1043(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_1044(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_1048(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_1045(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_1046(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

void func_1047(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_645(iParam0))
	{
		return;
	}
	iVar0 = func_1035(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

bool func_1048(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_1049(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949759)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949759)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949759)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949759)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949759)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
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
	((*Global_1949759)[iParam0 /*23*/])->f_3 = iVar0;
	func_1044(iParam0, 1);
	func_1045(iParam0, 1);
	func_1046(iParam0, 128);
}

var func_1050(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

var func_1051(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (GANG::_0xD6F6ACF4392187FB(iVar0) && GANG::_0x0F99F6436528A089(iVar0))
	{
		return func_1222(iVar0, iParam1);
	}
	return func_1217(iParam0, iParam1);
}

int func_1052(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

void func_1053(int iParam0)
{
	func_1245(iParam0);
	PED::_0xC9151483CC06A414(iParam0);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			func_1246(iParam0, -2014043657 /* GXTEntry: "Weathered Chestnut & Charcoal" */);
			break;
		case 1:
			func_1246(iParam0, -829673694 /* GXTEntry: "Weathered Charcoal & Ash" */);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, 0);
			break;
		case 1:
			func_1246(iParam0, 414935856 /* GXTEntry: "Weathered Charcoal" */);
			break;
		case 2:
			func_1246(iParam0, 317775775 /* GXTEntry: "Weathered Coffee" */);
			break;
		case 3:
			func_1246(iParam0, 457437253 /* GXTEntry: "Weathered Russet" */);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			func_1247(iParam0, 1);
			break;
		case 1:
			func_1247(iParam0, 2);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			func_1246(iParam0, 1351319737 /* GXTEntry: "Color Combination One" */);
			break;
		case 1:
			func_1246(iParam0, 1741336375 /* GXTEntry: "Color Combination Two" */);
			break;
		case 2:
			func_1246(iParam0, -340478195 /* GXTEntry: "Color Combination Three" */);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, 0);
			break;
		case 1:
			func_1246(iParam0, -288915854 /* GXTEntry: "Weathered Dark Oak" */);
			break;
		case 2:
			func_1246(iParam0, 720369354 /* GXTEntry: "Weathered Tan" */);
			break;
		case 3:
			func_1246(iParam0, 491707272 /* GXTEntry: "Weathered Walnut" */);
			break;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 1);
}

int func_1054(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	iVar0 = PED::CREATE_PED_ON_MOUNT(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6);
	return iVar0;
}

int func_1055(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5);
	return iVar0;
}

int func_1056(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(&Local_2026, &Var0, iParam0) && func_177(Var0, -1339596857, &uVar5, 0))
	{
		*iParam1 = uVar5;
		return 1;
	}
	return 0;
}

int func_1057(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2026, &Var0, iParam0) && func_300(Var0, 100469918, iParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1058()
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<5> Var10;
	int iVar15;

	if (((func_293(&Local_2026, &Var0) && func_313(&Var0, 419371455, 0, 0)) && func_313(&Var0, -2072295915, 0, 0)) && func_1248(Var0) > 0)
	{
		iVar8 = func_1248(Var0);
		func_140(&Var0);
		func_293(&Local_2026, &Var0);
		func_313(&Var0, 419371455, 0, 0);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			Var10 = { Var0 };
			if (!func_313(&Var10, -640241378, iVar7, 0))
			{
			}
			else
			{
				if (!func_311(Var10, 705932105, &fVar6, 0))
				{
					fVar6 = 1f;
				}
				fVar6 = func_429(fVar6, 0f, 1f);
				fVar6 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar6);
				if (fVar6 < fVar5)
				{
				}
				else if (!func_177(Var10, 751620374, &iVar9, 0))
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
	return func_1249();
}

bool func_1059(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (bParam1)
	{
		case joaat("group_sniper"):
		case -1101297303:
		case -594562071:
		case joaat("group_pistol"):
		case joaat("group_shotgun"):
		case joaat("group_rifle"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(bParam1))
			{
				return bParam1;
			}
			bVar0 = bParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_IS_WEAPON_MELEE(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26386 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_237(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26386)
						{
							if (func_237(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_21() == -1 && !func_1250(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_34)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_26386) && iParam0 != Global_34) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && bParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (bParam1)
		{
			case -1101297303:
			case joaat("group_pistol"):
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case joaat("group_sniper"):
			case -594562071:
			case joaat("group_shotgun"):
			case joaat("group_rifle"):
				if (func_1250(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_34)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_34 && func_237(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_IS_WEAPON_LANTERN(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 3;
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
		func_1251(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1252(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_1253(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

int func_1060(struct<5> Param0, int iParam5, int iParam6)
{
	var uVar0;

	if (func_177(Param0, iParam5, &uVar0, 0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	return 0;
}

int func_1061(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

int func_1062(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
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

void func_1063(int iParam0, var uParam1, int iParam2)
{
	if (func_557(iParam0, uParam1) == iParam2)
	{
		return;
	}
	(uParam1->f_16[iParam0 /*12*/])->f_2 = iParam2;
	(uParam1->f_16[iParam0 /*12*/])->f_3 = 0;
}

char* func_1064()
{
	return "script@mp@common@handovers@recieve_bag_holdup";
}

int func_1065()
{
	return 64;
}

void func_1066(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	if (!func_880(iParam0, uParam1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	if (func_579(iVar0) && func_715(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (VEHICLE::_0x0E3BF7ED4169EC43(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_438(iParam0, &iVar1, 1, 0) && !PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_715(iVar0) && func_890(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_3 != 1)
	{
		return;
	}
	if (func_733((Local_17.f_16[iParam0 /*12*/])->f_11, 1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if ((func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, joaat("driver"), 3) || func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, joaat("driver"), 2)) || func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, 12))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
}

void func_1067(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_698(iParam0, uParam1);
	iVar1 = func_865(iParam0, uParam1);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1063(iParam0, uParam1, -306837416);
		return;
	}
	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar2 = func_881(iParam0, uParam1);
	if ((PED::IS_PED_IN_VEHICLE(iVar0, iVar2, false) && iVar1 != 35) && iVar1 != 0)
	{
		func_1063(iParam0, uParam1, -522830230);
		return;
	}
}

void func_1068(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_880(iParam0, uParam1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	if ((!func_715(iVar0) && func_865(iParam0, uParam1) == 14) && func_520(iVar0, func_698(iParam0, uParam1), 1, 1) > 20f)
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_890(iVar0) && !func_1076((uParam1->f_16[iParam0 /*12*/])->f_11))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (!func_715(iVar0))
	{
		return;
	}
	if (func_579(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if ((!func_579(iVar0) && !func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, joaat("driver"), -1)) && !func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, -1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
}

void func_1069(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_698(iParam0, uParam1);
	if (!PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
}

void func_1070(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = func_698(iParam0, uParam1);
	if (!func_880(iParam0, uParam1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (VEHICLE::_0x0E3BF7ED4169EC43(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_865(iParam0, uParam1) == 12 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iVar1)
	{
		func_1063(iParam0, uParam1, joaat("driver"));
		return;
	}
	if (func_579(iVar0) && func_715(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_715(iVar0) && func_890(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_733((Local_17.f_16[iParam0 /*12*/])->f_11, 1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_3 != 6)
	{
		return;
	}
	if (func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, 11) || func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, 7))
	{
		func_1063(iParam0, uParam1, -193064196);
	}
}

int func_1071(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 0;
	while (*uParam1 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_361[*uParam1 /*52*/])->f_2.f_2), iParam0))
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
				return 1;
			}
		}
		*uParam1++;
	}
	return 0;
}

int func_1072(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = (uParam1->f_16[iParam0 /*12*/])->f_11;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iVar0 /*4*/])))
	{
		return 0;
	}
	iVar1 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iVar0 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (func_549(iVar1, uParam2->f_10.f_2, 1) > 20f)
	{
		return 0;
	}
	return 1;
}

int func_1073(int iParam0, int iParam1, int iParam2, float fParam3)
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
		if ((Local_361[iVar1 /*52*/])->f_47 == 0)
		{
		}
		else if (!func_123(iVar1, 1, 1))
		{
		}
		else
		{
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, func_928(iVar6), true);
			if (fVar5 > fParam3)
			{
			}
			else if ((Local_361[iVar1 /*52*/])->f_47 < iVar0)
			{
			}
			else
			{
				iVar0 = (Local_361[iVar1 /*52*/])->f_47;
				*iParam1 = iVar6;
				*iParam2 = iVar0;
			}
		}
		iVar1++;
	}
	if (*iParam1 == 255)
	{
		return 0;
	}
	return 1;
}

int func_1074(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;

	if (!func_1254(iParam0, PLAYER::GET_PLAYER_PED(iParam1), fParam3))
	{
		*uParam2 = -1;
		return 0;
	}
	if (*uParam2 == -1)
	{
		*uParam2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return 0;
	}
	iVar0 = NETWORK::GET_TIME_DIFFERENCE(*uParam2, NETWORK::GET_NETWORK_TIME_ACCURATE());
	if (iVar0 > iParam4)
	{
		return 1;
	}
	return 0;
}

int func_1075(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, 6))
	{
		return 1;
	}
	if (bParam3 && func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, -522830230, 14))
	{
		return 1;
	}
	return 0;
}

int func_1076(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam0 != -1 && (Local_17.f_16[iVar0 /*12*/])->f_11 != iParam0)
		{
		}
		else if (!func_1255((Local_17.f_16[iVar0 /*12*/])->f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1077(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (func_398(iParam0, 1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!func_880(iParam0, &Local_17))
	{
		return 0;
	}
	iVar1 = func_881(iParam0, &Local_17);
	if (func_520(iVar0, iVar1, 1, 1) > fParam1)
	{
		return 0;
	}
	return 1;
}

int func_1078(int iParam0, bool bParam1, vector3 vParam2, float fParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_41((*iParam0)[iVar0 /*52*/], 32))
		{
		}
		else if (!func_123(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_928(iVar1), vParam2, true) > fParam5)
			{
			}
			else
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1079(int iParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if ((Local_17.f_16[iVar4 /*12*/])->f_2 == 0 || (Local_17.f_16[iVar4 /*12*/])->f_2 == -1088690539)
		{
		}
		else if ((Local_17.f_16[iVar4 /*12*/])->f_2 != 401658241 && !func_1090((Local_17.f_16[iVar4 /*12*/])->f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar4 /*12*/])))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar4 /*12*/]));
			if (iVar3 == iParam0)
			{
			}
			else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > fParam1)
			{
			}
			else
			{
				return 1;
			}
		}
		iVar4++;
	}
	if (iParam2 && func_1256(vVar0, fParam1))
	{
		return 1;
	}
	return 0;
}

int func_1080(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 == iParam0)
		{
		}
		else if ((uParam1->f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if ((uParam1->f_16[iVar0 /*12*/])->f_7 != iParam2)
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1081(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_123(iVar0, 0, 1) || !func_41((*iParam1)[iVar0 /*52*/], 2))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_549(iParam0, func_928(iVar1), 1) > fParam2)
			{
			}
			else
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1082(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam1->f_16[iVar0 /*12*/])->f_11 != iParam0)
		{
		}
		else if ((uParam1->f_16[iVar0 /*12*/])->f_2 != iParam2)
		{
		}
		else if (iParam3 != -1 && (uParam1->f_16[iVar0 /*12*/])->f_3 != iParam3)
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1083(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if ((uParam0->f_16[iVar0 /*12*/])->f_3 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1084(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_41((*uParam1)[iVar0 /*52*/], 32) && !func_41((*uParam1)[iVar0 /*52*/], 64))
		{
		}
		else if (!func_123(iVar0, 0, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_549(iParam0, func_928(iVar1), 1) > fParam2)
			{
			}
			else
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1085(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 0;
	while (*uParam1 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_361[*uParam1 /*52*/])->f_2.f_8), iParam0))
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
				return 1;
			}
		}
		*uParam1++;
	}
	return 0;
}

int func_1086(int iParam0, int iParam1)
{
	int iVar0;

	*iParam1 = 0;
	while (*iParam1 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_361[*iParam1 /*52*/])->f_2), iParam0))
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
				return 1;
			}
		}
		*iParam1++;
	}
	return 0;
}

int func_1087()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 20000;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_300(Var1, -1321720745, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

int func_1088()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 45000;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_300(Var1, 1252114078, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

int func_1089()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 65000;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_300(Var1, 592666605, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

int func_1090(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1091(int iParam0)
{
	switch (iParam0)
	{
		case -94224997:
			return 1;
		case 575287677:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_1092(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (!func_1133(iParam0))
	{
		return 0;
	}
	if (!func_1144(&Var0))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 17, iParam1, 0, iParam2))
	{
		return 0;
	}
	return func_1257(Var0, 37, 1);
}

void func_1093(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_1258(uParam0))
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

bool func_1094(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(((*Global_1111121)[iParam0 /*42*/])->f_7.f_4, iParam1);
}

int func_1095(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (((*Global_1277166)[iVar0 /*86*/])->f_1 == -1)
	{
		return 0;
	}
	*uParam1 = ((*Global_1277166)[iVar0 /*86*/])->f_1;
	*iParam2 = ((*Global_1277166)[iVar0 /*86*/])->f_3;
	return 1;
}

int func_1096(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1277166[iParam0 /*86*/];
}

int func_1097(int iParam0)
{
	return &(Global_1103537->f_1641.f_81[iParam0 /*4*/]);
}

int func_1098(int iParam0)
{
	return ((*Global_1114828)[iParam0 /*1991*/])->f_17;
}

void func_1099(int iParam0)
{
	if (!func_1259(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19683.f_260), iParam0);
	}
}

void func_1100(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1260(Global_1132968->f_4641.f_2[func_504(iParam0, 1) /*4*/]);
}

bool func_1101(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

var func_1102(int iParam0)
{
	return ((*Global_1276359)[iParam0 /*4*/])->f_1;
}

void func_1103(struct<2> Param0, int iParam2)
{
	func_809(Param0, iParam2);
}

void func_1104(struct<2> Param0, int iParam2)
{
	func_809(Param0, iParam2);
}

void func_1105(var uParam0, int iParam1)
{
	func_1261(uParam0, iParam1);
}

var func_1106(int iParam0)
{
	return ((*Global_1276359)[iParam0 /*4*/])->f_3;
}

bool func_1107(int iParam0)
{
	return iParam0 != 0;
}

void func_1108(var uParam0)
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
		if (!func_1262(iVar0, &vVar2))
		{
			MISC::_COPY_MEMORY((*uParam0)[iVar1 /*3*/], &vVar5, 3);
		}
		else if (vVar2.x == 0)
		{
			MISC::_COPY_MEMORY((*uParam0)[iVar1 /*3*/], &vVar5, 3);
		}
		else
		{
			MISC::_COPY_MEMORY((*uParam0)[iVar1 /*3*/], &vVar2, 3);
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_31 = iVar1;
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("easy");
		case 1:
			return joaat("medium");
		case 2:
			return joaat("hard");
		default:
			break;
	}
	return 0;
}

bool func_1110(var uParam0, var uParam1)
{
	return (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1);
}

int func_1111(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_804(joaat("target"), func_1263(iParam0)) };
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

void func_1112(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(joaat("target"), func_1263(iParam1)) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	if (!STATS::STAT_ID_SET_INT(&Var0, iParam0, true))
	{
		return;
	}
}

int func_1113(var uParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = func_1264(*uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(1, 31));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(iVar1, 20));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(uParam0->f_1, 10));
	return uVar0;
}

int func_1114()
{
	return 362424745;
}

void func_1115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	int iVar8;

	if (!func_1133(iParam0))
	{
		return;
	}
	iVar8 |= 4;
	switch (iParam1)
	{
		case 1:
			iVar8 |= 1;
			break;
		case 2:
			iVar8 |= 2;
			break;
		default:
			break;
	}
	switch (iParam4)
	{
		case 0:
			iVar8 |= 4;
			break;
		case 1:
			iVar8 |= 2052;
			break;
		default:
			break;
	}
	iVar1 = func_1134(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1135(iParam0, iVar0, &uVar4);
		func_1136(&uVar4, iVar8);
		iVar0++;
	}
	switch (iParam1)
	{
		case 0:
			bVar2 = false;
			break;
		case 1:
			bVar2 = true;
			break;
		case 2:
			bVar2 = false;
			break;
		default:
			bVar2 = false;
			break;
	}
	if (bVar2)
	{
		if (iParam3 != 0)
		{
			func_1265(iParam0, iParam3);
		}
	}
	switch (iParam1)
	{
		case 0:
			iVar3 = 0;
			break;
		case 1:
			iVar3 = -1105088361;
			break;
		case 2:
			iVar3 = -1904461405;
			break;
		default:
			iVar3 = 0;
			break;
	}
	if (iVar3 != 0)
	{
		func_1137(iParam0, iVar3, iParam2);
	}
}

void func_1116(int iParam0)
{
	if (func_758(&(Global_1103537->f_1739.f_9), iParam0, 3))
	{
	}
}

void func_1117(int iParam0)
{
	if (func_758(&(((*Global_1124565)[PLAYER::PLAYER_ID() /*7*/])->f_3), iParam0, 3))
	{
	}
}

void func_1118(int iParam0)
{
	func_1266(iParam0);
}

int func_1119(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_1267())
	{
		return 0;
	}
	if (!func_481())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1164(&Global_0, 8);
	}
	func_1164(&Global_0, 1);
	return 1;
}

void func_1120(struct<2> Param0, bool bParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_1268(func_1127(Param0));
	iVar1 = func_23(Param0);
	vVar2.f_1 = bParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_21() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_1269(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, bParam2, &vVar2);
}

void func_1121(struct<2> Param0, int iParam2)
{
	if (!func_28(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1270(Param0);
	}
	else
	{
		func_1271(Param0, iParam2);
	}
	func_1272();
}

void func_1122(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1273(Global_1939178, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_1274(Global_1939178, 8388608);
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

void func_1123(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1275(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1276(cVar2);
			}
			else
			{
				func_1277();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1124(bool bParam0)
{
	if (!bParam0 && func_1278(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_1125(int iParam0)
{
	Global_1900718 = (Global_1900718 || iParam0);
}

int func_1126(struct<2> Param0)
{
	return func_1280(func_1279(Param0));
}

int func_1127(var uParam0, var uParam1)
{
	return uParam0;
}

struct<2> func_1128()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_1129(int iParam0)
{
	return (Global_1103537->f_7066[iParam0 /*5*/])->f_1;
}

bool func_1130(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1131(var uParam0, int iParam1)
{
	func_1281(uParam0, iParam1);
}

bool func_1132(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_1133(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

int func_1134(int iParam0)
{
	struct<5> Var0;

	if (!func_1133(iParam0))
	{
		return 0;
	}
	if (!func_1144(&Var0))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 10, 0, 0, 0))
	{
		return 0;
	}
	return func_1282(Var0, 1);
}

int func_1135(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	struct<5> Var4;
	int iVar9;
	int iVar10;

	MISC::_COPY_MEMORY(uParam2, &uVar0, 4);
	if (!func_1133(iParam0))
	{
		return 0;
	}
	if (!func_1144(&Var4))
	{
		return 0;
	}
	if (!func_1145(Var4, &(Var4.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var4, &(Var4.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var4, &(Var4.f_1), 10, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1145(Var4, &(Var4.f_1), 11, iParam1, 0, 0))
	{
		return 0;
	}
	iVar9 = func_1146(Var4);
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar10 = func_1147(Var4);
	if (iVar10 == 0)
	{
		return 0;
	}
	*uParam2 = { func_804(iVar10, iVar9) };
	if (!STATS::_STAT_ID_IS_VALID(uParam2))
	{
		return 0;
	}
	uParam2->f_2 = func_1283(Var4);
	uParam2->f_3 = func_1284(Var4, joaat("trigger"));
	return 1;
}

void func_1136(var uParam0, int iParam1)
{
	if (uParam0->f_2 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if ((uParam0->f_3 && iParam1) != uParam0->f_3)
	{
		return;
	}
	switch (uParam0->f_2)
	{
		case -771980954:
		case 1513129800:
			break;
		case -2071026539:
		case -2001503642:
		case -1984963943:
		case -1892463704:
		case -1239636564:
		case -1130018939:
		case -358032694:
		case -22202911:
		case 123615871:
		case 446189390:
		case 622623048:
		case 1215693782:
		case 1374282888:
		case 1386878225:
		case joaat("attempts"):
		case 1529339137:
		case 1822827642:
			STATS::_0x6A0184E904CDF25E(uParam0, 1);
			break;
		default:
			break;
	}
}

void func_1137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (!func_1285(iParam0, iParam2, iParam1, &iVar0, &uVar1))
	{
		return;
	}
	func_269(iVar0, 0, 0);
}

int func_1138(int iParam0)
{
	struct<5> Var0;

	if (!func_1133(iParam0))
	{
		return 0;
	}
	if (!func_1144(&Var0))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		return 0;
	}
	return func_1282(Var0, 6);
}

int func_1139(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	var uVar5;

	MISC::_COPY_MEMORY(uParam2, &uVar5, 5);
	if (!func_1133(iParam0))
	{
		return 0;
	}
	if (!func_1144(&Var0))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 29, iParam1, 0, 1))
	{
		return 0;
	}
	uParam2->f_1 = func_1286(Var0);
	*uParam2 = func_1287(Var0);
	uParam2->f_2 = func_1288(Var0);
	uParam2->f_4 = func_1284(Var0, joaat("trigger"));
	switch (uParam2->f_2)
	{
		case joaat("int"):
			uParam2->f_3 = func_1289(Var0);
			break;
		default:
			return 0;
	}
	return 1;
}

void func_1140(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if ((uParam0->f_4 && iParam1) != uParam0->f_4)
	{
		return;
	}
	if (!STATS::CHAL_IS_GOAL_ACTIVE(*uParam0, uParam0->f_1))
	{
		return;
	}
	switch (uParam0->f_2)
	{
		case joaat("int"):
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(*uParam0, uParam0->f_1, uParam0->f_3);
			break;
		default:
			break;
	}
}

int func_1141(int iParam0, var uParam1, var uParam2)
{
	if (!func_1290(iParam0))
	{
		return 0;
	}
	if (!func_1291())
	{
		return 0;
	}
	if (!func_1292(iParam0, uParam1, uParam2))
	{
		return 0;
	}
	if (*uParam1 == 414878641 && Global_1572887->f_13 != 0)
	{
		return 0;
	}
	else if (*uParam1 == -816321659 && Global_1572887->f_13 != -1)
	{
		return 0;
	}
	return 1;
}

void func_1142(int iParam0)
{
	Global_1103537->f_1752.f_4247 = (Global_1103537->f_1752.f_4247 - (Global_1103537->f_1752.f_4247 && iParam0));
}

void func_1143(int iParam0)
{
	Global_1103537->f_1752.f_5299 = (Global_1103537->f_1752.f_5299 || iParam0);
}

int func_1144(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = func_1293();
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

int func_1145(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(iParam5, &Param0))
	{
		return 0;
	}
	return 1;
}

int func_1146(struct<5> Param0)
{
	return func_1257(Param0, 35, 1);
}

int func_1147(struct<5> Param0)
{
	return func_1257(Param0, 34, 1);
}

bool func_1148()
{
	return func_28(*Global_1051163);
}

void func_1149(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_1150(int iParam0, int iParam1)
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

int func_1151()
{
	switch (Global_1939178->f_38)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
		case 1652431022: /* GXTEntry: "Refined Binoculars" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1152()
{
	return Global_1051202->f_12;
}

char* func_1153()
{
	return "unnamed";
}

int func_1154(int iParam0)
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

int func_1155(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_591(35, iParam0);
}

int func_1156(int iParam0)
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

bool func_1157(int iParam0)
{
	if (func_1294(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_1295(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

bool func_1158(struct<2> Param0)
{
	return func_946(Param0) == 0;
}

int func_1159(struct<2> Param0)
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
		if (func_29(*((*Global_1900789)[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1160(struct<2> Param0, bool bParam2)
{
	if (!func_28(Param0))
	{
		return;
	}
	if (!func_1158(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1296(Param0);
	}
	func_1121(Param0, 1);
	bParam2 = bParam2;
}

void func_1161(struct<2> Param0)
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
		STATS::_0xB2A38826E5886E83(func_23(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_1166(Param0, &Var0))
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

int func_1162(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_1279(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900718->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900718->f_66;
	func_1297(Param0, iVar0);
	Global_1900718->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900718->f_66)
	{
		return iVar0;
	}
	func_1298(iVar0, iParam2);
	return iParam2;
}

bool func_1163(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_1164(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1165(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return 0;
	}
	iVar0 = func_1279(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1299(Param0, func_969(0), iParam2))
	{
		func_1121(func_969(0), 3);
		func_1121(func_969(iVar0), 4);
		return 0;
	}
	func_1298(iVar0, 0);
	func_1121(func_969(0), 3);
	func_1121(func_969(1), 4);
	return 1;
}

int func_1166(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_263(Param0, &vVar0);
	if (func_1300(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

int func_1167(int iParam0, int iParam1, bool bParam2)
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
			return 0;
	}
	if ((bVar2 && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		iVar0 = PED::_GET_RIDER_OF_MOUNT(*iParam1, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && bParam2)
		{
			iVar1 = PLAYER::_0xAD03B03737CE6810(*iParam1);
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
				if (func_520(*iParam1, iVar0, 1, 1) < 30f && !AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
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
		return 0;
	}
	return 1;
}

int func_1168(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1150(iParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

int func_1169(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_1301(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
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
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

int func_1170(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_950(vParam0);
	switch (iVar0)
	{
		case 5:
		case 6:
		case 7:
			switch (iParam3)
			{
				case 0:
					return -2041536102;
				case 1:
					return -123942207;
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
					return -722984556;
				case 1:
					return -1663780084;
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
					return -324329373;
				case 1:
					return 459026541;
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
					return 1235390186;
				case 1:
					return 130796932;
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
					return 163775;
				case 1:
					return 1617065976;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_1171(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1939178->f_38) || 1151374672 == Global_1939178->f_38) && Global_1939178->f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1939178->f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_520(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_1302(iVar0, 0)))
		{
			if (func_1303(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_1172(int iParam0, int iParam1)
{
	return func_520(iParam0, iParam1, 1, 1);
}

float func_1173(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_1174(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return joaat("speech_params_shouted_critical");
		case 7:
			return joaat("speech_params_shouted_clear");
		case 8:
			return joaat("speech_params_allow_repeat");
		case 9:
			return joaat("speech_params_shouted_critical");
		case 0:
			return joaat("speech_params_shouted_critical");
		default:
			break;
	}
	return joaat("speech_params_shouted_clear");
}

char* func_1175(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 401658241)
			{
				if (Local_17.f_315 > 1)
				{
					iVar0 = 0;
					while (iVar0 < 20)
					{
						if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 401658241)
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
				if (func_725())
				{
					return "LAW_TAUNT_GEN_NEUTRAL";
				}
				return "OPENS_FIRE";
			}
			else if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "RT_LET_EM_HAVE_IT";
			}
			return "GENERIC_SHOCKED_HIGH";
		case 1:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
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
			if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "TIME_TO_GO";
			}
			return "GREET_SHOUTED";
		case 7:
			if (Local_2026.f_10 == -19759302)
			{
				return "GREET_PLAYER_CAPTURED_BOUNTY";
			}
			return "GANG_INTERACT_APPROACH_GOODS";
		case 9:
			if (iParam1 == -2133983324)
			{
				return "DISCOVERED_FAR";
			}
			else if (iParam1 == 824585797)
			{
				if (func_1304())
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
			if (Local_2026.f_10 == -19759302)
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

bool func_1176(int iParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = uParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_1305(iParam0, &Var0);
}

char* func_1177(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 401658241)
			{
				return "TAUNT_GEN_NEUTRAL";
			}
			else if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "OPENS_FIRE";
			}
			return "GENERIC_ANGRY_SHOUT";
		case 1:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "CHALLENGE_THREATEN_ARMED";
			}
			return "INTIMIDATED_GEN";
		case 6:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
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
			if (iParam1 == -2133983324 || iParam1 == 824585797)
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

char* func_1178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
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
			if (iParam1 == -2133983324 || iParam1 == 824585797)
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

int func_1179(int iParam0, int iParam1, bool bParam2)
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
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), 0, 0))
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
	iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iVar2, iParam1, 1);
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

int func_1180(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
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

void func_1181(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
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

int func_1182(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
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
			return 0;
	}
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (iVar1 < 5)
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iVar0))
	{
		return 0;
	}
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iVar0);
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return 0;
	}
	if (!AITRANSPORT::_0x660639BC60157048(iVar2, iParam1) && !func_555(iVar2, 1920417248))
	{
		return 0;
	}
	return 1;
}

void func_1183(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 0);
}

int func_1184()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	switch (iVar0)
	{
		case 0:
			return -1124614608;
		case 1:
			return 1904532698;
		case 2:
			return joaat("world_human_drinking");
		case 3:
			return -22664287;
		case 4:
			return -1032721003;
		case 5:
			return -258459266;
		case 6:
			return 1978275899;
		case 7:
			return 1285815972;
		default:
			break;
	}
	return -258459266;
}

int func_1185(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (ENTITY::_0x61914209C36EFDDB(iParam0))
	{
		case 5:
			iVar0 = PED::_GET_CARRIER_AS_HUMAN(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return 0;
			}
			if (!PED::IS_PED_A_PLAYER(iVar0))
			{
				return 0;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				return 0;
			}
			*iParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			return 1;
		case 7:
			iVar1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return 0;
			}
			iVar0 = PED::_GET_RIDER_OF_MOUNT(iVar1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return 0;
			}
			if (!PED::IS_PED_A_PLAYER(iVar0))
			{
				return 0;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				return 0;
			}
			*iParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1186(int iParam0)
{
	int iVar0;

	if ((Local_17.f_16[iParam0 /*12*/])->f_2 != 401658241)
	{
		return 0;
	}
	iVar0 = (Local_17.f_16[iParam0 /*12*/])->f_11;
	if (iVar0 < 0)
	{
		return 0;
	}
	switch (Local_2026.f_10)
	{
		case -19759302:
			if (iVar0 >= 20)
			{
				return 0;
			}
			if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
			{
				return 0;
			}
			if (func_202(iVar0, &Local_17, 32))
			{
				return 0;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
			{
				return 0;
			}
			break;
		case -409129282:
			if (iVar0 >= 4)
			{
				return 0;
			}
			if ((!func_203(iVar0, &Local_17, 128) || func_203(iVar0, &Local_17, 2)) || func_203(iVar0, &Local_17, 16))
			{
				return 0;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar0 /*5*/])))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_1187(struct<2> Param0)
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
	if (!func_263(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_263(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
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

int func_1188(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = ENTITY::IS_ENTITY_A_PED(iParam2);
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_2[iVar0])))
		{
			if (&uParam0->f_2[iVar0] == iParam2)
			{
				*uParam3 = iVar0;
				*uParam1 = &uParam0->f_2[iVar0];
				return 1;
			}
			else if (bVar1 && ENTITY::IS_ENTITY_A_VEHICLE(&(uParam0->f_2[iVar0])))
			{
				iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam2);
				if (PED::GET_PED_CONFIG_FLAG(iVar2, 140, false) && PED::_0xE4770DA1B8FF4FD1(iVar2) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_2[iVar0])))
				{
					*uParam3 = iVar0;
					*uParam1 = &uParam0->f_2[iVar0];
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1189(int iParam0)
{
	if (ENTITY::IS_ENTITY_A_PED(*iParam0))
	{
		if (iParam0->f_3 || iParam0->f_24)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(*iParam0))
	{
		if (iParam0->f_3)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(*iParam0))
	{
		if (iParam0->f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_1190()
{
	return Global_1893575->f_2;
}

bool func_1191(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_1192(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_1306(vParam0);
	iVar1 = -1;
	if (Global_1893558[iVar0] > 0)
	{
		iVar2 = (Global_1893558[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892741)[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1887327)[iVar4 /*36*/])->f_4))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar4 /*36*/])->f_4, vParam0))
				{
					switch (((*Global_1887327)[iVar4 /*36*/])->f_21)
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

int func_1193(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_1194(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Local_17.f_329[iVar0] == 255)
		{
		}
		else if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(&(Local_17.f_329[iVar0])) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_329[iVar0])))
		{
		}
		else
		{
			*iParam0 = &Local_17.f_329[iVar0];
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1195(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Local_17.f_329[iVar0] == 255)
		{
		}
		else if (&Local_17.f_329[iVar0] != iParam0)
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1196(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam0, 1, 0, 256);
	if (iParam1 == joaat("player"))
	{
		iVar0 = PED::_GET_LAST_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		iVar1 = PLAYER::_0xF49F14462F0AE27C(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, 1, 0, 256);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, 1, 0, 256);
		}
		return;
	}
	else if (iParam1 == 130495496)
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
	else if (!func_1195(iVar3))
	{
		*bParam5 = 1;
	}
	if (bParam4)
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
}

int func_1197(int iParam0)
{
	switch (iParam0)
	{
		case 130495496:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1198(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7)
{
	int iVar0;

	switch (iParam2)
	{
		case 130495496:
			if (iParam1 >= 7 || iParam1 < 0)
			{
				return true;
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(&(Local_17.f_329[iParam1])) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_329[iParam1])))
			{
				return true;
			}
			if (&Local_17.f_329[iParam1] != PLAYER::PLAYER_ID())
			{
				return false;
			}
			if (Local_2026.f_537.f_1 > 40)
			{
				return true;
			}
			iVar0 = func_1307(vParam4, fParam7, 0, 0, 0, 0, 0, 0, 1, 100, 0, 1);
			if (iVar0 == 0)
			{
				Local_2026.f_537.f_1++;
				return false;
			}
			*iParam3 = func_268(iVar0);
			break;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam3);
}

float func_1199(int iParam0)
{
	switch (iParam0)
	{
		case 1018236383:
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

void func_1200(var uParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(uParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

int func_1201(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1202(vector3 vParam0, vector3 vParam3)
{
	var uVar0;

	uVar0 = func_227();
	CAM::_0x0E94C95EC3185FA9(uVar0, vParam0, vParam3);
}

void func_1203(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iParam2);
		MAP::_BLIP_SET_MODIFIER(*uParam1, 942020339);
		MAP::SET_BLIP_SPRITE(*uParam1, -1596758107, true);
		return;
	}
	*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iParam2);
	MAP::_BLIP_SET_MODIFIER(*uParam1, 2096805056);
	func_273(iParam0, 4096);
	if (bParam4)
	{
		MAP::_BLIP_SET_MODIFIER(*uParam1, -662251075);
		func_273(iParam0, 131072);
	}
}

void func_1204(var uParam0, int iParam1)
{
	*uParam0 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, func_1308());
}

void func_1205(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, iParam2);
	MAP::SET_BLIP_SPRITE(*uParam1, -1103135225, true);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_1206());
	MAP::_BLIP_SET_MODIFIER(*uParam1, -1636811933);
	MAP::_BLIP_SET_MODIFIER(*uParam1, 580546400);
	MAP::_BLIP_SET_MODIFIER(*uParam1, 231194138);
	if (func_228(262144))
	{
		MAP::_BLIP_SET_MODIFIER(*uParam1, 231194138);
	}
	if (func_272(iParam0, 33554432))
	{
		iVar0 = func_861(iParam0, iParam2, 1);
	}
	if (iVar0 != 0)
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam1, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0));
	}
}

char* func_1206()
{
	switch (func_200(&Local_2026))
	{
		case -19759302:
			return "NET_CHU_BLIP_VIP";
		default:
			break;
	}
	return "NET_CHU_BLIP_PASSENGER";
}

char* func_1207(char* sParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return sParam0;
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_CHU_VAR_PLAYER_ESCORT", sParam0, iParam1);
}

int func_1208(int iParam0)
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

char* func_1209()
{
	return "NET_CHU_BLIP_MONEY_BAG";
}

int func_1210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1211(int iParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		func_244(iParam1);
	}
	*iParam1 = MAP::_0x3E593DF9C2962EC6(func_1208(iParam0));
	iVar0 = func_988(iParam0);
	iVar1 = func_1309(iParam0);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam1, iVar0, false);
	}
	if (iVar1 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(*iParam1, iVar1);
	}
}

int func_1212(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { func_928(PLAYER::PLAYER_ID()) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if ((uParam0->f_16[iVar4 /*12*/])->f_2 == 0 || (uParam0->f_16[iVar4 /*12*/])->f_2 == -1088690539)
		{
		}
		else if (!func_1090((uParam0->f_16[iVar4 /*12*/])->f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar4 /*12*/])))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(&(uParam0->f_16[iVar4 /*12*/]));
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > 80f)
			{
			}
			else
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

bool func_1213(vector3 vParam0, float fParam3, float fParam4)
{
	if (fParam4 + fParam3) < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_928(PLAYER::GET_PLAYER_INDEX()), true)
	{
		return false;
	}
	return CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
}

int func_1214(var uParam0)
{
	int iVar0;

	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_25[iVar0])))
				{
				}
				else
				{
					*uParam0 = &Local_2026.f_202.f_25[iVar0];
					return 1;
				}
				iVar0++;
			}
			break;
		case -19759302:
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iVar0])))
				{
				}
				else
				{
					*uParam0 = &Local_2026.f_202[iVar0];
					return 1;
				}
				iVar0++;
			}
			break;
	}
	return 0;
}

float func_1215(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

char* func_1216(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Local_17.f_316;
	if (GANG::_0xD6F6ACF4392187FB(iVar0) && GANG::_0x0F99F6436528A089(iVar0))
	{
		return func_1222(iVar0, iParam0);
	}
	iVar2 = 255;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!func_41(Local_361[iVar1 /*52*/], 32))
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
	return func_1217(iVar2, iParam0);
}

char* func_1217(int iParam0, int iParam1)
{
	return func_1310(PLAYER::GET_PLAYER_NAME(iParam0), iParam1);
}

int func_1218(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("attack"):
			return 1;
		case joaat("COLLECT"):
			return 4;
		case 404851220:
			return 3;
		case joaat("none"):
			return 0;
		case joaat("defend"):
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

var func_1219(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1220(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

char* func_1221()
{
	var uVar0;

	switch (func_252())
	{
		case 1:
			if (func_1311(&uVar0))
			{
				return func_686(&uVar0);
			}
			break;
		case 2:
			if (func_1312(&uVar0))
			{
				return func_686(&uVar0);
			}
			break;
	}
	return "NET_CHU_LOC_DEFAULT_DROPOFF";
}

char* func_1222(int iParam0, int iParam1)
{
	return func_1314(func_1313(iParam0, 1, 0), iParam1);
}

var func_1223(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_1224()
{
	return "RDRO_GFH_Sounds";
}

char* func_1225()
{
	return "match_start";
}

var func_1226(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = UIFEED::_0xA6F4216AB10EB08E(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

int func_1227()
{
	int iVar0;
	int iVar1;

	func_209(&iVar0, &iVar1);
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

bool func_1228(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	*uParam2 = 0;
	*iParam0 = 255;
	*iParam1 = 0;
	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (!func_424(iVar1, 0) || func_424(iVar1, 1))
				{
				}
				else if (GANG::_0x0F99F6436528A089((Local_17.f_257[iVar1 /*5*/])->f_4))
				{
					if (bVar0)
					{
						if ((*uParam2 && *iParam1 != (Local_17.f_257[iVar1 /*5*/])->f_4) || (!*uParam2 && GANG::_0x901E0DC25080C8B9(*iParam0) != (Local_17.f_257[iVar1 /*5*/])->f_4))
						{
							return false;
						}
					}
					else
					{
						*iParam1 = (Local_17.f_257[iVar1 /*5*/])->f_4;
						*uParam2 = 1;
						bVar0 = true;
					}
				}
				else if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_257[iVar1 /*5*/])->f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_257[iVar1 /*5*/])->f_3))
				{
					if (bVar0)
					{
						if ((*uParam2 && GANG::_0x901E0DC25080C8B9((Local_17.f_257[iVar1 /*5*/])->f_3) != *iParam1) || (!*uParam2 && GANG::_0x3F59FE6F37869576(*iParam0, (Local_17.f_257[iVar1 /*5*/])->f_3)))
						{
							return false;
						}
					}
					else
					{
						*iParam0 = (Local_17.f_257[iVar1 /*5*/])->f_3;
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
		case -19759302:
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_424(iVar1, 0) || func_424(iVar1, 1))
				{
				}
				else if (GANG::_0x0F99F6436528A089((Local_17.f_16[iVar1 /*12*/])->f_6))
				{
					if (bVar0)
					{
						if ((*uParam2 && *iParam1 != (Local_17.f_16[iVar1 /*12*/])->f_6) || (!*uParam2 && GANG::_0x901E0DC25080C8B9(*iParam0) != (Local_17.f_16[iVar1 /*12*/])->f_6))
						{
							return false;
						}
					}
					else
					{
						*iParam1 = (Local_17.f_16[iVar1 /*12*/])->f_6;
						*uParam2 = 1;
						bVar0 = true;
					}
				}
				else if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iVar1 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iVar1 /*12*/])->f_7))
				{
					if (bVar0)
					{
						if ((*uParam2 && GANG::_0x901E0DC25080C8B9((Local_17.f_16[iVar1 /*12*/])->f_7) != *iParam1) || (!*uParam2 && GANG::_0x3F59FE6F37869576(*iParam0, (Local_17.f_16[iVar1 /*12*/])->f_7)))
						{
							return false;
						}
					}
					else
					{
						*iParam0 = (Local_17.f_16[iVar1 /*12*/])->f_7;
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

var func_1229(int iParam0, int iParam1, int iParam2)
{
	if (GANG::_0xD6F6ACF4392187FB(iParam1) && GANG::_0x0F99F6436528A089(iParam1))
	{
		return func_1222(iParam1, iParam2);
	}
	return func_1217(iParam0, iParam2);
}

var func_1230(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = iParam4;
	Var0.f_2 = iParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	uVar20 = UIFEED::_0x02BCC0FE9EBA3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

int func_1231()
{
	return 1;
}

bool func_1232()
{
	return (!&Global_1903004 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1903004->f_2)) >= 5);
}

void func_1233(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

int func_1234()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::_0xE368E8422C860BA7(func_764(), func_765(), -2) || !AUDIO::_0xE368E8422C860BA7(func_766(), func_765(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_767(), func_765(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_1315(), func_765(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_768(), func_765(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_769(), func_770(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_771(), func_772(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1235(var uParam0, var uParam1, int iParam2)
{
	switch (func_1316(iParam2))
	{
		case 0:
			func_1317(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1318(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1319(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1320(uParam0, uParam1, iParam2, -1082130432 /* Float: -1f */);
			break;
		case 4:
			func_1321(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1236(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0, bParam1);
}

void func_1237(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4)
{
	if (iParam4 == 0)
	{
		iParam4 = joaat("COLOR_PURE_WHITE");
	}
	(*uParam1)[iParam2 /*34*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, sParam3);
	func_1317(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_4), 21, 0);
	func_1317(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_5), 20, 0);
	func_1317(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_7), 23, 0);
	func_1317(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_8), 22, 0);
	func_1317(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_9), 24, 0);
	func_1317(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_2), 18, iParam4);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_1), 17);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_3), 19);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_6), 25);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_10), 26);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_11), 27);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_20), 16);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_21), 14);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_22), 15);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_12), 29);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_13), 28);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_14), 30);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_15), 31);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_16), 32);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_17), 33);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_18), 34);
	func_1235(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_19), 35);
}

void func_1238(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_1239(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar6 = func_750((iVar5 / 60), 0, 180);
	iVar7 = func_750((iVar5 % 60), 0, 60);
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

void func_1240(var uParam0, char[4] cParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, cParam1);
}

void func_1241(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 11000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 11000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_767()))
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, func_767(), func_765(), 1);
			}
			else
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, sParam2, func_765(), 1);
				AUDIO::_0x9821B68CD3E05F2B("Time", 11f, sParam2, func_765());
			}
		}
	}
	else
	{
		func_455(uParam0);
	}
}

void func_1242(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_12, func_1315(), func_765(), 1);
	}
}

void func_1243(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case joaat("attack"):
			*uParam1 = func_1322();
			*uParam2 = func_1322();
			*uParam3 = func_1322();
			*uParam4 = func_1322();
			*uParam5 = func_1323();
			*uParam6 = func_1322();
			*uParam7 = func_1322();
			break;
		case 404851220:
			*uParam1 = func_1324();
			*uParam2 = func_1324();
			*uParam3 = func_1322();
			*uParam4 = func_1323();
			*uParam5 = func_1323();
			*uParam6 = func_1322();
			*uParam7 = func_1322();
			break;
		case joaat("defend"):
			*uParam1 = func_1323();
			*uParam2 = func_1324();
			*uParam3 = func_1322();
			*uParam4 = func_1323();
			*uParam5 = func_1323();
			*uParam6 = func_1322();
			*uParam7 = func_1322();
			break;
		case joaat("COLLECT"):
			*uParam1 = func_1322();
			*uParam2 = func_1322();
			*uParam3 = func_1323();
			*uParam4 = func_1322();
			*uParam5 = func_1323();
			*uParam6 = func_1322();
			*uParam7 = func_1322();
			break;
	}
}

void func_1244(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6, var uParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
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
	iVar5 = ((*uParam0)[iParam1 /*34*/])->f_25;
	iVar6 = ((*uParam0)[iParam1 /*34*/])->f_26;
	iVar9 = ((*uParam0)[iParam1 /*34*/])->f_23;
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
			iVar0 = uParam5;
			iVar2 = uParam5;
			break;
		case 6:
			iVar0 = uParam7;
			iVar2 = uParam7;
			break;
		case 7:
			bVar4 = false;
			iVar0 = func_1324();
			iVar2 = iParam6;
			iVar1 = iParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			iVar0 = func_1324();
			iVar2 = iParam8;
			iVar1 = iParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			iVar0 = func_1324();
			iVar2 = func_1324();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			iVar0 = uParam2;
			iVar2 = uParam2;
			break;
		case 9:
			iVar0 = func_1322();
			iVar2 = func_1322();
			break;
		case 4:
			iVar0 = uParam4;
			break;
		default:
			iVar0 = uParam2;
			iVar2 = uParam2;
			break;
	}
	func_1236(((*uParam0)[iParam1 /*34*/])->f_21, bVar3);
	if (bVar3)
	{
		func_1325(uParam0, iParam1);
		func_1236(((*uParam0)[iParam1 /*34*/])->f_11, bVar4);
		fVar10 = ((*uParam0)[iParam1 /*34*/])->f_29;
		if (((*uParam0)[iParam1 /*34*/])->f_28 > 1)
		{
			fVar10 = (BUILTIN::TO_FLOAT(((*uParam0)[iParam1 /*34*/])->f_27) / BUILTIN::TO_FLOAT(((*uParam0)[iParam1 /*34*/])->f_28));
			if (bParam11 && !func_1326(((*uParam0)[iParam1 /*34*/])->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, ((*uParam0)[iParam1 /*34*/])->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, ((*uParam0)[iParam1 /*34*/])->f_28, 8);
				}
			}
			func_1240(((*uParam0)[iParam1 /*34*/])->f_20, &cVar11);
		}
		else
		{
			func_1240(((*uParam0)[iParam1 /*34*/])->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (iParam9 == 0)
			{
				func_1327(((*uParam0)[iParam1 /*34*/])->f_2, iVar2);
			}
			func_1328(((*uParam0)[iParam1 /*34*/])->f_1, fVar10);
			func_1236(((*uParam0)[iParam1 /*34*/])->f_10, 0);
			func_1236(((*uParam0)[iParam1 /*34*/])->f_3, 1);
		}
		else
		{
			func_1236(((*uParam0)[iParam1 /*34*/])->f_10, 1);
			func_1236(((*uParam0)[iParam1 /*34*/])->f_3, 0);
		}
		if (iVar6 != 0)
		{
			func_1327(((*uParam0)[iParam1 /*34*/])->f_6, iVar0);
			func_1327(((*uParam0)[iParam1 /*34*/])->f_4, iVar5);
			func_1327(((*uParam0)[iParam1 /*34*/])->f_5, iVar6);
		}
		if (!MISC::IS_STRING_NULL(sVar8))
		{
			func_1327(((*uParam0)[iParam1 /*34*/])->f_14, iVar1);
			func_1240(((*uParam0)[iParam1 /*34*/])->f_12, sVar7);
			func_1240(((*uParam0)[iParam1 /*34*/])->f_13, sVar8);
			func_1236(((*uParam0)[iParam1 /*34*/])->f_15, 1);
		}
		else
		{
			func_1236(((*uParam0)[iParam1 /*34*/])->f_15, 0);
		}
		func_1236(((*uParam0)[iParam1 /*34*/])->f_16, ((*uParam0)[iParam1 /*34*/])->f_30);
	}
}

void func_1245(int iParam0)
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
	PED::_0xDF631E4BCE1B1FC4(iParam0, 399422490, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLES"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 88372018, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -630346294, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 355515932, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -749728163, 0, 0);
}

void func_1246(int iParam0, int iParam1)
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

void func_1247(int iParam0, int iParam1)
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

int func_1248(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Param0, Param0.f_1);
	return iVar0;
}

int func_1249()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			return joaat("weapon_revolver_cattleman");
		case 1:
			return joaat("weapon_repeater_carbine");
		default:
			break;
	}
	return joaat("weapon_revolver_cattleman");
}

int func_1250(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1251(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, 0))
	{
		Var0 = { func_1329(bParam0, 0, 1) };
		if (func_1330(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_1331(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_1332(bParam0, Var0, Var0.f_4, 0) };
				func_1333(bParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_1334(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, 0))
		{
			return 0;
		}
		func_1335(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_1336(bParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, 0))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_1252(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
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

bool func_1253(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_1254(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	float fVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return 0;
	}
	if (!ENTITY::GET_ENTITY_SPEED(iParam0) < 0.5f)
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), true);
	if (fVar3 > fParam2)
	{
		return 0;
	}
	return 1;
}

int func_1255(int iParam0)
{
	switch (iParam0)
	{
		case 824585797:
		case joaat("driver"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1256(vector3 vParam0, float fParam3)
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

var func_1257(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1258(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1259(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19683.f_260), iParam0);
}

void func_1260(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

void func_1261(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1262(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1111(iParam0);
	if (!func_1337(iVar0))
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return 1;
	}
	iVar1 = BUILTIN::SHIFT_RIGHT(iVar0, 20) & 1023;
	*uParam1 = func_1338(0, iVar1);
	uParam1->f_2 = BUILTIN::SHIFT_RIGHT(iVar0, 10) & 1023;
	if (*uParam1 == 0)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return 1;
	}
	if (uParam1->f_2 < 0 || uParam1->f_2 >= 512)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return 1;
	}
	return 1;
}

int func_1263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -59604987;
		case 1:
			return 942241650;
		case 2:
			return 702438108;
		case 3:
			return -1011806593;
		case 4:
			return 860384684;
		case 5:
			return -584990368;
		case 6:
			return -826989433;
		case 7:
			return -2005559287;
		case 8:
			return -60620830;
		case 9:
			return -1517268418;
		default:
			break;
	}
	return 0;
}

int func_1264(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar7;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar7 = func_1339(iParam0);
	if (iVar7 == -1)
	{
		return 0;
	}
	if (!func_1340(&uVar2))
	{
		return -1;
	}
	if (!func_1341(&uVar2, 3, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1341(&uVar2, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1341(&uVar2, 6, func_1342(iVar7), 0, 1))
	{
		return -1;
	}
	if (!func_1341(&uVar2, 7, 0, 0, 1))
	{
		return -1;
	}
	iVar0 = func_1343(&uVar2, 0);
	if (!func_1341(&uVar2, 8, iParam0, 0, 1))
	{
		return -1;
	}
	iVar1 = func_1344(&uVar2);
	return ((iVar0 - iVar1) - 1);
}

void func_1265(int iParam0, int iParam1)
{
	var uVar0;
	int iVar2;
	int iVar3;
	var uVar4[5];

	if (!func_1345(iParam0, iParam1, &uVar4))
	{
		return;
	}
	iVar3 = &uVar4[0];
	switch (iVar3)
	{
		case 1332108599:
			iVar2 = -771980954;
			break;
		case 153099630:
			iVar2 = 1513129800;
			break;
		case 437018696:
			iVar2 = -771980954;
			break;
		case 10417338:
			iVar2 = 1513129800;
			break;
		default:
			return;
	}
	if (!func_508(iParam0, iVar2, &uVar0))
	{
		return;
	}
	if (STATS::STAT_ID_SET_INT(&uVar0, func_1346(&uVar4, -15, 0, 0), true))
	{
	}
}

void func_1266(int iParam0)
{
	Global_1103537->f_1752.f_4247 = (Global_1103537->f_1752.f_4247 || iParam0);
}

bool func_1267()
{
	return !Global_1572887->f_9;
}

int func_1268(int iParam0)
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

void func_1269(struct<2> Param0, var uParam2)
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
	switch (func_1127(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1348(func_1347(Param0));
			iVar5 = func_1349(iVar4);
			if (!func_1350(iVar5, 0))
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

int func_1270(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_1187(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1351(iVar0);
}

int func_1271(struct<2> Param0, int iParam2)
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
	if (!func_263(Param0, &vVar0))
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
		func_263(*(Global_1070356->f_17817.f_1[iVar9 /*3*/]), &vVar3);
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
			func_1352(iVar9);
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

void func_1272()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (func_263(*(Global_1070356->f_17817.f_1[iVar0 /*3*/]), &vVar1))
		{
		}
		iVar0++;
	}
}

void func_1273(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1274(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1275(int iParam0, int iParam1)
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

void func_1276(char[12] cParam0)
{
	Global_1938085->f_75.f_67 = { cParam0 };
}

void func_1277()
{
	StringCopy(&(Global_1938085->f_75.f_67), "", 24);
}

bool func_1278(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1353(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1354(iVar1))
	{
		if (Global_1070356->f_17915.f_24 && !func_1355(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070356->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2);
}

int func_1279(struct<2> Param0)
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
		if (func_29(*(Global_1900718->f_1[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1280(int iParam0)
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
		func_1149(Global_1900718->f_1[0 /*2*/]);
		return 1;
	}
	func_1149(Global_1900718->f_1[iParam0 /*2*/]);
	Global_1900718->f_66 = (Global_1900718->f_66 - 1);
	func_1298(iParam0, Global_1900718->f_66);
	return 1;
}

void func_1281(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1282(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam0);
}

var func_1283(struct<5> Param0)
{
	return func_1257(Param0, 33, 1);
}

int func_1284(struct<5> Param0, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	if (!func_1145(Param0, &(Param0.f_1), 31, iParam5, 0, 1))
	{
		return 0;
	}
	uVar5 = Param0.f_1;
	iVar1 = func_1282(Param0, 5);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		iVar4 = 0;
		if (!func_1145(Param0, &(Param0.f_1), 32, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = func_1356(Param0);
			switch (iParam5)
			{
				case joaat("trigger"):
					iVar4 = func_1357(iVar2);
					break;
			}
			uVar3 = (uVar3 || iVar4);
		}
		iVar0++;
	}
	return uVar3;
}

int func_1285(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_1133(iParam0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_1144(&Var0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 21, 0, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_1145(Var0, &(Var0.f_1), 22, iParam2, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	*iParam3 = func_1358(Var0);
	*uParam4 = func_1359(Var0);
	if (iParam1 != 0)
	{
		if (func_1145(Var0, &(Var0.f_1), 23, iParam1, 0, 0))
		{
			*iParam3 = func_1358(Var0);
			*uParam4 = func_1359(Var0);
		}
	}
	if (*iParam3 == 0)
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	return 1;
}

var func_1286(struct<5> Param0)
{
	return func_1257(Param0, 42, 1);
}

var func_1287(struct<5> Param0)
{
	return func_1257(Param0, 41, 1);
}

var func_1288(struct<5> Param0)
{
	return func_1257(Param0, 43, 1);
}

var func_1289(struct<5> Param0)
{
	return func_1360(Param0, 44, 1);
}

int func_1290(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 33)
	{
		return 0;
	}
	return 1;
}

int func_1291()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

int func_1292(int iParam0, var uParam1, var uParam2)
{
	if (!func_1290(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			if (Global_1572887->f_13 != 0)
			{
				*uParam1 = -816321659;
			}
			else
			{
				*uParam1 = 414878641;
			}
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		case 17:
			*uParam1 = 414878641;
			*uParam2 = -86751100;
			break;
		case 18:
			*uParam1 = 414878641;
			*uParam2 = -291172486;
			break;
		case 19:
			*uParam1 = 414878641;
			*uParam2 = -1798248949;
			break;
		case 20:
			*uParam1 = 414878641;
			*uParam2 = 1774145653;
			break;
		case 21:
			*uParam1 = 414878641;
			*uParam2 = -1655602026;
			break;
		case 22:
			*uParam1 = 414878641;
			*uParam2 = 1198571251;
			break;
		case 23:
			*uParam1 = 414878641;
			*uParam2 = -922560112;
			break;
		case 24:
			*uParam1 = 414878641;
			*uParam2 = -1772642867;
			break;
		case 25:
			*uParam1 = 414878641;
			*uParam2 = -301889617;
			break;
		case 26:
			*uParam1 = 414878641;
			*uParam2 = -208754119;
			break;
		case 27:
			*uParam1 = 414878641;
			*uParam2 = -2020396827;
			break;
		case 29:
			*uParam1 = 414878641;
			*uParam2 = 1094779500;
			break;
		case 28:
			*uParam1 = 414878641;
			*uParam2 = 332706138;
			break;
		case 30:
			*uParam1 = 414878641;
			*uParam2 = 1757851809;
			break;
		case 31:
			*uParam1 = 414878641;
			*uParam2 = -140696447;
			break;
		case 32:
			if (Global_1572887->f_13 != 0)
			{
				*uParam1 = -816321659;
			}
			else
			{
				*uParam1 = 414878641;
			}
			*uParam2 = 937267231;
			break;
		default:
			return 0;
	}
	return 1;
}

var func_1293()
{
	return (Global_1070356->f_26934[32 /*4*/])->f_3;
}

int func_1294(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_1295(int iParam0)
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
		func_1361(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1362(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_1296(struct<2> Param0)
{
	if (func_23(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_23(Param0)))
	{
		STATS::_0x99230691875FC218(func_1127(Param0), func_23(Param0), Global_35);
	}
}

void func_1297(struct<2> Param0, int iParam2)
{
	if (!func_28(Param0))
	{
		func_1149(Global_1900718->f_1[iParam2 /*2*/]);
	}
	else
	{
		*(Global_1900718->f_1[iParam2 /*2*/]) = { Param0 };
	}
	func_1363(Param0, 0, 1, -1);
}

void func_1298(int iParam0, int iParam1)
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
			func_1364((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1364(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_28(*(Global_1900718->f_1[0 /*2*/])))
	{
		func_1121(*(Global_1900718->f_1[0 /*2*/]), 3);
	}
}

int func_1299(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_28(Param0))
	{
		return 0;
	}
	if (!func_28(Param2))
	{
		return 1;
	}
	iVar0 = func_1127(Param0);
	iVar1 = func_1127(Param2);
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

int func_1300(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1365(iParam0))
	{
		return 0;
	}
	if (func_1366(iParam0, uParam1, &uVar0))
	{
		func_1367(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_1301(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_1302(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_1303(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1368(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1304()
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 7 && iVar0 <= 19)
	{
		return 0;
	}
	return 1;
}

var func_1305(int iParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1);
}

int func_1306(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_1369(vParam0, 0f, 0f, 0, 2);
	return func_1369(vParam0, ((*Global_1892728)[iVar0 /*3*/])->f_1, ((*Global_1892728)[iVar0 /*3*/])->f_2, Global_1892728[iVar0 /*3*/], 4);
}

int func_1307(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (&Global_1903929->f_485[71])
	{
		func_1370(&(Global_1270530->f_11.f_139));
		return 0;
	}
	if (Global_1270530->f_609 != 0)
	{
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		{
			iVar1 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
			if (Global_1270530->f_609 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iParam12 == 0)
					{
						return 0;
					}
					else if (bParam13)
					{
						if (!func_1371(1))
						{
							return 0;
						}
					}
					else if (!func_1372(1))
					{
						return 0;
					}
				}
			}
			else
			{
				func_1373(1);
				return 0;
			}
		}
	}
	if (Global_1270530->f_11.f_124 == iVar0)
	{
		iParam9 = 1;
		func_1370(&(Global_1270530->f_11.f_139));
	}
	if (&Global_1903929->f_485[69])
	{
		if (!func_1374(&(Global_1270530->f_11.f_139)))
		{
			func_1375(&(Global_1270530->f_11.f_139), 0);
		}
		fVar2 = func_1376(&(Global_1270530->f_11.f_139));
		if (fVar2 > 10f)
		{
			func_1377(1);
			Global_1270530->f_11.f_124 = iVar0;
			return 0;
		}
		if (Global_1270530->f_11.f_70 != 0)
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1270530->f_11.f_70, false))
			{
				func_1377(1);
				return 0;
			}
			if (Global_1270530->f_11.f_70 != iVar0)
			{
				Global_1270530->f_11.f_124 = 0;
				func_1370(&(Global_1270530->f_11.f_139));
				return 0;
			}
		}
		if (Global_1270530->f_11 != 12)
		{
			return 0;
		}
		Global_1270530->f_11.f_124 = 0;
		func_1370(&(Global_1270530->f_11.f_139));
		func_1378(70);
		iVar3 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
		return iVar3;
	}
	if (Global_1270530->f_11 != 1)
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1270530->f_11.f_71, false) && Global_1270530->f_11.f_71 != iVar0)
	{
		return 0;
	}
	if (func_1379(255) && func_1380(2, 255))
	{
		return 0;
	}
	Global_1270530->f_11.f_70 = iVar0;
	Global_1270530->f_11.f_75 = { vParam0 };
	Global_1270530->f_11.f_79 = iParam3;
	Global_1270530->f_11.f_72 = iParam4;
	Global_1270530->f_11.f_73 = iParam5;
	Global_1270530->f_11.f_74 = iParam7;
	Global_1270530->f_11.f_78 = iParam11;
	Global_1903929->f_485[72] = iParam6;
	Global_1903929->f_485[73] = iParam8;
	Global_1903929->f_485[74] = iParam9;
	Global_1903929->f_485[77] = iParam10;
	func_1378(69);
	return 0;
}

char* func_1308()
{
	return "NET_CHU_BLIP_DROPOFF_GUARD";
}

int func_1309(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			return -401963276;
		case 2:
		case 4:
			if (func_1381(&iVar0))
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
			if (func_1381(&iVar0))
			{
				if (func_272(iVar0, 512))
				{
					return -2145527776;
				}
				else if (func_272(iVar0, 256))
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

char* func_1310(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1382(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_1311(var uParam0)
{
	struct<5> Var0;

	if (func_293(&Local_2026, &Var0) && func_1061(Var0, 733551533, uParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1312(var uParam0)
{
	struct<5> Var0;

	if (func_293(&Local_2026, &Var0) && func_1061(Var0, -2107902278, uParam0, 0))
	{
		return 1;
	}
	return 0;
}

char* func_1313(int iParam0, bool bParam1, int iParam2)
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
		if (func_1383(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1099294->f_17 != ((*Global_1097610)[iVar2 /*51*/])->f_17)
				{
					sVar0 = func_1384(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!NETWORK::_0x595F028698072DD9(-1) && MISC::IS_ORBIS_VERSION())
			{
				sVar0 = func_1384(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_1385(iVar1) };
				iVar21 = 0;
				while (iVar21 <= (POSSE::_0xC084FF658B2E61DA(&Var3) - 1))
				{
					if (POSSE::_0xC084FF658B2E81DA(&Var3, iVar21, &Var10) && Var10.f_9)
					{
						iVar20 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_1314(func_1386(Var10.f_1), joaat("COLOR_PURE_WHITE"));
						}
						else
						{
							sVar0 = func_1314(func_1386(Var10.f_1), iParam2);
						}
					}
					else
					{
						iVar21++;
					}
				}
				if (iVar20 == 0)
				{
					return func_1384(iParam0, bParam1, iParam2);
				}
				if (func_1387(func_1386(Var10.f_1)))
				{
					if (bParam1 == 1 && func_1388(iVar1, sVar0))
					{
						sVar0 = func_1384(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_1384(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_1384(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

char* func_1314(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1382(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_1315()
{
	return "countdown_final_thud";
}

int func_1316(int iParam0)
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

void func_1317(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1389(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, func_1390(iParam2), iParam3);
}

void func_1318(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_1391(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, func_1390(iParam2), sParam3);
}

void func_1319(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1392(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, func_1390(iParam2), iParam3);
}

void func_1320(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1393(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0, func_1390(iParam2), fParam3);
}

void func_1321(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!bParam4)
	{
		iParam3 = func_1394(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, func_1390(iParam2), iParam3);
}

int func_1322()
{
	return 1937193856;
}

int func_1323()
{
	return -1640778959;
}

int func_1324()
{
	return -1428663542;
}

void func_1325(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1395(&(((*uParam0)[iParam1 /*34*/])->f_31));
	iVar1 = ((*uParam0)[iParam1 /*34*/])->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_1396(&(((*uParam0)[iParam1 /*34*/])->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_1397(&(((*uParam0)[iParam1 /*34*/])->f_31)) < 1500)
		{
			return;
		}
		func_1398(&(((*uParam0)[iParam1 /*34*/])->f_31));
	}
	func_1236(((*uParam0)[iParam1 /*34*/])->f_17, iVar1 == 1);
	func_1236(((*uParam0)[iParam1 /*34*/])->f_18, iVar1 == 2);
	func_1236(((*uParam0)[iParam1 /*34*/])->f_19, iVar1 == 3);
}

int func_1326(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return 1;
	}
	return 0;
}

void func_1327(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0, iParam1);
}

void func_1328(var uParam0, float fParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(uParam0, fParam1);
}

struct<5> func_1329(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_1399(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_1400(bParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_1332(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_1401(bParam1) };
			if (iParam2 && func_1402(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1330(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1330(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_1331(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_1403(bParam1) };
			switch (func_1404(bParam0))
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
			if (func_1405(bParam0, -1823706425))
			{
				Var0 = { func_1332(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_1405(bParam0, -1483207246))
			{
				Var0 = { func_1332(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_1332(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1405(bParam0, -1653629781))
			{
				Var0 = { func_1332(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_1406(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_1405(bParam0, -1653629781))
			{
				Var0 = { func_1332(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_1330(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_1407(bParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_1331(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1408(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_1332(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_1409(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_1410(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_1333(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1411(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1406(*uParam1, &Var0, bParam6, 0, -1))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_1334(bParam6))
	{
		iVar14 = -1;
		if (func_21() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1412(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_1413(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_1410(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1334(bool bParam0)
{
	if (func_21() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_1410(bParam0));
}

int func_1335(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1414(iParam0))
	{
		return 0;
	}
	if (!func_1334(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_1336(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_821(WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, bParam0, iVar1);
		}
	}
}

bool func_1337(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 31) & 1 != 0;
}

int func_1338(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_1340(&uVar0))
	{
		return 0;
	}
	if (!func_1341(&uVar0, 3, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1341(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1341(&uVar0, 6, func_1342(iParam0), 0, 1))
	{
		return 0;
	}
	if (!func_1341(&uVar0, 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1341(&uVar0, 9, iParam1, 0, 1))
	{
		return 0;
	}
	return func_1415(&uVar0);
}

int func_1339(int iParam0)
{
	var uVar0;

	if (!func_1340(&uVar0))
	{
		return -1;
	}
	if (!func_1341(&uVar0, 3, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1341(&uVar0, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1341(&uVar0, 7, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1341(&uVar0, 8, iParam0, 0, 1))
	{
		return -1;
	}
	return func_1416(&uVar0);
}

int func_1340(var uParam0)
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

int func_1341(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_1342(int iParam0)
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

int func_1343(var uParam0, int iParam1)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
	return uVar0;
}

int func_1344(var uParam0)
{
	int iVar0;

	iVar0 = DATAFILE::_0xE13634BB6BAF0734(*uParam0, uParam0->f_1);
	return iVar0;
}

int func_1345(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<5> Var4;
	int iVar9;

	if (!func_1133(iParam0))
	{
		return 0;
	}
	if (!func_1144(&Var4))
	{
		return 0;
	}
	if (!func_1145(Var4, &(Var4.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var4, &(Var4.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var4, &(Var4.f_1), 18, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1145(Var4, &(Var4.f_1), 19, iParam1, 0, 1))
	{
		return 0;
	}
	uVar3 = Var4.f_1;
	iVar1 = func_1282(Var4, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var4.f_1 = uVar3;
		if (!func_1145(Var4, &(Var4.f_1), 20, iVar0, 0, 1))
		{
			return 0;
		}
		iVar9 = func_1417(Var4);
		iVar2 = func_1418(iVar9, 1);
		if (iVar2 == -1)
		{
			return 0;
		}
		if (iVar9 == joaat("type"))
		{
			(*uParam2)[iVar2] = func_1257(Var4, 37, 1);
		}
		else
		{
			(*uParam2)[iVar2] = func_1360(Var4, 39, 1);
			if (uParam2[iVar2] < 0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1346(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = uParam0[0];
	switch (iVar2)
	{
		case 1332108599:
			if (func_1419(iParam1))
			{
				iVar1 = iParam1;
			}
			else
			{
				iVar1 = func_777();
			}
			iVar0 = iVar1;
			break;
		case 437018696:
			if (func_1419(iParam1))
			{
				iVar1 = iParam1;
			}
			else
			{
				iVar1 = func_777();
			}
			func_1420(&iVar1, uParam0[4], uParam0[3], uParam0[2], uParam0[1], 0, 0, 0);
			iVar0 = iVar1;
			break;
		case 153099630:
			if (bParam2)
			{
				iVar0 = iParam3;
			}
			else
			{
				iVar0 = Global_1275573->f_21;
			}
			break;
		case 10417338:
			if (bParam2)
			{
				iVar0 = iParam3;
			}
			else
			{
				iVar0 = Global_1275573->f_21;
			}
			iVar0 = (iVar0 + uParam0[4]);
			iVar0 = (iVar0 + uParam0[3] * 60);
			iVar0 = (iVar0 + uParam0[2] * 3600);
			iVar0 = (iVar0 + (uParam0[1] * 86400));
			break;
		default:
			break;
	}
	return iVar0;
}

int func_1347(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_263(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_1348(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1421(&Var1, uParam0))
	{
		iVar0 = ((func_1422() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1349(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_1350(int iParam0, int iParam1)
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

int func_1351(int iParam0)
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

int func_1352(int iParam0)
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

int func_1353(int iParam0, int iParam1)
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

int func_1354(int iParam0)
{
	int iVar0;

	iVar0 = func_1423(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_1355(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

int func_1356(struct<5> Param0)
{
	return func_1257(Param0, 33, 1);
}

int func_1357(int iParam0)
{
	switch (iParam0)
	{
		case joaat("start"):
			return 4;
		case 1130877567:
			return 8;
		case joaat("primary"):
			return 1;
		case -862695229:
			return 2;
		case -562306862:
			return 16;
		case joaat("loss"):
			return 32;
		case joaat("easy"):
			return 64;
		case joaat("medium"):
			return 128;
		case joaat("hard"):
			return 256;
		case joaat("near"):
			return 512;
		case joaat("far"):
			return 1024;
		case joaat("special"):
			return 2048;
		default:
			break;
	}
	return 0;
}

var func_1358(struct<5> Param0)
{
	return func_1257(Param0, 38, 1);
}

var func_1359(struct<5> Param0)
{
	return func_1257(Param0, 40, 1);
}

var func_1360(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_INT(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

void func_1361(int iParam0)
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
	func_1362(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_1362(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_1363(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_1424(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_106(Param0);
	Var0.f_3 = iParam3;
	func_1425(&Var0, bParam2, iParam4);
	return 1;
}

void func_1364(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *(Global_1900718->f_1[iParam0 /*2*/]) };
	*(Global_1900718->f_1[iParam0 /*2*/]) = { *(Global_1900718->f_1[iParam1 /*2*/]) };
	*(Global_1900718->f_1[iParam1 /*2*/]) = { Var0 };
}

int func_1365(int iParam0)
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

bool func_1366(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1426(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1367(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1427(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1428(iVar0);
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
			uParam2->f_5 = func_1429(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1430(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1431(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_1432(iVar0);
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

int func_1368(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_1369(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_1370(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_1371(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (!bParam0)
	{
		if (!func_1433(iVar0))
		{
			return 0;
		}
	}
	func_1434();
	return 1;
}

int func_1372(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (!bParam0)
	{
		if (!func_1433(iVar0))
		{
			return 0;
		}
	}
	func_1435();
	return 1;
}

void func_1373(bool bParam0)
{
	int iVar0;

	if (!&Global_1903929->f_485[102])
	{
		return;
	}
	if (&Global_1903929->f_485[103])
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (Global_1270530->f_609.f_63 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_1378(103);
}

bool func_1374(var uParam0)
{
	return func_1436(*uParam0, 1);
}

void func_1375(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1374(uParam0))
	{
		func_1437(uParam0);
	}
}

float func_1376(var uParam0)
{
	if (!func_1374(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1438(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1439() - uParam0->f_1);
}

void func_1377(bool bParam0)
{
	int iVar0;

	if (!func_1440(69))
	{
		return;
	}
	if (&Global_1903929->f_485[71])
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (Global_1270530->f_11.f_70 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_1378(71);
}

void func_1378(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 118)
	{
		return;
	}
	Global_1903929->f_485[iParam0] = 1;
}

int func_1379(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = PLAYER::_0xF49F14462F0AE27C(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_1380(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (((*Global_1269869)[iParam1 /*20*/])->f_1 && iParam0) != 0;
}

int func_1381(int iParam0)
{
	int iVar0;

	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_25[iVar0])))
				{
				}
				else
				{
					*iParam0 = iVar0;
					return 1;
				}
				iVar0++;
			}
			break;
		case -19759302:
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iVar0])))
				{
				}
				else
				{
					*iParam0 = iVar0;
					return 1;
				}
				iVar0++;
			}
			break;
	}
	return 0;
}

char* func_1382(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1383(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<10> Var9;
	int iVar19;

	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
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
			Var2 = { func_1385(iVar0) };
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

char* func_1384(int iParam0, bool bParam1, int iParam2)
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
			return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_1310(PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)), joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar0 = MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_1310(PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)), joaat("COLOR_PURE_WHITE")));
			return func_1382(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)));
	}
	sVar0 = MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)));
	return func_1382(sVar0, iParam2);
}

struct<7> func_1385(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_1386(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_1387(char* sParam0)
{
	return NETWORK::_0xD4022C7286B0DFA2(sParam0, 100, 22);
}

int func_1388(int iParam0, char* sParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = PLAYER::GET_PLAYER_NAME(iParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0);
	if (MISC::COMPARE_STRINGS(sVar0, sParam1, false, iVar1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_1389(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1323();
		case 4:
			return joaat("COLOR_PURE_WHITE");
		case 9:
			return func_1322();
		case 10:
			return joaat("COLOR_PURE_WHITE");
		case 23:
			return 1672732465;
		case 22:
			return -1019997170;
		case 24:
			return -5208416;
		case 18:
			return joaat("COLOR_PURE_WHITE");
		case 25:
			return func_1322();
		case 30:
			return func_1322();
		default:
			break;
	}
	return 0;
}

char* func_1390(int iParam0)
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

char* func_1391(int iParam0)
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

int func_1392(int iParam0)
{
	return 0;
}

float func_1393(int iParam0)
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

int func_1394(int iParam0)
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

bool func_1395(var uParam0)
{
	return func_1436(*uParam0, 1);
}

void func_1396(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1395(uParam0))
	{
		func_1441(uParam0);
	}
}

int func_1397(var uParam0)
{
	if (!func_1395(uParam0))
	{
		return 0;
	}
	if (func_1442(uParam0))
	{
		return uParam0->f_2;
	}
	return func_1443(uParam0->f_1);
}

void func_1398(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

struct<4> func_1399(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_1410(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_1332(joaat("character"), func_1444(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_1332(joaat("character"), func_1444(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_1332(joaat("character"), func_1444(), -1591664384, bParam0);
}

int func_1400(bool bParam0)
{
	vector3 vVar0;

	if (!func_1409(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1401(bool bParam0)
{
	int iVar0;

	iVar0 = func_1410(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_1332(923904168, func_1399(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_1332(923904168, func_1399(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_1332(923904168, func_1399(bParam0), -740156546, 0);
}

int func_1402(bool bParam0, bool bParam1)
{
	if (func_1404(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_1445();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_1403(bool bParam0)
{
	int iVar0;

	iVar0 = func_1410(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_1332(271701509, func_1399(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_1332(271701509, func_1399(bParam0), 12999093, 0);
}

int func_1404(bool bParam0)
{
	struct<2> Var0;

	if (!func_1409(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_1405(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_1404(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_1446(bParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_1406(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1447(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1407(bool bParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_1409(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1448(bParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_1332(bParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_1410(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_1410(bParam6), bParam0, iParam8);
	}
	return iVar0;
}

int func_1408(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_1410(0);
	*uParam1 = { func_1332(bParam0, func_1401(0), iParam3, 0) };
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

int func_1409(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_1410(bool bParam0)
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

int func_1411(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_1412(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1449(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_1450(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_1451(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1413(int iParam0, struct<16> Param1)
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
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_1414(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_1415(var uParam0)
{
	return func_1452(uParam0, 21, 1);
}

int func_1416(var uParam0)
{
	return func_1453(func_1452(uParam0, 30, 1));
}

int func_1417(struct<5> Param0)
{
	return func_1257(Param0, 33, 1);
}

int func_1418(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("hours"):
			return 2;
		case -270184684:
			return 3;
		case joaat("seconds"):
			return 4;
		case joaat("type"):
			return 0;
		case 1688268471:
			return 1;
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

int func_1419(int iParam0)
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
	iVar0 = func_1454(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_1455(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_1456(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_1457(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_1458(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_1459(iParam0);
	if (iVar5 < 1 || iVar5 > func_1460(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_1420(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1457(*iParam0);
	iVar1 = func_1458(*iParam0);
	iVar2 = func_1459(*iParam0);
	iVar3 = func_1456(*iParam0);
	iVar4 = func_1455(*iParam0);
	iVar5 = func_1454(*iParam0);
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
	iVar6 = func_1460(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1460(iVar1, iVar0);
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
	func_1461(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1421(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_1422()
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

int func_1423(int iParam0)
{
	return func_1462(iParam0) + 30;
}

int func_1424(struct<2> Param0)
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
		if (func_29(((*Global_1184439)[iVar0 /*4*/])->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1425(var uParam0, bool bParam1, int iParam2)
{
	func_1463(uParam0, iParam2);
	if (Global_1184439->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1464(func_1424(uParam0->f_1));
	}
	else
	{
		func_1465();
	}
}

int func_1426(int iParam0)
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

int func_1427(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1466(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1428(int iParam0)
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

int func_1429(int iParam0)
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

int func_1430(int iParam0)
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

int func_1431(int iParam0)
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

int func_1432(int iParam0)
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

int func_1433(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;

	if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		return 1;
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
	if (CAM::IS_SPHERE_VISIBLE(vVar10, fVar9) || NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fVar9, 1120403456))
	{
		return 0;
	}
	return 1;
}

void func_1434()
{
	if (func_1467(8, 255))
	{
		return;
	}
	func_1468(3);
}

void func_1435()
{
	if (func_1467(8, 255))
	{
		return;
	}
	func_1469(3);
}

bool func_1436(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1437(var uParam0)
{
	func_1470(uParam0, 0f);
}

bool func_1438(var uParam0)
{
	return func_1436(*uParam0, 2);
}

float func_1439()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_1440(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 118)
	{
		return 0;
	}
	return &(Global_1903929->f_485[iParam0]);
}

void func_1441(var uParam0)
{
	func_1471(uParam0, 0);
}

bool func_1442(var uParam0)
{
	return func_1436(*uParam0, 2);
}

int func_1443(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

struct<4> func_1444()
{
	struct<4> Var0;

	return Var0;
}

bool func_1445()
{
	return (func_1472(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_1473(func_1332(889965687 /* GXTEntry: "Wardrobe" */, func_1399(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_1446(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

int func_1447(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_1410(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_1448(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_1449(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_1130(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_1130(uVar0, 8))
	{
		return 0;
	}
	else if (func_1130(uVar0, 16))
	{
		return 0;
	}
	else if (func_1130(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_1450(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_1474(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_1474(iParam1, 2, 0, 0);
	return -1;
}

int func_1451(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_1474(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_1452(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_1453(int iParam0)
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

int func_1454(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1455(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1456(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1457(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1475(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1458(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1459(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1460(int iParam0, int iParam1)
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

void func_1461(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1476(iParam0, iParam6);
	func_1477(iParam0, iParam5);
	func_1478(iParam0, iParam4);
	func_1479(iParam0, iParam3);
	func_1480(iParam0, iParam2);
	func_1481(iParam0, iParam1);
}

int func_1462(int iParam0)
{
	return iParam0 * 31;
}

void func_1463(var uParam0, int iParam1)
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

void func_1464(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1184439->f_129)
	{
		return;
	}
	Global_1184439->f_130 = iParam0;
	Global_1184439->f_131 = Global_1184439[iParam0 /*4*/];
}

void func_1465()
{
	if (Global_1184439->f_131 == 0)
	{
		return;
	}
	Global_1184439->f_130 = func_1482(Global_1184439->f_131);
	if (Global_1184439->f_130 < 0)
	{
		Global_1184439->f_131 = 0;
	}
}

int func_1466(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1483(iParam0, uParam1, &uVar0))
	{
		func_1484(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_1467(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (((*Global_1269869)[iParam1 /*20*/])->f_2 && iParam0) != 0;
}

void func_1468(int iParam0)
{
	func_1485(3, iParam0);
}

void func_1469(int iParam0)
{
	func_1485(2, iParam0);
}

void func_1470(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1439() - fParam1);
	func_1486(uParam0, 1);
	func_1487(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_1471(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_1486(uParam0, 1);
	func_1487(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_1472(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_1414(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_1410(bParam1), bParam0, iParam3);
}

int func_1473(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1488(&uParam0, iParam4, bParam5, iParam6);
}

void func_1474(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1489(iParam0, iParam1, iParam2, iParam3);
}

int func_1475(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1476(int iParam0, int iParam1)
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

void func_1477(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1478(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1458(*iParam0);
	iVar1 = func_1457(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1460(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1479(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1480(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1481(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_1482(int iParam0)
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

bool func_1483(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1426(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1484(var uParam0, int iParam1, var uParam2)
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

void func_1485(int iParam0, int iParam1)
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

void func_1486(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1487(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1488(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1490(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_1489(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_1490(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_1410(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_1447(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

