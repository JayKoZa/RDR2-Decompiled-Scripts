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
	struct<8> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 3;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 2;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	struct<4> Local_34[32];
	struct<173> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0 } ;
	var uLocal_336 = 0;
	var uLocal_337 = 1;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 1065353216;
	var uLocal_341 = 0;
	var uLocal_342 = 1065353216;
	var uLocal_343 = 1077936128;
	var uLocal_344 = 1108082688;
	var uLocal_345 = 1113325568;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 1;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	float fLocal_363 = 0f;
	float fLocal_364 = 0f;
	var uLocal_365 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_363 = 1f;
	fLocal_364 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 21, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 21, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_34, 129, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_34[0 /*4*/]), 129, "m_clientData");
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
	else if (func_17(Local_163.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_163.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_163.f_12), Local_163.f_9))
	{
		return 1;
	}
	else if (Local_163.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_163, &uParam0, 5);
	iVar19 = func_30(&bVar18, Local_163.f_1, Local_163.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_163.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_31(&Var0, Local_163.f_1, Local_163.f_2, Local_163.f_3, iVar17);
	Local_163.f_9 = { func_32(Var0.f_5, 8) };
	Local_163.f_14 = Var0.f_5;
	Local_163.f_15 = { Var0.f_11 };
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
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
	if (func_36(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_37(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_38(iParam3, 255))
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
	if (func_39())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_36(*Global_1051163))
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
		func_40();
	}
	switch (Local_13)
	{
		case 0:
			func_41();
			break;
		case 1:
			func_42();
			break;
		case 2:
			func_43();
			break;
		case 3:
			func_44();
			break;
		case 4:
			func_45();
			break;
		case 5:
			func_46();
			break;
	}
}

void func_23()
{
	func_47();
	if (Local_163.f_8 <= 5)
	{
		func_48();
	}
	switch (Local_163.f_8)
	{
		case 0:
			func_49();
			break;
		case 1:
			func_50();
			break;
		case 2:
			func_51();
			break;
		case 3:
			func_52();
			break;
		case 4:
			func_53();
			break;
		case 5:
			func_54();
			break;
	}
}

void func_24()
{
}

void func_25()
{
	if (func_55())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_56();
}

void func_26()
{
	func_57();
}

void func_27()
{
	if (Local_163.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_58(Local_163.f_12, 4);
		}
	}
	func_59();
	if (func_60(32))
	{
		func_61(Local_13.f_6);
	}
	func_62();
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
	func_63(&Var0, Var26);
	iVar25 = func_64(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_65(iVar25) };
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
			func_66(uParam0, iParam2);
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
			func_67(uParam0);
			switch (iParam2)
			{
				case 0:
					func_68(uParam0);
					uParam0->f_5 = 277430601;
					uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_68(uParam0);
					uParam0->f_5 = 1659133778;
					uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_68(uParam0);
					uParam0->f_5 = 1296650927;
					uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_68(uParam0);
					uParam0->f_5 = 2115437634;
					uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_68(uParam0);
					uParam0->f_5 = 1098622970;
					uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_68(uParam0);
					uParam0->f_5 = 393263596;
					uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_68(uParam0);
					uParam0->f_5 = 189453630;
					uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_68(uParam0);
					uParam0->f_5 = -98921343;
					uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_68(uParam0);
					uParam0->f_5 = 6025033;
					uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_68(uParam0);
					uParam0->f_5 = -1060299979;
					uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_68(uParam0);
					uParam0->f_5 = 682088681;
					uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_68(uParam0);
					uParam0->f_5 = 1705841922;
					uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_68(uParam0);
					uParam0->f_5 = -301205165;
					uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_68(uParam0);
					uParam0->f_5 = 1906160715;
					uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_68(uParam0);
					uParam0->f_5 = -1129906020;
					uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_68(uParam0);
					uParam0->f_5 = 1592980994;
					uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_68(uParam0);
					uParam0->f_5 = 686459378;
					uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_68(uParam0);
					uParam0->f_5 = -259262381;
					uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_68(uParam0);
					uParam0->f_5 = 1289806844;
					uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_68(uParam0);
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
			func_67(uParam0);
			switch (iParam2)
			{
				case 0:
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
					uParam0->f_5 = 1454566440;
					uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
					uParam0->f_5 = 1141360338;
					uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
					uParam0->f_5 = 844768119;
					uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_69(uParam0, 0);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 4);
					func_69(uParam0, 5);
					func_69(uParam0, 7);
					uParam0->f_5 = -1601993562;
					uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_69(uParam0, 0);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
					func_69(uParam0, 7);
					uParam0->f_5 = -901588956;
					uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_69(uParam0, 0);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
					func_69(uParam0, 7);
					uParam0->f_5 = 2129019244;
					uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_69(uParam0, 0);
					func_69(uParam0, 2);
					func_69(uParam0, 4);
					func_69(uParam0, 5);
					func_69(uParam0, 6);
					uParam0->f_5 = 1227099802;
					uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_69(uParam0, 0);
					func_69(uParam0, 2);
					func_69(uParam0, 4);
					func_69(uParam0, 5);
					func_69(uParam0, 6);
					uParam0->f_5 = -940471213;
					uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_69(uParam0, 0);
					func_69(uParam0, 2);
					func_69(uParam0, 4);
					func_69(uParam0, 5);
					func_69(uParam0, 6);
					uParam0->f_5 = -700569364;
					uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					uParam0->f_5 = 412376369;
					uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_69(uParam0, 0);
					func_69(uParam0, 2);
					func_69(uParam0, 5);
					func_69(uParam0, 7);
					uParam0->f_5 = -364052317;
					uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					uParam0->f_5 = -989186530;
					uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_69(uParam0, 0);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 4);
					func_69(uParam0, 5);
					func_69(uParam0, 6);
					uParam0->f_5 = 333858683;
					uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					uParam0->f_5 = -39511303;
					uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_69(uParam0, 3);
					func_69(uParam0, 4);
					func_69(uParam0, 5);
					func_69(uParam0, 6);
					uParam0->f_5 = 813662381;
					uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
					func_69(uParam0, 7);
					uParam0->f_5 = -1114006686;
					uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
					func_69(uParam0, 7);
					uParam0->f_5 = 1049238845;
					uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
					func_69(uParam0, 7);
					uParam0->f_5 = 1363886783;
					uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
					uParam0->f_5 = -1215674354;
					uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					uParam0->f_5 = 1902132155;
					uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 5);
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
			func_67(uParam0);
			uParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_68(uParam0);
					uParam0->f_5 = 1382777618;
					uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_68(uParam0);
					uParam0->f_5 = -2000681184;
					uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_68(uParam0);
					uParam0->f_5 = 886884092;
					uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_68(uParam0);
					uParam0->f_5 = -1277120723;
					uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_68(uParam0);
					uParam0->f_5 = 1577436816;
					uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_68(uParam0);
					uParam0->f_5 = -234749781;
					uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_68(uParam0);
					uParam0->f_5 = -1607623039;
					uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_68(uParam0);
					uParam0->f_5 = -1943295936;
					uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_68(uParam0);
					uParam0->f_5 = -397730168;
					uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_68(uParam0);
					uParam0->f_5 = -392659534;
					uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_68(uParam0);
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
			func_67(uParam0);
			switch (iParam2)
			{
				case 0:
					func_68(uParam0);
					uParam0->f_5 = 1247886914;
					uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_68(uParam0);
					uParam0->f_5 = 1926100410;
					uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_68(uParam0);
					uParam0->f_5 = 603340011;
					uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_68(uParam0);
					uParam0->f_5 = -1253915394;
					uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_68(uParam0);
					uParam0->f_5 = 1281783573;
					uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_68(uParam0);
					uParam0->f_5 = -1384936716;
					uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_68(uParam0);
					uParam0->f_5 = 636669604;
					uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_68(uParam0);
					uParam0->f_5 = 1410575087;
					uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_68(uParam0);
					uParam0->f_5 = -736919321;
					uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_68(uParam0);
					uParam0->f_5 = 1755496218;
					uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_68(uParam0);
					uParam0->f_5 = -1810033095;
					uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_68(uParam0);
					uParam0->f_5 = 99707271;
					uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_68(uParam0);
					uParam0->f_5 = 2145033839;
					uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_68(uParam0);
					uParam0->f_5 = -994111457;
					uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_68(uParam0);
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
					func_70(uParam0, 0);
					func_70(uParam0, 1);
					func_70(uParam0, 4);
					func_70(uParam0, 5);
					break;
				case 1:
					func_70(uParam0, 2);
					func_70(uParam0, 3);
					func_70(uParam0, 6);
					func_70(uParam0, 7);
					func_71(uParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_69(uParam0, 0);
					uParam0->f_5 = -88606612;
					uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_69(uParam0, 1);
					uParam0->f_5 = -1507537085;
					uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_69(uParam0, 0);
					uParam0->f_5 = 150331424;
					uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_69(uParam0, 1);
					uParam0->f_5 = -74168995;
					uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_69(uParam0, 0);
					uParam0->f_5 = -1303456769;
					uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_69(uParam0, 1);
					uParam0->f_5 = 2080696176;
					uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_69(uParam0, 0);
					uParam0->f_5 = -801880493;
					uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_69(uParam0, 1);
					uParam0->f_5 = -2098877513;
					uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_69(uParam0, 0);
					uParam0->f_5 = -985131289;
					uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_69(uParam0, 1);
					uParam0->f_5 = 171385032;
					uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_69(uParam0, 0);
					uParam0->f_5 = -690365399;
					uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_69(uParam0, 1);
					uParam0->f_5 = -393773180;
					uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_69(uParam0, 0);
					uParam0->f_5 = 1783045643;
					uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_69(uParam0, 1);
					uParam0->f_5 = -1841828372;
					uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_69(uParam0, 0);
					uParam0->f_5 = -1926357119;
					uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_69(uParam0, 1);
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
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
					uParam0->f_5 = 666420762;
					uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 8);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
					uParam0->f_5 = 1145423923;
					uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 4);
					func_69(uParam0, 5);
					func_69(uParam0, 6);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
					uParam0->f_5 = -1176575305;
					uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
					uParam0->f_5 = -888961792;
					uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
					uParam0->f_5 = -1145898130;
					uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 4);
					func_69(uParam0, 7);
					func_69(uParam0, 8);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
					uParam0->f_5 = -264936334;
					uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 6);
					func_69(uParam0, 7);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
					uParam0->f_5 = -562839313;
					uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 4);
					func_69(uParam0, 5);
					func_69(uParam0, 6);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
					uParam0->f_5 = -819926700;
					uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
					uParam0->f_5 = -100890882;
					uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_69(uParam0, 1);
					func_69(uParam0, 2);
					func_69(uParam0, 5);
					func_69(uParam0, 9);
					func_69(uParam0, 10);
					func_69(uParam0, 11);
					func_72(uParam0, iParam3);
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
			func_67(uParam0);
			switch (iParam2)
			{
				case 0:
					func_68(uParam0);
					uParam0->f_5 = -1562903685;
					uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_68(uParam0);
					uParam0->f_5 = 442262250;
					uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_68(uParam0);
					uParam0->f_5 = 2113001754;
					uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_68(uParam0);
					uParam0->f_5 = 222101843;
					uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_68(uParam0);
					uParam0->f_5 = 862535295;
					uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_68(uParam0);
					uParam0->f_5 = 267494763;
					uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_68(uParam0);
					uParam0->f_5 = 492498900;
					uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_68(uParam0);
					uParam0->f_5 = -735417347;
					uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_68(uParam0);
					uParam0->f_5 = 2000289900;
					uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_68(uParam0);
					uParam0->f_5 = 1820563970;
					uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_68(uParam0);
					uParam0->f_5 = 1501808210;
					uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_68(uParam0);
					uParam0->f_5 = -1103422576;
					uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_68(uParam0);
					uParam0->f_5 = -375108461;
					uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_68(uParam0);
					uParam0->f_5 = 1074344160;
					uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_68(uParam0);
					uParam0->f_5 = 1375567406;
					uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_68(uParam0);
					uParam0->f_5 = 1695022182;
					uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_68(uParam0);
					uParam0->f_5 = 1773241795;
					uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_68(uParam0);
					uParam0->f_5 = 1650499101;
					uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_68(uParam0);
					uParam0->f_5 = 149116609;
					uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_68(uParam0);
					uParam0->f_5 = 1486166046;
					uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_68(uParam0);
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
			func_67(uParam0);
			func_71(uParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_68(uParam0);
					uParam0->f_5 = -1657923088;
					uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_68(uParam0);
					uParam0->f_5 = -1268232386;
					uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_68(uParam0);
					uParam0->f_5 = 1926851120;
					uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_68(uParam0);
					uParam0->f_5 = -66052340;
					uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_68(uParam0);
					uParam0->f_5 = 1738334804;
					uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_68(uParam0);
					uParam0->f_5 = 1009780912;
					uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_68(uParam0);
					uParam0->f_5 = -1560771476;
					uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_68(uParam0);
					uParam0->f_5 = 453813335;
					uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_68(uParam0);
					uParam0->f_5 = 786924542;
					uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_68(uParam0);
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
					func_73(uParam0, iParam3);
					uParam0->f_5 = 1323108111;
					uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_73(uParam0, iParam3);
					uParam0->f_5 = -1505479200;
					uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_73(uParam0, iParam3);
					uParam0->f_5 = -1283075997;
					uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_73(uParam0, iParam3);
					uParam0->f_5 = -2100531475;
					uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_73(uParam0, iParam3);
					uParam0->f_5 = 269617530;
					uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_73(uParam0, iParam3);
					uParam0->f_5 = 1592829750;
					uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_73(uParam0, iParam3);
					uParam0->f_5 = 1817985549;
					uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_73(uParam0, iParam3);
					uParam0->f_5 = 1945424739;
					uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_73(uParam0, iParam3);
					uParam0->f_5 = 1787314318;
					uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_73(uParam0, iParam3);
					uParam0->f_5 = 542354442;
					uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_73(uParam0, iParam3);
					uParam0->f_5 = 1510776727;
					uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_73(uParam0, iParam3);
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
			func_67(uParam0);
			switch (iParam2)
			{
				case 0:
					func_68(uParam0);
					uParam0->f_5 = -377638420;
					uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_68(uParam0);
					uParam0->f_5 = 1308799438;
					uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_68(uParam0);
					uParam0->f_5 = -1030922940;
					uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_68(uParam0);
					uParam0->f_5 = 1750043358;
					uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_68(uParam0);
					uParam0->f_5 = -1330609910;
					uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_68(uParam0);
					uParam0->f_5 = 223942444;
					uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_68(uParam0);
					uParam0->f_5 = 1067547121;
					uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_68(uParam0);
					uParam0->f_5 = -450732096;
					uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_68(uParam0);
					uParam0->f_5 = -1701940764;
					uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_68(uParam0);
					uParam0->f_5 = 1584258975;
					uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_68(uParam0);
					uParam0->f_5 = -98183174;
					uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_68(uParam0);
					uParam0->f_5 = -90261849;
					uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_68(uParam0);
					uParam0->f_5 = 754522971;
					uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_68(uParam0);
					uParam0->f_5 = 974542513;
					uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_68(uParam0);
					uParam0->f_5 = -790885273;
					uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_68(uParam0);
					uParam0->f_5 = -1447045452;
					uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_68(uParam0);
					uParam0->f_5 = -586115209;
					uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_68(uParam0);
					uParam0->f_5 = 224941020;
					uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_68(uParam0);
					uParam0->f_5 = -1179654578;
					uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_68(uParam0);
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
			func_67(uParam0);
			uParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_68(uParam0);
					uParam0->f_5 = 974582605;
					uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_68(uParam0);
					uParam0->f_5 = -964359125;
					uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_68(uParam0);
					uParam0->f_5 = -700339292;
					uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_68(uParam0);
					uParam0->f_5 = -470300912;
					uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_68(uParam0);
					uParam0->f_5 = -241343909;
					uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_68(uParam0);
					uParam0->f_5 = 1944053474;
					uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_68(uParam0);
					uParam0->f_5 = -2120646059;
					uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_68(uParam0);
					uParam0->f_5 = -1656440405;
					uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_68(uParam0);
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
			func_67(uParam0);
			func_71(uParam0, 1);
			func_71(uParam0, 4);
			func_71(uParam0, 8);
			func_71(uParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_68(uParam0);
					uParam0->f_5 = -1623035253;
					uParam0->f_11 = { func_75(func_74(iParam4)) };
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
					func_76(uParam0, iParam3);
					uParam0->f_5 = -1957221189;
					uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_76(uParam0, iParam3);
					uParam0->f_5 = 871956008;
					uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_76(uParam0, iParam3);
					uParam0->f_5 = -718829908;
					uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_76(uParam0, iParam3);
					uParam0->f_5 = -478076065;
					uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_76(uParam0, iParam3);
					uParam0->f_5 = 158131441;
					uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_76(uParam0, iParam3);
					uParam0->f_5 = 575051428;
					uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_76(uParam0, iParam3);
					uParam0->f_5 = -861587350;
					uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_76(uParam0, iParam3);
					uParam0->f_5 = -616671844;
					uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_76(uParam0, iParam3);
					uParam0->f_5 = -828875274;
					uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_76(uParam0, iParam3);
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
			func_67(uParam0);
			switch (iParam2)
			{
				case 0:
					func_68(uParam0);
					uParam0->f_5 = 2136361638;
					uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_68(uParam0);
					uParam0->f_5 = 1948005426;
					uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_68(uParam0);
					uParam0->f_5 = 462368629;
					uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_68(uParam0);
					uParam0->f_5 = -172629291;
					uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_68(uParam0);
					uParam0->f_5 = 1063777848;
					uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_68(uParam0);
					uParam0->f_5 = -267241827;
					uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_68(uParam0);
					uParam0->f_5 = -1183266453;
					uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_68(uParam0);
					uParam0->f_5 = -877826604;
					uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_68(uParam0);
					uParam0->f_5 = 1527533302;
					uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_68(uParam0);
					uParam0->f_5 = -865586768;
					uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_68(uParam0);
					uParam0->f_5 = 294379466;
					uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_68(uParam0);
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
			iVar17 = func_77(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				uParam0->f_7 = 1;
			}
			*uParam0 = func_78(iVar17);
			uParam0->f_1 = 0;
			uParam0->f_6 = 2;
			func_71(uParam0, 32);
			if (iParam2 != -1)
			{
				uParam0->f_9 = func_80(func_79(iVar17), iParam2);
				uParam0->f_15 = func_81(func_79(iVar17), iParam2);
				uParam0->f_5 = func_82(iVar17, iParam2);
				uParam0->f_11 = { func_83(iVar17, iParam2) };
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
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634), func_84(iParam1));
			break;
		case 3:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_602), func_84(iParam1));
			break;
		case 4:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_2104), func_84(iParam1));
			break;
		case 5:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_12606), func_84(iParam1));
			break;
		case 6:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_12908), func_84(iParam1));
			break;
		case 7:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_15910), func_84(iParam1));
			break;
		case 8:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_15981), func_84(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_86();
	}
	return Var0;
}

void func_33()
{
	func_87();
}

void func_34()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	func_88(&(Local_163.f_18.f_119));
	func_89(&(Local_163.f_18.f_119), 1);
	func_90(&(Local_163.f_18.f_119), 1);
}

void func_35()
{
}

int func_36(struct<2> Param0)
{
	if (!func_91(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_84(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_38(int iParam0, int iParam1)
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

int func_39()
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
	if (!func_36(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
}

void func_41()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1186267->f_231.f_1066[Local_163.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_31(&Var1, Local_163.f_1, Local_163.f_2, Local_163.f_3, iVar0);
	if (!func_92(&Var1, 1))
	{
		func_93(1);
		return;
	}
	Local_13.f_6 = func_74(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)));
	func_94(256);
	if (func_95(Local_13.f_6))
	{
		func_96(5);
		func_93(6);
	}
	else
	{
		func_93(1);
	}
}

void func_42()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_31(&Var0, Local_163.f_1, Local_163.f_2, -1, 255);
	if (func_92(&Var0, 1))
	{
		func_93(2);
		return;
	}
	if (func_97(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_163.f_15, Var0.f_10, 2442122);
		func_93(2);
	}
	else if (bVar17)
	{
		func_96(3);
		func_93(6);
	}
	if (!func_98(Local_13.f_3.f_2))
	{
		func_99(&(Local_13.f_3.f_2));
	}
	else if (func_100(Local_13.f_3.f_2) > 45000)
	{
		func_96(4);
		func_93(6);
	}
}

void func_43()
{
	if (func_101(1, 255))
	{
		if (!func_102(1))
		{
			if (func_103())
			{
				func_94(1);
			}
		}
		else
		{
			func_104();
			func_93(3);
		}
	}
}

void func_44()
{
	bool bVar0;

	if (func_101(2, 255))
	{
		if (!func_102(2))
		{
			bVar0 = true;
			if (!func_105())
			{
				bVar0 = false;
			}
			if (!func_106())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_94(2);
			}
		}
		else
		{
			func_107();
			func_93(4);
		}
	}
}

void func_45()
{
	func_108();
	func_109();
	func_110();
	if (func_111() || Local_13.f_2 != 0)
	{
		func_112();
		func_93(5);
	}
}

void func_46()
{
	if (func_101(4, 255))
	{
		if (func_113())
		{
			func_94(4);
			func_93(6);
		}
	}
}

void func_47()
{
	if (!func_102(256))
	{
		return;
	}
	if (func_102(512))
	{
		if (func_60(32) && func_74(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_61(Local_13.f_6);
			func_114(32);
		}
	}
	else if (!func_60(32))
	{
		if (func_74(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_115(Local_13.f_6, 1, 1);
			func_116(32);
		}
	}
	else if (func_74(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_61(Local_13.f_6);
		func_114(32);
	}
}

void func_48()
{
	func_117();
}

void func_49()
{
	if (Local_13 == 6)
	{
		func_118(6);
	}
	else if (Local_13 > 0)
	{
		func_47();
		func_118(1);
	}
}

void func_50()
{
	if (Local_13 == 6)
	{
		func_118(6);
	}
	else if (Local_13 > 1)
	{
		func_118(2);
	}
}

void func_51()
{
	bool bVar0;
	int iVar1;

	if (!func_101(1, 255))
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
			if (!func_98(Local_163.f_11))
			{
				func_99(&(Local_163.f_11));
			}
			if (func_100(Local_163.f_11) >= iVar1)
			{
				func_118(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_122(&(Local_163.f_11));
		func_123();
		func_118(3);
	}
}

void func_52()
{
	int iVar0;

	if (!func_101(2, 255))
	{
		if (func_124())
		{
			func_121(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_98(Local_163.f_11))
			{
				func_99(&(Local_163.f_11));
			}
			if (func_125(Local_163.f_11) >= iVar0)
			{
				func_118(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_122(&(Local_163.f_11));
		func_126();
		func_127();
		func_128();
		func_129();
		func_118(4);
	}
}

void func_53()
{
	if (Local_13 >= 5)
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

void func_54()
{
	if (!func_101(4, 255))
	{
		if (func_137())
		{
			func_138();
			func_58(Local_163.f_12, 4);
			func_121(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_118(6);
	}
}

bool func_55()
{
	return (func_102(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_56()
{
}

void func_57()
{
	func_139(&(Local_163.f_172.f_13));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_163.f_172.f_11))
	{
		VOLUME::_DELETE_VOLUME(Local_163.f_172.f_11);
	}
}

void func_58(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_140(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_59()
{
	int iVar0;
	bool bVar1;

	if (!func_60(1))
	{
		return;
	}
	if (func_60(4))
	{
		return;
	}
	if (!func_60(2))
	{
		iVar0 = -1;
	}
	else if (!func_60(8))
	{
		iVar0 = 2;
	}
	else if (func_60(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_141(Local_163.f_9, iVar0, 0);
	func_116(4);
	if (bVar1)
	{
		func_142(Local_163.f_1, Local_163.f_2);
	}
}

bool func_60(int iParam0)
{
	return func_143(Local_163.f_7, iParam0);
}

void func_61(int iParam0)
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

void func_62()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_55();
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		func_145(iVar1);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_5[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_5[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_5[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
}

void func_63(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_146(uParam0))
	{
		return -1;
	}
	iVar0 = func_147(uParam0, uParam0->f_9);
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
			iVar0 = func_147(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_65(int iParam0)
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

void func_66(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_148(uParam0);
			break;
		case 1:
			func_148(uParam0);
			break;
		case 2:
			func_148(uParam0);
			break;
		case 3:
			func_149(uParam0);
			break;
		case 4:
			func_148(uParam0);
			break;
		case 5:
			func_148(uParam0);
			break;
		case 6:
			func_149(uParam0);
			break;
		case 7:
			func_149(uParam0);
			break;
		case 8:
			func_149(uParam0);
			break;
		case 9:
			func_148(uParam0);
			break;
		default:
			func_68(uParam0);
			func_67(uParam0);
			break;
	}
}

void func_67(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_70(uParam0, iVar0);
		iVar0++;
	}
}

void func_68(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_69(uParam0, iVar0);
		iVar0++;
	}
}

void func_69(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_70(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_71(var uParam0, int iParam1)
{
	func_150(&(uParam0->f_16), iParam1);
}

void func_72(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_70(uParam0, 0);
			break;
		case 1:
		case 2:
			func_70(uParam0, 1);
			func_70(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_70(uParam0, 0);
			func_70(uParam0, 2);
			break;
		case 8:
			func_70(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_70(uParam0, 1);
			break;
		default:
			func_67(uParam0);
			break;
	}
}

void func_73(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_151(uParam0);
			break;
		case 1:
			func_152(uParam0);
			break;
		case 2:
			func_153(uParam0);
			break;
		case 3:
			func_154(uParam0);
			break;
		default:
			func_68(uParam0);
			func_67(uParam0);
			break;
	}
}

int func_74(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_75(int iParam0)
{
	if (!func_144(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

void func_76(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_155(uParam0);
			break;
		case 1:
		case 2:
			func_156(uParam0);
			break;
		case 3:
		case 4:
			func_157(uParam0);
			break;
		default:
			func_67(uParam0);
			break;
	}
	func_68(uParam0);
}

int func_77(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

int func_78(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

int func_79(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

var func_80(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_158(&Var1, uParam0) && func_159(&Var1, iParam1))
	{
		func_160(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_81(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_158(&Var1, uParam0) && func_159(&Var1, iParam1))
	{
		func_160(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_161(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_83(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_161(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_84(int iParam0)
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

int func_85(int iParam0, var uParam1, int iParam2)
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

struct<2> func_86()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_87()
{
}

void func_88(var uParam0)
{
	func_162(uParam0, 0);
	func_163(uParam0, 0);
	func_164(uParam0, 1);
	func_165(uParam0, 1);
	func_166(uParam0, 0);
	func_167(uParam0, 1);
	func_168(uParam0, 1, 1, 1);
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(&(uParam0->f_1), 2);
	}
	else
	{
		func_170(&(uParam0->f_1), 2);
	}
}

void func_90(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(&(uParam0->f_1), 4);
	}
	else
	{
		func_170(&(uParam0->f_1), 4);
	}
}

int func_91(int iParam0)
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

bool func_92(var uParam0, int iParam1)
{
	return func_171(uParam0->f_16, iParam1);
}

void func_93(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

void func_94(int iParam0)
{
	if (!func_102(iParam0))
	{
		func_170(&(Local_13.f_1), iParam0);
	}
}

bool func_95(int iParam0)
{
	if (!func_144(iParam0))
	{
		return false;
	}
	return (func_172(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_96(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

int func_97(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return 1;
	}
	if (func_173(Local_163.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_163.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_174(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_121(128);
	}
	else if (!func_101(128, 255))
	{
		Local_13.f_3.f_1 = func_175(Param0);
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

bool func_98(int iParam0)
{
	return iParam0 != 0;
}

void func_99(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_100(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

bool func_101(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_143(&(Local_34[iParam1 /*4*/]), iParam0);
}

bool func_102(int iParam0)
{
	return func_143(Local_13.f_1, iParam0);
}

int func_103()
{
	return 1;
}

void func_104()
{
}

bool func_105()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = true;
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_5[iVar2])))
		{
			if (func_176(iVar2, &bVar1) || bVar1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((Local_163.f_18.f_102[iVar2 /*4*/])->f_1) && PED::IS_PED_HUMAN((Local_163.f_18.f_102[iVar2 /*4*/])->f_1))
				{
					PED::SET_PED_CONFIG_FLAG((Local_163.f_18.f_102[iVar2 /*4*/])->f_1, 467, true);
					WEAPON::SET_CURRENT_PED_WEAPON((Local_163.f_18.f_102[iVar2 /*4*/])->f_1, joaat("weapon_revolver_cattleman"), true, 0, true, false);
					PED::SET_PED_CONFIG_FLAG((Local_163.f_18.f_102[iVar2 /*4*/])->f_1, 249, true);
					func_177((Local_163.f_18.f_102[iVar2 /*4*/])->f_1);
				}
				bVar0 = false;
			}
			else
			{
				iVar2++;
			}
			if (bVar1)
			{
				func_178();
			}
			if (bVar0)
			{
				iVar3 = 0;
				while (iVar3 <= 1)
				{
					func_179(Local_13.f_7.f_9[iVar3], iVar3);
					iVar3++;
				}
			}
			return bVar0;
		}
	}

int func_106()
{
	return 1;
}

void func_107()
{
}

void func_108()
{
	if (!func_102(32) && func_180(32))
	{
		func_94(32);
	}
	if (!func_102(64) && func_180(64))
	{
		func_94(64);
	}
	if (!func_102(16) && func_181(16))
	{
		func_94(16);
	}
	if ((!func_102(2048) && func_180(2048)) && !func_180(4096))
	{
		func_94(2048);
	}
}

void func_109()
{
	bool bVar0;

	if (!bVar0 && func_102(16))
	{
		func_96(1);
		return;
	}
	if (func_102(2048) && !func_180(4096))
	{
		func_96(6);
		return;
	}
}

void func_110()
{
}

int func_111()
{
	if (func_182())
	{
		return 1;
	}
	if (func_183(65536))
	{
		func_184();
		if (func_183(256))
		{
			func_185();
		}
	}
	switch (Local_13.f_7)
	{
		case 0:
			func_186();
			break;
		case 1:
			func_187();
			break;
		case 2:
			func_188();
			break;
		case 3:
			func_189();
			break;
		case 4:
			func_190();
			break;
		case 5:
			func_191();
			break;
	}
	return 0;
}

void func_112()
{
}

int func_113()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = func_192(iVar0);
		if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_193(iVar1, 518218985))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_114(int iParam0)
{
	if (func_60(iParam0))
	{
		func_169(&(Local_163.f_7), iParam0);
	}
}

int func_115(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_144(iParam0))
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_150(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_195(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_116(int iParam0)
{
	if (!func_60(iParam0))
	{
		func_170(&(Local_163.f_7), iParam0);
	}
}

void func_117()
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
				func_196(iVar0);
				break;
			case -1315570756:
				func_197(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_198(iVar0);
		iVar0++;
	}
}

void func_118(int iParam0)
{
	if (Local_163.f_8 != iParam0)
	{
		Local_163.f_8 = iParam0;
	}
}

int func_119()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(func_199()))
	{
		HUD::_TEXT_DATABASE_REQUEST(func_199());
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_199()))
		{
			iVar0 = 0;
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(func_200()))
	{
		HUD::_TEXT_DATABASE_REQUEST(func_200());
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_200()))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (!func_202(func_201(iVar1)))
		{
			iVar0 = 0;
		}
		else if (!func_203(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_120()
{
	bool bVar0;

	bVar0 = false;
	return !bVar0;
}

void func_121(int iParam0)
{
	if (!func_101(iParam0, 255))
	{
		func_170(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/], iParam0);
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
	if (!func_60(1))
	{
		func_204(Local_163.f_9);
		func_116(1);
	}
}

void func_127()
{
}

void func_128()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_5[iVar0])))
		{
			(Local_163.f_18.f_102[iVar0 /*4*/])->f_1 = func_192(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[iVar0 /*4*/])->f_1))
			{
				if (PED::IS_PED_HUMAN((Local_163.f_18.f_102[iVar0 /*4*/])->f_1))
				{
					if (PED::ADD_RELATIONSHIP_GROUP(func_205(iVar0), &((Local_163.f_18.f_102[iVar0 /*4*/])->f_3)))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((Local_163.f_18.f_102[iVar0 /*4*/])->f_1, (Local_163.f_18.f_102[iVar0 /*4*/])->f_3);
					}
					WEAPON::REMOVE_ALL_PED_WEAPONS((Local_163.f_18.f_102[iVar0 /*4*/])->f_1, true, false);
					func_206((Local_163.f_18.f_102[iVar0 /*4*/])->f_1, joaat("weapon_revolver_cattleman"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((Local_163.f_18.f_102[iVar0 /*4*/])->f_1, true);
			}
		}
		iVar0++;
	}
	if ((Local_163.f_18.f_102[0 /*4*/])->f_3 != 0 && (Local_163.f_18.f_102[1 /*4*/])->f_3 != 0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, (Local_163.f_18.f_102[0 /*4*/])->f_3, (Local_163.f_18.f_102[1 /*4*/])->f_3);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, (Local_163.f_18.f_102[1 /*4*/])->f_3, (Local_163.f_18.f_102[0 /*4*/])->f_3);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_9[iVar1])))
		{
			Local_163.f_18.f_115[iVar1] = func_207(iVar1);
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(&(Local_163.f_18.f_115[iVar1])))
			{
			}
		}
		iVar1++;
	}
	if (ENTITY::DOES_ENTITY_EXIST((Local_163.f_18.f_102[0 /*4*/])->f_1))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(&(Local_163.f_18.f_115[0])))
		{
			func_208(Local_163.f_18.f_115[0], (Local_163.f_18.f_102[0 /*4*/])->f_1, "pedDuelA");
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST((Local_163.f_18.f_102[1 /*4*/])->f_1))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(&(Local_163.f_18.f_115[1])))
		{
			func_208(Local_163.f_18.f_115[1], (Local_163.f_18.f_102[1 /*4*/])->f_1, "pedDuelB");
		}
	}
	func_209();
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(&(Local_163.f_18.f_115[iVar1])))
		{
			func_210(Local_163.f_18.f_115[iVar1], iVar1);
			func_211(Local_163.f_18.f_115[iVar1]);
		}
		iVar1++;
	}
	func_212(2f, 1065353216 /* Float: 1f */);
	func_213(30f, 40f, 1, 1077936128 /* Float: 3f */, 0);
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

	if (func_173(Local_163.f_15))
	{
		return;
	}
	if (func_214())
	{
		return;
	}
	if (func_215(Local_163.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_163.f_15);
		if (fVar0 < 200f)
		{
			func_121(4096);
		}
		else if (fVar0 < 400f)
		{
			func_216(4096);
			func_121(2048);
		}
		else
		{
			func_216(4096);
			func_216(2048);
		}
	}
}

void func_132()
{
	func_217();
	func_218();
	func_219();
}

void func_133()
{
	if (func_220())
	{
		func_121(8);
	}
	else
	{
		func_216(8);
	}
}

void func_134()
{
	Local_163.f_18.f_151++;
	func_221();
	func_222();
	if (func_183(65536) || func_183(512))
	{
		func_223();
		func_224();
		if (func_183(256))
		{
			func_225();
		}
	}
	func_226();
	func_227(Local_13.f_7);
	switch (Local_163.f_18)
	{
		case 0:
			func_228();
			break;
		case 1:
			func_229();
			break;
		case 2:
			func_230();
			break;
		case 3:
			func_231();
			break;
		case 4:
			func_232();
			break;
		case 5:
			func_233();
			break;
	}
}

void func_135()
{
	if (!func_101(8, 255))
	{
		func_121(16);
	}
	else
	{
		func_216(16);
	}
}

void func_136()
{
	int iVar0;

	Local_163.f_6 = -1;
	Local_163.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_163.f_5 = (Local_163.f_5 || Local_34[iVar0 /*4*/]) // PointerArith;
			Local_163.f_6 = (Local_163.f_6 && Local_34[iVar0 /*4*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_137()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = func_192(iVar0);
		if (func_234(iVar1, 518218985, 1, 0) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar1, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 3, 17039360, -1082130432, -1, 0);
		}
		if (!func_235(8388608, -1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1) && func_236(&(Local_163.f_18.f_119), iVar1))
			{
				func_237();
			}
		}
		iVar0++;
	}
	return 1;
}

void func_138()
{
}

void func_139(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

bool func_140(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
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

	uVar0 = func_239(func_238(Param0));
	iVar1 = func_240(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_241(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_242(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_243(iVar0);
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

void func_145(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_163.f_18.f_102[iParam0 /*4*/])))
	{
		return;
	}
	MAP::REMOVE_BLIP(Local_163.f_18.f_102[iParam0 /*4*/]);
}

int func_146(var uParam0)
{
	if (func_36(*uParam0))
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

int func_147(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_244(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_245(iParam1)) - 1);
	}
	bVar2 = func_36(*uParam0);
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

void func_148(var uParam0)
{
	func_69(uParam0, 0);
	func_69(uParam0, 1);
	func_69(uParam0, 3);
	func_67(uParam0);
}

void func_149(var uParam0)
{
	func_68(uParam0);
	func_246(uParam0, 0, 3);
}

void func_150(var uParam0, int iParam1)
{
	func_247(uParam0, iParam1);
}

void func_151(var uParam0)
{
	func_69(uParam0, 0);
	func_70(uParam0, 0);
	func_70(uParam0, 1);
	func_70(uParam0, 2);
}

void func_152(var uParam0)
{
	func_69(uParam0, 1);
	func_67(uParam0);
}

void func_153(var uParam0)
{
	func_69(uParam0, 2);
	func_70(uParam0, 3);
}

void func_154(var uParam0)
{
	func_69(uParam0, 3);
	func_70(uParam0, 4);
}

void func_155(var uParam0)
{
	func_70(uParam0, 0);
	func_70(uParam0, 1);
}

void func_156(var uParam0)
{
	func_70(uParam0, 2);
	func_70(uParam0, 3);
}

void func_157(var uParam0)
{
	func_70(uParam0, 4);
	func_70(uParam0, 5);
}

bool func_158(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_159(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_160(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_161(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

void func_162(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(&(uParam0->f_1), 16384);
	}
	else
	{
		func_170(&(uParam0->f_1), 16384);
	}
}

void func_163(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(&(uParam0->f_1), 2048);
	}
	else
	{
		func_170(&(uParam0->f_1), 2048);
	}
}

void func_164(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(&(uParam0->f_1), 256);
	}
	else
	{
		func_170(&(uParam0->f_1), 256);
	}
}

void func_165(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_170(uParam0, 16);
	}
	else
	{
		func_169(uParam0, 67108864);
		func_169(uParam0, 16);
	}
}

void func_166(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(&(uParam0->f_1), 128);
	}
	else
	{
		func_170(&(uParam0->f_1), 128);
	}
}

void func_167(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_170(uParam0, 256);
	}
	else
	{
		func_169(uParam0, 256);
	}
}

void func_168(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_170(uParam0, 268435456);
	}
	else
	{
		func_169(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_170(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_169(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_170(uParam0, 536870912);
	}
	else
	{
		func_169(uParam0, 536870912);
	}
}

void func_169(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_170(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_171(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_172(int iParam0)
{
	int iVar0;

	if (!func_144(iParam0))
	{
		return false;
	}
	iVar0 = func_248(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_173(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_174(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_175(struct<17> Param0)
{
	var uVar0;

	func_174(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_176(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(3))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_252(Local_13.f_7.f_5[iParam0], func_201(iParam0), func_249(iParam0), func_250(iParam0), 1, 0, func_251(iParam0) == 0, 0, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!PED::IS_PED_HUMAN(func_192(iParam0)))
	{
		func_253(func_192(iParam0), 1);
	}
	else if (func_251(iParam0) != 0)
	{
		if (!PED::_APPLY_PED_METAPED_OUTFIT((Local_163.f_18.f_102[iParam0 /*4*/])->f_2, func_192(iParam0), true, false))
		{
			*uParam1 = 1;
			return 0;
		}
	}
	if (!func_254(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(func_192(iParam0), 6, true);
	}
	return 1;
}

int func_177(var uParam0)
{
	if (func_255(uParam0, &(Local_163.f_172.f_13)))
	{
		Local_163.f_172++;
		return 1;
	}
	return 0;
}

void func_178()
{
	func_96(2);
}

void func_179(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_256(iParam1), 0, func_257(iParam1), true, true);
	*uParam0 = NETWORK::_ANIM_SCENE_TO_NET(iVar0);
}

bool func_180(int iParam0)
{
	return func_143(Local_163.f_5, iParam0);
}

bool func_181(int iParam0)
{
	return func_143(Local_163.f_6, iParam0);
}

int func_182()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_7 == 6)
	{
		return 1;
	}
	iVar0 = func_192(0);
	iVar1 = func_192(1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) && (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)))
	{
		return 1;
	}
	return 0;
}

bool func_183(int iParam0)
{
	return func_143(Local_163.f_18.f_1, iParam0);
}

void func_184()
{
	if (!func_258())
	{
		if (func_183(512))
		{
			func_259(0);
		}
	}
	else if (Local_13.f_7 < 5)
	{
		func_260(5);
	}
}

void func_185()
{
}

void func_186()
{
	if (func_261(131072) && func_262())
	{
		func_260(1);
	}
}

void func_187()
{
	if (func_214())
	{
		func_260(2);
	}
}

void func_188()
{
	if (func_183(1))
	{
		func_260(3);
	}
}

void func_189()
{
	if (func_183(4))
	{
		func_260(4);
	}
}

void func_190()
{
	if (func_261(8))
	{
		func_260(6);
	}
}

void func_191()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = true;
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		iVar0 = func_192(iVar2);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_193(iVar0, 518218985))
		{
			bVar1 = false;
		}
		iVar2++;
	}
	if (bVar1)
	{
		func_260(6);
	}
}

int func_192(int iParam0)
{
	int iVar0;

	iVar0 = func_263(iParam0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return NETWORK::NET_TO_PED(iVar0);
	}
	return 0;
}

int func_193(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0)
{
	if (!func_144(iParam0))
	{
		return 0;
	}
	if (!func_172(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_195(var uParam0, int iParam1)
{
	func_264(uParam0, iParam1);
}

void func_196(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_265(&Var0, iParam0))
			{
				func_266(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_197(int iParam0)
{
}

void func_198(int iParam0)
{
}

char* func_199()
{
	return "OREDUL";
}

char* func_200()
{
	return "DULAUD";
}

int func_201(int iParam0)
{
	if (iParam0 == 2)
	{
		return func_267(997958153 /* GXTEntry: "Riding" */, 1);
	}
	switch (func_268())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return 233635031;
				case 1:
					return 233635031;
				default:
					break;
			}
			break;
		case 2:
		case 4:
			switch (iParam0)
			{
				case 0:
					return 888152471;
				case 1:
					return 888152471;
				default:
					break;
			}
			break;
		case 3:
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1651459012;
				case 1:
					return -1651459012;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_202(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_203(int iParam0)
{
	int iVar0;

	iVar0 = func_251(iParam0);
	if (iVar0 != 0)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID((Local_163.f_18.f_102[iParam0 /*4*/])->f_2))
		{
			(Local_163.f_18.f_102[iParam0 /*4*/])->f_2 = PED::_REQUEST_METAPED_OUTFIT(func_201(iParam0), func_251(iParam0));
		}
		else
		{
			return PED::_0x610438375E5D1801((Local_163.f_18.f_102[iParam0 /*4*/])->f_2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_204(struct<2> Param0)
{
	if (func_240(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_240(Param0)))
	{
		STATS::_0x99230691875FC218(func_238(Param0), func_240(Param0), Global_35);
	}
}

char* func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BountyHunter";
		case 1:
			return "BountyTarget";
		default:
			break;
	}
	return "";
}

bool func_206(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	switch (iParam1)
	{
		case joaat("group_sniper"):
		case -1101297303:
		case -594562071:
		case joaat("group_pistol"):
		case joaat("group_shotgun"):
		case joaat("group_rifle"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_IS_WEAPON_MELEE(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26386 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_269(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
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
							if (func_269(bVar4) && bVar4 != bVar0)
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
	if (func_28() == -1 && !func_270(bVar0))
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
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case joaat("group_pistol"):
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case joaat("group_sniper"):
			case -594562071:
			case joaat("group_shotgun"):
			case joaat("group_rifle"):
				if (func_270(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_34 && func_269(bVar0))
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
		func_271(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_272(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_273(bVar0))
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

int func_207(int iParam0)
{
	int iVar0;

	iVar0 = func_274(iParam0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return NETWORK::_NET_TO_ANIM_SCENE(iVar0);
	}
	return 0;
}

void func_208(var uParam0, int iParam1, char* sParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

void func_209()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	float fVar10;

	vVar0 = { ENTITY::GET_ENTITY_COORDS((Local_163.f_18.f_102[0 /*4*/])->f_1, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS((Local_163.f_18.f_102[1 /*4*/])->f_1, true, false) };
	vVar6 = { vVar0 + vVar3 / Vector(2f, 2f, 2f) };
	uVar9 = func_275(vVar0, vVar3);
	fVar10 = (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true) + 5f);
	Local_163.f_18.f_118 = VOLUME::_CREATE_VOLUME_BOX(vVar6, 0f, 0f, uVar9, 5f, fVar10, 10f);
	func_276(Local_163.f_18.f_118, 0);
	POPULATION::_0x18262CAFEBB5FBE1(Local_163.f_18.f_118, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(Local_163.f_18.f_118, 2762751, 0, 0, -1, -1, 2);
	EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-1130398329, vVar6, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1, -1);
	vVar0.f_2 = (vVar0.z - 12f);
	vVar3.f_2 = (vVar3.z + 12f);
	PATHFIND::_0x4358BCF14C91761C(vVar0, vVar3, 7.5f, 1, 6, 0);
}

void func_210(var uParam0, int iParam1)
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_277(iParam1), func_278(iParam1), 2);
}

void func_211(var uParam0)
{
	ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
}

void func_212(float fParam0, int iParam1)
{
	func_170(&(Local_163.f_172.f_12), 2);
	Local_163.f_172.f_7 = iParam1;
	Local_163.f_172.f_5 = fParam0;
}

void func_213(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_163.f_172.f_2 = iParam2;
	Local_163.f_172.f_9 = fParam0;
	Local_163.f_172.f_10 = fParam1;
	Local_163.f_172.f_8 = iParam3;
	if (bParam4)
	{
		func_170(&(Local_163.f_172.f_12), 1);
	}
	else
	{
		func_169(&(Local_163.f_172.f_12), 1);
	}
}

bool func_214()
{
	return (func_102(32) || func_101(32, 255));
}

int func_215(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_279(iParam0, 2087069356) };
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

void func_216(int iParam0)
{
	if (func_143(&(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]), iParam0))
	{
		func_169(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/], iParam0);
	}
}

void func_217()
{
}

void func_218()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_280(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_219()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar0 = func_281();
	if (Local_163.f_172.f_4)
	{
		return;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_143((Local_34[iVar1 /*4*/])->f_3, 1))
	{
		Local_163.f_172.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_163.f_15);
	fVar4 = Local_163.f_172.f_9;
	fVar5 = Local_163.f_172.f_10;
	if (func_143(Local_163.f_172.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_163.f_172.f_7));
		if (fVar7 > 0f)
		{
			if (func_282(Local_163.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_163.f_172.f_6 < 1f)
			{
				Local_163.f_172.f_6 = (Local_163.f_172.f_6 + fVar8);
				if (Local_163.f_172.f_6 > 1f)
				{
					Local_163.f_172.f_6 = 1f;
				}
			}
		}
		else if (Local_163.f_172.f_6 > 0f)
		{
			Local_163.f_172.f_6 = (Local_163.f_172.f_6 - fVar8);
			if (Local_163.f_172.f_6 < 0f)
			{
				Local_163.f_172.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_163.f_172.f_5) * Local_163.f_172.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_170(&((Local_34[iVar1 /*4*/])->f_3), 1);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_163.f_172.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_163.f_172.f_11, false, 0))
	{
		func_170(&((Local_34[iVar1 /*4*/])->f_3), 1);
	}
	else if (Local_163.f_172 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 1)
		{
			func_283(Local_163.f_172.f_13[iVar10 /*9*/], fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0);
			iVar10++;
		}
		if (func_284(&(Local_163.f_172.f_13), Local_163.f_172, Local_163.f_172.f_8))
		{
			func_170(&((Local_34[iVar1 /*4*/])->f_3), 1);
		}
	}
	if (func_143((Local_34[iVar1 /*4*/])->f_3, 1))
	{
		Local_163.f_172.f_4 = 1;
	}
}

int func_220()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_163.f_14))
	{
		return 0;
	}
	return 1;
}

void func_221()
{
	int iVar0;

	if (!func_285())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	Local_163.f_18.f_152 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(func_192(iVar0), true, false), Global_35);
}

void func_222()
{
	int iVar0;

	Local_163.f_18.f_2 = -1;
	Local_163.f_18.f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_163.f_18.f_1 = (Local_163.f_18.f_1 || (Local_34[iVar0 /*4*/])->f_1);
			Local_163.f_18.f_2 = (Local_163.f_18.f_2 && (Local_34[iVar0 /*4*/])->f_1);
		}
		iVar0++;
	}
}

void func_223()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_235(512, -1))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = func_192(0);
	iVar2 = func_192(1);
	iVar3 = func_192(2);
	if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar0, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, iVar0, 1, 1)) || func_286(iVar0, iVar3, 0))
	{
		func_287(512);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_259(0);
		}
		return;
	}
	else if (func_288() && (func_289(iVar2) || func_290(iVar2)))
	{
		func_287(512);
		Local_163.f_18.f_150 = 1024;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_259(0);
		}
	}
	else if (func_291(iVar1, 0, &(Local_163.f_18.f_119), &(Local_163.f_18.f_150), 0, 0) || func_291(iVar2, 0, &(Local_163.f_18.f_119), &(Local_163.f_18.f_150), 0, 0))
	{
		if (Local_163.f_18.f_150 == 65536)
		{
			func_287(524288);
			func_292(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
		}
		else
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_259(0);
			}
			func_287(512);
		}
	}
}

void func_224()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar1 = 255;
	iVar5 = 0;
	while (iVar5 <= 2)
	{
		iVar6 = func_192(iVar5);
		if (ENTITY::IS_ENTITY_DEAD(iVar6))
		{
			if (((!func_235(8388608, -1) && func_235(512, -1)) && func_236(&(Local_163.f_18.f_119), iVar6)) && PED::IS_PED_HUMAN(iVar6))
			{
				func_237();
			}
		}
		else if (func_293(iVar5))
		{
			func_294(iVar5);
		}
		else
		{
			iVar7 = 0;
			while (iVar7 < 32)
			{
				bVar4 = false;
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar7);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
				{
				}
				else
				{
					iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
					{
					}
					else
					{
						iVar3 = iVar0;
						if (func_143((Local_34[iVar3 /*4*/])->f_1, 512) && PLAYER::IS_PLAYER_DEAD(iVar1))
						{
							if (NETWORK::PARTICIPANT_ID_TO_INT() == iVar3)
							{
								func_169(&((Local_34[iVar3 /*4*/])->f_1), 512);
								SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_13), iVar7);
							}
							if (MAP::DOES_BLIP_EXIST(&(Local_163.f_18.f_102[iVar5 /*4*/])))
							{
								func_145(iVar5);
							}
						}
						else if (func_143((Local_34[iVar3 /*4*/])->f_1, 512))
						{
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_12), iVar7))
								{
									SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_12), iVar7);
								}
							}
							if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
							{
							}
							else
							{
								iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
								{
								}
								else
								{
									if (func_295(iVar2, iVar6, 1, 1) < 200f)
									{
										bVar4 = true;
									}
									if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
									{
										if (bVar4)
										{
											if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_13), iVar7))
											{
												SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_13), iVar7);
											}
										}
										else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_13), iVar7))
										{
											SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_13), iVar7);
										}
									}
									if (PLAYER::GET_PLAYER_INDEX() == iVar1)
									{
										if (func_296(&iVar6, iVar7, bVar4))
										{
											if (!MAP::DOES_BLIP_EXIST(&(Local_163.f_18.f_102[iVar5 /*4*/])))
											{
												func_297(iVar5, 942020339);
											}
										}
										else if (MAP::DOES_BLIP_EXIST(&(Local_163.f_18.f_102[iVar5 /*4*/])))
										{
											func_145(iVar5);
										}
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
									{
										if (PED::IS_PED_HUMAN(iVar6))
										{
											if (!PED::_0x6E5CBCB3941D7D08(iVar6, iVar2))
											{
												PED::REGISTER_TARGET(iVar6, iVar2, 1);
											}
											if (PED::_IS_PED_LASSOED(iVar6) || PED::_IS_PED_HOGTIED(iVar6))
											{
												if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
												{
													if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_12), iVar7))
													{
														SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_12), iVar7);
													}
												}
											}
											else if (func_234(iVar6, -2117564886, 1, 0))
											{
												if (bVar4)
												{
													TASK::TASK_COMBAT_HATED_TARGETS(iVar6, -1082130432);
													PED::_0x2208438012482A1A(iVar6, false, false);
												}
												else
												{
													func_298(iVar5);
													TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, iVar2, 3, 17039360, -1082130432, -1, 0);
												}
											}
											else if (!bVar4)
											{
												PED::_0x4707E9C23D8CA3FE(iVar6, iVar2);
												if (ENTITY::IS_ENTITY_DEAD(func_192(func_299(iVar5))) && !SCRIPTS::_0x179A6F0EE2E79026(&(Local_13.f_7.f_13)))
												{
													func_298(iVar5);
													TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
													TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, iVar2, 3, 17039360, -1082130432, -1, 0);
												}
											}
										}
										else if (func_234(iVar6, 518218985, 1, 0))
										{
											func_298(iVar5);
											TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar6, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 3, 17039360, -1082130432, -1, 0);
										}
									}
									Jump @976; //curOff = 843
									if (func_300(iVar5))
									{
										if (func_234(iVar6, 518218985, 1, 0))
										{
											func_298(iVar5);
											TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar6, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 3, 17039360, -1082130432, -1, 0);
											if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
											{
												if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_12), iVar7))
												{
													SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_12), iVar7);
												}
											}
										}
									}
									else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
									{
										if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_12), iVar7))
										{
											SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_12), iVar7);
										}
									}
								}
							}
							iVar7++;
							iVar5++;
						}
					}
				}
			}
		}
	}

void func_225()
{
	if (!func_301())
	{
		if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 < 13)
		{
			(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 = 13;
		}
		return;
	}
	if (func_302())
	{
		if ((func_303() > 70f && func_304(&(Local_13.f_7.f_2))) && func_305(&(Local_13.f_7.f_2)) < 16.5f)
		{
			return;
		}
		if ((!func_304(&(Local_13.f_7.f_2)) || func_305(&(Local_13.f_7.f_2)) > 5f) && !AUDIO::_0xA2CAC9DEF0195E6F(1))
		{
			if ((func_303() < 100f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[0 /*4*/])->f_1)) && ENTITY::HAS_ANIM_EVENT_FIRED((Local_163.f_18.f_102[func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) /*4*/])->f_1, -446424746))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_307((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1)))
				{
					func_308((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1);
				}
				(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1++;
			}
		}
	}
	else
	{
		if (((func_303() > 70f && func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) == 0) && func_304(&(Local_13.f_7.f_2))) && func_305(&(Local_13.f_7.f_2)) < 16.5f)
		{
			return;
		}
		if (!AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
		{
			if ((func_303() < 100f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) /*4*/])->f_1)) && (func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) != 0 || ENTITY::HAS_ANIM_EVENT_FIRED((Local_163.f_18.f_102[func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) /*4*/])->f_1, -446424746)))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME((Local_163.f_18.f_102[0 /*4*/])->f_1, func_309(0));
				AUDIO::SET_AMBIENT_VOICE_NAME((Local_163.f_18.f_102[1 /*4*/])->f_1, func_309(1));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_307((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1)))
				{
					func_308((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1);
				}
				(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1++;
			}
		}
	}
}

void func_226()
{
	if (!func_101(32, 255))
	{
		if (func_310(0))
		{
			func_311();
		}
	}
	else if (!func_60(8))
	{
		if (func_312())
		{
			func_313();
		}
	}
	else if (!func_60(16))
	{
		if (func_314())
		{
			func_315();
		}
	}
}

void func_227(int iParam0)
{
	if (Local_163.f_18 != iParam0)
	{
		Local_163.f_18 = iParam0;
	}
}

void func_228()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	if (!func_183(65536))
	{
		if (func_303() < 200f)
		{
			func_287(65536);
		}
	}
	else
	{
		iVar0 = func_192(0);
		iVar1 = func_192(1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!func_183(256))
			{
				if (func_316(80f))
				{
					func_287(256);
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(func_207(0), 0) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(func_207(1), 0))
			{
				if (!func_235(128, -1))
				{
					iVar3 = 0;
					while (iVar3 <= 1)
					{
						iVar2 = func_207(iVar3);
						iVar4 = 0;
						while (iVar4 <= (2 - 1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(iVar2, func_317(iVar4));
							iVar4++;
						}
						func_287(128);
						iVar3++;
					}
				}
				else if (!func_235(131072, -1))
				{
					bVar5 = true;
					iVar3 = 0;
					while (iVar3 <= 1)
					{
						iVar2 = func_207(iVar3);
						iVar6 = 0;
						while (iVar6 <= (2 - 1))
						{
							if (!ANIMSCENE::_0x23E33CB9F4A3F547(iVar2, func_317(iVar6)))
							{
								bVar5 = false;
								if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iVar2, func_317(iVar6)))
								{
									ANIMSCENE::_0xDF7B5144E25CD3FE(iVar2, func_317(iVar6));
								}
							}
							else
							{
								iVar6++;
							}
						}
						iVar3++;
					}
					if (bVar5)
					{
						func_287(131072);
					}
				}
			}
			iVar3 = 0;
			while (iVar3 <= 1)
			{
				iVar2 = func_207(iVar3);
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar2))
				{
					if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar2, 0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar2, 1, 0)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iVar2, 0))
					{
						ANIMSCENE::START_ANIM_SCENE(iVar2);
					}
				}
				iVar3++;
			}
		}
	}
}

void func_229()
{
	if (func_318() && func_310(1))
	{
		func_311();
	}
}

void func_230()
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar5;

	func_319();
	iVar0 = func_192(0);
	iVar1 = func_192(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!func_183(1))
		{
			if (!func_183(16))
			{
				if (func_320())
				{
					func_287(16);
				}
			}
			else
			{
				StringCopy(&cVar2, "", 24);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1329557607))
				{
					StringCopy(&cVar2, func_317(1), 24);
					iVar5 = 1;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -2037335242))
				{
					StringCopy(&cVar2, func_317(0), 24);
					iVar5 = 0;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					if (func_321())
					{
						func_322(iVar5);
					}
				}
			}
		}
	}
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_285())
	{
		iVar0 = func_192(0);
		iVar1 = func_192(1);
		iVar3 = func_207(0);
		iVar4 = func_207(1);
		iVar2 = 1;
	}
	else
	{
		iVar0 = func_192(1);
		iVar1 = func_192(0);
		iVar3 = func_207(1);
		iVar4 = func_207(0);
		iVar2 = 0;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 5, true);
	}
	if (!func_183(2))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar4))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar4, 1) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, 1397652762))
			{
				func_294(iVar2);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iVar4);
					func_287(2);
				}
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar3))
	{
		if (!func_235(262144, -1) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 199968317))
		{
			func_323(iVar2);
			EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-998484125, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 3, 3);
			func_325(14, func_324());
			func_287(262144);
		}
		if ((func_326() != 0 && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar3)) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 2116222025))
		{
			func_308(15);
		}
		if ((NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar3) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar3, 0)) && ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if ((func_285() && func_327()) && func_328())
			{
				func_287(2097152);
			}
			func_287(4);
		}
	}
}

void func_232()
{
	int iVar0;
	int iVar1;
	float fVar2;

	func_319();
	if (!func_285())
	{
		iVar0 = func_192(0);
		iVar1 = func_192(1);
	}
	else
	{
		iVar0 = func_192(1);
		iVar1 = func_192(0);
	}
	fVar2 = func_303();
	if (!func_183(1048576) && func_183(524288))
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		func_287(1048576);
	}
	if (!func_329(iVar0, 242628503))
	{
		if (!func_183(32768))
		{
			func_308(21);
			func_287(32768);
		}
		func_330(&(Local_163.f_18.f_119), 1);
		func_331(&(Local_163.f_18.f_119), 4f);
		func_332(&(Local_163.f_18.f_119), 3000);
		func_333();
	}
	else if (func_288())
	{
		if ((func_334(iVar0) != iVar1 && TASK::GET_SEQUENCE_PROGRESS(iVar0) == 1) && !func_335(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			}
		}
	}
	if (!func_235(4194304, -1))
	{
		if (func_336(iVar0))
		{
			func_332(&(Local_163.f_18.f_119), 5000);
			func_337(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
			func_287(4194304);
		}
	}
	else if ((Local_163.f_18.f_151 % 5) == 0)
	{
		func_331(&(Local_163.f_18.f_119), func_338(&iVar0));
	}
	func_339(&iVar0, &iVar1);
	if (fVar2 > 150f)
	{
		func_287(8);
	}
}

void func_233()
{
	int iVar0;

	func_319();
	func_340();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(func_207(iVar0)) && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_207(iVar0)))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(func_207(iVar0));
		}
		iVar0++;
	}
}

int func_234(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (!bParam3 && func_193(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_235(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_143((Local_34[iParam1 /*4*/])->f_1, iParam0);
}

int func_236(var uParam0, int iParam1)
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

void func_237()
{
	if (!func_235(8388608, -1))
	{
		func_341(151445061, 0, 0);
		func_287(8388608);
	}
}

int func_238(var uParam0, var uParam1)
{
	return uParam0;
}

int func_239(int iParam0)
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

int func_240(struct<2> Param0)
{
	return func_342(Param0);
}

void func_241(struct<2> Param0, var uParam2)
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
	switch (func_238(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_344(func_343(Param0));
			iVar5 = func_345(iVar4);
			if (!func_346(iVar5, 0))
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

int func_242(int iParam0, int iParam1)
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

void func_243(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_347(&Var0);
}

int func_244(int iParam0)
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

int func_245(int iParam0)
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

void func_246(var uParam0, int iParam1, int iParam2)
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
		func_70(uParam0, iVar0);
		iVar0++;
	}
}

void func_247(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_248(int iParam0)
{
	if (!func_144(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

Vector3 func_249(int iParam0)
{
	switch (func_348())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -346.477f, 735.528f, 116.405f;
				case 1:
					return -349.103f, 745.695f, 116.018f;
				case 2:
					return -351.5215f, 722.8586f, 116.1461f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -366.0992f, 820.8414f, 116.0534f;
				case 1:
					return -355.0117f, 826.3661f, 116.719f;
				case 2:
					return -362.6787f, 834.6184f, 115.8442f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2956.972f, 518.731f, 43.804f;
				case 1:
					return 2957.322f, 529.225f, 43.54f;
				case 2:
					return 2961.729f, 486.6328f, 45.73552f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2970.62f, 537.576f, 42.438f;
				case 1:
					return 2981.581f, 536.7006f, 43.4864f;
				case 2:
					return 2957.393f, 544.2678f, 43.55483f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1440.892f, -1415.935f, 78.352f;
				case 1:
					return 1447.741f, -1420.383f, 78.14435f;
				case 2:
					return 1432.995f, -1425.228f, 78.83875f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 1402.151f, -1426.658f, 80.1878f;
				case 1:
					return 1385.535f, -1418.823f, 79.4824f;
				case 2:
					return 1398.346f, -1433.381f, 78.73728f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 2991.254f, 1352.789f, 43.07695f;
				case 1:
					return 3000.669f, 1350.114f, 42.63547f;
				case 2:
					return 2982.754f, 1336.593f, 43.04593f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 2910.962f, 1228.108f, 44.6594f;
				case 1:
					return 2920.044f, 1235.725f, 44.4294f;
				case 2:
					return 2901.357f, 1220.52f, 43.50235f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -829.6442f, -1548.552f, 60.5441f;
				case 1:
					return -838.1262f, -1539.315f, 60.4531f;
				case 2:
					return -830.1406f, -1521.422f, 61.99331f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1013.736f, -1139.281f, 57.0719f;
				case 1:
					return -1025.452f, -1139.188f, 57.6643f;
				case 2:
					return -968.7588f, -1128.097f, 55.78428f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_250(int iParam0)
{
	switch (func_348())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 14.4829f;
				case 1:
					return 194.4829f;
				case 2:
					return -20.45f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 288.602f;
				case 1:
					return 115.7427f;
				case 2:
					return 159.67f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1.91f;
				case 1:
					return 178.09f;
				case 2:
					return 114.26f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 271.0107f;
				case 1:
					return 89.6575f;
				case 2:
					return 151.88f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -125.82f;
				case 1:
					return 45.69f;
				case 2:
					return 161.81f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 71.7603f;
				case 1:
					return 238.2457f;
				case 2:
					return 63.42f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -107.55f;
				case 1:
					return 73.7f;
				case 2:
					return 164.59f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 290.9834f;
				case 1:
					return 131.5673f;
				case 2:
					return -81.82f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 46.9745f;
				case 1:
					return 219.4785f;
				case 2:
					return -7.29f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 89.1882f;
				case 1:
					return 256.1215f;
				case 2:
					return -25.71f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

int func_251(int iParam0)
{
	switch (func_268())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -728053340;
				case 1:
					return -2129848553;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 885345434;
				case 1:
					return -34547514;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -163161156;
				case 1:
					return -661073532;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1757841025;
				case 1:
					return 2079539955;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1577148566;
				case 1:
					return -673281247;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1178432771;
				case 1:
					return -1878169871;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_252(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_202(iParam1))
	{
		return 0;
	}
	iVar0 = func_349(iParam1, vParam2, iParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_253(int iParam0, bool bParam1)
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
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			switch (func_326())
			{
				case 3:
				case 4:
					return 0;
				default:
					break;
			}
			break;
	}
	return 1;
}

int func_255(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = uParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_285())
			{
				return "script@beat@town@duelWinner@duelPreDuelerA_Lose";
			}
			else
			{
				return "script@beat@town@duelWinner@duelPreDuelerA";
			}
			break;
		case 1:
			if (func_285())
			{
				return "script@beat@town@duelWinner@duelPreDuelerB_Win";
			}
			else
			{
				return "script@beat@town@duelWinner@duelPreDuelerB";
			}
			break;
		default:
			return "";
	}
	return "";
}

char* func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pblPacingIdles";
		case 1:
			return "pblPacingIdles";
		default:
			break;
	}
	return "";
}

bool func_258()
{
	return (func_102(64) || func_101(64, 255));
}

void func_259(bool bParam0)
{
	int iVar0;

	if (!func_101(64, 255))
	{
		iVar0 = func_242(Local_163.f_1, Local_163.f_2);
		func_350(iVar0);
		if (!func_101(1024, 255))
		{
			func_351(Local_163.f_1);
			func_121(1024);
		}
		func_352(iVar0);
		if (bParam0)
		{
			func_353(Local_163.f_1, Local_163.f_4);
		}
		func_121(64);
	}
}

void func_260(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

bool func_261(int iParam0)
{
	return func_143(Local_163.f_18.f_2, iParam0);
}

int func_262()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 1)
	{
		iVar0 = func_207(iVar1);
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_263(int iParam0)
{
	return &(Local_13.f_7.f_5[iParam0]);
}

void func_264(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_265(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_163.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_163)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_163.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_163.f_3)
	{
		return 0;
	}
	return 1;
}

void func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case -626681985:
			if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 < iParam0->f_11)
			{
				(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 = iParam0->f_11;
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_354(&(Local_13.f_7.f_2));
				}
			}
			func_355(iParam0->f_11);
			break;
		case 1626333639:
			func_356(iParam0->f_11);
			break;
		case -588518817:
			iVar1 = iParam0->f_11;
			iVar3 = (Local_163.f_18.f_102[iVar1 /*4*/])->f_1;
			iVar2 = (Local_163.f_18.f_102[func_299(iVar1) /*4*/])->f_1;
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) };
			vVar4.f_2 = (vVar4.z + 2f);
			func_357(iVar2, vVar4, iVar3, 0, 0, 0, 0, 0f, 0);
			break;
		case -413831947:
			iVar1 = iParam0->f_11;
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[iVar1 /*4*/])->f_1))
			{
				PED::SET_PED_CONFIG_FLAG((Local_163.f_18.f_102[iVar1 /*4*/])->f_1, 6, true);
				func_358((Local_163.f_18.f_102[iVar1 /*4*/])->f_1, 1, 0);
			}
			break;
	}
}

var func_267(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153: /* GXTEntry: "Riding" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 918497150: /* GXTEntry: "Draft" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-62570976, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 356361174: /* GXTEntry: "Race" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-165971473, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -1771663379: /* GXTEntry: "War" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-2049218219, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -311956671: /* GXTEntry: "Work" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(989061023, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, 1, 0, 0f, 0f, 0f);
}

int func_268()
{
	return func_324();
}

bool func_269(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_270(bool bParam0)
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

int func_271(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_359(bParam0, 0, 1) };
		if (func_360(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_361(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_362(bParam0, Var0, Var0.f_4, 0) };
				func_363(bParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_364(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, 0))
		{
			return 0;
		}
		func_365(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_366(bParam0, iParam1);
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

void func_272(int iParam0, bool bParam1, float fParam2)
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

bool func_273(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_274(int iParam0)
{
	return &(Local_13.f_7.f_9[iParam0]);
}

float func_275(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_276(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(uParam0, iVar0);
}

Vector3 func_277(int iParam0)
{
	switch (func_348())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -346.477f, 735.528f, 116.405f;
				case 1:
					return -349.103f, 745.695f, 115.948f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -366.0992f, 820.8414f, 115.033f;
				case 1:
					return -355.0117f, 826.3661f, 115.649f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2956.972f, 518.731f, 43.884f;
				case 1:
					return 2957.322f, 529.225f, 43.47f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2970.62f, 537.576f, 42.508f;
				case 1:
					return 2981.581f, 536.7006f, 42.426f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1440.892f, -1415.935f, 78.322f;
				case 1:
					return 1447.741f, -1420.383f, 78.034f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 1402.151f, -1426.658f, 79.148f;
				case 1:
					return 1385.535f, -1418.823f, 78.412f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 2991.254f, 1352.789f, 43.037f;
				case 1:
					return 3000.669f, 1350.114f, 42.535f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 2910.962f, 1228.108f, 43.6594f;
				case 1:
					return 2920.044f, 1235.725f, 43.359f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -829.6442f, -1548.552f, 59.524f;
				case 1:
					return -838.415f, -1539.657f, 59.372f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1013.736f, -1139.281f, 56.062f;
				case 1:
					return -1025.452f, -1139.188f, 56.594f;
				default:
					break;
			}
			break;
	}
	return func_367();
}

Vector3 func_278(int iParam0)
{
	switch (func_348())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2.8f, 0f, 14.4829f;
				case 1:
					return 5.7f, 0f, 172.152f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 4.5f, 0f, 288.602f;
				case 1:
					return 0f, 0f, 93.4118f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1.1f, 0f, -1.91f;
				case 1:
					return 1.5f, 0f, 155.7591f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2.3f, 0f, -88.989f;
				case 1:
					return 0f, 0f, 67.3266f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -125.82f;
				case 1:
					return 0f, 0f, 23.3591f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 1.6f, 0f, 71.7603f;
				case 1:
					return 3.1f, 0f, 215.9148f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1.5f, 0f, -107.55f;
				case 1:
					return 5.374f, 0f, 42.525f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 2.5f, 0f, 290.9834f;
				case 1:
					return 2.1f, 0f, 109.2364f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1.8f, 0f, 46.9745f;
				case 1:
					return -7.1f, 3.9f, -162.852f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 5.5f, 0f, 89.1882f;
				case 1:
					return -3.6f, 0f, 233.7906f;
				default:
					break;
			}
			break;
	}
	return func_367();
}

struct<2> func_279(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_368(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_369(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_280(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		(Local_34[iParam2 /*4*/])->f_3 = ((Local_34[iParam2 /*4*/])->f_3 || (Local_34[iParam0 /*4*/])->f_3);
	}
}

float func_281()
{
	int iVar0;
	float fVar1;

	if (Local_163.f_172.f_3 == 0)
	{
		Local_163.f_172.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_163.f_172.f_3)) * 0.001f);
	Local_163.f_172.f_3 = iVar0;
	return fVar1;
}

bool func_282(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_370(vVar0, vParam0) > func_370(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_283(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = BUILTIN::VDIST2(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_371(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_372(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_373() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_284(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_139(uParam0);
	return 1;
}

int func_285()
{
	switch (func_326())
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 3:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_286(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

void func_287(int iParam0)
{
	func_170(&((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1), iParam0);
}

int func_288()
{
	switch (func_326())
	{
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_289(int iParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_334(Global_34) == iParam0)
	{
		return 1;
	}
	iVar0 = func_374(Global_34);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_34)
	{
		return 1;
	}
	return 0;
}

int func_291(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_375(uParam2, 1, iVar0);
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
			if (func_376(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_377(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_378(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_379(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_380(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_20 && func_381(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_377(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_382(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_383(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_377(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_384(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_377(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939178->f_23) < 300)
			{
				if (func_385(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_385(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_377(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_386(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939178->f_19 || uParam2->f_12 < 20f)
			{
				if (func_387(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_388(uParam2, 4000))
				{
					if ((func_389(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_390(uParam2, iParam0)) && func_391(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_377(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_389(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_390(uParam2, iParam0)) && func_391(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1939178->f_34 == 0)
			{
				if (Global_1939178->f_35 != 0)
				{
					if (func_392(iParam0, Global_1939178->f_35))
					{
						func_393();
						*uParam3 = 2;
						func_377(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_394(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_395() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_393();
						*uParam3 = 2;
						func_377(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_396())
				{
					if (func_392(iParam0, Global_1939178->f_36))
					{
						func_393();
						*uParam3 = 2;
						func_377(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_397(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_377(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_399(func_398(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_400(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*uParam3 = 1048576;
						func_377(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_401(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_402(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_377(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_403(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_404(uParam2, 4000))
				{
					if (func_405(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_377(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_406(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_377(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_236(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_377(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_292(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1939178->f_24 = 0;
		Global_1939178->f_25 = 0;
		Global_1939178->f_19 = 0;
		Global_1939178->f_33 = 0;
		uParam0->f_8 = func_395();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_407(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

int func_293(int iParam0)
{
	if (!func_183(262144))
	{
		return 0;
	}
	if (!func_183(512))
	{
		return 0;
	}
	if (iParam0 == 2)
	{
		return 0;
	}
	if (func_285())
	{
		if (iParam0 == 1)
		{
			return 0;
		}
	}
	else if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_294(int iParam0)
{
	struct<15> Var0;

	Var0 = { func_408(-413831947) };
	Var0.f_11 = iParam0;
	func_409(&Var0);
}

float func_295(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_296(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		return 0;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_13), iParam1))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(*iParam0))
	{
		return 0;
	}
	return 1;
}

void func_297(int iParam0, int iParam1)
{
	if (!func_410(255))
	{
		func_145(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_163.f_18.f_102[iParam0 /*4*/])))
	{
		Local_163.f_18.f_102[iParam0 /*4*/] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, func_192(iParam0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_163.f_18.f_102[iParam0 /*4*/]), func_411(iParam0));
		MAP::_BLIP_SET_MODIFIER(&(Local_163.f_18.f_102[iParam0 /*4*/]), -1440522869);
	}
	if (iParam1 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(&(Local_163.f_18.f_102[iParam0 /*4*/]), 942020339);
	}
}

void func_298(int iParam0)
{
	int iVar0;

	iVar0 = func_192(iParam0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 230, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
	if (func_327())
	{
		if (iParam0 == 0)
		{
			PED::_0xB8B6430EAD2D2437(iVar0, 1984370607);
		}
		else if (PED::IS_PED_MALE(iVar0))
		{
			PED::_0xB8B6430EAD2D2437(iVar0, -1143783207);
		}
		else
		{
			PED::_0xB8B6430EAD2D2437(iVar0, -1739631437);
		}
	}
	else
	{
		PED::_0xB8B6430EAD2D2437(iVar0, 1286684151);
	}
	PED::_0x24C82EF607105FAA(iVar0, joaat("aggressive"));
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_300(int iParam0)
{
	if (Local_13.f_7 != 5)
	{
		return 0;
	}
	if (func_183(512))
	{
		return 0;
	}
	if (SCRIPTS::_0x179A6F0EE2E79026(&(Local_13.f_7.f_13)))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(func_192(iParam0)))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_192(func_299(iParam0))))
	{
		return 0;
	}
	return 1;
}

int func_301()
{
	int iVar0;

	if (func_183(16))
	{
		return 0;
	}
	iVar0 = 26;
	switch (func_326())
	{
		case 0:
			switch (func_268())
			{
				case 0:
					iVar0 = 6;
					break;
				case 1:
					iVar0 = 12;
					break;
			}
			break;
		default:
			iVar0 = 4;
			break;
	}
	if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 > iVar0)
	{
		return 0;
	}
	return 1;
}

int func_302()
{
	switch (func_326())
	{
		case 0:
			return 0;
		default:
			break;
	}
	return 1;
}

float func_303()
{
	return Local_163.f_18.f_152;
}

bool func_304(var uParam0)
{
	return func_412(*uParam0, 1);
}

float func_305(var uParam0)
{
	if (!func_304(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_413(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_373() - uParam0->f_1);
}

int func_306(int iParam0)
{
	switch (func_326())
	{
		case 0:
			switch (func_268())
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							return 0;
						case 2:
							return 1;
						case 3:
							return 0;
						case 4:
							return 1;
						case 5:
							return 0;
						case 6:
							return 1;
						case 13:
							return 0;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1;
						case 1:
							return 0;
						case 3:
							return 0;
						case 4:
							return 1;
						case 5:
							return 0;
						case 6:
							return 1;
						case 7:
							return 0;
						case 8:
							return 1;
						case 9:
							return 0;
						case 10:
							return 1;
						case 11:
							return 0;
						case 12:
							return 1;
						case 13:
							return 0;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
			switch (func_268())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 0;
						case 1:
							return 0;
						case 2:
							return 0;
						case 13:
							return 0;
						case 15:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
						case 21:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 0;
						case 1:
							return 0;
						case 2:
							return 0;
						case 13:
							return 0;
						case 15:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
						case 21:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
			}
			break;
		case 3:
		case 4:
			switch (func_268())
			{
				case 4:
					switch (iParam0)
					{
						case 0:
							return 0;
						case 1:
							return 0;
						case 2:
							return 0;
						case 13:
							return 0;
						case 15:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
						case 21:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 0;
						case 1:
							return 0;
						case 2:
							return 0;
						case 13:
							return 0;
						case 15:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
						case 21:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

char* func_307(int iParam0)
{
	switch (func_326())
	{
		case 0:
			switch (func_268())
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							return "RE_DUELW_VAL_V1_WINNER_CHEATER";
						case 2:
							return "RE_DUELW_VAL_V1_LOSER_WON_GAME";
						case 3:
							return "RE_DUELW_VAL_V1_WINNER_DENY";
						case 4:
							return "RE_DUELW_VAL_V1_LOSER_DEFEND";
						case 5:
							return "RE_DUELW_VAL_V1_WINNER_CHAL";
						case 6:
							return "RE_DUELW_VAL_V1_LOSER_AGREE";
						case 13:
							return "RE_DUELW_VAL_V1_WINNER_MOVE";
						case 16:
							return "RE_DUELW_VAL_V1_AGGRO";
						case 17:
							return "RE_DUELW_VAL_V1_AGGRO";
						case 18:
							return "RE_DUELW_VAL_V1_AG_LASSO";
						case 19:
							return "RE_DUELW_VAL_V1_AG_LASSO";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return "RE_DUELW_VHT_V1_ARGUE_MIND";
						case 1:
							return "RE_DUELW_VHT_V1_ARGUE";
						case 3:
							return "RE_DUELW_VHT_V1_ACCUSE";
						case 4:
							return "RE_DUELW_VHT_V1_DENY";
						case 5:
							return "RE_DUELW_VHT_V1_ASK";
						case 6:
							return "RE_DUELW_VHT_V1_DADDY";
						case 7:
							return "RE_DUELW_VHT_V1_INSULT";
						case 8:
							return "RE_DUELW_VHT_V1_THREAT_MIND";
						case 9:
							return "RE_DUELW_VHT_V1_ANGER";
						case 10:
							return "RE_DUELW_VHT_V1_MOVEMENT";
						case 11:
							return "RE_DUELW_VHT_V1_THREAT";
						case 12:
							return "RE_DUELW_VHT_V1_ACCEPT";
						case 13:
							return "RE_DUELW_VHT_V1_CHALLENGE";
						case 16:
							return "RE_DUELW_VHT_V1_AGGRO";
						case 17:
							return "RE_DUELW_VHT_V1_AGGRO";
						case 18:
							return "RE_DUELW_VHT_V1_AGGRO";
						case 19:
							return "RE_DUELW_VHT_V1_AGGRO";
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
			switch (func_268())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return "DUL_CONVO_A_1";
						case 1:
							return "DUL_CONVO_A_2";
						case 2:
							return "DUL_CONVO_A_3";
						case 3:
							return "DUL_CONVO_A_4";
						case 4:
							return "DUL_CONVO_A_5";
						case 13:
							return "DUL_DRAW_A";
						case 15:
							if (!func_285())
							{
								return "DUL_END_A_1";
							}
							else
							{
								return "DUL_END_A_2";
							}
							break;
						case 16:
							return "DUL_AGGRO_A_1";
						case 17:
							return "DUL_AGGRO_A_2";
						case 18:
							return "DUL_HOG_A_1";
						case 19:
							return "DUL_HOG_A_2";
						case 21:
							if (!func_285())
							{
								return "DUL_EXIT_A_1";
							}
							else
							{
								return "DUL_EXIT_A_2";
							}
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return "DUL_CONVO_C_1";
						case 1:
							return "DUL_CONVO_C_2";
						case 2:
							return "DUL_CONVO_C_3";
						case 3:
							return "DUL_CONVO_C_4";
						case 4:
							return "DUL_CONVO_C_5";
						case 13:
							return "DUL_DRAW_C";
						case 15:
							if (!func_285())
							{
								return "DUL_END_C_1";
							}
							else
							{
								return "DUL_END_C_2";
							}
							break;
						case 16:
							return "DUL_AGGRO_C_1";
						case 17:
							return "DUL_AGGRO_C_2";
						case 18:
							return "DUL_HOG_C_1";
						case 19:
							return "DUL_HOG_C_2";
						case 21:
							if (!func_285())
							{
								return "DUL_EXIT_C_1";
							}
							else
							{
								return "DUL_EXIT_C_2";
							}
							break;
					}
					break;
			}
			break;
		case 3:
		case 4:
			switch (func_268())
			{
				case 4:
					switch (iParam0)
					{
						case 0:
							return "DUL_CONVO_B_1";
						case 1:
							return "DUL_CONVO_B_2";
						case 2:
							return "DUL_CONVO_B_3";
						case 3:
							return "DUL_CONVO_B_4";
						case 4:
							return "DUL_CONVO_B_5";
						case 13:
							return "DUL_DRAW_B";
						case 15:
							if (!func_285())
							{
								return "DUL_END_B_1";
							}
							else
							{
								return "DUL_END_B_2";
							}
							break;
						case 16:
							return "DUL_AGGRO_B_1";
						case 17:
							return "DUL_AGGRO_B_2";
						case 18:
							return "DUL_HOG_B_1";
						case 19:
							return "DUL_HOG_B_2";
						case 20:
							return "DUL_HOG_B_1";
						case 21:
							if (!func_285())
							{
								return "DUL_EXIT_B_1";
							}
							else if (func_183(2097152))
							{
								return "DUL_END_BA_2";
							}
							else
							{
								return "DUL_EXIT_B_2";
							}
							break;
						case 22:
							return "DUL_RUN_B_2";
						case 23:
							return "DUL_LOAD_B_1";
						case 24:
							return "DUL_TAK1_B_1";
						case 25:
							return "DUL_TAK2_B_1";
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return "DUL_CONVO_D_1";
						case 1:
							return "DUL_CONVO_D_2";
						case 2:
							return "DUL_CONVO_D_3";
						case 3:
							return "DUL_CONVO_D_4";
						case 4:
							return "DUL_CONVO_D_5";
						case 13:
							return "DUL_DRAW_D";
						case 15:
							if (!func_285())
							{
								return "DUL_END_D_1";
							}
							else
							{
								return "DUL_END_D_2";
							}
							break;
						case 16:
							return "DUL_AGGRO_D_1";
						case 17:
							return "DUL_AGGRO_D_2";
						case 18:
							return "DUL_HOG_D_1";
						case 19:
							return "DUL_HOG_D_2";
						case 20:
							return "DUL_HOG_D_1";
						case 21:
							if (!func_285())
							{
								return "DUL_EXIT_D_1";
							}
							else if (func_183(2097152))
							{
								return "DUL_ENDA_D_2";
							}
							else
							{
								return "DUL_EXIT_D_2";
							}
							break;
						case 22:
							return "DUL_RUN_D_2";
						case 23:
							return "DUL_LOAD_D_1";
						case 24:
							return "DUL_TAK1_D_1";
						case 25:
							return "DUL_TAK2_D_1";
					}
					break;
			}
			break;
	}
	return "";
}

void func_308(int iParam0)
{
	struct<15> Var0;

	Var0 = { func_408(-626681985) };
	Var0.f_11 = iParam0;
	func_409(&Var0);
}

char* func_309(int iParam0)
{
	switch (func_268())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "0746_G_M_M_BountyHunters_01_WHITE_08";
				case 1:
					return "0192_A_M_M_HtlRoughTravellers_01_WHITE_01";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "0499_S_M_M_VhtDockWorker_01_WHITE_01";
				case 1:
					return "0497_S_M_M_VhtLaborer_01_WHITE_01";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE1";
				case 1:
					return "RE005_MALE2";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE1";
				case 1:
					return "RE005_FEMALE2";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE3";
				case 1:
					return "RE005_MALE4";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE3";
				case 1:
					return "RE005_FEMALE4";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_310(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_163.f_18 <= 1)
		{
			return 0;
		}
	}
	if (func_235(512, -1))
	{
		return 1;
	}
	if (Local_163.f_18.f_152 >= 40f)
	{
		return 0;
	}
	return 1;
}

void func_311()
{
	int iVar0;

	if (!func_101(32, 255))
	{
		func_414(Local_163.f_1, Local_163.f_3);
		if (!func_101(1024, 255))
		{
			func_351(Local_163.f_1);
			func_121(1024);
		}
		iVar0 = func_242(Local_163.f_1, Local_163.f_2);
		func_350(iVar0);
		func_352(iVar0);
		func_116(2);
		func_415(Local_163.f_9);
		func_416(Local_163.f_1);
		func_121(32);
	}
}

int func_312()
{
	if (Local_163.f_18 < 2)
	{
		return 0;
	}
	if (Local_163.f_18.f_152 < 100f)
	{
		return 1;
	}
	if (func_235(512, -1))
	{
		return 1;
	}
	return 0;
}

void func_313()
{
	if (!func_60(2))
	{
		return;
	}
	func_116(8);
}

int func_314()
{
	if (Local_163.f_18 < 3)
	{
		return 0;
	}
	if (Local_163.f_18 == 5)
	{
		return 0;
	}
	if (Local_163.f_18.f_152 >= 100f)
	{
		return 0;
	}
	return 1;
}

void func_315()
{
	if (!func_60(8))
	{
		return;
	}
	func_116(16);
}

int func_316(float fParam0)
{
	vector3 vVar0;
	int iVar3;

	if (((!ENTITY::DOES_ENTITY_EXIST(func_192(0)) || ENTITY::IS_ENTITY_DEAD(func_192(0))) || !ENTITY::DOES_ENTITY_EXIST(func_192(1))) || ENTITY::IS_ENTITY_DEAD(func_192(1)))
	{
		return 0;
	}
	if (func_303() > 200f)
	{
		return 0;
	}
	vVar0 = { func_417(Global_34, 3f) };
	if (BUILTIN::VDIST(vVar0, func_277(0)) < fParam0)
	{
		return 1;
	}
	iVar3 = func_400(func_192(0), Global_34, 0.25f);
	if (iVar3 == 0)
	{
		if (BUILTIN::VDIST(vVar0, func_277(0)) < (fParam0 * 2f))
		{
			return 1;
		}
	}
	return 0;
}

char* func_317(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pblEnterNormal";
		case 1:
			return "pblEnterEarly";
		default:
			break;
	}
	return "";
}

bool func_318()
{
	return Local_163.f_172.f_4;
}

void func_319()
{
	if (MAP::DOES_BLIP_EXIST(Local_163.f_18.f_153))
	{
		func_418(&(Local_163.f_18.f_153));
	}
}

int func_320()
{
	if (func_316(12f))
	{
		return 1;
	}
	if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 < 13)
	{
		return 0;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1))
	{
		return 0;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
	{
		return 0;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		return 0;
	}
	return 1;
}

int func_321()
{
	if (func_183(16384))
	{
		return 1;
	}
	if (!func_183(8192))
	{
		if (func_302())
		{
			func_419(1, 1, 0);
		}
		func_287(8192);
	}
	else if (!func_420())
	{
		(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 = 13;
		func_308((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1);
		func_287(16384);
		return 1;
	}
	return 0;
}

void func_322(int iParam0)
{
	struct<15> Var0;

	Var0 = { func_408(1626333639) };
	Var0.f_11 = iParam0;
	func_409(&Var0);
}

void func_323(int iParam0)
{
	struct<15> Var0;

	Var0 = { func_408(-588518817) };
	Var0.f_11 = iParam0;
	func_409(&Var0);
}

int func_324()
{
	return Local_163.f_4;
}

void func_325(int iParam0, int iParam1)
{
	if (!func_421(iParam0, iParam1))
	{
		return;
	}
	func_422(iParam1, iParam0);
}

int func_326()
{
	return func_423();
}

int func_327()
{
	switch (func_326())
	{
		case 3:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_328()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, int iParam1)
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

void func_330(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_170(uParam0, 1024);
	}
	else
	{
		func_169(uParam0, 1024);
	}
}

void func_331(var uParam0, float fParam1)
{
	uParam0->f_20 = fParam1;
}

void func_332(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_333()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	iVar2 = func_192(2);
	if (!func_285())
	{
		iVar3 = 0;
		iVar0 = func_192(0);
		iVar1 = func_192(1);
	}
	else
	{
		iVar3 = 1;
		iVar0 = func_192(1);
		iVar1 = func_192(0);
	}
	if (func_234(iVar0, 242628503, 1, 0))
	{
		fVar4 = 1f;
		if (func_183(524288) || func_183(2097152))
		{
			fVar4 = 2f;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar5);
		if (func_288() && func_334(iVar2) != iVar1)
		{
			if (func_334(iVar0) != iVar1)
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iVar1);
			}
			TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(0, iVar1, iVar2, fVar4);
		}
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			TASK::TASK_MOUNT_ANIMAL(0, iVar2, -1, -1, fVar4, 1, 0, 0);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_34, 2.5f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar5);
		TASK::TASK_PERFORM_SEQUENCE(iVar0, iVar5);
		TASK::CLEAR_SEQUENCE_TASK(&iVar5);
		func_298(iVar3);
		PED::SET_PED_KEEP_TASK(iVar0, true);
	}
}

int func_334(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

bool func_335(int iParam0)
{
	return func_424(iParam0, 7);
}

bool func_336(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_337(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

float func_338(int iParam0)
{
	float fVar0;

	fVar0 = (7.5f + (ENTITY::GET_ENTITY_SPEED(*iParam0) * 1.25f));
	return func_425(fVar0 < 12.5f, fVar0, 12.5f);
}

void func_339(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_420())
	{
		if (!func_143(Local_163.f_18.f_101, func_426(23)) && func_288())
		{
			iVar0 = func_192(2);
			if (func_334(iVar0) == *iParam1)
			{
				func_308(23);
			}
		}
		if (func_327())
		{
			if (func_285())
			{
				if (!func_143(Local_163.f_18.f_101, func_426(22)))
				{
					if (func_183(524288))
					{
						func_308(22);
						func_337(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
					}
				}
			}
			else if (!func_143(Local_163.f_18.f_101, func_426(24)))
			{
				if (func_183(524288))
				{
					func_308(24);
					func_427(524288);
					func_337(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
					func_332(&(Local_163.f_18.f_119), 5000);
				}
			}
			else if (!func_143(Local_163.f_18.f_101, func_426(25)))
			{
				if (func_183(524288))
				{
					func_308(25);
					func_427(524288);
					func_337(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
				}
			}
			else if (func_183(524288))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_259(0);
				}
				func_287(512);
			}
		}
	}
}

void func_340()
{
	int iVar0;
	int iVar1;

	if (!func_183(1024))
	{
		func_419(1, 0, 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[0 /*4*/])->f_1, 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[1 /*4*/])->f_1, 0);
		func_287(1024);
	}
	else
	{
		if (!func_183(2048))
		{
			if (!func_302())
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[0 /*4*/])->f_1, 0);
			}
			if ((!func_428(1) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1)) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
			{
				if (ENTITY::IS_ENTITY_DEAD((Local_163.f_18.f_102[0 /*4*/])->f_1))
				{
					func_287(2048);
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[0 /*4*/])->f_1))
				{
					iVar0 = 16;
					if (PED::_IS_PED_LASSOED((Local_163.f_18.f_102[0 /*4*/])->f_1) || PED::_IS_PED_HOGTIED((Local_163.f_18.f_102[0 /*4*/])->f_1))
					{
						iVar0 = 18;
					}
					else if (Local_163.f_18.f_150 == 1024)
					{
						iVar0 = 20;
					}
					AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[0 /*4*/])->f_1, 0);
					func_308(iVar0);
					func_287(2048);
				}
			}
		}
		if (!func_183(4096))
		{
			if (!func_302())
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[1 /*4*/])->f_1, 0);
			}
			if ((!func_428(1) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1)) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
			{
				if (ENTITY::IS_ENTITY_DEAD((Local_163.f_18.f_102[1 /*4*/])->f_1))
				{
					func_287(4096);
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[1 /*4*/])->f_1))
				{
					iVar1 = 17;
					if (PED::_IS_PED_LASSOED((Local_163.f_18.f_102[1 /*4*/])->f_1) || PED::_IS_PED_HOGTIED((Local_163.f_18.f_102[1 /*4*/])->f_1))
					{
						iVar1 = 19;
					}
					AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[1 /*4*/])->f_1, 0);
					func_308(iVar1);
					func_287(4096);
				}
			}
		}
	}
}

void func_341(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_429())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_430(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_430(iParam0, 1) /*4*/])->f_2++;
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
	func_431(&Var0, uVar7);
}

int func_342(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_432(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_343(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_432(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_344(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_158(&Var1, uParam0))
	{
		iVar0 = ((func_433() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_345(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_346(int iParam0, int iParam1)
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

void func_347(var uParam0)
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 6, 25, &(Global_1051202->f_16[15]));
	func_434(uParam0, uParam0->f_1);
}

int func_348()
{
	return Local_163.f_2;
}

int func_349(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

void func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_98(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_435(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_99((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_436(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_436(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_436(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_436(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_351(int iParam0)
{
	func_437();
	func_438(iParam0);
}

void func_352(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_347(&Var0);
}

void func_353(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_421(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_439(iParam1);
	func_422(iVar0, iParam0);
}

void func_354(var uParam0)
{
	func_440(uParam0, 0f);
}

void func_355(int iParam0)
{
	if (func_143(Local_163.f_18.f_101, func_426(iParam0)))
	{
		return;
	}
	if (Local_163.f_18.f_152 > 100f)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_307(iParam0)))
	{
		return;
	}
	if (iParam0 < 15)
	{
		func_441(2001176446, (Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1, 1);
	}
	if (func_302())
	{
		func_419(1, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD((Local_163.f_18.f_102[0 /*4*/])->f_1))
		{
			func_442(&(Local_163.f_18.f_3), (Local_163.f_18.f_102[0 /*4*/])->f_1, func_309(0), 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD((Local_163.f_18.f_102[1 /*4*/])->f_1))
		{
			func_442(&(Local_163.f_18.f_3), (Local_163.f_18.f_102[1 /*4*/])->f_1, func_309(1), 0);
		}
		func_444(&(Local_163.f_18.f_3), func_443(func_307(iParam0)), 0, -1, 0, 0);
	}
	else
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1, 0);
		if (!AUDIO::_0xF0EE69F500952FA5((Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1))
		{
			AUDIO::SET_AMBIENT_VOICE_NAME((Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1, func_309(func_306(iParam0)));
		}
		func_446((Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1, func_307(iParam0), 2081540604, (Local_163.f_18.f_102[func_445(iParam0) /*4*/])->f_1, 0, 0, 0, 1);
	}
	func_170(&(Local_163.f_18.f_101), func_426(iParam0));
}

void func_356(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];
	int iVar4;

	StringCopy(&cVar1, func_317(iParam0), 24);
	iVar4 = 0;
	while (iVar4 <= 1)
	{
		iVar0 = func_207(iVar4);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iVar0, &cVar1))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, &cVar1, true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bDrawIdle", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bDraw", true, false);
					func_287(1);
				}
			}
		}
		iVar4++;
	}
}

int func_357(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	struct<15> Var0;
	int iVar20;
	int iVar21;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	Var0.f_8 = -1082130432;
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &(Var0.f_6), false, iParam5, false))
	{
		iVar20 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar20))
		{
			Var0 = { func_447(iVar20) };
			if (func_173(vParam1))
			{
				Var0.f_3 = { func_448(iVar20) };
			}
			else
			{
				Var0.f_3 = { vParam1 };
			}
			Var0.f_7 = fParam9;
			Var0.f_12 = 1;
			if (bParam8)
			{
				if (func_449(iParam0, 0))
				{
					Var0.f_9 = iParam0;
				}
				else
				{
					Var0.f_9 = 0;
				}
			}
			Var0.f_13 = iParam10;
			Var0.f_14 = iParam7;
			if (func_449(iParam4, 0))
			{
				Var0.f_11 = iParam4;
			}
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
			if (bParam6)
			{
				if (WEAPON::GET_AMMO_IN_CLIP(iParam0, &iVar21, Var0.f_6))
				{
					if (iVar21 > 0)
					{
						WEAPON::SET_AMMO_IN_CLIP(iParam0, Var0.f_6, (iVar21 - 1));
					}
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_358(int iParam0, bool bParam1, bool bParam2)
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

struct<5> func_359(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_450(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_451(bParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_362(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_452(bParam1) };
			if (iParam2 && func_453(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_360(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_360(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_361(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_454(bParam1) };
			switch (func_455(bParam0))
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
			if (func_456(bParam0, -1823706425))
			{
				Var0 = { func_362(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_456(bParam0, -1483207246))
			{
				Var0 = { func_362(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_362(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_456(bParam0, -1653629781))
			{
				Var0 = { func_362(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_457(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_456(bParam0, -1653629781))
			{
				Var0 = { func_362(1384535894, Var0, 1784584921, bParam1) };
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

bool func_360(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_458(bParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_361(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_459(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_362(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_460(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_461(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_363(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_462(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_457(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_364(bParam6))
	{
		iVar14 = -1;
		if (func_28() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_463(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_464(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_461(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_364(bool bParam0)
{
	if (func_28() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_461(bParam0));
}

int func_365(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_465(iParam0))
	{
		return 0;
	}
	if (!func_364(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_366(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_466(WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, bParam0, iVar1);
		}
	}
}

Vector3 func_367()
{
	return 0f, 0f, 0f;
}

int func_368(int iParam0)
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

struct<2> func_369(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

float func_370(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_371(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_372(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_371(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_373() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_373()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_374(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_467(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		uVar1 = func_467(iParam0, 5);
		return uVar1;
	}
	return iVar0;
}

void func_375(var uParam0, bool bParam1, int iParam2)
{
	func_468(iParam2);
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
		uParam0->f_13 = func_469(0);
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
							func_170(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_470(1, 1))
						{
							func_170(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_470(1, 1) || *uParam0 & 8192 != 0))
				{
					func_169(uParam0, 33554432);
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
			if (func_471(uParam0))
			{
				uParam0->f_15 = func_395();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_395() - uParam0->f_15) > 500)
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
	func_472(uParam0);
}

int func_376(int iParam0, var uParam1)
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
			if (!func_473(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_474(iParam0, iVar2) <= func_475(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_377(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_476(iParam2, 1, 1, 1, 0))
	{
		func_170(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_407(uParam1, 1);
	func_477();
}

int func_378(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_478(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_479(uParam1);
			if (func_480(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_481(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_407(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_482(uParam1))
						{
							func_407(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_379(int iParam0, int iParam1, var uParam2)
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
	if (func_483(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_479(uParam2);
		if (func_480(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_481(uParam2)
				{
					func_407(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_380(int iParam0, var uParam1)
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
		if (PED::_GET_RIDER_OF_MOUNT(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_473(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_481(uParam1)
		{
			fVar3 = func_479(uParam1);
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

int func_381(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_484(bParam1, bParam2, bParam3);
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

int func_382(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_395();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_383(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_485(uParam2);
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
			if (func_391(uParam2, iParam1))
			{
				func_407(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_384(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_486(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_391(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_407(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_385(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_487(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_407(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_407(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_488(iParam1, vVar0, vVar4))
					{
						func_407(uParam2, 1);
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
					func_407(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_488(iParam1, vVar0, vVar7))
					{
						func_407(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_386(int iParam0, var uParam1)
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
		if (!func_473(iParam0, uParam1, &(Global_1939178->f_28[iVar0])) || iParam0 == &Global_1939178->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_489(&(Global_1939178->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false), vVar9);
			if (func_490(&(Global_1939178->f_28[iVar0])))
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
			if (func_491(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_492(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_493(uParam1, iParam0, fVar1, iVar0))
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

int func_387(int iParam0, var uParam1)
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

int func_388(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_395();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_389(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_494(iVar0, &iVar2))
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
	if (func_495(iVar0, iParam0))
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

int func_390(var uParam0, int iParam1)
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

int func_391(var uParam0, int iParam1)
{
	if (func_496(uParam0))
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

int func_392(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_295(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_393()
{
}

int func_394(var uParam0, int iParam1)
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
		if (func_497(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_395();
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
						if (func_498(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_395();
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

int func_395()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_396()
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
	if ((func_395() - Global_1939178->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_397(var uParam0, int iParam1)
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
	fVar0 = func_475(uParam0);
	if (uParam0->f_12 > func_499(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_500(iParam1);
	iVar1 = func_501(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_398(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_399(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_400(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_502(iParam0, vVar0, iParam2);
}

int func_401(int iParam0, int iParam1, var uParam2)
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
	return func_503(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_402(int iParam0, var uParam1)
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
		if (func_504(iParam0, uParam1, 1))
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
			if (func_505(uParam1))
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
					if (!func_506(uParam1, iParam0))
					{
						if (func_498(iVar4, Global_35, 1) < 7f)
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

int func_403(int iParam0, var uParam1)
{
	if (!func_507(0))
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

int func_404(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_395();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_405(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_406(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_395();
	}
	else if (func_395() - uParam1->f_4) > func_508(uParam1)
	{
		return func_509(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

void func_407(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_170(uParam0, 134217728);
	}
	else
	{
		func_169(uParam0, 134217728);
	}
}

struct<15> func_408(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_163, 5);
	Var0.f_9 = iParam0;
	Var0 = 178;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_409(var uParam0)
{
	func_511(uParam0, func_510(4, 117));
}

bool func_410(int iParam0)
{
	return func_101(8, iParam0);
}

char* func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NB_DUEL_BOUNTY_HUNTER_NAME";
		case 1:
			return "NB_DUEL_TARGET_NAME";
		default:
			break;
	}
	return "";
}

bool func_412(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_413(var uParam0)
{
	return func_412(*uParam0, 2);
}

void func_414(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_279(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_92(&Var0, 4) && func_512(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_415(struct<2> Param0)
{
	struct<32> Var0;

	if (func_240(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_240(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_240(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_513(Param0, &Var0))
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

void func_416(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_279(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

Vector3 func_417(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	func_514(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

void func_418(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_419(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

int func_420()
{
	if (func_302())
	{
		if (func_428(1))
		{
			return 1;
		}
	}
	else if (AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1) || AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
	{
		return 1;
	}
	return 0;
}

int func_421(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_515(iParam0) - 1))
	{
		return 0;
	}
	return 1;
}

void func_422(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_279(iParam1, 896190569) };
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

var func_423()
{
	return Local_163.f_3;
}

int func_424(int iParam0, int iParam1)
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

float func_425(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
		case 18:
		case 20:
			return 65536;
		case 17:
		case 19:
			return 131072;
		case 21:
			return 262144;
		case 22:
			return 1048576;
		case 23:
			return 2097152;
		case 24:
			return 4194304;
		case 25:
			return 8388608;
		default:
			break;
	}
	return 0;
}

void func_427(int iParam0)
{
	func_169(&((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1), iParam0);
}

bool func_428(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_429()
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

int func_430(int iParam0, int iParam1)
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

void func_431(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 8, &uParam1);
}

int func_432(struct<2> Param0, var uParam2)
{
	if (!func_36(Param0))
	{
		return 0;
	}
	func_516(uParam2);
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

int func_433()
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

void func_434(var uParam0, var uParam1)
{
}

int func_435(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*iParam1 = iVar1;
		func_31(&Var2, *iParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*iParam2 = 0;
			while (*iParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*iParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

struct<2> func_436(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_437()
{
	func_99(&(Global_1245803->f_2003));
}

void func_438(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_279(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_439(int iParam0)
{
	return iParam0 + 8;
}

void func_440(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_373() - fParam1);
	func_517(uParam0, 1);
	func_518(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_441(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, uParam1);
}

void func_442(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_519(uParam0, iParam1, sParam2))
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

Vector3 func_443(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_444(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_520(vParam1, uParam0);
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

int func_445(int iParam0)
{
	int iVar0;

	iVar0 = func_306(iParam0);
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		default:
			break;
	}
	return 1;
}

var func_446(var uParam0, char[4] cParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = cParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_521(uParam0, &Var0);
}

Vector3 func_447(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + Vector(0.1f, 0.1f, 0.1f) * vVar7 };
	return vVar0;
}

Vector3 func_448(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + vVar7 };
	return vVar0;
}

int func_449(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_171(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_171(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_171(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_171(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_171(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_171(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_171(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_171(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

struct<4> func_450(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_461(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_362(joaat("character"), func_522(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_362(joaat("character"), func_522(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_362(joaat("character"), func_522(), -1591664384, bParam0);
}

int func_451(bool bParam0)
{
	vector3 vVar0;

	if (!func_460(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_452(bool bParam0)
{
	int iVar0;

	iVar0 = func_461(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_362(923904168, func_450(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_362(923904168, func_450(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_362(923904168, func_450(bParam0), -740156546, 0);
}

int func_453(bool bParam0, bool bParam1)
{
	if (func_455(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_523();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_454(bool bParam0)
{
	int iVar0;

	iVar0 = func_461(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_362(271701509, func_450(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_362(271701509, func_450(bParam0), 12999093, 0);
}

int func_455(bool bParam0)
{
	struct<2> Var0;

	if (!func_460(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_456(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_455(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_524(bParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_457(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_525(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_458(bool bParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_460(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_526(bParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_362(bParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_461(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_461(bParam6), bParam0, iParam8);
	}
	return iVar0;
}

int func_459(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_461(0);
	*uParam1 = { func_362(bParam0, func_452(0), iParam3, 0) };
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

int func_460(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_461(bool bParam0)
{
	if (func_28() == -1)
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

int func_462(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_463(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_527(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_528(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_529(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_464(int iParam0, struct<16> Param1)
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

bool func_465(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_466(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_467(int iParam0, int iParam1)
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

void func_468(int iParam0)
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
	Global_1939178->f_21 = func_530();
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
			func_531(&(Global_1939178->f_28), &(Global_1939178->f_33));
			Global_1939178->f_32 = iParam0;
			break;
		case 1:
			Global_1939178->f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1939178->f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1939178->f_38))
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
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1939178->f_40))
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

var func_469(int iParam0)
{
	return &(Global_1099294->f_372[iParam0 /*3*/]);
}

int func_470(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_532(bParam0, &iVar0, &iVar1))
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

int func_471(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939178->f_34;
	if (func_28() == -1)
	{
		if (Global_1939178->f_34 == 0)
		{
			iVar0 = func_533(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_34) || !&Global_1954472->f_1616[4])
	{
		iVar0 = func_533(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_501(iVar0) == -1)
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

void func_472(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_534(uParam0);
	}
}

int func_473(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_501(iParam2);
	}
	else
	{
		iVar1 = func_500(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_501(iParam0);
	}
	else
	{
		iVar0 = func_500(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_143(*uParam1, 8388608))
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

float func_474(int iParam0, int iParam1)
{
	return func_295(iParam0, iParam1, 1, 1);
}

float func_475(var uParam0)
{
	return uParam0->f_28;
}

int func_476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_477()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_478(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_295(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_535(iVar0, 0)))
		{
			if (func_536(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_479(var uParam0)
{
	return uParam0->f_17;
}

int func_480(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_143(*uParam0, 4194304))
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

int func_481(var uParam0)
{
	return uParam0->f_18;
}

int func_482(var uParam0)
{
	return uParam0->f_19;
}

int func_483(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_535(iVar0, 0)))
		{
			if (func_537(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_484(bool bParam0, bool bParam1, bool bParam2)
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

float func_485(var uParam0)
{
	return uParam0->f_24;
}

int func_486(var uParam0)
{
	return uParam0->f_22;
}

int func_487(var uParam0)
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

int func_488(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_538(iParam0, vParam4, 0.5f))
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

int func_489(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1939178->f_38 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40))
		{
			if (WEAPON::_IS_WEAPON_MELEE(Global_1939178->f_40) || WEAPON::_IS_WEAPON_BOW(Global_1939178->f_40))
			{
				return 1;
			}
		}
	}
	if (func_539(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0)
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

int func_491(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_540(iParam1))
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

int func_492(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_540(iParam1))
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

int func_493(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_541(uParam0);
	if (func_540(iParam1))
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

int func_494(int iParam0, int iParam1)
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

int func_495(int iParam0, int iParam1)
{
	if (PED::_GET_LASSOED_ENTITY(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_542(iParam0, 1, 0, 0)) && !func_542(iParam0, 1, 0, 0) == 1151374672)
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

bool func_496(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_497(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_498(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_498(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_499(var uParam0)
{
	return uParam0->f_25;
}

int func_500(int iParam0)
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

int func_501(int iParam0)
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

int func_502(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_543(vVar3, vVar6);
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
	if (func_544(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_503(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_494(Global_34, &iVar1))
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
		fVar2 = func_295(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_295(iParam0, Global_1939178->f_34, 0, 1) < 2.5f)
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

int func_504(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_532(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_506(uParam1, iVar0))
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
				if (!bParam2 || !func_506(uParam1, iVar1))
				{
					if (func_498(iVar1, Global_35, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_505(var uParam0)
{
	return func_143(*uParam0, 131072);
}

int func_506(var uParam0, int iParam1)
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

int func_507(int iParam0)
{
	return 0;
}

int func_508(var uParam0)
{
	return uParam0->f_21;
}

int func_509(int iParam0, var uParam1, bool bParam2, float fParam3)
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

var func_510(int iParam0, int iParam1)
{
	return func_545(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_511(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 5, &uParam1);
}

int func_512(int iParam0)
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

int func_513(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_432(Param0, &vVar0);
	if (func_546(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

Vector3 func_514(vector3 vParam0)
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

int func_515(int iParam0)
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

void func_516(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_517(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_518(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_519(var uParam0, int iParam1, char* sParam2)
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

void func_520(var uParam0, var uParam1, var uParam2, var uParam3)
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

var func_521(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

struct<4> func_522()
{
	struct<4> Var0;

	return Var0;
}

bool func_523()
{
	return (func_547(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_548(func_362(889965687 /* GXTEntry: "Wardrobe" */, func_450(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_524(bool bParam0, int iParam1, int iParam2)
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

int func_525(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_461(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_526(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_527(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_171(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_171(iVar0, 8))
	{
		return 0;
	}
	else if (func_171(iVar0, 16))
	{
		return 0;
	}
	else if (func_171(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_528(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_549(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_549(iParam1, 2, 0, 0);
	return -1;
}

int func_529(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_549(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_530()
{
	if (func_550())
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

void func_531(var uParam0, var uParam1)
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

int func_532(bool bParam0, int iParam1, int iParam2)
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

int func_533(var uParam0)
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
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
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
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_534(var uParam0)
{
	int iVar0;

	if (Global_1939178->f_32 == 0)
	{
		func_169(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939178->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939178->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939178->f_28[iVar0])))
				{
					func_170(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_535(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_536(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_537(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_537(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_538(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_539(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
				if (WEAPON::_IS_WEAPON_MELEE(Global_1939178->f_38) || Global_1939178->f_38 == joaat("weapon_melee_knife"))
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

int func_540(int iParam0)
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

float func_541(var uParam0)
{
	return uParam0->f_27;
}

int func_542(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_543(vector3 vParam0, vector3 vParam3)
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

bool func_544(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

var func_545(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_551() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_552());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_552());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_552());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_553(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_554(iVar2))
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
				if (iVar9 & 8192 != 0 && func_555(iVar2) != 1)
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
					if (!func_556(iVar10))
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

int func_546(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_557(iParam0))
	{
		return 0;
	}
	if (func_558(iParam0, uParam1, &uVar0))
	{
		func_559(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_547(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_465(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_461(bParam1), bParam0, iParam3);
}

int func_548(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_560(&uParam0, iParam4, bParam5, iParam6);
}

void func_549(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_561(iParam0, iParam1, iParam2, iParam3);
}

int func_550()
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

int func_551()
{
	return Global_1051202->f_12;
}

char* func_552()
{
	return "unnamed";
}

int func_553(int iParam0)
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

int func_554(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_562(35, iParam0);
}

int func_555(int iParam0)
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

bool func_556(int iParam0)
{
	if (func_563(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_564(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_557(int iParam0)
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

bool func_558(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_565(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_559(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_566(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_567(iVar0);
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
			uParam2->f_5 = func_568(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_569(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_570(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_571(iVar0);
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

int func_560(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_572(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_561(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_562(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_573(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_574())
	{
		return func_573(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_573(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_563(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_564(int iParam0)
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
		func_575(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_576(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_565(int iParam0)
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

int func_566(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_577(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_567(int iParam0)
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

int func_568(int iParam0)
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

int func_569(int iParam0)
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

int func_570(int iParam0)
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

int func_571(int iParam0)
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

int func_572(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_461(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_525(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_573(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_574()
{
	return Global_1099294->f_339;
}

void func_575(int iParam0)
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
	func_576(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_576(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_577(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_578(iParam0, uParam1, &uVar0))
	{
		func_579(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_578(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_565(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_579(var uParam0, int iParam1, var uParam2)
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

