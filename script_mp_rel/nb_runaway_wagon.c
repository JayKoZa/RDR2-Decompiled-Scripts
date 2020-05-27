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
	struct<63> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 1, 0, 2, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<7> Local_78[32];
	struct<192> Local_303 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 0, 0, 0, -1, 1, 0, 0, 2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 2;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 1114636288;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 1114636288;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 2;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	float fLocal_539 = 0f;
	float fLocal_540 = 0f;
	var uLocal_541 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_539 = 1f;
	fLocal_540 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(ScriptParam_0);
	while (!func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 65, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 65, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_78, 225, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_78[0 /*7*/]), 225, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(struct<5> Param0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(Param0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

int func_3()
{
	if (func_16(0, 0))
	{
		return 1;
	}
	else if (func_17(Local_303.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_303.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_303.f_12), Local_303.f_9))
	{
		return 1;
	}
	else if (Local_303.f_8 == 6)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
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
			func_6();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_28() == 0)
		{
			if (func_29())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

void func_9()
{
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
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
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<12> Var0;
	int iVar17;
	bool bVar18;
	int iVar19;

	Var0.f_10 = 1106247680;
	iVar17 = 255;
	MISC::_COPY_MEMORY(&Local_303, &uParam0, 5);
	iVar19 = func_30(&bVar18, Local_303.f_1, Local_303.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_303.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_31(&Var0, Local_303.f_1, Local_303.f_2, Local_303.f_3, iVar17);
	Local_303.f_9 = { func_32(Var0.f_5, 8) };
	Local_303.f_14 = Var0.f_5;
	Local_303.f_15 = { Var0.f_11 };
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
	func_36();
}

int func_16(bool bParam0, bool bParam1)
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

int func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_37(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_38(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_39(iParam3, 255))
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
	if (func_40())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_37(*Global_1051163))
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

int func_18()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return (Global_1198382->f_1[iParam0 /*10*/])->f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_13 <= 5)
	{
		func_41();
	}
	switch (Local_13)
	{
		case 0:
			func_42();
			break;
		case 1:
			func_43();
			break;
		case 2:
			func_44();
			break;
		case 3:
			func_45();
			break;
		case 4:
			func_46();
			break;
		case 5:
			func_47();
			break;
	}
}

void func_23()
{
	func_48();
	if (Local_303.f_8 <= 5)
	{
		func_49();
	}
	switch (Local_303.f_8)
	{
		case 0:
			func_50();
			break;
		case 1:
			func_51();
			break;
		case 2:
			func_52();
			break;
		case 3:
			func_53();
			break;
		case 4:
			func_54();
			break;
		case 5:
			func_55();
			break;
	}
}

void func_24()
{
	func_56();
}

void func_25()
{
	if (func_57())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_58();
}

void func_26()
{
	func_59();
}

void func_27()
{
	if (Local_303.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_60(Local_303.f_12, 4);
		}
	}
	func_61();
	if (func_62(32))
	{
		func_63(Local_13.f_6);
	}
	func_64();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051202->f_8;
}

int func_30(var uParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<17> Var26;

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
	Var26.f_10 = 1106247680;
	func_31(&Var26, iParam1, iParam2, -1, 255);
	func_65(&Var0, Var26);
	iVar25 = func_66(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_67(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_31(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			func_68(uParam0, iParam2);
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
			func_69(uParam0);
			switch (iParam2)
			{
				case 0:
					func_70(uParam0);
					uParam0->f_5 = 277430601;
					uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_70(uParam0);
					uParam0->f_5 = 1659133778;
					uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_70(uParam0);
					uParam0->f_5 = 1296650927;
					uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_70(uParam0);
					uParam0->f_5 = 2115437634;
					uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_70(uParam0);
					uParam0->f_5 = 1098622970;
					uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_70(uParam0);
					uParam0->f_5 = 393263596;
					uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_70(uParam0);
					uParam0->f_5 = 189453630;
					uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_70(uParam0);
					uParam0->f_5 = -98921343;
					uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_70(uParam0);
					uParam0->f_5 = 6025033;
					uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_70(uParam0);
					uParam0->f_5 = -1060299979;
					uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_70(uParam0);
					uParam0->f_5 = 682088681;
					uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_70(uParam0);
					uParam0->f_5 = 1705841922;
					uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_70(uParam0);
					uParam0->f_5 = -301205165;
					uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_70(uParam0);
					uParam0->f_5 = 1906160715;
					uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_70(uParam0);
					uParam0->f_5 = -1129906020;
					uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_70(uParam0);
					uParam0->f_5 = 1592980994;
					uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_70(uParam0);
					uParam0->f_5 = 686459378;
					uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_70(uParam0);
					uParam0->f_5 = -259262381;
					uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_70(uParam0);
					uParam0->f_5 = 1289806844;
					uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_70(uParam0);
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
			func_69(uParam0);
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
					uParam0->f_5 = 1454566440;
					uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
					uParam0->f_5 = 1141360338;
					uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
					uParam0->f_5 = 844768119;
					uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_71(uParam0, 0);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 4);
					func_71(uParam0, 5);
					func_71(uParam0, 7);
					uParam0->f_5 = -1601993562;
					uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_71(uParam0, 0);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
					func_71(uParam0, 7);
					uParam0->f_5 = -901588956;
					uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_71(uParam0, 0);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
					func_71(uParam0, 7);
					uParam0->f_5 = 2129019244;
					uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_71(uParam0, 0);
					func_71(uParam0, 2);
					func_71(uParam0, 4);
					func_71(uParam0, 5);
					func_71(uParam0, 6);
					uParam0->f_5 = 1227099802;
					uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_71(uParam0, 0);
					func_71(uParam0, 2);
					func_71(uParam0, 4);
					func_71(uParam0, 5);
					func_71(uParam0, 6);
					uParam0->f_5 = -940471213;
					uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_71(uParam0, 0);
					func_71(uParam0, 2);
					func_71(uParam0, 4);
					func_71(uParam0, 5);
					func_71(uParam0, 6);
					uParam0->f_5 = -700569364;
					uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					uParam0->f_5 = 412376369;
					uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_71(uParam0, 0);
					func_71(uParam0, 2);
					func_71(uParam0, 5);
					func_71(uParam0, 7);
					uParam0->f_5 = -364052317;
					uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					uParam0->f_5 = -989186530;
					uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_71(uParam0, 0);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 4);
					func_71(uParam0, 5);
					func_71(uParam0, 6);
					uParam0->f_5 = 333858683;
					uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					uParam0->f_5 = -39511303;
					uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_71(uParam0, 3);
					func_71(uParam0, 4);
					func_71(uParam0, 5);
					func_71(uParam0, 6);
					uParam0->f_5 = 813662381;
					uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
					func_71(uParam0, 7);
					uParam0->f_5 = -1114006686;
					uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
					func_71(uParam0, 7);
					uParam0->f_5 = 1049238845;
					uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
					func_71(uParam0, 7);
					uParam0->f_5 = 1363886783;
					uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
					uParam0->f_5 = -1215674354;
					uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					uParam0->f_5 = 1902132155;
					uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 5);
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
			func_69(uParam0);
			uParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_70(uParam0);
					uParam0->f_5 = 1382777618;
					uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_70(uParam0);
					uParam0->f_5 = -2000681184;
					uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_70(uParam0);
					uParam0->f_5 = 886884092;
					uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_70(uParam0);
					uParam0->f_5 = -1277120723;
					uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_70(uParam0);
					uParam0->f_5 = 1577436816;
					uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_70(uParam0);
					uParam0->f_5 = -234749781;
					uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_70(uParam0);
					uParam0->f_5 = -1607623039;
					uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_70(uParam0);
					uParam0->f_5 = -1943295936;
					uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_70(uParam0);
					uParam0->f_5 = -397730168;
					uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_70(uParam0);
					uParam0->f_5 = -392659534;
					uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_70(uParam0);
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
			func_69(uParam0);
			switch (iParam2)
			{
				case 0:
					func_70(uParam0);
					uParam0->f_5 = 1247886914;
					uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_70(uParam0);
					uParam0->f_5 = 1926100410;
					uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_70(uParam0);
					uParam0->f_5 = 603340011;
					uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_70(uParam0);
					uParam0->f_5 = -1253915394;
					uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_70(uParam0);
					uParam0->f_5 = 1281783573;
					uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_70(uParam0);
					uParam0->f_5 = -1384936716;
					uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_70(uParam0);
					uParam0->f_5 = 636669604;
					uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_70(uParam0);
					uParam0->f_5 = 1410575087;
					uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_70(uParam0);
					uParam0->f_5 = -736919321;
					uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_70(uParam0);
					uParam0->f_5 = 1755496218;
					uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_70(uParam0);
					uParam0->f_5 = -1810033095;
					uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_70(uParam0);
					uParam0->f_5 = 99707271;
					uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_70(uParam0);
					uParam0->f_5 = 2145033839;
					uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_70(uParam0);
					uParam0->f_5 = -994111457;
					uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_70(uParam0);
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
					func_72(uParam0, 0);
					func_72(uParam0, 1);
					func_72(uParam0, 4);
					func_72(uParam0, 5);
					break;
				case 1:
					func_72(uParam0, 2);
					func_72(uParam0, 3);
					func_72(uParam0, 6);
					func_72(uParam0, 7);
					func_73(uParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_71(uParam0, 0);
					uParam0->f_5 = -88606612;
					uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_71(uParam0, 1);
					uParam0->f_5 = -1507537085;
					uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_71(uParam0, 0);
					uParam0->f_5 = 150331424;
					uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_71(uParam0, 1);
					uParam0->f_5 = -74168995;
					uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_71(uParam0, 0);
					uParam0->f_5 = -1303456769;
					uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_71(uParam0, 1);
					uParam0->f_5 = 2080696176;
					uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_71(uParam0, 0);
					uParam0->f_5 = -801880493;
					uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_71(uParam0, 1);
					uParam0->f_5 = -2098877513;
					uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_71(uParam0, 0);
					uParam0->f_5 = -985131289;
					uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_71(uParam0, 1);
					uParam0->f_5 = 171385032;
					uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_71(uParam0, 0);
					uParam0->f_5 = -690365399;
					uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_71(uParam0, 1);
					uParam0->f_5 = -393773180;
					uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_71(uParam0, 0);
					uParam0->f_5 = 1783045643;
					uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_71(uParam0, 1);
					uParam0->f_5 = -1841828372;
					uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_71(uParam0, 0);
					uParam0->f_5 = -1926357119;
					uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_71(uParam0, 1);
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
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
					uParam0->f_5 = 666420762;
					uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 8);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
					uParam0->f_5 = 1145423923;
					uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 4);
					func_71(uParam0, 5);
					func_71(uParam0, 6);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
					uParam0->f_5 = -1176575305;
					uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
					uParam0->f_5 = -888961792;
					uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
					uParam0->f_5 = -1145898130;
					uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 4);
					func_71(uParam0, 7);
					func_71(uParam0, 8);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
					uParam0->f_5 = -264936334;
					uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 3);
					func_71(uParam0, 6);
					func_71(uParam0, 7);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
					uParam0->f_5 = -562839313;
					uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 4);
					func_71(uParam0, 5);
					func_71(uParam0, 6);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
					uParam0->f_5 = -819926700;
					uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_71(uParam0, 0);
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
					uParam0->f_5 = -100890882;
					uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_71(uParam0, 1);
					func_71(uParam0, 2);
					func_71(uParam0, 5);
					func_71(uParam0, 9);
					func_71(uParam0, 10);
					func_71(uParam0, 11);
					func_74(uParam0, iParam3);
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
			func_69(uParam0);
			switch (iParam2)
			{
				case 0:
					func_70(uParam0);
					uParam0->f_5 = -1562903685;
					uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_70(uParam0);
					uParam0->f_5 = 442262250;
					uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_70(uParam0);
					uParam0->f_5 = 2113001754;
					uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_70(uParam0);
					uParam0->f_5 = 222101843;
					uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_70(uParam0);
					uParam0->f_5 = 862535295;
					uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_70(uParam0);
					uParam0->f_5 = 267494763;
					uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_70(uParam0);
					uParam0->f_5 = 492498900;
					uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_70(uParam0);
					uParam0->f_5 = -735417347;
					uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_70(uParam0);
					uParam0->f_5 = 2000289900;
					uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_70(uParam0);
					uParam0->f_5 = 1820563970;
					uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_70(uParam0);
					uParam0->f_5 = 1501808210;
					uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_70(uParam0);
					uParam0->f_5 = -1103422576;
					uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_70(uParam0);
					uParam0->f_5 = -375108461;
					uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_70(uParam0);
					uParam0->f_5 = 1074344160;
					uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_70(uParam0);
					uParam0->f_5 = 1375567406;
					uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_70(uParam0);
					uParam0->f_5 = 1695022182;
					uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_70(uParam0);
					uParam0->f_5 = 1773241795;
					uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_70(uParam0);
					uParam0->f_5 = 1650499101;
					uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_70(uParam0);
					uParam0->f_5 = 149116609;
					uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_70(uParam0);
					uParam0->f_5 = 1486166046;
					uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_70(uParam0);
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
			func_69(uParam0);
			func_73(uParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_70(uParam0);
					uParam0->f_5 = -1657923088;
					uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_70(uParam0);
					uParam0->f_5 = -1268232386;
					uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_70(uParam0);
					uParam0->f_5 = 1926851120;
					uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_70(uParam0);
					uParam0->f_5 = -66052340;
					uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_70(uParam0);
					uParam0->f_5 = 1738334804;
					uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_70(uParam0);
					uParam0->f_5 = 1009780912;
					uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_70(uParam0);
					uParam0->f_5 = -1560771476;
					uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_70(uParam0);
					uParam0->f_5 = 453813335;
					uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_70(uParam0);
					uParam0->f_5 = 786924542;
					uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_70(uParam0);
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
					func_75(uParam0, iParam3);
					uParam0->f_5 = 1323108111;
					uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_75(uParam0, iParam3);
					uParam0->f_5 = -1505479200;
					uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_75(uParam0, iParam3);
					uParam0->f_5 = -1283075997;
					uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_75(uParam0, iParam3);
					uParam0->f_5 = -2100531475;
					uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 269617530;
					uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 1592829750;
					uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 1817985549;
					uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 1945424739;
					uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 1787314318;
					uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 542354442;
					uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 1510776727;
					uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_75(uParam0, iParam3);
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
			func_69(uParam0);
			switch (iParam2)
			{
				case 0:
					func_70(uParam0);
					uParam0->f_5 = -377638420;
					uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_70(uParam0);
					uParam0->f_5 = 1308799438;
					uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_70(uParam0);
					uParam0->f_5 = -1030922940;
					uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_70(uParam0);
					uParam0->f_5 = 1750043358;
					uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_70(uParam0);
					uParam0->f_5 = -1330609910;
					uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_70(uParam0);
					uParam0->f_5 = 223942444;
					uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_70(uParam0);
					uParam0->f_5 = 1067547121;
					uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_70(uParam0);
					uParam0->f_5 = -450732096;
					uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_70(uParam0);
					uParam0->f_5 = -1701940764;
					uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_70(uParam0);
					uParam0->f_5 = 1584258975;
					uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_70(uParam0);
					uParam0->f_5 = -98183174;
					uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_70(uParam0);
					uParam0->f_5 = -90261849;
					uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_70(uParam0);
					uParam0->f_5 = 754522971;
					uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_70(uParam0);
					uParam0->f_5 = 974542513;
					uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_70(uParam0);
					uParam0->f_5 = -790885273;
					uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_70(uParam0);
					uParam0->f_5 = -1447045452;
					uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_70(uParam0);
					uParam0->f_5 = -586115209;
					uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_70(uParam0);
					uParam0->f_5 = 224941020;
					uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_70(uParam0);
					uParam0->f_5 = -1179654578;
					uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_70(uParam0);
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
			func_69(uParam0);
			uParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_70(uParam0);
					uParam0->f_5 = 974582605;
					uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_70(uParam0);
					uParam0->f_5 = -964359125;
					uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_70(uParam0);
					uParam0->f_5 = -700339292;
					uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_70(uParam0);
					uParam0->f_5 = -470300912;
					uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_70(uParam0);
					uParam0->f_5 = -241343909;
					uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_70(uParam0);
					uParam0->f_5 = 1944053474;
					uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_70(uParam0);
					uParam0->f_5 = -2120646059;
					uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_70(uParam0);
					uParam0->f_5 = -1656440405;
					uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_70(uParam0);
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
			func_69(uParam0);
			func_73(uParam0, 1);
			func_73(uParam0, 4);
			func_73(uParam0, 8);
			func_73(uParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_70(uParam0);
					uParam0->f_5 = -1623035253;
					uParam0->f_11 = { func_77(func_76(iParam4)) };
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
					func_78(uParam0, iParam3);
					uParam0->f_5 = -1957221189;
					uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 871956008;
					uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_78(uParam0, iParam3);
					uParam0->f_5 = -718829908;
					uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_78(uParam0, iParam3);
					uParam0->f_5 = -478076065;
					uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 158131441;
					uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 575051428;
					uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_78(uParam0, iParam3);
					uParam0->f_5 = -861587350;
					uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_78(uParam0, iParam3);
					uParam0->f_5 = -616671844;
					uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_78(uParam0, iParam3);
					uParam0->f_5 = -828875274;
					uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_78(uParam0, iParam3);
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
			func_69(uParam0);
			switch (iParam2)
			{
				case 0:
					func_70(uParam0);
					uParam0->f_5 = 2136361638;
					uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_70(uParam0);
					uParam0->f_5 = 1948005426;
					uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_70(uParam0);
					uParam0->f_5 = 462368629;
					uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_70(uParam0);
					uParam0->f_5 = -172629291;
					uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_70(uParam0);
					uParam0->f_5 = 1063777848;
					uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_70(uParam0);
					uParam0->f_5 = -267241827;
					uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_70(uParam0);
					uParam0->f_5 = -1183266453;
					uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_70(uParam0);
					uParam0->f_5 = -877826604;
					uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_70(uParam0);
					uParam0->f_5 = 1527533302;
					uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_70(uParam0);
					uParam0->f_5 = -865586768;
					uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_70(uParam0);
					uParam0->f_5 = 294379466;
					uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_70(uParam0);
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
			iVar17 = func_79(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				uParam0->f_7 = 1;
			}
			*uParam0 = func_80(iVar17);
			uParam0->f_1 = 0;
			uParam0->f_6 = 2;
			func_73(uParam0, 32);
			if (iParam2 != -1)
			{
				uParam0->f_9 = func_82(func_81(iVar17), iParam2);
				uParam0->f_15 = func_83(func_81(iVar17), iParam2);
				uParam0->f_5 = func_84(iVar17, iParam2);
				uParam0->f_11 = { func_85(iVar17, iParam2) };
			}
			break;
	}
}

struct<2> func_32(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_87(iParam0, &(Global_1070356->f_634), func_86(iParam1));
			break;
		case 3:
			Var0.f_1 = func_87(iParam0, &(Global_1070356->f_634.f_602), func_86(iParam1));
			break;
		case 4:
			Var0.f_1 = func_87(iParam0, &(Global_1070356->f_634.f_2104), func_86(iParam1));
			break;
		case 5:
			Var0.f_1 = func_87(iParam0, &(Global_1070356->f_634.f_12606), func_86(iParam1));
			break;
		case 6:
			Var0.f_1 = func_87(iParam0, &(Global_1070356->f_634.f_12908), func_86(iParam1));
			break;
		case 7:
			Var0.f_1 = func_87(iParam0, &(Global_1070356->f_634.f_15910), func_86(iParam1));
			break;
		case 8:
			Var0.f_1 = func_87(iParam0, &(Global_1070356->f_634.f_15981), func_86(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_88();
	}
	return Var0;
}

void func_33()
{
	func_89();
}

void func_34()
{
	func_90(&(Local_303.f_18.f_18));
	Local_303.f_18.f_16 = func_91();
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::_0x9F24A34863FD35DA(1);
	NETWORK::_0xE7DDA8BD3BCF751C(2);
}

void func_36()
{
	int iVar0;

	iVar0 = 2;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

int func_37(struct<2> Param0)
{
	if (!func_92(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_86(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_38(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_39(int iParam0, int iParam1)
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

int func_40()
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
	if (!func_37(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_41()
{
}

void func_42()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1186267->f_231.f_1066[Local_303.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_31(&Var1, Local_303.f_1, Local_303.f_2, Local_303.f_3, iVar0);
	if (!func_93(&Var1, 1))
	{
		func_94(1);
		return;
	}
	Local_13.f_6 = func_76(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_95(256);
	if (func_96(Local_13.f_6))
	{
		func_97(5);
		func_94(6);
	}
	else
	{
		func_94(1);
	}
}

void func_43()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_31(&Var0, Local_303.f_1, Local_303.f_2, -1, 255);
	if (func_93(&Var0, 1))
	{
		func_94(2);
		return;
	}
	if (func_98(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_303.f_15, Var0.f_10, 2442122);
		func_94(2);
	}
	else if (bVar17)
	{
		func_97(3);
		func_94(6);
	}
	if (!func_99(Local_13.f_3.f_2))
	{
		func_100(&(Local_13.f_3.f_2));
	}
	else if (func_101(Local_13.f_3.f_2) > 45000)
	{
		func_97(4);
		func_94(6);
	}
}

void func_44()
{
	if (func_102(1, 255))
	{
		if (!func_103(1))
		{
			if (func_104())
			{
				func_95(1);
			}
		}
		else
		{
			func_105();
			func_94(3);
		}
	}
}

void func_45()
{
	bool bVar0;

	if (func_102(2, 255))
	{
		if (!func_103(2))
		{
			bVar0 = true;
			if (!func_106())
			{
				bVar0 = false;
			}
			if (!func_107())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_95(2);
			}
		}
		else
		{
			func_108();
			func_94(4);
		}
	}
}

void func_46()
{
	func_109();
	func_110();
	func_111();
	if (func_112() || Local_13.f_2 != 0)
	{
		func_113();
		func_94(5);
	}
}

void func_47()
{
	if (func_102(4, 255))
	{
		if (func_114())
		{
			func_95(4);
			func_94(6);
		}
	}
}

void func_48()
{
	if (!func_103(256))
	{
		return;
	}
	if (func_103(512))
	{
		if (func_62(32) && func_76(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_63(Local_13.f_6);
			func_115(32);
		}
	}
	else if (!func_62(32))
	{
		if (func_76(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_116(Local_13.f_6, 1, 1);
			func_117(32);
		}
	}
	else if (func_76(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_63(Local_13.f_6);
		func_115(32);
	}
}

void func_49()
{
	func_118();
}

void func_50()
{
	if (Local_13 == 6)
	{
		func_119(6);
	}
	else if (Local_13 > 0)
	{
		func_48();
		func_119(1);
	}
}

void func_51()
{
	if (Local_13 == 6)
	{
		func_119(6);
	}
	else if (Local_13 > 1)
	{
		func_119(2);
	}
}

void func_52()
{
	bool bVar0;
	int iVar1;

	if (!func_102(1, 255))
	{
		bVar0 = true;
		if (!func_120())
		{
			bVar0 = false;
		}
		if (!func_121())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_122(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_99(Local_303.f_11))
			{
				func_100(&(Local_303.f_11));
			}
			if (func_101(Local_303.f_11) >= iVar1)
			{
				func_119(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_123(&(Local_303.f_11));
		func_124();
		func_119(3);
	}
}

void func_53()
{
	int iVar0;

	if (!func_102(2, 255))
	{
		if (func_125())
		{
			func_122(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_99(Local_303.f_11))
			{
				func_100(&(Local_303.f_11));
			}
			if (func_126(Local_303.f_11) >= iVar0)
			{
				func_119(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_123(&(Local_303.f_11));
		func_127();
		func_128();
		func_129();
		func_130();
		func_119(4);
	}
}

void func_54()
{
	if (Local_13 >= 5)
	{
		func_131();
		func_119(5);
		return;
	}
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
	func_137();
}

void func_55()
{
	if (!func_102(4, 255))
	{
		if (func_138())
		{
			func_139();
			func_60(Local_303.f_12, 4);
			func_122(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_119(6);
	}
}

void func_56()
{
}

bool func_57()
{
	return (func_103(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_58()
{
}

void func_59()
{
	int iVar0;
	int iVar1;

	if (func_57())
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_62[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_62[iVar1]));
				func_140(iVar1);
				EVENT::_0xAD8F2424C6E1E3A8(iVar0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_60(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_141(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_61()
{
	int iVar0;
	bool bVar1;

	if (!func_62(1))
	{
		return;
	}
	if (func_62(4))
	{
		return;
	}
	if (!func_62(2))
	{
		iVar0 = -1;
	}
	else if (!func_62(8))
	{
		iVar0 = 2;
	}
	else if (func_62(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_142(Local_303.f_9, iVar0, 0);
	func_117(4);
	if (bVar1)
	{
		func_143(Local_303.f_1, Local_303.f_2);
	}
}

bool func_62(int iParam0)
{
	return func_144(Local_303.f_7, iParam0);
}

void func_63(int iParam0)
{
	int iVar0;

	if (!func_145(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_64()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_57();
	if (func_146(1) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		func_147(0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_148(0)))
	{
		AITRANSPORT::_0xBA8818212633500A(func_148(0), 6, 0);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (iVar1 == 1)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(func_149(1), false);
		}
		func_150(iVar1);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_1[iVar1])))
		{
			if (iVar1 != 0 || !PED::IS_PED_FLEEING(func_149(iVar1)))
			{
				iVar2 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_1[iVar1]));
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		func_151(iVar3);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_4[iVar3]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_4[iVar3])))
		{
			iVar4 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_4[iVar3]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
		}
		iVar1++;
	}
}

void func_65(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_152(uParam0))
	{
		return -1;
	}
	iVar0 = func_153(uParam0, uParam0->f_9);
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
			iVar0 = func_153(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_67(int iParam0)
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
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return *(Global_1186267->f_231[iParam0 /*15*/]);
}

void func_68(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_154(uParam0);
			break;
		case 1:
			func_154(uParam0);
			break;
		case 2:
			func_154(uParam0);
			break;
		case 3:
			func_155(uParam0);
			break;
		case 4:
			func_154(uParam0);
			break;
		case 5:
			func_154(uParam0);
			break;
		case 6:
			func_155(uParam0);
			break;
		case 7:
			func_155(uParam0);
			break;
		case 8:
			func_155(uParam0);
			break;
		case 9:
			func_154(uParam0);
			break;
		default:
			func_70(uParam0);
			func_69(uParam0);
			break;
	}
}

void func_69(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_72(uParam0, iVar0);
		iVar0++;
	}
}

void func_70(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_71(uParam0, iVar0);
		iVar0++;
	}
}

void func_71(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_72(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_73(var uParam0, int iParam1)
{
	func_156(&(uParam0->f_16), iParam1);
}

void func_74(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_72(uParam0, 0);
			break;
		case 1:
		case 2:
			func_72(uParam0, 1);
			func_72(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_72(uParam0, 0);
			func_72(uParam0, 2);
			break;
		case 8:
			func_72(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_72(uParam0, 1);
			break;
		default:
			func_69(uParam0);
			break;
	}
}

void func_75(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_157(uParam0);
			break;
		case 1:
			func_158(uParam0);
			break;
		case 2:
			func_159(uParam0);
			break;
		case 3:
			func_160(uParam0);
			break;
		default:
			func_70(uParam0);
			func_69(uParam0);
			break;
	}
}

int func_76(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_77(int iParam0)
{
	if (!func_145(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

void func_78(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_161(uParam0);
			break;
		case 1:
		case 2:
			func_162(uParam0);
			break;
		case 3:
		case 4:
			func_163(uParam0);
			break;
		default:
			func_69(uParam0);
			break;
	}
	func_70(uParam0);
}

int func_79(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

int func_80(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

int func_81(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

var func_82(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_164(&Var1, uParam0) && func_165(&Var1, iParam1))
	{
		func_166(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_83(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_164(&Var1, uParam0) && func_165(&Var1, iParam1))
	{
		func_166(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_167(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_85(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_167(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_86(int iParam0)
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

int func_87(int iParam0, var uParam1, int iParam2)
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

struct<2> func_88()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_89()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			(Local_78[iVar1 /*7*/])->f_2.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_90(var uParam0)
{
	func_168(uParam0, 0);
	func_169(uParam0, 0);
	func_170(uParam0, 1);
	func_171(uParam0, 1);
	func_172(uParam0, 0);
	func_173(uParam0, 1);
	func_174(uParam0, 1, 1, 1);
}

int func_91()
{
	switch (func_175())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
	return -1;
}

int func_92(int iParam0)
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

bool func_93(var uParam0, int iParam1)
{
	return func_176(uParam0->f_16, iParam1);
}

void func_94(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

void func_95(int iParam0)
{
	if (!func_103(iParam0))
	{
		func_177(&(Local_13.f_1), iParam0);
	}
}

bool func_96(int iParam0)
{
	if (!func_145(iParam0))
	{
		return false;
	}
	return (func_178(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_97(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

int func_98(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return 1;
	}
	if (func_179(Local_303.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_303.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_180(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_122(128);
	}
	else if (!func_102(128, 255))
	{
		Local_13.f_3.f_1 = func_181(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			return 1;
		}
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_13.f_3);
	switch (iVar0)
	{
		case 3:
			Local_13.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_13.f_3);
			return 1;
		case 4:
			Local_13.f_3 = 0;
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_99(int iParam0)
{
	return iParam0 != 0;
}

void func_100(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_101(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

bool func_102(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_144(&(Local_78[iParam1 /*7*/]), iParam0);
}

bool func_103(int iParam0)
{
	return func_144(Local_13.f_1, iParam0);
}

int func_104()
{
	return 1;
}

void func_105()
{
}

int func_106()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 1;
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_4[iVar3])))
		{
			if (func_182(iVar3, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar3++;
			}
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (iVar4 == 1)
				{
					switch (func_183())
					{
						case 2:
						case 3:
							Jump @152; //curOff = 106
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_6[iVar4])))
						{
							if (func_184(iVar4, &bVar1) || bVar1)
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
					switch (func_183())
					{
						case 0:
						case 1:
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[0])))
							{
								if (func_185(0, &bVar1) || bVar1)
								{
									iVar0 = 0;
								}
							}
							break;
						case 2:
						case 3:
							iVar2 = 0;
							while (iVar2 <= 1)
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[iVar2])))
								{
									if (func_185(iVar2, &bVar1) || bVar1)
									{
										iVar0 = 0;
									}
									else
									{
										iVar2++;
									}
									if (bVar1)
									{
										func_186();
									}
									return iVar0;
								}
							}
					}
				}
			}

int func_107()
{
	bool bVar0;

	if (!func_187(&bVar0))
	{
		if (bVar0)
		{
			func_186();
		}
		return 0;
	}
	return 1;
}

void func_108()
{
}

void func_109()
{
	if (!func_103(32) && func_188(32))
	{
		func_95(32);
	}
	if (!func_103(64) && func_188(64))
	{
		func_95(64);
	}
	if (!func_103(16) && func_189(16))
	{
		func_95(16);
	}
	if ((!func_103(2048) && func_188(2048)) && !func_188(4096))
	{
		func_95(2048);
	}
}

void func_110()
{
	bool bVar0;

	if (!bVar0 && func_103(16))
	{
		func_97(1);
		return;
	}
	if (func_103(2048) && !func_188(4096))
	{
		func_97(6);
		return;
	}
}

void func_111()
{
}

int func_112()
{
	if (func_190())
	{
		return 1;
	}
	func_191();
	func_192();
	switch (Local_13.f_7)
	{
		case 0:
			func_193();
			break;
		case 1:
			func_194();
			break;
		case 3:
			func_195();
			break;
		case 5:
			func_196();
			break;
		case 6:
			func_197();
			break;
		case 4:
			func_198();
			break;
		case 7:
			func_199();
			break;
		case 8:
			func_200();
			break;
		case 9:
			func_201();
			break;
		case 11:
			func_202();
			break;
		case 10:
			func_203();
			break;
		case 12:
			func_204();
			break;
		case 13:
			func_205();
			break;
		case 14:
			func_206();
			break;
	}
	return 0;
}

void func_113()
{
}

int func_114()
{
	int iVar0;

	iVar0 = func_149(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || func_207(iVar0, 518218985))
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0)
{
	if (func_62(iParam0))
	{
		func_208(&(Local_303.f_7), iParam0);
	}
}

int func_116(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_145(iParam0))
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_156(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_210(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_117(int iParam0)
{
	if (!func_62(iParam0))
	{
		func_177(&(Local_303.f_7), iParam0);
	}
}

void func_118()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_211(iVar0);
				break;
			case -1315570756:
				func_212(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_213(iVar0);
		iVar0++;
	}
}

void func_119(int iParam0)
{
	if (Local_303.f_8 != iParam0)
	{
		Local_303.f_8 = iParam0;
	}
}

int func_120()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	sVar0 = "ORERW";
	iVar1 = 1;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
		{
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!func_215(func_214(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!func_215(func_216(iVar3)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!func_215(func_217(iVar4)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	iVar5 = 0;
	while (iVar5 <= 5)
	{
		STREAMING::REQUEST_ANIM_DICT(func_218(iVar5));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_218(iVar5)))
		{
			iVar1 = 0;
		}
		iVar5++;
	}
	return iVar1;
}

bool func_121()
{
	bool bVar0;

	bVar0 = false;
	if (!func_219())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_122(int iParam0)
{
	if (!func_102(iParam0, 255))
	{
		func_177(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/], iParam0);
	}
}

void func_123(var uParam0)
{
	*uParam0 = 0;
}

void func_124()
{
}

int func_125()
{
	return 1;
}

int func_126(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_127()
{
	if (!func_62(1))
	{
		func_220(Local_303.f_9);
		func_117(1);
	}
}

void func_128()
{
	func_221();
}

void func_129()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[iVar0])))
		{
			(Local_303.f_18.f_1[iVar0 /*4*/])->f_1 = NETWORK::NET_TO_PED(&(Local_13.f_7.f_1[iVar0]));
			iVar1 = func_149(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				switch (func_183())
				{
					case 0:
					case 1:
						switch (iVar0)
						{
							case 0:
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
								WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
								break;
						}
						break;
					case 2:
					case 3:
						switch (iVar0)
						{
							case 0:
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
								WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
								break;
							case 1:
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iVar1, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
								break;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_6[iVar2])))
		{
			Local_303.f_18.f_13[iVar2] = NETWORK::NET_TO_OBJ(&(Local_13.f_7.f_6[iVar2]));
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_4[iVar3])))
		{
			(Local_303.f_18.f_10[iVar3 /*2*/])->f_1 = NETWORK::NET_TO_VEH(&(Local_13.f_7.f_4[iVar3]));
			iVar4 = func_148(iVar3);
			switch (iVar3)
			{
				case 0:
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
						{
							ENTITY::SET_ENTITY_HEADING(iVar4, func_222(iVar3));
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_303.f_18.f_13[0])))
							{
								func_224(&(Local_303.f_18.f_13[0]), iVar4, func_223(iVar3), 0f, 0f, 90f, 0, 1, 0);
								if (CLOCK::GET_CLOCK_HOURS() >= 21 || CLOCK::GET_CLOCK_HOURS() < 6)
								{
									ENTITY::_0xEBDC12861D079ABA(&(Local_303.f_18.f_13[0]), 1);
									GRAPHICS::_0x07C0F87AAC57F2E4(&(Local_303.f_18.f_13[0]), 10f);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(&(Local_303.f_18.f_13[1])) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_303.f_18.f_13[1])))
							{
								func_224(&(Local_303.f_18.f_13[1]), iVar4, func_225(iVar3), 0f, 0f, 0f, 0, 1, 0);
							}
						}
						VEHICLE::_0xCBF88256E44D5D39(iVar4, 1);
						VEHICLE::_0xC325A6BAA62CF8A2(iVar4, 1);
						AITRANSPORT::_0x13F138225C202F66(iVar4, 3);
						AITRANSPORT::_0xBA8818212633500A(iVar4, 12, 1);
					}
					break;
			}
		}
		iVar3++;
	}
	func_226();
}

void func_130()
{
}

void func_131()
{
}

void func_132()
{
	float fVar0;

	if (func_179(Local_303.f_15))
	{
		return;
	}
	if (func_227())
	{
		return;
	}
	if (func_228(Local_303.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_303.f_15);
		if (fVar0 < 200f)
		{
			func_122(4096);
		}
		else if (fVar0 < 400f)
		{
			func_229(4096);
			func_122(2048);
		}
		else
		{
			func_229(4096);
			func_229(2048);
		}
	}
}

void func_133()
{
	func_230();
	func_231();
	func_232();
}

void func_134()
{
	if (func_233())
	{
		func_122(8);
	}
	else
	{
		func_229(8);
	}
}

void func_135()
{
	func_234();
	func_235();
	func_236(Local_13.f_7);
	func_237();
	func_238();
	switch (Local_303.f_18)
	{
		case 0:
			func_239();
			break;
		case 1:
			func_240();
			break;
		case 3:
			func_241();
			break;
		case 6:
			func_242();
			break;
		case 5:
			func_243();
			break;
		case 4:
			func_244();
			break;
		case 7:
			func_245();
			break;
		case 8:
			func_246();
			break;
		case 9:
			func_247();
			break;
		case 11:
			func_248();
			break;
		case 10:
			func_249();
			break;
		case 12:
			func_250();
			break;
		case 13:
			func_251();
			break;
		case 14:
			func_252();
			break;
	}
}

void func_136()
{
	if (!func_102(8, 255))
	{
		func_122(16);
	}
	else
	{
		func_229(16);
	}
}

void func_137()
{
	int iVar0;

	Local_303.f_6 = -1;
	Local_303.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_303.f_5 = (Local_303.f_5 || Local_78[iVar0 /*7*/]) // PointerArith;
			Local_303.f_6 = (Local_303.f_6 && Local_78[iVar0 /*7*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_138()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(func_149(1), false);
		}
		func_150(iVar0);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_1[iVar0])))
		{
			PED::SET_PED_KEEP_TASK(func_149(iVar0), true);
			if (iVar0 != 0 || !PED::IS_PED_FLEEING(func_149(iVar0)))
			{
				iVar1 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_1[iVar0]));
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		func_151(iVar2);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_4[iVar2])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_4[iVar2])))
		{
			iVar3 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_4[iVar2]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar3);
		}
		iVar0++;
	}
	func_147(0, 1);
	return 1;
}

void func_139()
{
}

void func_140(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST((Local_303.f_191.f_7[iParam0 /*11*/])->f_1))
	{
		MAP::REMOVE_BLIP(&((Local_303.f_191.f_7[iParam0 /*11*/])->f_1));
	}
}

bool func_141(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_142(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_254(func_253(Param0));
	iVar1 = func_255(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_256(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_257(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_258(iVar0);
}

bool func_144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_145(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_146(int iParam0)
{
	return func_144(Local_303.f_18.f_160, iParam0);
}

void func_147(bool bParam0, bool bParam1)
{
	int iVar0;

	if (bParam0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				iVar0 = 256;
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, iVar0, 0);
			func_259(1);
		}
	}
	else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		func_260(1);
	}
}

int func_148(int iParam0)
{
	return (Local_303.f_18.f_10[iParam0 /*2*/])->f_1;
}

int func_149(int iParam0)
{
	return (Local_303.f_18.f_1[iParam0 /*4*/])->f_1;
}

void func_150(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_303.f_18.f_1[iParam0 /*4*/])))
	{
		return;
	}
	MAP::REMOVE_BLIP(Local_303.f_18.f_1[iParam0 /*4*/]);
}

void func_151(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_303.f_18.f_10[iParam0 /*2*/])))
	{
		return;
	}
	MAP::REMOVE_BLIP(Local_303.f_18.f_10[iParam0 /*2*/]);
}

int func_152(var uParam0)
{
	if (func_37(*uParam0))
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

int func_153(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_261(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_262(iParam1)) - 1);
	}
	bVar2 = func_37(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21((Global_1186267->f_231[iVar6 /*15*/])->f_5, *uParam0))
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

void func_154(var uParam0)
{
	func_71(uParam0, 0);
	func_71(uParam0, 1);
	func_71(uParam0, 3);
	func_69(uParam0);
}

void func_155(var uParam0)
{
	func_70(uParam0);
	func_263(uParam0, 0, 3);
}

void func_156(var uParam0, int iParam1)
{
	func_264(uParam0, iParam1);
}

void func_157(var uParam0)
{
	func_71(uParam0, 0);
	func_72(uParam0, 0);
	func_72(uParam0, 1);
	func_72(uParam0, 2);
}

void func_158(var uParam0)
{
	func_71(uParam0, 1);
	func_69(uParam0);
}

void func_159(var uParam0)
{
	func_71(uParam0, 2);
	func_72(uParam0, 3);
}

void func_160(var uParam0)
{
	func_71(uParam0, 3);
	func_72(uParam0, 4);
}

void func_161(var uParam0)
{
	func_72(uParam0, 0);
	func_72(uParam0, 1);
}

void func_162(var uParam0)
{
	func_72(uParam0, 2);
	func_72(uParam0, 3);
}

void func_163(var uParam0)
{
	func_72(uParam0, 4);
	func_72(uParam0, 5);
}

bool func_164(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_165(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_166(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_167(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

void func_168(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 16384);
	}
	else
	{
		func_177(&(uParam0->f_1), 16384);
	}
}

void func_169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 2048);
	}
	else
	{
		func_177(&(uParam0->f_1), 2048);
	}
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 256);
	}
	else
	{
		func_177(&(uParam0->f_1), 256);
	}
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 16);
	}
	else
	{
		func_208(uParam0, 67108864);
		func_208(uParam0, 16);
	}
}

void func_172(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 128);
	}
	else
	{
		func_177(&(uParam0->f_1), 128);
	}
}

void func_173(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 256);
	}
	else
	{
		func_208(uParam0, 256);
	}
}

void func_174(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_177(uParam0, 268435456);
	}
	else
	{
		func_208(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_177(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_208(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_177(uParam0, 536870912);
	}
	else
	{
		func_208(uParam0, 536870912);
	}
}

int func_175()
{
	var uVar0;

	uVar0 = func_265();
	return uVar0;
}

bool func_176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_178(int iParam0)
{
	int iVar0;

	if (!func_145(iParam0))
	{
		return false;
	}
	iVar0 = func_266(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_179(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_180(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_181(struct<17> Param0)
{
	var uVar0;

	func_180(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_182(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_268(Local_13.f_7.f_4[iParam0], func_216(iParam0), func_267(iParam0), func_222(iParam0), 1, 0, 0, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_183()
{
	return func_269();
}

int func_184(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_270(Local_13.f_7.f_6[iParam0], func_217(iParam0), func_267(0), 1, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_185(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_273(Local_13.f_7.f_1[iParam0], func_214(iParam0), func_271(iParam0), func_272(iParam0), 1, 0, 0, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

void func_186()
{
	func_97(2);
}

int func_187(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(2))
	{
		*uParam0 = 1;
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (func_274(iVar2, 4))
		{
		}
		else if (!func_275(iVar2, uParam0, &bVar1))
		{
			if (*uParam0)
			{
				return 0;
			}
			if (bVar1)
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			if (bVar0)
			{
				return 0;
			}
			return 1;
		}
	}

bool func_188(int iParam0)
{
	return func_144(Local_303.f_5, iParam0);
}

bool func_189(int iParam0)
{
	return func_144(Local_303.f_6, iParam0);
}

int func_190()
{
	if (Local_13.f_7 == 15)
	{
		return 1;
	}
	return 0;
}

void func_191()
{
	if (func_276())
	{
		if (Local_13.f_7 != 14)
		{
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			func_277(14);
		}
	}
	if (func_278(4096))
	{
		func_277(14);
	}
}

void func_192()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_148(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	func_279(vVar1);
}

void func_193()
{
	if (func_227())
	{
		switch (func_183())
		{
			case 0:
			case 1:
				func_277(1);
				break;
			case 2:
			case 3:
				func_277(1);
				break;
			default:
				func_277(12);
				break;
		}
	}
}

void func_194()
{
	if (func_278(1) || func_278(2))
	{
		func_277(3);
	}
	if (func_278(16))
	{
		func_277(4);
	}
}

void func_195()
{
	func_280();
	func_281(0, func_148(0), 10f, 1, 0);
	if (!func_278(16))
	{
		if (func_278(2))
		{
			if (func_282(&(Local_303.f_18.f_54)))
			{
				func_283(&(Local_303.f_18.f_54));
			}
			if (func_282(&(Local_303.f_18.f_57)))
			{
				func_283(&(Local_303.f_18.f_57));
			}
			func_277(5);
		}
	}
	else
	{
		if (func_282(&(Local_303.f_18.f_54)))
		{
			func_283(&(Local_303.f_18.f_54));
		}
		if (func_282(&(Local_303.f_18.f_57)))
		{
			func_283(&(Local_303.f_18.f_57));
		}
		func_277(4);
	}
}

void func_196()
{
	func_281(0, func_148(0), 10f, 1, 0);
	if (!func_278(16))
	{
		if (func_278(4))
		{
			func_277(6);
		}
	}
	else
	{
		if (func_282(&(Local_303.f_18.f_54)))
		{
			func_283(&(Local_303.f_18.f_54));
		}
		if (func_282(&(Local_303.f_18.f_57)))
		{
			func_283(&(Local_303.f_18.f_57));
		}
		func_277(4);
	}
}

void func_197()
{
	if (Local_303.f_18.f_164 < 30f)
	{
		func_277(7);
	}
	if (func_278(8))
	{
		func_277(14);
	}
	if (func_278(16))
	{
		if (func_282(&(Local_303.f_18.f_54)))
		{
			func_283(&(Local_303.f_18.f_54));
		}
		if (func_282(&(Local_303.f_18.f_57)))
		{
			func_283(&(Local_303.f_18.f_57));
		}
		func_277(4);
	}
}

void func_198()
{
	if (func_278(32768))
	{
		func_277(10);
	}
}

void func_199()
{
	func_277(9);
}

void func_200()
{
	func_277(12);
}

void func_201()
{
	if (func_278(65536) || PED::IS_PED_IN_VEHICLE(func_149(0), func_148(0), false))
	{
		func_277(11);
	}
}

void func_202()
{
	if ((func_278(32) && func_278(512)) && func_278(256))
	{
		func_147(0, 1);
		func_277(12);
	}
}

void func_203()
{
	if (func_278(128))
	{
		func_277(13);
	}
}

void func_204()
{
	if (func_284(8192))
	{
		func_277(13);
	}
}

void func_205()
{
	int iVar0;
	int iVar1;

	iVar0 = func_149(0);
	iVar1 = func_148(0);
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, false) && !func_285(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
	{
		func_147(0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1))
		{
			if (!PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
			{
				func_277(12);
			}
		}
		else
		{
			func_277(13);
		}
	}
	if (func_278(4096))
	{
		func_277(14);
	}
	if (func_284(1024))
	{
		func_277(15);
	}
}

void func_206()
{
	int iVar0;

	iVar0 = func_149(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && func_284(4194304))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_149(1)))
		{
			func_277(15);
		}
		else if (ENTITY::IS_ENTITY_DEAD(func_149(1)) && func_284(8388608))
		{
			func_277(15);
		}
	}
}

int func_207(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_209(int iParam0)
{
	if (!func_145(iParam0))
	{
		return 0;
	}
	if (!func_178(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_210(var uParam0, int iParam1)
{
	func_286(uParam0, iParam1);
}

void func_211(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_287(&Var0, iParam0))
			{
				func_288(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_212(int iParam0)
{
}

void func_213(int iParam0)
{
}

int func_214(int iParam0)
{
	switch (func_183())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -644062535;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -99878679;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -99878679;
				case 1:
					return -644062535;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -644062535;
				case 1:
					return -99878679;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_215(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_216(int iParam0)
{
	switch (func_183())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("cart03");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("wagon05x");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("coach4");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return joaat("coach3");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1588362795;
		case 1:
			switch (func_216(0))
			{
				case joaat("cart03"):
					return -779334476;
				case joaat("wagon05x"):
					return 840935990;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_218(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "script_re@arms_deal";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
		case 2:
			switch (iParam0)
			{
				case 0:
					return "AMB_REST_SIT@WORLD_HUMAN_SIT_GROUND@FALL_ASLEEP@FEMALE_A@SLEEPING@base";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
		case 3:
			switch (iParam0)
			{
				case 0:
					return "AMB_MISC@WORLD_HUMAN_pee@MALE_A@idle_a";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_219()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (MISC::IS_BIT_SET(Local_303.f_191.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_289(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_303.f_191.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_303.f_191.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_303.f_191.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 0;
	}
	return 1;
}

void func_220(struct<2> Param0)
{
	if (func_255(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_255(Param0)))
	{
		STATS::_0x99230691875FC218(func_253(Param0), func_255(Param0), Global_35);
	}
}

void func_221()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_290(iVar0, iVar1, 0);
		iVar0++;
	}
}

float func_222(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 152.1574f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 118.12f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 102.59f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -100.96f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -81.13f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 77.44f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -87.79f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 152.1574f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 118.12f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 102.59f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -100.96f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -81.13f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 77.44f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -87.79f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_223(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
			switch (func_216(iParam0))
			{
				case joaat("wagon05x"):
					return -0.85f, 0.9f, 1.4f;
				case joaat("cart03"):
					return 0.6f, 0.7f, 0.65f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_224(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam0))
			{
				if (PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					PED::_REMOVE_PED_FROM_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(iParam0))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, vParam2, vParam5, iParam8, iParam10, 0, 0, 2, 1, iParam9, 0);
			}
		}
	}
}

Vector3 func_225(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
			switch (func_216(iParam0))
			{
				case joaat("wagon05x"):
					return 0f, -0.2f, 0.2f;
				case joaat("cart03"):
					return 0f, 0f, 0.1f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_226()
{
	func_291(0);
	func_293(0, func_292(0));
	if (func_183() == 2 || func_183() == 3)
	{
		func_291(1);
		func_293(1, func_292(1));
	}
	if (func_183() == 2 || func_183() == 3)
	{
		func_293(1, func_292(1));
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(func_149(0), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_148(0), func_294(0)), true, true, true, false);
	}
}

bool func_227()
{
	return (func_103(32) || func_102(32, 255));
}

int func_228(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_295(iParam0, 2087069356) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return 0;
	}
	if (iVar2 != 0 && (Global_1275573->f_21 - iVar2) < iParam1)
	{
		return 1;
	}
	return 0;
}

void func_229(int iParam0)
{
	if (func_144(&(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/]), iParam0))
	{
		func_208(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/], iParam0);
	}
}

void func_230()
{
	func_296();
}

void func_231()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_297(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_232()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_303.f_191.f_30 >= 2)
		{
			Local_303.f_191.f_30 = 0;
		}
		iVar0 = Local_303.f_191.f_30;
		Local_303.f_191.f_30++;
		iVar7 = func_298(iVar0);
		iVar1 = &Local_303.f_191.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_274(iVar7, 4))
		{
			func_290(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_78[iVar3 /*7*/])->f_2.f_2[iVar0] > -1f)
			{
				(Local_78[iVar3 /*7*/])->f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_303.f_191.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_303.f_191.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_303.f_191.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_303.f_191.f_31), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_303.f_191.f_31, iVar0))
		{
			if (bVar4 || !func_299(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_303.f_191.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (func_299(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_303.f_191.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_78[iVar3 /*7*/])->f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_78[iVar3 /*7*/])->f_2.f_1), iVar0);
				}
				func_300(Local_303.f_191.f_32[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_78[iVar3 /*7*/])->f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_282(Local_303.f_191.f_32[iVar0 /*3*/]) || func_301(Local_303.f_191.f_32[iVar0 /*3*/], 0.5f))))
			{
				func_283(Local_303.f_191.f_32[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_78[iVar3 /*7*/])->f_2.f_1), iVar0);
			}
		}
		if (func_274(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_302(iVar7))
						{
							if (!func_275(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_303(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !func_274(iVar7, 8))
			{
				if (!func_302(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_303.f_191.f_31 != 0)
	{
		if (!func_304(1, -1))
		{
			func_305(1);
		}
	}
	else if (func_304(1, -1))
	{
		func_306(1);
	}
}

int func_233()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_303.f_14))
	{
		return 0;
	}
	return 1;
}

void func_234()
{
	int iVar0;

	Local_303.f_18.f_158 = -1;
	Local_303.f_18.f_159 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_303.f_18.f_159 = (Local_303.f_18.f_159 || (Local_78[iVar0 /*7*/])->f_1);
			Local_303.f_18.f_158 = (Local_303.f_18.f_158 && (Local_78[iVar0 /*7*/])->f_1);
		}
		iVar0++;
	}
}

void func_235()
{
	if (func_276())
	{
		return;
	}
	if (func_307(func_149(0), 0, &(Local_303.f_18.f_18), &(Local_303.f_18.f_49), 0, 0))
	{
		func_308(0);
	}
	func_309();
}

void func_236(int iParam0)
{
	if (Local_303.f_18 != iParam0)
	{
		Local_303.f_18 = iParam0;
	}
}

void func_237()
{
	Local_303.f_18.f_164 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_1[0 /*4*/])->f_1, false, false), ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_10[0 /*2*/])->f_1, false, false));
	Local_303.f_18.f_165 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false), ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_1[0 /*4*/])->f_1, false, false));
	if (func_183() == 2 || func_183() == 3)
	{
		Local_303.f_18.f_166 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_1[1 /*4*/])->f_1, false, false), ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_10[0 /*2*/])->f_1, false, false));
	}
}

void func_238()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_310(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_239()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = func_149(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		fVar2 = Local_303.f_18.f_165;
		if (fVar2 < 125f)
		{
			func_311();
		}
		if (fVar2 < 45f)
		{
			func_312();
		}
		if (fVar2 < 45f)
		{
			func_312();
		}
		switch (func_183())
		{
			case 2:
			case 3:
				iVar0 = func_149(1);
				if (!PED::IS_PED_IN_VEHICLE(iVar0, func_148(0), false))
				{
					PED::SET_PED_INTO_VEHICLE(iVar0, func_148(0), 1);
				}
				break;
			case 0:
			case 1:
				ENTITY::SET_ENTITY_HEADING(iVar1, func_222(0));
				break;
		}
		if (func_313(iVar1, -2017877118, 1, 0))
		{
			TASK::TASK_PLAY_ANIM(iVar1, func_218(0), func_314(0), 1000f, -1056964608, -1, 1, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_240()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar0 = func_149(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar2 = func_148(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		fVar3 = ENTITY::GET_ENTITY_SPEED(iVar2);
		if (fVar3 > 1f)
		{
			func_280();
			func_315(0, 0);
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar2, false))
			{
				func_316(2);
			}
			if (!func_278(1))
			{
				if (func_183() == 2 || func_183() == 3)
				{
					func_317(func_149(1), 5, 1);
				}
				if (func_281(0, iVar2, 8f, 1, 0))
				{
					func_316(1);
				}
			}
			if (func_318(0, 0))
			{
				func_316(16);
			}
		}
		else if (fVar3 <= 0f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 1, 1))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_POINT_2(iVar2, func_319(0), func_320(), 0.25f, 0);
				Local_303.f_18.f_162 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1271374678, iVar2, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
			}
		}
	}
}

void func_241()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = func_148(0);
	func_280();
	func_150(0);
	func_315(0, 0);
	if (!func_321(4, 255))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1))
		{
			if (func_278(2))
			{
				func_322();
			}
			if (!func_318(0, 0) && PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
			{
				if (!func_321(2, 255))
				{
					func_316(2);
				}
			}
			if (Local_303.f_18.f_165 > 20f && !func_321(16384, 255))
			{
				func_316(16384);
			}
		}
		else
		{
			func_322();
			func_316(16);
		}
	}
}

void func_242()
{
	int iVar0;
	int iVar1;

	iVar0 = func_149(1);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_148(0), 1, 1))
	{
		func_323(0, 0);
		func_151(0);
		if (!func_278(4))
		{
			func_318(0, 0);
		}
		else if (func_146(4))
		{
			if (!func_146(8))
			{
				func_325(func_324(-1892463704, -400839231), 1);
				func_259(8);
			}
		}
	}
	else if (!func_278(16))
	{
		func_322();
		func_316(16);
	}
	if (!func_321(2048, 255) && PED::IS_PED_IN_VEHICLE(iVar1, func_148(0), false))
	{
		switch (func_183())
		{
			case 0:
			case 1:
				Local_303.f_18.f_163 = func_326("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_CART", 10000, 0, 0, 0, 1);
				break;
			case 2:
			case 3:
				Local_303.f_18.f_163 = func_326("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_COACH", 10000, 0, 0, 0, 1);
				break;
			default:
				Local_303.f_18.f_163 = func_326("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_CART", 10000, 0, 0, 0, 1);
				break;
		}
		func_316(2048);
	}
	if (func_183() == 2 || func_183() == 3)
	{
		if (func_282(&(Local_303.f_18.f_57)) && (func_327(&(Local_303.f_18.f_57)) > 15000 || (!func_328(18) && func_327(&(Local_303.f_18.f_57)) > 2000)))
		{
			if (!func_329(1))
			{
				if (!func_328(18))
				{
					if (func_330(iVar0, iVar1, 18, 291934926, 0))
					{
						func_300(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(19))
				{
					if (func_330(iVar0, iVar1, 19, 291934926, 0))
					{
						func_300(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(20))
				{
					if (func_330(iVar0, iVar1, 20, 291934926, 0))
					{
						func_300(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(21))
				{
					if (func_330(iVar0, iVar1, 21, 291934926, 0))
					{
						func_300(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(22))
				{
					if (func_330(iVar0, iVar1, 22, 291934926, 0))
					{
						func_300(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(23))
				{
					if (func_330(iVar0, iVar1, 23, 291934926, 0))
					{
						func_300(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(24))
				{
					if (func_330(iVar0, iVar1, 24, 291934926, 0))
					{
						func_300(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(25))
				{
					func_330(iVar0, iVar1, 25, 291934926, 0);
				}
			}
			if (func_328(25) && func_327(&(Local_303.f_18.f_57)) > 17500)
			{
				if (!func_321(8, 255))
				{
					func_316(8);
					func_283(&(Local_303.f_18.f_57));
				}
			}
		}
		else if (!func_282(&(Local_303.f_18.f_57)))
		{
			func_331(&(Local_303.f_18.f_57), 0);
		}
	}
}

void func_243()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_149(1);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar2 = func_148(0);
	func_280();
	if (!func_321(4, 255))
	{
		if (!func_328(15))
		{
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			if (func_330(iVar0, iVar1, 15, 291934926, 0))
			{
				func_300(&(Local_303.f_18.f_57));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 1, 1))
		{
			if (!func_278(4))
			{
				func_318(0, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar2, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1) == iVar1 && !func_321(4, 255))
				{
					func_316(4);
				}
			}
		}
		else
		{
			func_322();
			func_316(16);
		}
	}
}

void func_244()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_149(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	func_318(0, 1);
	func_332();
	func_61();
	if (Local_303.f_18.f_164 < 45f)
	{
		if (func_313(iVar0, -2017877118, 1, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_218(4), func_314(4), 1))
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_218(4), func_314(4), iVar1, -1, 1090519040, -1056964608, 1, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		}
	}
	func_150(0);
	func_151(0);
	if (Local_303.f_18.f_165 < 30f && !func_321(32768, 255))
	{
		func_316(32768);
	}
	switch (func_183())
	{
		case 2:
		case 3:
			iVar2 = func_149(1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !VEHICLE::IS_VEHICLE_DRIVEABLE(func_148(0), 0, 0))
			{
				switch (func_175())
				{
					case 7:
						if (!ENTITY::IS_ENTITY_DEAD(iVar2))
						{
							func_333(iVar2, 0, 0);
						}
						break;
					default:
						if (func_313(iVar2, 242628503, 1, 0) && !func_329(1))
						{
							func_330(iVar2, iVar0, 36, 291934926, 0);
							TASK::OPEN_SEQUENCE_TASK(&((Local_303.f_18.f_1[1 /*4*/])->f_2));
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
							TASK::TASK_WALK_AWAY(0, iVar0);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 1);
							func_334(iVar2, &((Local_303.f_18.f_1[1 /*4*/])->f_2), 0, 0, 1, 1);
							if (!func_282(&(Local_303.f_18.f_170)))
							{
								func_331(&(Local_303.f_18.f_170), 0);
							}
						}
						break;
				}
			}
			break;
	}
}

void func_245()
{
}

void func_246()
{
}

void func_247()
{
	int iVar0;
	int iVar1;

	iVar0 = func_149(0);
	iVar1 = func_148(0);
	func_151(0);
	if (!func_328(8))
	{
		AUDIO::_0x36559148B78853B3(1, 0, 0);
		func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 8, 291934926, 0);
	}
	if (!func_278(65536))
	{
		if (func_183() != 0)
		{
			if (func_313(iVar0, -1794415470, 1, 0))
			{
				TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, 0, 1.5f, 8388673, 0);
				func_316(65536);
			}
		}
		else if (func_313(iVar0, -2015108952, 1, 0))
		{
			TASK::TASK_GOTO_ENTITY_OFFSET(iVar0, iVar1, -1, 0.5f, 0f, 1.5f, 0);
			func_316(65536);
		}
	}
	switch (func_183())
	{
		case 2:
		case 3:
			if ((!ENTITY::IS_ENTITY_DEAD(func_149(1)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0, 0)) && ENTITY::GET_ENTITY_SPEED(iVar1) <= 0f)
			{
				if (!func_278(131072))
				{
					if (func_313(func_149(1), 242628503, 1, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&((Local_303.f_18.f_1[1 /*4*/])->f_2));
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
						TASK::TASK_WALK_AWAY(0, iVar0);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						func_334(func_149(1), &((Local_303.f_18.f_1[1 /*4*/])->f_2), 0, 0, 1, 1);
						func_330(func_149(1), iVar0, 36, 291934926, 0);
						func_316(131072);
					}
				}
			}
			break;
	}
}

void func_248()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_149(0);
	iVar1 = func_148(0);
	iVar2 = func_149(1);
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	func_151(0);
	if (!PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false) && !func_285(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
	{
		func_147(0, 1);
	}
	if (func_278(32))
	{
		func_335();
		func_61();
	}
	if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
	{
		func_150(0);
		if (PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false))
		{
			func_147(1, 1);
			if (!func_282(&(Local_303.f_18.f_54)))
			{
				func_331(&(Local_303.f_18.f_54), 0);
			}
			else if (func_327(&(Local_303.f_18.f_54)) >= 2000)
			{
				if (!func_321(256, 255))
				{
					if (func_313(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1, 0))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar3, iVar1, 1, 0);
						func_316(256);
					}
				}
				else if (!func_321(32, 255))
				{
					func_336();
				}
			}
		}
		else
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) != iVar0)
			{
				if (func_313(iVar0, 355471868, 1, 0))
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iVar1);
				}
			}
			else if (!func_321(32, 255))
			{
				AITRANSPORT::_0xBA8818212633500A(iVar1, 6, 0);
				func_336();
			}
			func_316(256);
		}
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar3));
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) <= 0.1f && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 0) == iVar3) && func_285(iVar0, -1794415470))
		{
			if (!AITRANSPORT::_0x660639BC60157048(iVar3, iVar1) && !func_285(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_147(1, 1);
				}
				else
				{
					TASK::TASK_LEAVE_VEHICLE(iVar3, iVar1, 65, 0);
				}
			}
		}
		if (func_183() == 0)
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar1) <= 0.1f && func_337(iVar3, iVar0, 5f, 1))
			{
				if (PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_147(1, 1);
						func_338(256);
					}
					else if (!func_321(256, 255))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar3, iVar1, 65, 0);
						func_316(256);
					}
				}
				else
				{
					AITRANSPORT::_0xBA8818212633500A(iVar1, 6, 1);
					if (func_313(iVar0, -1794415470, 1, 0))
					{
						TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, -1, 1.5f, 8388673, 0);
					}
				}
			}
		}
		else if (func_313(iVar0, -1794415470, 1, 0))
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, 0, 1.5f, 8388673, 0);
		}
	}
	switch (func_183())
	{
		case 0:
		case 1:
			if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false) && !func_278(512))
			{
				if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 1))
				{
					func_330(iVar0, iVar3, 33, 291934926, 0);
					func_316(512);
				}
			}
			break;
		case 2:
		case 3:
			if (!func_329(1))
			{
				if (!func_328(26))
				{
					func_330(iVar2, iVar0, 26, 291934926, 0);
				}
				else if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false) && !func_321(512, 255))
				{
					if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 1))
					{
						func_330(iVar0, iVar3, 33, 291934926, 0);
						func_316(512);
					}
				}
			}
			break;
	}
}

void func_249()
{
	int iVar0;
	int iVar1;

	iVar0 = func_149(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (MAP::DOES_BLIP_EXIST(&(Local_303.f_18.f_10[0 /*2*/])))
	{
		MAP::REMOVE_BLIP(Local_303.f_18.f_10[0 /*2*/]);
	}
	func_332();
	if (Local_303.f_18.f_165 <= 20f)
	{
		if (!func_278(128))
		{
			if (!func_329(1))
			{
				if (func_321(16384, 255))
				{
					func_330(iVar0, iVar1, 11, 291934926, 0);
				}
				else
				{
					func_330(iVar0, iVar1, 41, 291934926, 0);
				}
				func_316(128);
			}
		}
	}
	else if (func_278(128))
	{
		if (!func_282(&(Local_303.f_18.f_54)))
		{
			func_300(&(Local_303.f_18.f_54));
		}
		else if (func_327(&(Local_303.f_18.f_54)) > 20000)
		{
			func_316(128);
		}
	}
}

void func_250()
{
	int iVar0;
	int iVar1;

	iVar0 = func_149(0);
	iVar1 = func_148(0);
	if (func_146(1))
	{
		func_147(0, 1);
	}
	if (!PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
	{
		if ((func_313(iVar0, -1794415470, 1, 0) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1))
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, 20000, -1, 2f, 1, 0);
		}
	}
	else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) != iVar0)
	{
		if (func_313(iVar0, 355471868, 1, 0))
		{
			TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iVar1);
		}
	}
	else if (!func_321(8192, 255))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar1, false))
		{
			if (!func_329(1))
			{
				if (!func_328(9))
				{
					func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 9, 291934926, 0);
				}
				func_316(8192);
			}
		}
	}
}

void func_251()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_149(0);
	iVar1 = func_148(0);
	iVar2 = func_149(1);
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_146(1))
	{
		func_147(0, 1);
	}
	func_332();
	if (!func_321(4096, 255))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false))
		{
			if (!func_329(1))
			{
				func_330(iVar0, iVar3, 37, 291934926, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					func_330(iVar2, iVar3, 38, 291934926, 0);
				}
				func_316(4096);
			}
			else
			{
				AUDIO::_0x36559148B78853B3(1, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1)) && PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) == iVar0)
				{
					if (func_313(iVar0, -258271821, 1, 0))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, -1976316465);
						func_150(0);
						TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, iVar1, 3f, 67633287);
					}
					if (!func_282(&(Local_303.f_18.f_170)) && ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
					{
						func_331(&(Local_303.f_18.f_170), 0);
					}
				}
				else if (func_313(iVar0, 355471868, 1, 0))
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iVar1);
				}
			}
			else if (func_313(iVar0, -1146898486, 1, 0) && !func_329(1))
			{
				if (!func_328(12))
				{
					func_330(iVar0, iVar3, 12, 291934926, 0);
				}
				func_150(0);
				if (!func_329(1) || func_328(12))
				{
					TASK::TASK_WANDER_STANDARD(iVar0, 40000f, 0);
					if (!func_282(&(Local_303.f_18.f_170)) && ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
					{
						func_331(&(Local_303.f_18.f_170), 0);
					}
				}
			}
		}
		switch (func_183())
		{
			case 0:
			case 1:
				if (func_285(iVar0, -258271821))
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) <= 20f)
					{
						if (ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
						{
							if (func_282(&(Local_303.f_18.f_170)))
							{
								if (func_327(&(Local_303.f_18.f_170)) >= 15000)
								{
									if (!func_328(13))
									{
										func_330(iVar0, iVar3, 13, 291934926, 0);
										func_300(&(Local_303.f_18.f_170));
									}
									else
									{
										func_316(4096);
									}
								}
							}
						}
					}
					else if (!func_321(1024, 255))
					{
						func_316(1024);
					}
				}
				break;
			case 2:
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1))
				{
					if (!func_329(1))
					{
						func_330(iVar2, iVar0, 35, 291934926, 0);
						if (!func_329(1))
						{
							if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) <= 20f)
							{
								if (ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
								{
									if (func_282(&(Local_303.f_18.f_170)))
									{
										if (func_327(&(Local_303.f_18.f_170)) >= 15000)
										{
											if (!func_328(13))
											{
												func_330(iVar0, iVar3, 13, 291934926, 0);
												func_300(&(Local_303.f_18.f_170));
											}
											else
											{
												func_316(4096);
											}
										}
									}
								}
							}
							else if (!func_321(1024, 255))
							{
								func_316(1024);
							}
						}
					}
				}
				break;
		}
	}
}

void func_252()
{
	int iVar0;
	int iVar1;

	iVar0 = func_149(0);
	iVar1 = func_149(1);
	func_61();
	func_309();
	if (ENTITY::DOES_ENTITY_EXIST(func_148(0)))
	{
		AITRANSPORT::_0xBA8818212633500A(func_148(0), 6, 0);
	}
	if (func_146(1) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		func_147(0, 1);
	}
	func_151(0);
	if (!func_278(64))
	{
		if (func_102(64, 255))
		{
			if (func_278(32))
			{
				func_339(-1315007749, 1, 0);
			}
			func_339(-1315007749, 1, 0);
			func_316(64);
		}
	}
	if (!func_278(262144) && AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		AUDIO::_0x36559148B78853B3(1, 0, 0);
	}
	switch (func_183())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_150(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (func_340(&(Local_303.f_18.f_18)) == iVar1 || func_321(16, 255))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar1, func_148(0), false))
					{
						func_330(iVar1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 40, 291934926, 0);
					}
					else
					{
						func_330(iVar1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 39, 291934926, 0);
					}
				}
				if (PED::IS_PED_IN_VEHICLE(iVar1, func_148(0), false))
				{
					if (func_313(iVar1, -828834893, 1, 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar1, 0, 64);
					}
				}
				else if (func_313(iVar1, 518218985, 1, 0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar1, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 3, 131072, -1082130432, -1, 0);
					PED::SET_PED_KEEP_TASK(iVar1, true);
				}
			}
			if (!func_278(262144))
			{
				if ((!func_321(262144, 255) && func_278(2097152)) && ENTITY::DOES_ENTITY_EXIST(func_341(func_148(0), 4)))
				{
					if (ENTITY::IS_ENTITY_DEAD(func_341(func_148(0), 4)) && func_342(func_341(func_148(0), 4), PLAYER::PLAYER_PED_ID()))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 32, 291934926, 0);
						func_316(262144);
					}
					if (!func_321(262144, 255) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_341(func_148(0), 4), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 31, 291934926, 0);
						func_316(262144);
					}
				}
				if ((!func_321(262144, 255) && func_278(2097152)) && ENTITY::DOES_ENTITY_EXIST(func_341(func_148(0), 5)))
				{
					if (ENTITY::IS_ENTITY_DEAD(func_341(func_148(0), 5)) && func_342(func_341(func_148(0), 5), PLAYER::PLAYER_PED_ID()))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 32, 291934926, 0);
						func_316(262144);
					}
					if (!func_321(262144, 255) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_341(func_148(0), 5), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 31, 291934926, 0);
						func_316(262144);
					}
				}
				if (func_278(1048576))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_148(0), 0, 0))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 29, 291934926, 0);
						func_316(262144);
					}
					else
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 30, 291934926, 0);
						func_316(262144);
					}
				}
				if (!func_321(262144, 255))
				{
					if (Local_303.f_18.f_49 == 4 && PED::IS_PED_IN_VEHICLE(iVar0, func_148(0), false))
					{
					}
					else
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 28, 291934926, 0);
						func_316(262144);
					}
				}
			}
			if (func_313(iVar0, 518218985, 1, 0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1082130432, -1, 0);
				PED::SET_PED_KEEP_TASK(iVar0, true);
			}
			break;
		default:
			func_323(0, 942020339);
			if (func_313(iVar0, -2117564886, 1, 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS(iVar0, -1082130432);
			}
			break;
	}
}

int func_253(var uParam0, var uParam1)
{
	return uParam0;
}

int func_254(int iParam0)
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

int func_255(struct<2> Param0)
{
	return func_343(Param0);
}

void func_256(struct<2> Param0, var uParam2)
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
	switch (func_253(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_345(func_344(Param0));
			iVar5 = func_346(iVar4);
			if (!func_347(iVar5, 0))
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

int func_257(int iParam0, int iParam1)
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
			func_31(&Var1, iVar18, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar19++;
	}
	return -1;
}

void func_258(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_348(&Var0);
}

void func_259(int iParam0)
{
	func_177(&(Local_303.f_18.f_160), iParam0);
}

void func_260(int iParam0)
{
	func_208(&(Local_303.f_18.f_160), iParam0);
}

int func_261(int iParam0)
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

int func_262(int iParam0)
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

void func_263(var uParam0, int iParam1, int iParam2)
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
		func_72(uParam0, iVar0);
		iVar0++;
	}
}

void func_264(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_265()
{
	return Local_303.f_2;
}

int func_266(int iParam0)
{
	if (!func_145(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

Vector3 func_267(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1005.419f, 394.8897f, 106.023f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1465.514f, -821.0334f, 50.2372f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1064.807f, -666.0024f, 72.54981f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1462.952f, -1929.859f, 48.4187f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4988.295f, -3902.346f, -0.03286f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2770.473f, -2936.506f, 64.84297f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1209.61f, -1812.165f, 61.23543f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1706.993f, -580.9286f, 149.93f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 803.0057f, -584.7925f, 79.32288f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1778.236f, -1731.359f, 48.27552f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1005.419f, 394.8897f, 106.023f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1465.514f, -821.0334f, 50.2372f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1064.807f, -666.0024f, 72.54981f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1462.952f, -1929.859f, 48.4187f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4988.295f, -3902.346f, -0.03286f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2770.473f, -2936.506f, 64.84297f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1209.61f, -1812.165f, 61.23543f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1706.993f, -580.9286f, 149.93f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 803.0057f, -584.7925f, 79.32288f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1778.236f, -1731.359f, 48.27552f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_268(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!func_215(iParam1))
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
	if (func_349(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(1054492269, vParam2, 1, 0, 1, 1));
	}
	else if (func_350(iParam1))
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

var func_269()
{
	return Local_303.f_3;
}

int func_270(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_215(iParam1))
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

Vector3 func_271(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_148(0), func_294(0));
				default:
					break;
			}
			break;
		case 2:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1000.194f, 416.5319f, 107.9176f;
						case 1:
							return 1007.829f, 394.7444f, 105.9673f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1459.162f, -816.478f, 50.8f;
						case 1:
							return 1464.491f, -818.6865f, 50.3422f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1067.848f, -660.8389f, 73.9091f;
						case 1:
							return -1080.563f, -694.8763f, 70.716f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1478.645f, -1927.927f, 50.5109f;
						case 1:
							return -1404.974f, -1974.068f, 43.4572f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4978.948f, -3935.828f, -1.20681f;
						case 1:
							return -4970.921f, -3904.763f, 0.23977f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2792.854f, -2917.176f, 64.91064f;
						case 1:
							return -2789.23f, -2916.685f, 64.88538f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1205.247f, -1835.006f, 60.02811f;
						case 1:
							return -1203.489f, -1834.47f, 60.01749f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1703.842f, -567.6793f, 151.3843f;
						case 1:
							return -1696.972f, -570.4977f, 150.1555f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 779.8277f, -555.053f, 81.8032f;
						case 1:
							return 792.2842f, -571.7909f, 76.54204f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1789.877f, -1720.11f, 47.22703f;
						case 1:
							return 1793.195f, -1721.64f, 46.91535f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1000.25f, 416.0489f, 107.922f;
						case 1:
							return 1007.829f, 394.7444f, 105.9673f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1457.417f, -815.7565f, 51.4422f;
						case 1:
							return 1464.491f, -818.6865f, 50.3422f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1069.886f, -700.0854f, 69.16559f;
						case 1:
							return -1080.563f, -694.8763f, 70.716f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1481.92f, -1931.187f, 50.5561f;
						case 1:
							return -1404.974f, -1974.068f, 43.4572f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4973.871f, -3908.567f, -0.00444f;
						case 1:
							return -4970.921f, -3904.763f, 0.23977f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2794.634f, -2913.186f, 64.5452f;
						case 1:
							return -2789.23f, -2916.685f, 64.88538f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1205.337f, -1834.095f, 60.10693f;
						case 1:
							return -1203.489f, -1834.47f, 60.01749f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1703.747f, -568.5468f, 151.2257f;
						case 1:
							return -1696.972f, -570.4977f, 150.1555f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 788.1982f, -572.1707f, 76.62916f;
						case 1:
							return 792.2842f, -571.7909f, 76.54204f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1791.243f, -1721.538f, 46.98846f;
						case 1:
							return 1793.195f, -1721.64f, 46.91535f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_272(int iParam0)
{
	switch (func_183())
	{
		case 0:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 14.07f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 2.27f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 14.07f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 2.27f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 185.2506f;
						case 1:
							return 78.3595f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 354.0873f;
						case 1:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 345.4393f;
						case 1:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 349.1927f;
						case 1:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 314.2285f;
						case 1:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 293.9746f;
						case 1:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 330.3398f;
						case 1:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 230.5268f;
						case 1:
							return -149.83f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 193.5557f;
						case 1:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 94.6824f;
						case 1:
							return -127.45f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 8.2937f;
						case 1:
							return 78.3595f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 267.2346f;
						case 1:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 138.5708f;
						case 1:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 331.738f;
						case 1:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 93.08f;
						case 1:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -17.49f;
						case 1:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 179.9f;
						case 1:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 14.07f;
						case 1:
							return -149.83f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 36.91f;
						case 1:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 2.27f;
						case 1:
							return -127.45f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

int func_273(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_215(iParam1))
	{
		return 0;
	}
	iVar0 = func_351(iParam1, vParam2, iParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

bool func_274(int iParam0, int iParam1)
{
	return func_144((Local_303.f_191.f_7[iParam0 /*11*/])->f_2, iParam1);
}

int func_275(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_303.f_15 };
	iVar7 = 0;
	iVar8 = func_289(iParam0);
	iVar9 = func_352(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_62[iParam0])))
		{
			iVar9 = func_352(iParam0);
			fVar0 = func_353(iParam0);
			if (!func_144((Local_303.f_191.f_7[iParam0 /*11*/])->f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_354(iParam0)) };
			}
			else
			{
				vVar1 = { func_354(iParam0) };
			}
			if (!func_273(Local_13.f_62[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_0x772A1969F649E902(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(&(Local_13.f_62[iParam0]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (iVar9 != 0)
					{
						PED::_SET_PED_BODY_COMPONENT(iVar7, iVar9);
						PED::_UPDATE_PED_VARIATION(iVar7, func_274(iParam0, 1), 1, 1, 1, 0);
					}
					else if (PED::_0x772A1969F649E902(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_355(iVar7, 1);
					}
					*bParam2 = 1;
					return 0;
				}
				else
				{
					*bParam1 = 1;
				}
			}
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_13.f_62[iParam0]))))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_276()
{
	return (func_103(64) || func_102(64, 255));
}

void func_277(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

bool func_278(int iParam0)
{
	return func_144(Local_303.f_18.f_159, iParam0);
}

void func_279(vector3 vParam0)
{
	if (!func_99(Local_303.f_13))
	{
		func_100(&(Local_303.f_13));
	}
	if (func_101(Local_303.f_13) < Global_1901929->f_230.f_64)
	{
		return;
	}
	func_356(Local_303.f_9, vParam0, 0, Local_303.f_12);
	func_123(&(Local_303.f_13));
}

void func_280()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar0 = func_149(0);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = Local_303.f_18.f_165;
	if (fVar3 < 45f || !func_328(5))
	{
		if (func_282(&(Local_303.f_18.f_54)))
		{
			if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 0))
			{
				if (func_327(&(Local_303.f_18.f_54)) > 4000 || !func_328(5))
				{
					if (!func_328(0))
					{
						if (func_330(func_149(0), iVar2, 0, 291934926, 0))
						{
							func_300(&(Local_303.f_18.f_54));
						}
					}
					else if (!func_328(5))
					{
						if (func_317(iVar0, 2, 0))
						{
							if (func_330(iVar0, iVar2, 5, 1744022339, 1))
							{
								func_300(&(Local_303.f_18.f_54));
							}
						}
					}
					else if (!func_328(6))
					{
						if (func_317(iVar0, 3, 0))
						{
							if (func_330(iVar0, iVar2, 6, 1744022339, 1))
							{
								func_300(&(Local_303.f_18.f_54));
							}
						}
					}
					else if (!func_328(7))
					{
						if (func_317(iVar0, 3, 0))
						{
							if (func_330(iVar0, iVar2, 7, 1744022339, 1))
							{
								func_300(&(Local_303.f_18.f_54));
							}
						}
					}
					else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) <= 20f)
					{
						if (!func_328(34))
						{
							if (func_330(iVar0, iVar2, 34, 1744022339, 1))
							{
								func_283(&(Local_303.f_18.f_54));
							}
						}
					}
				}
			}
		}
		else
		{
			func_300(&(Local_303.f_18.f_54));
		}
	}
	if (func_183() == 2 || func_183() == 3)
	{
		iVar1 = func_149(1);
		fVar3 = Local_303.f_18.f_166;
		if (fVar3 < 45f)
		{
			if (func_282(&(Local_303.f_18.f_57)))
			{
				if (func_327(&(Local_303.f_18.f_57)) > 4000 || (!func_328(2) && func_327(&(Local_303.f_18.f_57)) > 1000))
				{
					if (!AUDIO::_0x54B187F111D9C6F8(iVar1, 1))
					{
						if (!func_278(1))
						{
							if (!func_328(1))
							{
								if (func_330(iVar1, iVar2, 1, 291934926, 0))
								{
									func_300(&(Local_303.f_18.f_57));
								}
							}
						}
						else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(func_148(0), false, false), func_319(0)) < 15f)
						{
							if (!func_328(17))
							{
								func_330(iVar1, iVar2, 17, 1744022339, 1);
							}
						}
						else if (!func_328(2))
						{
							if (func_330(iVar1, iVar2, 2, 1744022339, 1))
							{
								func_300(&(Local_303.f_18.f_57));
							}
						}
						else if (!func_328(3))
						{
							if (func_330(iVar1, iVar2, 3, 1744022339, 1))
							{
								func_300(&(Local_303.f_18.f_57));
							}
						}
						else if (!func_328(4))
						{
							if (func_330(iVar1, iVar2, 4, 1744022339, 1))
							{
								func_283(&(Local_303.f_18.f_57));
							}
						}
					}
				}
			}
			else
			{
				func_300(&(Local_303.f_18.f_57));
			}
		}
	}
}

int func_281(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_149(iParam0);
	if (!func_278(1))
	{
		if (func_357(iVar0, func_271(iParam0), fParam2, 1, 1))
		{
			if (func_313(iVar0, 1227113341, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iParam1, -1, 0.01f, 3f, 0.1f, 0);
			}
		}
		else if (bParam4 || func_317(iVar0, iParam3, 0))
		{
			func_316(1);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_282(var uParam0)
{
	return func_358(*uParam0, 1);
}

void func_283(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_284(int iParam0)
{
	return func_144(Local_303.f_18.f_158, iParam0);
}

int func_285(int iParam0, int iParam1)
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

void func_286(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_287(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_303.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_303)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_303.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_303.f_3)
	{
		return 0;
	}
	return 1;
}

void func_288(int iParam0)
{
	int iVar0;

	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case 1146780397:
			func_359(iParam0->f_11);
			break;
	}
}

int func_289(int iParam0)
{
	return (Local_303.f_191.f_7[iParam0 /*11*/])->f_3;
}

void func_290(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_303.f_191.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_62[iParam0])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_62[iParam0]));
			Local_303.f_191.f_7[iParam0 /*11*/] = iVar1;
			(Local_78[iParam1 /*7*/])->f_2.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				EVENT::_0xBB1E41DD3D3C6250(iVar1, "MpRandomEvent", 1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_360(iVar1, 1f, 0);
				}
				sVar0 = func_361(iParam0);
				if (!MISC::_0x375F5870A7B8BEC1(sVar0))
				{
					func_362(iVar1, sVar0, 1);
				}
				MISC::SET_BIT(&(Local_303.f_191.f_5), iParam0);
				if (bParam2)
				{
					func_363(iParam0);
				}
			}
		}
	}
}

void func_291(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_364(iParam0);
	iVar1 = func_149(iParam0);
	PED::_SET_PED_BODY_COMPONENT(iVar1, iVar0);
	PED::_UPDATE_PED_VARIATION(iVar1, false, 1, 1, 1, 0);
}

char* func_292(int iParam0)
{
	switch (func_183())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE2";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE1";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE4";
				case 1:
					return "RE005_MALE5";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE4";
				case 1:
					return "RE005_FEMALE6";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_293(int iParam0, char* sParam1)
{
	int iVar0;

	iVar0 = func_149(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_365(&(Local_303.f_18.f_60), iVar0, sParam1, 1);
	}
}

Vector3 func_294(int iParam0)
{
	int iVar0;

	iVar0 = func_216(iParam0);
	switch (iVar0)
	{
		case joaat("wagon05x"):
			return 0.1f, -2.65f, 0f;
		case joaat("cart03"):
			return 0f, -2.7f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

struct<2> func_295(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_366(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_324(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_296()
{
	Local_303.f_191.f_6 = 0;
	Local_303.f_191.f_2 = 0;
	Local_303.f_191.f_1 = -1;
}

void func_297(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_303.f_191.f_2 = (Local_303.f_191.f_2 || (Local_78[iParam0 /*7*/])->f_2);
		Local_303.f_191.f_1 = (Local_303.f_191.f_1 && (Local_78[iParam0 /*7*/])->f_2);
		Local_303.f_191.f_6 = (Local_303.f_191.f_6 || (Local_78[iParam0 /*7*/])->f_2.f_1);
	}
}

int func_298(int iParam0)
{
	return iParam0;
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
	(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/])->f_2.f_2[iParam2] = fVar0;
	if (fVar0 > (Local_303.f_191.f_7[iParam2 /*11*/])->f_9)
	{
		return 0;
	}
	return 1;
}

void func_300(var uParam0)
{
	func_367(uParam0, 0f);
}

int func_301(var uParam0, float fParam1)
{
	if (!func_282(uParam0))
	{
		return 0;
	}
	if (func_368(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0)
{
	return 1;
}

void func_303(int iParam0, int iParam1)
{
	func_208(&((Local_303.f_191.f_7[iParam0 /*11*/])->f_2), iParam1);
}

bool func_304(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_144((Local_78[iParam1 /*7*/])->f_2, iParam0);
}

void func_305(int iParam0)
{
	func_177(&((Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/])->f_2), iParam0);
}

void func_306(int iParam0)
{
	func_208(&((Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/])->f_2), iParam0);
}

int func_307(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_369(uParam2, 1, iVar0);
	}
	if (!Global_1939178->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_370(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_371(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_372(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_373(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_374(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_20 && func_375(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_371(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_376(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_377(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_371(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_378(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_371(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939178->f_23) < 300)
			{
				if (func_379(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_379(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_371(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_380(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939178->f_19 || uParam2->f_12 < 20f)
			{
				if (func_381(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_382(uParam2, 4000))
				{
					if ((func_383(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_384(uParam2, iParam0)) && func_385(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_371(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_383(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_384(uParam2, iParam0)) && func_385(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1939178->f_34 == 0)
			{
				if (Global_1939178->f_35 != 0)
				{
					if (func_386(iParam0, Global_1939178->f_35))
					{
						func_387();
						*uParam3 = 2;
						func_371(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_388(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_389() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_387();
						*uParam3 = 2;
						func_371(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_390())
				{
					if (func_386(iParam0, Global_1939178->f_36))
					{
						func_387();
						*uParam3 = 2;
						func_371(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_391(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_371(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_393(func_392(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_394(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*uParam3 = 1048576;
						func_371(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_395(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_396(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_371(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_397(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_398(uParam2, 4000))
				{
					if (func_399(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_371(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_400(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_371(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_401(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_371(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_308(bool bParam0)
{
	int iVar0;

	if (!func_102(64, 255))
	{
		iVar0 = func_257(Local_303.f_1, Local_303.f_2);
		func_402(iVar0);
		if (!func_102(1024, 255))
		{
			func_403(Local_303.f_1);
			func_122(1024);
		}
		func_404(iVar0);
		if (bParam0)
		{
			func_405(Local_303.f_1, Local_303.f_4);
		}
		func_122(64);
	}
}

void func_309()
{
	int iVar0;
	int iVar1;

	iVar0 = func_149(0);
	iVar1 = func_149(1);
	if (!func_321(4194304, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_342(iVar0, PLAYER::PLAYER_PED_ID()))
				{
					func_339(151445061, 1, 0);
				}
				func_316(4194304);
			}
		}
		else
		{
			func_316(4194304);
		}
	}
	if (!func_321(8388608, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_342(iVar1, PLAYER::PLAYER_PED_ID()))
				{
					func_339(151445061, 1, 0);
				}
				func_316(8388608);
			}
		}
		else
		{
			func_316(8388608);
		}
	}
}

void func_310(int iParam0)
{
	struct<2> Var0;
	struct<6> Var31;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	Var31.f_3 = 255;
	Var31.f_4 = -1;
	Var31.f_5 = 623901053;
	if (!func_406(Var0.f_1, &Var31))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
	{
		if (NETWORK::NET_TO_ENT(&(Local_13.f_7.f_4[0])) == Var0)
		{
			if (Var31.f_3 == PLAYER::PLAYER_ID())
			{
				if (!func_321(1048576, 255))
				{
					func_316(1048576);
				}
			}
		}
	}
	else if (func_407(Var0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(func_341(func_148(0), 4)) && func_341(func_148(0), 4) == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0)) || (ENTITY::DOES_ENTITY_EXIST(func_341(func_148(0), 5)) && func_341(func_148(0), 5) == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0)))
		{
			if (Var31.f_3 == PLAYER::PLAYER_ID())
			{
				if (!func_321(2097152, 255))
				{
					func_316(2097152);
				}
			}
		}
	}
}

void func_311()
{
	if (!func_408(255))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_303.f_18.f_161))
	{
		Local_303.f_18.f_161 = MAP::_BLIP_ADD_FOR_COORD(1260140857, func_267(0));
	}
}

void func_312()
{
	int iVar0;

	if (!func_102(32, 255))
	{
		func_409(Local_303.f_1, Local_303.f_3);
		if (!func_102(1024, 255))
		{
			func_403(Local_303.f_1);
			func_122(1024);
		}
		iVar0 = func_257(Local_303.f_1, Local_303.f_2);
		func_402(iVar0);
		func_404(iVar0);
		func_117(2);
		func_410(Local_303.f_9);
		func_411(Local_303.f_1);
		func_122(32);
	}
}

int func_313(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (!bParam3 && func_207(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	return 1;
}

char* func_314(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "base_b_con01";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
		case 2:
			switch (iParam0)
			{
				case 0:
					return "base";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
		case 3:
			switch (iParam0)
			{
				case 0:
					return "idle_a";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
	}
	return "";
}

void func_315(int iParam0, int iParam1)
{
	if (!func_408(255) || func_412((Local_303.f_18.f_10[iParam0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 150f)
	{
		func_151(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_303.f_18.f_10[iParam0 /*2*/])))
	{
		Local_303.f_18.f_10[iParam0 /*2*/] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, func_148(iParam0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_303.f_18.f_10[iParam0 /*2*/]), "NB_RUNAWAY_WAGON_WAGON_BLIP");
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_303.f_18.f_10[iParam0 /*2*/]), 942020339);
	}
}

void func_316(int iParam0)
{
	func_177(&((Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/])->f_1), iParam0);
}

int func_317(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_218(iParam1), func_314(iParam1), 1))
	{
		if (func_313(iParam0, -2017877118, 1, 1))
		{
			TASK::TASK_PLAY_ANIM(iParam0, func_218(iParam1), func_314(iParam1), 8f, -1056964608, -1, iParam2, 0, 0, 0, 0, 0, 0);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_318(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_148(iParam0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 1, 1))
	{
		if (((bParam1 || func_357(iVar0, func_319(0), 5f, 1, 1)) || (ENTITY::GET_ENTITY_SPEED(iVar0) <= 0f && VEHICLE::_0x2963B5C1637E8A27(iVar0) == 0)) || (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && ENTITY::_0x6D58167F62238284(iVar0) > 1300f))
		{
			VEHICLE::_0xC372B6A88F6E4AD8(iVar0, 0, 100f);
			VEHICLE::_0xC372B6A88F6E4AD8(iVar0, 1, 100f);
			VEHICLE::_0xC372B6A88F6E4AD8(iVar0, 4, 100f);
			VEHICLE::_0xC372B6A88F6E4AD8(iVar0, 5, 100f);
		}
	}
	else
	{
		if (func_321(2048, 255))
		{
			_NAMESPACE71::_0x2F901291EF177B02(Local_303.f_18.f_163, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_319(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 821.1597f, 399.2163f, 115.4505f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1518.894f, -918.9427f, 46.80691f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1156.839f, -815.8845f, 55.74f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1340.115f, -2030.458f, 40.5f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -5173.292f, -4038.162f, -3.71893f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2951.436f, -2963.278f, 64.43025f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1089.897f, -1862.488f, 54.81799f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1633.095f, -568.5085f, 136.6335f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 673.0834f, -555.8438f, 72.57526f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1883.51f, -1727.298f, 41.46875f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 821.1113f, 398.5637f, 115.5872f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1520.362f, -922.1479f, 43.6722f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1156.839f, -815.8845f, 55.74f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1340.115f, -2030.458f, 40.5f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -5173.292f, -4038.162f, -3.71893f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2951.436f, -2963.278f, 64.43025f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1089.897f, -1862.488f, 54.81799f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1633.095f, -568.5085f, 136.6335f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 673.0834f, -555.8438f, 72.57526f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1883.51f, -1727.298f, 41.46875f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_320()
{
	switch (func_183())
	{
		case 0:
			return 8f;
		case 1:
			return 8f;
		case 2:
			return 8f;
		case 3:
			return 8f;
		default:
			break;
	}
	return 3f;
}

int func_321(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (func_144((Local_78[iParam1 /*7*/])->f_1, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_322()
{
	if (!func_321(524288, 255))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(func_148(0), true, false)) <= 15f)
		{
			func_259(4);
		}
		func_413();
		func_316(524288);
	}
}

void func_323(int iParam0, int iParam1)
{
	char* sVar0;

	if (!func_408(255) || func_412((Local_303.f_18.f_1[iParam0 /*4*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 150f)
	{
		func_150(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_303.f_18.f_1[iParam0 /*4*/])))
	{
		Local_303.f_18.f_1[iParam0 /*4*/] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, func_149(iParam0));
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "NB_RUNAWAY_WAGON_DRIVER_BLIP";
				break;
			case 1:
				sVar0 = "NB_RUNAWAY_WAGON_PASSENGER_BLIP";
				break;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_303.f_18.f_1[iParam0 /*4*/]), sVar0);
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_303.f_18.f_1[iParam0 /*4*/]), 942020339);
	}
}

struct<2> func_324(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_325(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

var func_326(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_327(var uParam0)
{
	if (!func_282(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_414(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_389() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_328(int iParam0)
{
	return func_415(&(Local_303.f_18.f_50), iParam0, 2);
}

bool func_329(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	func_416(iParam0, iParam2);
	return 1;
}

void func_331(var uParam0, bool bParam1)
{
	if (bParam1 || !func_282(uParam0))
	{
		func_300(uParam0);
	}
}

void func_332()
{
	if (((func_278(16) && !func_278(4096)) && ENTITY::DOES_ENTITY_EXIST(func_149(1))) && !ENTITY::IS_ENTITY_DEAD(func_149(1)))
	{
		if (func_282(&(Local_303.f_18.f_170)))
		{
			if (func_327(&(Local_303.f_18.f_170)) >= 15000 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(func_149(1), true, false)) < 20f)
			{
				if (!func_328(14))
				{
					func_330(func_149(1), PLAYER::PLAYER_PED_ID(), 14, 291934926, 0);
					func_300(&(Local_303.f_18.f_170));
				}
				else
				{
					func_316(4096);
				}
			}
		}
	}
}

void func_333(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_334(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_335()
{
	if (!func_146(2))
	{
		if (func_146(4))
		{
			func_339(-326224139, 0, 0);
		}
		func_417();
		func_259(2);
	}
}

int func_336()
{
	if (!func_321(32, 255) && func_146(4))
	{
		func_418(-419165566, 0, 255, 0, 0);
		func_316(32);
		func_419();
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_337(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

void func_338(int iParam0)
{
	func_208(&((Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/])->f_1), iParam0);
}

void func_339(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_420())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_421(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_421(iParam0, 1) /*4*/])->f_2++;
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
	func_422(&Var0, uVar7);
}

int func_340(var uParam0)
{
	return uParam0->f_10;
}

int func_341(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	return iVar0;
}

int func_342(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_343(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_423(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_344(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_423(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_345(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_164(&Var1, uParam0))
	{
		iVar0 = ((func_424() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_346(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_347(int iParam0, int iParam1)
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

void func_348(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 26, &(Global_1051202->f_16[15]));
	func_425(uParam0, uParam0->f_1);
}

int func_349(int iParam0)
{
	if ((iParam0 == joaat("handcart") || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return 1;
	}
	return 0;
}

bool func_350(int iParam0)
{
	return iParam0 == -1005911451;
}

int func_351(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

int func_352(int iParam0)
{
	return (Local_303.f_191.f_7[iParam0 /*11*/])->f_4;
}

float func_353(int iParam0)
{
	return (Local_303.f_191.f_7[iParam0 /*11*/])->f_5;
}

Vector3 func_354(int iParam0)
{
	return (Local_303.f_191.f_7[iParam0 /*11*/])->f_6;
}

void func_355(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, 1, 1, 1, 0);
	}
}

void func_356(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	struct<21> Var0;

	if (func_179(vParam2))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_20 = 255;
	Var0.f_5 = { Param0 };
	Var0.f_17 = { vParam2 };
	Var0.f_15 = uParam6;
	Var0.f_16 = iParam5;
	Var0.f_4 = 0;
	func_427(&Var0, func_426(0, 8));
}

int func_357(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_428(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

bool func_358(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_359(int iParam0)
{
	int iVar0;

	if (func_415(&(Local_303.f_18.f_50), iParam0, 2))
	{
		return;
	}
	iVar0 = func_429(iParam0);
	if ((Local_303.f_18.f_1[iVar0 /*4*/])->f_3 != -1 && func_431(func_430((Local_303.f_18.f_1[0 /*4*/])->f_3)))
	{
		return;
	}
	func_432(iParam0);
	if (func_434(&(Local_303.f_18.f_60), func_433(func_430(iParam0)), 0, -1, 0, 0))
	{
		func_435(&(Local_303.f_18.f_50), iParam0, 2);
	}
}

void func_360(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_436(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_361(int iParam0)
{
	return (Local_303.f_191.f_7[iParam0 /*11*/])->f_10;
}

void func_362(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
		}
	}
}

void func_363(int iParam0)
{
}

int func_364(int iParam0)
{
	switch (func_183())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2051247205;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -479904964;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -509232723;
				case 1:
					return 149367980;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -490827428;
				case 1:
					return -1747475060;
				default:
					break;
			}
			break;
	}
	return 41788943;
}

void func_365(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_437(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -88129556;
		case 2:
			return 1285278823;
		case 14:
			return 1990184729;
		case 4:
			return 1374143159;
		case 5:
			return 1983508419;
		case 6:
			return -174599426;
		case 7:
			return -1565506973;
		case 8:
			return 1332057400;
		case 9:
			return 725557162;
		case 10:
			return 9860771;
		case 11:
			return -189356331;
		case 12:
			return -1552492203;
		case 13:
			return 1780085540;
		case 3:
			return 1067005312;
		case 15:
			return -765620960;
		default:
			break;
	}
	return 0;
}

void func_367(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_438() - fParam1);
	func_439(uParam0, 1);
	func_440(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_368(var uParam0)
{
	if (!func_282(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_414(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_438() - uParam0->f_1);
}

void func_369(var uParam0, bool bParam1, int iParam2)
{
	func_441(iParam2);
	if (Global_1572887->f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		if (Global_1939178->f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1275573->f_11)
		{
			return;
		}
		if (Global_1275573->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		uParam0->f_13 = Global_1939178->f_38;
	}
	else
	{
		uParam0->f_13 = func_442(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_34))
						{
							func_177(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_443(1, 1))
						{
							func_177(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_443(1, 1) || *uParam0 & 8192 != 0))
				{
					func_208(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_444(uParam0))
			{
				uParam0->f_15 = func_389();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_389() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_445(uParam0);
}

int func_370(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case joaat("event_shocking_dead_body"):
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1939178->f_27)
			{
				return 0;
			}
			if (iVar2 == Global_1939178->f_26)
			{
				return 0;
			}
			if (!func_446(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_447(iParam0, iVar2) <= func_448(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_371(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_449(iParam2, 1, 1, 1, 0))
	{
		func_177(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_450(uParam1, 1);
	func_451();
}

int func_372(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_452(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_453(uParam1);
			if (func_454(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_455(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_450(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_456(uParam1))
						{
							func_450(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_373(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_457(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_453(uParam2);
		if (func_454(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_455(uParam2)
				{
					func_450(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_374(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1939178->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_446(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_455(uParam1)
		{
			fVar3 = func_453(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_375(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_458(bParam1, bParam2, bParam3);
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

int func_376(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_389();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_377(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_459(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) || Global_1939178->f_40 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && WEAPON::_0xEA522F991E120D45(Global_1939178->f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) || Global_1939178->f_40 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_385(uParam2, iParam1))
			{
				func_450(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_378(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_460(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_385(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_450(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_379(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_461(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_450(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_450(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_462(iParam1, vVar0, vVar4))
					{
						func_450(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_450(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_462(iParam1, vVar0, vVar7))
					{
						func_450(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_380(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1939178->f_33)
	{
		if (!func_446(iParam0, uParam1, &(Global_1939178->f_28[iVar0])) || iParam0 == &Global_1939178->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_463(&(Global_1939178->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false), vVar9);
			if (func_464(&(Global_1939178->f_28[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1939178->f_28[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1939178->f_28[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_465(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_466(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_467(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_381(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("event_shocking_property_damage"):
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_382(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_389();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_468(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_469(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_384(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_385(var uParam0, int iParam1)
{
	if (func_470(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_GET_LASSOED_ENTITY(Global_34) != 0)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_34, iParam1))
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_412(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_387()
{
}

int func_388(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_471(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_389();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_472(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_389();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_389()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_390()
{
	if (Global_1939178->f_36 == 0)
	{
		return 0;
	}
	if (Global_1939178->f_36 == Global_1939178->f_34)
	{
		return 0;
	}
	if (Global_1939178->f_37 <= 0)
	{
		return 0;
	}
	if ((func_389() - Global_1939178->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_391(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_448(uParam0);
	if (uParam0->f_12 > func_473(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_474(iParam1);
	iVar1 = func_475(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_392(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_393(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_476(iParam0, vVar0, iParam2);
}

int func_395(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_477(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_396(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1939178->f_18)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_478(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case joaat("event_shocking_seen_car_stolen"):
		case 1201762715:
			if (func_479(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_34)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!func_480(uParam1, iParam0))
					{
						if (func_472(iVar4, Global_35, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_397(int iParam0, var uParam1)
{
	if (!func_481(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_398(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_389();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_399(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_400(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_389();
	}
	else if (func_389() - uParam1->f_4) > func_482(uParam1)
	{
		return func_483(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_401(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_34 == iVar1 || Global_1939178->f_34 == iVar1)
	{
		return 1;
	}
	return 0;
}

void func_402(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_99(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_484(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_100((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_485(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_485(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_485(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_485(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_403(int iParam0)
{
	func_486();
	func_487(iParam0);
}

void func_404(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_348(&Var0);
}

void func_405(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_488(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_489(iParam1);
	func_490(iVar0, iParam0);
}

int func_406(int iParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = 623901053;
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			*uParam1 = 1;
		}
		else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (PED::IS_PED_HUMAN(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		*uParam1 = 4;
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return 0;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uParam1->f_2);
			uParam1->f_4 = PLAYER::GET_PLAYER_TEAM(uParam1->f_3);
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
	}
	return 1;
}

bool func_407(int iParam0)
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
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_408(int iParam0)
{
	return func_102(8, iParam0);
}

void func_409(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_295(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_93(&Var0, 4) && func_491(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_410(struct<2> Param0)
{
	struct<32> Var0;

	if (func_255(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_255(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_255(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_492(Param0, &Var0))
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

void func_411(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_295(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

float func_412(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_413()
{
	if (!func_62(2))
	{
		return;
	}
	func_117(8);
}

bool func_414(var uParam0)
{
	return func_358(*uParam0, 2);
}

bool func_415(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

void func_416(int iParam0, int iParam1)
{
	var uVar0;
	struct<15> Var1;

	if (func_415(&(Local_303.f_18.f_50), iParam1, 2))
	{
		return;
	}
	if (AUDIO::_0x54B187F111D9C6F8(iParam0, 1))
	{
		return;
	}
	uVar0 = func_493(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 30f, 30f, 20f, 665633627, 0, 8);
	Var1 = { func_494(1146780397) };
	Var1.f_11 = iParam1;
	func_495(&Var1, uVar0);
}

void func_417()
{
	if (!func_62(8))
	{
		return;
	}
	func_117(16);
}

int func_418(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_496(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_419()
{
	if (!func_146(2))
	{
		func_339(-326224139, 0, 0);
		func_417();
		func_259(2);
	}
}

int func_420()
{
	if (func_28() != 0)
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

int func_421(int iParam0, int iParam1)
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

void func_422(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 7, &uParam1);
}

int func_423(struct<2> Param0, var uParam2)
{
	if (!func_37(Param0))
	{
		return 0;
	}
	func_497(uParam2);
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

int func_424()
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

void func_425(var uParam0, var uParam1)
{
}

var func_426(int iParam0, int iParam1)
{
	return func_493(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_427(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 5;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 21, 30, &uParam1);
}

float func_428(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 37:
		case 39:
		case 40:
		case 41:
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 35:
		case 36:
		case 38:
			return 1;
	}
	return 2;
}

char* func_430(int iParam0)
{
	switch (func_183())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "ORERW_CTS_WSD1";
				case 5:
					return "ORERW_CTS_HLP1";
				case 6:
					return "ORERW_CTS_HLP2";
				case 7:
					return "ORERW_CTS_HLP3";
				case 8:
					return "ORERW_CTS_THK1";
				case 9:
					return "ORERW_CTS_BYE1";
				case 10:
					return "ORERW_CTS_STAY";
				case 11:
					return "ORERW_CTS_FAIL";
				case 12:
					return "ORERW_CTS_BYEF";
				case 13:
					return "ORERW_CTS_FOLW1";
				case 28:
					return "ORERW_CTS_AGGD";
				case 29:
					return "ORERW_CTS_AGGW";
				case 30:
					return "ORERW_CTS_DESW";
				case 32:
					return "ORERW_CTS_DESH";
				case 31:
					return "ORERW_CTS_AGGH";
				case 33:
					return "ORERW_CTS_TAKE";
				case 34:
					return "ORERW_CTS_STAY";
				case 37:
					return "ORERW_CTS_HOP";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "ORERW_CTL_WSD1";
				case 5:
					return "ORERW_CTL_HLP1";
				case 6:
					return "ORERW_CTL_HLP2";
				case 7:
					return "ORERW_CTL_HLP3";
				case 8:
					return "ORERW_CTL_THK1";
				case 9:
					return "ORERW_CTL_BYE1";
				case 10:
					return "ORERW_CTL_STAY";
				case 11:
					return "ORERW_CTL_FAIL";
				case 12:
					return "ORERW_CTL_BYEF";
				case 13:
					return "ORERW_CTL_FOLW1";
				case 28:
					return "ORERW_CTL_AGGD";
				case 29:
					return "ORERW_CTL_AGGW";
				case 30:
					return "ORERW_CTL_DESW";
				case 32:
					return "ORERW_CTL_DESH";
				case 31:
					return "ORERW_CTL_AGGH";
				case 33:
					return "ORERW_CTL_TAKE";
				case 34:
					return "ORERW_CTL_STAY";
				case 37:
					return "ORERW_CTL_HOP";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return "ORERW_CHS_WSP";
				case 0:
					return "ORERW_CHS_WSD";
				case 5:
					return "ORERW_CHS_HLP1";
				case 6:
					return "ORERW_CHS_HLP2";
				case 7:
					return "ORERW_CHS_HLP3";
				case 2:
					return "ORERW_CHS_HPP1";
				case 3:
					return "ORERW_CHS_HPP2";
				case 4:
					return "ORERW_CHS_HPP3";
				case 15:
					return "ORERW_CHS_ONW";
				case 16:
					return "ORERW_CHS_ONWB";
				case 17:
					return "ORERW_CHS_DEAD";
				case 36:
					return "ORERW_CHS_CRSH";
				case 41:
					return "ORERW_CHS_CRSB";
				case 13:
					return "ORERW_CHS_FOLW1";
				case 14:
					return "ORERW_CHS_FOLP";
				case 18:
					return "ORERW_CHS_BCK1";
				case 19:
					return "ORERW_CHS_BCK2";
				case 20:
					return "ORERW_CHS_BCK3";
				case 21:
					return "ORERW_CHS_BCK4";
				case 22:
					return "ORERW_CHS_BCK5";
				case 23:
					return "ORERW_CHS_BCK6";
				case 24:
					return "ORERW_CHS_BCK7";
				case 25:
					return "ORERW_CHS_BCK8";
				case 8:
					return "ORERW_CHS_THK1";
				case 26:
					return "ORERW_CHS_SCLD";
				case 33:
					return "ORERW_CHS_TAKE";
				case 35:
					return "ORERW_CHS_BNTP1";
				case 31:
					return "ORERW_CHS_AGGH";
				case 9:
					return "ORERW_CHS_BYE1";
				case 11:
					return "ORERW_CHS_FAIL";
				case 12:
					return "ORERW_CHS_BYEF";
				case 28:
					return "ORERW_CHS_AGGD";
				case 29:
					return "ORERW_CHS_AGGW";
				case 30:
					return "ORERW_CHS_DESW";
				case 32:
					return "ORERW_CHS_DESH";
				case 37:
					return "ORERW_CHS_HOPD";
				case 38:
					return "ORERW_CHS_HOPP";
				case 39:
					return "ORERW_CHS_AGGP";
				case 40:
					return "ORERW_CHS_AGPW";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					return "ORERW_CHL_WSP";
				case 0:
					return "ORERW_CHL_WSD";
				case 5:
					return "ORERW_CHL_HLP1";
				case 6:
					return "ORERW_CHL_HLP2";
				case 7:
					return "ORERW_CHL_HLP3";
				case 2:
					return "ORERW_CHL_HPP1";
				case 3:
					return "ORERW_CHL_HPP2";
				case 4:
					return "ORERW_CHL_HPP3";
				case 15:
					return "ORERW_CHL_ONW";
				case 16:
					return "ORERW_CHL_ONWB";
				case 17:
					return "ORERW_CHL_DEAD";
				case 36:
					return "ORERW_CHL_CRSH";
				case 41:
					return "ORERW_CHL_CRSB";
				case 13:
					return "ORERW_CHL_FOLW1";
				case 14:
					return "ORERW_CHL_FOLP";
				case 18:
					return "ORERW_CHL_BCK1";
				case 19:
					return "ORERW_CHL_BCK2";
				case 20:
					return "ORERW_CHL_BCK3";
				case 21:
					return "ORERW_CHL_BCK4";
				case 22:
					return "ORERW_CHL_BCK5";
				case 23:
					return "ORERW_CHL_BCK6";
				case 24:
					return "ORERW_CHL_BCK7";
				case 25:
					return "ORERW_CHL_BCK8";
				case 8:
					return "ORERW_CHL_THK1";
				case 26:
					return "ORERW_CHL_SCLD";
				case 33:
					return "ORERW_CHL_TAKE";
				case 35:
					return "ORERW_CHL_BNTP1";
				case 31:
					return "ORERW_CHL_AGGH";
				case 9:
					return "ORERW_CHL_BYE1";
				case 11:
					return "ORERW_CHK_FAIL";
				case 12:
					return "ORERW_CHL_BYEF";
				case 28:
					return "ORERW_CHL_AGGD";
				case 29:
					return "ORERW_CHL_AGGW";
				case 30:
					return "ORERW_CHL_DESW";
				case 32:
					return "ORERW_CHL_DESH";
				case 37:
					return "ORERW_CHL_HOPD";
				case 38:
					return "ORERW_CHL_HOPP";
				case 39:
					return "ORERW_CHL_AGGP";
				case 40:
					return "ORERW_CHL_AGPW";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_431(char[4] cParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(cParam0) && AUDIO::_0x1ECC76792F661CF5(cParam0))
	{
		return 1;
	}
	return 0;
}

void func_432(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 37:
		case 39:
		case 40:
		case 41:
			func_365(&(Local_303.f_18.f_60), (Local_303.f_18.f_1[0 /*4*/])->f_1, func_292(0), 0);
			(Local_303.f_18.f_1[0 /*4*/])->f_3 = iParam0;
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 36:
		case 38:
			func_365(&(Local_303.f_18.f_60), (Local_303.f_18.f_1[1 /*4*/])->f_1, func_292(1), 0);
			(Local_303.f_18.f_1[1 /*4*/])->f_3 = iParam0;
			break;
		case 26:
		case 35:
			func_365(&(Local_303.f_18.f_60), (Local_303.f_18.f_1[0 /*4*/])->f_1, func_292(0), 0);
			func_365(&(Local_303.f_18.f_60), (Local_303.f_18.f_1[1 /*4*/])->f_1, func_292(1), 0);
			(Local_303.f_18.f_1[0 /*4*/])->f_3 = iParam0;
			(Local_303.f_18.f_1[1 /*4*/])->f_3 = iParam0;
			break;
	}
}

Vector3 func_433(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_434(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_498(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_435(var uParam0, int iParam1, int iParam2)
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

float func_436(float fParam0, float fParam1, float fParam2)
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

bool func_437(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

float func_438()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_439(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_440(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_441(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1939178->f_32);
	Global_1939178->f_21 = func_499();
	if (Global_1939178->f_21)
	{
		Global_1939178->f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_34))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1939178->f_38;
			}
			Global_1939178->f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_500(&(Global_1939178->f_28), &(Global_1939178->f_33));
			Global_1939178->f_32 = iParam0;
			break;
		case 1:
			Global_1939178->f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1939178->f_24)
			{
				if (bVar1 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38))
				{
					Global_1939178->f_24 = PED::_GET_LASSOED_ENTITY(Global_34) != 0;
				}
				if (Global_1939178->f_40 == 1151374672)
				{
					Global_1939178->f_24 = WEAPON::_0x46D42883E873C1D7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1939178->f_40);
			if (bVar3 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_40))
			{
				Global_1939178->f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40))
				{
					Global_1939178->f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 3f;
				}
				else
				{
					Global_1939178->f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 1f;
				}
				if (Global_1939178->f_19)
				{
					Global_1939178->f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1939178->f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_442(int iParam0)
{
	return &(Global_1099294->f_372[iParam0 /*3*/]);
}

int func_443(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_501(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_444(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939178->f_34;
	if (func_28() == -1)
	{
		if (Global_1939178->f_34 == 0)
		{
			iVar0 = func_502(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_34) || !&Global_1954472->f_1616[4])
	{
		iVar0 = func_502(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_475(iVar0) == -1)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_445(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_503(uParam0);
	}
}

int func_446(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_475(iParam2);
	}
	else
	{
		iVar1 = func_474(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_475(iParam0);
	}
	else
	{
		iVar0 = func_474(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_144(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_447(int iParam0, int iParam1)
{
	return func_412(iParam0, iParam1, 1, 1);
}

float func_448(var uParam0)
{
	return uParam0->f_28;
}

int func_449(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_450(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 134217728);
	}
	else
	{
		func_208(uParam0, 134217728);
	}
}

void func_451()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_452(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
	if ((WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38) || 1151374672 == Global_1939178->f_38) && Global_1939178->f_21)
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
		if (PED::_0xB676EFDA03DADA52(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_412(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_504(iVar0, 0)))
		{
			if (func_505(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_453(var uParam0)
{
	return uParam0->f_17;
}

int func_454(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_144(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_34, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_455(var uParam0)
{
	return uParam0->f_18;
}

int func_456(var uParam0)
{
	return uParam0->f_19;
}

int func_457(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

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
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_504(iVar0, 0)))
		{
			if (func_506(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_458(bool bParam0, bool bParam1, bool bParam2)
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

float func_459(var uParam0)
{
	return uParam0->f_24;
}

int func_460(var uParam0)
{
	return uParam0->f_22;
}

int func_461(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_462(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_507(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_463(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1939178->f_38 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1939178->f_40) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1939178->f_40))
			{
				return 1;
			}
		}
	}
	if (func_508(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_465(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_509(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_466(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_509(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_467(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_510(uParam0);
	if (func_509(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1939178->f_28[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1939178->f_28[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_468(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_469(int iParam0, int iParam1)
{
	if (PED::_GET_LASSOED_ENTITY(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_511(iParam0, 1, 0, 0)) && !func_511(iParam0, 1, 0, 0) == 1151374672)
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_470(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_471(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_472(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_472(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_473(var uParam0)
{
	return uParam0->f_25;
}

int func_474(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_475(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_476(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_512(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_513(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_477(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1939178->f_34 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1939178->f_34, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_468(Global_34, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_412(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_412(iParam0, Global_1939178->f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1939178->f_34, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_478(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_501(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!bParam2 || !func_480(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
			{
				if (!bParam2 || !func_480(uParam1, iVar1))
				{
					if (func_472(iVar1, Global_35, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_479(var uParam0)
{
	return func_144(*uParam0, 131072);
}

int func_480(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_481(int iParam0)
{
	return 0;
}

int func_482(var uParam0)
{
	return uParam0->f_21;
}

int func_483(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_34))
		{
			return 1;
		}
	}
	return 0;
}

int func_484(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*uParam1 = iVar1;
		func_31(&Var2, *uParam1, -1, -1, 255);
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

struct<2> func_485(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_486()
{
	func_100(&(Global_1245803->f_2003));
}

void func_487(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_295(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_488(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_514(iParam0) - 1))
	{
		return 0;
	}
	return 1;
}

var func_489(int iParam0)
{
	return iParam0 + 8;
}

void func_490(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_295(iParam1, 896190569) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::SET_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

int func_491(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_492(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_423(Param0, &vVar0);
	if (func_515(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

var func_493(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_516() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_517());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_517());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_517());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_518(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_519(iVar2))
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
				if (iVar9 & 8192 != 0 && func_520(iVar2) != 1)
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
					if (!func_521(iVar10))
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

struct<15> func_494(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_303, 5);
	Var0.f_9 = iParam0;
	Var0 = 178;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_495(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 9, &uParam1);
}

int func_496(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_522(iParam2, -372840566);
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
	func_523(uParam1, iParam0, Var3);
	return 1;
}

void func_497(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_498(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], 0))
				{
					AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
				}
			}
		}
		iVar0++;
	}
}

int func_499()
{
	if (func_524())
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

void func_500(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_501(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939178->f_26))
		{
			*iParam1 = Global_1939178->f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939178->f_27))
		{
			if (PED::_IS_PED_HOGTIED(Global_1939178->f_27) || ENTITY::IS_ENTITY_DEAD(Global_1939178->f_27))
			{
				*iParam2 = Global_1939178->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1939178->f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_GET_LASSOED_ENTITY(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_502(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1939178->f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSOED_ENTITY(Global_34);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_503(var uParam0)
{
	int iVar0;

	if (Global_1939178->f_32 == 0)
	{
		func_208(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939178->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939178->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939178->f_28[iVar0])))
				{
					func_177(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_504(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_505(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_506(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_506(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_507(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_508(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1939178->f_38) || Global_1939178->f_38 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1939178->f_38, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_509(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864) || iVar0 == -2016812721)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

float func_510(var uParam0)
{
	return uParam0->f_27;
}

int func_511(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_512(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_513(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 4:
			return 2;
		default:
			break;
	}
	return 8;
}

int func_515(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_525(iParam0))
	{
		return 0;
	}
	if (func_526(iParam0, uParam1, &uVar0))
	{
		func_527(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_516()
{
	return Global_1051202->f_12;
}

char* func_517()
{
	return "unnamed";
}

int func_518(int iParam0)
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

int func_519(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_528(35, iParam0);
}

int func_520(int iParam0)
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

bool func_521(int iParam0)
{
	if (func_529(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_530(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

void func_522(int iParam0, int iParam1)
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

void func_523(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_531(uParam0))
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

int func_524()
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

int func_525(int iParam0)
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

bool func_526(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_532(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_527(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_533(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_534(iVar0);
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
			uParam2->f_5 = func_535(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_536(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_537(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_538(iVar0);
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

int func_528(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_415(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_539())
	{
		return func_415(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_415(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_529(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_530(int iParam0)
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
		func_540(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_541(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_531(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_532(int iParam0)
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

int func_533(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_542(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_534(int iParam0)
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

int func_535(int iParam0)
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

int func_536(int iParam0)
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

int func_537(int iParam0)
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

int func_538(int iParam0)
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

int func_539()
{
	return Global_1099294->f_339;
}

void func_540(int iParam0)
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
	func_541(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_541(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_542(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_543(iParam0, uParam1, &uVar0))
	{
		func_544(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_543(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_532(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_544(var uParam0, int iParam1, var uParam2)
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

