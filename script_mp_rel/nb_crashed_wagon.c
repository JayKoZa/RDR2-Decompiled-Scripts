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
	struct<35> Local_21 = { 0, 0, 0, 0, 0, 0, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0 } ;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	struct<22> Local_58[32];
	struct<199> Local_763 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = -1;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 255;
	var uLocal_969 = -1;
	var uLocal_970 = -1;
	var uLocal_971 = 1;
	var uLocal_972 = 1101004800;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 3;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 1;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = -1;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 1;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = -1;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 1;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = -1;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_21, 37, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_21), 37, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_58, 705, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_58[0 /*22*/]), 705, "m_clientData");
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
	else if (func_17(Local_763.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_763.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_763.f_12), Local_763.f_9))
	{
		return 1;
	}
	else if (Local_763.f_8 == 6)
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
	func_30();
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
	MISC::_COPY_MEMORY(&Local_763, &uParam0, 5);
	iVar19 = func_31(&bVar18, Local_763.f_1, Local_763.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_763.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_32(&Var0, Local_763.f_1, Local_763.f_2, Local_763.f_3, iVar17);
	Local_763.f_9 = { func_33(Var0.f_5, 8) };
	Local_763.f_14 = Var0.f_5;
	Local_763.f_15 = { Var0.f_11 };
	func_34();
	func_35();
}

void func_14()
{
	func_36();
}

void func_15()
{
	func_37();
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
	if (func_38(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_39(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_40(iParam3, 255))
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
	if (func_41())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_38(*Global_1051163))
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
		func_42();
	}
	switch (Local_21)
	{
		case 0:
			func_43();
			break;
		case 1:
			func_44();
			break;
		case 2:
			func_45();
			break;
		case 3:
			func_46();
			break;
		case 4:
			func_47();
			break;
		case 5:
			func_48();
			break;
	}
}

void func_23()
{
	func_49();
	if (Local_763.f_8 <= 5)
	{
		func_50();
	}
	switch (Local_763.f_8)
	{
		case 0:
			func_51();
			break;
		case 1:
			func_52();
			break;
		case 2:
			func_53();
			break;
		case 3:
			func_54();
			break;
		case 4:
			func_55();
			break;
		case 5:
			func_56();
			break;
	}
}

void func_24()
{
	func_57();
}

void func_25()
{
	if (func_58())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_21.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_21.f_3.f_1);
		}
	}
	func_59();
}

void func_26()
{
	func_60();
	func_61();
	func_62();
}

void func_27()
{
	if (Local_763.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_63(Local_763.f_12, 4);
		}
	}
	func_64();
	if (func_65(32))
	{
		func_66(Local_21.f_6);
	}
	func_67();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051202->f_8;
}

void func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			Local_21.f_29.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

int func_31(var uParam0, int iParam1, int iParam2)
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
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_68(&Var0, Var26);
	iVar25 = func_69(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_70(iVar25) };
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

void func_32(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			func_71(uParam0, iParam2);
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
			func_72(uParam0);
			switch (iParam2)
			{
				case 0:
					func_73(uParam0);
					uParam0->f_5 = 277430601;
					uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_73(uParam0);
					uParam0->f_5 = 1659133778;
					uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_73(uParam0);
					uParam0->f_5 = 1296650927;
					uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_73(uParam0);
					uParam0->f_5 = 2115437634;
					uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_73(uParam0);
					uParam0->f_5 = 1098622970;
					uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_73(uParam0);
					uParam0->f_5 = 393263596;
					uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_73(uParam0);
					uParam0->f_5 = 189453630;
					uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_73(uParam0);
					uParam0->f_5 = -98921343;
					uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_73(uParam0);
					uParam0->f_5 = 6025033;
					uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_73(uParam0);
					uParam0->f_5 = -1060299979;
					uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_73(uParam0);
					uParam0->f_5 = 682088681;
					uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_73(uParam0);
					uParam0->f_5 = 1705841922;
					uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_73(uParam0);
					uParam0->f_5 = -301205165;
					uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_73(uParam0);
					uParam0->f_5 = 1906160715;
					uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_73(uParam0);
					uParam0->f_5 = -1129906020;
					uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_73(uParam0);
					uParam0->f_5 = 1592980994;
					uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_73(uParam0);
					uParam0->f_5 = 686459378;
					uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_73(uParam0);
					uParam0->f_5 = -259262381;
					uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_73(uParam0);
					uParam0->f_5 = 1289806844;
					uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_73(uParam0);
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
			func_72(uParam0);
			switch (iParam2)
			{
				case 0:
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
					uParam0->f_5 = 1454566440;
					uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
					uParam0->f_5 = 1141360338;
					uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
					uParam0->f_5 = 844768119;
					uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_74(uParam0, 0);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 4);
					func_74(uParam0, 5);
					func_74(uParam0, 7);
					uParam0->f_5 = -1601993562;
					uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_74(uParam0, 0);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
					func_74(uParam0, 7);
					uParam0->f_5 = -901588956;
					uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_74(uParam0, 0);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
					func_74(uParam0, 7);
					uParam0->f_5 = 2129019244;
					uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_74(uParam0, 0);
					func_74(uParam0, 2);
					func_74(uParam0, 4);
					func_74(uParam0, 5);
					func_74(uParam0, 6);
					uParam0->f_5 = 1227099802;
					uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_74(uParam0, 0);
					func_74(uParam0, 2);
					func_74(uParam0, 4);
					func_74(uParam0, 5);
					func_74(uParam0, 6);
					uParam0->f_5 = -940471213;
					uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_74(uParam0, 0);
					func_74(uParam0, 2);
					func_74(uParam0, 4);
					func_74(uParam0, 5);
					func_74(uParam0, 6);
					uParam0->f_5 = -700569364;
					uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					uParam0->f_5 = 412376369;
					uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_74(uParam0, 0);
					func_74(uParam0, 2);
					func_74(uParam0, 5);
					func_74(uParam0, 7);
					uParam0->f_5 = -364052317;
					uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					uParam0->f_5 = -989186530;
					uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_74(uParam0, 0);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 4);
					func_74(uParam0, 5);
					func_74(uParam0, 6);
					uParam0->f_5 = 333858683;
					uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					uParam0->f_5 = -39511303;
					uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_74(uParam0, 3);
					func_74(uParam0, 4);
					func_74(uParam0, 5);
					func_74(uParam0, 6);
					uParam0->f_5 = 813662381;
					uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
					func_74(uParam0, 7);
					uParam0->f_5 = -1114006686;
					uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
					func_74(uParam0, 7);
					uParam0->f_5 = 1049238845;
					uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
					func_74(uParam0, 7);
					uParam0->f_5 = 1363886783;
					uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
					uParam0->f_5 = -1215674354;
					uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					uParam0->f_5 = 1902132155;
					uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 5);
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
			func_72(uParam0);
			uParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_73(uParam0);
					uParam0->f_5 = 1382777618;
					uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_73(uParam0);
					uParam0->f_5 = -2000681184;
					uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_73(uParam0);
					uParam0->f_5 = 886884092;
					uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_73(uParam0);
					uParam0->f_5 = -1277120723;
					uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_73(uParam0);
					uParam0->f_5 = 1577436816;
					uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_73(uParam0);
					uParam0->f_5 = -234749781;
					uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_73(uParam0);
					uParam0->f_5 = -1607623039;
					uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_73(uParam0);
					uParam0->f_5 = -1943295936;
					uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_73(uParam0);
					uParam0->f_5 = -397730168;
					uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_73(uParam0);
					uParam0->f_5 = -392659534;
					uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_73(uParam0);
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
			func_72(uParam0);
			switch (iParam2)
			{
				case 0:
					func_73(uParam0);
					uParam0->f_5 = 1247886914;
					uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_73(uParam0);
					uParam0->f_5 = 1926100410;
					uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_73(uParam0);
					uParam0->f_5 = 603340011;
					uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_73(uParam0);
					uParam0->f_5 = -1253915394;
					uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_73(uParam0);
					uParam0->f_5 = 1281783573;
					uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_73(uParam0);
					uParam0->f_5 = -1384936716;
					uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_73(uParam0);
					uParam0->f_5 = 636669604;
					uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_73(uParam0);
					uParam0->f_5 = 1410575087;
					uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_73(uParam0);
					uParam0->f_5 = -736919321;
					uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_73(uParam0);
					uParam0->f_5 = 1755496218;
					uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_73(uParam0);
					uParam0->f_5 = -1810033095;
					uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_73(uParam0);
					uParam0->f_5 = 99707271;
					uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_73(uParam0);
					uParam0->f_5 = 2145033839;
					uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_73(uParam0);
					uParam0->f_5 = -994111457;
					uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_73(uParam0);
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
					func_75(uParam0, 0);
					func_75(uParam0, 1);
					func_75(uParam0, 4);
					func_75(uParam0, 5);
					break;
				case 1:
					func_75(uParam0, 2);
					func_75(uParam0, 3);
					func_75(uParam0, 6);
					func_75(uParam0, 7);
					func_76(uParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_74(uParam0, 0);
					uParam0->f_5 = -88606612;
					uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_74(uParam0, 1);
					uParam0->f_5 = -1507537085;
					uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_74(uParam0, 0);
					uParam0->f_5 = 150331424;
					uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_74(uParam0, 1);
					uParam0->f_5 = -74168995;
					uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_74(uParam0, 0);
					uParam0->f_5 = -1303456769;
					uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_74(uParam0, 1);
					uParam0->f_5 = 2080696176;
					uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_74(uParam0, 0);
					uParam0->f_5 = -801880493;
					uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_74(uParam0, 1);
					uParam0->f_5 = -2098877513;
					uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_74(uParam0, 0);
					uParam0->f_5 = -985131289;
					uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_74(uParam0, 1);
					uParam0->f_5 = 171385032;
					uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_74(uParam0, 0);
					uParam0->f_5 = -690365399;
					uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_74(uParam0, 1);
					uParam0->f_5 = -393773180;
					uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_74(uParam0, 0);
					uParam0->f_5 = 1783045643;
					uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_74(uParam0, 1);
					uParam0->f_5 = -1841828372;
					uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_74(uParam0, 0);
					uParam0->f_5 = -1926357119;
					uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_74(uParam0, 1);
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
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
					uParam0->f_5 = 666420762;
					uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 8);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
					uParam0->f_5 = 1145423923;
					uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 4);
					func_74(uParam0, 5);
					func_74(uParam0, 6);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
					uParam0->f_5 = -1176575305;
					uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
					uParam0->f_5 = -888961792;
					uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
					uParam0->f_5 = -1145898130;
					uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 4);
					func_74(uParam0, 7);
					func_74(uParam0, 8);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
					uParam0->f_5 = -264936334;
					uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 3);
					func_74(uParam0, 6);
					func_74(uParam0, 7);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
					uParam0->f_5 = -562839313;
					uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 4);
					func_74(uParam0, 5);
					func_74(uParam0, 6);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
					uParam0->f_5 = -819926700;
					uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_74(uParam0, 0);
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
					uParam0->f_5 = -100890882;
					uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_74(uParam0, 1);
					func_74(uParam0, 2);
					func_74(uParam0, 5);
					func_74(uParam0, 9);
					func_74(uParam0, 10);
					func_74(uParam0, 11);
					func_77(uParam0, iParam3);
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
			func_72(uParam0);
			switch (iParam2)
			{
				case 0:
					func_73(uParam0);
					uParam0->f_5 = -1562903685;
					uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_73(uParam0);
					uParam0->f_5 = 442262250;
					uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_73(uParam0);
					uParam0->f_5 = 2113001754;
					uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_73(uParam0);
					uParam0->f_5 = 222101843;
					uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_73(uParam0);
					uParam0->f_5 = 862535295;
					uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_73(uParam0);
					uParam0->f_5 = 267494763;
					uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_73(uParam0);
					uParam0->f_5 = 492498900;
					uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_73(uParam0);
					uParam0->f_5 = -735417347;
					uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_73(uParam0);
					uParam0->f_5 = 2000289900;
					uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_73(uParam0);
					uParam0->f_5 = 1820563970;
					uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_73(uParam0);
					uParam0->f_5 = 1501808210;
					uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_73(uParam0);
					uParam0->f_5 = -1103422576;
					uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_73(uParam0);
					uParam0->f_5 = -375108461;
					uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_73(uParam0);
					uParam0->f_5 = 1074344160;
					uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_73(uParam0);
					uParam0->f_5 = 1375567406;
					uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_73(uParam0);
					uParam0->f_5 = 1695022182;
					uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_73(uParam0);
					uParam0->f_5 = 1773241795;
					uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_73(uParam0);
					uParam0->f_5 = 1650499101;
					uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_73(uParam0);
					uParam0->f_5 = 149116609;
					uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_73(uParam0);
					uParam0->f_5 = 1486166046;
					uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_73(uParam0);
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
			func_72(uParam0);
			func_76(uParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_73(uParam0);
					uParam0->f_5 = -1657923088;
					uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_73(uParam0);
					uParam0->f_5 = -1268232386;
					uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_73(uParam0);
					uParam0->f_5 = 1926851120;
					uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_73(uParam0);
					uParam0->f_5 = -66052340;
					uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_73(uParam0);
					uParam0->f_5 = 1738334804;
					uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_73(uParam0);
					uParam0->f_5 = 1009780912;
					uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_73(uParam0);
					uParam0->f_5 = -1560771476;
					uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_73(uParam0);
					uParam0->f_5 = 453813335;
					uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_73(uParam0);
					uParam0->f_5 = 786924542;
					uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_73(uParam0);
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
					func_78(uParam0, iParam3);
					uParam0->f_5 = 1323108111;
					uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_78(uParam0, iParam3);
					uParam0->f_5 = -1505479200;
					uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_78(uParam0, iParam3);
					uParam0->f_5 = -1283075997;
					uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_78(uParam0, iParam3);
					uParam0->f_5 = -2100531475;
					uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 269617530;
					uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 1592829750;
					uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 1817985549;
					uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 1945424739;
					uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 1787314318;
					uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 542354442;
					uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_78(uParam0, iParam3);
					uParam0->f_5 = 1510776727;
					uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_78(uParam0, iParam3);
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
			func_72(uParam0);
			switch (iParam2)
			{
				case 0:
					func_73(uParam0);
					uParam0->f_5 = -377638420;
					uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_73(uParam0);
					uParam0->f_5 = 1308799438;
					uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_73(uParam0);
					uParam0->f_5 = -1030922940;
					uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_73(uParam0);
					uParam0->f_5 = 1750043358;
					uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_73(uParam0);
					uParam0->f_5 = -1330609910;
					uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_73(uParam0);
					uParam0->f_5 = 223942444;
					uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_73(uParam0);
					uParam0->f_5 = 1067547121;
					uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_73(uParam0);
					uParam0->f_5 = -450732096;
					uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_73(uParam0);
					uParam0->f_5 = -1701940764;
					uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_73(uParam0);
					uParam0->f_5 = 1584258975;
					uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_73(uParam0);
					uParam0->f_5 = -98183174;
					uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_73(uParam0);
					uParam0->f_5 = -90261849;
					uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_73(uParam0);
					uParam0->f_5 = 754522971;
					uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_73(uParam0);
					uParam0->f_5 = 974542513;
					uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_73(uParam0);
					uParam0->f_5 = -790885273;
					uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_73(uParam0);
					uParam0->f_5 = -1447045452;
					uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_73(uParam0);
					uParam0->f_5 = -586115209;
					uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_73(uParam0);
					uParam0->f_5 = 224941020;
					uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_73(uParam0);
					uParam0->f_5 = -1179654578;
					uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_73(uParam0);
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
			func_72(uParam0);
			uParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_73(uParam0);
					uParam0->f_5 = 974582605;
					uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_73(uParam0);
					uParam0->f_5 = -964359125;
					uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_73(uParam0);
					uParam0->f_5 = -700339292;
					uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_73(uParam0);
					uParam0->f_5 = -470300912;
					uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_73(uParam0);
					uParam0->f_5 = -241343909;
					uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_73(uParam0);
					uParam0->f_5 = 1944053474;
					uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_73(uParam0);
					uParam0->f_5 = -2120646059;
					uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_73(uParam0);
					uParam0->f_5 = -1656440405;
					uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_73(uParam0);
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
			func_72(uParam0);
			func_76(uParam0, 1);
			func_76(uParam0, 4);
			func_76(uParam0, 8);
			func_76(uParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_73(uParam0);
					uParam0->f_5 = -1623035253;
					uParam0->f_11 = { func_80(func_79(iParam4)) };
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
					func_81(uParam0, iParam3);
					uParam0->f_5 = -1957221189;
					uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_81(uParam0, iParam3);
					uParam0->f_5 = 871956008;
					uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_81(uParam0, iParam3);
					uParam0->f_5 = -718829908;
					uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_81(uParam0, iParam3);
					uParam0->f_5 = -478076065;
					uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_81(uParam0, iParam3);
					uParam0->f_5 = 158131441;
					uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_81(uParam0, iParam3);
					uParam0->f_5 = 575051428;
					uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_81(uParam0, iParam3);
					uParam0->f_5 = -861587350;
					uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_81(uParam0, iParam3);
					uParam0->f_5 = -616671844;
					uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_81(uParam0, iParam3);
					uParam0->f_5 = -828875274;
					uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_81(uParam0, iParam3);
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
			func_72(uParam0);
			switch (iParam2)
			{
				case 0:
					func_73(uParam0);
					uParam0->f_5 = 2136361638;
					uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_73(uParam0);
					uParam0->f_5 = 1948005426;
					uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_73(uParam0);
					uParam0->f_5 = 462368629;
					uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_73(uParam0);
					uParam0->f_5 = -172629291;
					uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_73(uParam0);
					uParam0->f_5 = 1063777848;
					uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_73(uParam0);
					uParam0->f_5 = -267241827;
					uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_73(uParam0);
					uParam0->f_5 = -1183266453;
					uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_73(uParam0);
					uParam0->f_5 = -877826604;
					uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_73(uParam0);
					uParam0->f_5 = 1527533302;
					uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_73(uParam0);
					uParam0->f_5 = -865586768;
					uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_73(uParam0);
					uParam0->f_5 = 294379466;
					uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_73(uParam0);
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
			iVar17 = func_82(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				uParam0->f_7 = 1;
			}
			*uParam0 = func_83(iVar17);
			uParam0->f_1 = 0;
			uParam0->f_6 = 2;
			func_76(uParam0, 32);
			if (iParam2 != -1)
			{
				uParam0->f_9 = func_85(func_84(iVar17), iParam2);
				uParam0->f_15 = func_86(func_84(iVar17), iParam2);
				uParam0->f_5 = func_87(iVar17, iParam2);
				uParam0->f_11 = { func_88(iVar17, iParam2) };
			}
			break;
	}
}

struct<2> func_33(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_90(iParam0, &(Global_1070356->f_634), func_89(iParam1));
			break;
		case 3:
			Var0.f_1 = func_90(iParam0, &(Global_1070356->f_634.f_602), func_89(iParam1));
			break;
		case 4:
			Var0.f_1 = func_90(iParam0, &(Global_1070356->f_634.f_2104), func_89(iParam1));
			break;
		case 5:
			Var0.f_1 = func_90(iParam0, &(Global_1070356->f_634.f_12606), func_89(iParam1));
			break;
		case 6:
			Var0.f_1 = func_90(iParam0, &(Global_1070356->f_634.f_12908), func_89(iParam1));
			break;
		case 7:
			Var0.f_1 = func_90(iParam0, &(Global_1070356->f_634.f_15910), func_89(iParam1));
			break;
		case 8:
			Var0.f_1 = func_90(iParam0, &(Global_1070356->f_634.f_15981), func_89(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_91();
	}
	return Var0;
}

void func_34()
{
	func_92();
	func_93();
	func_94();
}

void func_35()
{
	func_95();
	func_97(17921);
}

void func_36()
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(7);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

void func_37()
{
	int iVar0;

	iVar0 = 1;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

int func_38(struct<2> Param0)
{
	if (!func_98(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_89(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_39(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_40(int iParam0, int iParam1)
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

int func_41()
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
	if (!func_38(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_42()
{
}

void func_43()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1186267->f_231.f_1066[Local_763.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_32(&Var1, Local_763.f_1, Local_763.f_2, Local_763.f_3, iVar0);
	if (!func_99(&Var1, 1))
	{
		func_100(1);
		return;
	}
	Local_21.f_6 = func_79(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_101(256);
	if (func_102(Local_21.f_6))
	{
		func_103(5);
		func_100(6);
	}
	else
	{
		func_100(1);
	}
}

void func_44()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_32(&Var0, Local_763.f_1, Local_763.f_2, -1, 255);
	if (func_99(&Var0, 1))
	{
		func_100(2);
		return;
	}
	if (func_104(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_763.f_15, Var0.f_10, 2442122);
		func_100(2);
	}
	else if (bVar17)
	{
		func_103(3);
		func_100(6);
	}
	if (!func_105(Local_21.f_3.f_2))
	{
		func_106(&(Local_21.f_3.f_2));
	}
	else if (func_107(Local_21.f_3.f_2) > 45000)
	{
		func_103(4);
		func_100(6);
	}
}

void func_45()
{
	if (func_108(1, 255))
	{
		if (!func_109(1))
		{
			if (func_110())
			{
				func_101(1);
			}
		}
		else
		{
			func_111();
			func_100(3);
		}
	}
}

void func_46()
{
	bool bVar0;

	if (func_108(2, 255))
	{
		if (!func_109(2))
		{
			bVar0 = true;
			if (!func_112())
			{
				bVar0 = false;
			}
			if (!func_113())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_101(2);
			}
		}
		else
		{
			func_114();
			func_100(4);
		}
	}
}

void func_47()
{
	func_115();
	func_116();
	func_117();
	if (func_118() || Local_21.f_2 != 0)
	{
		func_119();
		func_100(5);
	}
}

void func_48()
{
	if (func_108(4, 255))
	{
		if (func_120())
		{
			func_101(4);
			func_100(6);
		}
	}
}

void func_49()
{
	if (!func_109(256))
	{
		return;
	}
	if (func_109(512))
	{
		if (func_65(32) && func_79(PLAYER::PLAYER_ID()) == Local_21.f_6)
		{
			func_66(Local_21.f_6);
			func_121(32);
		}
	}
	else if (!func_65(32))
	{
		if (func_79(PLAYER::PLAYER_ID()) == Local_21.f_6)
		{
			func_122(Local_21.f_6, 1, 1);
			func_123(32);
		}
	}
	else if (func_79(PLAYER::PLAYER_ID()) != Local_21.f_6)
	{
		func_66(Local_21.f_6);
		func_121(32);
	}
}

void func_50()
{
	func_124();
}

void func_51()
{
	if (Local_21 == 6)
	{
		func_125(6);
	}
	else if (Local_21 > 0)
	{
		func_49();
		func_125(1);
	}
}

void func_52()
{
	if (Local_21 == 6)
	{
		func_125(6);
	}
	else if (Local_21 > 1)
	{
		func_125(2);
	}
}

void func_53()
{
	bool bVar0;
	int iVar1;

	if (!func_108(1, 255))
	{
		bVar0 = true;
		if (!func_126())
		{
			bVar0 = false;
		}
		if (!func_127())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_128(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_105(Local_763.f_11))
			{
				func_106(&(Local_763.f_11));
			}
			if (func_107(Local_763.f_11) >= iVar1)
			{
				func_125(6);
			}
		}
	}
	else if (Local_21 > 2)
	{
		func_129(&(Local_763.f_11));
		func_130();
		func_125(3);
	}
}

void func_54()
{
	int iVar0;

	if (!func_108(2, 255))
	{
		if (func_131())
		{
			func_128(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_105(Local_763.f_11))
			{
				func_106(&(Local_763.f_11));
			}
			if (func_132(Local_763.f_11) >= iVar0)
			{
				func_125(6);
			}
		}
	}
	else if (Local_21 > 3)
	{
		func_129(&(Local_763.f_11));
		func_133();
		func_134();
		func_135();
		func_136();
		func_125(4);
	}
}

void func_55()
{
	if (Local_21 >= 5)
	{
		func_137();
		func_125(5);
		return;
	}
	func_138();
	func_139();
	func_140();
	func_141();
	func_142();
	func_143();
}

void func_56()
{
	if (!func_108(4, 255))
	{
		if (func_144())
		{
			func_145();
			func_63(Local_763.f_12, 4);
			func_128(4);
		}
	}
	else if (Local_21 > 5)
	{
		func_125(6);
	}
}

void func_57()
{
}

bool func_58()
{
	return (func_109(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_59()
{
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (func_58())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_27[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_21.f_27[iVar1]));
				func_146(iVar1);
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

void func_61()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_147(((*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/])->f_3))
			{
				if (func_148((*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/]))
				{
					GRAPHICS::_0x9CF1836C03FB67A2((*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/], 1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_62()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_150(func_149(iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			MISC::_0xE98D55C5983F2509(iVar1);
		}
		func_151(func_149(iVar0));
		iVar0++;
	}
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_152(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_64()
{
	int iVar0;
	bool bVar1;

	if (!func_65(1))
	{
		return;
	}
	if (func_65(4))
	{
		return;
	}
	if (!func_65(2))
	{
		iVar0 = -1;
	}
	else if (!func_65(8))
	{
		iVar0 = 2;
	}
	else if (func_65(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_153(Local_763.f_9, iVar0, 0);
	func_123(4);
	if (bVar1)
	{
		func_154(Local_763.f_1, Local_763.f_2);
	}
}

bool func_65(int iParam0)
{
	return func_155(Local_763.f_7, iParam0);
}

void func_66(int iParam0)
{
	int iVar0;

	if (!func_156(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_67()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_58();
	if (bVar0)
	{
		func_158(func_157());
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_1[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_1[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		if (iVar1 == 0 && ENTITY::DOES_ENTITY_EXIST(&(Local_763.f_18.f_1[iVar1])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_763.f_18.f_1[iVar1]);
			_NAMESPACE49::_0x9D16896F0DBE78A2(func_159(0), 2f);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar3]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_9[iVar3])))
		{
			if (!PED::IS_PED_FLEEING(func_160(iVar3)) && !func_161(func_160(iVar3), 242628503))
			{
				if (func_162(func_160(iVar3), -1146898486, 1, 0))
				{
					TASK::TASK_WANDER_STANDARD(func_160(iVar3), 40000f, 1);
				}
			}
			func_163(iVar3);
			PED::SET_PED_KEEP_TASK(func_160(iVar3), true);
			iVar4 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_9[iVar3]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
		}
		iVar1++;
	}
	func_164(1);
}

void func_68(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_69(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_165(uParam0))
	{
		return -1;
	}
	iVar0 = func_166(uParam0, uParam0->f_9);
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
			iVar0 = func_166(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_70(int iParam0)
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

void func_71(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_167(uParam0);
			break;
		case 1:
			func_167(uParam0);
			break;
		case 2:
			func_167(uParam0);
			break;
		case 3:
			func_168(uParam0);
			break;
		case 4:
			func_167(uParam0);
			break;
		case 5:
			func_167(uParam0);
			break;
		case 6:
			func_168(uParam0);
			break;
		case 7:
			func_168(uParam0);
			break;
		case 8:
			func_168(uParam0);
			break;
		case 9:
			func_167(uParam0);
			break;
		default:
			func_73(uParam0);
			func_72(uParam0);
			break;
	}
}

void func_72(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_75(uParam0, iVar0);
		iVar0++;
	}
}

void func_73(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_74(uParam0, iVar0);
		iVar0++;
	}
}

void func_74(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_75(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_76(var uParam0, int iParam1)
{
	func_169(&(uParam0->f_16), iParam1);
}

void func_77(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_75(uParam0, 0);
			break;
		case 1:
		case 2:
			func_75(uParam0, 1);
			func_75(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_75(uParam0, 0);
			func_75(uParam0, 2);
			break;
		case 8:
			func_75(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_75(uParam0, 1);
			break;
		default:
			func_72(uParam0);
			break;
	}
}

void func_78(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_170(uParam0);
			break;
		case 1:
			func_171(uParam0);
			break;
		case 2:
			func_172(uParam0);
			break;
		case 3:
			func_173(uParam0);
			break;
		default:
			func_73(uParam0);
			func_72(uParam0);
			break;
	}
}

int func_79(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_80(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

void func_81(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_174(uParam0);
			break;
		case 1:
		case 2:
			func_175(uParam0);
			break;
		case 3:
		case 4:
			func_176(uParam0);
			break;
		default:
			func_72(uParam0);
			break;
	}
	func_73(uParam0);
}

int func_82(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

int func_83(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

int func_84(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

var func_85(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_177(&Var1, uParam0) && func_178(&Var1, iParam1))
	{
		func_179(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_86(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_177(&Var1, uParam0) && func_178(&Var1, iParam1))
	{
		func_179(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_87(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_88(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_180(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_89(int iParam0)
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

int func_90(int iParam0, var uParam1, int iParam2)
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

struct<2> func_91()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_92()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			(Local_58[iVar1 /*22*/])->f_2.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_93()
{
	func_97(25252);
}

void func_94()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_182(&(Local_763.f_101), &(Local_763.f_101.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_21.f_29.f_3[iVar0] = 0;
			Local_21.f_29.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_58[iVar1 /*22*/])->f_6.f_11[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_95()
{
	switch (func_183())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			func_184(0, 0, 0.001f, 0f, 0f, 10f, -1, 3);
			break;
	}
}

var func_96(int iParam0)
{
	return &(Local_763.f_75.f_7[iParam0 /*11*/]);
}

void func_97(int iParam0)
{
	Local_763.f_198.f_2 = iParam0;
	func_185(&(Local_763.f_198.f_1), 4);
}

int func_98(int iParam0)
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

bool func_99(var uParam0, int iParam1)
{
	return func_186(uParam0->f_16, iParam1);
}

void func_100(int iParam0)
{
	if (Local_21 != iParam0)
	{
		Local_21 = iParam0;
	}
}

void func_101(int iParam0)
{
	if (!func_109(iParam0))
	{
		func_185(&(Local_21.f_1), iParam0);
	}
}

bool func_102(int iParam0)
{
	if (!func_156(iParam0))
	{
		return false;
	}
	return (func_187(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_103(int iParam0)
{
	if (Local_21.f_2 != iParam0)
	{
		Local_21.f_2 = iParam0;
	}
}

int func_104(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_21.f_3.f_1))
	{
		return 1;
	}
	if (func_147(Local_763.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_21.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_763.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_188(&uVar1, Param0);
		Local_21.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_128(128);
	}
	else if (!func_108(128, 255))
	{
		Local_21.f_3.f_1 = func_189(Param0);
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

bool func_105(int iParam0)
{
	return iParam0 != 0;
}

void func_106(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_107(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

bool func_108(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_155(&(Local_58[iParam1 /*22*/]), iParam0);
}

bool func_109(int iParam0)
{
	return func_155(Local_21.f_1, iParam0);
}

int func_110()
{
	return 1;
}

void func_111()
{
}

int func_112()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		if (iVar2 != 0 && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar2])))
		{
			if (func_190(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (func_191() == 2)
	{
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar3])))
			{
				if (func_192(iVar3, &bVar1, 0) || bVar1)
				{
					iVar0 = 0;
				}
				else
				{
					iVar3++;
				}
				if (bVar1)
				{
					func_193();
				}
				return iVar0;
			}
		}
	}

int func_113()
{
	bool bVar0;

	if (!func_194(&bVar0))
	{
		if (bVar0)
		{
			func_193();
		}
		return 0;
	}
	return 1;
}

void func_114()
{
}

void func_115()
{
	if (!func_109(32) && func_195(32))
	{
		func_101(32);
	}
	if (!func_109(64) && func_195(64))
	{
		func_101(64);
	}
	if (!func_109(16) && func_196(16))
	{
		func_101(16);
	}
	if ((!func_109(2048) && func_195(2048)) && !func_195(4096))
	{
		func_101(2048);
	}
}

void func_116()
{
	bool bVar0;

	if (!bVar0 && func_109(16))
	{
		func_103(1);
		return;
	}
	if (func_109(2048) && !func_195(4096))
	{
		func_103(6);
		return;
	}
}

void func_117()
{
	func_197();
}

int func_118()
{
	if (func_198())
	{
		return 1;
	}
	if (func_199(33554432) && Local_21.f_7 != 5)
	{
		func_200(5);
	}
	if (func_199(2048) && Local_21.f_7 < 4)
	{
		func_200(4);
	}
	switch (Local_21.f_7)
	{
		case 0:
			func_201();
			break;
		case 1:
			func_202();
			break;
		case 2:
			func_203();
			break;
		case 3:
			func_204();
			break;
		case 4:
			func_205();
			break;
		case 5:
			func_206();
			break;
	}
	return 0;
}

void func_119()
{
}

int func_120()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_207(iVar1)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(func_207(iVar1), true))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_121(int iParam0)
{
	if (func_65(iParam0))
	{
		func_208(&(Local_763.f_7), iParam0);
	}
}

int func_122(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_156(iParam0))
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
		func_169(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_210(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_123(int iParam0)
{
	if (!func_65(iParam0))
	{
		func_185(&(Local_763.f_7), iParam0);
	}
}

void func_124()
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

void func_125(int iParam0)
{
	if (Local_763.f_8 != iParam0)
	{
		Local_763.f_8 = iParam0;
	}
}

bool func_126()
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = "ORECRW";
	bVar1 = true;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
		{
			bVar1 = false;
		}
	}
	if (!STREAMING::_IS_IMAP_ACTIVE(func_157()))
	{
		func_214(func_157());
		bVar1 = false;
	}
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		if (!func_216(func_215(iVar2)))
		{
			bVar1 = false;
		}
		iVar2++;
	}
	if (func_191() == 2)
	{
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			if (!func_216(func_217(iVar3)))
			{
				bVar1 = false;
			}
			iVar3++;
		}
		if (!func_221(func_218(0), &(Local_763.f_18.f_53), &(Local_21.f_7.f_12), func_219(0), func_220(0)))
		{
			bVar1 = false;
		}
		if (bVar1)
		{
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(func_222(), func_220(iVar4)))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(func_222(), func_220(iVar4));
					bVar1 = false;
				}
				iVar4++;
			}
		}
	}
	return bVar1;
}

bool func_127()
{
	bool bVar0;

	bVar0 = false;
	if (!func_223())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_128(int iParam0)
{
	if (!func_108(iParam0, 255))
	{
		func_185(Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/], iParam0);
	}
}

void func_129(var uParam0)
{
	*uParam0 = 0;
}

void func_130()
{
}

int func_131()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		if (iVar2 == 0 && !ENTITY::DOES_ENTITY_EXIST(&(Local_763.f_18.f_1[iVar2])))
		{
			if (func_224(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bVar1)
	{
	}
	return iVar0;
}

int func_132(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_133()
{
	if (!func_65(1))
	{
		func_225(Local_763.f_9);
		func_123(1);
	}
}

void func_134()
{
	func_226();
	func_227();
}

void func_135()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar0])) || iVar0 == 0)
		{
			if (iVar0 != 0)
			{
				Local_763.f_18.f_1[iVar0] = NETWORK::NET_TO_OBJ(&(Local_21.f_7.f_1[iVar0]));
			}
			switch (iVar0)
			{
				case 0:
					Local_763.f_18.f_56 = TASK::_0xD508FA229F1C4900(&(Local_763.f_18.f_1[iVar0]), 0f, -0.25f, 0f, 1765033373, 1f);
					if (TASK::_0x841475AC96E794D1(Local_763.f_18.f_56))
					{
						TASK::_0xEEE4829304F93EEE(Local_763.f_18.f_56, 0);
						Local_763.f_18.f_56 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(&(Local_763.f_18.f_1[iVar0]), 75374539, 0f, -0.25f, 0f, 0f, 0f, 0f, 1);
					}
					_NAMESPACE49::_0x9D16896F0DBE78A2(func_159(0), 2f);
					func_228(func_215(0), func_159(0), Local_763.f_18.f_1[iVar0], 0, 0);
					func_229(&(Local_763.f_18.f_1[iVar0]));
					func_233(func_215(0), func_159(0), func_230(), func_231(), Local_763.f_18.f_1[iVar0], func_232(), 1, 0, 0, 0, -1);
					break;
				case 1:
					if (CLOCK::GET_CLOCK_HOURS() >= 21 || CLOCK::GET_CLOCK_HOURS() < 6)
					{
						ENTITY::_0xEBDC12861D079ABA(&(Local_763.f_18.f_1[iVar0]), 1);
					}
					break;
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					TASK::_0x78B4567E18B54480(&(Local_763.f_18.f_1[iVar0]));
					GRAPHICS::_0x7DFB49BCDB73089A(&(Local_763.f_18.f_1[iVar0]), 1);
					ENTITY::SET_ENTITY_COLLISION(&(Local_763.f_18.f_1[iVar0]), false, false);
					break;
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_763.f_18.f_1[iVar0])) || iVar0 == 0)
			{
				ENTITY::SET_ENTITY_ROTATION(&(Local_763.f_18.f_1[iVar0]), func_234(iVar0), 2, false);
				func_235(&(Local_763.f_18.f_1[iVar0]), ENTITY::GET_ENTITY_COORDS(&(Local_763.f_18.f_1[iVar0]), true, false));
			}
		}
		iVar0++;
	}
	if (func_191() == 2)
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar1])))
			{
				(Local_763.f_18.f_9[iVar1 /*7*/])->f_1 = NETWORK::NET_TO_PED(&(Local_21.f_7.f_9[iVar1]));
				func_236(iVar1, (Local_763.f_18.f_9[iVar1 /*7*/])->f_1);
				func_237(iVar1);
			}
			iVar1++;
		}
	}
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RECW_Area", true, false);
	AUDIO::_0x3743CE6948194349("AZ_RECW_Area", func_238(), 0f);
	func_164(0);
}

void func_136()
{
	func_239();
}

void func_137()
{
}

void func_138()
{
	float fVar0;

	if (func_147(Local_763.f_15))
	{
		return;
	}
	if (func_240())
	{
		return;
	}
	if (func_241(Local_763.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_763.f_15);
		if (fVar0 < 200f)
		{
			func_128(4096);
		}
		else if (fVar0 < 400f)
		{
			func_242(4096);
			func_128(2048);
		}
		else
		{
			func_242(4096);
			func_242(2048);
		}
	}
}

void func_139()
{
	func_243();
	func_244();
	func_245();
	func_246();
	func_247();
}

void func_140()
{
	if (func_248())
	{
		func_128(8);
	}
	else
	{
		func_242(8);
	}
}

void func_141()
{
	func_249();
	func_250();
	func_251(Local_21.f_7);
	switch (Local_763.f_18)
	{
		case 0:
			func_252();
			break;
		case 1:
			func_253();
			break;
		case 2:
			func_254();
			break;
		case 3:
			func_255();
			break;
		case 4:
			func_256();
			break;
		case 5:
			func_257();
			break;
	}
}

void func_142()
{
	if (!func_108(8, 255))
	{
		func_128(16);
	}
	else
	{
		func_242(16);
	}
}

void func_143()
{
	int iVar0;

	Local_763.f_6 = -1;
	Local_763.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_763.f_5 = (Local_763.f_5 || Local_58[iVar0 /*22*/]) // PointerArith;
			Local_763.f_6 = (Local_763.f_6 && Local_58[iVar0 /*22*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 1;
	func_158(func_157());
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_1[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_1[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			iVar0 = 0;
		}
		if (iVar1 == 0 && ENTITY::DOES_ENTITY_EXIST(&(Local_763.f_18.f_1[iVar1])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_763.f_18.f_1[iVar1]);
			_NAMESPACE49::_0x9D16896F0DBE78A2(func_159(0), 2f);
			iVar0 = 0;
		}
		iVar1++;
	}
	if (func_191() == 2)
	{
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_9[iVar3])))
			{
				iVar4 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_9[iVar3]));
				func_163(iVar3);
				PED::SET_PED_KEEP_TASK(func_160(iVar3), true);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
				iVar0 = 0;
			}
			if (ANIMSCENE::_0x25557E324489393C(func_222()) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_21.f_7.f_12))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(func_222());
				}
			}
			iVar3++;
		}
	}
	func_164(1);
	return iVar0;
}

void func_145()
{
	func_258();
}

void func_146(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST((Local_763.f_75.f_7[iParam0 /*11*/])->f_1))
	{
		MAP::REMOVE_BLIP(&((Local_763.f_75.f_7[iParam0 /*11*/])->f_1));
	}
}

int func_147(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_148(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_149(int iParam0)
{
	return iParam0;
}

int func_150(int iParam0)
{
	if (func_155(Local_763.f_198.f_1, 4))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_763.f_198.f_2);
		return StackVal;
	}
	return 0;
}

void func_151(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_259(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iVar0 /*8*/])))
		{
			func_260((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iVar0 /*8*/], 1, 1);
		}
		iVar0++;
	}
	func_261(iParam0, 2);
}

bool func_152(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_153(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_263(func_262(Param0));
	iVar1 = func_264(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_265(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_154(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_266(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_267(iVar0);
}

bool func_155(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_156(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_157()
{
	switch (func_191())
	{
		case 0:
		case 2:
			switch (func_183())
			{
				case 0:
					return -1754970007;
				case 1:
					return 2144414063;
				case 2:
					return -2042475701;
				case 3:
					return 1358414393;
				case 4:
					return 289521398;
				case 5:
					return 1883534212;
				case 6:
					return 209919309;
				default:
					break;
			}
			break;
		case 1:
			switch (func_183())
			{
				case 0:
					return 1364276294;
				case 1:
					return 1108743226;
				case 2:
					return -198101911;
				case 3:
					return 672931117;
				default:
					break;
			}
			break;
	}
	return -1754970007;
}

void func_158(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_268(iParam0);
	}
}

Vector3 func_159(int iParam0)
{
	switch (func_191())
	{
		case 0:
		case 2:
			switch (func_183())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1497.818f, -556.8351f, 131.8656f;
						case 1:
							return -1498.818f, -557.8351f, 131.8656f;
						case 2:
							return -1497.509f, -555.1789f, 131.8371f;
						case 3:
							return -1501.39f, -555.5867f, 131.8429f;
						case 4:
							return -1499.623f, -558.7266f, 131.8674f;
						case 5:
							return -1501.423f, -553.6351f, 131.8304f;
						case 6:
							return -1498.62f, -552.0974f, 131.7956f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1757.98f, 268.1308f, 118.7833f;
						case 1:
							return -1761.539f, 270.308f, 118.323f;
						case 2:
							return -1758.738f, 268.6893f, 119.7066f;
						case 3:
							return -1760.483f, 270.0028f, 119.4709f;
						case 4:
							return -1762.358f, 269.5813f, 119.438f;
						case 5:
							return -1760.702f, 266.5843f, 119.1385f;
						case 6:
							return -1758.459f, 265.7853f, 119.3051f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2761.15f, -155.7835f, 150.856f;
						case 1:
							return -2763.649f, -160.2878f, 150.8133f;
						case 2:
							return -2761.855f, -159.1378f, 151.0176f;
						case 3:
							return -2763.572f, -160.8323f, 150.8463f;
						case 4:
							return -2761.176f, -161.9261f, 151.021f;
						case 5:
							return -2764.819f, -159.9952f, 150.5882f;
						case 6:
							return -2764.838f, -157.4752f, 150.5356f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -719.2113f, -755.4812f, 49.81384f;
						case 1:
							return -717.5301f, -758.2379f, 49.85249f;
						case 2:
							return -721.2198f, -760.2551f, 49.83548f;
						case 3:
							return -716.4632f, -757.7909f, 49.83548f;
						case 4:
							return -721.7213f, -755.4597f, 50.867f;
						case 5:
							return -719.8456f, -753.7499f, 49.79519f;
						case 6:
							return -723.6201f, -756.3176f, 49.93331f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 953.2573f, -1249.291f, 53.87093f;
						case 1:
							return 950.9216f, -1250.914f, 53.96534f;
						case 2:
							return 949.3633f, -1248.699f, 53.97248f;
						case 3:
							return 951.8709f, -1249.214f, 53.86581f;
						case 4:
							return 952.5452f, -1246.627f, 53.80265f;
						case 5:
							return 949.3638f, -1246.241f, 53.90157f;
						case 6:
							return 951.9981f, -1245.212f, 53.79996f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 1089.388f, -1421.76f, 55.4995f;
						case 1:
							return 1089.704f, -1417.942f, 55.52629f;
						case 2:
							return 1089.866f, -1420.286f, 55.35836f;
						case 3:
							return 1090.614f, -1417.273f, 55.77501f;
						case 4:
							return 1086.425f, -1418.622f, 55.6114f;
						case 5:
							return 1089.64f, -1422.87f, 55.45679f;
						case 6:
							return 1087.065f, -1422.422f, 55.4695f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1289.037f, -1605.02f, 64.52058f;
						case 1:
							return 1285.907f, -1604.498f, 64.50636f;
						case 2:
							return 1290.473f, -1605.005f, 64.46574f;
						case 3:
							return 1292.644f, -1604.174f, 64.27807f;
						case 4:
							return 1294.001f, -1605.432f, 64.31178f;
						case 5:
							return 1292.688f, -1602.594f, 64.01215f;
						case 6:
							return 1286.933f, -1604.619f, 64.5117f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_183())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1499.519f, -553.7022f, 131.816f;
						case 1:
							return -1496.353f, -555.2807f, 131.8417f;
						case 2:
							return -1495.8f, -556.1063f, 131.8637f;
						case 3:
							return -1500.151f, -556.0807f, 131.8662f;
						case 4:
							return -1501.354f, -553.8411f, 131.8338f;
						case 5:
							return -1501.634f, -552.0386f, 131.8112f;
						case 6:
							return -1495.57f, -555.4305f, 131.8408f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1758.699f, 269.4274f, 118.5922f;
						case 1:
							return -1757.563f, 267.2061f, 118.9688f;
						case 2:
							return -1758.044f, 267.5631f, 118.9089f;
						case 3:
							return -1760.03f, 268.3575f, 118.7854f;
						case 4:
							return -1762.666f, 267.2132f, 118.8957f;
						case 5:
							return -1760.06f, 265.9642f, 119.2891f;
						case 6:
							return -1762.323f, 269.8965f, 118.3679f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2764.391f, -160.7872f, 150.7077f;
						case 1:
							return -2761.297f, -155.987f, 150.8689f;
						case 2:
							return -2760.491f, -159.7183f, 151.0812f;
						case 3:
							return -2760.785f, -156.5841f, 150.951f;
						case 4:
							return -2763.912f, -157.4422f, 150.6202f;
						case 5:
							return -2765.199f, -158.5706f, 150.5246f;
						case 6:
							return -2760.098f, -160.6409f, 151.0229f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -723.5045f, -757.0285f, 49.93748f;
						case 1:
							return -717.5816f, -753.1685f, 49.79384f;
						case 2:
							return -717.0905f, -756.0546f, 49.81386f;
						case 3:
							return -718.5177f, -753.2686f, 49.80091f;
						case 4:
							return -720.2693f, -755.9547f, 49.82605f;
						case 5:
							return -722.0327f, -755.5529f, 49.87656f;
						case 6:
							return -720.4021f, -760.0595f, 49.81378f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_160(int iParam0)
{
	return (Local_763.f_18.f_9[iParam0 /*7*/])->f_1;
}

int func_161(int iParam0, int iParam1)
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

int func_162(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (!bParam3 && func_269(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_163(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_763.f_18.f_9[iParam0 /*7*/])))
	{
		return;
	}
	MAP::REMOVE_BLIP(Local_763.f_18.f_9[iParam0 /*7*/]);
}

void func_164(bool bParam0)
{
	if (bParam0)
	{
		func_270(func_238(), 20f, 5);
	}
	else
	{
		func_271(func_238(), 20f, 0, 0, 4);
	}
}

int func_165(var uParam0)
{
	if (func_38(*uParam0))
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

int func_166(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_272(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_273(iParam1)) - 1);
	}
	bVar2 = func_38(*uParam0);
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

void func_167(var uParam0)
{
	func_74(uParam0, 0);
	func_74(uParam0, 1);
	func_74(uParam0, 3);
	func_72(uParam0);
}

void func_168(var uParam0)
{
	func_73(uParam0);
	func_274(uParam0, 0, 3);
}

void func_169(var uParam0, int iParam1)
{
	func_275(uParam0, iParam1);
}

void func_170(var uParam0)
{
	func_74(uParam0, 0);
	func_75(uParam0, 0);
	func_75(uParam0, 1);
	func_75(uParam0, 2);
}

void func_171(var uParam0)
{
	func_74(uParam0, 1);
	func_72(uParam0);
}

void func_172(var uParam0)
{
	func_74(uParam0, 2);
	func_75(uParam0, 3);
}

void func_173(var uParam0)
{
	func_74(uParam0, 3);
	func_75(uParam0, 4);
}

void func_174(var uParam0)
{
	func_75(uParam0, 0);
	func_75(uParam0, 1);
}

void func_175(var uParam0)
{
	func_75(uParam0, 2);
	func_75(uParam0, 3);
}

void func_176(var uParam0)
{
	func_75(uParam0, 4);
	func_75(uParam0, 5);
}

bool func_177(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_178(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_179(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_180(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

var func_181(int iParam0)
{
	return func_96(iParam0);
}

void func_182(var uParam0, var uParam1)
{
	func_276(uParam0, 0);
	func_277(uParam0, 0);
	func_278(uParam0, 1);
	func_279(uParam0, 1);
	func_280(uParam0, 1);
	func_281(uParam0, 1);
	func_282(uParam0, 1);
	func_283(uParam0, 1);
	func_284(uParam0, 1);
	func_285(uParam0, 1, 1, 1);
	func_286(uParam1);
	func_287(uParam1);
}

int func_183()
{
	return func_288();
}

void func_184(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7)
{
	((*Local_763.f_189[iParam0 /*8*/])[iParam1 /*7*/])->f_1 = iParam6;
	((*Local_763.f_189[iParam0 /*8*/])[iParam1 /*7*/])->f_2 = iParam7;
	((*Local_763.f_189[iParam0 /*8*/])[iParam1 /*7*/])->f_3 = { vParam2 };
	((*Local_763.f_189[iParam0 /*8*/])[iParam1 /*7*/])->f_6 = fParam5;
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_186(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_187(int iParam0)
{
	int iVar0;

	if (!func_156(iParam0))
	{
		return false;
	}
	iVar0 = func_289(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_188(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_189(struct<17> Param0)
{
	var uVar0;

	func_188(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_190(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_290(Local_21.f_7.f_1[iParam0], func_215(iParam0), func_159(iParam0), 1, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_191()
{
	return func_291();
}

int func_192(int iParam0, var uParam1, bool bParam2)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_294(Local_21.f_7.f_9[iParam0], func_217(iParam0), func_292(iParam0), func_293(iParam0), 1, 0, bParam2, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

void func_193()
{
	func_103(2);
}

int func_194(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam0 = 1;
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (func_295(iVar2, 4))
		{
		}
		else if (!func_296(iVar2, uParam0, &bVar1))
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

bool func_195(int iParam0)
{
	return func_155(Local_763.f_5, iParam0);
}

bool func_196(int iParam0)
{
	return func_155(Local_763.f_6, iParam0);
}

void func_197()
{
	if (func_297())
	{
		if (!func_298(2))
		{
			if (!func_298(1))
			{
				func_299(1);
				Local_21.f_34 = Local_21.f_34.f_1;
				func_300(4);
			}
		}
	}
	else if (func_301(2))
	{
		if (func_302(2))
		{
			func_300(1);
			Local_21.f_34.f_1 = func_303(Local_763.f_198.f_8, Local_763.f_198.f_9, Local_763.f_198);
		}
	}
}

int func_198()
{
	if (Local_21.f_7 == 6)
	{
		return 1;
	}
	if (func_304(1073741824 /* Float: 2f */))
	{
		func_200(6);
	}
	return 0;
}

bool func_199(int iParam0)
{
	return func_155(Local_763.f_18.f_50, iParam0);
}

void func_200(int iParam0)
{
	if (Local_21.f_7 != iParam0)
	{
		Local_21.f_7 = iParam0;
	}
}

void func_201()
{
	if (func_304(536870912))
	{
		func_200(1);
	}
}

void func_202()
{
	if (func_240())
	{
		switch (func_191())
		{
			case 0:
			case 1:
			case 2:
				func_200(2);
				break;
			default:
				func_200(2);
				break;
		}
	}
}

void func_203()
{
	if (func_191() == 2)
	{
		if (func_199(8))
		{
			func_200(4);
		}
		if (func_199(32))
		{
			func_200(3);
		}
	}
}

void func_204()
{
	if (func_199(64) || func_199(128))
	{
		func_200(4);
	}
	if (func_199(16))
	{
		if (!func_305(&(Local_21.f_7.f_17)))
		{
			func_306(&(Local_21.f_7.f_17), 0);
		}
		else if (func_307(&(Local_21.f_7.f_17)) > 30000)
		{
			func_200(4);
		}
	}
}

void func_205()
{
	if (func_308() < 3)
	{
		func_309(3);
	}
}

void func_206()
{
	if (func_308() < 3)
	{
		func_309(3);
	}
}

var func_207(int iParam0)
{
	return &(Local_763.f_18.f_1[iParam0]);
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_209(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0;
	}
	if (!func_187(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_210(var uParam0, int iParam1)
{
	func_310(uParam0, iParam1);
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
			if (func_311(&Var0, iParam0))
			{
				func_312(&Var0);
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

void func_214(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_313(iParam0);
	}
}

int func_215(int iParam0)
{
	switch (func_191())
	{
		case 0:
		case 2:
			switch (func_183())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -347276241;
						case 3:
							return -347276241;
						case 4:
							return -72392766;
						case 5:
							return 1061658559;
						case 6:
							return 1061658559;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -51847185;
						case 3:
							return -51847185;
						case 4:
							return -72392766;
						case 5:
							return 161801294;
						case 6:
							return 161801294;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -51847185;
						case 3:
							return -51847185;
						case 4:
							return -72392766;
						case 5:
							return 161801294;
						case 6:
							return 161801294;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return 284056517;
						case 3:
							return 284056517;
						case 4:
							return -72392766;
						case 5:
							return 1727249588;
						case 6:
							return 1727249588;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return 284056517;
						case 3:
							return 284056517;
						case 4:
							return -72392766;
						case 5:
							return 1727249588;
						case 6:
							return 1727249588;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -347276241;
						case 3:
							return -51847185;
						case 4:
							return -72392766;
						case 5:
							return 1063637181;
						case 6:
							return 1061658559;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return 2020860041;
						case 3:
							return 2020860041;
						case 4:
							return -72392766;
						case 5:
							return 1959411711;
						case 6:
							return 1959411711;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_183())
			{
				case 0:
				case 1:
				case 2:
				case 3:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -72392766;
						case 3:
							return 1491155834;
						case 4:
							return 116449707;
						case 5:
							return 1491155834;
						case 6:
							return 116449707;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_216(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_217(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return 2041325498;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_218(int iParam0)
{
	switch (func_191())
	{
		case 2:
			switch (iParam0)
			{
				case 1:
					return "script@beat@wilderness@crashedwagon@action";
				case 0:
					return "script@beat@wilderness@crashedwagon@action";
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_219(int iParam0)
{
	switch (func_191())
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					return 65;
				case 1:
					return 64;
				default:
					break;
			}
			return 0;
	}
	return 0;
}

char* func_220(int iParam0)
{
	switch (func_191())
	{
		case 2:
			switch (iParam0)
			{
				case 1:
					return "pbl_DRUNK_ACTION";
				case 0:
					return "pbl_DRUNK_IDLE_01";
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_221(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
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

int func_222()
{
	int iVar0;

	iVar0 = Local_21.f_7.f_12;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return NETWORK::_0xD7F6781A0ABAF6FB(iVar0);
	}
	return 0;
}

int func_223()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (MISC::IS_BIT_SET(Local_763.f_75.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_314(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_763.f_75.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_763.f_75.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_763.f_75.f_3), iVar0);
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

int func_224(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	Local_763.f_18.f_1[iParam0] = OBJECT::CREATE_OBJECT(func_215(iParam0), func_159(iParam0), false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_763.f_18.f_1[iParam0])))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

void func_225(struct<2> Param0)
{
	if (func_264(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_264(Param0)))
	{
		STATS::_0x99230691875FC218(func_262(Param0), func_264(Param0), Global_35);
	}
}

void func_226()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_315(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_227()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_147(((*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/])->f_3))
			{
				if (!func_148((*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/]))
				{
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_763.f_15, 0f, ((*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/])->f_3) };
					(*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/] = GRAPHICS::_0xFA50F79257745E74(vVar2, ((*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/])->f_6, ((*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/])->f_2, ((*Local_763.f_189[iVar0 /*8*/])[iVar1 /*7*/])->f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_228(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_316(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		DECORATOR::DECOR_SET_BOOL(*iParam4, "chest_local_only", true);
	}
}

void func_229(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, joaat("empty"));
	}
}

Vector3 func_230()
{
	switch (func_232())
	{
		case -392829098: /* GXTEntry: "Cognac" */
			return -0.075f, 0f, 0.05f;
		case 1603716279: /* GXTEntry: "Old Tom Gin" */
			return -0.1f, 0f, 0.05f;
		case 1565126061: /* GXTEntry: "Gran Corazon Madeira" */
			return -0.075f, 0f, 0.05f;
		case 941442568: /* GXTEntry: "Tennessee Whiskey" */
			return -0.125f, 0f, 0.05f;
		case 1135560775: /* GXTEntry: "Irish Whiskey" */
			return -0.1f, 0f, 0.05f;
		case 1465762285: /* GXTEntry: "Absinthe" */
			return -0.075f, 0f, 0.05f;
		case -897008046: /* GXTEntry: "Caribbean Rum" */
			return -0.075f, 0f, 0.05f;
		case -27315089: /* GXTEntry: "New Guinea Rosewood Hairbrush" */
			return -0.06f, -0.015f, 0.065f;
		case -1868057871: /* GXTEntry: "Tortoiseshell Comb" */
			return 0f, 0f, 0f;
		case 1742487931: /* GXTEntry: "Goat Hair Brush" */
			return 0.05f, -0.01f, 0.06f;
		case 147602269: /* GXTEntry: "Jade Hairpin" */
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_231()
{
	switch (func_232())
	{
		case -392829098: /* GXTEntry: "Cognac" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f);
		case 1603716279: /* GXTEntry: "Old Tom Gin" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
		case 1565126061: /* GXTEntry: "Gran Corazon Madeira" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-20f, 20f);
		case 941442568: /* GXTEntry: "Tennessee Whiskey" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f);
		case 1135560775: /* GXTEntry: "Irish Whiskey" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
		case 1465762285: /* GXTEntry: "Absinthe" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-20f, 20f);
		case -897008046: /* GXTEntry: "Caribbean Rum" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-20f, 20f);
		case -27315089: /* GXTEntry: "New Guinea Rosewood Hairbrush" */
			return -10f, 72.5f, -65f;
		case -1868057871: /* GXTEntry: "Tortoiseshell Comb" */
			return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(80f, 100f);
		case 1742487931: /* GXTEntry: "Goat Hair Brush" */
			return -10f, -72.5f, 65f;
		case 147602269: /* GXTEntry: "Jade Hairpin" */
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_232()
{
	switch (func_191())
	{
		case 0:
		case 2:
			switch (func_183())
			{
				case 0:
					return -392829098 /* GXTEntry: "Cognac" */;
				case 1:
					return 1603716279 /* GXTEntry: "Old Tom Gin" */;
				case 2:
					return 1565126061 /* GXTEntry: "Gran Corazon Madeira" */;
				case 3:
					return 941442568 /* GXTEntry: "Tennessee Whiskey" */;
				case 4:
					return 1135560775 /* GXTEntry: "Irish Whiskey" */;
				case 5:
					return 1465762285 /* GXTEntry: "Absinthe" */;
				case 6:
					return -897008046 /* GXTEntry: "Caribbean Rum" */;
				default:
					break;
			}
			break;
		case 1:
			switch (func_183())
			{
				case 0:
					return -27315089 /* GXTEntry: "New Guinea Rosewood Hairbrush" */;
				case 1:
					return -1868057871 /* GXTEntry: "Tortoiseshell Comb" */;
				case 2:
					return 1742487931 /* GXTEntry: "Goat Hair Brush" */;
				case 3:
					return 147602269 /* GXTEntry: "Jade Hairpin" */;
				default:
					break;
			}
			break;
	}
	return 1465762285 /* GXTEntry: "Absinthe" */;
}

void func_233(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		*iParam10 = func_316(iParam0, vParam1, iParam13, iParam14);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		if (!func_147(vParam4) || !func_147(vParam7))
		{
			func_317(*iParam10, vParam4, vParam7);
		}
		func_318(iParam10);
		func_319(*iParam10, iParam16);
		func_320(*iParam10, iParam11, iParam12, iParam15);
	}
}

Vector3 func_234(int iParam0)
{
	switch (func_191())
	{
		case 0:
		case 2:
			switch (func_183())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 90f, 90f, 90f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -10f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 0f, -7.5f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 180f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 0f, 10f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_183())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -10f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 0f, -10f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_235(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

void func_236(int iParam0, var uParam1)
{
	Local_763.f_75.f_7[iParam0 /*11*/] = uParam1;
}

void func_237(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_321(iParam0);
	iVar1 = func_160(iParam0);
	PED::_0x1902C4CFCC5BE57C(iVar1, iVar0);
	PED::_0xCC8CA3E88256E58F(iVar1, false, 1, 1, 1, 0);
}

Vector3 func_238()
{
	return Local_763.f_15;
}

void func_239()
{
}

bool func_240()
{
	return (func_109(32) || func_108(32, 255));
}

int func_241(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_322(iParam0, 2087069356) };
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

void func_242(int iParam0)
{
	if (func_155(&(Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/]), iParam0))
	{
		func_208(Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/], iParam0);
	}
}

void func_243()
{
	func_323();
	func_324();
	func_325();
}

void func_244()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_326(iVar0, bVar1, iVar2);
		func_327(iVar0, bVar1, iVar2);
		func_328(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_245()
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
	while (iVar0 < 0)
	{
		if (Local_763.f_75.f_19 >= 1)
		{
			Local_763.f_75.f_19 = 0;
		}
		iVar0 = Local_763.f_75.f_19;
		Local_763.f_75.f_19++;
		iVar7 = func_329(iVar0);
		iVar1 = &Local_763.f_75.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_295(iVar7, 4))
		{
			func_315(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_58[iVar3 /*22*/])->f_2.f_2[iVar0] > -1f)
			{
				(Local_58[iVar3 /*22*/])->f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_763.f_75.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_763.f_75.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_763.f_75.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_763.f_75.f_20), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_763.f_75.f_20, iVar0))
		{
			if (bVar4 || !func_330(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_763.f_75.f_20), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (func_330(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_763.f_75.f_20), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_58[iVar3 /*22*/])->f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_58[iVar3 /*22*/])->f_2.f_1), iVar0);
				}
				func_331(Local_763.f_75.f_21[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_58[iVar3 /*22*/])->f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_305(Local_763.f_75.f_21[iVar0 /*3*/]) || func_332(Local_763.f_75.f_21[iVar0 /*3*/], 0.5f))))
			{
				func_333(Local_763.f_75.f_21[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_58[iVar3 /*22*/])->f_2.f_1), iVar0);
			}
		}
		if (func_295(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_334(iVar7))
						{
							if (!func_296(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_335(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !func_295(iVar7, 8))
			{
				if (!func_334(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_763.f_75.f_20 != 0)
	{
		if (!func_336(1, -1))
		{
			func_337(1);
		}
	}
	else if (func_336(1, -1))
	{
		func_338(1);
	}
}

void func_246()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar10 = 255;
	iVar15 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_339();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_58[iVar15 /*22*/])->f_6.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_763.f_101.f_84 >= 1)
		{
			Local_763.f_101.f_84 = 0;
		}
		iVar1 = Local_763.f_101.f_84;
		Local_763.f_101.f_84++;
		iVar12++;
		iVar8 = func_340(iVar1);
		if (!func_341(iVar8))
		{
		}
		else if (func_342(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				func_343(iVar8);
				if (func_344(iVar8))
				{
					if (func_345(iVar8))
					{
						if (!func_346(iVar8))
						{
							func_347(iVar8);
						}
					}
					if (func_348(iVar8))
					{
						func_349(iVar8);
					}
				}
				else
				{
					if (func_350(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!func_351(iVar8, -1))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_352(iVar8))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_353(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_354(vVar5.x, vVar5.y, &(Local_763.f_101), &iVar4, 0, vVar5.z))
						{
							bVar2 = true;
						}
						else
						{
							iVar16 = EVENT::_0x796EECFF0C6D39BE(vVar5.x, 1, 1);
							if (iVar16 != 0)
							{
								iVar17 = EVENT::_0x822A001BCEA5BD81(vVar5.x, iVar16, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar17) && ENTITY::IS_ENTITY_A_PED(iVar17))
								{
									iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar17);
									if (PED::IS_PED_A_PLAYER(iVar18))
									{
										switch (iVar16)
										{
											case joaat("event_shot_fired"):
												if (!Local_763.f_101.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(func_355(&(Local_763.f_101))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_763.f_101.f_1 & 4 != 0)
												{
													iVar4 = 4;
													bVar2 = true;
												}
												break;
										}
									}
								}
								EVENT::_0x1A5C5D350068A673(vVar5.x, 1);
							}
							if (!Local_763.f_101.f_1 & 256 != 0)
							{
								if ((Local_58[iVar15 /*22*/])->f_6.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_58[iVar15 /*22*/])->f_6.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(func_355(&(Local_763.f_101))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_356(iVar8, iVar4, iVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_58[iVar15 /*22*/])->f_6.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_58[iVar15 /*22*/])->f_6.f_7), iVar8);
								}
								func_357(iVar8, 1);
								Jump @760; //curOff = 672
								if (func_358(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_58[iVar15 /*22*/])->f_6.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_58[iVar15 /*22*/])->f_6.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_58[iVar15 /*22*/])->f_6.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_58[iVar15 /*22*/])->f_6.f_7), iVar8);
								}
								if (func_359(iVar8))
								{
									if (!func_360(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!func_361(iVar8))
											{
											}
											else
											{
												func_362(iVar8);
												func_363(iVar8);
												Jump @1005; //curOff = 814
												if (func_364(iVar8))
												{
												}
												else if (iVar13 < 1)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 8)
														{
															if (&Local_763.f_101.f_86[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_763.f_101.f_86[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_763.f_101.f_86[iVar8];
																Local_763.f_101.f_86[iVar8] = &Local_763.f_101.f_86[iVar8] + 1;
															}
															iVar14++;
															if (func_365(iVar0, &uVar11, &iVar10, &uVar9))
															{
																if (!func_366(iVar8, iVar10))
																{
																	if (func_351(iVar8, iVar0))
																	{
																		if (!func_367(iVar8, uVar11, iVar10, uVar9))
																		{
																		}
																		else
																		{
																			func_368(iVar8, iVar10);
																		}
																	}
																}
															}
														}
														iVar13++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

void func_247()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = false;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_369(iVar1))
	{
		return;
	}
	func_370();
	if (func_297())
	{
		if (func_371(2, -1) || func_371(1, -1))
		{
			func_372(1);
			func_372(2);
			func_373(2);
			func_373(1);
		}
	}
	else
	{
		bVar2 = false;
		if (func_374() || func_375())
		{
			bVar2 = true;
			if (func_375() || (!func_376(8) && !func_371(4, iVar1)))
			{
				func_377(Local_763.f_198, Local_21.f_34);
				Local_763.f_198 = Local_21.f_34;
				iVar3 = 0;
				while (iVar3 < 1)
				{
					func_378(func_149(iVar3), Local_21.f_34);
					iVar3++;
				}
				if (func_379())
				{
					func_380(Local_763.f_198.f_3.f_1);
				}
				bVar0 = true;
				if (func_374())
				{
					func_381(4);
				}
				else
				{
					func_372(4);
				}
			}
			else if (!func_376(8))
			{
				if (!func_301(4))
				{
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_300(8);
				}
			}
			else if (func_298(4))
			{
				if (func_371(4, iVar1))
				{
					func_372(4);
				}
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_299(4);
				func_299(8);
			}
		}
		else if (func_371(4, iVar1))
		{
			func_372(4);
		}
		if (!func_298(1))
		{
			if (func_302(1))
			{
				func_373(1);
			}
			if (func_379())
			{
				iVar4 = Local_763.f_198.f_3.f_1;
				if (func_382(iVar4))
				{
					if (bVar0)
					{
						func_380(iVar4);
					}
					if (func_155((Local_763.f_198.f_10[iVar4 /*29*/])->f_3, 16))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					}
					iVar6 = NETWORK::PARTICIPANT_ID_TO_INT();
					iVar5 = 0;
					while (iVar5 < 3)
					{
						if (!func_259(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])))
						{
						}
						else
						{
							if (bVar2 || func_155(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 8))
							{
								if (func_383(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									func_384(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
								}
								func_208(&(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1), 8);
							}
							else if (!func_155(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 1))
							{
								if (func_155(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 4))
								{
									if (func_385() < ((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_7)
									{
										if (func_383(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
										{
											func_384(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
										}
									}
									else if (!func_383(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
									{
										func_384(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
									}
								}
								else if (!func_383(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									func_384(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
								}
							}
							if (func_386(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1))
							{
								if (!func_387(iVar4, iVar5, Local_763.f_198))
								{
								}
								else
								{
									Local_763.f_198.f_7 = PLAYER::PLAYER_ID();
									Local_763.f_198.f_8 = iVar4;
									Local_763.f_198.f_9 = iVar5;
									(Local_58[iVar6 /*22*/])->f_19.f_1 = iVar4;
									(Local_58[iVar6 /*22*/])->f_19.f_2 = iVar5;
									func_388(iVar4, iVar5);
									func_381(1);
									func_381(2);
									func_389(2);
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		else
		{
			if (!func_302(2))
			{
				if (!func_302(1))
				{
					func_389(1);
					func_373(2);
				}
			}
			if (!func_371(2, -1))
			{
				if (func_302(2))
				{
					func_388(Local_763.f_198.f_8, Local_763.f_198.f_9);
					func_381(2);
				}
			}
		}
	}
}

int func_248()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_763.f_14))
	{
		return 0;
	}
	return 1;
}

void func_249()
{
	int iVar0;

	Local_763.f_18.f_49 = -1;
	Local_763.f_18.f_50 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_763.f_18.f_50 = (Local_763.f_18.f_50 || (Local_58[iVar0 /*22*/])->f_1);
			Local_763.f_18.f_49 = (Local_763.f_18.f_49 && (Local_58[iVar0 /*22*/])->f_1);
		}
		iVar0++;
	}
}

void func_250()
{
	int iVar0;

	if (Local_763.f_18.f_54 >= 5)
	{
		if (!func_390(2))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_238()) < 50f)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_763.f_18.f_1[iVar0])))
					{
						ENTITY::SET_ENTITY_ROTATION(&(Local_763.f_18.f_1[iVar0]), func_234(iVar0), 2, false);
						func_235(&(Local_763.f_18.f_1[iVar0]), ENTITY::GET_ENTITY_COORDS(&(Local_763.f_18.f_1[iVar0]), true, false));
					}
					iVar0++;
				}
				func_391(2);
			}
		}
		Local_763.f_18.f_54 = 0;
	}
	else
	{
		Local_763.f_18.f_54++;
	}
	if (!func_392(1024, 255))
	{
		if (func_393(func_232()))
		{
			func_391(8);
			func_394(1024);
		}
	}
	if (Local_763.f_18 < 4)
	{
		func_395();
	}
}

void func_251(int iParam0)
{
	if (Local_763.f_18 != iParam0)
	{
		Local_763.f_18 = iParam0;
	}
}

void func_252()
{
	if (func_191() == 2 && !func_396(0, 1073741824 /* Float: 2f */))
	{
		func_397();
	}
	else
	{
		func_394(536870912);
	}
}

void func_253()
{
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_238()) < 50f)
	{
		if (!func_199(256))
		{
			func_394(256);
		}
		else
		{
			func_398();
		}
	}
}

void func_254()
{
	func_399();
	if (func_191() == 2)
	{
		func_400();
		func_401(0, 0);
		if (!func_199(4))
		{
			func_402(1);
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_160(0), func_222()) && ANIMSCENE::_0x1F0E401031E20146(func_222(), func_220(1)))
			{
				func_394(4);
			}
		}
		else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_160(0), func_222()))
		{
			func_394(8);
		}
		if (func_191() == 2 && !func_199(32))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(func_160(0), true, false)) <= 10f)
			{
				func_394(32);
			}
		}
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_238()) > (50f * 2f))
	{
		func_394(1073741824 /* Float: 2f */);
	}
}

void func_255()
{
	if (func_308() < 1)
	{
		if (func_199(134217728))
		{
			func_309(1);
		}
	}
	else if (func_308() < 2)
	{
		if (func_199(268435456))
		{
			func_309(2);
		}
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_160(0), func_222()))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(func_222(), "male", func_160(0));
		}
	}
	else
	{
		if (func_162(func_160(0), -875674219, 1, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_160(0), func_403(0, 1148846080 /* Float: 1000f */), -1, -1082130432, -1082130432, -1082130432);
			func_394(16);
		}
		if (func_199(16))
		{
			func_163(0);
			if (!func_404(131072))
			{
				func_405(1, 0, 0);
				if (PED::IS_PED_FACING_PED(func_160(0), Global_34, 10f))
				{
					func_406(131072);
				}
			}
			if (func_404(131072))
			{
				if (!func_392(134217728, 255))
				{
					func_394(134217728);
				}
				else if (!func_392(268435456, 255) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_160(0)))
				{
					func_394(268435456);
				}
			}
		}
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_238()) > (50f * 2f))
	{
		func_394(1073741824 /* Float: 2f */);
	}
}

void func_256()
{
	func_395();
	if (func_162(func_160(0), 242628503, 1, 0))
	{
		if (!func_199(512))
		{
			TASK::OPEN_SEQUENCE_TASK(&((Local_763.f_18.f_9[0 /*7*/])->f_2));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_407(), 1f, -1, 0.25f, true, 40000f);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			func_408(func_160(0), &((Local_763.f_18.f_9[0 /*7*/])->f_2), 0, 0, 1, 1);
			func_394(512);
		}
	}
	else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_160(0), func_222()))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(func_222(), "male", func_160(0));
		}
	}
	if (func_392(64, 255))
	{
		if (!func_404(4096))
		{
			func_406(4096);
		}
	}
	else if (func_392(128, 255))
	{
		if (!func_404(8192))
		{
			func_406(8192);
		}
	}
	else if (func_199(2048))
	{
		if (!func_404(16384))
		{
			func_406(16384);
		}
	}
	else if (!func_404(32))
	{
		func_406(32);
	}
	func_409();
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_238()) > (50f * 2f))
	{
		func_394(1073741824 /* Float: 2f */);
	}
}

void func_257()
{
	func_410();
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_160(0), func_222()))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(func_222(), "male", func_160(0));
		}
	}
	else
	{
		if (!func_392(67108864, 255))
		{
			if (func_390(4))
			{
				if (!func_404(256))
				{
					func_411(0, 256, 0, -417894478);
				}
				else
				{
					func_394(67108864);
				}
			}
			else if (!func_404(65536))
			{
				func_411(0, 65536, 0, -417894478);
			}
			else
			{
				func_394(67108864);
			}
		}
		if (!PED::IS_PED_FLEEING(func_160(0)))
		{
			if (Local_21.f_7.f_13 == 0)
			{
				if (func_392(33554432, 255))
				{
					Local_21.f_7.f_13 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
				}
			}
			else if (func_162(func_160(0), 518218985, 1, 0))
			{
				TASK::_TASK_FLEE_FROM_PED(func_160(0), Local_21.f_7.f_13, 0f, 0f, 0f, 100f, -1, 0, 1077936128, 0);
			}
		}
	}
}

void func_258()
{
}

bool func_259(int iParam0)
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

void func_260(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_259(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_412(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_413(iVar0);
	*uParam0 = 0;
}

void func_261(int iParam0, int iParam1)
{
	func_208(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_3), iParam1);
}

int func_262(var uParam0, var uParam1)
{
	return uParam0;
}

int func_263(int iParam0)
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

int func_264(struct<2> Param0)
{
	return func_414(Param0);
}

void func_265(struct<2> Param0, var uParam2)
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
	switch (func_262(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_416(func_415(Param0));
			iVar5 = func_417(iVar4);
			if (!func_418(iVar5, 0))
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

int func_266(int iParam0, int iParam1)
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
			func_32(&Var1, iVar18, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar19++;
	}
	return -1;
}

void func_267(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_419(&Var0);
}

int func_268(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_420())
	{
		return 0;
	}
	STREAMING::_REMOVE_IMAP(iParam0);
	return 0;
}

int func_269(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_270(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_421(vVar0, vVar3, 0f) };
	vVar9 = { func_422(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_271(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_421(vVar0, vVar3, 0f) };
	vVar9 = { func_422(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

int func_272(int iParam0)
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

int func_273(int iParam0)
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

void func_274(var uParam0, int iParam1, int iParam2)
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
		func_75(uParam0, iVar0);
		iVar0++;
	}
}

void func_275(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_276(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 16384);
	}
	else
	{
		func_185(&(uParam0->f_1), 16384);
	}
}

void func_277(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 128);
	}
	else
	{
		func_185(&(uParam0->f_1), 128);
	}
}

void func_278(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 256);
	}
	else
	{
		func_208(uParam0, 256);
	}
}

void func_279(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 2048);
	}
	else
	{
		func_185(&(uParam0->f_1), 2048);
	}
}

void func_280(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 256);
	}
	else
	{
		func_185(&(uParam0->f_1), 256);
	}
}

void func_281(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 16);
	}
	else
	{
		func_208(uParam0, 67108864);
		func_208(uParam0, 16);
	}
}

void func_282(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 8);
	}
	else
	{
		func_185(&(uParam0->f_1), 8);
	}
}

void func_283(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(&(uParam0->f_1), 2);
	}
	else
	{
		func_185(&(uParam0->f_1), 2);
	}
}

void func_284(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 128);
	}
	else
	{
		func_208(uParam0, 128);
	}
}

void func_285(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_185(uParam0, 268435456);
	}
	else
	{
		func_208(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_185(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_208(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_185(uParam0, 536870912);
	}
	else
	{
		func_208(uParam0, 536870912);
	}
}

void func_286(var uParam0)
{
	func_424(uParam0, (func_423(uParam0) - 6f));
	func_425(uParam0, 1);
}

void func_287(var uParam0)
{
	func_426(uParam0, 1);
	func_427(uParam0, 1);
	func_428(uParam0, 1);
}

var func_288()
{
	return Local_763.f_2;
}

int func_289(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

int func_290(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_216(iParam1))
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

var func_291()
{
	return Local_763.f_3;
}

Vector3 func_292(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return func_238();
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_293(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return 216.43f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

int func_294(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_216(iParam1))
	{
		return 0;
	}
	iVar0 = func_429(iParam1, vParam2, iParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

bool func_295(int iParam0, int iParam1)
{
	return func_155((Local_763.f_75.f_7[iParam0 /*11*/])->f_2, iParam1);
}

int func_296(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_763.f_15 };
	iVar7 = 0;
	iVar8 = func_314(iParam0);
	iVar9 = func_430(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_27[iParam0])))
		{
			iVar9 = func_430(iParam0);
			fVar0 = func_431(iParam0);
			if (!func_155((Local_763.f_75.f_7[iParam0 /*11*/])->f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_432(iParam0)) };
			}
			else
			{
				vVar1 = { func_432(iParam0) };
			}
			if (!func_294(Local_21.f_27[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_0x772A1969F649E902(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(&(Local_21.f_27[iParam0]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (iVar9 != 0)
					{
						PED::_0x1902C4CFCC5BE57C(iVar7, iVar9);
						PED::_0xCC8CA3E88256E58F(iVar7, func_295(iParam0, 1), 1, 1, 1, 0);
					}
					else if (PED::_0x772A1969F649E902(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_433(iVar7, 1);
					}
					*bParam2 = 1;
					return 0;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_21.f_27[iParam0]))))
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

bool func_297()
{
	return func_155(Local_21.f_34.f_2, 1);
}

bool func_298(int iParam0)
{
	return func_155(Local_763.f_198.f_5, iParam0);
}

void func_299(int iParam0)
{
	func_208(&(Local_21.f_34.f_2), iParam0);
}

void func_300(int iParam0)
{
	func_185(&(Local_21.f_34.f_2), iParam0);
}

bool func_301(int iParam0)
{
	return func_155(Local_763.f_198.f_6, iParam0);
}

bool func_302(int iParam0)
{
	return func_155(Local_763.f_198.f_1, iParam0);
}

int func_303(var uParam0, int iParam1, var uParam2)
{
	switch (func_434(uParam2))
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 3:
			return 2;
	}
	return 0;
}

bool func_304(int iParam0)
{
	return func_155(Local_763.f_18.f_49, iParam0);
}

bool func_305(var uParam0)
{
	return func_435(*uParam0, 1);
}

void func_306(var uParam0, bool bParam1)
{
	if (bParam1 || !func_305(uParam0))
	{
		func_331(uParam0);
	}
}

int func_307(var uParam0)
{
	if (!func_305(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_436(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_437() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_308()
{
	return Local_21.f_34;
}

int func_309(int iParam0)
{
	return func_438(iParam0);
}

void func_310(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_311(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_763.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_763)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_763.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_763.f_3)
	{
		return 0;
	}
	return 1;
}

void func_312(int iParam0)
{
	int iVar0;

	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case 1:
			func_411(0, iParam0->f_11, 0, -417894478);
			break;
		case 2:
			func_439();
			break;
	}
}

int func_313(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_420())
	{
		return 0;
	}
	STREAMING::_REQUEST_IMAP(iParam0);
	return 0;
}

int func_314(int iParam0)
{
	return (Local_763.f_75.f_7[iParam0 /*11*/])->f_3;
}

void func_315(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_763.f_75.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_27[iParam0])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_21.f_27[iParam0]));
			Local_763.f_75.f_7[iParam0 /*11*/] = iVar1;
			(Local_58[iParam1 /*22*/])->f_2.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				EVENT::_0xBB1E41DD3D3C6250(iVar1, "MpRandomEvent", 1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_440(iVar1, 1f, 0);
				}
				sVar0 = func_441(iParam0);
				if (!MISC::_0x375F5870A7B8BEC1(sVar0))
				{
					func_442(iVar1, sVar0, 1);
				}
				MISC::SET_BIT(&(Local_763.f_75.f_5), iParam0);
				if (bParam2)
				{
					func_443(iParam0);
				}
			}
		}
	}
}

int func_316(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(iParam4) && iParam5 != 0)
	{
		iParam4 = TASK::_0xF533D68FF970D190(vParam1, iParam5, 1f, 0, 0);
	}
	if (TASK::_0x841475AC96E794D1(iParam4))
	{
		if (TASK::_0xEA31F199A73801D3(iParam4))
		{
			iVar1 = TASK::_0x295514F198EFD0CA(iParam4, "CONTAINER");
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
			{
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_317(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

void func_318(int iParam0)
{
	if (func_444())
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "loot_mp_mission_only", true);
	}
}

void func_319(int iParam0, int iParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		if (iParam1 >= 0)
		{
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_bone1", iParam1);
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		if (iParam1 >= 0)
		{
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_bone2", iParam1);
		}
	}
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uVar0 = func_445(iParam0);
		func_446(iParam0, iParam1, iParam2, uVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

int func_321(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1270332421;
				default:
					break;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return 480084174;
				default:
					break;
			}
			break;
	}
	return 41788943;
}

struct<2> func_322(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_447(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_448(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_323()
{
	Local_763.f_75.f_6 = 0;
	Local_763.f_75.f_2 = 0;
	Local_763.f_75.f_1 = -1;
}

void func_324()
{
	int iVar0;

	Local_763.f_101.f_64 = 0;
	Local_763.f_101.f_63 = 0;
	Local_763.f_101.f_66 = 0;
	Local_763.f_101.f_67 = 0;
	Local_763.f_101.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_763.f_101.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_763.f_101.f_75[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_763.f_101.f_73[iVar0]);
		func_449(iVar0);
		iVar0++;
	}
}

void func_325()
{
	int iVar0;

	Local_763.f_198.f_5 = 0;
	Local_763.f_198.f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_450(func_149(iVar0));
		iVar0++;
	}
}

void func_326(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_763.f_75.f_2 = (Local_763.f_75.f_2 || (Local_58[iParam0 /*22*/])->f_2);
		Local_763.f_75.f_1 = (Local_763.f_75.f_1 && (Local_58[iParam0 /*22*/])->f_2);
		Local_763.f_75.f_6 = (Local_763.f_75.f_6 || (Local_58[iParam0 /*22*/])->f_2.f_1);
	}
}

void func_327(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_763.f_101.f_64 = (Local_763.f_101.f_64 || (Local_58[iParam0 /*22*/])->f_6.f_1);
		Local_763.f_101.f_63 = (Local_763.f_101.f_63 || (Local_58[iParam0 /*22*/])->f_6);
		Local_763.f_101.f_66 = (Local_763.f_101.f_66 || (Local_58[iParam0 /*22*/])->f_6.f_3);
		Local_763.f_101.f_67 = (Local_763.f_101.f_67 || (Local_58[iParam0 /*22*/])->f_6.f_4);
		Local_763.f_101.f_68 = (Local_763.f_101.f_68 || (Local_58[iParam0 /*22*/])->f_6.f_5);
		Local_763.f_101.f_69 = (Local_763.f_101.f_69 || (Local_58[iParam0 /*22*/])->f_6.f_6);
		Local_763.f_101.f_82 = (Local_763.f_101.f_82 || (Local_58[iParam0 /*22*/])->f_6.f_2);
		Local_763.f_101.f_70 = (Local_763.f_101.f_70 && (Local_58[iParam0 /*22*/])->f_6.f_7);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_58[iParam0 /*22*/])->f_6.f_9[iVar0], Local_763.f_101.f_71[iVar0], Local_763.f_101.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_58[iParam0 /*22*/])->f_6.f_9[iVar0], Local_763.f_101.f_71[iVar0], Local_763.f_101.f_73[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_58[iParam0 /*22*/])->f_6.f_9[iVar0], Local_763.f_101.f_71[iVar0], Local_763.f_101.f_75[iVar0]);
			func_451(func_340(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_328(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_763.f_198.f_5 = (Local_763.f_198.f_5 || (Local_58[iParam0 /*22*/])->f_19);
		Local_763.f_198.f_6 = (Local_763.f_198.f_6 && (Local_58[iParam0 /*22*/])->f_19);
		if (!func_302(2))
		{
			if (func_302(1))
			{
				if (func_155((Local_58[iParam0 /*22*/])->f_19, 1))
				{
					Local_763.f_198.f_7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
					Local_763.f_198.f_8 = (Local_58[iParam0 /*22*/])->f_19.f_1;
					Local_763.f_198.f_9 = (Local_58[iParam0 /*22*/])->f_19.f_2;
					func_389(2);
					if (iParam0 != iParam2)
					{
						if (func_155((Local_58[iParam2 /*22*/])->f_19, 1))
						{
							func_208(&((Local_58[iParam2 /*22*/])->f_19), 1);
						}
					}
				}
			}
		}
	}
	if (iParam0 == 31)
	{
		if (!func_155(Local_763.f_198.f_5, 1))
		{
			Local_763.f_198.f_7 = 255;
			Local_763.f_198.f_8 = -1;
			Local_763.f_198.f_9 = -1;
			func_373(2);
		}
	}
}

int func_329(int iParam0)
{
	return iParam0;
}

int func_330(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
	(Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_2.f_2[iParam2] = fVar0;
	if (fVar0 > (Local_763.f_75.f_7[iParam2 /*11*/])->f_9)
	{
		return 0;
	}
	return 1;
}

void func_331(var uParam0)
{
	func_452(uParam0, 0f);
}

int func_332(var uParam0, float fParam1)
{
	if (!func_305(uParam0))
	{
		return 0;
	}
	if (func_453(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_333(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_334(int iParam0)
{
	return 1;
}

void func_335(int iParam0, int iParam1)
{
	func_208(&((Local_763.f_75.f_7[iParam0 /*11*/])->f_2), iParam1);
}

bool func_336(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_155((Local_58[iParam1 /*22*/])->f_2, iParam0);
}

void func_337(int iParam0)
{
	func_185(&((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_2), iParam0);
}

void func_338(int iParam0)
{
	func_208(&((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_2), iParam0);
}

void func_339()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar4 = func_340(iVar0);
		if (!func_341(iVar4))
		{
		}
		else if (!func_353(iVar4, iVar5))
		{
			if (func_342(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					func_454(iVar4);
					func_455(iVar4);
				}
			}
		}
		iVar0++;
	}
}

int func_340(int iParam0)
{
	return iParam0;
}

bool func_341(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_763.f_101.f_67, iParam0);
}

int func_342(int iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(Local_763.f_101.f_81, iParam0))
	{
		return 0;
	}
	*iParam1 = &Local_763.f_101.f_77[iParam0 /*3*/];
	iParam1->f_1 = (Local_763.f_101.f_77[iParam0 /*3*/])->f_1;
	iParam1->f_2 = (Local_763.f_101.f_77[iParam0 /*3*/])->f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	return 1;
}

void func_343(int iParam0)
{
}

bool func_344(int iParam0)
{
	return MISC::IS_BIT_SET(Local_763.f_101.f_66, iParam0);
}

bool func_345(int iParam0)
{
	return MISC::IS_BIT_SET((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_6.f_3, iParam0);
}

bool func_346(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(Local_763.f_101.f_73[iParam0]);
}

void func_347(int iParam0)
{
	MISC::CLEAR_BIT(&((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_6.f_3), iParam0);
}

bool func_348(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_6.f_9[iParam0]);
}

void func_349(int iParam0)
{
	SCRIPTS::_0xDE544B7EC0C187CC((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_6.f_9[iParam0]);
}

bool func_350(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_763.f_101.f_68, iParam0);
}

bool func_351(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_58[iParam1 /*22*/])->f_6, iParam0);
}

int func_352(int iParam0)
{
	return 0;
}

bool func_353(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_58[iParam1 /*22*/])->f_6.f_2, iParam0);
}

int func_354(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_456(uParam2, 1, iVar0);
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
			if (func_457(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_458(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_459(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (func_460(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_461(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_20 && func_462(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_458(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_463(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_464(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_458(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_465(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_458(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939178->f_23) < 300)
			{
				if (func_466(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (func_466(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_458(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_467(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939178->f_19 || uParam2->f_12 < 20f)
			{
				if (func_468(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_469(uParam2, 4000))
				{
					if ((func_470(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_471(uParam2, iParam0)) && func_472(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_458(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_470(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_471(uParam2, iParam0)) && func_472(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (Global_1939178->f_34 == 0)
			{
				if (Global_1939178->f_35 != 0)
				{
					if (func_473(iParam0, Global_1939178->f_35))
					{
						func_474();
						*iParam3 = 2;
						func_458(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_475(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_437() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_474();
						*iParam3 = 2;
						func_458(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_476())
				{
					if (func_473(iParam0, Global_1939178->f_36))
					{
						func_474();
						*iParam3 = 2;
						func_458(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_477(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_458(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_479(func_478(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_480(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*iParam3 = 1048576;
						func_458(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_481(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_482(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_458(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_483(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_484(uParam2, 4000))
				{
					if (func_485(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_458(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_486(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_458(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_487(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_458(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_355(var uParam0)
{
	return uParam0->f_22;
}

int func_356(int iParam0, int iParam1, int iParam2)
{
	func_394(33554432);
	switch (iParam1)
	{
		case 8:
			if (!func_390(4))
			{
				func_391(4);
			}
			break;
	}
	func_410();
	return 1;
}

void func_357(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	MISC::SET_BIT(&((Local_58[iVar0 /*22*/])->f_6), iParam0);
	if (bParam1)
	{
		(Local_58[iVar0 /*22*/])->f_6.f_11[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

int func_358(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_488(iParam1))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (uParam0->f_2 <= 25f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) >= 4f)
		{
			if (PED::IS_PED_IN_COVER(iVar0, 0, 0) || PED::IS_PED_GOING_INTO_COVER(iVar0))
			{
			}
			else
			{
				return 1;
			}
		}
	}
	if (func_489(*uParam0, &(Local_763.f_101.f_31), &uVar1, uParam0->f_2))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_359(int iParam0)
{
	return MISC::IS_BIT_SET(Local_763.f_101.f_63, iParam0);
}

bool func_360(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_58[iParam1 /*22*/])->f_6.f_1, iParam0);
}

int func_361(int iParam0)
{
	return 1;
}

void func_362(int iParam0)
{
}

void func_363(int iParam0)
{
	MISC::SET_BIT(&((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_6.f_1), iParam0);
}

bool func_364(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, Local_763.f_101.f_75[iParam0], &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

int func_365(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*uParam1))
	{
		return 0;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*uParam1);
	if (!NETWORK::_0x255A5EF65EDA9167(*iParam2))
	{
		return 0;
	}
	*uParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam3))
	{
		return 0;
	}
	return 1;
}

bool func_366(int iParam0, int iParam1)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(Local_763.f_101.f_71[iParam0], iParam1);
}

int func_367(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return 1;
}

void func_368(int iParam0, int iParam1)
{
	SCRIPTS::_0x31010318BA9897AC((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_6.f_9[iParam0], iParam1);
}

int func_369(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

void func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_490(0, 0);
	if (iVar0 != Local_763.f_198.f_3)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (func_379())
			{
				func_491(Local_763.f_198.f_3.f_1);
				func_151(Local_763.f_198.f_3.f_1);
			}
			Local_763.f_198.f_3 = iVar0;
			Local_763.f_198.f_3.f_1 = -1;
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = 0;
				while (iVar2 < func_149(1))
				{
					if (iVar1 == func_150(iVar2))
					{
						Local_763.f_198.f_3.f_1 = iVar2;
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (func_379())
			{
				func_492(Local_763.f_198.f_3.f_1);
				func_380(Local_763.f_198.f_3.f_1);
			}
		}
		else
		{
			if (func_379())
			{
				func_491(Local_763.f_198.f_3.f_1);
				func_151(Local_763.f_198.f_3.f_1);
			}
			Local_763.f_198.f_3 = iVar0;
			Local_763.f_198.f_3.f_1 = -1;
		}
	}
}

bool func_371(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_155((Local_58[iParam1 /*22*/])->f_19, iParam0);
}

void func_372(int iParam0)
{
	func_208(&((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_19), iParam0);
}

void func_373(int iParam0)
{
	func_208(&(Local_763.f_198.f_1), iParam0);
}

bool func_374()
{
	return func_155(Local_21.f_34.f_2, 4);
}

int func_375()
{
	if (Local_763.f_198 != Local_21.f_34)
	{
		return !func_374();
	}
	return 0;
}

bool func_376(int iParam0)
{
	return func_155(Local_21.f_34.f_2, iParam0);
}

void func_377(var uParam0, var uParam1)
{
}

void func_378(int iParam0, var uParam1)
{
	switch (func_434(uParam1))
	{
		case 0:
			func_493(iParam0, 0);
			break;
		case 1:
			func_494(iParam0, 7f);
			func_495(iParam0, 0, "GREET_ACC", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 1);
			func_495(iParam0, 1, "INTERACT_DECLINE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 1);
			func_309(2);
			break;
		case 2:
			func_493(iParam0, 1);
			func_496(iParam0, 0, 1, 1);
			func_496(iParam0, 1, 1, 1);
			if (func_199(64) || func_199(128))
			{
				func_309(3);
			}
			break;
		case 3:
			func_493(iParam0, 0);
			func_497(iParam0, 0);
			func_497(iParam0, 1);
			break;
	}
}

int func_379()
{
	if (Local_763.f_198.f_3.f_1 != -1)
	{
		return 1;
	}
	return 0;
}

void func_380(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_498(iParam0, iVar0, 1);
		iVar0++;
	}
	func_499(iParam0, 2);
}

void func_381(int iParam0)
{
	func_185(&((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_19), iParam0);
}

bool func_382(int iParam0)
{
	return func_155((Local_763.f_198.f_10[iParam0 /*29*/])->f_3, 1);
}

bool func_383(int iParam0, bool bParam1)
{
	if (bParam1 && !func_259(iParam0))
	{
		return false;
	}
	return !func_500(iParam0, 4);
}

void func_384(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_259(iParam0))
	{
		return;
	}
	iVar0 = func_412(iParam0);
	if (bParam1)
	{
		func_501(iParam0, 4);
		if (bParam3)
		{
			func_502(iVar0, 1);
		}
		func_503(iVar0, 1);
	}
	else
	{
		func_504(iParam0, 4);
		func_503(iVar0, 0);
	}
}

int func_385()
{
	if (func_28() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_386(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_259(iParam0))
	{
		return false;
	}
	iVar0 = func_412(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_387(int iParam0, int iParam1, var uParam2)
{
	return 1;
}

void func_388(int iParam0, int iParam1)
{
	func_505(0, 1);
	switch (func_434(func_506()))
	{
		case 2:
			if (func_507() == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_394(64);
						break;
					case 1:
						func_394(128);
						break;
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_508(2);
			}
			break;
	}
}

void func_389(int iParam0)
{
	func_185(&(Local_763.f_198.f_1), iParam0);
}

bool func_390(int iParam0)
{
	return func_155(Local_763.f_18.f_51, iParam0);
}

void func_391(int iParam0)
{
	func_185(&(Local_763.f_18.f_51), iParam0);
}

int func_392(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (func_155((Local_58[iParam1 /*22*/])->f_1, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0)
{
	vector3 vVar0;
	int iVar10;

	if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return 1;
					}
				}
			}
			iVar10++;
		}
	}
	return 0;
}

void func_394(int iParam0)
{
	func_185(&((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_1), iParam0);
}

void func_395()
{
	int iVar0;

	if (!func_199(2048))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_238()) < 15f)
		{
			if (func_390(8))
			{
				func_394(2048);
			}
			else if (func_509(Global_34))
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (func_510(Global_34) == MISC::_GET_ENTITY_FROM_ITEM(&(Local_763.f_18.f_1[iVar0])))
					{
						func_394(2048);
					}
					iVar0++;
				}
			}
		}
	}
}

bool func_396(int iParam0, int iParam1)
{
	return func_155((Local_763.f_18.f_9[iParam0 /*7*/])->f_3, iParam1);
}

void func_397()
{
	if (!func_199(2))
	{
		func_511();
	}
	else if (!func_396(0, 1073741824 /* Float: 2f */))
	{
		PED::_0x406CCF555B04FAD3(func_160(0), 1, 1065353216);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_160(0), true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(func_160(0), true, true);
		func_512(0);
		func_513(0, 1073741824 /* Float: 2f */);
	}
}

void func_398()
{
	int iVar0;

	if (!func_108(32, 255))
	{
		func_514(Local_763.f_1, Local_763.f_3);
		if (!func_108(1024, 255))
		{
			func_515(Local_763.f_1);
			func_128(1024);
		}
		iVar0 = func_266(Local_763.f_1, Local_763.f_2);
		func_516(iVar0);
		func_517(iVar0);
		func_123(2);
		func_518(Local_763.f_9);
		func_519(Local_763.f_1);
		func_128(32);
	}
}

void func_399()
{
	if (!func_65(2))
	{
		return;
	}
	func_123(8);
}

void func_400()
{
	if (func_191() == 2)
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(func_160(0)))
		{
			if (!func_404(1))
			{
				func_406(1);
			}
			if (func_307(&((Local_763.f_18.f_9[0 /*7*/])->f_4)) >= 1000)
			{
				func_520(0, 2);
			}
		}
		else if (!func_396(0, 2))
		{
			func_521(1891783641, func_160(0), 1);
			func_513(0, 2);
			func_331(&((Local_763.f_18.f_9[0 /*7*/])->f_4));
		}
	}
}

void func_401(int iParam0, int iParam1)
{
	char* sVar0;

	if (!func_522(255) || func_523((Local_763.f_18.f_9[iParam0 /*7*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 150f)
	{
		func_163(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_763.f_18.f_9[iParam0 /*7*/])))
	{
		Local_763.f_18.f_9[iParam0 /*7*/] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, func_160(iParam0));
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "NB_CRASHED_WAGON_DRIVER_BLIP";
				break;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_763.f_18.f_9[iParam0 /*7*/]), sVar0);
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_763.f_18.f_9[iParam0 /*7*/]), iParam1);
	}
}

void func_402(int iParam0)
{
	int iVar0;

	iVar0 = func_222();
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		if (!ANIMSCENE::_0x25557E324489393C(iVar0) || !ANIMSCENE::_0x477122B8D05E7968(iVar0, 1, 0))
		{
			return;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(iVar0, func_220(iParam0)))
		{
			return;
		}
		if (ANIMSCENE::_0x1F0E401031E20146(iVar0, func_220(iParam0)))
		{
			return;
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, func_220(iParam0), true);
	}
}

int func_403(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 255;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), ENTITY::GET_ENTITY_COORDS((Local_763.f_18.f_9[iParam0 /*7*/])->f_1, true, false));
			if (fVar1 < fParam1)
			{
				iVar4 = iVar3;
				fParam1 = fVar1;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_404(int iParam0)
{
	return func_155(Local_763.f_18.f_55, iParam0);
}

void func_405(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_406(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<15> Var2;

	if (func_404(iParam0))
	{
		return;
	}
	uVar0 = func_524(ENTITY::GET_ENTITY_COORDS(func_160(0), true, false), 0f, 0f, 0f, 30f, 30f, 20f, 665633627, 0, 8);
	iVar1 = 1;
	Var2 = { func_525(1) };
	Var2.f_11 = iParam0;
	func_526(&Var2, uVar0);
}

Vector3 func_407()
{
	switch (func_183())
	{
		case 0:
			return -1525.73f, -558.6525f, 137.1892f;
		case 1:
			return -1773.655f, 288.0809f, 116.3698f;
		case 2:
			return -2727.401f, -266.463f, 148.4963f;
		case 3:
			return -732.9782f, -730.3648f, 49.85772f;
		case 4:
			return 982.9839f, -1284.832f, 53.40044f;
		case 5:
			return 1108.551f, -1449.591f, 52.30062f;
		case 6:
			return 1329.837f, -1607.947f, 65.025f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_408(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_409()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_305(&(Local_21.f_7.f_14)))
		{
			func_306(&(Local_21.f_7.f_14), 0);
		}
		else if (func_307(&(Local_21.f_7.f_14)) > 10000)
		{
			if (!func_404(32768))
			{
				func_406(32768);
			}
			else if (!func_404(262144))
			{
				func_406(262144);
			}
			else if (!func_404(524288))
			{
				func_406(524288);
			}
			else if (!func_404(1048576))
			{
				func_406(1048576);
			}
		}
	}
}

void func_410()
{
	if (func_191() == 2)
	{
		if (!func_199(4096))
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_160(0)))
			{
				if (ENTITY::IS_ENTITY_DEAD(func_160(0)))
				{
					if (func_527(func_160(0), PLAYER::PLAYER_PED_ID()))
					{
						func_528(151445061, 1, 0);
					}
					func_394(4096);
				}
			}
		}
	}
}

int func_411(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_529(func_160(iParam0), 0))
	{
		return 0;
	}
	else if (func_404(iParam1))
	{
		return 0;
	}
	if ((iParam1 == 131072 || iParam1 == 256) || iParam1 == 65536)
	{
		bParam2 = true;
	}
	if (!bParam2)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(func_160(iParam0)))
		{
			return 0;
		}
	}
	else if (AUDIO::IS_ANY_SPEECH_PLAYING(func_160(iParam0)))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(func_160(iParam0), 0);
	}
	if (func_533(func_160(iParam0), func_530(func_183(), iParam1), iParam3, 0, 0, func_531(iParam0), func_532(iParam1), 1))
	{
		func_534(iParam1);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_307(&(Local_21.f_7.f_14)) > 10000)
			{
				func_333(&(Local_21.f_7.f_14));
			}
		}
		return 1;
	}
	return 0;
}

int func_412(int iParam0)
{
	return iParam0;
}

void func_413(int iParam0)
{
	if (!func_535(iParam0))
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

int func_414(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_536(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_415(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_536(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_416(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_177(&Var1, uParam0))
	{
		iVar0 = ((func_537() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_417(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_418(int iParam0, int iParam1)
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

void func_419(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 37, &(Global_1051202->f_16[15]));
	func_538(uParam0, uParam0->f_1);
}

bool func_420()
{
	return func_539() == 4;
}

Vector3 func_421(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_422(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

float func_423(var uParam0)
{
	return uParam0->f_25;
}

void func_424(var uParam0, float fParam1)
{
	uParam0->f_26 = fParam1;
}

void func_425(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 1);
	}
	else
	{
		func_208(uParam0, 1);
	}
}

void func_426(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 512);
	}
	else
	{
		func_208(uParam0, 512);
	}
}

void func_427(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 2);
	}
	else
	{
		func_208(uParam0, 2);
	}
}

void func_428(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 8);
	}
	else
	{
		func_208(uParam0, 8);
	}
}

int func_429(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

int func_430(int iParam0)
{
	return (Local_763.f_75.f_7[iParam0 /*11*/])->f_4;
}

float func_431(int iParam0)
{
	return (Local_763.f_75.f_7[iParam0 /*11*/])->f_5;
}

Vector3 func_432(int iParam0)
{
	return (Local_763.f_75.f_7[iParam0 /*11*/])->f_6;
}

void func_433(int iParam0, bool bParam1)
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

int func_434(var uParam0)
{
	return uParam0;
}

bool func_435(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_436(var uParam0)
{
	return func_435(*uParam0, 2);
}

int func_437()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_438(int iParam0)
{
	if (func_297())
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	Local_21.f_34 = iParam0;
	func_185(&(Local_21.f_34.f_2), 4);
	return 1;
}

void func_439()
{
	if (!func_390(8))
	{
		func_541(func_540(), 0);
		func_391(8);
	}
}

void func_440(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_542(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_441(int iParam0)
{
	return (Local_763.f_75.f_7[iParam0 /*11*/])->f_10;
}

void func_442(int iParam0, char* sParam1, bool bParam2)
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

void func_443(int iParam0)
{
}

bool func_444()
{
	return &Global_3145858 != 371211549;
}

int func_445(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_446(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, uParam3, iVar23, 2, 0);
}

int func_447(int iParam0)
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

struct<2> func_448(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_449(int iParam0)
{
	if (!func_543(func_340(iParam0), Local_763.f_101.f_77[iParam0 /*3*/]))
	{
		MISC::CLEAR_BIT(&(Local_763.f_101.f_81), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_763.f_101.f_81), iParam0);
}

void func_450(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_150(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (func_544(iParam0, 8))
	{
		if (func_544(iParam0, 1))
		{
			MISC::_0xE98D55C5983F2509(iVar0);
			func_261(iParam0, 1);
		}
		func_151(iParam0);
		func_261(iParam0, 8);
	}
	if (func_544(iParam0, 1))
	{
		bVar1 = false;
		if (!func_545(iParam0))
		{
			bVar1 = true;
		}
		if (!bVar1)
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_478(PLAYER::PLAYER_ID())) > &Local_763.f_198.f_10[iParam0 /*29*/])
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			MISC::_0xE98D55C5983F2509(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 315, false);
			}
			func_151(iParam0);
			func_261(iParam0, 1);
		}
		else
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!PED::GET_PED_CONFIG_FLAG(iVar0, 297, true))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
				}
				if (!PED::GET_PED_CONFIG_FLAG(iVar0, 315, true))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
				}
			}
			if (func_546(iParam0))
			{
				if (!func_544(iParam0, 2))
				{
					func_380(iParam0);
				}
			}
			else if (func_544(iParam0, 2))
			{
				func_151(iParam0);
			}
		}
	}
	else if (func_545(iParam0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_478(PLAYER::PLAYER_ID())) <= &Local_763.f_198.f_10[iParam0 /*29*/])
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (MISC::_0x870708A6E147A9AD(iVar0, (Local_763.f_198.f_10[iParam0 /*29*/])->f_1, &(Local_763.f_198.f_10[iParam0 /*29*/]), 0, (Local_763.f_198.f_10[iParam0 /*29*/])->f_2, 0, 0, 0, 0, 3))
				{
					if (!MISC::_0x375F5870A7B8BEC1((Local_763.f_198.f_10[iParam0 /*29*/])->f_1))
					{
						PED::_0xFCA8FB9E15FA80D3(iVar0, MISC::GET_HASH_KEY((Local_763.f_198.f_10[iParam0 /*29*/])->f_1));
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
						PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
						PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
						PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
						PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
					}
					func_499(iParam0, 1);
				}
			}
		}
	}
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (MISC::IS_BIT_SET((Local_58[iParam1 /*22*/])->f_6, iParam0))
	{
		if (&(Local_58[iParam1 /*22*/])->f_6.f_11[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			return;
		}
		if (NETWORK::_0x255A5EF65EDA9167(&(Local_21.f_29.f_1[iParam0])))
		{
			if (&Local_21.f_29.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (&Local_21.f_29.f_3[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(&((Local_58[iParam1 /*22*/])->f_6.f_11[iParam0]), &(Local_21.f_29.f_3[iParam0])))
		{
			Local_21.f_29.f_1[iParam0] = iVar0;
			Local_21.f_29.f_3[iParam0] = &(Local_58[iParam1 /*22*/])->f_6.f_11[iParam0];
		}
	}
}

void func_452(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_547() - fParam1);
	func_548(uParam0, 1);
	func_549(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_453(var uParam0)
{
	if (!func_305(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_436(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_547() - uParam0->f_1);
}

void func_454(int iParam0)
{
	MISC::SET_BIT(&((Local_58[NETWORK::PARTICIPANT_ID_TO_INT() /*22*/])->f_6.f_2), iParam0);
}

void func_455(int iParam0)
{
}

void func_456(var uParam0, bool bParam1, int iParam2)
{
	func_550(iParam2);
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
		uParam0->f_13 = func_551(0);
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
							func_185(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_552(1, 1))
						{
							func_185(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_552(1, 1) || *uParam0 & 8192 != 0))
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
			if (func_553(uParam0))
			{
				uParam0->f_15 = func_437();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_437() - uParam0->f_15) > 500)
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
	func_554(uParam0);
}

int func_457(int iParam0, var uParam1)
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
			if (!func_555(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_556(iParam0, iVar2) <= func_557(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_458(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_558(iParam2, 1, 1, 1, 0))
	{
		func_185(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_559(uParam1, 1);
	func_560();
}

int func_459(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_561(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_562(uParam1);
			if (func_563(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_564(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_559(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_565(uParam1))
						{
							func_559(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_460(int iParam0, int iParam1, var uParam2)
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
	if (func_566(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_562(uParam2);
		if (func_563(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_564(uParam2)
				{
					func_559(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_461(int iParam0, var uParam1)
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
	if (func_555(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_564(uParam1)
		{
			fVar3 = func_562(uParam1);
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

int func_462(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_567(bParam1, bParam2, bParam3);
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

int func_463(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_437();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_464(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_568(uParam2);
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
			if (func_472(uParam2, iParam1))
			{
				func_559(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_465(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_355(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_472(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_559(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_466(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_569(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_559(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_559(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_570(iParam1, vVar0, vVar4))
					{
						func_559(uParam2, 1);
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
					func_559(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_570(iParam1, vVar0, vVar7))
					{
						func_559(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_467(int iParam0, var uParam1)
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
		if (!func_555(iParam0, uParam1, &(Global_1939178->f_28[iVar0])) || iParam0 == &Global_1939178->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_571(&(Global_1939178->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false), vVar9);
			if (func_572(&(Global_1939178->f_28[iVar0])))
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
			if (func_573(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_574(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_575(uParam1, iParam0, fVar1, iVar0))
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

int func_468(int iParam0, var uParam1)
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

int func_469(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_437();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_470(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_576(iVar0, &iVar2))
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
	if (func_577(iVar0, iParam0))
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

int func_471(var uParam0, int iParam1)
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

int func_472(var uParam0, int iParam1)
{
	if (func_578(uParam0))
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
	if (PED::_0xB65A4DAB460A19BD(Global_34) != 0)
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

int func_473(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_523(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_474()
{
}

int func_475(var uParam0, int iParam1)
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
		if (func_579(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_437();
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
						if (func_580(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_437();
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

int func_476()
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
	if ((func_437() - Global_1939178->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_477(var uParam0, int iParam1)
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
	fVar0 = func_557(uParam0);
	if (uParam0->f_12 > func_423(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_581(iParam1);
	iVar1 = func_582(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_478(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_479(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_480(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_583(iParam0, vVar0, iParam2);
}

int func_481(int iParam0, int iParam1, var uParam2)
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
	return func_584(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_482(int iParam0, var uParam1)
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
		if (func_585(iParam0, uParam1, 1))
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
			if (func_586(uParam1))
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
					if (!func_587(uParam1, iParam0))
					{
						if (func_580(iVar4, Global_35, 1) < 7f)
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

int func_483(int iParam0, var uParam1)
{
	if (!func_588(0))
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

int func_484(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_437();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_485(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_486(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_437();
	}
	else if (func_437() - uParam1->f_4) > func_589(uParam1)
	{
		return func_590(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_487(var uParam0, int iParam1)
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

bool func_488(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_763.f_101.f_69, iParam0);
}

int func_489(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_456(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1939178->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_469(uParam1, 4000))
				{
					if ((func_470(iParam0, Global_1939178->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_471(uParam1, iParam0)) && func_472(uParam1, iParam0))
					{
						func_474();
						*uParam2 = 2;
						func_458(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_469(uParam1, 4000))
				{
					if ((func_470(iParam0, Global_1939178->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_471(uParam1, iParam0)) && func_472(uParam1, iParam0))
					{
						func_474();
						*uParam2 = 2;
						func_458(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			else if (Global_1939178->f_35 != 0)
			{
				if (Global_1939178->f_34 == 0)
				{
					if (func_473(iParam0, Global_1939178->f_35))
					{
						func_474();
						*uParam2 = 2;
						func_458(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_476())
				{
					if (func_473(iParam0, Global_1939178->f_36))
					{
						func_474();
						*uParam2 = 2;
						func_458(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_463(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_464(Global_34, iParam0, uParam1))
					{
						func_474();
						*uParam2 = 4;
						func_458(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_465(Global_34, iParam0, uParam1))
					{
						func_474();
						*uParam2 = 256;
						func_458(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_591(iParam0, uParam1))
			{
				func_474();
				*uParam2 = 131072;
				func_458(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_592(iParam0, uParam1))
			{
				func_474();
				*uParam2 = 262144;
				func_458(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_490(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, iParam0, iParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					return iVar0;
				}
			}
		}
	}
	return 0;
}

void func_491(var uParam0)
{
}

void func_492(var uParam0)
{
}

void func_493(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_155((Local_763.f_198.f_10[iParam0 /*29*/])->f_3, 4))
		{
			func_185(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_3), 4);
		}
	}
	else if (func_155((Local_763.f_198.f_10[iParam0 /*29*/])->f_3, 4))
	{
		func_208(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_3), 4);
	}
}

void func_494(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_763.f_198.f_10[iParam0 /*29*/] = fParam1;
	}
}

void func_495(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2 = sParam2;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 = iParam3;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6 = iParam4;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4 = iParam5;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5 = iParam6;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7 = iParam7;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1 = iParam8;
	if (func_546(iParam0))
	{
		func_498(iParam0, iParam1, 1);
	}
}

void func_496(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (MISC::_0x375F5870A7B8BEC1(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_185(&(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1), 1);
	}
	else
	{
		func_208(&(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1), 1);
	}
	if (bParam3 && func_546(iParam0))
	{
		func_384(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), bParam2, 1, 1);
	}
}

void func_497(int iParam0, int iParam1)
{
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2 = "";
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 = 0;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6 = 0;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4 = 1;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5 = 0;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7 = -1;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1 = 0;
	if (func_546(iParam0))
	{
		func_260((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/], 1, 1);
	}
}

void func_498(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::_0x375F5870A7B8BEC1(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2))
	{
		return;
	}
	if (bParam2)
	{
		func_260((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/], 1, 1);
	}
	if (((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 == 0)
	{
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_593(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2, ((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3, iVar0, ((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4, ((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5, 0, 0, ((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	iVar2 = func_412(iVar1);
	func_594(iVar1, 18, 0, 1);
	func_594(iVar1, 17, 0, 1);
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar2 /*23*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	if (func_155(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1, 2))
	{
		func_595(iVar1, ((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2, ((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7, 1);
	}
	if (!func_155(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1, 1))
	{
		if (func_155(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1, 4))
		{
			if (func_385() < ((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7)
			{
				if (func_383(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 0))
				{
					func_384(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 0, 1, 1);
				}
			}
			else if (!func_383(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 0))
			{
				func_384(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 1, 1, 1);
			}
		}
	}
	else
	{
		func_384(iVar1, 0, 1, 1);
	}
	(Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/] = iVar1;
}

void func_499(int iParam0, int iParam1)
{
	func_185(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_3), iParam1);
}

bool func_500(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_501(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_502(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_500(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_503(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_504(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

void func_505(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_149(iVar0);
		func_496(iVar1, 0, bParam0, bParam1);
		func_496(iVar1, 1, bParam0, bParam1);
		func_496(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

var func_506()
{
	return Local_763.f_198;
}

int func_507()
{
	return Local_763.f_198.f_7;
}

void func_508(int iParam0)
{
	func_185(&(Local_21.f_7.f_11), iParam0);
}

bool func_509(int iParam0)
{
	return (func_596(iParam0, 4) || func_596(iParam0, 5));
}

int func_510(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_597(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_597(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

void func_511()
{
	int iVar0;

	iVar0 = func_222();
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		if (!ANIMSCENE::_0x25557E324489393C(iVar0) || !ANIMSCENE::_0x477122B8D05E7968(iVar0, 1, 0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_160(0)) || ENTITY::IS_ENTITY_DEAD(func_160(0)))
		{
			return;
		}
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, func_598(), 0f, 0f, 0f, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, "male", func_160(0), 0);
		func_599(iVar0, func_218(0));
		func_394(2);
	}
}

void func_512(int iParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_531(iParam0);
	iVar1 = func_160(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iVar1, sVar0);
	}
}

void func_513(int iParam0, int iParam1)
{
	func_185(&((Local_763.f_18.f_9[iParam0 /*7*/])->f_3), iParam1);
}

void func_514(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_322(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_99(&Var0, 4) && func_600(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_515(int iParam0)
{
	func_601();
	func_602(iParam0);
}

void func_516(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_105(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_603(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_106((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_604(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_604(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_604(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_604(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_517(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_419(&Var0);
}

void func_518(struct<2> Param0)
{
	struct<32> Var0;

	if (func_264(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_264(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_264(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_605(Param0, &Var0))
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

void func_519(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_322(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

void func_520(int iParam0, int iParam1)
{
	func_208(&((Local_763.f_18.f_9[iParam0 /*7*/])->f_3), iParam1);
}

void func_521(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

bool func_522(int iParam0)
{
	return func_108(8, iParam0);
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

var func_524(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_606() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_607());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_607());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_607());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_608(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_609(iVar2))
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
				if (iVar9 & 8192 != 0 && func_610(iVar2) != 1)
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
					if (!func_611(iVar10))
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

struct<15> func_525(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_763, 5);
	Var0.f_9 = iParam0;
	Var0 = 178;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_526(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 40, &uParam1);
}

int func_527(int iParam0, int iParam1)
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

void func_528(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_612())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_613(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_613(iParam0, 1) /*4*/])->f_2++;
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
	func_614(&Var0, uVar7);
}

int func_529(int iParam0, int iParam1)
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
	if (func_186(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_186(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_186(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_186(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_186(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_186(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_186(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_186(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_530(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 1:
					return "RE_CW_MTN_V2_RAMBLING_A";
				case 2:
					return "RE_CW_MTN_V2_RAMBLING_B";
				case 4:
					return "RE_CW_MTN_V2_RAMBLING_C";
				case 8:
					return "RE_CW_MTN_V2_RAMBLING_D";
				case 16:
					return "RE_CW_MTN_V2_LEAVE_ROCK";
				case 32:
					return "RE_CW_MTN_V2_EARLY_FINISH";
				case 64:
					return "RE_CW_MTN_V2_BOSS_HAPPY";
				case 128:
					return "RE_CW_MTN_V2_AGGRO_A";
				case 256:
					return "RE_CW_MTN_V2_AGGRO_B";
				case 512:
					return "RE_CW_MTN_V2_AGGRO_C";
				case 1024:
					return "RE_CW_MTN_V2_AGGRO_D";
				case 2048:
					return "RE_CW_MTN_V2_AGGRO_E";
				case 4096:
					return "GENERIC_THANKS";
				case 8192:
					return "GENERIC_CURSE_MED";
				case 16384:
					return "RE_CW_MTN_V2_HELP_SELF";
				case 32768:
					return "RE_CW_MTN_V2_LEAVE";
				case 65536:
					return "RE_CW_MTN_V2_AGGRO";
				case 131072:
					return "RE_CW_MTN_V2_WATCH_STUFF";
				case 262144:
					return "RE_CW_MTN_V2_TASTE";
				case 524288:
					return "RE_CW_MTN_V2_TASTE_B";
				case 1048576:
					return "RE_CW_MTN_V2_TASTE_C";
				case 2097152:
					return "RE_CW_MTN_V2_FOLLOW_A";
				case 4194304:
					return "RE_CW_MTN_V2_FOLLOW_B";
				case 8388608:
					return "RE_CW_MTN_V2_FOLLOW_A_RANDOM";
				case 16777216:
					return "RE_CW_MTN_V2_FOLLOW_B_RANDOM";
				case 33554432:
					return "RE_CW_MTN_V2_PASS_OUT_A";
				case 67108864:
					return "RE_CW_MTN_V2_PASS_OUT_B";
				case 134217728:
					return "IGNORING_YOU";
				case 268435456:
					return "RE_CW_MTN_V2_AGGRO_MINOR_B";
				case 536870912:
					return "RE_CW_MTN_V2_AGGRO_MINOR_C";
				case 1073741824:
					return "RE_CW_MTN_V2_HOGTIE";
				default:
					break;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam1)
			{
				case 1:
					return "RE_CW_LWL_V2_RAMBLING_A";
				case 2:
					return "RE_CW_LWL_V2_RAMBLING_B";
				case 4:
					return "RE_CW_LWL_V2_RAMBLING_C";
				case 8:
					return "RE_CW_LWL_V2_RAMBLING_D";
				case 16:
					return "RE_CW_LWL_V2_LEAVE_ROCK";
				case 32:
					return "RE_CW_LWL_V2_EARLY_FINISH";
				case 64:
					return "RE_CW_LWL_V2_BOSS_HAPPY";
				case 128:
					return "RE_CW_LWL_V2_AGGRO_A";
				case 256:
					return "RE_CW_LWL_V2_AGGRO_B";
				case 512:
					return "LIARS_DICE_BULLSHIT";
				case 1024:
					return "RE_CW_LWL_V2_AGGRO_D";
				case 2048:
					return "RE_CW_LWL_V2_AGGRO_E";
				case 4096:
					return "MINIGAME_VOCALFX_EXCITED";
				case 8192:
					return "RE_CW_LWL_V2_NEGATIVE_REACT";
				case 16384:
					return "RE_CW_LWL_V2_HELP_SELF";
				case 32768:
					return "RE_CW_LWL_V2_LEAVE";
				case 65536:
					return "RE_CW_LWL_V2_AGGRO";
				case 131072:
					return "RE_CW_LWL_V2_WATCH_STUFF";
				case 262144:
					return "RE_CW_LWL_V2_TASTE";
				case 524288:
					return "RE_CW_LWL_V2_TASTE_B";
				case 1048576:
					return "RE_CW_LWL_V2_TASTE_C";
				case 2097152:
					return "RE_CW_LWL_V2_FOLLOW_A";
				case 4194304:
					return "RE_CW_LWL_V2_FOLLOW_B";
				case 8388608:
					return "RE_CW_LWL_V2_FOLLOW_A_RANDOM";
				case 16777216:
					return "RE_CW_LWL_V2_FOLLOW_B_RANDOM";
				case 33554432:
					return "RE_CW_LWL_V2_PASS_OUT_A";
				case 67108864:
					return "RE_CW_LWL_V2_PASS_OUT_B";
				case 134217728:
					return "RE_CW_LWL_V2_AGGRO_MINOR_A";
				case 268435456:
					return "RE_CW_LWL_V2_AGGRO_MINOR_B";
				case 536870912:
					return "RE_CW_LWL_V2_AGGRO_MINOR_C";
				case 1073741824:
					return "RE_CW_LWL_V2_HOGTIE";
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

char* func_531(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					return "0283_A_M_M_NbxSlums_01_WHITE_01";
				default:
					break;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_532(int iParam0)
{
	switch (func_183())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam0)
			{
				case 8192:
					return 2;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 512:
					return 1;
				case 4096:
					return 3;
			}
			break;
	}
	return 0;
}

bool func_533(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = uParam1;
	Var0.f_1 = uParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_615(iParam0, &Var0);
}

void func_534(int iParam0)
{
	func_185(&(Local_763.f_18.f_55), iParam0);
}

bool func_535(int iParam0)
{
	return func_500(iParam0, 2);
}

int func_536(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return 0;
	}
	func_616(uParam2);
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

int func_537()
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

void func_538(var uParam0, var uParam1)
{
}

int func_539()
{
	if (&Global_1099294 <= 5)
	{
		return &Global_1099294;
	}
	if (&Global_1099294 <= 22)
	{
		return 4;
	}
	if (&Global_1099294 <= 25)
	{
		return 3;
	}
	return 26;
}

int func_540()
{
	switch (func_191())
	{
		case 0:
		case 2:
			switch (func_183())
			{
				case 0:
					return 505459309;
				case 1:
					return 1962033744;
				case 2:
					return -1583551360;
				case 3:
					return 1331081117;
				case 4:
					return 903574438;
				case 5:
					return 856057291;
				case 6:
					return 259513172;
				default:
					break;
			}
			break;
		case 1:
			switch (func_183())
			{
				case 0:
					return -364070233;
				case 1:
					return 1628530735;
				case 2:
					return 530382704;
				case 3:
					return -649069078;
				default:
					break;
			}
			break;
	}
	return 856057291;
}

int func_541(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_617(&Var4, 1356624740);
	return func_618(iParam0, &Var4, &uVar0, iParam1);
}

float func_542(float fParam0, float fParam1, float fParam2)
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

int func_543(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_96(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_544(int iParam0, int iParam1)
{
	return func_155((Local_763.f_198.f_10[iParam0 /*29*/])->f_3, iParam1);
}

bool func_545(int iParam0)
{
	return !func_155((Local_763.f_198.f_10[iParam0 /*29*/])->f_3, 4);
}

int func_546(int iParam0)
{
	if (Local_763.f_198.f_3.f_1 == iParam0)
	{
		return 1;
	}
	return 0;
}

float func_547()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_548(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_549(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_550(int iParam0)
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
	Global_1939178->f_21 = func_619();
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
			func_620(&(Global_1939178->f_28), &(Global_1939178->f_33));
			Global_1939178->f_32 = iParam0;
			break;
		case 1:
			Global_1939178->f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1939178->f_24)
			{
				if (bVar1 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38))
				{
					Global_1939178->f_24 = PED::_0xB65A4DAB460A19BD(Global_34) != 0;
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

var func_551(int iParam0)
{
	return &(Global_1099294->f_372[iParam0 /*3*/]);
}

int func_552(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_621(bParam0, &iVar0, &iVar1))
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

int func_553(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939178->f_34;
	if (func_28() == -1)
	{
		if (Global_1939178->f_34 == 0)
		{
			iVar0 = func_622(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_34) || !&Global_1954472->f_1616[4])
	{
		iVar0 = func_622(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_582(iVar0) == -1)
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

void func_554(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_623(uParam0);
	}
}

int func_555(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_582(iParam2);
	}
	else
	{
		iVar1 = func_581(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_582(iParam0);
	}
	else
	{
		iVar0 = func_581(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_155(*uParam1, 8388608))
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

float func_556(int iParam0, int iParam1)
{
	return func_523(iParam0, iParam1, 1, 1);
}

float func_557(var uParam0)
{
	return uParam0->f_28;
}

int func_558(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_559(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 134217728);
	}
	else
	{
		func_208(uParam0, 134217728);
	}
}

void func_560()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_561(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_523(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_624(iVar0, 0)))
		{
			if (func_625(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_562(var uParam0)
{
	return uParam0->f_17;
}

int func_563(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_155(*uParam0, 4194304))
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

int func_564(var uParam0)
{
	return uParam0->f_18;
}

int func_565(var uParam0)
{
	return uParam0->f_19;
}

int func_566(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_624(iVar0, 0)))
		{
			if (func_626(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_567(bool bParam0, bool bParam1, bool bParam2)
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

float func_568(var uParam0)
{
	return uParam0->f_24;
}

int func_569(var uParam0)
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

int func_570(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_627(iParam0, vParam4, 0.5f))
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

int func_571(int iParam0)
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
	if (func_628(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_572(int iParam0)
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

int func_573(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_629(iParam1))
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

int func_574(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_629(iParam1))
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

int func_575(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_630(uParam0);
	if (func_629(iParam1))
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

int func_576(int iParam0, int iParam1)
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

int func_577(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_631(iParam0, 1, 0, 0)) && !func_631(iParam0, 1, 0, 0) == 1151374672)
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

bool func_578(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_579(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_580(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_580(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_581(int iParam0)
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

int func_582(int iParam0)
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

int func_583(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_632(vVar3, vVar6);
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
	if (func_633(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_584(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_576(Global_34, &iVar1))
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
		fVar2 = func_523(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_523(iParam0, Global_1939178->f_34, 0, 1) < 2.5f)
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

int func_585(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_621(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_587(uParam1, iVar0))
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
				if (!bParam2 || !func_587(uParam1, iVar1))
				{
					if (func_580(iVar1, Global_35, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_586(var uParam0)
{
	return func_155(*uParam0, 131072);
}

int func_587(var uParam0, int iParam1)
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

int func_588(int iParam0)
{
	return 0;
}

int func_589(var uParam0)
{
	return uParam0->f_21;
}

int func_590(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_591(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_634(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_635(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, 1, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1939178->f_38) || WEAPON::_0x506F1DE1BFC75304(Global_1939178->f_38))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_636())
					{
						if (PED::IS_PED_FACING_PED(Global_34, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_592(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_629(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_34) || PED::IS_PED_IN_COVER(Global_34, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_34)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_34, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_34, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_34))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_34) || ((PED::_0xA29FD00D45311EB7(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_593(char* sParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_500(iVar0, 2))
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
				func_637(iVar1, iParam1, sParam0, 5, iParam3, uParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_594(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_259(iParam0))
	{
		return;
	}
	iVar0 = func_412(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

void func_595(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_259(iParam0))
	{
		return;
	}
	iVar0 = func_412(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

int func_596(int iParam0, int iParam1)
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

int func_597(int iParam0, int iParam1)
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

Vector3 func_598()
{
	switch (func_191())
	{
		case 2:
			switch (func_183())
			{
				case 0:
					return -1497.818f, -556.8351f, 132.8748f;
				case 1:
					return -1757.976f, 270.188f, 119.49f;
				case 2:
					return -2767f, -157.757f, 151.381f;
				case 3:
					return -719.1843f, -747.2665f, 48.8984f;
				case 4:
					return 948.085f, -1257.209f, 53.973f;
				case 5:
					return 1092.027f, -1415.588f, 55.604f;
				case 6:
					return 1297.907f, -1595.661f, 63.79068f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_599(int iParam0, char* sParam1)
{
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iParam0))
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
}

int func_600(int iParam0)
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

void func_601()
{
	func_106(&(Global_1245803->f_2003));
}

void func_602(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_322(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_603(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*uParam1 = iVar1;
		func_32(&Var2, *uParam1, -1, -1, 255);
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

struct<2> func_604(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_605(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_536(Param0, &vVar0);
	if (func_638(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

int func_606()
{
	return Global_1051202->f_12;
}

char* func_607()
{
	return "unnamed";
}

int func_608(int iParam0)
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

int func_609(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_639(35, iParam0);
}

int func_610(int iParam0)
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

bool func_611(int iParam0)
{
	if (func_640(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_641(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_612()
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

int func_613(int iParam0, int iParam1)
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

void func_614(var uParam0, var uParam1)
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

var func_615(int iParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1);
}

void func_616(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_617(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_618(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_642(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_643(uParam2, iParam0, Var1);
	return 1;
}

int func_619()
{
	if (func_644())
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

void func_620(var uParam0, var uParam1)
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

int func_621(bool bParam0, int iParam1, int iParam2)
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
			if (PED::_0x3AA24CCC0D451379(Global_1939178->f_27) || ENTITY::IS_ENTITY_DEAD(Global_1939178->f_27))
			{
				*iParam2 = Global_1939178->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1939178->f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_34);
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

int func_622(var uParam0)
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
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_34);
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

void func_623(var uParam0)
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
					func_185(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_624(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_625(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_626(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_626(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_627(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_628(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_629(int iParam0)
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
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
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

float func_630(var uParam0)
{
	return uParam0->f_27;
}

int func_631(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_632(vector3 vParam0, vector3 vParam3)
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

bool func_633(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_634(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_423(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_645(uParam0);
	}
	return func_423(uParam0);
}

float func_635(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_636()
{
	int iVar0;
	int iVar1;

	iVar0 = func_647(func_646());
	iVar1 = func_648(func_646());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

void func_637(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = uParam5;
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
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, uParam5);
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
	func_502(iParam0, 1);
	func_503(iParam0, 1);
	func_504(iParam0, 128);
}

int func_638(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_649(iParam0))
	{
		return 0;
	}
	if (func_650(iParam0, uParam1, &uVar0))
	{
		func_651(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_639(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_652(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_653())
	{
		return func_652(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_652(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_640(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_641(int iParam0)
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
		func_654(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_655(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_642(var uParam0)
{
	func_617(uParam0, 143479330);
	if (func_656() == 2026485318)
	{
		func_617(uParam0, 617531372);
	}
	else
	{
		func_617(uParam0, 291123060);
	}
}

void func_643(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_657(uParam0))
	{
		return;
	}
	if (Global_1272170->f_2518 < 20)
	{
		Global_1272170->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1272170->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1272170->f_2518.f_1[(Global_1272170->f_2518 - 1) /*21*/]) = { Var1 };
}

int func_644()
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

var func_645(var uParam0)
{
	return uParam0->f_26;
}

int func_646()
{
	return &Global_1902689;
}

int func_647(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_648(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_649(int iParam0)
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

bool func_650(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_658(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_651(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_659(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_660(iVar0);
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
			uParam2->f_5 = func_661(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_662(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_663(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_664(iVar0);
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

bool func_652(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_653()
{
	return Global_1099294->f_339;
}

void func_654(int iParam0)
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
	func_655(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_655(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_656()
{
	return Global_1951141->f_1;
}

int func_657(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_658(int iParam0)
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

int func_659(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_665(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_660(int iParam0)
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

int func_661(int iParam0)
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

int func_662(int iParam0)
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

int func_663(int iParam0)
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

int func_664(int iParam0)
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

int func_665(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_666(iParam0, uParam1, &uVar0))
	{
		func_667(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_666(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_658(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_667(var uParam0, int iParam1, var uParam2)
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

