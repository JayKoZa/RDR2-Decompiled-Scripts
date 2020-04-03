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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	struct<33> Local_21 = { 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<7> Local_56[32];
	struct<80> Local_281 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0 } ;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 2;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 1114636288;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 1114636288;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 2;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_18 = 1f;
	fLocal_19 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_21, 35, 47);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_21), 35, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_56, 225, 48);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_56[0 /*7*/]), 225, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(struct<5> Param0)
{
	if (Local_21 == 6)
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
	else if (func_17(Local_281.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_281.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_281.f_12), Local_281.f_9))
	{
		return 1;
	}
	else if (Local_281.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_281, &uParam0, 5);
	iVar19 = func_30(&bVar18, Local_281.f_1, Local_281.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_281.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_31(&Var0, Local_281.f_1, Local_281.f_2, Local_281.f_3, iVar17);
	Local_281.f_9 = { func_32(Var0.f_5, 8) };
	Local_281.f_14 = Var0.f_5;
	Local_281.f_15 = { Var0.f_11 };
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
	if (Local_21 <= 5)
	{
		func_41();
	}
	switch (Local_21)
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
	if (Local_281.f_8 <= 5)
	{
		func_49();
	}
	switch (Local_281.f_8)
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
		if (VOLUME::_0xF6A8A652A6B186CD(Local_21.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_21.f_3.f_1);
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
	if (Local_281.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_60(Local_281.f_12, 4);
		}
	}
	func_61();
	if (func_62(32))
	{
		func_63(Local_21.f_6);
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
	func_90(&(Local_281.f_18.f_12));
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	func_91();
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

	iVar0 = (Global_1186267->f_231.f_1066[Local_281.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_31(&Var1, Local_281.f_1, Local_281.f_2, Local_281.f_3, iVar0);
	if (!func_93(&Var1, 1))
	{
		func_94(1);
		return;
	}
	Local_21.f_6 = func_76(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_95(256);
	if (func_96(Local_21.f_6))
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
	func_31(&Var0, Local_281.f_1, Local_281.f_2, -1, 255);
	if (func_93(&Var0, 1))
	{
		func_94(2);
		return;
	}
	if (func_98(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_281.f_15, Var0.f_10, 2442122);
		func_94(2);
	}
	else if (bVar17)
	{
		func_97(3);
		func_94(6);
	}
	if (!func_99(Local_21.f_3.f_2))
	{
		func_100(&(Local_21.f_3.f_2));
	}
	else if (func_101(Local_21.f_3.f_2) > 45000)
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
	if (func_112() || Local_21.f_2 != 0)
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
		if (func_62(32) && func_76(PLAYER::PLAYER_ID()) == Local_21.f_6)
		{
			func_63(Local_21.f_6);
			func_115(32);
		}
	}
	else if (!func_62(32))
	{
		if (func_76(PLAYER::PLAYER_ID()) == Local_21.f_6)
		{
			func_116(Local_21.f_6, 1, 1);
			func_117(32);
		}
	}
	else if (func_76(PLAYER::PLAYER_ID()) != Local_21.f_6)
	{
		func_63(Local_21.f_6);
		func_115(32);
	}
}

void func_49()
{
}

void func_50()
{
	if (Local_21 == 6)
	{
		func_118(6);
	}
	else if (Local_21 > 0)
	{
		func_48();
		func_118(1);
	}
}

void func_51()
{
	if (Local_21 == 6)
	{
		func_118(6);
	}
	else if (Local_21 > 1)
	{
		func_118(2);
	}
}

void func_52()
{
	bool bVar0;
	int iVar1;

	if (!func_102(1, 255))
	{
		bVar0 = true;
		if (!func_119())
		{
			bVar0 = false;
		}
		if (!func_120())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_121(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_99(Local_281.f_11))
			{
				func_100(&(Local_281.f_11));
			}
			if (func_101(Local_281.f_11) >= iVar1)
			{
				func_118(6);
			}
		}
	}
	else if (Local_21 > 2)
	{
		func_122(&(Local_281.f_11));
		func_123();
		func_118(3);
	}
}

void func_53()
{
	int iVar0;

	if (!func_102(2, 255))
	{
		if (func_124())
		{
			func_121(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_99(Local_281.f_11))
			{
				func_100(&(Local_281.f_11));
			}
			if (func_125(Local_281.f_11) >= iVar0)
			{
				func_118(6);
			}
		}
	}
	else if (Local_21 > 3)
	{
		func_122(&(Local_281.f_11));
		func_126();
		func_127();
		func_128();
		func_129();
		func_118(4);
	}
}

void func_54()
{
	if (Local_21 >= 5)
	{
		func_130();
		func_118(5);
		return;
	}
	func_131();
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
}

void func_55()
{
	if (!func_102(4, 255))
	{
		if (func_137())
		{
			func_138();
			func_60(Local_281.f_12, 4);
			func_121(4);
		}
	}
	else if (Local_21 > 5)
	{
		func_118(6);
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
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_32[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_21.f_32[iVar1]));
				func_139(iVar1);
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
	if (func_140(iParam0, iVar0, iParam1))
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
	func_141(Local_281.f_9, iVar0, 0);
	func_117(4);
	if (bVar1)
	{
		func_142(Local_281.f_1, Local_281.f_2);
	}
}

bool func_62(int iParam0)
{
	return func_143(Local_281.f_7, iParam0);
}

void func_63(int iParam0)
{
	int iVar0;

	if (!func_144(iParam0))
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
	int iVar5;
	int iVar6;

	func_145();
	bVar0 = func_57();
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (bVar0)
		{
			if (Local_281.f_18.f_50 != 0)
			{
				GRAPHICS::REMOVE_DECAL(Local_281.f_18.f_50);
			}
			iVar2 = 0;
			while (iVar2 <= 1)
			{
				func_146(iVar2);
				if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[iVar2])))
				{
					func_147(&(Local_281.f_18.f_54[iVar2]));
				}
				iVar2++;
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_1[iVar1])))
			{
				iVar3 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_1[iVar1]));
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar3);
			}
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (ANIMSCENE::_0x25557E324489393C(func_148(iVar4)))
				{
					if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_148(iVar4)))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(func_148(iVar4));
					}
				}
				iVar4++;
			}
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 <= 0)
	{
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_4[iVar5]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_4[iVar5])))
		{
			iVar6 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_4[iVar5]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar6);
		}
		iVar5++;
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

	if (!func_149(uParam0))
	{
		return -1;
	}
	iVar0 = func_150(uParam0, uParam0->f_9);
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
			iVar0 = func_150(uParam0, iVar1);
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
			func_151(uParam0);
			break;
		case 1:
			func_151(uParam0);
			break;
		case 2:
			func_151(uParam0);
			break;
		case 3:
			func_152(uParam0);
			break;
		case 4:
			func_151(uParam0);
			break;
		case 5:
			func_151(uParam0);
			break;
		case 6:
			func_152(uParam0);
			break;
		case 7:
			func_152(uParam0);
			break;
		case 8:
			func_152(uParam0);
			break;
		case 9:
			func_151(uParam0);
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
	func_153(&(uParam0->f_16), iParam1);
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
			func_154(uParam0);
			break;
		case 1:
			func_155(uParam0);
			break;
		case 2:
			func_156(uParam0);
			break;
		case 3:
			func_157(uParam0);
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
	if (!func_144(iParam0))
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
			func_158(uParam0);
			break;
		case 1:
		case 2:
			func_159(uParam0);
			break;
		case 3:
		case 4:
			func_160(uParam0);
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

	if (func_161(&Var1, uParam0) && func_162(&Var1, iParam1))
	{
		func_163(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_83(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_161(&Var1, uParam0) && func_162(&Var1, iParam1))
	{
		func_163(Var1, -1052341598, &iVar0, 0);
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
	iVar0 = func_164(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_85(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_164(iParam0, iParam1);
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
			(Local_56[iVar1 /*7*/])->f_2.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_90(var uParam0)
{
	func_165(uParam0, 0);
	func_166(uParam0, 0);
	func_167(uParam0, 1);
	func_168(uParam0, 1);
	func_169(uParam0, 0);
	func_170(uParam0, 1);
	func_171(uParam0, 1, 1, 1);
}

void func_91()
{
	Local_21.f_7.f_18 = { 1.4f, 0.6f, -5f };
	Local_21.f_7.f_9.f_3 = 4;
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
	return func_172(uParam0->f_16, iParam1);
}

void func_94(int iParam0)
{
	if (Local_21 != iParam0)
	{
		Local_21 = iParam0;
	}
}

void func_95(int iParam0)
{
	if (!func_103(iParam0))
	{
		func_173(&(Local_21.f_1), iParam0);
	}
}

bool func_96(int iParam0)
{
	if (!func_144(iParam0))
	{
		return false;
	}
	return (func_174(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_97(int iParam0)
{
	if (Local_21.f_2 != iParam0)
	{
		Local_21.f_2 = iParam0;
	}
}

int func_98(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_21.f_3.f_1))
	{
		return 1;
	}
	if (func_175(Local_281.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_21.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_281.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_176(&uVar1, Param0);
		Local_21.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_121(128);
	}
	else if (!func_102(128, 255))
	{
		Local_21.f_3.f_1 = func_177(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_21.f_3.f_1))
		{
			return 1;
		}
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_21.f_3);
	switch (iVar0)
	{
		case 3:
			Local_21.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_21.f_3);
			return 1;
		case 4:
			Local_21.f_3 = 0;
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
	return func_143(&(Local_56[iParam1 /*7*/]), iParam0);
}

bool func_103(int iParam0)
{
	return func_143(Local_21.f_1, iParam0);
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

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (iVar2 != 1 && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar2])))
		{
			if (func_179(iVar2, &bVar1, func_178(iVar2), 0) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			if (func_180() != 0)
			{
				iVar3 = 0;
				while (iVar3 <= 0)
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_4[iVar3])))
					{
						if (func_181(iVar3, &bVar1) || bVar1)
						{
							iVar0 = 0;
						}
					}
					iVar3++;
				}
			}
			if (bVar1)
			{
				func_182();
			}
			return iVar0;
		}
	}

int func_107()
{
	bool bVar0;

	if (!func_183(&bVar0))
	{
		if (bVar0)
		{
			func_182();
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
	if (!func_103(32) && func_184(32))
	{
		func_95(32);
	}
	if (!func_103(64) && func_184(64))
	{
		func_95(64);
	}
	if (!func_103(16) && func_185(16))
	{
		func_95(16);
	}
	if ((!func_103(2048) && func_184(2048)) && !func_184(4096))
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
	if (func_103(2048) && !func_184(4096))
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
	if (func_186())
	{
		return 1;
	}
	switch (Local_21.f_7)
	{
		case 0:
			func_187();
			break;
		case 1:
			func_188();
			break;
		case 2:
			func_189();
			break;
		case 3:
			func_190();
			break;
		case 4:
			func_191();
			break;
	}
	return 0;
}

void func_113()
{
}

int func_114()
{
	if (func_192(-2147483648))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(func_193(0)) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(func_193(0), false))
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0)
{
	if (func_62(iParam0))
	{
		func_194(&(Local_281.f_7), iParam0);
	}
}

int func_116(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_144(iParam0))
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_153(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_196(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_117(int iParam0)
{
	if (!func_62(iParam0))
	{
		func_173(&(Local_281.f_7), iParam0);
	}
}

void func_118(int iParam0)
{
	if (Local_281.f_8 != iParam0)
	{
		Local_281.f_8 = iParam0;
	}
}

int func_119()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (!func_198(func_197(iVar1)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (func_180() != 0)
	{
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (!func_198(func_199(iVar2)))
			{
				iVar0 = 0;
			}
			iVar2++;
		}
	}
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!func_203(func_200(iVar3), Local_281.f_18.f_57[iVar3], Local_21.f_7.f_6[iVar3], func_201(iVar3), func_202(iVar3)))
		{
			iVar0 = 0;
		}
		iVar3++;
	}
	switch (func_180())
	{
		case 0:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("nb_slumped_hunter_cairn_1"))
			{
				TASK::REQUEST_WAYPOINT_RECORDING("nb_slumped_hunter_cairn_1");
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

bool func_120()
{
	bool bVar0;

	bVar0 = false;
	if (!func_204())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_121(int iParam0)
{
	if (!func_102(iParam0, 255))
	{
		func_173(Local_56[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/], iParam0);
	}
}

void func_122(var uParam0)
{
	*uParam0 = 0;
}

void func_123()
{
}

int func_124()
{
	return 1;
}

int func_125(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_126()
{
	if (!func_62(1))
	{
		func_205(Local_281.f_9);
		func_117(1);
	}
}

void func_127()
{
	func_206();
}

void func_128()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 != 1 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar0])))
		{
			(Local_281.f_18.f_1[iVar0 /*4*/])->f_1 = NETWORK::NET_TO_PED(&(Local_21.f_7.f_1[iVar0]));
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_281.f_18.f_1[iVar0 /*4*/])->f_1))
			{
				func_207(iVar0);
			}
			PED::ADD_RELATIONSHIP_GROUP("NB_SLUMPED_ANIMAL", &(Local_281.f_18.f_44));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((Local_281.f_18.f_1[iVar0 /*4*/])->f_1, Local_281.f_18.f_44);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_281.f_18.f_44, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_34));
		}
		iVar0++;
	}
	if (func_180() != 0)
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_4[iVar1])))
			{
				Local_281.f_18.f_10[iVar1] = NETWORK::NET_TO_OBJ(&(Local_21.f_7.f_4[iVar1]));
			}
			iVar1++;
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_6[0])))
	{
		func_208();
		func_209(func_148(0), func_200(0));
	}
}

void func_129()
{
}

void func_130()
{
}

void func_131()
{
	float fVar0;

	if (func_175(Local_281.f_15))
	{
		return;
	}
	if (func_210())
	{
		return;
	}
	if (func_211(Local_281.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_281.f_15);
		if (fVar0 < 200f)
		{
			func_121(4096);
		}
		else if (fVar0 < 400f)
		{
			func_212(4096);
			func_121(2048);
		}
		else
		{
			func_212(4096);
			func_212(2048);
		}
	}
}

void func_132()
{
	func_213();
	func_214();
	func_215();
}

void func_133()
{
	if (func_216())
	{
		func_121(8);
	}
	else
	{
		func_212(8);
	}
}

void func_134()
{
	func_217();
	func_218();
	func_219(Local_21.f_7);
	switch (Local_281.f_18)
	{
		case 0:
			func_220();
			break;
		case 1:
			func_221();
			break;
		case 2:
			func_222();
			break;
		case 3:
			func_223();
			break;
		case 4:
			func_224();
			break;
	}
}

void func_135()
{
	if (!func_102(8, 255))
	{
		func_121(16);
	}
	else
	{
		func_212(16);
	}
}

void func_136()
{
	int iVar0;

	Local_281.f_6 = -1;
	Local_281.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_281.f_5 = (Local_281.f_5 || Local_56[iVar0 /*7*/]) // PointerArith;
			Local_281.f_6 = (Local_281.f_6 && Local_56[iVar0 /*7*/]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_137()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = true;
	func_145();
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_1[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_1[iVar1]));
			PED::SET_PED_KEEP_TASK(func_193(iVar1), true);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			bVar0 = false;
		}
		iVar1++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_4[iVar3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_4[iVar3])))
		{
			iVar4 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_4[iVar3]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
			bVar0 = false;
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_225(-2147483648);
	}
	return bVar0;
}

void func_138()
{
}

void func_139(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST((Local_281.f_79.f_7[iParam0 /*11*/])->f_1))
	{
		MAP::REMOVE_BLIP(&((Local_281.f_79.f_7[iParam0 /*11*/])->f_1));
	}
}

bool func_140(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_141(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_227(func_226(Param0));
	iVar1 = func_228(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_229(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_230(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_231(iVar0);
}

bool func_143(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_144(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

void func_145()
{
	if (func_232(1))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
		else
		{
			func_233(1);
		}
	}
}

void func_146(int iParam0)
{
	if (func_234(Local_281.f_18.f_51[iParam0]))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(Local_281.f_18.f_51[iParam0], 1);
	}
}

void func_147(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_148(int iParam0)
{
	int iVar0;

	iVar0 = &Local_21.f_7.f_6[iParam0];
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return NETWORK::_0xD7F6781A0ABAF6FB(iVar0);
	}
	return 0;
}

int func_149(var uParam0)
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

int func_150(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_235(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_236(iParam1)) - 1);
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

void func_151(var uParam0)
{
	func_71(uParam0, 0);
	func_71(uParam0, 1);
	func_71(uParam0, 3);
	func_69(uParam0);
}

void func_152(var uParam0)
{
	func_70(uParam0);
	func_237(uParam0, 0, 3);
}

void func_153(var uParam0, int iParam1)
{
	func_238(uParam0, iParam1);
}

void func_154(var uParam0)
{
	func_71(uParam0, 0);
	func_72(uParam0, 0);
	func_72(uParam0, 1);
	func_72(uParam0, 2);
}

void func_155(var uParam0)
{
	func_71(uParam0, 1);
	func_69(uParam0);
}

void func_156(var uParam0)
{
	func_71(uParam0, 2);
	func_72(uParam0, 3);
}

void func_157(var uParam0)
{
	func_71(uParam0, 3);
	func_72(uParam0, 4);
}

void func_158(var uParam0)
{
	func_72(uParam0, 0);
	func_72(uParam0, 1);
}

void func_159(var uParam0)
{
	func_72(uParam0, 2);
	func_72(uParam0, 3);
}

void func_160(var uParam0)
{
	func_72(uParam0, 4);
	func_72(uParam0, 5);
}

bool func_161(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_162(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_163(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_164(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

void func_165(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_194(&(uParam0->f_1), 16384);
	}
	else
	{
		func_173(&(uParam0->f_1), 16384);
	}
}

void func_166(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_194(&(uParam0->f_1), 2048);
	}
	else
	{
		func_173(&(uParam0->f_1), 2048);
	}
}

void func_167(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_194(&(uParam0->f_1), 256);
	}
	else
	{
		func_173(&(uParam0->f_1), 256);
	}
}

void func_168(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_173(uParam0, 16);
	}
	else
	{
		func_194(uParam0, 67108864);
		func_194(uParam0, 16);
	}
}

void func_169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_194(&(uParam0->f_1), 128);
	}
	else
	{
		func_173(&(uParam0->f_1), 128);
	}
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_173(uParam0, 256);
	}
	else
	{
		func_194(uParam0, 256);
	}
}

void func_171(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_173(uParam0, 268435456);
	}
	else
	{
		func_194(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_173(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_194(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_173(uParam0, 536870912);
	}
	else
	{
		func_194(uParam0, 536870912);
	}
}

bool func_172(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_174(int iParam0)
{
	int iVar0;

	if (!func_144(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_175(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_176(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_177(struct<17> Param0)
{
	var uVar0;

	func_176(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

Vector3 func_178(int iParam0)
{
	switch (func_240())
	{
		case 0:
		case 1:
			switch (func_180())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1109.718f, 2104.703f, 360.3868f;
						case 1:
							return -1138.816f, 2220.154f, 338.2513f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -4361.463f, -3439.308f, 29.04307f;
						case 1:
							return -4391.48f, -3429.176f, 28.69202f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -3895.461f, -2492.511f, -11.07848f;
						case 1:
							return -3953.237f, -2545.791f, -3.01603f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -2183.753f, -2882.835f, 23.5659f;
						case 1:
							return -2131.08f, -2833.381f, 32.88717f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -2083.893f, -1412.552f, 131.8581f;
						case 1:
							return -2152.373f, -1368.933f, 133.126f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -897.5998f, 535.8544f, 58.2352f;
						case 1:
							return -978.1911f, 492.8889f, 61.25683f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 280.7151f, 263.9585f, 112.8886f;
						case 1:
							return 236.6632f, 333.7341f, 115.2812f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1451.073f, 1260.018f, 166.723f;
						case 1:
							return 1436.617f, 1351.127f, 161.5423f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 2652.989f, 1189.503f, 118.7033f;
						case 1:
							return 2558.496f, 1185.24f, 162.3743f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1509.102f, -2101.449f, 45.3134f;
						case 1:
							return 1509.102f, -2101.449f, 45.3134f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_179(int iParam0, var uParam1, vector3 vParam2, bool bParam5)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_242(Local_21.f_7.f_1[iParam0], func_197(iParam0), vParam2, func_241(iParam0), 1, 0, bParam5, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_180()
{
	return func_243();
}

int func_181(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_245(Local_21.f_7.f_4[iParam0], func_199(iParam0), func_244(iParam0), 1, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

void func_182()
{
	func_97(2);
}

int func_183(var uParam0)
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
		if (func_246(iVar2, 4))
		{
		}
		else if (!func_247(iVar2, uParam0, &bVar1))
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

bool func_184(int iParam0)
{
	return func_143(Local_281.f_5, iParam0);
}

bool func_185(int iParam0)
{
	return func_143(Local_281.f_6, iParam0);
}

int func_186()
{
	if (Local_21.f_7 == 6)
	{
		return 1;
	}
	if (func_192(1073741824 /* Float: 2f */))
	{
		func_248(6);
	}
	return 0;
}

void func_187()
{
	if (func_192(536870912))
	{
		func_248(1);
	}
}

void func_188()
{
	if (func_210())
	{
		switch (func_240())
		{
			case 0:
			case 1:
				func_248(2);
				break;
			default:
				func_248(2);
				break;
		}
	}
}

void func_189()
{
	if (func_249(1))
	{
		func_248(3);
	}
}

void func_190()
{
	if (func_192(1073741824 /* Float: 2f */))
	{
		func_248(6);
	}
	if (func_249(2))
	{
		func_248(4);
	}
}

void func_191()
{
	int iVar0;
	var uVar1;

	if (func_192(1073741824 /* Float: 2f */))
	{
		func_248(6);
	}
	if (!func_250(1))
	{
		if (func_249(32))
		{
			func_251(2);
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar0 < 25)
			{
				func_251(2);
			}
			else
			{
				func_251(4);
			}
		}
		func_251(1);
	}
	if (func_250(2))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[1])))
		{
			if (!func_250(8))
			{
				func_252();
			}
			else
			{
				func_179(1, &uVar1, Local_21.f_7.f_22, 1);
			}
		}
	}
}

bool func_192(int iParam0)
{
	return func_143(Local_281.f_18.f_45, iParam0);
}

int func_193(int iParam0)
{
	return (Local_281.f_18.f_1[iParam0 /*4*/])->f_1;
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_195(int iParam0)
{
	if (!func_144(iParam0))
	{
		return 0;
	}
	if (!func_174(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_196(var uParam0, int iParam1)
{
	func_253(uParam0, iParam1);
}

int func_197(int iParam0)
{
	switch (func_240())
	{
		case 0:
		case 1:
			switch (func_180())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_bear_01");
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1211068025;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 1211068025;
						case 1:
							return joaat("a_c_bear_01");
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_bear_01");
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1211068025;
						case 1:
							return joaat("a_c_bear_01");
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1211068025;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_198(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_199(int iParam0)
{
	switch (func_180())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 209716759;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 336139515;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 336139515;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -179993551;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -235945995;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -235945995;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -179993551;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -179993551;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -179993551;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_200(int iParam0)
{
	switch (func_240())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "script@beat@wilderness@lostfriend@lake_bodyloops";
				case 1:
					return "script@beat@wilderness@lostfriend@lake_turnbody";
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_201(int iParam0)
{
	switch (func_240())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 0;
				default:
					break;
			}
			return 0;
	}
	return 0;
}

char* func_202(int iParam0)
{
	switch (func_240())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "PL_BODYSTART";
				case 1:
					return func_254();
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_203(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
		{
			if (!ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam0, iParam3, sParam4, true, true);
			}
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
					{
						return 0;
					}
				}
				if (!ANIMSCENE::_0x477122B8D05E7968(*uParam1, 0, 0))
				{
					if (!ANIMSCENE::_0x59606519FF9D3EC2(*uParam1, 0))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
					}
					return 0;
				}
				else
				{
					*uParam2 = NETWORK::_0xE0D73CDDEA79DDCD(*uParam1);
				}
			}
			return 0;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
	{
		return 0;
	}
	*uParam1 = NETWORK::_0xD7F6781A0ABAF6FB(*uParam2);
	if (!ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_204()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (MISC::IS_BIT_SET(Local_281.f_79.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_255(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_281.f_79.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_281.f_79.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_281.f_79.f_3), iVar0);
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

void func_205(struct<2> Param0)
{
	if (func_228(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_228(Param0)))
	{
		STATS::_0x99230691875FC218(func_226(Param0), func_228(Param0), Global_35);
	}
}

void func_206()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_256(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_207(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_257(iParam0);
	iVar1 = func_193(iParam0);
	PED::_0x1902C4CFCC5BE57C(iVar1, iVar0);
	PED::_0xCC8CA3E88256E58F(iVar1, false, 1, 1, 1, 0);
}

void func_208()
{
	if (!ANIMSCENE::_0x25557E324489393C(func_148(0)) || !ANIMSCENE::_0x477122B8D05E7968(func_148(0), 1, 0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(func_148(0), func_258(1), func_259(1), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(0), func_260(), func_193(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(0), "ROCK", func_261(0), 0);
}

void func_209(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(iParam0))
	{
	}
	else if (!ANIMSCENE::_0x477122B8D05E7968(iParam0, 1, 0))
	{
	}
	else
	{
		ANIMSCENE::START_ANIM_SCENE(iParam0);
	}
}

bool func_210()
{
	return (func_103(32) || func_102(32, 255));
}

int func_211(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_262(iParam0, 2087069356) };
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

void func_212(int iParam0)
{
	if (func_143(&(Local_56[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/]), iParam0))
	{
		func_194(Local_56[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/], iParam0);
	}
}

void func_213()
{
	func_263();
}

void func_214()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_264(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_215()
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
		if (Local_281.f_79.f_30 >= 2)
		{
			Local_281.f_79.f_30 = 0;
		}
		iVar0 = Local_281.f_79.f_30;
		Local_281.f_79.f_30++;
		iVar7 = func_265(iVar0);
		iVar1 = &Local_281.f_79.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_246(iVar7, 4))
		{
			func_256(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_56[iVar3 /*7*/])->f_2.f_2[iVar0] > -1f)
			{
				(Local_56[iVar3 /*7*/])->f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_281.f_79.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_281.f_79.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_281.f_79.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_281.f_79.f_31), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_281.f_79.f_31, iVar0))
		{
			if (bVar4 || !func_266(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_281.f_79.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (func_266(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_281.f_79.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_56[iVar3 /*7*/])->f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_56[iVar3 /*7*/])->f_2.f_1), iVar0);
				}
				func_267(Local_281.f_79.f_32[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_56[iVar3 /*7*/])->f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_268(Local_281.f_79.f_32[iVar0 /*3*/]) || func_269(Local_281.f_79.f_32[iVar0 /*3*/], 0.5f))))
			{
				func_270(Local_281.f_79.f_32[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_56[iVar3 /*7*/])->f_2.f_1), iVar0);
			}
		}
		if (func_246(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_271(iVar7))
						{
							if (!func_247(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_272(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !func_246(iVar7, 8))
			{
				if (!func_271(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_281.f_79.f_31 != 0)
	{
		if (!func_273(1, -1))
		{
			func_274(1);
		}
	}
	else if (func_273(1, -1))
	{
		func_275(1);
	}
}

int func_216()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_281.f_14))
	{
		return 0;
	}
	return 1;
}

void func_217()
{
	int iVar0;

	Local_281.f_18.f_45 = -1;
	Local_281.f_18.f_46 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_281.f_18.f_46 = (Local_281.f_18.f_46 || (Local_56[iVar0 /*7*/])->f_1);
			Local_281.f_18.f_45 = (Local_281.f_18.f_45 && (Local_56[iVar0 /*7*/])->f_1);
		}
		iVar0++;
	}
}

void func_218()
{
	if (Local_281.f_18.f_60 >= 5)
	{
		if (!func_232(2))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_276()) < 60f || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_277()) < 60f)
			{
				func_278();
				func_279();
				func_280();
				func_281(2);
			}
		}
		Local_281.f_18.f_60 = 0;
	}
	else
	{
		Local_281.f_18.f_60++;
	}
}

void func_219(int iParam0)
{
	if (Local_281.f_18 != iParam0)
	{
		Local_281.f_18 = iParam0;
	}
}

void func_220()
{
	if (!func_282(0, 1073741824 /* Float: 2f */))
	{
		func_283();
	}
	else if (!func_284(536870912, 255))
	{
		func_225(536870912);
	}
}

void func_221()
{
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_277()) < 45f)
	{
		func_285();
	}
}

void func_222()
{
	func_286();
	func_287();
	if (!func_232(4))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_277()) < 60f)
		{
			func_288(1891783641, func_193(0), 1);
			func_281(4);
		}
	}
	if (func_289(Local_281.f_18.f_49, 1))
	{
		if (!func_249(1))
		{
			func_225(1);
		}
		func_290(&(Local_281.f_18.f_49), 1, 1);
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_277()) > (45f * 2f))
	{
		func_225(1073741824 /* Float: 2f */);
	}
}

void func_223()
{
	func_290(&(Local_281.f_18.f_49), 1, 1);
	func_291();
	func_292();
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_277()) > (45f * 2f))
	{
		func_225(1073741824 /* Float: 2f */);
	}
}

void func_224()
{
	func_291();
	func_61();
	if (!func_284(8, 255))
	{
		func_293(func_193(0), 1);
		ENTITY::_0x18FF3110CF47115D(func_193(0), 7, 1);
		func_225(8);
	}
	if (func_250(2))
	{
		func_294();
		if (func_284(16, 255))
		{
			func_295();
		}
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_277()) > (45f * 2f))
	{
		func_225(1073741824 /* Float: 2f */);
	}
}

void func_225(int iParam0)
{
	func_173(&((Local_56[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/])->f_1), iParam0);
}

int func_226(var uParam0, var uParam1)
{
	return uParam0;
}

int func_227(int iParam0)
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

int func_228(struct<2> Param0)
{
	return func_296(Param0);
}

void func_229(struct<2> Param0, var uParam2)
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
	switch (func_226(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_298(func_297(Param0));
			iVar5 = func_299(iVar4);
			if (!func_300(iVar5, 0))
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

int func_230(int iParam0, int iParam1)
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

void func_231(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_301(&Var0);
}

bool func_232(int iParam0)
{
	return func_143(Local_281.f_18.f_47, iParam0);
}

void func_233(int iParam0)
{
	func_194(&(Local_281.f_18.f_47), iParam0);
}

bool func_234(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_235(int iParam0)
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

int func_236(int iParam0)
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

void func_237(var uParam0, int iParam1, int iParam2)
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

void func_238(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_239(int iParam0)
{
	if (!func_144(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

int func_240()
{
	return func_302();
}

float func_241(int iParam0)
{
	switch (func_240())
	{
		case 0:
		case 1:
			switch (func_180())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 216.43f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 236.48f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 236.48f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 236.48f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 247.99f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 301.26f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 202.06f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 250.23f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 306.98f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 274.89f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

int func_242(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_198(iParam1))
	{
		return 0;
	}
	iVar0 = func_303(iParam1, vParam2, iParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

var func_243()
{
	return Local_281.f_2;
}

Vector3 func_244(int iParam0)
{
	switch (func_180())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return func_277();
				default:
					break;
			}
			break;
	}
	return func_277();
}

int func_245(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_198(iParam1))
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

bool func_246(int iParam0, int iParam1)
{
	return func_143((Local_281.f_79.f_7[iParam0 /*11*/])->f_2, iParam1);
}

int func_247(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_281.f_15 };
	iVar7 = 0;
	iVar8 = func_255(iParam0);
	iVar9 = func_304(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_32[iParam0])))
		{
			iVar9 = func_304(iParam0);
			fVar0 = func_305(iParam0);
			if (!func_143((Local_281.f_79.f_7[iParam0 /*11*/])->f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_306(iParam0)) };
			}
			else
			{
				vVar1 = { func_306(iParam0) };
			}
			if (!func_242(Local_21.f_32[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_0x772A1969F649E902(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(&(Local_21.f_32[iParam0]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (iVar9 != 0)
					{
						PED::_0x1902C4CFCC5BE57C(iVar7, iVar9);
						PED::_0xCC8CA3E88256E58F(iVar7, func_246(iParam0, 1), 1, 1, 1, 0);
					}
					else if (PED::_0x772A1969F649E902(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_307(iVar7, 1);
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
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_21.f_32[iParam0]))))
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

void func_248(int iParam0)
{
	if (Local_21.f_7 != iParam0)
	{
		Local_21.f_7 = iParam0;
	}
}

bool func_249(int iParam0)
{
	return func_143(Local_281.f_18.f_46, iParam0);
}

bool func_250(int iParam0)
{
	return func_143(Local_21.f_7.f_21, iParam0);
}

void func_251(int iParam0)
{
	func_173(&(Local_21.f_7.f_21), iParam0);
}

void func_252()
{
	char cVar0[64];
	struct<2> Var8;
	vector3 vVar18;
	int iVar22;

	if (!func_250(8))
	{
		StringCopy(&cVar0, "ORESPH_BearSpawnScan", 64);
		Var8 = -1;
		Var8 = 20;
		Var8.f_1 = { func_277() };
		vVar18.f_3 = -1;
		iVar22 = func_308(cVar0, &Var8, &vVar18);
		switch (iVar22)
		{
			case 0:
				break;
			case 2:
				Local_21.f_7.f_22 = { func_178(1) };
				func_251(8);
				break;
			case 1:
				Local_21.f_7.f_22 = { vVar18 };
				func_251(8);
				break;
		}
	}
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_254()
{
	switch (func_197(0))
	{
		case 1223834952:
			return "pl_turnbody";
		case 1211068025:
			return "pl_turnbody_f";
		default:
			break;
	}
	return "";
}

int func_255(int iParam0)
{
	return (Local_281.f_79.f_7[iParam0 /*11*/])->f_3;
}

void func_256(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_281.f_79.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_32[iParam0])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_21.f_32[iParam0]));
			Local_281.f_79.f_7[iParam0 /*11*/] = iVar1;
			(Local_56[iParam1 /*7*/])->f_2.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				EVENT::_0xBB1E41DD3D3C6250(iVar1, "MpRandomEvent", 1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_309(iVar1, 1f, 0);
				}
				sVar0 = func_310(iParam0);
				if (!MISC::_0x375F5870A7B8BEC1(sVar0))
				{
					func_311(iVar1, sVar0, 1);
				}
				MISC::SET_BIT(&(Local_281.f_79.f_5), iParam0);
				if (bParam2)
				{
					func_312(iParam0);
				}
			}
		}
	}
}

int func_257(int iParam0)
{
	switch (func_240())
	{
		case 0:
		case 1:
			switch (func_180())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1913713471;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 787340101;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2035414332;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1207636623;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 213813854;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 460892114;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1572093441;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 2134404948;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1190493899;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1623375598;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 41788943;
}

Vector3 func_258(int iParam0)
{
	switch (func_240())
	{
		case 0:
		case 1:
			switch (func_180())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -1109.45f, 2104.77f, 360.63f;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -4300.761f, -3445.572f, 33.398f;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -3895.461f, -2492.511f, -11.428f;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -2190.508f, -2867.223f, 25.357f;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -2083.893f, -1412.552f, 130.9481f;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -897.5998f, 535.8544f, 57.335f;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 290.999f, 262.044f, 110.394f;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 1548.084f, 1355.097f, 145.176f;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 2652.989f, 1189.503f, 117.783f;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 1509.102f, -2101.449f, 44.413f;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_259(int iParam0)
{
	switch (func_240())
	{
		case 0:
		case 1:
			switch (func_180())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 90f;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -7.6f, 14.7f, 90f;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 12.8f, 15f;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -3f, 12.5f, -140f;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 0f;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 140f;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, -160f;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 90f;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 90f;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, -160f;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

char* func_260()
{
	if (PED::IS_PED_MALE(func_193(0)))
	{
		return "body";
	}
	else
	{
		return "body_f";
	}
	return "";
}

var func_261(int iParam0)
{
	return &(Local_281.f_18.f_10[iParam0]);
}

struct<2> func_262(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_313(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_314(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_263()
{
	Local_281.f_79.f_6 = 0;
	Local_281.f_79.f_2 = 0;
	Local_281.f_79.f_1 = -1;
}

void func_264(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_281.f_79.f_2 = (Local_281.f_79.f_2 || (Local_56[iParam0 /*7*/])->f_2);
		Local_281.f_79.f_1 = (Local_281.f_79.f_1 && (Local_56[iParam0 /*7*/])->f_2);
		Local_281.f_79.f_6 = (Local_281.f_79.f_6 || (Local_56[iParam0 /*7*/])->f_2.f_1);
	}
}

int func_265(int iParam0)
{
	return iParam0;
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
	(Local_56[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/])->f_2.f_2[iParam2] = fVar0;
	if (fVar0 > (Local_281.f_79.f_7[iParam2 /*11*/])->f_9)
	{
		return 0;
	}
	return 1;
}

void func_267(var uParam0)
{
	func_315(uParam0, 0f);
}

bool func_268(var uParam0)
{
	return func_316(*uParam0, 1);
}

int func_269(var uParam0, float fParam1)
{
	if (!func_268(uParam0))
	{
		return 0;
	}
	if (func_317(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_270(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_271(int iParam0)
{
	return 1;
}

void func_272(int iParam0, int iParam1)
{
	func_194(&((Local_281.f_79.f_7[iParam0 /*11*/])->f_2), iParam1);
}

bool func_273(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_143((Local_56[iParam1 /*7*/])->f_2, iParam0);
}

void func_274(int iParam0)
{
	func_173(&((Local_56[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/])->f_2), iParam0);
}

void func_275(int iParam0)
{
	func_194(&((Local_56[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/])->f_2), iParam0);
}

Vector3 func_276()
{
	switch (func_180())
	{
		case 0:
			return func_277();
		case 1:
			return -4321.539f, -3444.516f, 31.84637f;
		case 2:
			return -3886.186f, -2460.759f, -12.22894f;
		case 3:
			return -2202.776f, -2879.107f, 21.0543f;
		case 4:
			return -2077.611f, -1386.821f, 126.729f;
		case 5:
			return -860.764f, 522.6799f, 60.89857f;
		case 6:
			return 268.4785f, 215.0211f, 103.9115f;
		case 7:
			return 1520.264f, 1351.372f, 156.8496f;
		case 8:
			return 2595.907f, 1183.094f, 145.6995f;
		case 9:
			return 1513.276f, -2114.609f, 43.2031f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_277()
{
	return Local_281.f_15;
}

void func_278()
{
	switch (func_180())
	{
		case 0:
			func_318(Global_34, "nb_slumped_hunter_cairn_1", 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1);
			break;
	}
}

void func_279()
{
	struct<22> Var0;

	Var0.f_7 = 1056964608;
	Var0.f_8 = 1065353216;
	Var0.f_9 = 1043542835;
	Var0.f_10 = 1048576000;
	Var0.f_12 = 1061158912;
	Var0.f_13 = 1048576000;
	Var0.f_14 = 1055286886;
	Var0.f_15 = 1048576000;
	Var0.f_17 = 1065353216;
	Var0.f_18 = 1065353216;
	Var0.f_19 = 1073741824;
	Var0.f_20 = 1065353216;
	Var0.f_21 = 1048576000;
	switch (func_180())
	{
		case 0:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -1109.51f, 2106.493f, 360.5136f, 0f, 16);
			func_319(&Var0, -1108.537f, 2105.028f, 360.8698f, 0f, 16);
			Var0.f_17 = 2f;
			Var0.f_18 = 3f;
			Var0.f_4 = { 2f, -2f, 1f };
			func_319(&Var0, -1110.142f, 2104.68f, 360.6942f, 0f, 16);
			func_319(&Var0, -1110.537f, 2105.034f, 360.7543f, 0f, 16);
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 1f, -2f, 1f };
			func_319(&Var0, -1111.565f, 2105.641f, 360.6581f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -1109.269f, 2104.641f, 361.3413f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 1:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -20f, 1f };
			func_319(&Var0, -4307.2f, -3444.932f, 32.82885f, 265f, 5);
			Var0.f_21 = 0.25f;
			Var0.f_17 = 1.25f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 2f, -2f, 1f };
			func_319(&Var0, -4301.879f, -3446.388f, 33.25344f, 0f, 16);
			func_319(&Var0, -4305.6f, -3445.602f, 32.96651f, 20f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -4347.645f, -3443.412f, 29.3485f, 0f, 16);
			func_319(&Var0, -4301.34f, -3446.336f, 33.28331f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -4300.792f, -3445.786f, 34.08266f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 2:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.25f;
			Var0.f_17 = 0.25f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -30f, 1f };
			func_319(&Var0, -3891.917f, -2480.408f, -11.3641f, 170f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 2f, -4f, 1f };
			func_319(&Var0, -3893.021f, -2483.305f, -11.31038f, -60f, 16);
			Var0.f_4 = { 2f, -2f, 1f };
			func_319(&Var0, -3895.77f, -2488.116f, -11.31099f, -60f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -3895.96f, -2492.69f, -11.57146f, -45f, 16);
			func_319(&Var0, -3885.353f, -2438.913f, -12.54987f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -3895.461f, -2492.801f, -10.71474f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 3:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 0.25f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -30f, 1f };
			func_319(&Var0, -2202.088f, -2877.403f, 21.67883f, 160f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -6f, 1f };
			func_319(&Var0, -2201.413f, -2877.482f, 21.77147f, -45f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -6f, 1f };
			func_319(&Var0, -2194.822f, -2868.107f, 25.09646f, -60f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -2190.094f, -2867.042f, 25.44861f, -45f, 16);
			func_319(&Var0, -2215.274f, -2891.501f, 12.90098f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -2190.67f, -2866.961f, 26.09237f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 4:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 0.25f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -30f, 1f };
			func_319(&Var0, -2078.412f, -1387.822f, 127.2937f, 160f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -6f, 1f };
			func_319(&Var0, -2078.051f, -1391.873f, 128.2124f, -45f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -6f, 1f };
			func_319(&Var0, -2085.695f, -1406.422f, 130.7508f, 0f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -2084.542f, -1413.188f, 130.8916f, -45f, 16);
			func_319(&Var0, -2070.742f, -1361.117f, 122.0473f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -2083.995f, -1412.851f, 131.6568f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 5:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 0.25f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -30f, 1f };
			func_319(&Var0, -841.2379f, 513.8311f, 63.81583f, 160f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -6f, 1f };
			func_319(&Var0, -861.4038f, 522.8286f, 60.81899f, -115f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -5f, 1f };
			func_319(&Var0, -890.9692f, 534.4683f, 57.62687f, -135f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -826.9647f, 509.9298f, 65.01224f, -45f, 16);
			func_319(&Var0, -896.588f, 536.1981f, 57.20066f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -897.346f, 536.0071f, 58.04606f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 6:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -20f, 1f };
			func_319(&Var0, 287.269f, 248.723f, 107.8854f, -30f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -6f, 1f };
			func_319(&Var0, 289.4469f, 255.7949f, 109.2819f, 160f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -25f, 1f };
			func_319(&Var0, 271.0932f, 206.9842f, 102.1762f, 155f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, 291.84f, 261.931f, 110.5593f, -45f, 16);
			func_319(&Var0, 270.5358f, 201.3969f, 100.8203f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, 291.0582f, 262.403f, 111.0703f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 7:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, 5f, 1f };
			func_319(&Var0, 1538.508f, 1352.538f, 147.5429f, -20f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -1f, 1f };
			func_319(&Var0, 1545.553f, 1356.246f, 145.2261f, -135f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -15f, 1f };
			func_319(&Var0, 1519.899f, 1352.85f, 156.8353f, 75f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, 1548.057f, 1355.951f, 144.9647f, -45f, 16);
			func_319(&Var0, 1519.117f, 1354.071f, 156.8844f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, 1548.351f, 1355.055f, 145.9102f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 8:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -15f, 1f };
			func_319(&Var0, 2562.901f, 1183.488f, 161.2576f, 60f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -5f, 1f };
			func_319(&Var0, 2609.94f, 1187.812f, 136.9735f, 75f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -15f, 1f };
			func_319(&Var0, 2636.818f, 1188.824f, 123.5303f, 75f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, 2557.519f, 1182.989f, 162.3332f, -45f, 16);
			func_319(&Var0, 2652.654f, 1188.571f, 117.8865f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, 2653.229f, 1189.425f, 118.5011f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 9:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -10f, 1f };
			func_319(&Var0, 1510.621f, -2105.338f, 44.05938f, -10f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, 1515.058f, -2120.371f, 42.75279f, -45f, 16);
			func_319(&Var0, 1509.76f, -2102.439f, 44.25107f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -3929.88f, -2589.017f, -9.95133f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
	}
}

void func_280()
{
	switch (func_180())
	{
		case 0:
			func_320(Local_281.f_18.f_51[0], func_277(), 12f);
			break;
		case 1:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-4326.079f, -3445.069f, 31.483f, -3f, -5f, -4f, 48f, 4f, 3f, "slumpHuntRio1");
			if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-4302.172f, -3444.35f, 33.08683f, 10f, 6, -1, 0);
			break;
		case 2:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3890.429f, -2464.78f, -11.246f, -2f, 2f, 79f, 53f, 4f, 3f, "slumpHuntCholla1");
			if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-3896.965f, -2403.786f, -12.36896f, 12f, 2, -1, 0);
			break;
		case 3:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2204.084f, -2879.555f, 19.58f, 0f, -20f, 44f, 41f, 6f, 3f, "slumpHuntHennig1");
			if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-2190.508f, -2867.223f, 25.40727f, 12f, 2, -1, 0);
			break;
		case 4:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2077.611f, -1386.821f, 126.729f, 0f, 9f, 76f, 55f, 4f, 3f, "slumpHuntTlTrees1");
			if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-2083.065f, -1412.265f, 130.8061f, 12f, 2, -1, 0);
			break;
		case 5:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-863.525f, 523.014f, 61.494f, 0f, -6f, -20f, 72f, 4f, 3f, "slumpHuntTlTrees1");
			if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-897.4304f, 535.6448f, 57.2746f, 12f, 2, -1, 0);
			break;
		case 6:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(281.006f, 229.583f, 106.618f, 9f, -9f, 71f, 64f, 4f, 4f, "slumpHuntTwnStack1");
			if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(290.999f, 262.044f, 110.394f, 5f, 3, -1, 0);
			break;
		case 7:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1530.822f, 1352.741f, 153.023f, -4f, 26f, 2f, 25f, 4f, 4f, "slumpHuntOcreaghs1");
			if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(1548.084f, 1355.097f, 145.176f, 12f, 2, -1, 0);
			break;
		case 8:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2605.391f, 1185.667f, 140.615f, 3f, 26f, 3f, 100f, 4f, 4f, "slumpAnnesburg1");
			if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(2652.989f, 1189.503f, 117.783f, 12f, 2, -1, 0);
			break;
		case 9:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1512.404f, -2112.008f, 44.296f, 0f, 0f, -76f, 17f, 4f, 4f, "slumpAnnesburg1");
			if (VOLUME::_DOES_VOLUME_EXIST(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(1509.102f, -2101.449f, 44.413f, 12f, 2, -1, 0);
			break;
	}
}

void func_281(int iParam0)
{
	func_173(&(Local_281.f_18.f_47), iParam0);
}

bool func_282(int iParam0, int iParam1)
{
	return func_143((Local_281.f_18.f_1[iParam0 /*4*/])->f_3, iParam1);
}

void func_283()
{
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_193(0), func_148(0)))
	{
	}
	else
	{
		func_293(func_193(0), 0);
		PED::_0x6569F31A01B4C097(func_193(0), 4, 1);
		ENTITY::_0x8C03CD6B5E0E85E8(func_193(0), joaat("hunter"));
		ENTITY::_0x18FF3110CF47115D(func_193(0), 7, 0);
		Local_281.f_18.f_1[0 /*4*/] = MAP::_BLIP_ADD_FOR_ENTITY(-773443467, func_193(0));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_193(0), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_34));
		Local_281.f_18.f_49 = func_321("RE_LF_USECHECK", joaat("INPUT_CONTEXT_Y"), func_193(0), 2, 1, 0, 0, 5, 2f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		func_322(Local_281.f_18.f_49, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(func_193(0)), 0, 1);
		func_323(0, 1073741824 /* Float: 2f */);
	}
}

int func_284(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (func_143((Local_56[iParam1 /*7*/])->f_1, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_285()
{
	int iVar0;

	if (!func_102(32, 255))
	{
		func_324(Local_281.f_1, Local_281.f_3);
		if (!func_102(1024, 255))
		{
			func_325(Local_281.f_1);
			func_121(1024);
		}
		iVar0 = func_230(Local_281.f_1, Local_281.f_2);
		func_326(iVar0);
		func_327(iVar0);
		func_117(2);
		func_328(Local_281.f_9);
		func_329(Local_281.f_1);
		func_121(32);
	}
}

void func_286()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = Local_281.f_18.f_49;
	bVar1 = true;
	if (!func_330(iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(func_193(0)))
	{
		if (bVar1)
		{
			func_331(iVar0, 0, 1, 1);
			func_332(iVar0, 0, 1);
			bVar1 = false;
		}
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_333(iVar2, func_193(0), 1, 1) > 2f)
	{
		if (bVar1)
		{
			func_331(iVar0, 0, 1, 1);
			func_332(iVar0, 0, 1);
			bVar1 = false;
		}
		return;
	}
	if (PED::_0xA911EE21EDF69DAF(iVar2))
	{
		bVar1 = false;
	}
	else if (func_334())
	{
		bVar1 = false;
	}
	else if (func_335())
	{
		bVar1 = false;
	}
	if (!bVar1)
	{
		func_331(iVar0, 0, 1, 1);
		func_332(iVar0, 1, 1);
	}
	else
	{
		func_331(iVar0, 1, 1, 1);
		func_332(iVar0, 1, 1);
		bVar1 = true;
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(func_193(0), 2f, 0, 1, 0, "NB_SLUMPED_CORPSE_PROMPT", 0);
	}
}

void func_287()
{
	if (!func_62(2))
	{
		return;
	}
	func_117(8);
}

void func_288(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

bool func_289(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_330(iParam0))
	{
		return false;
	}
	iVar0 = func_336(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_290(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_330(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_336(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_337(iVar0);
	*uParam0 = 0;
}

void func_291()
{
	func_338();
	if (func_284(1, 255))
	{
		if (!func_284(2, 255))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, func_148(1)))
			{
				if (func_339(Global_34, 1369124074, 1, 0))
				{
					if (!func_232(1))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 256, 0);
						func_281(1);
						TASK::TASK_ENTER_ANIM_SCENE(Global_34, func_148(1), "player", func_254(), 1069379748, 1, 8, 20000, -1082130432);
					}
				}
			}
			else
			{
				func_225(2);
			}
		}
		else if (!func_284(4, 255))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, func_148(1)))
			{
				func_145();
				func_225(4);
			}
		}
	}
}

void func_292()
{
	if (!func_62(8))
	{
		return;
	}
	func_117(16);
}

void func_293(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

void func_294()
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_284(16, 255) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[1])))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((Local_281.f_18.f_1[1 /*4*/])->f_1))
		{
			(Local_281.f_18.f_1[1 /*4*/])->f_1 = NETWORK::NET_TO_PED(&(Local_21.f_7.f_1[1]));
		}
		else
		{
			PED::_0xBD75500141E4725C(func_193(1), -1270154578);
			PED::SET_PED_COMBAT_ATTRIBUTES(func_193(1), 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(func_193(1), 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(func_193(1), 67, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(func_193(1), 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(func_193(1), 25, true);
			PED::SET_PED_CONFIG_FLAG(func_193(1), 224, true);
			PED::SET_PED_CONFIG_FLAG(func_193(1), 263, true);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(func_193(1), 2f);
			uVar0 = func_340(func_277(), 0f, 0f, 0f, 20f, 20f, 20f, -432403087, 0, 8);
			iVar1 = SCRIPTS::COUNT_PLAYER_BITS(&uVar0);
			if (iVar1 > 1)
			{
				iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(func_193(1), 0);
				iVar2 = (iVar2 + ((iVar2 / 4) * iVar1));
				ENTITY::SET_ENTITY_MAX_HEALTH(func_193(1), iVar2);
				ENTITY::_SET_ENTITY_HEALTH(func_193(1), iVar2, 0);
			}
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_277()) < 60f || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(func_193(1), true, false)) < 60f)
			{
				func_341(1, joaat("BLIP_STYLE_ENEMY"));
			}
			func_225(16);
		}
	}
}

void func_295()
{
	if (func_284(1, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_193(1)))
		{
			if (!PED::IS_PED_IN_COMBAT(func_193(1), 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_193(1), ENTITY::GET_ENTITY_COORDS(func_193(0), true, false), 10f, 1048576, 0);
			}
		}
	}
}

int func_296(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_342(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_297(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_342(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_298(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_161(&Var1, uParam0))
	{
		iVar0 = ((func_343() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_299(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_300(int iParam0, int iParam1)
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

void func_301(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 44, &(Global_1051202->f_16[15]));
	func_344(uParam0, uParam0->f_1);
}

var func_302()
{
	return Local_281.f_3;
}

int func_303(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

int func_304(int iParam0)
{
	return (Local_281.f_79.f_7[iParam0 /*11*/])->f_4;
}

float func_305(int iParam0)
{
	return (Local_281.f_79.f_7[iParam0 /*11*/])->f_5;
}

Vector3 func_306(int iParam0)
{
	return (Local_281.f_79.f_7[iParam0 /*11*/])->f_6;
}

void func_307(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, false, 1, 1, 1, 0);
	}
}

int func_308(char[32] cParam0, var uParam8, var uParam9)
{
	int iVar0;
	struct<4> Var1;
	int iVar12;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1 = SCRIPTS::_GET_HASH_OF_THREAD(iVar0);
	Var1.f_1 = NETWORK::_0xFB9ECED5B68F3B78(iVar0);
	Var1.f_3 = { cParam0 };
	iVar12 = func_345(&Var1);
	if (iVar12 != -1)
	{
		switch (Global_1247906[iVar12 /*29*/])
		{
			case 4:
				*uParam9 = { ((*Global_1247906)[iVar12 /*29*/])->f_22 };
				func_346(iVar12);
				return 2;
			case 3:
				*uParam9 = { ((*Global_1247906)[iVar12 /*29*/])->f_22 };
				func_346(iVar12);
				return 1;
		}
	}
	else
	{
		if (func_347())
		{
			return 0;
		}
		if (!func_348(&Var1))
		{
			return 0;
		}
		if (!func_349(uParam8))
		{
			uParam9->f_3 = 2;
			return 2;
		}
		func_350(uParam8, &Var1);
	}
	return 0;
}

void func_309(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_351(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_310(int iParam0)
{
	return (Local_281.f_79.f_7[iParam0 /*11*/])->f_10;
}

void func_311(int iParam0, char* sParam1, bool bParam2)
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

void func_312(int iParam0)
{
}

int func_313(int iParam0)
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

struct<2> func_314(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_315(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_352() - fParam1);
	func_353(uParam0, 1);
	func_354(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_316(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_317(var uParam0)
{
	if (!func_268(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_355(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_352() - uParam0->f_1);
}

int func_318(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

void func_319(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	float fVar20;
	float fVar21;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, uParam0->f_1) };
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, uParam0->f_4) };
	vVar10 = { func_356(vVar7 - vVar4) };
	vVar13 = { func_357(vVar10, 2) };
	vVar16 = { vVar4 + vVar10 * FtoV((BUILTIN::VDIST(vVar4, vVar7) * uParam0->f_7)) + Vector(uParam0->f_8, uParam0->f_8, uParam0->f_8) * vVar13 };
	iVar19 = 0;
	if (func_143(*uParam0, 1))
	{
		GRAPHICS::_0x41F88A85A579A61D(uParam0->f_9);
		while (func_358(&fVar0, &vVar1, uParam0->f_10, vVar4, vVar7, vVar16))
		{
			GRAPHICS::_0xDD9DC1AB63D513CE(vVar1);
			iVar19++;
			if (iVar19 > iParam5)
			{
			}
		else
		{
			}
		}
		GRAPHICS::_0x812C1563185C6FB2();
		iVar19 = 0;
		fVar0 = 0f;
		vVar1 = { 0f, 0f, 0f };
	}
	if (func_143(*uParam0, 2))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11))
		{
			GRAPHICS::_0x4BD66B4E3427689B(uParam0->f_11);
			while (func_358(&fVar0, &vVar1, uParam0->f_13, vVar4, vVar7, vVar16))
			{
				MISC::SET_RANDOM_SEED(BUILTIN::TIMERA());
				if ((uParam0->f_12 < 0f || uParam0->f_12 >= 1f) || MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= uParam0->f_12)
				{
					GRAPHICS::_0xF5E45CB1CF965D2D(vVar1);
					iVar19++;
					if (iVar19 > iParam5)
					{
					}
				else
				{
					}
					GRAPHICS::_0xF2F543D48F319A3A();
					iVar19 = 0;
					fVar0 = 0f;
					vVar1 = { 0f, 0f, 0f };
					if (func_143(*uParam0, 4))
					{
						while (func_358(&fVar0, &vVar1, uParam0->f_21, vVar4, vVar7, vVar16))
						{
							MISC::SET_RANDOM_SEED(BUILTIN::TIMERA());
							if ((uParam0->f_14 < 0f || uParam0->f_14 >= 1f) || MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= uParam0->f_14)
							{
								fVar20 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_15, uParam0->f_16);
								fVar21 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_17, uParam0->f_18);
								GRAPHICS::_ADD_BLOOD_POOL_2(vVar1, fVar20, fVar21, uParam0->f_20, 0, -1, 0);
								iVar19++;
								if (iVar19 > iParam5)
								{
								}
							else
							{
								}
								iVar19 = 0;
								fVar0 = 0f;
								vVar1 = { 0f, 0f, 0f };
							}
						}
					}
				}
			}
		}
	}

void func_320(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = -1;
	func_359(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

int func_321(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_360(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949759[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_361(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_322(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_330(iParam0))
	{
		return;
	}
	iVar0 = func_336(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

void func_323(int iParam0, int iParam1)
{
	func_173(&((Local_281.f_18.f_1[iParam0 /*4*/])->f_3), iParam1);
}

void func_324(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_262(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_93(&Var0, 4) && func_362(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_325(int iParam0)
{
	func_363();
	func_364(iParam0);
}

void func_326(int iParam0)
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
	func_365(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_100((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_366(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_366(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_366(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_366(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_327(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_301(&Var0);
}

void func_328(struct<2> Param0)
{
	struct<32> Var0;

	if (func_228(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_228(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_228(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_367(Param0, &Var0))
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

void func_329(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_262(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

bool func_330(int iParam0)
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

void func_331(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_330(iParam0))
	{
		return;
	}
	iVar0 = func_336(iParam0);
	if (bParam1)
	{
		func_368(iParam0, 4);
		if (bParam3)
		{
			func_369(iVar0, 1);
		}
		func_370(iVar0, 1);
	}
	else
	{
		func_371(iParam0, 4);
		func_370(iVar0, 0);
	}
}

void func_332(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_330(iParam0))
	{
		return;
	}
	iVar0 = func_336(iParam0);
	func_369(iVar0, iParam1);
}

float func_333(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_334()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((PED::GET_PED_CONFIG_FLAG(iVar0, 227, true) || PED::_0x84D0BF2B21862059(iVar0)) || func_372(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_335()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return 0;
}

int func_336(int iParam0)
{
	return iParam0;
}

void func_337(int iParam0)
{
	if (!func_373(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949759)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949759)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949759)[iParam0 /*23*/] = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_15 = -1f;
}

void func_338()
{
	if (!ANIMSCENE::_0x25557E324489393C(func_148(1)) || !ANIMSCENE::_0x477122B8D05E7968(func_148(1), 1, 0))
	{
		return;
	}
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_148(1)))
	{
		if (func_374(func_148(1), "body", 0) != func_193(0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(func_148(1), func_258(1), func_259(1), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(1), func_260(), func_193(0), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(1), "ROCK", func_261(0), 0);
		}
	}
	if (func_284(1, 255))
	{
		if (func_374(func_148(1), func_375(), 0) != PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(1), func_375(), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
		}
	}
}

int func_339(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (!bParam3 && func_376(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_340(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_377() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_378());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_378());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_378());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_379(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_380(iVar2))
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
				if (iVar9 & 8192 != 0 && func_381(iVar2) != 1)
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
					if (!func_382(iVar10))
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

void func_341(int iParam0, int iParam1)
{
	if (!func_383(255))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_281.f_18.f_1[iParam0 /*4*/])))
	{
		Local_281.f_18.f_1[iParam0 /*4*/] = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, func_193(iParam0));
	}
}

int func_342(struct<2> Param0, var uParam2)
{
	if (!func_37(Param0))
	{
		return 0;
	}
	func_384(uParam2);
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

int func_343()
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

void func_344(var uParam0, var uParam1)
{
}

int func_345(var uParam0)
{
	int iVar0;

	if (!func_385(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_386(&(((*Global_1247906)[iVar0 /*29*/])->f_1), uParam0))
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

void func_346(int iParam0)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 1;
	Var0.f_26 = iParam0;
	func_387(&Var0);
}

bool func_347()
{
	return Global_1248886->f_75.f_1 != -1;
}

int func_348(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_385(uParam0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (((*Global_1247906)[iVar1 /*29*/])->f_1 == *uParam0 && ((*Global_1247906)[iVar1 /*29*/])->f_1.f_1 == uParam0->f_1)
		{
			return 0;
		}
		if (Global_1247906[iVar1 /*29*/] == -1)
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

int func_349(var uParam0)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	if (func_175(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_350(var uParam0, var uParam1)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = { *uParam0 };
	Var0.f_15 = { *uParam1 };
	Global_1248886->f_75 = { *uParam1 };
	func_387(&Var0);
}

float func_351(float fParam0, float fParam1, float fParam2)
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

float func_352()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_353(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_354(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_355(var uParam0)
{
	return func_316(*uParam0, 2);
}

Vector3 func_356(vector3 vParam0)
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

Vector3 func_357(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.f_1 = vParam0.x;
			break;
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.f_1 = -vParam0.y;
			break;
		case 2:
			vVar0.x = vParam0.y;
			vVar0.f_1 = -vParam0.x;
			break;
	}
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

int func_358(float fParam0, var uParam1, float fParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	if (*fParam0 > 1f || *fParam0 < 0f)
	{
		return 0;
	}
	*uParam1 = { func_388(vParam3, vParam9, vParam6, *fParam0) };
	if (!func_389(uParam1, 1, 10, 0, 0))
	{
		return 0;
	}
	if (*fParam0 != 1f)
	{
		*fParam0 = (*fParam0 + fParam2);
		if (*fParam0 > 1f)
		{
			*fParam0 = 1f;
		}
	}
	else
	{
		*fParam0 = -1f;
	}
	return 1;
}

void func_359(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_234(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_234(uParam0))
		{
		}
	}
}

bool func_360(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_361(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_369(iParam0, 1);
	func_370(iParam0, 1);
	func_371(iParam0, 128);
}

int func_362(int iParam0)
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

void func_363()
{
	func_100(&(Global_1245803->f_2003));
}

void func_364(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_262(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_365(int iParam0, var uParam1, var uParam2)
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

struct<2> func_366(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_367(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_342(Param0, &vVar0);
	if (func_390(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

void func_368(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_369(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_360(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_370(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_371(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

int func_372(int iParam0)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	if (((PED::_0x34D6AC1157C8226C(iParam0, 1020517461) || PED::_0x34D6AC1157C8226C(iParam0, 1259174088)) || PED::_0x34D6AC1157C8226C(iParam0, -1075420544)) || PED::_0x34D6AC1157C8226C(iParam0, -1767895052))
	{
		return 1;
	}
	return 0;
}

bool func_373(int iParam0)
{
	return func_360(iParam0, 2);
}

int func_374(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	return 0;
}

char* func_375()
{
	if (PED::IS_PED_MALE(Global_34))
	{
		return "player";
	}
	else
	{
		return "player_f";
	}
	return "";
}

int func_376(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, uParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_377()
{
	return Global_1051202->f_12;
}

char* func_378()
{
	return "unnamed";
}

int func_379(int iParam0)
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

int func_380(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_391(35, iParam0);
}

int func_381(int iParam0)
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

bool func_382(int iParam0)
{
	if (func_392(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_393(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

bool func_383(int iParam0)
{
	return func_102(8, iParam0);
}

void func_384(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_385(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return 0;
	}
	if (*uParam0 == -1)
	{
		return 0;
	}
	if (uParam0->f_1 == -1)
	{
		return 0;
	}
	return 1;
}

int func_386(var uParam0, var uParam1)
{
	if (uParam0->f_1 != uParam1->f_1)
	{
		return 0;
	}
	if (*uParam0 != *uParam1)
	{
		return 0;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_3), &(uParam1->f_3)))
	{
		return 0;
	}
	return 1;
}

void func_387(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[16] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[16])))
	{
		return;
	}
	uParam0->f_4 = uParam0->f_4;
	*uParam0 = 177;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 27, 37, &(Global_1051202->f_16[16]));
	func_394(uParam0);
}

Vector3 func_388(vector3 vParam0, vector3 vParam3, vector3 vParam6, var uParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_395(vParam0, vParam3, uParam9) };
	vVar3 = { func_395(vParam3, vParam6, uParam9) };
	return func_395(vVar0, vVar3, uParam9);
}

int func_389(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_396(*uParam0, 0f, 0f, 0f))
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

int func_390(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_397(iParam0))
	{
		return 0;
	}
	if (func_398(iParam0, uParam1, &uVar0))
	{
		func_399(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_391(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_400(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_401())
	{
		return func_400(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_400(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_392(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_393(int iParam0)
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
		func_402(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_403(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_394(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_404(iVar0);
		if (func_143(uParam0->f_5.f_9, iVar1))
		{
		}
		iVar0++;
	}
}

Vector3 func_395(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_396(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_397(int iParam0)
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

bool func_398(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_405(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_399(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_406(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_407(iVar0);
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
			uParam2->f_5 = func_408(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_409(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_410(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_411(iVar0);
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

bool func_400(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_401()
{
	return Global_1099294->f_339;
}

void func_402(int iParam0)
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
	func_403(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_403(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_404(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_405(int iParam0)
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

int func_406(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_412(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_407(int iParam0)
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

int func_408(int iParam0)
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

int func_409(int iParam0)
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

int func_410(int iParam0)
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

int func_411(int iParam0)
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

int func_412(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_413(iParam0, uParam1, &uVar0))
	{
		func_414(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_413(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_405(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_414(var uParam0, int iParam1, var uParam2)
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

