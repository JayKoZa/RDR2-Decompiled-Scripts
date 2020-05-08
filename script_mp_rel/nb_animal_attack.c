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
	struct<37> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 255, 0, 0, 8000, 0, 4, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 } ;
	var uLocal_50 = 8;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 8;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	struct<45> Local_68[32];
	struct<481> Local_1509 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, 2, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1990 = 8;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 8;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 3;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	float fLocal_2014 = 0f;
	float fLocal_2015 = 0f;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_2014 = 1f;
	fLocal_2015 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 55, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 55, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_68, 1441, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_68[0 /*45*/]), 1441, "m_clientData");
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
	else if (func_17(Local_1509.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_1509.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_1509.f_12), Local_1509.f_9))
	{
		return 1;
	}
	else if (Local_1509.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_1509, &uParam0, 5);
	iVar19 = func_31(&bVar18, Local_1509.f_1, Local_1509.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_1509.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_32(&Var0, Local_1509.f_1, Local_1509.f_2, Local_1509.f_3, iVar17);
	Local_1509.f_9 = { func_33(Var0.f_5, 8) };
	Local_1509.f_14 = Var0.f_5;
	Local_1509.f_15 = { Var0.f_11 };
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
	func_38();
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
	if (func_39(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_40(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_41(iParam3, 255))
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
	if (func_42())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_39(*Global_1051163))
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
		func_43();
	}
	switch (Local_13)
	{
		case 0:
			func_44();
			break;
		case 1:
			func_45();
			break;
		case 2:
			func_46();
			break;
		case 3:
			func_47();
			break;
		case 4:
			func_48();
			break;
		case 5:
			func_49();
			break;
	}
}

void func_23()
{
	func_50();
	if (Local_1509.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_1509.f_8)
	{
		case 0:
			func_52();
			break;
		case 1:
			func_53();
			break;
		case 2:
			func_54();
			break;
		case 3:
			func_55();
			break;
		case 4:
			func_56();
			break;
		case 5:
			func_57();
			break;
	}
}

void func_24()
{
	func_58();
}

void func_25()
{
	if (func_59())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_60();
}

void func_26()
{
	func_61();
	func_62();
	func_63();
	func_64();
}

void func_27()
{
	if (Local_1509.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_65(Local_1509.f_12, 4);
		}
	}
	func_66();
	if (func_67(32))
	{
		func_68(Local_13.f_6);
	}
	func_69();
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
		while (iVar0 < 8)
		{
			Local_13.f_36.f_1[iVar0] = 255;
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
	func_70(&Var0, Var26);
	iVar25 = func_71(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_72(iVar25) };
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
			func_73(uParam0, iParam2);
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
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 277430601;
					uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 1659133778;
					uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 1296650927;
					uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = 2115437634;
					uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1098622970;
					uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 393263596;
					uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = 189453630;
					uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -98921343;
					uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = 6025033;
					uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = -1060299979;
					uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = 682088681;
					uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_75(uParam0);
					uParam0->f_5 = 1705841922;
					uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_75(uParam0);
					uParam0->f_5 = -301205165;
					uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_75(uParam0);
					uParam0->f_5 = 1906160715;
					uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_75(uParam0);
					uParam0->f_5 = -1129906020;
					uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_75(uParam0);
					uParam0->f_5 = 1592980994;
					uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_75(uParam0);
					uParam0->f_5 = 686459378;
					uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_75(uParam0);
					uParam0->f_5 = -259262381;
					uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_75(uParam0);
					uParam0->f_5 = 1289806844;
					uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_75(uParam0);
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
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					uParam0->f_5 = 1454566440;
					uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					uParam0->f_5 = 1141360338;
					uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					uParam0->f_5 = 844768119;
					uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = -1601993562;
					uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = -901588956;
					uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = 2129019244;
					uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = 1227099802;
					uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = -940471213;
					uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = -700569364;
					uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					uParam0->f_5 = 412376369;
					uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = -364052317;
					uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					uParam0->f_5 = -989186530;
					uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = 333858683;
					uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					uParam0->f_5 = -39511303;
					uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = 813662381;
					uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = -1114006686;
					uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = 1049238845;
					uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = 1363886783;
					uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					uParam0->f_5 = -1215674354;
					uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					uParam0->f_5 = 1902132155;
					uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
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
			func_74(uParam0);
			uParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 1382777618;
					uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = -2000681184;
					uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 886884092;
					uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -1277120723;
					uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1577436816;
					uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = -234749781;
					uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = -1607623039;
					uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -1943295936;
					uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = -397730168;
					uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = -392659534;
					uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_75(uParam0);
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
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 1247886914;
					uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 1926100410;
					uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 603340011;
					uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -1253915394;
					uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1281783573;
					uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = -1384936716;
					uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = 636669604;
					uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = 1410575087;
					uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = -736919321;
					uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = 1755496218;
					uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = -1810033095;
					uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_75(uParam0);
					uParam0->f_5 = 99707271;
					uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_75(uParam0);
					uParam0->f_5 = 2145033839;
					uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_75(uParam0);
					uParam0->f_5 = -994111457;
					uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_75(uParam0);
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
					func_77(uParam0, 0);
					func_77(uParam0, 1);
					func_77(uParam0, 4);
					func_77(uParam0, 5);
					break;
				case 1:
					func_77(uParam0, 2);
					func_77(uParam0, 3);
					func_77(uParam0, 6);
					func_77(uParam0, 7);
					func_78(uParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_76(uParam0, 0);
					uParam0->f_5 = -88606612;
					uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_76(uParam0, 1);
					uParam0->f_5 = -1507537085;
					uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_76(uParam0, 0);
					uParam0->f_5 = 150331424;
					uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_76(uParam0, 1);
					uParam0->f_5 = -74168995;
					uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_76(uParam0, 0);
					uParam0->f_5 = -1303456769;
					uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_76(uParam0, 1);
					uParam0->f_5 = 2080696176;
					uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_76(uParam0, 0);
					uParam0->f_5 = -801880493;
					uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_76(uParam0, 1);
					uParam0->f_5 = -2098877513;
					uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_76(uParam0, 0);
					uParam0->f_5 = -985131289;
					uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_76(uParam0, 1);
					uParam0->f_5 = 171385032;
					uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_76(uParam0, 0);
					uParam0->f_5 = -690365399;
					uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_76(uParam0, 1);
					uParam0->f_5 = -393773180;
					uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_76(uParam0, 0);
					uParam0->f_5 = 1783045643;
					uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_76(uParam0, 1);
					uParam0->f_5 = -1841828372;
					uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_76(uParam0, 0);
					uParam0->f_5 = -1926357119;
					uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_76(uParam0, 1);
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
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = 666420762;
					uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 8);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = 1145423923;
					uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -1176575305;
					uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -888961792;
					uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -1145898130;
					uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 7);
					func_76(uParam0, 8);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -264936334;
					uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 6);
					func_76(uParam0, 7);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -562839313;
					uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -819926700;
					uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -100890882;
					uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 5);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
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
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = -1562903685;
					uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 442262250;
					uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 2113001754;
					uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = 222101843;
					uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 862535295;
					uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 267494763;
					uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = 492498900;
					uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -735417347;
					uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = 2000289900;
					uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = 1820563970;
					uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = 1501808210;
					uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_75(uParam0);
					uParam0->f_5 = -1103422576;
					uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_75(uParam0);
					uParam0->f_5 = -375108461;
					uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_75(uParam0);
					uParam0->f_5 = 1074344160;
					uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_75(uParam0);
					uParam0->f_5 = 1375567406;
					uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_75(uParam0);
					uParam0->f_5 = 1695022182;
					uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_75(uParam0);
					uParam0->f_5 = 1773241795;
					uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_75(uParam0);
					uParam0->f_5 = 1650499101;
					uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_75(uParam0);
					uParam0->f_5 = 149116609;
					uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_75(uParam0);
					uParam0->f_5 = 1486166046;
					uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_75(uParam0);
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
			func_74(uParam0);
			func_78(uParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = -1657923088;
					uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = -1268232386;
					uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 1926851120;
					uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -66052340;
					uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1738334804;
					uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 1009780912;
					uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = -1560771476;
					uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = 453813335;
					uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = 786924542;
					uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_75(uParam0);
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
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1323108111;
					uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_80(uParam0, iParam3);
					uParam0->f_5 = -1505479200;
					uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_80(uParam0, iParam3);
					uParam0->f_5 = -1283075997;
					uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_80(uParam0, iParam3);
					uParam0->f_5 = -2100531475;
					uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 269617530;
					uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1592829750;
					uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1817985549;
					uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1945424739;
					uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1787314318;
					uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 542354442;
					uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1510776727;
					uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_80(uParam0, iParam3);
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
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = -377638420;
					uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 1308799438;
					uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = -1030922940;
					uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = 1750043358;
					uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = -1330609910;
					uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 223942444;
					uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = 1067547121;
					uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -450732096;
					uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = -1701940764;
					uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = 1584258975;
					uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = -98183174;
					uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_75(uParam0);
					uParam0->f_5 = -90261849;
					uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_75(uParam0);
					uParam0->f_5 = 754522971;
					uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_75(uParam0);
					uParam0->f_5 = 974542513;
					uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_75(uParam0);
					uParam0->f_5 = -790885273;
					uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_75(uParam0);
					uParam0->f_5 = -1447045452;
					uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_75(uParam0);
					uParam0->f_5 = -586115209;
					uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_75(uParam0);
					uParam0->f_5 = 224941020;
					uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_75(uParam0);
					uParam0->f_5 = -1179654578;
					uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_75(uParam0);
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
			func_74(uParam0);
			uParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 974582605;
					uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = -964359125;
					uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = -700339292;
					uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -470300912;
					uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = -241343909;
					uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 1944053474;
					uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = -2120646059;
					uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -1656440405;
					uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_75(uParam0);
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
			func_74(uParam0);
			func_78(uParam0, 1);
			func_78(uParam0, 4);
			func_78(uParam0, 8);
			func_78(uParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = -1623035253;
					uParam0->f_11 = { func_82(func_81(iParam4)) };
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
					func_83(uParam0, iParam3);
					uParam0->f_5 = -1957221189;
					uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_83(uParam0, iParam3);
					uParam0->f_5 = 871956008;
					uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -718829908;
					uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -478076065;
					uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_83(uParam0, iParam3);
					uParam0->f_5 = 158131441;
					uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_83(uParam0, iParam3);
					uParam0->f_5 = 575051428;
					uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -861587350;
					uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -616671844;
					uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -828875274;
					uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_83(uParam0, iParam3);
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
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 2136361638;
					uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 1948005426;
					uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 462368629;
					uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -172629291;
					uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1063777848;
					uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = -267241827;
					uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = -1183266453;
					uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -877826604;
					uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = 1527533302;
					uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = -865586768;
					uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = 294379466;
					uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_75(uParam0);
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
			iVar17 = func_84(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				uParam0->f_7 = 1;
			}
			*uParam0 = func_85(iVar17);
			uParam0->f_1 = 0;
			uParam0->f_6 = 2;
			func_78(uParam0, 32);
			if (iParam2 != -1)
			{
				uParam0->f_9 = func_87(func_86(iVar17), iParam2);
				uParam0->f_15 = func_88(func_86(iVar17), iParam2);
				uParam0->f_5 = func_89(iVar17, iParam2);
				uParam0->f_11 = { func_90(iVar17, iParam2) };
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
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634), func_91(iParam1));
			break;
		case 3:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_602), func_91(iParam1));
			break;
		case 4:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_2104), func_91(iParam1));
			break;
		case 5:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_12606), func_91(iParam1));
			break;
		case 6:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_12908), func_91(iParam1));
			break;
		case 7:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_15910), func_91(iParam1));
			break;
		case 8:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_15981), func_91(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_93();
	}
	return Var0;
}

void func_34()
{
	func_94();
	func_95();
	func_96();
}

void func_35()
{
	func_97();
	func_98();
	func_99();
	func_100();
	if (!PED::ADD_RELATIONSHIP_GROUP("REL_MPREAA", &(Local_1509.f_18.f_112)))
	{
	}
	else
	{
		func_101(32);
	}
	if (!STREAMING::_0x19A6BE7D9C6884D3(-493351432, 4194319, 0, 0))
	{
	}
	else
	{
		func_101(512);
	}
}

void func_36()
{
}

void func_37()
{
	int iVar0;

	iVar0 = 8;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_38()
{
	int iVar0;

	iVar0 = 1;
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

int func_39(struct<2> Param0)
{
	if (!func_102(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_91(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_40(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_41(int iParam0, int iParam1)
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

int func_42()
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
	if (!func_39(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_43()
{
}

void func_44()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1186267->f_231.f_1066[Local_1509.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_32(&Var1, Local_1509.f_1, Local_1509.f_2, Local_1509.f_3, iVar0);
	if (!func_103(&Var1, 1))
	{
		func_104(1);
		return;
	}
	Local_13.f_6 = func_81(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_105(256);
	if (func_106(Local_13.f_6))
	{
		func_107(5);
		func_104(6);
	}
	else
	{
		func_104(1);
	}
}

void func_45()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_32(&Var0, Local_1509.f_1, Local_1509.f_2, -1, 255);
	if (func_103(&Var0, 1))
	{
		func_104(2);
		return;
	}
	if (func_108(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_1509.f_15, Var0.f_10, 2442122);
		func_104(2);
	}
	else if (bVar17)
	{
		func_107(3);
		func_104(6);
	}
	if (!func_109(Local_13.f_3.f_2))
	{
		func_110(&(Local_13.f_3.f_2));
	}
	else if (func_111(Local_13.f_3.f_2) > 45000)
	{
		func_107(4);
		func_104(6);
	}
}

void func_46()
{
	if (func_112(1, 255))
	{
		if (!func_113(1))
		{
			if (func_114())
			{
				func_105(1);
			}
		}
		else
		{
			func_115();
			func_104(3);
		}
	}
}

void func_47()
{
	bool bVar0;

	if (func_112(2, 255))
	{
		if (!func_113(2))
		{
			bVar0 = true;
			if (!func_116())
			{
				bVar0 = false;
			}
			if (!func_117())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_105(2);
			}
		}
		else
		{
			func_118();
			func_104(4);
		}
	}
}

void func_48()
{
	func_119();
	func_120();
	func_121();
	if (func_122() || Local_13.f_2 != 0)
	{
		func_123();
		func_104(5);
	}
}

void func_49()
{
	if (func_112(4, 255))
	{
		if (func_124())
		{
			func_105(4);
			func_104(6);
		}
	}
}

void func_50()
{
	if (!func_113(256))
	{
		return;
	}
	if (func_113(512))
	{
		if (func_67(32) && func_81(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_68(Local_13.f_6);
			func_125(32);
		}
	}
	else if (!func_67(32))
	{
		if (func_81(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_126(Local_13.f_6, 1, 1);
			func_127(32);
		}
	}
	else if (func_81(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_68(Local_13.f_6);
		func_125(32);
	}
}

void func_51()
{
	func_128();
	func_129();
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_130(6);
	}
	else if (Local_13 > 0)
	{
		func_50();
		func_130(1);
	}
}

void func_53()
{
	if (Local_13 == 6)
	{
		func_130(6);
	}
	else if (Local_13 > 1)
	{
		func_130(2);
	}
}

void func_54()
{
	bool bVar0;
	int iVar1;

	if (!func_112(1, 255))
	{
		bVar0 = true;
		if (!func_131())
		{
			bVar0 = false;
		}
		if (!func_132())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_133(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_109(Local_1509.f_11))
			{
				func_110(&(Local_1509.f_11));
			}
			if (func_111(Local_1509.f_11) >= iVar1)
			{
				func_130(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_134(&(Local_1509.f_11));
		func_135();
		func_130(3);
	}
}

void func_55()
{
	int iVar0;

	if (!func_112(2, 255))
	{
		if (func_136())
		{
			func_133(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_109(Local_1509.f_11))
			{
				func_110(&(Local_1509.f_11));
			}
			if (func_137(Local_1509.f_11) >= iVar0)
			{
				func_130(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_134(&(Local_1509.f_11));
		func_138();
		func_139();
		func_140();
		func_141();
		func_130(4);
	}
}

void func_56()
{
	if (Local_13 >= 5)
	{
		func_142();
		func_130(5);
		return;
	}
	func_143();
	func_144();
	func_145();
	func_146();
	func_147();
	func_148();
}

void func_57()
{
	if (!func_112(4, 255))
	{
		if (func_149())
		{
			func_150();
			func_65(Local_1509.f_12, 4);
			func_133(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_130(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_113(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_60()
{
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_24[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_24[iVar1]));
				func_151(iVar1);
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

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 1)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_33[iVar1 /*2*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_33[iVar1 /*2*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_152(iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_63()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!func_153(((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_3))
			{
				if (func_154((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/]))
				{
					GRAPHICS::_0x9CF1836C03FB67A2((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/], 1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_64()
{
	func_155(&(Local_1509.f_439.f_13));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1509.f_439.f_11))
	{
		VOLUME::_DELETE_VOLUME(Local_1509.f_439.f_11);
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_156(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_66()
{
	int iVar0;
	bool bVar1;

	if (!func_67(1))
	{
		return;
	}
	if (func_67(4))
	{
		return;
	}
	if (!func_67(2))
	{
		iVar0 = -1;
	}
	else if (!func_67(8))
	{
		iVar0 = 2;
	}
	else if (func_67(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_157(Local_1509.f_9, iVar0, 0);
	func_127(4);
	if (bVar1)
	{
		func_158(Local_1509.f_1, Local_1509.f_2);
	}
}

bool func_67(int iParam0)
{
	return func_159(Local_1509.f_7, iParam0);
}

void func_68(int iParam0)
{
	int iVar0;

	if (!func_160(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_69()
{
	if (func_161(32))
	{
		PED::REMOVE_RELATIONSHIP_GROUP(Local_1509.f_18.f_112);
		func_162(32);
	}
	if (func_161(64))
	{
		if (!func_163(4194304, -1, 1))
		{
			if (!func_163(16, -1, 1))
			{
				if (func_164(1, Local_1509.f_4))
				{
					func_165(1, Local_1509.f_4);
				}
			}
		}
	}
	func_166();
}

void func_70(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_167(uParam0))
	{
		return -1;
	}
	iVar0 = func_168(uParam0, uParam0->f_9);
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
			iVar0 = func_168(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_72(int iParam0)
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

void func_73(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			break;
		case 1:
			func_169(uParam0);
			break;
		case 2:
			func_169(uParam0);
			break;
		case 3:
			func_170(uParam0);
			break;
		case 4:
			func_169(uParam0);
			break;
		case 5:
			func_169(uParam0);
			break;
		case 6:
			func_170(uParam0);
			break;
		case 7:
			func_170(uParam0);
			break;
		case 8:
			func_170(uParam0);
			break;
		case 9:
			func_169(uParam0);
			break;
		default:
			func_75(uParam0);
			func_74(uParam0);
			break;
	}
}

void func_74(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_77(uParam0, iVar0);
		iVar0++;
	}
}

void func_75(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_76(uParam0, iVar0);
		iVar0++;
	}
}

void func_76(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_77(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_78(var uParam0, int iParam1)
{
	func_171(&(uParam0->f_16), iParam1);
}

void func_79(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_77(uParam0, 0);
			break;
		case 1:
		case 2:
			func_77(uParam0, 1);
			func_77(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_77(uParam0, 0);
			func_77(uParam0, 2);
			break;
		case 8:
			func_77(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_77(uParam0, 1);
			break;
		default:
			func_74(uParam0);
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_172(uParam0);
			break;
		case 1:
			func_173(uParam0);
			break;
		case 2:
			func_174(uParam0);
			break;
		case 3:
			func_175(uParam0);
			break;
		default:
			func_75(uParam0);
			func_74(uParam0);
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_82(int iParam0)
{
	if (!func_160(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

void func_83(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_176(uParam0);
			break;
		case 1:
		case 2:
			func_177(uParam0);
			break;
		case 3:
		case 4:
			func_178(uParam0);
			break;
		default:
			func_74(uParam0);
			break;
	}
	func_75(uParam0);
}

int func_84(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

int func_85(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

int func_86(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

var func_87(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_179(&Var1, uParam0) && func_180(&Var1, iParam1))
	{
		func_181(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_179(&Var1, uParam0) && func_180(&Var1, iParam1))
	{
		func_181(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_89(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_90(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_182(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_91(int iParam0)
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

int func_92(int iParam0, var uParam1, int iParam2)
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

struct<2> func_93()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_94()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			(Local_68[iVar1 /*45*/])->f_6.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_183(&(Local_1509.f_272), &(Local_1509.f_272.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_36.f_10[iVar0] = 0;
			Local_13.f_36.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_68[iVar1 /*45*/])->f_17.f_18[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_96()
{
}

void func_97()
{
	Local_1509.f_18 = func_184();
	Local_1509.f_18.f_3 = func_185();
	Local_1509.f_18.f_2 = func_186();
	Local_1509.f_18.f_1 = func_187();
}

void func_98()
{
	switch (func_188())
	{
		case 0:
			func_189(0, 1657260860);
			func_190(0, 54369366);
			func_191(0, "ANNESBURG_HUSBAND");
			break;
		case 1:
			func_189(0, 1657260860);
			func_190(0, -1676093373);
			func_191(0, "0898_A_M_M_Civ_Poor_Hispanic_AVOID_03");
			break;
		case 2:
			func_189(0, 739677348);
			if (!func_192())
			{
				func_190(0, -1089988108);
			}
			else
			{
				func_190(0, -1941645950);
			}
			break;
		case 3:
			func_189(0, 739677348);
			if (!func_192())
			{
				func_190(0, -330402688);
			}
			else
			{
				func_190(0, -1707839135);
			}
			break;
		case 4:
			func_189(0, -460918927);
			func_190(0, 54369366);
			func_191(0, "0871_A_F_M_Civ_White_AVOID_03");
			break;
		case 5:
			func_189(0, -1993145727);
			if (!func_192())
			{
				func_190(0, -613035313);
			}
			else
			{
				func_190(0, 864297986);
			}
			break;
		case 6:
			func_189(0, -1993145727);
			if (!func_192())
			{
				func_190(0, -2007618391);
			}
			else
			{
				func_190(0, 36520277);
			}
			break;
		default:
			func_189(0, -460918927);
			func_190(0, 54369366);
			break;
	}
	func_189(1, func_193(997958153 /* GXTEntry: "Riding" */, 1));
	switch (func_194())
	{
		case 0:
			func_195(2, 7, joaat("a_c_wolf_medium"));
			func_196(7);
			func_196(6);
			func_196(5);
			break;
		case 1:
			func_195(2, 5, joaat("a_c_cougar_01"));
			func_196(5);
			func_196(4);
			break;
		case 2:
			func_195(2, 4, joaat("a_c_bear_01"));
			func_196(4);
			func_196(3);
			break;
		case 3:
			func_195(2, 7, joaat("a_c_coyote_01"));
			func_196(7);
			func_196(6);
			func_196(5);
			break;
	}
	func_197(0, 1.08f, -0.25f, 4f, 0f, 0);
	switch (func_198())
	{
		case 0:
			func_197(2, -4.57f, 1.56f, 1.33f, 0f, 0);
			func_197(3, -4.7f, -1.28f, 1.12f, 0f, 0);
			func_197(4, -4.78f, 3.28f, 1.49f, 0f, 0);
			func_197(5, -6.95f, 0.88f, 1.91f, 0f, 0);
			func_197(6, -4.13f, -4.46f, 0.52f, 0f, 0);
			func_197(7, -8.1f, -1.52f, 1.96f, 0f, 0);
			func_197(1, 2146.479f, 1699.756f, 126.1787f, 0f, 1);
			break;
		case 1:
			func_197(2, -4.57f, 1.56f, 1.33f, 0f, 0);
			func_197(3, -4.7f, -1.28f, 1.12f, 0f, 0);
			func_197(4, -4.78f, 3.28f, 1.49f, 0f, 0);
			func_197(5, -6.95f, 0.88f, 1.91f, 0f, 0);
			func_197(6, -4.13f, -4.46f, 0.52f, 0f, 0);
			func_197(7, -8.1f, -1.52f, 1.96f, 0f, 0);
			func_197(1, 2196.458f, -65.12277f, 51.69089f, 0f, 1);
			break;
		case 2:
			func_197(2, 3.19f, 0.32f, 1.46f, 0f, 0);
			func_197(3, 2.88f, 1.95f, 1.41f, 0f, 0);
			func_197(4, 3.74f, -1.75f, 1.54f, 0f, 0);
			func_197(5, 4.72f, 0f, 1.58f, 0f, 0);
			func_197(6, 4.73f, 1.67f, 1.49f, 0f, 0);
			func_197(7, 2.6f, -4.08f, 1.72f, 0f, 0);
			func_197(1, -1026.511f, -763.9223f, 59.91287f, 90f, 1);
			break;
		case 3:
			func_197(2, 6.91f, -0.98f, 1.76f, 0f, 0);
			func_197(3, 5.16f, 2.39f, 1.82f, 0f, 0);
			func_197(4, 2.81f, -3.19f, 1.5f, 0f, 0);
			func_197(5, 2.25f, 4.66f, 1.82f, 0f, 0);
			func_197(6, -8.66f, 3.67f, 1.46f, 0f, 0);
			func_197(7, -5.86f, -5f, 1.1f, 0f, 0);
			func_197(1, -1131.267f, -188.0226f, 89.48042f, -90f, 1);
			break;
		case 4:
			func_197(2, 3.19f, 0.32f, 1.46f, 0f, 0);
			func_197(3, 2.88f, 1.95f, 1.41f, 0f, 0);
			func_197(4, 3.74f, -1.75f, 1.54f, 0f, 0);
			func_197(5, 4.72f, 0f, 1.58f, 0f, 0);
			func_197(6, 4.73f, 1.67f, 1.49f, 0f, 0);
			func_197(7, 2.6f, -4.08f, 1.72f, 0f, 0);
			func_197(1, -1378.722f, -486.0876f, 119.948f, -132.96f, 1);
			break;
		case 5:
			func_197(2, 3.19f, 0.32f, 1.46f, 0f, 0);
			func_197(3, 2.88f, 1.95f, 1.41f, 0f, 0);
			func_197(4, 3.74f, -1.75f, 1.54f, 0f, 0);
			func_197(5, 4.72f, 0f, 1.58f, 0f, 0);
			func_197(6, 4.73f, 1.67f, 1.49f, 0f, 0);
			func_197(7, 2.6f, -4.08f, 1.72f, 0f, 0);
			func_197(1, -1026.219f, -447.3527f, 88.40855f, -90f, 1);
			break;
		case 6:
			func_197(2, 6.91f, -0.98f, 1.76f, 0f, 0);
			func_197(3, 5.16f, 2.39f, 1.82f, 0f, 0);
			func_197(4, 2.81f, -3.19f, 1.5f, 0f, 0);
			func_197(5, 2.25f, 4.66f, 1.82f, 0f, 0);
			func_197(6, -8.66f, 3.67f, 1.46f, 0f, 0);
			func_197(7, -5.86f, -5f, 1.1f, 0f, 0);
			func_197(1, -305.0638f, 186.1677f, 62.79143f, 0f, 1);
			break;
		case 7:
			func_197(2, 6.91f, -0.98f, 1.76f, 0f, 0);
			func_197(3, 5.16f, 2.39f, 1.82f, 0f, 0);
			func_197(4, 2.81f, -3.19f, 1.5f, 0f, 0);
			func_197(5, 2.25f, 4.66f, 1.82f, 0f, 0);
			func_197(6, -8.66f, 3.67f, 1.46f, 0f, 0);
			func_197(7, -5.86f, -5f, 1.1f, 0f, 0);
			func_197(1, -474.993f, 320.4474f, 44.2365f, 90f, 1);
			break;
		case 8:
			func_197(2, 6.91f, -0.98f, 1.76f, 0f, 0);
			func_197(3, 5.16f, 2.39f, 1.82f, 0f, 0);
			func_197(4, 2.81f, -3.19f, 1.5f, 0f, 0);
			func_197(5, 2.25f, 4.66f, 1.82f, 0f, 0);
			func_197(6, -8.66f, 3.67f, 1.46f, 0f, 0);
			func_197(7, -5.86f, -5f, 1.1f, 0f, 0);
			func_197(1, -1309.068f, -1355.282f, 89.12616f, -90f, 1);
			break;
		case 9:
			func_197(2, -2.15f, 4.74f, 1.51f, 0f, 0);
			func_197(3, -3.55f, 3.19f, 1.12f, 0f, 0);
			func_197(4, -4.36f, -0.15f, 0.53f, 0f, 0);
			func_197(5, -1.88f, -3.92f, 0.25f, 0f, 0);
			func_197(6, -5.79f, 0.23f, 0.51f, 0f, 0);
			func_197(7, -2.47f, 8.37f, 2.07f, 0f, 0);
			func_197(1, -1558.919f, 1680.141f, 234.3666f, -90f, 1);
			break;
	}
}

void func_99()
{
	switch (func_198())
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, -2.79f, -2.23f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 3:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, 1.25f, 1.2f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 4:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, -2.79f, -2.23f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 5:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, 1.16f, 0.69f, 3.01f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 6:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, 1.25f, 1.2f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 7:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, 1.25f, 1.2f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 8:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, -2.79f, -2.23f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 9:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, -2.79f, -2.23f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
	}
}

void func_100()
{
	switch (func_198())
	{
		case 0:
			func_201(0, 0, -3.98f, 0.9f, 1.12f, 5f, 260, 1);
			break;
	}
}

void func_101(int iParam0)
{
	func_202(&(Local_1509.f_18.f_6), iParam0);
}

int func_102(int iParam0)
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

bool func_103(var uParam0, int iParam1)
{
	return func_203(uParam0->f_16, iParam1);
}

void func_104(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

void func_105(int iParam0)
{
	if (!func_113(iParam0))
	{
		func_202(&(Local_13.f_1), iParam0);
	}
}

bool func_106(int iParam0)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	return (func_204(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_107(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

int func_108(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return 1;
	}
	if (func_153(Local_1509.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_1509.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_205(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_133(128);
	}
	else if (!func_112(128, 255))
	{
		Local_13.f_3.f_1 = func_206(Param0);
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

bool func_109(int iParam0)
{
	return iParam0 != 0;
}

void func_110(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_111(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

bool func_112(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_159(&(Local_68[iParam1 /*45*/]), iParam0);
}

bool func_113(int iParam0)
{
	return func_159(Local_13.f_1, iParam0);
}

int func_114()
{
	return 1;
}

void func_115()
{
}

int func_116()
{
	if (func_161(512))
	{
		if (!STREAMING::_0x9427C94D2E4094A4(-493351432, 0))
		{
			return 0;
		}
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_13.f_7.f_16))
		{
			Local_13.f_7.f_16 = TASK::CREATE_SCENARIO_POINT(-493351432, func_207(1) - Vector(0.5f, 0f, 0f), func_208(1), 0, 0, 0);
		}
	}
	return 1;
}

int func_117()
{
	bool bVar0;

	if (!func_209(&bVar0))
	{
		if (bVar0)
		{
			func_210();
		}
		return 0;
	}
	if (!func_211(&bVar0))
	{
		if (bVar0)
		{
			func_210();
		}
		return 0;
	}
	return 1;
}

void func_118()
{
}

void func_119()
{
	if (!func_113(32) && func_212(32))
	{
		func_105(32);
	}
	if (!func_113(64) && func_212(64))
	{
		func_105(64);
	}
	if (!func_113(16) && func_213(16))
	{
		func_105(16);
	}
	if ((!func_113(2048) && func_212(2048)) && !func_212(4096))
	{
		func_105(2048);
	}
}

void func_120()
{
	bool bVar0;

	if (!bVar0 && func_113(16))
	{
		func_107(1);
		return;
	}
	if (func_113(2048) && !func_212(4096))
	{
		func_107(6);
		return;
	}
}

void func_121()
{
}

int func_122()
{
	if (func_214())
	{
		if (Local_13.f_7.f_15 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_15, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 5000)
			{
				return 1;
			}
		}
		else
		{
			Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	func_215();
	Local_13.f_7.f_9 = func_216(0, 150f, 0);
	switch (func_217())
	{
		case 0:
			switch (func_218())
			{
				case 0:
					func_219();
					break;
				case 1:
					func_220();
					break;
				case 2:
					func_221();
					break;
				case 4:
					func_222();
					break;
				case 5:
					func_223();
					break;
				case 3:
					func_224();
					break;
			}
			break;
		case 1:
			switch (func_225())
			{
				case 0:
					switch (func_218())
					{
						case 0:
							func_226();
							break;
						case 1:
							func_227();
							break;
						case 2:
							func_228();
							break;
						case 4:
							func_229();
							break;
						case 5:
							func_230();
							break;
						case 3:
							func_231();
							break;
					}
					break;
				case 1:
					switch (func_218())
					{
						case 0:
							func_232();
							break;
						case 1:
							func_233();
							break;
						case 2:
							func_234();
							break;
						case 4:
							func_235();
							break;
						case 5:
							func_236();
							break;
						case 3:
							func_237();
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_123()
{
}

int func_124()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_13.f_7.f_16))
	{
		TASK::_0x81948DFE4F5A0283(Local_13.f_7.f_16);
	}
	return 1;
}

void func_125(int iParam0)
{
	if (func_67(iParam0))
	{
		func_238(&(Local_1509.f_7), iParam0);
	}
}

int func_126(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_160(iParam0))
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_171(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_240(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_127(int iParam0)
{
	if (!func_67(iParam0))
	{
		func_202(&(Local_1509.f_7), iParam0);
	}
}

void func_128()
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
				func_241(iVar0);
				break;
			case -1315570756:
				func_242(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_243(iVar0);
		iVar0++;
	}
}

void func_129()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1509.f_480 >= 8)
		{
			Local_1509.f_480 = 0;
		}
		func_245(func_244(Local_1509.f_480));
		Local_1509.f_480++;
		iVar0++;
	}
}

void func_130(int iParam0)
{
	if (Local_1509.f_8 != iParam0)
	{
		Local_1509.f_8 = iParam0;
	}
}

int func_131()
{
	switch (Local_1509.f_18.f_4)
	{
		case 0:
			if (func_161(512))
			{
				if (!STREAMING::_0x9427C94D2E4094A4(-493351432, 0))
				{
					return 0;
				}
			}
			if (!func_246())
			{
				return 0;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4))
				{
					Local_1509.f_18.f_7 = ANIMSCENE::_CREATE_ANIM_SCENE(func_247(), 0, func_248(), true, true);
					Local_13.f_7.f_4 = NETWORK::_0xE0D73CDDEA79DDCD(Local_1509.f_18.f_7);
				}
				if (!ANIMSCENE::_0x25557E324489393C(Local_1509.f_18.f_7))
				{
					func_210();
					return 0;
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_1509.f_18.f_7);
				}
			}
			else
			{
				return NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4);
			}
			Local_1509.f_18.f_4 = 1;
			return 0;
		case 1:
			if (!ANIMSCENE::_0x477122B8D05E7968(Local_1509.f_18.f_7, 1, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_132()
{
	bool bVar0;

	bVar0 = false;
	if (!func_249())
	{
		bVar0 = true;
	}
	if (!func_250())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_133(int iParam0)
{
	if (!func_112(iParam0, 255))
	{
		func_202(Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/], iParam0);
	}
}

void func_134(var uParam0)
{
	*uParam0 = 0;
}

void func_135()
{
}

int func_136()
{
	return 1;
}

int func_137(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_138()
{
	if (!func_67(1))
	{
		func_251(Local_1509.f_9);
		func_127(1);
	}
}

void func_139()
{
	func_252();
	func_253();
	func_254();
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_255(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_225() == 0)
			{
				if (func_217() == 1)
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_repeater_carbine"), 0, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_repeater_carbine"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
				}
			}
			else
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_melee_torch"), 1, true, false, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_melee_torch"), false, 1, true, false);
			}
			PED::SET_PED_CAN_BE_TARGETTED(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 336, true);
			TASK::_0xE8C296B75EACC357(iVar0, 0f);
			if (func_217() == 0)
			{
				PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			}
			if (func_217() == 1)
			{
				PED::_0xA762C9D6CF165E0D(iVar0, "OverloadMostInjuredBodyPart", "LeftLeg", -1);
			}
		}
	}
	iVar1 = 2;
	while (iVar1 <= 7)
	{
		func_256(iVar1);
		iVar1++;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4))
		{
			Local_1509.f_18.f_7 = NETWORK::_0xD7F6781A0ABAF6FB(Local_13.f_7.f_4);
			if (!ANIMSCENE::_0x25557E324489393C(Local_1509.f_18.f_7))
			{
			}
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_4))
	{
		func_257();
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1509.f_18.f_7, Local_1509.f_15, 0f, 0f, func_258(), 2);
		ANIMSCENE::START_ANIM_SCENE(Local_1509.f_18.f_7);
	}
	iVar2 = func_255(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_13.f_7.f_16))
			{
				PHYSICS::_0x06AADE17334F7A40(iVar2, func_259());
				TASK::_TASK_USE_SCENARIO_POINT(iVar2, Local_13.f_7.f_16, 0, 0, 0, 1, 0, 0, -1082130432, 0);
			}
		}
	}
	if (func_260())
	{
		func_261();
	}
	func_262(60f);
	func_263(35f, 75f, 1, 1077936128 /* Float: 3f */, 0);
	func_264(1065353216 /* Float: 1f */, 5f);
	func_266(-432403087, func_265(), 0f, 0f, 0f, 10f, 10f, 10f);
	func_266(-1612834106, func_265() + Vector(0f, 10f, 10f), 0f, 0f, 0f, 10f, 10f, 10f);
	func_267(func_255(0));
	func_267(func_255(2));
	func_267(func_255(3));
	func_268(0, -1393798041);
	func_268(1, -1030655937);
	func_268(2, -1315007749);
	func_269(0, 0);
	func_269(1, 1);
}

void func_141()
{
	func_270();
}

void func_142()
{
}

void func_143()
{
	float fVar0;

	if (func_153(Local_1509.f_15))
	{
		return;
	}
	if (func_271())
	{
		return;
	}
	if (func_272(Local_1509.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_1509.f_15);
		if (fVar0 < 200f)
		{
			func_133(4096);
		}
		else if (fVar0 < 400f)
		{
			func_273(4096);
			func_133(2048);
		}
		else
		{
			func_273(4096);
			func_273(2048);
		}
	}
}

void func_144()
{
	func_274();
	func_275();
	func_276();
	func_277();
	func_278();
}

void func_145()
{
	if (func_279())
	{
		func_133(8);
	}
	else
	{
		func_273(8);
	}
}

void func_146()
{
	int iVar0;

	func_280();
	func_281();
	func_282(0);
	func_283();
	func_284();
	func_285();
	func_286();
	func_287();
	func_288();
	func_289();
	func_290();
	if (func_291() > 1 && func_291() < 3)
	{
		func_292(40f);
	}
	switch (func_217())
	{
		case 0:
			switch (func_291())
			{
				case 0:
					func_293();
					break;
				case 1:
					func_294();
					break;
				case 2:
					func_295();
					break;
				case 4:
					func_296();
					break;
				case 5:
					func_297();
					break;
				case 3:
					func_298();
					break;
			}
			break;
		case 1:
			switch (func_225())
			{
				case 0:
					switch (func_291())
					{
						case 0:
							func_299();
							break;
						case 1:
							func_300();
							break;
						case 2:
							func_301();
							break;
						case 4:
							func_302();
							break;
						case 5:
							func_303();
							break;
						case 3:
							func_304();
							break;
					}
					break;
				case 1:
					switch (func_291())
					{
						case 0:
							func_305();
							break;
						case 1:
							func_306();
							break;
						case 2:
							func_307();
							break;
						case 4:
							func_308();
							break;
						case 5:
							func_309();
							break;
						case 3:
							func_310();
							break;
					}
					break;
			}
			break;
	}
	if (!func_161(16))
	{
		if (func_311() || func_312())
		{
			func_101(16);
			iVar0 = 2;
			while (iVar0 <= 7)
			{
				func_313(iVar0);
				iVar0++;
			}
		}
	}
	else if (!(func_311() || func_312()))
	{
		func_162(16);
	}
}

void func_147()
{
	if (!func_112(8, 255))
	{
		func_133(16);
	}
	else
	{
		func_273(16);
	}
}

void func_148()
{
	int iVar0;

	Local_1509.f_6 = -1;
	Local_1509.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1509.f_5 = (Local_1509.f_5 || Local_68[iVar0 /*45*/]) // PointerArith;
			Local_1509.f_6 = (Local_1509.f_6 && Local_68[iVar0 /*45*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_149()
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_4))
		{
			iVar0 = NETWORK::_0xD7F6781A0ABAF6FB(Local_13.f_7.f_4);
			ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
		}
	}
	iVar1 = func_255(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(NETWORK::PED_TO_NET(iVar1)))
	{
		PED::_0x24C82EF607105FAA(iVar1, joaat("timid"));
	}
	if (func_161(32))
	{
		PED::REMOVE_RELATIONSHIP_GROUP(Local_1509.f_18.f_112);
		func_162(32);
	}
	return 1;
}

void func_150()
{
	func_314();
}

void func_151(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST((Local_1509.f_132.f_7[iParam0 /*11*/])->f_1))
	{
		MAP::REMOVE_BLIP(&((Local_1509.f_132.f_7[iParam0 /*11*/])->f_1));
	}
}

bool func_152(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1509.f_256, iParam0);
}

int func_153(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_154(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_155(var uParam0)
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

bool func_156(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_157(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_316(func_315(Param0));
	iVar1 = func_317(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_318(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_158(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_319(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_320(iVar0);
}

bool func_159(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_160(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_161(int iParam0)
{
	return func_159(Local_1509.f_18.f_6, iParam0);
}

void func_162(int iParam0)
{
	func_238(&(Local_1509.f_18.f_6), iParam0);
}

int func_163(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
		{
			return 0;
		}
	}
	return func_159((Local_68[iParam1 /*45*/])->f_1, iParam0);
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_321(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = func_322(iParam1);
	return func_323(iVar0, iParam0);
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_321(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_322(iParam1);
	func_324(iVar0, iParam0);
}

void func_166()
{
	if (func_161(524288))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
		func_162(524288);
	}
}

int func_167(var uParam0)
{
	if (func_39(*uParam0))
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

int func_168(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_325(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_326(iParam1)) - 1);
	}
	bVar2 = func_39(*uParam0);
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

void func_169(var uParam0)
{
	func_76(uParam0, 0);
	func_76(uParam0, 1);
	func_76(uParam0, 3);
	func_74(uParam0);
}

void func_170(var uParam0)
{
	func_75(uParam0);
	func_327(uParam0, 0, 3);
}

void func_171(var uParam0, int iParam1)
{
	func_328(uParam0, iParam1);
}

void func_172(var uParam0)
{
	func_76(uParam0, 0);
	func_77(uParam0, 0);
	func_77(uParam0, 1);
	func_77(uParam0, 2);
}

void func_173(var uParam0)
{
	func_76(uParam0, 1);
	func_74(uParam0);
}

void func_174(var uParam0)
{
	func_76(uParam0, 2);
	func_77(uParam0, 3);
}

void func_175(var uParam0)
{
	func_76(uParam0, 3);
	func_77(uParam0, 4);
}

void func_176(var uParam0)
{
	func_77(uParam0, 0);
	func_77(uParam0, 1);
}

void func_177(var uParam0)
{
	func_77(uParam0, 2);
	func_77(uParam0, 3);
}

void func_178(var uParam0)
{
	func_77(uParam0, 4);
	func_77(uParam0, 5);
}

bool func_179(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_180(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_181(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_182(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

void func_183(var uParam0, var uParam1)
{
	func_329(uParam0);
	func_330(uParam0);
	func_331(uParam0, 1);
	func_332(uParam0, 1);
	func_333(uParam1);
	func_330(uParam1);
	func_334(uParam1);
	func_335(uParam1, 1);
	func_336(uParam1, 1);
}

int func_184()
{
	switch (func_198())
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_185()
{
	switch (func_198())
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_186()
{
	int iVar0;

	iVar0 = func_337();
	if (func_185() == 1)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_187()
{
	switch (func_217())
	{
		case 1:
			if (func_188() >= 4)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 0:
			return 0;
	}
	return 0;
}

int func_188()
{
	return Local_1509.f_4;
}

void func_189(int iParam0, int iParam1)
{
	(Local_1509.f_132.f_7[iParam0 /*11*/])->f_3 = iParam1;
}

void func_190(int iParam0, int iParam1)
{
	(Local_1509.f_132.f_7[iParam0 /*11*/])->f_4 = iParam1;
}

void func_191(int iParam0, char* sParam1)
{
	(Local_1509.f_132.f_7[iParam0 /*11*/])->f_10 = sParam1;
}

int func_192()
{
	switch (func_198())
	{
		case 9:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_193(int iParam0, int iParam1)
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

int func_194()
{
	return Local_1509.f_18.f_2;
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		func_189(func_338(iVar0), iParam2);
		iVar0++;
	}
}

void func_196(int iParam0)
{
	func_339(iParam0, 4);
}

void func_197(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	(Local_1509.f_132.f_7[iParam0 /*11*/])->f_6 = { vParam1 };
	(Local_1509.f_132.f_7[iParam0 /*11*/])->f_5 = fParam4;
	if (bParam5)
	{
		func_202(&((Local_1509.f_132.f_7[iParam0 /*11*/])->f_2), 2);
	}
	else
	{
		func_238(&((Local_1509.f_132.f_7[iParam0 /*11*/])->f_2), 2);
	}
}

int func_198()
{
	return Local_1509.f_2;
}

void func_199(int iParam0, int iParam1)
{
	func_340(0, iParam0, iParam1);
}

void func_200(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	func_341(0, iParam0, vParam1, fParam4, iParam5);
}

void func_201(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7)
{
	((*Local_1509.f_409[iParam0 /*29*/])[iParam1 /*7*/])->f_1 = iParam6;
	((*Local_1509.f_409[iParam0 /*29*/])[iParam1 /*7*/])->f_2 = iParam7;
	((*Local_1509.f_409[iParam0 /*29*/])[iParam1 /*7*/])->f_3 = { vParam2 };
	((*Local_1509.f_409[iParam0 /*29*/])[iParam1 /*7*/])->f_6 = fParam5;
}

void func_202(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_203(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_204(int iParam0)
{
	int iVar0;

	if (!func_160(iParam0))
	{
		return false;
	}
	iVar0 = func_342(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_205(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_206(struct<17> Param0)
{
	var uVar0;

	func_205(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

Vector3 func_207(int iParam0)
{
	return (Local_1509.f_132.f_7[iParam0 /*11*/])->f_6;
}

float func_208(int iParam0)
{
	return (Local_1509.f_132.f_7[iParam0 /*11*/])->f_5;
}

int func_209(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(8))
	{
		*uParam0 = 1;
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (func_343(iVar2, 4))
		{
		}
		else if (!func_344(iVar2, uParam0, &bVar1))
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

void func_210()
{
	func_107(2);
}

int func_211(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	iVar0 = 1;
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(iVar0))
	{
		*bParam0 = 1;
		return 0;
	}
	bVar4 = false;
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { Local_1509.f_15 };
	iVar11 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar3 = func_345(iVar1, iVar2);
			if (iVar3 != 0 || func_346(iVar2))
			{
				if (MISC::IS_BIT_SET((Local_1509.f_256.f_1[iVar1 /*14*/])->f_2, iVar2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_33[iVar1 /*2*/][iVar2]))
				{
					vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar8, 0f, func_347(iVar1, iVar2)) };
					if (func_346(iVar2))
					{
						iVar11 = PED::_0x9641A9A20310F6B8(((Local_1509.f_256.f_1[iVar1 /*14*/])->f_4[iVar2 /*9*/])->f_2, vVar5, 0f, 0f, 0f, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							*bParam0 = 1;
						}
						else
						{
							(*Local_13.f_33[iVar1 /*2*/])[iVar2] = NETWORK::OBJ_TO_NET(iVar11);
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_33[iVar1 /*2*/][iVar2]))
							{
								*bParam0 = 1;
								return 0;
							}
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							ENTITY::_0x9587913B9E772D29(iVar11, 0);
						}
					}
					else if (!func_348((*Local_13.f_33[iVar1 /*2*/])[iVar2], iVar3, vVar5, 1, 0))
					{
						*bParam0 = 1;
					}
					else
					{
						iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_33[iVar1 /*2*/][iVar2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							if (func_349(iVar1, iVar2))
							{
								ENTITY::_0x9587913B9E772D29(iVar11, 0);
							}
						}
					}
					return 0;
				}
				else
				{
					iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_33[iVar1 /*2*/][iVar2]);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						*bParam0 = 1;
						return 0;
					}
					ENTITY::SET_ENTITY_HEADING(iVar11, func_350(iVar1, iVar2));
					MISC::SET_BIT(&((Local_1509.f_256.f_1[iVar1 /*14*/])->f_2), iVar2);
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	if (bVar4)
	{
		return 0;
	}
	return 1;
}

bool func_212(int iParam0)
{
	return func_159(Local_1509.f_5, iParam0);
}

bool func_213(int iParam0)
{
	return func_159(Local_1509.f_6, iParam0);
}

int func_214()
{
	if (Local_13.f_7 == 6)
	{
		return (ENTITY::IS_ENTITY_DEAD(func_255(0)) || !func_351(0, 40f));
	}
	return 0;
}

void func_215()
{
	if (!func_352(4))
	{
		if (func_353(16, 0) || func_353(32, 0))
		{
			func_354(4);
		}
	}
}

int func_216(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_355(iVar0))
			{
				if (func_356(iParam0, fParam1, iVar0, 0))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_217()
{
	return Local_1509.f_18.f_3;
}

int func_218()
{
	return Local_13.f_7;
}

void func_219()
{
	int iVar0;
	bool bVar1;

	func_357();
	iVar0 = func_255(0);
	bVar1 = false;
	if (func_352(4))
	{
		if (!func_271())
		{
			func_358();
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0))
	{
		bVar1 = true;
	}
	if (func_271())
	{
		if (bVar1 || ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT"))
		{
			if (func_352(4) || func_353(1073741824 /* Float: 2f */, 1))
			{
				if (func_352(4) || !func_359(0))
				{
					func_360(1);
				}
			}
		}
	}
}

void func_220()
{
	int iVar0;

	if (func_353(32768, 0))
	{
		func_360(2);
	}
	else if (func_353(1024, 0))
	{
		func_360(4);
		iVar0 = func_361(35f);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			Local_13.f_7.f_5 = iVar0;
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_354(8);
		}
		func_362(64);
	}
}

void func_221()
{
	if (func_363(4, 0))
	{
		func_360(4);
	}
}

void func_222()
{
	int iVar0;

	if (!func_364(1103626240 /* Float: 25f */))
	{
		if (!func_359(0))
		{
			if (!func_365(10))
			{
				func_366(0, 10, 1744022339, 0);
			}
		}
	}
	if (func_353(33554432, 0))
	{
		if (func_365(10))
		{
			func_360(6);
			return;
		}
	}
	if (!func_367() || PED::IS_PED_DEAD_OR_DYING(func_255(0), true))
	{
		func_360(6);
	}
	else
	{
		if (func_353(64, 1))
		{
			if (!func_352(8))
			{
				iVar0 = func_361(35f);
				if (NETWORK::_0x255A5EF65EDA9167(iVar0))
				{
					Local_13.f_7.f_5 = iVar0;
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_354(8);
				}
			}
			else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
			{
				func_368(8);
			}
		}
		if (!func_353(16, 0))
		{
			if (func_353(128, 0))
			{
				func_360(3);
			}
		}
	}
}

void func_223()
{
	if (func_353(16, 0) || func_353(4194304, 0))
	{
		func_360(4);
	}
	else if (!func_367())
	{
		func_360(6);
	}
	else if (func_363(8388608, 0))
	{
		func_360(6);
	}
}

void func_224()
{
	int iVar0;

	if (func_353(16, 0))
	{
		func_360(4);
	}
	else if (!func_367())
	{
		func_360(6);
	}
	else if (func_363(8192, 0))
	{
		if (!func_359(0))
		{
			func_360(5);
		}
	}
	else if (func_353(64, 0))
	{
		if (!func_352(8))
		{
			iVar0 = func_361(35f);
			if (NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				Local_13.f_7.f_5 = iVar0;
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_354(8);
			}
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
		{
			func_368(8);
		}
	}
}

int func_225()
{
	return Local_1509.f_18.f_1;
}

void func_226()
{
	int iVar0;
	bool bVar1;

	func_357();
	iVar0 = func_255(0);
	bVar1 = false;
	if (func_352(4))
	{
		if (!func_271())
		{
			func_358();
		}
	}
	if (!func_352(256))
	{
		if (func_353(1073741824 /* Float: 2f */, 0))
		{
			func_354(256);
		}
	}
	if ((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0)) || func_352(4))
	{
		bVar1 = true;
	}
	if (func_271())
	{
		if (bVar1 || ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE"))
		{
			if (bVar1 || func_353(536870912, 1))
			{
				if (bVar1 || !func_359(0))
				{
					func_360(1);
				}
			}
		}
	}
}

void func_227()
{
	int iVar0;

	if (func_353(32768, 0))
	{
		func_360(2);
	}
	else if (func_353(1024, 0))
	{
		func_360(4);
		iVar0 = func_361(35f);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			Local_13.f_7.f_5 = iVar0;
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_354(8);
		}
		func_362(64);
	}
}

void func_228()
{
	if (func_363(4, 0))
	{
		func_360(4);
	}
}

void func_229()
{
	int iVar0;

	if (!func_364(1103626240 /* Float: 25f */))
	{
		if (!func_359(0))
		{
			if (!func_365(10))
			{
				func_366(0, 10, 1744022339, 0);
			}
		}
	}
	if (func_353(33554432, 0))
	{
		if (func_365(10))
		{
			func_360(6);
			return;
		}
	}
	if (!func_367() || PED::IS_PED_DEAD_OR_DYING(func_255(0), true))
	{
		func_360(6);
	}
	else
	{
		if (func_353(64, 1))
		{
			if (!func_352(8))
			{
				iVar0 = func_361(35f);
				if (NETWORK::_0x255A5EF65EDA9167(iVar0))
				{
					Local_13.f_7.f_5 = iVar0;
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_354(8);
				}
			}
			else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
			{
				func_368(8);
			}
		}
		if (!func_353(16, 0))
		{
			if (func_353(128, 0))
			{
				func_360(3);
			}
		}
	}
}

void func_230()
{
	if (func_353(16, 0) || func_353(4194304, 0))
	{
		func_360(4);
	}
	else if (!func_367())
	{
		func_360(6);
	}
	else if (func_363(8388608, 0))
	{
		func_360(6);
	}
}

void func_231()
{
	int iVar0;

	if (func_353(16, 0))
	{
		func_360(4);
	}
	else if (!func_367())
	{
		func_360(6);
	}
	else if (func_363(8192, 0))
	{
		if (!func_359(0))
		{
			func_360(5);
		}
	}
	else if (func_353(64, 0))
	{
		if (!func_352(8))
		{
			iVar0 = func_361(35f);
			if (NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				Local_13.f_7.f_5 = iVar0;
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_354(8);
			}
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
		{
			func_368(8);
		}
	}
}

void func_232()
{
	func_357();
	if (func_353(268435456, 0))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "Cower", 1))
		{
			func_360(1);
		}
	}
}

void func_233()
{
	int iVar0;

	if (func_353(32768, 0))
	{
		func_360(2);
	}
	else if (func_353(1024, 0))
	{
		func_360(3);
		iVar0 = func_361(35f);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			Local_13.f_7.f_5 = iVar0;
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_354(8);
		}
		func_362(64);
	}
}

void func_234()
{
	if (func_363(4, 0))
	{
		func_360(4);
	}
}

void func_235()
{
	int iVar0;

	if (!func_364(1103626240 /* Float: 25f */))
	{
		if (!func_359(0))
		{
			if (!func_365(10))
			{
				func_366(0, 10, 1744022339, 0);
			}
		}
	}
	if (func_353(33554432, 0))
	{
		if (func_365(10))
		{
			func_360(6);
			return;
		}
	}
	if (!func_367() || PED::IS_PED_DEAD_OR_DYING(func_255(0), true))
	{
		func_360(6);
	}
	else
	{
		if (func_353(64, 1))
		{
			if (!func_352(8))
			{
				iVar0 = func_361(35f);
				if (NETWORK::_0x255A5EF65EDA9167(iVar0))
				{
					Local_13.f_7.f_5 = iVar0;
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_354(8);
				}
			}
			else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
			{
				func_368(8);
			}
		}
		if (!func_353(16, 0))
		{
			if (func_353(128, 0))
			{
				func_360(3);
			}
		}
	}
}

void func_236()
{
	if (func_353(16, 0) || func_353(4194304, 0))
	{
		func_360(4);
	}
	else if (!func_367())
	{
		func_360(6);
	}
	else if (func_363(8388608, 0))
	{
		func_360(6);
	}
}

void func_237()
{
	int iVar0;

	if (func_353(16, 0))
	{
		func_360(4);
	}
	else if (!func_367())
	{
		func_360(6);
	}
	else if (func_363(8192, 0))
	{
		if (!func_359(0))
		{
			func_360(5);
		}
	}
	else if (func_353(64, 0))
	{
		if (!func_352(8))
		{
			iVar0 = func_361(35f);
			if (NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				Local_13.f_7.f_5 = iVar0;
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_354(8);
			}
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
		{
			func_368(8);
		}
	}
}

void func_238(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_239(int iParam0)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_204(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_240(var uParam0, int iParam1)
{
	func_369(uParam0, iParam1);
}

void func_241(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_370(&Var0, iParam0))
			{
				func_371(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_242(int iParam0)
{
}

void func_243(int iParam0)
{
}

int func_244(int iParam0)
{
	return iParam0;
}

void func_245(int iParam0)
{
	int iVar0;

	if (func_372(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_373(iParam0, func_244(iVar0)))
			{
				if (!func_374(iParam0, func_244(iVar0)))
				{
					if (func_375(iParam0, iVar0))
					{
						func_376(&(Local_1509.f_480.f_19[iVar0]), 0, 0);
						func_377(iParam0, func_244(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_246()
{
	bool bVar0;

	bVar0 = true;
	switch (func_217())
	{
		case 0:
			func_378(0, &bVar0);
			break;
		case 1:
			switch (func_225())
			{
				case 0:
					func_378(1, &bVar0);
					break;
				case 1:
					func_378(4, &bVar0);
					break;
			}
			func_378(5, &bVar0);
			break;
	}
	if (!bVar0)
	{
	}
	return bVar0;
}

char* func_247()
{
	switch (func_217())
	{
		case 0:
			return "script@beat@wilderness@animalattack@re_aa_male_tree_b";
		case 1:
			switch (func_225())
			{
				case 0:
					return "script@beat@wilderness@animalattack@re_aa_male_rock_b";
				case 1:
					return "script@beat@wilderness@animalattack@re_aa_female_rock";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_248()
{
	switch (func_217())
	{
		case 0:
			return "PBL_SHOOTING";
		case 1:
			switch (func_225())
			{
				case 0:
					return "PBL_STRUGGLE";
				case 1:
					return "PBL_HELP";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_249()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET(Local_1509.f_132.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_379(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_1509.f_132.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1509.f_132.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					MISC::SET_BIT(&(Local_1509.f_132.f_3), iVar0);
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

int func_250()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (MISC::IS_BIT_SET((Local_1509.f_256.f_1[iVar0 /*14*/])->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_345(iVar0, iVar1);
				if (func_346(iVar1))
				{
					if (((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3 == 0 || !PED::_0x93FFD92F05EC32FD(((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3))
					{
						((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3 = PED::_0x91FE941F9FCFB702(((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_2, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3))
					{
						bVar2 = true;
					}
					else
					{
						MISC::SET_BIT(&((Local_1509.f_256.f_1[iVar0 /*14*/])->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @336; //curOff = 244
				}
				else
				{
					if (!MISC::IS_BIT_SET(&(Local_1509.f_256.f_1[iVar0 /*14*/]), iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(Local_1509.f_256.f_1[iVar0 /*14*/], iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @336; //curOff = 310
					}
					else
					{
						MISC::SET_BIT(&((Local_1509.f_256.f_1[iVar0 /*14*/])->f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return 0;
	}
	return 1;
}

void func_251(struct<2> Param0)
{
	if (func_317(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_317(Param0)))
	{
		STATS::_0x99230691875FC218(func_315(Param0), func_317(Param0), Global_35);
	}
}

void func_252()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_380(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_253()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_33[iVar1 /*2*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_33[iVar1 /*2*/][iVar2]);
				(Local_1509.f_256.f_1[iVar1 /*14*/])->f_4[iVar2 /*9*/] = iVar0;
			}
			else if (0 != func_345(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_254()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!func_153(((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_3))
			{
				if (!func_154((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/]))
				{
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1509.f_15, 0f, ((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_3) };
					(*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/] = GRAPHICS::_0xFA50F79257745E74(vVar2, ((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_6, ((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_2, ((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_255(int iParam0)
{
	return &(Local_1509.f_132.f_7[iParam0 /*11*/]);
}

void func_256(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_255(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::_0xFD6943B6DF77E449(iVar0, false);
			TASK::_0x9DE63896B176EA94(iVar0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 388, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
			if (func_161(32))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Local_1509.f_18.f_112);
			}
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 65, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 39, false);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 163, 3f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
			PED::SET_PED_ACCURACY(iVar0, 100);
			PED::SET_PED_COMBAT_RANGE(iVar0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, false);
			PED::SET_PED_COMBAT_MOVEMENT(iVar0, 2);
			PED::SET_COMBAT_FLOAT(iVar0, 12, 0.2f);
			vVar1 = { func_381() };
			if (!func_153(vVar1))
			{
				func_382(iVar0, vVar1);
			}
			uVar4 = func_383(iParam0);
			PED::_0xCE6B874286D640BB(iVar0, uVar4);
			PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, 0);
			iVar5 = Local_13.f_7.f_9;
			if (iVar5 < 1)
			{
				iVar5 = 1;
			}
			switch (func_194())
			{
				case 0:
					iVar6 = 150;
					iVar7 = 50;
					break;
				case 3:
					iVar6 = 100;
					iVar7 = 50;
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 43, true);
					break;
				case 1:
					iVar6 = 200;
					iVar7 = 50;
					break;
				case 2:
					iVar6 = 300;
					iVar7 = 75;
					break;
			}
			iVar6 = (iVar6 + (iVar5 * iVar7));
			ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, iVar6);
			ENTITY::_SET_ENTITY_HEALTH(iVar0, iVar6, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 263, true);
			func_384(iParam0);
		}
	}
}

void func_257()
{
	switch (func_217())
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "male", func_255(0), 0);
			break;
		case 1:
			switch (func_225())
			{
				case 0:
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "male", func_255(0), 0);
					break;
				case 1:
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "Female", func_255(0), 0);
					break;
			}
			switch (func_194())
			{
				case 0:
				case 3:
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "wolf_01", func_255(2), 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "wolf_02", func_255(3), 0);
					break;
			}
			break;
	}
}

float func_258()
{
	switch (func_198())
	{
		case 0:
			return 184.32f;
		case 1:
			return -179.28f;
		case 2:
			return 67.1f;
		case 3:
			return 57.819f;
		case 8:
			return 149.647f;
		case 9:
			return 170.64f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_259()
{
	switch (func_198())
	{
		case 0:
			return 2146.565f, 1701.607f, 127.6218f;
		case 1:
			return 2196.453f, -62.66473f, 53.34224f;
		case 2:
			return -1028.484f, -763.9722f, 61.22373f;
		case 3:
			return -1129.483f, -187.9624f, 90.61844f;
		case 4:
			return -1377.694f, -487.0783f, 121.284f;
		case 5:
			return -1024.635f, -447.3425f, 89.81026f;
		case 6:
			return -305.0812f, 188.0179f, 64.05087f;
		case 7:
			return -477.3718f, 320.4106f, 45.55801f;
		case 8:
			return -1306.86f, -1355.559f, 90.71972f;
		case 9:
			return -1556.754f, 1680.392f, 235.9928f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_260()
{
	switch (func_188())
	{
		case 2:
		case 3:
		case 5:
		case 6:
			return 1;
	}
	return 0;
}

int func_261()
{
	switch (func_188())
	{
		case 2:
			func_385(&(Local_1509.f_18.f_14), func_255(0), "RE005_MALE5", 0);
			break;
		case 3:
			func_385(&(Local_1509.f_18.f_14), func_255(0), "RE005_MALE7", 0);
			break;
		case 5:
			func_385(&(Local_1509.f_18.f_14), func_255(0), "RE005_FEMALE6", 0);
			break;
		case 6:
			func_385(&(Local_1509.f_18.f_14), func_255(0), "RE005_FEMALE2", 0);
			break;
	}
	return 1;
}

void func_262(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_386(func_338(iVar0), fParam0);
		iVar0++;
	}
}

void func_263(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_1509.f_439.f_2 = iParam2;
	Local_1509.f_439.f_9 = fParam0;
	Local_1509.f_439.f_10 = fParam1;
	Local_1509.f_439.f_8 = iParam3;
	if (bParam4)
	{
		func_202(&(Local_1509.f_439.f_12), 1);
	}
	else
	{
		func_238(&(Local_1509.f_439.f_12), 1);
	}
}

void func_264(int iParam0, float fParam1)
{
	func_202(&(Local_1509.f_439.f_12), 2);
	Local_1509.f_439.f_7 = fParam1;
	Local_1509.f_439.f_5 = iParam0;
}

Vector3 func_265()
{
	return Local_1509.f_15;
}

int func_266(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1509.f_439.f_11))
	{
		Local_1509.f_439.f_11 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("NB_Trigger");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1509.f_439.f_11))
	{
		switch (iParam0)
		{
			case -1612834106:
				VOLUME::_0x39816F6F94F385AD(Local_1509.f_439.f_11, vParam1, vParam4, vParam7);
				break;
			case -432403087:
				VOLUME::_0x5B7D7BF36D2DE18B(Local_1509.f_439.f_11, vParam1, vParam4, vParam7);
				break;
			case 665633627:
				VOLUME::_0xBCE668AAF83608BE(Local_1509.f_439.f_11, vParam1, vParam4, vParam7);
				break;
		}
		return 1;
	}
	return 0;
}

int func_267(int iParam0)
{
	if (func_387(iParam0, &(Local_1509.f_439.f_13)))
	{
		Local_1509.f_439++;
		return 1;
	}
	return 0;
}

void func_268(int iParam0, int iParam1)
{
	Local_1509.f_480.f_19[iParam0] = iParam1;
}

void func_269(int iParam0, int iParam1)
{
	MISC::SET_BIT(Local_1509.f_480.f_1[iParam0], iParam1);
}

void func_270()
{
}

bool func_271()
{
	return (func_113(32) || func_112(32, 255));
}

int func_272(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_388(iParam0, 2087069356) };
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

void func_273(int iParam0)
{
	if (func_159(&(Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/]), iParam0))
	{
		func_238(Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/], iParam0);
	}
}

void func_274()
{
	func_389();
	func_390();
}

void func_275()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_391(iVar0, bVar1, iVar2);
		func_392(iVar0, bVar1, iVar2);
		func_393(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_276()
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
	while (iVar0 < 4)
	{
		if (Local_1509.f_132.f_96 >= 8)
		{
			Local_1509.f_132.f_96 = 0;
		}
		iVar0 = Local_1509.f_132.f_96;
		Local_1509.f_132.f_96++;
		iVar7 = func_338(iVar0);
		iVar1 = &Local_1509.f_132.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_343(iVar7, 4))
		{
			func_380(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_68[iVar3 /*45*/])->f_6.f_2[iVar0] > -1f)
			{
				(Local_68[iVar3 /*45*/])->f_6.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1509.f_132.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1509.f_132.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1509.f_132.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1509.f_132.f_97), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_1509.f_132.f_97, iVar0))
		{
			if (bVar4 || !func_394(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1509.f_132.f_97), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (func_394(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_1509.f_132.f_97), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_68[iVar3 /*45*/])->f_6.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_68[iVar3 /*45*/])->f_6.f_1), iVar0);
				}
				func_395(Local_1509.f_132.f_98[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_68[iVar3 /*45*/])->f_6.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_396(Local_1509.f_132.f_98[iVar0 /*3*/]) || func_397(Local_1509.f_132.f_98[iVar0 /*3*/], 0.5f))))
			{
				func_398(Local_1509.f_132.f_98[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_68[iVar3 /*45*/])->f_6.f_1), iVar0);
			}
		}
		if (func_343(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_399(iVar7))
						{
							if (!func_344(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_400(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !func_343(iVar7, 8))
			{
				if (!func_399(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1509.f_132.f_97 != 0)
	{
		if (!func_401(1, -1))
		{
			func_402(1);
		}
	}
	else if (func_401(1, -1))
	{
		func_403(1);
	}
}

void func_277()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar10 = 255;
	iVar15 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_404();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_68[iVar15 /*45*/])->f_17.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 3)
	{
		if (Local_1509.f_272.f_126 >= 8)
		{
			Local_1509.f_272.f_126 = 0;
		}
		iVar1 = Local_1509.f_272.f_126;
		Local_1509.f_272.f_126++;
		iVar12++;
		iVar8 = func_405(iVar1);
		if (!func_406(iVar8))
		{
		}
		else if (func_407(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				func_408(iVar8);
				if (func_409(iVar8))
				{
					if (func_410(iVar8))
					{
						if (!func_411(iVar8))
						{
							func_412(iVar8);
						}
					}
					if (func_413(iVar8))
					{
						func_313(iVar8);
					}
				}
				else
				{
					if (func_414(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!func_415(iVar8, -1))
					{
						bVar2 = false;
						bVar3 = false;
						if (func_416(iVar8))
						{
							bVar2 = true;
							bVar3 = true;
						}
						else if (func_417(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_418(vVar5.x, vVar5.y, &(Local_1509.f_272), &iVar4, 0, vVar5.z))
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
												if (!Local_1509.f_272.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(func_419(&(Local_1509.f_272))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_1509.f_272.f_1 & 4 != 0)
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
							if (!Local_1509.f_272.f_1 & 256 != 0)
							{
								if ((Local_68[iVar15 /*45*/])->f_17.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_68[iVar15 /*45*/])->f_17.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(func_419(&(Local_1509.f_272))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_420(iVar8, iVar4, bVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_68[iVar15 /*45*/])->f_17.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_68[iVar15 /*45*/])->f_17.f_7), iVar8);
								}
								func_421(iVar8, 1);
								Jump @768; //curOff = 680
								if (func_422(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_68[iVar15 /*45*/])->f_17.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_68[iVar15 /*45*/])->f_17.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_68[iVar15 /*45*/])->f_17.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_68[iVar15 /*45*/])->f_17.f_7), iVar8);
								}
								if (func_423(iVar8))
								{
									if (!func_424(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!func_425(iVar8))
											{
											}
											else
											{
												func_426(iVar8);
												func_427(iVar8);
												Jump @1017; //curOff = 822
												if (func_428(iVar8))
												{
												}
												else if (iVar13 < 4)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 4)
														{
															if (&Local_1509.f_272.f_128[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_1509.f_272.f_128[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_1509.f_272.f_128[iVar8];
																Local_1509.f_272.f_128[iVar8] = &Local_1509.f_272.f_128[iVar8] + 1;
															}
															iVar14++;
															if (func_429(iVar0, &iVar11, &iVar10, &iVar9))
															{
																if (!func_430(iVar8, iVar10))
																{
																	if (func_415(iVar8, iVar0))
																	{
																		if (!func_431(iVar8, iVar11, iVar10, iVar9))
																		{
																		}
																		else
																		{
																			func_432(iVar8, iVar10);
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

void func_278()
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

	fVar0 = func_433();
	if (Local_1509.f_439.f_4)
	{
		return;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_159((Local_68[iVar1 /*45*/])->f_44, 1))
	{
		Local_1509.f_439.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_1509.f_15);
	fVar4 = Local_1509.f_439.f_9;
	fVar5 = Local_1509.f_439.f_10;
	if (func_159(Local_1509.f_439.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_1509.f_439.f_7));
		if (fVar7 > 0f)
		{
			if (func_434(Local_1509.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_1509.f_439.f_6 < 1f)
			{
				Local_1509.f_439.f_6 = (Local_1509.f_439.f_6 + fVar8);
				if (Local_1509.f_439.f_6 > 1f)
				{
					Local_1509.f_439.f_6 = 1f;
				}
			}
		}
		else if (Local_1509.f_439.f_6 > 0f)
		{
			Local_1509.f_439.f_6 = (Local_1509.f_439.f_6 - fVar8);
			if (Local_1509.f_439.f_6 < 0f)
			{
				Local_1509.f_439.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_1509.f_439.f_5) * Local_1509.f_439.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_202(&((Local_68[iVar1 /*45*/])->f_44), 1);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_1509.f_439.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_1509.f_439.f_11, false, 0))
	{
		func_202(&((Local_68[iVar1 /*45*/])->f_44), 1);
	}
	else if (Local_1509.f_439 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_435(Local_1509.f_439.f_13[iVar10 /*9*/], fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0);
			iVar10++;
		}
		if (func_436(&(Local_1509.f_439.f_13), Local_1509.f_439, Local_1509.f_439.f_8))
		{
			func_202(&((Local_68[iVar1 /*45*/])->f_44), 1);
		}
	}
	if (func_159((Local_68[iVar1 /*45*/])->f_44, 1))
	{
		Local_1509.f_439.f_4 = 1;
	}
}

int func_279()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_1509.f_14))
	{
		return 0;
	}
	return 1;
}

void func_280()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	Local_1509.f_18.f_10 = -1;
	Local_1509.f_18.f_11 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1509.f_18.f_11 = (Local_1509.f_18.f_11 || (Local_68[iVar0 /*45*/])->f_1);
			Local_1509.f_18.f_10 = (Local_1509.f_18.f_10 && (Local_68[iVar0 /*45*/])->f_1);
			if (iVar0 != iVar1)
			{
				(Local_68[iVar1 /*45*/])->f_1.f_2 = ((Local_68[iVar1 /*45*/])->f_1.f_2 || (Local_68[iVar0 /*45*/])->f_1.f_2);
				if ((Local_68[iVar0 /*45*/])->f_1.f_1 > (Local_68[iVar1 /*45*/])->f_1.f_1)
				{
					(Local_68[iVar1 /*45*/])->f_1.f_1 = (Local_68[iVar0 /*45*/])->f_1.f_1;
				}
				if ((Local_68[iVar0 /*45*/])->f_1.f_3 > (Local_68[iVar1 /*45*/])->f_1.f_3)
				{
					(Local_68[iVar1 /*45*/])->f_1.f_3 = (Local_68[iVar0 /*45*/])->f_1.f_3;
				}
				if ((Local_68[iVar0 /*45*/])->f_1.f_4 != 0)
				{
					if ((Local_68[iVar1 /*45*/])->f_1.f_4 == 0 || NETWORK::IS_TIME_MORE_THAN((Local_68[iVar0 /*45*/])->f_1.f_4, (Local_68[iVar1 /*45*/])->f_1.f_4))
					{
						(Local_68[iVar1 /*45*/])->f_1.f_4 = (Local_68[iVar0 /*45*/])->f_1.f_4;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_281()
{
	if (func_218() != func_291())
	{
		func_437(func_291(), func_218());
		func_438(Local_13.f_7);
	}
}

void func_282(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (Local_1509.f_18.f_12 == 8 || func_161(2))
	{
		return;
	}
	if (bParam0)
	{
		iVar0 = 2;
		while (iVar0 <= 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_255(iVar0)) && !PED::IS_PED_DEAD_OR_DYING(func_255(iVar0), true))
			{
				return;
			}
			iVar0++;
		}
		func_101(2);
		return;
	}
	bVar1 = false;
	iVar2 = func_255(Local_1509.f_18.f_12);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		Local_1509.f_18.f_12++;
		if (Local_1509.f_18.f_12 == 8)
		{
			func_101(2);
		}
	}
}

void func_283()
{
	int iVar0;
	int iVar1;

	if (!func_161(4))
	{
		if (func_353(16, 0))
		{
			func_101(4);
			iVar0 = func_255(0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
					PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				}
			}
			if (!func_353(4096, 0))
			{
				iVar1 = 2;
				while (iVar1 <= 7)
				{
					if (func_409(iVar1))
					{
						func_439(iVar1);
					}
					iVar1++;
				}
			}
		}
	}
}

void func_284()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 2;
	if (func_163(4096, -1, 1))
	{
		iVar2 = 2;
		while (iVar2 <= 7)
		{
			iVar0 = func_255(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (!PED::IS_PED_FLEEING(iVar0))
				{
					if (func_440(iVar0, 518218985, 1, 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, Local_1509.f_15, 4, 0, 99999f, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar0, true);
					}
				}
			}
			iVar2++;
		}
		return;
	}
	if (Local_13.f_7.f_9 >= Local_13.f_7.f_10)
	{
		switch (func_194())
		{
			case 2:
				return;
			case 1:
				iVar3 = 1;
				break;
			case 3:
				iVar3 = 2;
				break;
			case 0:
				iVar3 = 2;
				break;
		}
		if (Local_1509.f_18.f_8 <= iVar3 && Local_1509.f_18.f_8 > -1)
		{
			func_362(4096);
			iVar1 = 2;
			while (iVar1 <= 7)
			{
				iVar0 = func_255(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_440(iVar0, 518218985, 1, 0))
					{
						TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, Local_1509.f_15, 4, 0, 99999f, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar0, true);
						PED::SET_PED_COMBAT_MOVEMENT(iVar0, 1);
						func_441(iVar1, 0);
					}
				}
				iVar1++;
			}
			return;
		}
	}
}

void func_285()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_353(16, 0))
	{
		return;
	}
	if (func_161(2))
	{
		return;
	}
	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 2;
	while (iVar0 <= 7)
	{
		iVar1 = func_255(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_68[iVar2 /*45*/])->f_1.f_2, iVar0))
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), Local_1509.f_15) >= 60f)
					{
						PED::SET_PED_CONFIG_FLAG(iVar1, 263, false);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar1, Local_1509.f_15, 4, 0, 99999f, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar1, true);
						func_441(iVar0, 0);
						func_442(iVar0);
						MISC::SET_BIT(&((Local_68[iVar2 /*45*/])->f_1.f_2), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_286()
{
	int iVar0;

	if (func_353(524288, 1))
	{
		return;
	}
	iVar0 = func_255(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_443(PLAYER::PLAYER_PED_ID(), iVar0, 1))
		{
			func_362(524288);
		}
	}
}

void func_287()
{
	int iVar0;
	int iVar1;

	if (func_271())
	{
		iVar0 = Local_1509.f_18.f_8;
		Local_1509.f_18.f_8 = 0;
		iVar1 = 2;
		while (iVar1 <= 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_255(iVar1)))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(func_255(iVar1), true))
				{
					Local_1509.f_18.f_8++;
				}
				if (!func_163(16777216, -1, 1) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_255(iVar1), PLAYER::PLAYER_PED_ID(), 1, 1))
				{
					func_362(16777216);
				}
			}
			iVar1++;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (iVar0 > 0)
			{
				if (iVar0 != Local_1509.f_18.f_8)
				{
					func_354(128);
				}
			}
		}
	}
}

void func_288()
{
	int iVar0;

	iVar0 = func_255(0);
	if (!func_353(67108864, 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1890122679))
			{
				WEAPON::_0xCEF4C65DE502D367(iVar0, 1, 1, 1, 0);
				func_362(67108864);
			}
		}
	}
}

void func_289()
{
	if (!func_161(524288))
	{
		if (func_444())
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MC_SUSPENSE_HIGH");
			func_101(524288);
		}
	}
	else if (!func_444())
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
		func_162(524288);
	}
}

void func_290()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_194() == 3)
	{
		iVar1 = func_255(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iVar1, true))
			{
				iVar2 = 2;
				while (iVar2 <= 7)
				{
					iVar0 = func_255(iVar2);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar0, 1, 1))
						{
							func_445(iVar1, 0, 0);
						}
					}
					iVar2++;
				}
			}
		}
	}
}

int func_291()
{
	return Local_1509.f_18.f_5;
}

void func_292(float fParam0)
{
	if (func_161(64))
	{
		return;
	}
	if (fParam0 > 0f)
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_255(0)))
		{
			if (!func_356(0, fParam0, -1, 0))
			{
				return;
			}
		}
	}
	func_101(64);
	func_358();
	func_446();
	func_447(1, Local_1509.f_4);
}

void func_293()
{
	bool bVar0;
	int iVar1;

	func_448();
	func_449();
	func_450();
	bVar0 = func_352(4);
	if (!func_271())
	{
		if (func_451())
		{
			func_358();
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT", true, true);
			}
		}
	}
	else
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
		{
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT", true, true);
			}
		}
		if (!bVar0)
		{
			iVar1 = func_255(0);
			if (!func_353(1073741824 /* Float: 2f */, 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (!func_359(0))
					{
						func_366(0, 7, 1744022339, 0);
						func_362(1073741824 /* Float: 2f */);
					}
				}
			}
			else if (!func_359(0))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
				{
					if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT", true, true);
					}
				}
			}
		}
	}
}

void func_294()
{
	int iVar0;

	iVar0 = func_255(0);
	func_449();
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1890122679))
		{
			WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
		}
	}
	if (!func_163(32768, -1, 1))
	{
		if (func_353(32768, 0))
		{
			func_362(32768);
			return;
		}
	}
	if (!func_163(16384, -1, 1))
	{
		func_362(16384);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_366(0, 4, 1744022339, 0);
			func_452(200f);
		}
	}
	else
	{
		func_450();
		if (!func_161(1))
		{
			if (func_363(16384, 0))
			{
				func_101(1);
			}
		}
		else if ((((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0)) || func_353(16, 0)) || func_353(512, 0)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
		{
			func_362(32768);
			if (func_353(512, 0))
			{
				func_362(1024);
			}
		}
		else if (!func_353(32768, 0))
		{
			if (!func_353(256, 1))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "HANG_LOOP", 1))
					{
						func_362(256);
					}
				}
			}
			if (!func_353(16, 0))
			{
				func_453();
			}
			if (func_353(16, 0) || func_454())
			{
				if (func_359(0))
				{
				}
				else if (func_455("PBL_FALL_RECOVER", 0))
				{
					func_362(32768);
					func_366(0, 9, 291934926, 0);
				}
			}
			else if (func_352(4))
			{
				if (!func_353(512, 0))
				{
					if (func_364(1103626240 /* Float: 25f */))
					{
						if (func_456())
						{
							if (func_457())
							{
								if (func_458())
								{
									if (func_455("PBL_THANKS", 0))
									{
										func_362(512);
									}
								}
							}
						}
					}
				}
			}
		}
		else if (!func_163(32768, -1, 1))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_366(0, 9, 291934926, 0);
			}
			func_362(32768);
		}
	}
}

void func_295()
{
	int iVar0;
	int iVar1;

	func_450();
	iVar0 = func_255(0);
	if (!func_163(1, -1, 1))
	{
		if (func_353(1, 0))
		{
			if (!PED::IS_PED_RAGDOLL(iVar0))
			{
				func_362(1);
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				PED::_0xAE6004120C18DF97(iVar0, 0, 1);
				PED::SET_PED_CONFIG_FLAG(iVar0, 138, true);
				func_362(1);
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_1509.f_18.f_7))
			{
				if (!func_353(512, 0))
				{
					PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 0, false, false, false);
					PED::SET_PED_RESET_FLAG(iVar0, 29, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				PED::_0xAE6004120C18DF97(iVar0, 0, 1);
				PED::SET_PED_CONFIG_FLAG(iVar0, 138, true);
				func_362(1);
			}
		}
	}
	else
	{
		if (!func_163(2, -1, 1))
		{
			if (func_353(2, 0))
			{
				func_362(2);
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!func_459(iVar0, -2017877118))
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (!func_353(524288, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(0, func_255(1), 60000, -1, 1.5f, 1, 0, 0);
						}
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, func_265(), 0, 0, 99999f, -1, func_255(1));
						func_460(iVar0, &iVar1, 0, 0, 1, 1);
						func_362(2);
					}
				}
			}
		}
		if (!func_163(4, -1, 1))
		{
			if (func_461())
			{
				func_362(4);
			}
		}
	}
}

void func_296()
{
	int iVar0;
	int iVar1;

	func_450();
	if (func_353(16, 0))
	{
		iVar0 = func_255(0);
		if (!func_353(33554432, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_462();
		}
	}
	if (func_364(1103626240 /* Float: 25f */))
	{
		if (!func_353(128, 0))
		{
			if (!func_353(16, 0))
			{
				iVar1 = func_255(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							if (!func_353(64, 0))
							{
								func_362(64);
							}
							else if (!func_353(33554432, 0))
							{
								if (func_352(8))
								{
									if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_5), -1, -1082130432, -1082130432, -1082130432);
										func_362(128);
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

void func_297()
{
	int iVar0;
	int iVar1;

	iVar0 = func_255(0);
	if (func_353(8388608, 0))
	{
		func_362(8388608);
		return;
	}
	if ((func_353(16, 0) || func_353(4194304, 0)) || func_163(8388608, -1, 1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_359(0))
			{
				iVar1 = func_255(1);
				if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_443(iVar0, iVar1, 0)) || !PED::_IS_MOUNT_SEAT_FREE(iVar1, -1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
					PED::_0xB8B6430EAD2D2437(iVar0, 673924189);
					PED::_0x24C82EF607105FAA(iVar0, joaat("timid"));
					func_362(8388608);
				}
			}
		}
	}
	else
	{
		func_362(8388608);
	}
}

void func_298()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_255(0);
	if (func_353(16, 0))
	{
		return;
	}
	if (!func_353(8192, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_463())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (!func_359(0))
						{
							iVar2 = 255;
							PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
							iVar1 = 0;
							while (iVar1 < 32)
							{
								if (func_163(32, iVar1, 1))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
									if (NETWORK::_0x255A5EF65EDA9167(iVar2))
									{
										PED::_0xE737D5F14304A2EC(iVar0, iVar2, 120000);
									}
								}
								iVar1++;
							}
							func_462();
							func_464();
							func_362(8192);
						}
					}
				}
			}
		}
	}
	else if (!func_163(8192, -1, 1))
	{
		func_362(8192);
		func_464();
	}
}

void func_299()
{
	bool bVar0;
	int iVar1;

	func_449();
	func_450();
	bVar0 = func_352(4);
	if (!func_271())
	{
		if (func_451())
		{
			func_358();
		}
		else
		{
			func_448();
		}
	}
	else
	{
		iVar1 = func_255(0);
		if (func_260())
		{
			if (!func_353(1073741824 /* Float: 2f */, 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (!func_359(0))
					{
						func_366(0, 7, 1744022339, 0);
						func_362(1073741824 /* Float: 2f */);
					}
				}
			}
			else if (!func_353(536870912, 1))
			{
				if (func_352(256))
				{
					if (bVar0 || !func_359(0))
					{
						if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
						{
							if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE"))
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE", true, true);
							}
							else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "NO_AMMO", 1))
							{
								func_366(0, 8, 1744022339, 0);
								func_362(536870912);
							}
						}
					}
				}
			}
		}
		else if (!func_353(1073741824 /* Float: 2f */, 1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!func_359(0))
				{
					func_366(0, 4, 1744022339, 0);
					func_362(1073741824 /* Float: 2f */);
				}
			}
		}
		else if (!func_353(536870912, 1))
		{
			if (func_352(256))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
				{
					if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE"))
					{
						if (func_365(4))
						{
							if (!func_359(0))
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE", true, true);
							}
						}
					}
					else if (!func_359(0))
					{
						func_366(0, 5, 1744022339, 0);
						func_362(536870912);
					}
				}
			}
		}
	}
}

void func_300()
{
	int iVar0;

	iVar0 = func_255(0);
	func_449();
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1890122679))
		{
			WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
		}
	}
	if (!func_163(32768, -1, 1))
	{
		if (func_353(32768, 0))
		{
			func_362(32768);
			return;
		}
	}
	if (!func_163(16384, -1, 1))
	{
		func_362(16384);
		if (!func_260())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!func_353(134217728, 1))
				{
					func_366(0, 7, 1744022339, 0);
					func_452(200f);
				}
			}
		}
	}
	else
	{
		func_450();
		if (!func_161(1))
		{
			if (func_363(16384, 0))
			{
				func_101(1);
			}
		}
		else if ((((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0)) || func_353(16, 0)) || func_353(512, 0)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
		{
			func_362(32768);
			if (func_353(512, 0))
			{
				func_362(1024);
			}
		}
		else if (!func_353(32768, 0))
		{
			if (!func_353(16, 0))
			{
				func_453();
			}
			if (func_353(16, 0) || func_454())
			{
				if (func_359(0))
				{
				}
				else if (func_455("PBL_FALL_RECOVER", 0))
				{
					func_362(32768);
					func_366(0, 9, 291934926, 0);
				}
			}
			else if (!func_353(256, 0))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
				{
					if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE", true, true);
					}
				}
				if (!func_359(0))
				{
					if (func_455("PBL_COWER", "KICK_LOOP_A"))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
							WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
						}
						if (!func_260())
						{
							func_366(0, 8, 1744022339, 0);
						}
						func_362(256);
					}
				}
			}
			else if (!func_353(512, 0))
			{
				if (func_364(1103626240 /* Float: 25f */))
				{
					if (func_456())
					{
						if (func_457())
						{
							if (func_458())
							{
								if (func_455("PBL_THANKS", 0))
								{
									func_362(512);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_163(32768, -1, 1))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_366(0, 9, 291934926, 0);
			}
			func_362(32768);
		}
	}
}

void func_301()
{
	int iVar0;
	int iVar1;

	func_450();
	iVar0 = func_255(0);
	if (!func_163(1, -1, 1))
	{
		if (func_353(1, 0))
		{
			if (!PED::IS_PED_RAGDOLL(iVar0))
			{
				func_362(1);
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				func_362(1);
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_1509.f_18.f_7))
			{
				if (!func_353(512, 0))
				{
					PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 0, false, false, false);
					PED::SET_PED_RESET_FLAG(iVar0, 29, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				func_362(1);
			}
		}
	}
	else
	{
		if (!func_163(2, -1, 1))
		{
			if (func_353(2, 0))
			{
				func_362(2);
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!func_459(iVar0, -2017877118))
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (!func_353(524288, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(0, func_255(1), 60000, -1, 1.5f, 1, 0, 0);
						}
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, func_265(), 0, 0, 99999f, -1, func_255(1));
						func_460(iVar0, &iVar1, 0, 0, 1, 1);
						func_362(2);
					}
				}
			}
		}
		if (!func_163(4, -1, 1))
		{
			if (func_461())
			{
				func_362(4);
			}
		}
	}
}

void func_302()
{
	int iVar0;
	int iVar1;

	func_450();
	if (func_353(16, 0))
	{
		iVar0 = func_255(0);
		if (!func_353(33554432, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_462();
		}
	}
	if (func_364(1103626240 /* Float: 25f */))
	{
		if (!func_353(128, 0))
		{
			if (!func_353(16, 0))
			{
				iVar1 = func_255(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							if (!func_353(64, 0))
							{
								func_362(64);
							}
							else if (!func_353(33554432, 0))
							{
								if (func_352(8))
								{
									if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_5), -1, -1082130432, -1082130432, -1082130432);
										func_362(128);
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

void func_303()
{
	int iVar0;
	int iVar1;

	iVar0 = func_255(0);
	if (func_353(8388608, 0))
	{
		func_362(8388608);
		return;
	}
	if ((func_353(16, 0) || func_353(4194304, 0)) || func_163(8388608, -1, 1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_359(0))
			{
				iVar1 = func_255(1);
				if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_443(iVar0, iVar1, 0)) || !PED::_IS_MOUNT_SEAT_FREE(iVar1, -1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
					PED::_0xB8B6430EAD2D2437(iVar0, 673924189);
					PED::_0x24C82EF607105FAA(iVar0, joaat("timid"));
					func_362(8388608);
				}
			}
		}
	}
	else
	{
		func_362(8388608);
	}
}

void func_304()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_255(0);
	if (func_353(16, 0))
	{
		return;
	}
	if (!func_353(8192, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_463())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (!func_359(0))
						{
							iVar2 = 255;
							PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
							iVar1 = 0;
							while (iVar1 < 32)
							{
								if (func_163(32, iVar1, 1))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
									if (NETWORK::_0x255A5EF65EDA9167(iVar2))
									{
										PED::_0xE737D5F14304A2EC(iVar0, iVar2, 120000);
									}
								}
								iVar1++;
							}
							func_462();
							func_464();
							func_362(8192);
						}
					}
				}
			}
		}
	}
	else if (!func_163(8192, -1, 1))
	{
		func_362(8192);
		func_464();
	}
}

void func_305()
{
	int iVar0;

	func_448();
	func_449();
	func_450();
	if (!func_271())
	{
		if (func_356(0, 60f, -1, 0))
		{
			func_358();
		}
	}
	else if (!func_353(134217728, 1))
	{
		iVar0 = func_255(0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_359(0))
			{
				func_366(0, 7, 1744022339, 0);
				func_362(134217728);
			}
		}
	}
	else if (!func_353(268435456, 1))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_DEFENDING", true, false);
			func_362(268435456);
		}
	}
}

void func_306()
{
	int iVar0;

	iVar0 = func_255(0);
	func_449();
	if (func_353(32768, 1))
	{
		return;
	}
	if (!func_353(16384, 1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_353(134217728, 1))
			{
				func_366(0, 7, 1744022339, 0);
				func_452(200f);
			}
			func_362(16384);
		}
	}
	else
	{
		func_450();
		if (!func_161(1))
		{
			if (func_363(16384, 0))
			{
				func_101(1);
			}
		}
		else if ((((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0)) || func_353(16, 0)) || func_353(512, 0)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
		{
			func_362(32768);
			if (func_353(512, 0))
			{
				func_362(1024);
			}
		}
		else if (!func_353(32768, 0))
		{
			if (!func_353(16, 0))
			{
				func_453();
			}
			if (func_353(16, 0) || func_454())
			{
				if (func_359(0))
				{
				}
				else if (func_455("PBL_FALL_RECOVER", 0))
				{
					func_362(32768);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 1, 0, 0);
					}
					func_366(0, 9, 291934926, 0);
				}
			}
			else if (func_352(4))
			{
				if (!func_353(512, 0))
				{
					if (func_364(1103626240 /* Float: 25f */))
					{
						if (func_456())
						{
							if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "Cower", 1))
							{
								if (func_457())
								{
									if (func_458())
									{
										if (func_455("PBL_THANK_YOU", 0))
										{
											func_362(512);
											if (!func_353(4194304, 0))
											{
												func_362(1024);
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
		else if (!func_163(32768, -1, 1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 1, 0, 0);
			}
			func_362(32768);
		}
	}
}

void func_307()
{
	int iVar0;
	int iVar1;

	func_450();
	iVar0 = func_255(0);
	if (!func_163(1, -1, 1))
	{
		if (func_353(1, 0))
		{
			func_362(1);
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0))
			{
				func_465();
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				func_362(1);
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_1509.f_18.f_7))
			{
				func_465();
				PED::SET_PED_RESET_FLAG(iVar0, 29, true);
				PED::_0x2208438012482A1A(iVar0, false, false);
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				func_362(1);
			}
		}
	}
	else
	{
		if (!func_163(2, -1, 1))
		{
			if (func_353(2, 0))
			{
				func_362(2);
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!func_459(iVar0, -2017877118) && !PED::IS_PED_RAGDOLL(iVar0))
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (!func_353(524288, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(0, func_255(1), 60000, -1, 1.5f, 1, 0, 0);
						}
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, func_265(), 0, 0, 99999f, -1, func_255(1));
						func_460(iVar0, &iVar1, 0, 0, 1, 1);
						func_362(2);
					}
				}
			}
		}
		if (!func_163(4, -1, 1))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
			{
				if (func_461())
				{
					func_362(4);
				}
			}
		}
	}
}

void func_308()
{
	int iVar0;
	int iVar1;

	func_450();
	if (func_353(16, 0))
	{
		iVar0 = func_255(0);
		if (!func_353(33554432, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_462();
		}
	}
	if (func_364(1103626240 /* Float: 25f */))
	{
		if (!func_353(128, 0))
		{
			if (!func_353(16, 0))
			{
				iVar1 = func_255(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							if (!func_353(64, 0))
							{
								func_362(64);
							}
							else if (!func_353(33554432, 0))
							{
								if (func_352(8))
								{
									if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_5), -1, -1082130432, -1082130432, -1082130432);
										func_362(128);
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

void func_309()
{
	int iVar0;
	int iVar1;

	iVar0 = func_255(0);
	if (func_353(8388608, 0))
	{
		func_362(8388608);
		return;
	}
	if ((func_353(16, 0) || func_353(4194304, 0)) || func_163(8388608, -1, 1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_359(0))
			{
				iVar1 = func_255(1);
				if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_443(iVar0, iVar1, 0)) || !PED::_IS_MOUNT_SEAT_FREE(iVar1, -1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
					PED::_0xB8B6430EAD2D2437(iVar0, 673924189);
					PED::_0x24C82EF607105FAA(iVar0, joaat("timid"));
					func_362(8388608);
				}
			}
		}
	}
	else
	{
		func_362(8388608);
	}
}

void func_310()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_255(0);
	if (func_353(16, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
	{
		if (!func_353(128, 0))
		{
			if (!func_353(16, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							if (!func_353(64, 0))
							{
								func_362(64);
							}
							else if (!func_353(33554432, 0))
							{
								if (func_352(8))
								{
									if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_5), -1, -1082130432, -1082130432, -1082130432);
										func_362(128);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!func_353(8192, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_463())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (!func_359(0))
						{
							iVar2 = 255;
							PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
							iVar1 = 0;
							while (iVar1 < 32)
							{
								if (func_163(32, iVar1, 1))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
									if (NETWORK::_0x255A5EF65EDA9167(iVar2))
									{
										PED::_0xE737D5F14304A2EC(iVar0, iVar2, 120000);
									}
								}
								iVar1++;
							}
							func_462();
							func_464();
							func_362(8192);
						}
					}
				}
			}
		}
	}
	else if (!func_163(8192, -1, 1))
	{
		func_362(8192);
		func_464();
	}
}

int func_311()
{
	return func_466(1, 255);
}

int func_312()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || _NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return 1;
	}
	return 0;
}

void func_313(int iParam0)
{
	SCRIPTS::_0xDE544B7EC0C187CC((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_9[iParam0]);
}

void func_314()
{
}

int func_315(var uParam0, var uParam1)
{
	return uParam0;
}

int func_316(int iParam0)
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

int func_317(struct<2> Param0)
{
	return func_467(Param0);
}

void func_318(struct<2> Param0, var uParam2)
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
	switch (func_315(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_469(func_468(Param0));
			iVar5 = func_470(iVar4);
			if (!func_471(iVar5, 0))
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

int func_319(int iParam0, int iParam1)
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

void func_320(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_472(&Var0);
}

int func_321(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_473(iParam0) - 1))
	{
		return 0;
	}
	return 1;
}

int func_322(int iParam0)
{
	return iParam0 + 8;
}

bool func_323(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_388(iParam1, 896190569) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	return MISC::IS_BIT_SET(iVar2, iParam0);
}

void func_324(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_388(iParam1, 896190569) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

int func_325(int iParam0)
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

int func_326(int iParam0)
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

void func_327(var uParam0, int iParam1, int iParam2)
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
		func_77(uParam0, iVar0);
		iVar0++;
	}
}

void func_328(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_329(var uParam0)
{
	func_474(uParam0, 0);
	func_475(uParam0, 0);
	func_331(uParam0, 1);
	func_476(uParam0, 1);
	func_477(uParam0, 0);
	func_478(uParam0, 1);
	func_479(uParam0, 1, 1, 1);
}

void func_330(var uParam0)
{
	func_474(uParam0, 0);
	func_475(uParam0, 0);
	func_331(uParam0, 0);
	func_477(uParam0, 0);
	func_479(uParam0, 1, 1, 1);
}

void func_331(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_1), 256);
	}
	else
	{
		func_202(&(uParam0->f_1), 256);
	}
}

void func_332(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_1), 4);
	}
	else
	{
		func_202(&(uParam0->f_1), 4);
	}
}

void func_333(var uParam0)
{
	func_481(uParam0, (func_480(uParam0) - 6f));
	func_482(uParam0, 1);
}

void func_334(var uParam0)
{
	func_483(uParam0, 1);
	func_484(uParam0, 1);
	func_485(uParam0, 1);
}

void func_335(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_1), 131072);
	}
	else
	{
		func_202(&(uParam0->f_1), 131072);
	}
}

void func_336(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 4);
	}
	else
	{
		func_238(uParam0, 4);
	}
}

int func_337()
{
	return Local_1509.f_3;
}

int func_338(int iParam0)
{
	return iParam0;
}

void func_339(int iParam0, int iParam1)
{
	func_202(&((Local_1509.f_132.f_7[iParam0 /*11*/])->f_2), iParam1);
}

void func_340(int iParam0, int iParam1, int iParam2)
{
	((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_1 = iParam2;
}

void func_341(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_5 = { vParam2 };
	((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_4 = fParam5;
	((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_8 = iParam6;
}

int func_342(int iParam0)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

bool func_343(int iParam0, int iParam1)
{
	return func_159((Local_1509.f_132.f_7[iParam0 /*11*/])->f_2, iParam1);
}

int func_344(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_1509.f_15 };
	iVar7 = 0;
	iVar8 = func_379(iParam0);
	iVar9 = func_486(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_24[iParam0])))
		{
			iVar9 = func_486(iParam0);
			fVar0 = func_208(iParam0);
			if (!func_159((Local_1509.f_132.f_7[iParam0 /*11*/])->f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_207(iParam0)) };
			}
			else
			{
				vVar1 = { func_207(iParam0) };
			}
			if (!func_487(Local_13.f_24[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_0x772A1969F649E902(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(&(Local_13.f_24[iParam0]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (iVar9 != 0)
					{
						PED::_SET_PED_BODY_COMPONENT(iVar7, iVar9);
						PED::_UPDATE_PED_VARIATION(iVar7, func_343(iParam0, 1), 1, 1, 1, 0);
					}
					else if (PED::_0x772A1969F649E902(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_488(iVar7, 1);
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
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_13.f_24[iParam0]))))
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

int func_345(int iParam0, int iParam1)
{
	return ((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_1;
}

bool func_346(int iParam0)
{
	return MISC::IS_BIT_SET((Local_1509.f_256.f_1[0 /*14*/])->f_3, iParam0);
}

Vector3 func_347(int iParam0, int iParam1)
{
	return ((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_5;
}

int func_348(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_489(iParam1))
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

bool func_349(int iParam0, int iParam1)
{
	return ((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_8;
}

var func_350(int iParam0, int iParam1)
{
	return ((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_4;
}

int func_351(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_356(iParam0, fParam1, iVar0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_352(int iParam0)
{
	return func_159(Local_13.f_7.f_3, iParam0);
}

int func_353(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return func_159(Local_1509.f_18.f_11, iParam0);
	}
	else
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar1 = func_159(Local_1509.f_18.f_11, iParam0);
		if (bVar1 && !func_159((Local_68[iVar0 /*45*/])->f_1, iParam0))
		{
			func_202(&((Local_68[iVar0 /*45*/])->f_1), iParam0);
		}
		return bVar1;
	}
	return 0;
}

void func_354(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_202(&(Local_13.f_7.f_3), iParam0);
	}
}

int func_355(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1097610)[iParam0 /*51*/])->f_16;
}

bool func_356(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (iParam2 == -1)
	{
		iParam2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	fVar0 = &(Local_68[iParam2 /*45*/])->f_6.f_2[iParam0];
	if (fVar0 < 0f)
	{
		if (bParam3)
		{
			iVar1 = func_255(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::_0x255A5EF65EDA9167(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_490(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					(Local_68[iParam2 /*45*/])->f_6.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

void func_357()
{
	if (!func_352(1))
	{
		if (Local_13.f_7.f_7 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= Local_13.f_7.f_8)
		{
			func_354(1);
		}
	}
	else if (!func_352(2))
	{
		if (!func_353(8, 0))
		{
			func_354(2);
		}
	}
	else if (func_363(8, 0))
	{
		Local_13.f_7.f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Local_13.f_7.f_8 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 8001);
		func_368(1);
		func_368(2);
	}
}

void func_358()
{
	int iVar0;

	if (!func_112(32, 255))
	{
		func_491(Local_1509.f_1, Local_1509.f_3);
		if (!func_112(1024, 255))
		{
			func_492(Local_1509.f_1);
			func_133(1024);
		}
		iVar0 = func_319(Local_1509.f_1, Local_1509.f_2);
		func_493(iVar0);
		func_494(iVar0);
		func_127(2);
		func_495(Local_1509.f_9);
		func_496(Local_1509.f_1);
		func_133(32);
	}
}

bool func_359(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1509.f_132.f_6, iParam0);
}

void func_360(int iParam0)
{
	Local_13.f_7 = iParam0;
}

int func_361(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_163(32, iVar0, 0))
			{
				if (&(Local_68[iVar0 /*45*/])->f_6.f_2[0] > -1f && &(Local_68[iVar0 /*45*/])->f_6.f_2[0] < fParam0)
				{
					if (iVar1 == -1 || &(Local_68[iVar0 /*45*/])->f_6.f_2[0] < &(Local_68[iVar1 /*45*/])->f_6.f_2[0])
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

void func_362(int iParam0)
{
	func_202(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_1), iParam0);
}

bool func_363(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return func_159(Local_1509.f_18.f_10, iParam0);
	}
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar1 = func_159(Local_1509.f_18.f_11, iParam0);
	if (bVar1 && !func_159((Local_68[iVar0 /*45*/])->f_1, iParam0))
	{
		func_202(&((Local_68[iVar0 /*45*/])->f_1), iParam0);
		Local_1509.f_18.f_10 = (Local_1509.f_18.f_10 && (Local_68[iVar0 /*45*/])->f_1);
	}
	return func_159(Local_1509.f_18.f_10, iParam0);
}

int func_364(float fParam0)
{
	int iVar0;
	int iVar1;

	if (func_161(2))
	{
		return 1;
	}
	if (func_353(4096, 0))
	{
		iVar0 = 2;
		while (iVar0 <= 7)
		{
			iVar1 = func_255(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), Local_1509.f_15) < fParam0)
				{
					return 0;
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

bool func_365(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1509.f_18.f_9, iParam0);
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<15> Var0;

	Var0 = { func_497(377515857) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = func_498(iParam2, 1);
	Var0.f_14 = iParam3;
	func_499(&Var0);
	func_500(&Var0);
}

bool func_367()
{
	return func_501(1);
}

void func_368(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_238(&(Local_13.f_7.f_3), iParam0);
	}
}

void func_369(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_370(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_1509.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_1509)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_1509.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_1509.f_3)
	{
		return 0;
	}
	return 1;
}

void func_371(int iParam0)
{
	int iVar0;

	switch (iParam0->f_9)
	{
		case 377515857:
			if (!func_500(iParam0))
			{
			}
			break;
		case joaat("silence"):
			iVar0 = func_255(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(iVar0, 0);
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iVar0, 0);
				}
			}
			break;
	}
}

bool func_372(int iParam0)
{
	return &Local_1509.f_480.f_1[iParam0] != 0;
}

bool func_373(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Local_1509.f_480.f_1[iParam0]), iParam1);
}

bool func_374(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Local_1509.f_480.f_10[iParam0]), iParam1);
}

int func_375(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_255(iParam0);
	iVar1 = 0;
	switch (iParam1)
	{
		case 0:
		case 1:
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true))
			{
				iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == PLAYER::PLAYER_PED_ID())
					{
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

void func_376(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_502())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_503(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_503(iParam0, 1) /*4*/])->f_2++;
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
	func_504(&Var0, uVar7);
}

void func_377(int iParam0, int iParam1)
{
	MISC::SET_BIT(Local_1509.f_480.f_10[iParam0], iParam1);
}

void func_378(int iParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = func_505(iParam0);
	if (MISC::_0x375F5870A7B8BEC1(sVar0))
	{
		*bParam1 = 0;
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		*bParam1 = 1;
	}
	else
	{
		*bParam1 = 0;
	}
}

int func_379(int iParam0)
{
	return (Local_1509.f_132.f_7[iParam0 /*11*/])->f_3;
}

void func_380(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_1509.f_132.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_24[iParam0])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_24[iParam0]));
			Local_1509.f_132.f_7[iParam0 /*11*/] = iVar1;
			(Local_68[iParam1 /*45*/])->f_6.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				EVENT::_0xBB1E41DD3D3C6250(iVar1, "MpRandomEvent", 1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_506(iVar1, 1f, 0);
				}
				sVar0 = func_507(iParam0);
				if (!MISC::_0x375F5870A7B8BEC1(sVar0))
				{
					func_508(iVar1, sVar0, 1);
				}
				MISC::SET_BIT(&(Local_1509.f_132.f_5), iParam0);
				if (bParam2)
				{
					func_509(iParam0);
				}
			}
		}
	}
}

Vector3 func_381()
{
	switch (func_198())
	{
		case 0:
			return 2149.103f, 1727.851f, 127.9003f;
		case 1:
			return -317.9637f, 204.0303f, 66.54611f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_382(int iParam0, struct<2> Param1, var uParam3)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		ENTITY::SET_ENTITY_HEADING(iParam0, MISC::GET_HEADING_FROM_VECTOR_2D((Param1 - vVar0.x), (Param1.f_1 - vVar0.y)));
	}
}

int func_383(int iParam0)
{
	switch (func_194())
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 2;
				case 3:
					return 1;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 1;
				case 7:
					return 2;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 2:
					return 2;
				case 3:
					return 1;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 1;
				case 7:
					return 2;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 2;
				case 3:
					return 0;
				case 4:
					return 1;
				case 5:
					return 2;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 2;
				case 3:
					return 1;
				case 4:
					return 2;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_384(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_255(iParam0);
	iVar1 = func_255(0);
	switch (func_194())
	{
		case 0:
			if (func_217() == 1 && iParam0 < 4)
			{
				if (func_440(iVar0, -1389117756, 1, 0))
				{
					TASK::TASK_COMBAT_ANIMAL_WARN(iVar0, iVar1, 3);
				}
			}
			else if (func_440(iVar0, 780511057, 1, 0))
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 16777216, 0);
			}
			break;
		case 2:
			if (func_217() == 1)
			{
				if (func_440(iVar0, -1389117756, 1, 0))
				{
					TASK::TASK_COMBAT_ANIMAL_WARN(iVar0, iVar1, 3);
				}
			}
			else if (func_440(iVar0, 780511057, 1, 0))
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 16777216, 0);
			}
			break;
		default:
			if (func_440(iVar0, 780511057, 1, 0))
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 16777216, 0);
			}
			break;
	}
}

void func_385(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_510(uParam0, iParam1, sParam2))
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

void func_386(int iParam0, float fParam1)
{
	(Local_1509.f_132.f_7[iParam0 /*11*/])->f_9 = fParam1;
}

int func_387(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_388(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_511(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_512(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_389()
{
	Local_1509.f_132.f_6 = 0;
	Local_1509.f_132.f_2 = 0;
	Local_1509.f_132.f_1 = -1;
}

void func_390()
{
	int iVar0;

	Local_1509.f_272.f_64 = 0;
	Local_1509.f_272.f_63 = 0;
	Local_1509.f_272.f_66 = 0;
	Local_1509.f_272.f_67 = 0;
	Local_1509.f_272.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1509.f_272.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_1509.f_272.f_89[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1509.f_272.f_80[iVar0]);
		func_513(iVar0);
		iVar0++;
	}
}

void func_391(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_1509.f_132.f_2 = (Local_1509.f_132.f_2 || (Local_68[iParam0 /*45*/])->f_6);
		Local_1509.f_132.f_1 = (Local_1509.f_132.f_1 && (Local_68[iParam0 /*45*/])->f_6);
		Local_1509.f_132.f_6 = (Local_1509.f_132.f_6 || (Local_68[iParam0 /*45*/])->f_6.f_1);
	}
}

void func_392(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_1509.f_272.f_64 = (Local_1509.f_272.f_64 || (Local_68[iParam0 /*45*/])->f_17.f_1);
		Local_1509.f_272.f_63 = (Local_1509.f_272.f_63 || (Local_68[iParam0 /*45*/])->f_17);
		Local_1509.f_272.f_66 = (Local_1509.f_272.f_66 || (Local_68[iParam0 /*45*/])->f_17.f_3);
		Local_1509.f_272.f_67 = (Local_1509.f_272.f_67 || (Local_68[iParam0 /*45*/])->f_17.f_4);
		Local_1509.f_272.f_68 = (Local_1509.f_272.f_68 || (Local_68[iParam0 /*45*/])->f_17.f_5);
		Local_1509.f_272.f_69 = (Local_1509.f_272.f_69 || (Local_68[iParam0 /*45*/])->f_17.f_6);
		Local_1509.f_272.f_124 = (Local_1509.f_272.f_124 || (Local_68[iParam0 /*45*/])->f_17.f_2);
		Local_1509.f_272.f_70 = (Local_1509.f_272.f_70 && (Local_68[iParam0 /*45*/])->f_17.f_7);
		iVar0 = 0;
		while (iVar0 < 8)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_68[iParam0 /*45*/])->f_17.f_9[iVar0], Local_1509.f_272.f_71[iVar0], Local_1509.f_272.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_68[iParam0 /*45*/])->f_17.f_9[iVar0], Local_1509.f_272.f_71[iVar0], Local_1509.f_272.f_80[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_68[iParam0 /*45*/])->f_17.f_9[iVar0], Local_1509.f_272.f_71[iVar0], Local_1509.f_272.f_89[iVar0]);
			func_514(func_405(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_393(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		(Local_68[iParam2 /*45*/])->f_44 = ((Local_68[iParam2 /*45*/])->f_44 || (Local_68[iParam0 /*45*/])->f_44);
	}
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
	(Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_6.f_2[iParam2] = fVar0;
	if (fVar0 > (Local_1509.f_132.f_7[iParam2 /*11*/])->f_9)
	{
		return 0;
	}
	return 1;
}

void func_395(var uParam0)
{
	func_515(uParam0, 0f);
}

bool func_396(var uParam0)
{
	return func_516(*uParam0, 1);
}

int func_397(var uParam0, float fParam1)
{
	if (!func_396(uParam0))
	{
		return 0;
	}
	if (func_517(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_398(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_399(int iParam0)
{
	int iVar0;

	if (func_271())
	{
		func_518(iParam0);
		return ENTITY::DOES_ENTITY_EXIST(func_255(iParam0));
	}
	iVar0 = iParam0;
	switch (func_194())
	{
		case 0:
			switch (iVar0)
			{
				case 7:
					return Local_13.f_7.f_9 > 3;
				case 6:
					return Local_13.f_7.f_9 > 2;
				case 5:
					return Local_13.f_7.f_9 > 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 4:
					return Local_13.f_7.f_9 > 2;
				case 3:
					return Local_13.f_7.f_9 > 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 7:
					return Local_13.f_7.f_9 > 3;
				case 6:
					return Local_13.f_7.f_9 > 2;
				case 5:
					return Local_13.f_7.f_9 > 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 5:
					return Local_13.f_7.f_9 > 2;
				case 4:
					return Local_13.f_7.f_9 > 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_400(int iParam0, int iParam1)
{
	func_238(&((Local_1509.f_132.f_7[iParam0 /*11*/])->f_2), iParam1);
}

bool func_401(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_159((Local_68[iParam1 /*45*/])->f_6, iParam0);
}

void func_402(int iParam0)
{
	func_202(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_6), iParam0);
}

void func_403(int iParam0)
{
	func_238(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_6), iParam0);
}

void func_404()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar4 = func_405(iVar0);
		if (!func_406(iVar4))
		{
		}
		else if (!func_417(iVar4, iVar5))
		{
			if (func_407(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					func_519(iVar4);
					func_520(iVar4);
				}
			}
		}
		iVar0++;
	}
}

int func_405(int iParam0)
{
	return iParam0;
}

bool func_406(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_1509.f_272.f_67, iParam0);
}

int func_407(int iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(Local_1509.f_272.f_123, iParam0))
	{
		return 0;
	}
	*iParam1 = &Local_1509.f_272.f_98[iParam0 /*3*/];
	iParam1->f_1 = (Local_1509.f_272.f_98[iParam0 /*3*/])->f_1;
	iParam1->f_2 = (Local_1509.f_272.f_98[iParam0 /*3*/])->f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	return 1;
}

void func_408(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_521(iParam0);
	if (iVar0 >= 2 && iVar0 <= 7)
	{
		iVar1 = func_255(iVar0);
		if (!PED::IS_PED_DEAD_OR_DYING(iVar1, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (PED::GET_PED_CONFIG_FLAG(iVar1, 263, true))
				{
					fVar2 = (BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iVar1)) * (1f / BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar1, 0))));
					if (fVar2 <= 0.7f)
					{
						PED::SET_PED_CONFIG_FLAG(iVar1, 263, false);
					}
				}
				if (!func_459(iVar1, 1435919172))
				{
					if (!func_351(0, 40f))
					{
						func_439(iVar0);
						func_384(iVar0);
					}
				}
			}
		}
	}
	else if (iVar0 == 0)
	{
		if (func_522())
		{
			if (Local_1509.f_18.f_13 == 0)
			{
				Local_1509.f_18.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
	}
}

bool func_409(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1509.f_272.f_66, iParam0);
}

bool func_410(int iParam0)
{
	return MISC::IS_BIT_SET((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_3, iParam0);
}

bool func_411(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(Local_1509.f_272.f_80[iParam0]);
}

void func_412(int iParam0)
{
	MISC::CLEAR_BIT(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_3), iParam0);
}

bool func_413(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_9[iParam0]);
}

bool func_414(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_1509.f_272.f_68, iParam0);
}

bool func_415(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_68[iParam1 /*45*/])->f_17, iParam0);
}

int func_416(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = func_521(iParam0);
	if (func_523(iParam0, -1))
	{
		return 0;
	}
	if (iVar0 > 1)
	{
		fVar1 = func_524(iVar0, -1, 0);
		if (fVar1 > 0f && fVar1 <= func_525())
		{
			if (func_526(iVar0))
			{
				if (fVar1 > func_527())
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_417(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_68[iParam1 /*45*/])->f_17.f_2, iParam0);
}

int func_418(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_528(uParam2, 1, iVar0);
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
			if (func_529(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_530(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_531(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (func_532(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_533(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_20 && func_534(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_530(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_535(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_536(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_530(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_537(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_530(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939178->f_23) < 300)
			{
				if (func_538(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (func_538(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_530(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_539(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939178->f_19 || uParam2->f_12 < 20f)
			{
				if (func_540(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_541(uParam2, 4000))
				{
					if ((func_542(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_543(uParam2, iParam0)) && func_544(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_530(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_542(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_543(uParam2, iParam0)) && func_544(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (Global_1939178->f_34 == 0)
			{
				if (Global_1939178->f_35 != 0)
				{
					if (func_545(iParam0, Global_1939178->f_35))
					{
						func_546();
						*iParam3 = 2;
						func_530(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_547(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_548() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_546();
						*iParam3 = 2;
						func_530(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_549())
				{
					if (func_545(iParam0, Global_1939178->f_36))
					{
						func_546();
						*iParam3 = 2;
						func_530(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_550(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_530(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_551(func_490(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_552(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*iParam3 = 1048576;
						func_530(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_553(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_554(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_530(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_555(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_556(uParam2, 4000))
				{
					if (func_557(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_530(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_558(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_530(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_559(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_530(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_419(var uParam0)
{
	return uParam0->f_22;
}

int func_420(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<15> Var1;

	if (!func_271())
	{
		func_358();
	}
	func_292(0);
	iVar0 = func_255(0);
	if (func_521(iParam0) == 1)
	{
		if (func_560(iParam1, 0, 0, 0, 0))
		{
			func_561(1, Local_1509.f_4);
			func_362(4194304);
			if (!PED::IS_PED_DEAD_OR_DYING(func_255(1), true))
			{
				func_562();
			}
		}
		else
		{
			return 0;
		}
	}
	else if (func_521(iParam0) == 0)
	{
		if (!func_522())
		{
			if (!func_560(iParam1, 0, 0, 0, 0))
			{
				return 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
			PED::_0xAE6004120C18DF97(iVar0, 0, 1);
		}
		Var1 = { func_497(joaat("silence")) };
		func_563(&Var1);
		func_561(1, Local_1509.f_4);
		func_362(16);
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true))
		{
			func_564();
		}
	}
	else
	{
		if (!bParam2)
		{
			if (func_526(func_521(iParam0)))
			{
				if (!func_560(iParam1, 0, 0, 0, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1) || func_459(iVar0, -2017877118))
							{
								return 0;
							}
						}
					}
				}
			}
		}
		func_519(iParam0);
		func_520(iParam0);
		func_362(32);
	}
	if (!func_565())
	{
		func_566(0);
	}
	return 1;
}

void func_421(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	MISC::SET_BIT(&((Local_68[iVar0 /*45*/])->f_17), iParam0);
	if (bParam1)
	{
		(Local_68[iVar0 /*45*/])->f_17.f_18[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

int func_422(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_567(iParam1))
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
	if (func_568(*uParam0, &(Local_1509.f_272.f_31), &uVar1, uParam0->f_2))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_423(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1509.f_272.f_63, iParam0);
}

bool func_424(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_68[iParam1 /*45*/])->f_17.f_1, iParam0);
}

int func_425(int iParam0)
{
	int iVar0;

	iVar0 = func_255(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	switch (func_521(iParam0))
	{
		case 0:
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
			{
				return 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_505(1), "SIT_JUMP_B_MALE", 1))
			{
				return 0;
			}
			if (PED::IS_PED_RAGDOLL(iVar0))
			{
				return 0;
			}
			break;
		default:
			break;
	}
	return 1;
}

void func_426(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_255(iParam0);
	iVar3 = func_521(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	switch (iVar3)
	{
		case 1:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
			TASK::_TASK_FLEE_FROM_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 0f, 0f, 0f, 1000f, -1, 0, 1077936128, 0);
			break;
		case 0:
			WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 3, 532480, 99999f, -1, func_255(1));
			iVar2 = 2;
			while (iVar2 <= 7)
			{
				iVar1 = func_255(iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					TASK::_0x3923EC958249657D(iVar0, iVar1, -1082130432);
				}
				iVar2++;
			}
			PED::SET_PED_KEEP_TASK(iVar0, true);
			break;
	}
}

void func_427(int iParam0)
{
	MISC::SET_BIT(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_1), iParam0);
}

bool func_428(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, Local_1509.f_272.f_89[iParam0], &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

int func_429(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*iParam1))
	{
		return 0;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*iParam1);
	if (!NETWORK::_0x255A5EF65EDA9167(*iParam2))
	{
		return 0;
	}
	*iParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam3))
	{
		return 0;
	}
	return 1;
}

bool func_430(int iParam0, int iParam1)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(Local_1509.f_272.f_71[iParam0], iParam1);
}

int func_431(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_255(iParam0);
	iVar1 = iParam0;
	if (iVar1 > 1)
	{
		if (func_569(iVar1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, func_265(), 4, 0, -1f, -1, 0);
			func_441(iParam0, 0);
		}
		else if (func_570(iVar1, iParam2))
		{
			if (func_571(iVar1))
			{
				if (func_572(iVar1))
				{
					TASK::TASK_COMBAT_PED(iVar0, iParam3, 16777216, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(iVar0, func_255(0), 0, 0);
				}
			}
			else
			{
				TASK::TASK_COMBAT_PED(iVar0, iParam3, 16777216, 0);
			}
		}
		else if (!func_526(iVar1))
		{
			iVar2 = func_573(iVar1, 20f, 1);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), 16777216, 0);
			}
			else if (!func_574(0, 1))
			{
				if (func_575(iVar1, 0) < func_524(iVar1, iParam1, 1))
				{
					TASK::TASK_COMBAT_PED(iVar0, func_255(0), 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(iVar0, iParam3, 16777216, 0);
				}
			}
			else
			{
				TASK::TASK_COMBAT_PED(iVar0, iParam3, 16777216, 0);
			}
		}
	}
	else if (iVar1 == 0)
	{
		TASK::_0x3923EC958249657D(iVar0, iParam3, -1082130432);
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				func_366(iVar1, 20, joaat("speech_params_shouted_clear"), 0);
				break;
			case 1:
				func_366(iVar1, 21, joaat("speech_params_shouted_clear"), 0);
				break;
			case 2:
				func_366(iVar1, 22, joaat("speech_params_shouted_clear"), 0);
				break;
		}
	}
	return 1;
}

void func_432(int iParam0, int iParam1)
{
	SCRIPTS::_0x31010318BA9897AC((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_9[iParam0], iParam1);
}

float func_433()
{
	int iVar0;
	float fVar1;

	if (Local_1509.f_439.f_3 == 0)
	{
		Local_1509.f_439.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_1509.f_439.f_3)) * 0.001f);
	Local_1509.f_439.f_3 = iVar0;
	return fVar1;
}

bool func_434(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_576(vVar0, vParam0) > func_576(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_435(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6)
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
			else if (func_577(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_578(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_579() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_436(var uParam0, int iParam1, float fParam2)
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
	func_155(uParam0);
	return 1;
}

void func_437(int iParam0, int iParam1)
{
	if (iParam0 <= 1)
	{
		func_262(80f);
	}
}

void func_438(var uParam0)
{
	Local_1509.f_18.f_5 = uParam0;
}

void func_439(int iParam0)
{
	MISC::SET_BIT(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_3), iParam0);
}

int func_440(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (!bParam3 && func_580(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_441(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::CLEAR_BIT(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_4), iParam0);
	}
	else
	{
		MISC::SET_BIT(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_4), iParam0);
	}
}

int func_442(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_1509.f_132.f_7[iParam0 /*11*/])))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_1509.f_132.f_7[iParam0 /*11*/])))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_1509.f_132.f_7[iParam0 /*11*/]);
			Local_1509.f_132.f_7[iParam0 /*11*/] = 0;
			return 1;
		}
	}
	return 0;
}

int func_443(int iParam0, int iParam1, bool bParam2)
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

int func_444()
{
	int iVar0;

	if (func_312() || func_581())
	{
		return 0;
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_1509.f_18.f_7, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_255(0)))
		{
			iVar0 = 2;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_255(iVar0)))
				{
					if (func_356(iVar0, 75f, -1, 0))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_445(int iParam0, bool bParam1, bool bParam2)
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

void func_446()
{
	if (!func_67(2))
	{
		return;
	}
	func_127(8);
}

void func_447(int iParam0, int iParam1)
{
	if (!func_321(iParam0, iParam1))
	{
		return;
	}
	func_582(iParam1, iParam0);
}

void func_448()
{
	int iVar0;

	iVar0 = func_255(0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (func_225() == 0)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, joaat("fireweapon")))
			{
				PED::_0x4C57F27D1554E6B0(iVar0, func_583(), 0, -1082130432, 0, 0f);
			}
			if (PED::IS_PED_SHOOTING(iVar0))
			{
				if (Local_1509.f_18.f_113 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_1509.f_18.f_113, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
				{
					func_452(200f);
					Local_1509.f_18.f_113 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
		}
	}
	if (!func_352(1))
	{
		if (func_163(8, -1, 1))
		{
			func_584(8);
		}
	}
	else if (!func_352(2))
	{
		if (func_163(8, -1, 1))
		{
			func_584(8);
		}
	}
	else if (func_353(8, 0))
	{
		if (!func_163(8, -1, 1))
		{
			func_452(200f);
			func_362(8);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_359(0))
			{
				if (func_351(0, 100f))
				{
					if (func_585())
					{
						func_366(0, 6, 1744022339, 0);
					}
					else
					{
						switch (((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_1.f_1 % 4))
						{
							case 0:
								func_366(0, 0, 1744022339, 0);
								break;
							case 1:
								func_366(0, 1, 1744022339, 0);
								break;
							case 2:
								func_366(0, 2, 1744022339, 0);
								break;
							case 3:
								func_366(0, 3, 1744022339, 0);
								break;
						}
						(Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_1.f_1++;
					}
				}
			}
			func_362(8);
		}
	}
}

void func_449()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_353(32, 0))
	{
		return;
	}
	iVar2 = func_255(0);
	iVar1 = 2;
	while (iVar1 <= 7)
	{
		iVar0 = func_255(iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
				}
				switch (func_194())
				{
					case 0:
						if (func_217() == 1 && iVar1 < 4)
						{
							if (func_440(iVar0, -1389117756, 1, 0))
							{
								TASK::TASK_COMBAT_ANIMAL_WARN(iVar0, iVar2, 3);
							}
						}
						else if (func_440(iVar0, 780511057, 1, 0))
						{
							TASK::TASK_COMBAT_PED(iVar0, iVar2, 16777216, 0);
						}
						break;
					case 2:
						if (func_217() == 1)
						{
							if (func_440(iVar0, -1389117756, 1, 0))
							{
								TASK::TASK_COMBAT_ANIMAL_WARN(iVar0, iVar2, 3);
							}
						}
						else if (func_440(iVar0, 780511057, 1, 0))
						{
							TASK::TASK_COMBAT_PED(iVar0, iVar2, 16777216, 0);
						}
						break;
					default:
						if (func_440(iVar0, 780511057, 1, 0))
						{
							TASK::TASK_COMBAT_PED(iVar0, iVar2, 16777216, 0);
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_450()
{
	vector3 vVar0;

	vVar0 = { func_490(PLAYER::PLAYER_ID()) };
	if (((Local_1509.f_18.f_5 < 4 && Local_1509.f_18.f_5 > 0) && !func_161(4)) && !func_353(1024, 0))
	{
		if (!func_163(16777216, -1, 1))
		{
			func_586(0, vVar0, 125f, -89429847, 580546400, 0, 0);
		}
		else
		{
			func_586(0, vVar0, 1000f, -89429847, 580546400, 0, 0);
		}
	}
	else
	{
		func_151(0);
	}
	if (!func_353(32, 0))
	{
		func_587(2, 7, vVar0, 20f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	else if (!func_163(32, -1, 1))
	{
		func_587(2, 7, vVar0, 60f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	else
	{
		func_587(2, 7, vVar0, 150f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
}

int func_451()
{
	switch (func_217())
	{
		case 1:
			if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "STRUGGLE_LOOP", 1))
			{
				return 0;
			}
			break;
		case 0:
			if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "SHOOT_LOOP", 1))
			{
				return 0;
			}
			break;
	}
	if (func_353(32, 0))
	{
		return 1;
	}
	if (func_353(16, 0))
	{
		return 1;
	}
	return func_588();
}

void func_452(float fParam0)
{
	int iVar0;

	iVar0 = func_255(0);
	if (func_524(0, -1, 1) <= fParam0)
	{
		func_589(-342321975, iVar0, 1);
	}
}

void func_453()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_353(256, 0))
	{
		if (func_217() == 1 && func_225() == 1)
		{
		}
		else
		{
			return;
		}
	}
	if (func_352(64) || func_353(512, 0))
	{
		return;
	}
	if (func_353(16, 0))
	{
		func_354(64);
		return;
	}
	if (func_590())
	{
		return;
	}
	if (func_591())
	{
		func_366(0, 23, 1808677283, 0);
		return;
	}
	if (func_359(0))
	{
		return;
	}
	switch (Local_13.f_7.f_11)
	{
		case 0:
			func_366(0, 17, 1808677283, 0);
			Local_13.f_7.f_11++;
			Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			break;
		case 1:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
			{
				Local_13.f_7.f_11++;
			}
			break;
		case 2:
			func_366(0, 18, 1808677283, 0);
			Local_13.f_7.f_11++;
			Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			break;
		case 3:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
			{
				Local_13.f_7.f_11++;
			}
			break;
		case 4:
			func_366(0, 19, 1808677283, 0);
			Local_13.f_7.f_11++;
			Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			break;
		case 5:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
			{
				Local_13.f_7.f_11++;
			}
			break;
		case 6:
			if (!func_352(4))
			{
				func_354(64);
			}
			else
			{
				Local_13.f_7.f_11++;
				Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
		case 7:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
			{
				Local_13.f_7.f_11++;
			}
			break;
		case 8:
			if (NETWORK::_0x255A5EF65EDA9167(func_593(0, 71091, 50f, 1)))
			{
				Local_13.f_7.f_11 = 0;
				return;
			}
			func_354(64);
			break;
	}
}

bool func_454()
{
	return func_352(64);
}

int func_455(char* sParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_1509.f_18.f_7))
	{
		return 0;
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_1509.f_18.f_7, sParam0))
	{
		return 1;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1509.f_18.f_7, sParam0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1509.f_18.f_7, sParam0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1509.f_18.f_7, sParam0);
		}
	}
	else
	{
		if (!MISC::_0x375F5870A7B8BEC1(sParam1))
		{
			if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, sParam1, 1))
			{
				return 0;
			}
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1509.f_18.f_7, sParam0, true);
		return 1;
	}
	return 0;
}

int func_456()
{
	if (!func_352(128))
	{
		return func_458();
	}
	return 0;
}

int func_457()
{
	int iVar0;

	if (!func_352(16384))
	{
		iVar0 = func_255(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!func_359(0) && func_458())
				{
					if (func_594())
					{
						func_366(0, 12, joaat("speech_params_standard"), 0);
					}
					else
					{
						func_366(0, 13, joaat("speech_params_standard"), 0);
					}
					Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					Local_13.f_7.f_12 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_354(16384);
					return 1;
				}
			}
		}
		return 0;
	}
	return 1;
}

int func_458()
{
	if (Local_13.f_7.f_12 != 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_12, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 1000)
		{
			return 0;
		}
	}
	return 1;
}

int func_459(int iParam0, int iParam1)
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

void func_460(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_461()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (func_363(2097152, 0))
	{
		return 1;
	}
	if (!func_163(2097152, -1, 1))
	{
		iVar2 = func_255(0);
		iVar0 = 2;
		while (iVar0 <= 7)
		{
			iVar1 = func_255(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 263, false);
					TASK::CLEAR_PED_TASKS(iVar1, 1, 0);
					if (func_194() == 1)
					{
						FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 54, 100f);
					}
					PED::SET_PED_USING_ACTION_MODE(iVar1, true, -1, 0);
					bVar4 = func_595();
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					if (bVar4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							TASK::TASK_COMBAT_PED_TIMED(0, iVar2, 20000, 16777216);
						}
					}
					PED::REGISTER_TARGET(iVar1, iVar2, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 40f, 0, 18);
					func_460(iVar1, &iVar3, 0, 0, 1, 1);
					PED::SET_PED_KEEP_TASK(iVar1, true);
					if (func_161(32))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1509.f_18.f_112, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2));
					}
				}
			}
			func_441(iVar0, 0);
			iVar0++;
		}
		func_362(2097152);
	}
	return 0;
}

void func_462()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_255(0);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	iVar2 = func_255(1);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::_IS_MOUNT_SEAT_FREE(iVar2, -1)) && !func_353(4194304, 0)) && !func_353(524288, 0))
	{
		PED::_0x931B241409216C1F(iVar0, iVar2, 0);
		TASK::TASK_MOUNT_ANIMAL(0, iVar2, 60000, -1, 1.5f, 1, 0, 0);
	}
	if (func_353(4194304, 0) || func_353(16, 0))
	{
		iVar3 = 3;
	}
	else
	{
		iVar3 = 0;
	}
	TASK::_TASK_SMART_FLEE_STYLE_COORD(0, func_265(), iVar3, 0, 99999f, -1, func_255(1));
	func_460(iVar0, &iVar1, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(iVar0, true);
	func_362(33554432);
}

int func_463()
{
	if (func_353(4194304, 0) && !func_352(2048))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_366(0, 22, joaat("speech_params_shouted_clear"), 0);
			func_354(1024);
			func_354(2048);
			func_354(8192);
			Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			return 0;
		}
	}
	if (!func_352(1024))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!func_359(0))
			{
				if (Local_13.f_7.f_14 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
				{
					func_366(0, 14, 291934926, 0);
					func_354(1024);
					Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
		}
	}
	else if (func_596() && !func_352(8192))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!func_359(0))
			{
				if (Local_13.f_7.f_14 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
				{
					func_366(0, 16, 291934926, 0);
					func_354(8192);
					Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
		}
	}
	else if (!func_352(2048))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!func_359(0))
			{
				if (Local_13.f_7.f_14 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
				{
					func_366(0, 15, 291934926, 0);
					func_354(2048);
					Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
		}
	}
	else if (!func_352(4096))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!func_359(0))
			{
				if (Local_13.f_7.f_14 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
				{
					func_354(4096);
				}
			}
		}
	}
	return func_352(4096);
}

void func_464()
{
	if (func_163(16777216, -1, 1) && !func_163(4194304, -1, 1))
	{
		if (!func_161(8))
		{
			func_101(8);
			func_376(-1098645728, 1, 0);
			func_597(func_512(-1892463704, -400839231), 1);
			func_598();
			func_599(-419165566, 0, 255, 0, 0);
		}
	}
}

void func_465()
{
	int iVar0;

	iVar0 = func_255(0);
	if (!func_353(67108864, 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			WEAPON::_0xCEF4C65DE502D367(iVar0, 1, 1, 1, 0);
			func_362(67108864);
		}
	}
}

int func_466(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_600(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_601())
	{
		return func_600(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_600(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_467(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_602(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_468(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_602(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_469(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_179(&Var1, uParam0))
	{
		iVar0 = ((func_603() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_470(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_471(int iParam0, int iParam1)
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

void func_472(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 11, &(Global_1051202->f_16[15]));
	func_604(uParam0, uParam0->f_1);
}

int func_473(int iParam0)
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

void func_474(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_1), 16384);
	}
	else
	{
		func_202(&(uParam0->f_1), 16384);
	}
}

void func_475(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_1), 2048);
	}
	else
	{
		func_202(&(uParam0->f_1), 2048);
	}
}

void func_476(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 16);
	}
	else
	{
		func_238(uParam0, 67108864);
		func_238(uParam0, 16);
	}
}

void func_477(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_1), 128);
	}
	else
	{
		func_202(&(uParam0->f_1), 128);
	}
}

void func_478(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 256);
	}
	else
	{
		func_238(uParam0, 256);
	}
}

void func_479(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_202(uParam0, 268435456);
	}
	else
	{
		func_238(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_202(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_238(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_202(uParam0, 536870912);
	}
	else
	{
		func_238(uParam0, 536870912);
	}
}

float func_480(var uParam0)
{
	return uParam0->f_25;
}

void func_481(var uParam0, float fParam1)
{
	uParam0->f_26 = fParam1;
}

void func_482(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 1);
	}
	else
	{
		func_238(uParam0, 1);
	}
}

void func_483(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 512);
	}
	else
	{
		func_238(uParam0, 512);
	}
}

void func_484(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 2);
	}
	else
	{
		func_238(uParam0, 2);
	}
}

void func_485(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 8);
	}
	else
	{
		func_238(uParam0, 8);
	}
}

int func_486(int iParam0)
{
	return (Local_1509.f_132.f_7[iParam0 /*11*/])->f_4;
}

int func_487(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_489(iParam1))
	{
		return 0;
	}
	iVar0 = func_605(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_488(int iParam0, bool bParam1)
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

bool func_489(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

Vector3 func_490(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_491(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_388(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_103(&Var0, 4) && func_606(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_492(int iParam0)
{
	func_607();
	func_608(iParam0);
}

void func_493(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_109(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_609(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_110((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_610(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_610(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_610(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_610(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_494(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_472(&Var0);
}

void func_495(struct<2> Param0)
{
	struct<32> Var0;

	if (func_317(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_317(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_317(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_611(Param0, &Var0))
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

void func_496(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_388(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

struct<15> func_497(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_1509, 5);
	Var0.f_9 = iParam0;
	Var0 = 178;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

int func_498(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("speech_params_force_frontend"):
			return 4;
		case -1824788778:
			return 49;
		case -1677682736:
			return 40;
		case joaat("speech_params_force_shouted_clear"):
			return 9;
		case joaat("speech_params_force_normal_clear"):
			return 6;
		case joaat("speech_params_add_blip"):
			return 11;
		case joaat("speech_params_shouted_critical"):
			return 17;
		case -1408561526:
			return 14;
		case -1337937821:
			return 50;
		case joaat("speech_params_allow_repeat"):
			return 2;
		case -1223286396:
			return 28;
		case -1194565419:
			return 20;
		case -1100252363:
			return 48;
		case -1050591818:
			return 44;
		case joaat("speech_params_shouted"):
			return 15;
		case -796779660:
			return 42;
		case -780776077:
			return 30;
		case -553575591:
			return 33;
		case -500314840:
			return 45;
		case -497774268:
			return 25;
		case joaat("speech_params_force_shouted"):
			return 8;
		case -417894478:
			return 18;
		case -279373485:
			return 47;
		case joaat("speech_params_force"):
			return 3;
		case joaat("speech_params_force_shouted_critical"):
			return 10;
		case 0:
			return 0;
		case 10132823:
			return 32;
		case 291934926:
			return 24;
		case 329132445:
			return 27;
		case 439365436:
			return 46;
		case 467585058:
			return 26;
		case 796868284:
			return 37;
		case joaat("speech_params_add_blip_shouted"):
			return 12;
		case 905388000:
			return 31;
		case joaat("speech_params_add_blip_shouted_force"):
			return 13;
		case 996860239:
			return 23;
		case joaat("speech_params_standard"):
			return 1;
		case 1124105491:
			return 36;
		case 1196222537:
			return 22;
		case 1342623702:
			return 35;
		case 1506116031:
			return 29;
		case joaat("speech_params_force_normal"):
			return 5;
		case 1588346500:
			return 38;
		case joaat("speech_params_force_normal_critical"):
			return 7;
		case 1718175949:
			return 19;
		case 1744022339:
			return 39;
		case 1808677283:
			return 34;
		case joaat("speech_params_shouted_clear"):
			return 16;
		case 2002344365:
			return 21;
		case 2081540604:
			return 41;
		case 2083444765:
			return 43;
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

void func_499(var uParam0)
{
	var uVar0;

	uVar0 = func_612(5, 117);
	SCRIPTS::_0xD426E2E3288469D6(&uVar0, PLAYER::PLAYER_ID());
	func_613(uParam0, uVar0);
}

int func_500(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0->f_11;
	iVar1 = func_255(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	else
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(iVar1, 0);
		AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iVar1, 0);
	}
	iVar2 = iParam0->f_12;
	if (!func_260())
	{
		return func_615(iVar0, iVar2, func_614(iParam0->f_13, 1), iParam0->f_14);
	}
	else
	{
		MISC::SET_BIT(&(Local_1509.f_18.f_9), iVar2);
		return func_617(func_616(), iVar2, func_188(), func_194(), Local_13.f_7.f_9);
	}
	return 0;
}

bool func_501(int iParam0)
{
	return func_159(Local_1509.f_132.f_2, iParam0);
}

int func_502()
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

int func_503(int iParam0, int iParam1)
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

void func_504(var uParam0, var uParam1)
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

char* func_505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_RE@ANIMAL_ATTACK@MALE@TREE";
		case 1:
			return "SCRIPT_RE@ANIMAL_ATTACK@MALE@ROCK";
		case 2:
			return "SCRIPT_RE@ANIMAL_ATTACK@FEMALE";
		case 3:
			return "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@HORSE@HANDOVER";
		case 4:
			return "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@ROCK";
		case 5:
			return "SCRIPT_RE@ANIMAL_ATTACK@WOLF@ROCK";
		default:
			break;
	}
	return "SCRIPT_RE@ANIMAL_ATTACK@MALE@ROCK";
}

void func_506(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_618(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_507(int iParam0)
{
	return (Local_1509.f_132.f_7[iParam0 /*11*/])->f_10;
}

void func_508(int iParam0, char* sParam1, bool bParam2)
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

void func_509(int iParam0)
{
	func_256(iParam0);
}

bool func_510(var uParam0, int iParam1, char* sParam2)
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

int func_511(int iParam0)
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

struct<2> func_512(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_513(int iParam0)
{
	if (!func_619(func_405(iParam0), Local_1509.f_272.f_98[iParam0 /*3*/]))
	{
		MISC::CLEAR_BIT(&(Local_1509.f_272.f_123), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_1509.f_272.f_123), iParam0);
}

void func_514(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (MISC::IS_BIT_SET((Local_68[iParam1 /*45*/])->f_17, iParam0))
	{
		if (&(Local_68[iParam1 /*45*/])->f_17.f_18[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			return;
		}
		if (NETWORK::_0x255A5EF65EDA9167(&(Local_13.f_36.f_1[iParam0])))
		{
			if (&Local_13.f_36.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (&Local_13.f_36.f_10[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(&((Local_68[iParam1 /*45*/])->f_17.f_18[iParam0]), &(Local_13.f_36.f_10[iParam0])))
		{
			Local_13.f_36.f_1[iParam0] = iVar0;
			Local_13.f_36.f_10[iParam0] = &(Local_68[iParam1 /*45*/])->f_17.f_18[iParam0];
		}
	}
}

void func_515(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_579() - fParam1);
	func_620(uParam0, 1);
	func_621(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_516(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_517(var uParam0)
{
	if (!func_396(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_622(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_579() - uParam0->f_1);
}

void func_518(int iParam0)
{
	func_400(iParam0, 4);
}

void func_519(int iParam0)
{
	MISC::SET_BIT(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_2), iParam0);
}

void func_520(int iParam0)
{
	if (0 != iParam0)
	{
		if (1 != iParam0)
		{
			func_439(iParam0);
		}
	}
}

int func_521(int iParam0)
{
	return iParam0;
}

int func_522()
{
	if (func_353(32768, 0) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_255(0), -1))
	{
		if (Local_1509.f_18.f_13 == 0)
		{
			Local_1509.f_18.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			return 0;
		}
		return NETWORK::GET_TIME_DIFFERENCE(Local_1509.f_18.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 1000;
	}
	return 0;
}

int func_523(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (MISC::IS_BIT_SET((Local_68[iParam1 /*45*/])->f_17.f_7, iParam0))
	{
		return !MISC::IS_BIT_SET((Local_68[iParam1 /*45*/])->f_17, iParam0);
	}
	return 0;
}

float func_524(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (&(Local_68[iParam1 /*45*/])->f_6.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return &((Local_68[iParam1 /*45*/])->f_6.f_2[iParam0]);
}

float func_525()
{
	switch (func_194())
	{
		case 2:
			return 25f;
		case 0:
			return 20f;
		case 3:
			return 20f;
		case 1:
			return 25f;
		default:
			break;
	}
	return 15f;
}

int func_526(int iParam0)
{
	if (Local_1509.f_18.f_8 < 2 && Local_1509.f_18.f_8 > -1)
	{
		return 0;
	}
	if (func_423(iParam0))
	{
		return 0;
	}
	if (func_623(2))
	{
		return 0;
	}
	if (!func_624(iParam0))
	{
		switch (func_194())
		{
			case 0:
			case 3:
				switch (iParam0)
				{
					case 2:
						return 1;
					case 3:
						return Local_13.f_7.f_9 > 2;
					default:
						break;
				}
				break;
			default:
				switch (iParam0)
				{
					case 2:
						return 1;
					default:
						break;
				}
				break;
		}
	}
	return 0;
}

float func_527()
{
	switch (func_194())
	{
		case 2:
			return 8f;
		case 0:
			return 8f;
		case 3:
			return 8f;
		case 1:
			return 8f;
		default:
			break;
	}
	return 8f;
}

void func_528(var uParam0, bool bParam1, int iParam2)
{
	func_625(iParam2);
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
		uParam0->f_13 = func_626(0);
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
							func_202(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_627(1, 1))
						{
							func_202(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_627(1, 1) || *uParam0 & 8192 != 0))
				{
					func_238(uParam0, 33554432);
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
			if (func_628(uParam0))
			{
				uParam0->f_15 = func_548();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_548() - uParam0->f_15) > 500)
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
	func_629(uParam0);
}

int func_529(int iParam0, var uParam1)
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
			if (!func_630(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_631(iParam0, iVar2) <= func_632(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_530(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_560(iParam2, 1, 1, 1, 0))
	{
		func_202(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_633(uParam1, 1);
	func_634();
}

int func_531(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_635(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_636(uParam1);
			if (func_637(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_638(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_633(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_639(uParam1))
						{
							func_633(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_532(int iParam0, int iParam1, var uParam2)
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
	if (func_640(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_636(uParam2);
		if (func_637(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_638(uParam2)
				{
					func_633(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_533(int iParam0, var uParam1)
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
	if (func_630(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_638(uParam1)
		{
			fVar3 = func_636(uParam1);
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

int func_534(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_641(bParam1, bParam2, bParam3);
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

int func_535(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_548();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_536(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_642(uParam2);
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
			if (func_544(uParam2, iParam1))
			{
				func_633(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_537(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_419(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_544(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_633(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_538(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_643(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_633(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_633(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_644(iParam1, vVar0, vVar4))
					{
						func_633(uParam2, 1);
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
					func_633(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_644(iParam1, vVar0, vVar7))
					{
						func_633(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_539(int iParam0, var uParam1)
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
		if (!func_630(iParam0, uParam1, &(Global_1939178->f_28[iVar0])) || iParam0 == &Global_1939178->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_645(&(Global_1939178->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false), vVar9);
			if (func_646(&(Global_1939178->f_28[iVar0])))
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
			if (func_647(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_648(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_649(uParam1, iParam0, fVar1, iVar0))
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

int func_540(int iParam0, var uParam1)
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

int func_541(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_548();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_542(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_650(iVar0, &iVar2))
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
	if (func_651(iVar0, iParam0))
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

int func_543(var uParam0, int iParam1)
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

int func_544(var uParam0, int iParam1)
{
	if (func_652(uParam0))
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

int func_545(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_653(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_546()
{
}

int func_547(var uParam0, int iParam1)
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
		if (func_654(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_548();
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
						if (func_655(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_548();
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

int func_548()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_549()
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
	if ((func_548() - Global_1939178->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_550(var uParam0, int iParam1)
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
	fVar0 = func_632(uParam0);
	if (uParam0->f_12 > func_480(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_656(iParam1);
	iVar1 = func_657(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

float func_551(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_552(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_658(iParam0, vVar0, iParam2);
}

int func_553(int iParam0, int iParam1, var uParam2)
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
	return func_659(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_554(int iParam0, var uParam1)
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
		if (func_660(iParam0, uParam1, 1))
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
			if (func_661(uParam1))
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
					if (!func_662(uParam1, iParam0))
					{
						if (func_655(iVar4, Global_35, 1) < 7f)
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

int func_555(int iParam0, var uParam1)
{
	if (!func_663(0))
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

int func_556(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_548();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_557(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_558(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_548();
	}
	else if (func_548() - uParam1->f_4) > func_664(uParam1)
	{
		return func_665(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_559(var uParam0, int iParam1)
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

int func_560(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_561(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_321(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_322(iParam1);
	func_582(iVar0, iParam0);
}

void func_562()
{
	if (!func_161(256))
	{
		func_101(256);
		func_376(-1598949067, 0, 0);
	}
}

void func_563(var uParam0)
{
	func_613(uParam0, func_612(4, 117));
}

void func_564()
{
	if (!func_161(128))
	{
		func_101(128);
		func_376(-1315007749, 0, 0);
	}
}

bool func_565()
{
	return (func_113(64) || func_112(64, 255));
}

void func_566(bool bParam0)
{
	int iVar0;

	if (!func_112(64, 255))
	{
		iVar0 = func_319(Local_1509.f_1, Local_1509.f_2);
		func_493(iVar0);
		if (!func_112(1024, 255))
		{
			func_492(Local_1509.f_1);
			func_133(1024);
		}
		func_494(iVar0);
		if (bParam0)
		{
			func_561(Local_1509.f_1, Local_1509.f_4);
		}
		func_133(64);
	}
}

bool func_567(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_1509.f_272.f_69, iParam0);
}

int func_568(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_528(uParam1, 0, iVar0);
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
				if (func_541(uParam1, 4000))
				{
					if ((func_542(iParam0, Global_1939178->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_543(uParam1, iParam0)) && func_544(uParam1, iParam0))
					{
						func_546();
						*uParam2 = 2;
						func_530(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_541(uParam1, 4000))
				{
					if ((func_542(iParam0, Global_1939178->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_543(uParam1, iParam0)) && func_544(uParam1, iParam0))
					{
						func_546();
						*uParam2 = 2;
						func_530(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			else if (Global_1939178->f_35 != 0)
			{
				if (Global_1939178->f_34 == 0)
				{
					if (func_545(iParam0, Global_1939178->f_35))
					{
						func_546();
						*uParam2 = 2;
						func_530(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_549())
				{
					if (func_545(iParam0, Global_1939178->f_36))
					{
						func_546();
						*uParam2 = 2;
						func_530(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_535(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_536(Global_34, iParam0, uParam1))
					{
						func_546();
						*uParam2 = 4;
						func_530(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_537(Global_34, iParam0, uParam1))
					{
						func_546();
						*uParam2 = 256;
						func_530(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_666(iParam0, uParam1))
			{
				func_546();
				*uParam2 = 131072;
				func_530(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_667(iParam0, uParam1))
			{
				func_546();
				*uParam2 = 262144;
				func_530(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

bool func_569(int iParam0)
{
	return func_668();
}

int func_570(int iParam0, int iParam1)
{
	if (NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return func_417(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam1));
	}
	return 0;
}

int func_571(int iParam0)
{
	if (PED::IS_PED_IN_COMBAT(func_255(iParam0), 0))
	{
		if (PED::IS_PED_IN_COMBAT(func_255(iParam0), func_255(0)))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_572(int iParam0)
{
	int iVar0;

	iVar0 = func_669(func_255(iParam0));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 1;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	if (func_524(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0), 1) > func_524(iParam0, -1, 1))
	{
		return 1;
	}
	return 0;
}

int func_573(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_670(iParam0, fParam1, bParam2);
	if (NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

int func_574(int iParam0, bool bParam1)
{
	if (!bParam1 || func_671(iParam0))
	{
		return ENTITY::IS_ENTITY_DEAD(&(Local_1509.f_132.f_7[iParam0 /*11*/]));
	}
	return 0;
}

float func_575(int iParam0, int iParam1)
{
	return BUILTIN::VDIST(func_672(iParam0), func_672(iParam1));
}

float func_576(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_577(var uParam0, float fParam1, float fParam2, int iParam3)
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

int func_578(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_577(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_579() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_579()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_580(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_581()
{
	return func_673(&Global_1939178, 8192);
}

void func_582(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_388(iParam1, 896190569) };
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

Vector3 func_583()
{
	switch (func_198())
	{
		case 0:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return 2145.107f, 1727.564f, 126.561f;
				case 1:
					return 2144.344f, 1724.933f, 126.4467f;
				default:
					break;
			}
			return 2144.138f, 1730.875f, 127.1f;
	}
	return 0f, 0f, 0f;
}

void func_584(int iParam0)
{
	func_238(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_1), iParam0);
}

bool func_585()
{
	if (!func_260())
	{
		return false;
	}
	if (func_225() != 1)
	{
		return false;
	}
	return !func_365(6);
}

void func_586(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8)
{
	int iVar0;

	iVar0 = func_255(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_151(iParam0);
		return;
	}
	if (!func_674(iParam0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4)
		{
			func_675(iParam0, iParam5, iParam6, iParam7, sParam8);
		}
	}
	else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4)
	{
		func_151(iParam0);
	}
}

void func_587(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;

	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		func_586(func_338(iVar0), vParam2, fParam5, iParam6, fParam7, iParam8, iParam9);
		iVar0++;
	}
}

var func_588()
{
	return Local_1509.f_439.f_4;
}

void func_589(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

int func_590()
{
	if (func_352(128))
	{
		if (func_458())
		{
			func_366(0, 11, 1808677283, 0);
			func_368(128);
			Local_13.f_7.f_12 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		return 1;
	}
	return 0;
}

int func_591()
{
	if (!func_365(23))
	{
		if (func_260())
		{
			if (func_225() == 1)
			{
				if (func_353(16777216, 0) || func_351(0, 40f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_592(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0))))
	{
		return 0;
	}
	return func_163(16777216, iParam0, 1);
}

int func_593(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_1509.f_132.f_7[iParam0 /*11*/])))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam2 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (&(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || &(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] < &(Local_68[iVar1 /*45*/])->f_6.f_2[iParam0])
				{
					if (!bVar2 || &(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] <= fParam2)
					{
						Stack.Push(iVar0);
						Stack.Push(iParam0);
						Call_Loc(iParam1);
						if (StackVal)
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

bool func_594()
{
	func_282(1);
	return func_161(2);
}

int func_595()
{
	if ((Local_1509.f_18.f_8 > 0 && !func_353(65536, 1)) && !func_161(65536))
	{
		func_362(65536);
		func_101(65536);
		return 1;
	}
	else if ((Local_1509.f_18.f_8 > 2 && !func_353(131072, 1)) && !func_161(131072))
	{
		func_362(131072);
		func_101(131072);
		return 1;
	}
	else if ((Local_1509.f_18.f_8 > 4 && !func_353(262144, 1)) && !func_161(262144))
	{
		func_362(262144);
		func_101(131072);
		return 1;
	}
	return 0;
}

int func_596()
{
	switch (func_188())
	{
		case 2:
			return 1;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_597(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_598()
{
	if (!func_67(8))
	{
		return;
	}
	func_127(16);
}

int func_599(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_676(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_600(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_601()
{
	return Global_1099294->f_339;
}

int func_602(struct<2> Param0, var uParam2)
{
	if (!func_39(Param0))
	{
		return 0;
	}
	func_677(uParam2);
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

int func_603()
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

void func_604(var uParam0, var uParam1)
{
}

int func_605(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

int func_606(int iParam0)
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

void func_607()
{
	func_110(&(Global_1245803->f_2003));
}

void func_608(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_388(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_609(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*iParam1 = iVar1;
		func_32(&Var2, *iParam1, -1, -1, 255);
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

struct<2> func_610(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_611(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_602(Param0, &vVar0);
	if (func_678(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

var func_612(int iParam0, int iParam1)
{
	return func_679(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_613(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 40, &uParam1);
}

int func_614(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return joaat("speech_params_standard");
		case 2:
			return joaat("speech_params_allow_repeat");
		case 3:
			return joaat("speech_params_force");
		case 4:
			return joaat("speech_params_force_frontend");
		case 5:
			return joaat("speech_params_force_normal");
		case 6:
			return joaat("speech_params_force_normal_clear");
		case 7:
			return joaat("speech_params_force_normal_critical");
		case 8:
			return joaat("speech_params_force_shouted");
		case 9:
			return joaat("speech_params_force_shouted_clear");
		case 10:
			return joaat("speech_params_force_shouted_critical");
		case 11:
			return joaat("speech_params_add_blip");
		case 12:
			return joaat("speech_params_add_blip_shouted");
		case 13:
			return joaat("speech_params_add_blip_shouted_force");
		case 14:
			return -1408561526;
		case 15:
			return joaat("speech_params_shouted");
		case 16:
			return joaat("speech_params_shouted_clear");
		case 17:
			return joaat("speech_params_shouted_critical");
		case 18:
			return -417894478;
		case 19:
			return 1718175949;
		case 20:
			return -1194565419;
		case 21:
			return 2002344365;
		case 22:
			return 1196222537;
		case 23:
			return 996860239;
		case 24:
			return 291934926;
		case 25:
			return -497774268;
		case 26:
			return 467585058;
		case 27:
			return 329132445;
		case 28:
			return -1223286396;
		case 29:
			return 1506116031;
		case 30:
			return -780776077;
		case 31:
			return 905388000;
		case 32:
			return 10132823;
		case 33:
			return -553575591;
		case 34:
			return 1808677283;
		case 35:
			return 1342623702;
		case 36:
			return 1124105491;
		case 37:
			return 796868284;
		case 38:
			return 1588346500;
		case 39:
			return 1744022339;
		case 40:
			return -1677682736;
		case 41:
			return 2081540604;
		case 42:
			return -796779660;
		case 43:
			return 2083444765;
		case 44:
			return -1050591818;
		case 45:
			return -500314840;
		case 46:
			return 439365436;
		case 47:
			return -279373485;
		case 48:
			return -1100252363;
		case 49:
			return -1824788778;
		case 50:
			return -1337937821;
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

var func_615(int iParam0, int iParam1, var uParam2, int iParam3)
{
	var uVar0;

	uVar0 = func_616();
	if (iParam3 == 0)
	{
		iParam3 = func_680(uVar0, iParam1, func_188(), func_194());
	}
	MISC::SET_BIT(&(Local_1509.f_18.f_9), iParam1);
	return func_682(iParam0, func_681(iParam1, func_188(), func_194()), 0, uParam2, iParam3, 0);
}

var func_616()
{
	return Local_1509.f_18;
}

int func_617(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;

	if (func_683(uParam0, iParam1, iParam2, iParam3, &vVar0, iParam4))
	{
		AUDIO::_0x36559148B78853B3(1, 0, 0);
		if (!func_684(&(Local_1509.f_18.f_14), vVar0, 0, -1, 0, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

float func_618(float fParam0, float fParam1, float fParam2)
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

int func_619(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_255(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_524(iParam0, -1, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return 1;
	}
	return 0;
}

void func_620(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_621(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_622(var uParam0)
{
	return func_516(*uParam0, 2);
}

int func_623(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 2;
	while (iVar0 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_255(iVar0)))
		{
			if (func_423(iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (Local_1509.f_18.f_8 > -1 && (Local_1509.f_18.f_8 - iVar1) < 2)
	{
		return Local_1509.f_18.f_8 <= iParam0;
	}
	return 0;
}

bool func_624(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1509.f_272.f_124, iParam0);
}

void func_625(int iParam0)
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
	Global_1939178->f_21 = func_685();
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
			func_686(&(Global_1939178->f_28), &(Global_1939178->f_33));
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

var func_626(int iParam0)
{
	return &(Global_1099294->f_372[iParam0 /*3*/]);
}

int func_627(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_687(bParam0, &iVar0, &iVar1))
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

int func_628(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939178->f_34;
	if (func_28() == -1)
	{
		if (Global_1939178->f_34 == 0)
		{
			iVar0 = func_688(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_34) || !&Global_1954472->f_1616[4])
	{
		iVar0 = func_688(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_657(iVar0) == -1)
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

void func_629(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_689(uParam0);
	}
}

int func_630(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_657(iParam2);
	}
	else
	{
		iVar1 = func_656(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_657(iParam0);
	}
	else
	{
		iVar0 = func_656(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_159(*uParam1, 8388608))
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

float func_631(int iParam0, int iParam1)
{
	return func_653(iParam0, iParam1, 1, 1);
}

float func_632(var uParam0)
{
	return uParam0->f_28;
}

void func_633(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 134217728);
	}
	else
	{
		func_238(uParam0, 134217728);
	}
}

void func_634()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_635(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_653(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_690(iVar0, 0)))
		{
			if (func_691(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_636(var uParam0)
{
	return uParam0->f_17;
}

int func_637(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_159(*uParam0, 4194304))
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

int func_638(var uParam0)
{
	return uParam0->f_18;
}

int func_639(var uParam0)
{
	return uParam0->f_19;
}

int func_640(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_690(iVar0, 0)))
		{
			if (func_692(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_641(bool bParam0, bool bParam1, bool bParam2)
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

float func_642(var uParam0)
{
	return uParam0->f_24;
}

int func_643(var uParam0)
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

int func_644(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_693(iParam0, vParam4, 0.5f))
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

int func_645(int iParam0)
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
	if (func_694(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_646(int iParam0)
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

int func_647(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_695(iParam1))
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

int func_648(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_695(iParam1))
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

int func_649(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_696(uParam0);
	if (func_695(iParam1))
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

int func_650(int iParam0, int iParam1)
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

int func_651(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_697(iParam0, 1, 0, 0)) && !func_697(iParam0, 1, 0, 0) == 1151374672)
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

bool func_652(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_653(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_654(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_655(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_655(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_656(int iParam0)
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

int func_657(int iParam0)
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

int func_658(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_698(vVar3, vVar6);
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
	if (func_699(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_659(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_650(Global_34, &iVar1))
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
		fVar2 = func_653(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_653(iParam0, Global_1939178->f_34, 0, 1) < 2.5f)
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

int func_660(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_687(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_662(uParam1, iVar0))
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
				if (!bParam2 || !func_662(uParam1, iVar1))
				{
					if (func_655(iVar1, Global_35, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_661(var uParam0)
{
	return func_159(*uParam0, 131072);
}

int func_662(var uParam0, int iParam1)
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

int func_663(int iParam0)
{
	return 0;
}

int func_664(var uParam0)
{
	return uParam0->f_21;
}

int func_665(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_666(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_700(uParam1);
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
		fVar2 = func_701(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_702())
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

int func_667(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_695(iParam0))
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

int func_668()
{
	int iVar0;

	if (func_353(4096, 0))
	{
		if (!func_163(4096, -1, 1))
		{
			func_362(4096);
		}
		return 1;
	}
	if (Local_13.f_7.f_9 >= Local_13.f_7.f_10)
	{
		iVar0 = 2;
		switch (func_194())
		{
			case 2:
				return 0;
			case 1:
				iVar0 = 1;
				break;
			case 3:
				iVar0 = 2;
				break;
			case 0:
				iVar0 = 2;
				break;
		}
		if (Local_1509.f_18.f_8 <= iVar0 && Local_1509.f_18.f_8 > -1)
		{
			func_362(4096);
			return 1;
		}
	}
	return 0;
}

int func_669(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_0xCD66FEA29400A0B5(iParam0));
	if (iVar0 == 0 || !PED::IS_PED_A_PLAYER(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, iVar0))
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	}
	return 0;
}

int func_670(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_1509.f_132.f_7[iParam0 /*11*/])))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (&(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || &(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] < &(Local_68[iVar1 /*45*/])->f_6.f_2[iParam0])
				{
					if (!bVar2 || &(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] <= fParam1)
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

bool func_671(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(&(Local_1509.f_132.f_7[iParam0 /*11*/]));
}

Vector3 func_672(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(&(Local_1509.f_132.f_7[iParam0 /*11*/]), true, false);
}

bool func_673(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_674(int iParam0)
{
	return MAP::DOES_BLIP_EXIST((Local_1509.f_132.f_7[iParam0 /*11*/])->f_1);
}

void func_675(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_151(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_1509.f_132.f_7[iParam0 /*11*/])))
	{
		return;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, &(Local_1509.f_132.f_7[iParam0 /*11*/]));
	if (iParam2 != 0)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, iParam2);
	}
	if (iParam3 != 0)
	{
		MAP::SET_BLIP_SPRITE(iVar0, iParam3, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, sParam4);
	}
	(Local_1509.f_132.f_7[iParam0 /*11*/])->f_1 = iVar0;
}

int func_676(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_703(iParam2, -372840566);
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
	func_704(uParam1, iParam0, Var3);
	return 1;
}

void func_677(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_678(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_705(iParam0))
	{
		return 0;
	}
	if (func_706(iParam0, uParam1, &uVar0))
	{
		func_707(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_679(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_708() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_709());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_709());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_709());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_710(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_711(iVar2))
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
				if (iVar9 & 8192 != 0 && func_712(iVar2) != 1)
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
					if (!func_713(iVar10))
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

int func_680(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 17:
					return 1;
				case 18:
					return 2;
				case 19:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 2;
				case 3:
					return 3;
				case 8:
					return 1;
				case 15:
					return 2;
				case 17:
					return 1;
				case 18:
					return 1;
				case 19:
					return 1;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 14:
					return 1;
				case 15:
					return 2;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_681(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE_AA_PLN_V1_HELP_M";
				case 1:
					return "GET_AWAY_FROM_ME";
				case 2:
					return "GET_AWAY_FROM_ME";
				case 3:
					return "GET_AWAY_FROM_ME";
				case 4:
					return "GET_AWAY_FROM_ME";
				case 5:
					return "GET_AWAY_FROM_ME";
				case 7:
					return func_714(iParam2, "RE_AA_PLN_V1_HELP_WOLVES_M", "RE_AA_PLN_V1_HELP_COUGARS_M", "RE_AA_PLN_V1_HELP_BEAR_M", "RE_AA_PLN_V1_HELP_COYOTES_M");
				case 14:
					return "GENERIC_SHOCKING_EVENT_COMMENT";
				case 15:
					return "RELIEVED_REACT";
				case 8:
					return "PANIC_HELP";
				case 9:
					return "RE_AA_PLN_V1_BEG_M";
				case 11:
					return "RE_AA_PLN_V1_KILL_M";
				case 12:
					return "RE_AA_PLN_V1_KILL_LAST_M";
				case 13:
					return "RE_AA_PLN_V1_FLED_M";
				case 17:
					return "GENERIC_FRIGHTENED_HIGH";
				case 18:
					return "GENERIC_FRIGHTENED_MED";
				case 19:
					return "PLEAD";
				case 20:
					return "PANIC_HELP";
				case 21:
					return "GENERIC_FRIGHTENED_HIGH";
				case 22:
					return "GET_AWAY_FROM_ME";
				default:
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE_AA_MTN_V1_HELP_M_A";
				case 1:
					return "RE_AA_MTN_V1_HELP_M_B";
				case 2:
					return "RE_AA_MTN_V1_HELP_M_C";
				case 3:
					return "RE_AA_MTN_V1_HELP_M_D";
				case 4:
					return "RE_AA_MTN_V1_HELP_CLOSE_M_A";
				case 5:
					return "RE_AA_MTN_V1_HELP_CLOSE_M_B";
				case 7:
					return func_714(iParam2, "RE_AA_MTN_V1_HELP_WOLVES_M", "RE_AA_MTN_V1_HELP_COUGARS_M", "RE_AA_MTN_V1_HELP_BEAR_M", "RE_AA_MTN_V1_HELP_COYOTES_M");
				case 14:
					return "RE_AA_MTN_V1_THANK_M";
				case 15:
					return "RE_AA_MTN_V1_THANK_M_BYE";
				case 8:
					return "RE_AA_MTN_V1_COWER_M_B";
				case 9:
					return "RE_AA_MTN_V1_BEG_M";
				case 11:
					return "RE_AA_MTN_V1_KILL_M";
				case 12:
					return "RE_AA_MTN_V1_KILL_LAST_M";
				case 13:
					return "RE_AA_MTN_V1_FLED_M";
				case 17:
					return "GENERIC_FRIGHTENED_MED";
				case 18:
					return "GENERIC_FRIGHTENED_MED";
				case 19:
					return "GENERIC_CURSE_HIGH";
				case 20:
					return "PANIC_HELP";
				case 21:
					return "GENERIC_FRIGHTENED_HIGH";
				case 22:
					return "GET_AWAY_FROM_ME";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return "RE_AA_MTN_V2_HELP_F";
				case 1:
					return "RE_AA_MTN_V2_HELP_F";
				case 2:
					return "RE_AA_MTN_V2_HELP_B_F";
				case 3:
					return "RE_AA_MTN_V2_HELP_F";
				case 4:
					return "RE_AA_MTN_V2_HELP_CLOSE_WAIT_A_F";
				case 5:
					return "RE_AA_MTN_V2_HELP_CLOSE_WAIT_B_F";
				case 7:
					return "RE_AA_MTN_V2_HELP_CLOSE_F";
				case 14:
					return "RELIEVED_REACT";
				case 15:
					return "VICTIMIZED_REACT";
				case 8:
					return "RE_AA_MTN_V2_YOU_CAME";
				case 9:
					return "RE_AA_MTN_V2_BEG_F";
				case 11:
					return "RE_AA_MTN_V2_KILL_F";
				case 12:
					return "RE_AA_MTN_V2_KILL_LAST_F";
				case 13:
					return "RE_AA_MTN_V2_FLED_F";
				case 17:
					return "RE_AA_MTN_V2_COWER_F";
				case 18:
					return "RE_AA_MTN_V2_COWER_B_F";
				case 19:
					return "GENERIC_FRIGHTENED_HIGH";
				case 20:
					return "PANIC_HELP";
				case 21:
					return "GENERIC_FRIGHTENED_HIGH";
				case 22:
					return "GET_AWAY_FROM_ME";
				default:
					break;
			}
			break;
	}
	return "";
}

var func_682(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	return func_715(func_255(iParam0), uParam1, uParam3, iParam2, iParam5, func_507(iParam0), iParam4, 1);
}

int func_683(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5)
{
	StringCopy(sParam4, "NBAA_", 24);
	switch (iParam1)
	{
		case 0:
			StringConCat(sParam4, "HELP", 24);
			break;
		case 1:
			StringConCat(sParam4, "HELP", 24);
			break;
		case 2:
			StringConCat(sParam4, "HELP", 24);
			break;
		case 3:
			StringConCat(sParam4, "HELP", 24);
			break;
		case 4:
			StringConCat(sParam4, func_716(iParam5 > 1, "CLOSM", "CLOSE"), 24);
			break;
		case 5:
			StringConCat(sParam4, "CLOSE", 24);
			break;
		case 6:
			StringConCat(sParam4, "CLOSE_A", 24);
			break;
		case 7:
			StringConCat(sParam4, "CALL", 24);
			break;
		case 14:
			StringConCat(sParam4, func_716(iParam5 > 1, "THANM", "THANK"), 24);
			break;
		case 15:
			StringConCat(sParam4, func_716(iParam5 > 1, "BYEM", "BYE"), 24);
			break;
		case 16:
			StringConCat(sParam4, "THANKB", 24);
			break;
		case 8:
			StringConCat(sParam4, "COWER", 24);
			break;
		case 9:
			StringConCat(sParam4, "OHNO", 24);
			break;
		case 10:
			StringConCat(sParam4, "BEG", 24);
			break;
		case 11:
			StringConCat(sParam4, "KILL", 24);
			break;
		case 12:
			StringConCat(sParam4, "LAST", 24);
			break;
		case 13:
			StringConCat(sParam4, "FLED", 24);
			break;
		case 23:
			StringConCat(sParam4, "CAME", 24);
			break;
		case 17:
			StringConCat(sParam4, func_716(iParam5 > 1, "CLOSM", "CLOSE"), 24);
			break;
		case 18:
			StringConCat(sParam4, func_716(iParam5 > 1, "CLOSM", "CLOSE"), 24);
			break;
		case 19:
			StringConCat(sParam4, func_716(iParam5 > 1, "CLOSM", "CLOSE"), 24);
			break;
		case 20:
			StringConCat(sParam4, func_716(iParam5 > 1, "AGGM", "AGGRO"), 24);
			break;
		case 21:
			StringConCat(sParam4, func_716(iParam5 > 1, "AGGM", "AGGRO"), 24);
			break;
		case 22:
			StringConCat(sParam4, func_716(iParam5 > 1, "AGGM", "AGGRO"), 24);
			break;
		default:
			return 0;
	}
	switch (iParam2)
	{
		case 2:
			StringConCat(sParam4, "_M", 24);
			break;
		case 3:
			StringConCat(sParam4, "_2M", 24);
			break;
		case 5:
			StringConCat(sParam4, "_F", 24);
			break;
		case 6:
			StringConCat(sParam4, "_2F", 24);
			break;
	}
	return 1;
}

bool func_684(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_717(vParam1, uParam0);
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

int func_685()
{
	if (func_718())
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

void func_686(var uParam0, var uParam1)
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

int func_687(bool bParam0, int iParam1, int iParam2)
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

int func_688(var uParam0)
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

void func_689(var uParam0)
{
	int iVar0;

	if (Global_1939178->f_32 == 0)
	{
		func_238(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939178->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939178->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939178->f_28[iVar0])))
				{
					func_202(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_690(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_691(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_692(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_692(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_693(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_694(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_695(int iParam0)
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

float func_696(var uParam0)
{
	return uParam0->f_27;
}

int func_697(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_698(vector3 vParam0, vector3 vParam3)
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

bool func_699(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_700(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_480(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_719(uParam0);
	}
	return func_480(uParam0);
}

float func_701(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_702()
{
	int iVar0;
	int iVar1;

	iVar0 = func_721(func_720());
	iVar1 = func_722(func_720());
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

void func_703(int iParam0, int iParam1)
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

void func_704(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_723(uParam0))
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

int func_705(int iParam0)
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

bool func_706(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_724(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_707(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_725(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_726(iVar0);
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
			uParam2->f_5 = func_727(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_728(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_729(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_730(iVar0);
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

int func_708()
{
	return Global_1051202->f_12;
}

char* func_709()
{
	return "unnamed";
}

int func_710(int iParam0)
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

int func_711(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_466(35, iParam0);
}

int func_712(int iParam0)
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

bool func_713(int iParam0)
{
	if (func_731(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_732(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

char* func_714(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	switch (iParam0)
	{
		case 0:
			return sParam1;
		case 1:
			return sParam2;
		case 2:
			return sParam3;
		case 3:
			return sParam4;
		default:
			break;
	}
	return sParam1;
}

var func_715(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = uParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = uParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_733(iParam0, &Var0);
}

char* func_716(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_717(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_718()
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

var func_719(var uParam0)
{
	return uParam0->f_26;
}

int func_720()
{
	return &Global_1902689;
}

int func_721(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_722(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_723(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_724(int iParam0)
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

int func_725(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_734(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_726(int iParam0)
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

int func_727(int iParam0)
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

int func_728(int iParam0)
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

int func_729(int iParam0)
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

int func_730(int iParam0)
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

int func_731(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_732(int iParam0)
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
		func_735(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_736(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

var func_733(int iParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1);
}

int func_734(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_737(iParam0, uParam1, &uVar0))
	{
		func_738(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_735(int iParam0)
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
	func_736(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_736(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

bool func_737(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_724(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_738(var uParam0, int iParam1, var uParam2)
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

