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
	struct<58> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 2, 0, 0, 1, 2, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2 } ;
	var uLocal_71 = 0;
	var uLocal_72 = 255;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 255;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<25> Local_78[32];
	struct<506> Local_879 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, -1, 0, 1148846080, -1065353216, 0, 0, 0, 0, 1148846080, -1065353216, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 2, 0, 0, 2, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, -1, 0 } ;
	var uLocal_1385 = 2;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 2;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 3;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	float fLocal_1395 = 0f;
	float fLocal_1396 = 0f;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1395 = 1f;
	fLocal_1396 = 1f;
	iVar0 = iScriptParam_0;
	func_1(iVar0);
	func_2(&iScriptParam_0);
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 65, 42);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 65, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_78, 801, 43);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Local_78[0 /*25*/])), 801, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(iParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

bool func_3()
{
	if (func_16(0, 0))
	{
		return true;
	}
	else if (func_17(Local_879.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_879.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_879.f_12), Local_879.f_9))
	{
		return true;
	}
	else if (Local_879.f_8 == 6)
	{
		return true;
	}
	return false;
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

void func_13(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<29> Var3;

	iVar0 = 255;
	MISC::_COPY_MEMORY(&Local_879, iParam0, 5);
	iVar2 = func_31(&bVar1, Local_879.f_1, Local_879.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_879.f_12 = iVar2;
	iVar0 = Global_1198046.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_879.f_1, Local_879.f_2, Local_879.f_3, iVar0);
	Local_879.f_9 = { func_33(Var3.f_5, 8) };
	Local_879.f_14 = Var3.f_5;
	Local_879.f_15 = { Var3.f_11 };
	Local_879.f_18 = Var3.f_7;
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
	func_39();
}

bool func_16(bool bParam0, bool bParam1)
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

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_40(Global_1051213) && !func_21(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_41(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_42(iParam3, 255))
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
	if (func_43())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_40(Global_1051213))
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

bool func_18()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return Global_1210161.f_1[iParam0 /*10*/].f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_13 <= 5)
	{
		func_44();
	}
	switch (Local_13)
	{
		case 0:
			func_45();
			break;
		case 1:
			func_46();
			break;
		case 2:
			func_47();
			break;
		case 3:
			func_48();
			break;
		case 4:
			func_49();
			break;
		case 5:
			func_50();
			break;
	}
}

void func_23()
{
	func_51();
	func_52();
	if (Local_879.f_8 <= 5)
	{
		func_53();
	}
	switch (Local_879.f_8)
	{
		case 0:
			func_54();
			break;
		case 1:
			func_55();
			break;
		case 2:
			func_56();
			break;
		case 3:
			func_57();
			break;
		case 4:
			func_58();
			break;
		case 5:
			func_59();
			break;
	}
}

void func_24()
{
	func_60();
}

void func_25()
{
	if (func_61())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_62();
}

void func_26()
{
	func_63();
	func_64();
	func_65();
}

void func_27()
{
	if (Local_879.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_66(Local_879.f_12, 4);
		}
	}
	func_67();
	if (func_68(64))
	{
		func_69(Local_13.f_6);
	}
	func_70();
}

int func_28()
{
	return Global_1572887.f_13;
}

bool func_29()
{
	return Global_1051252.f_8;
}

void func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_13.f_50.f_1[iVar0] = 255;
		iVar0++;
	}
}

int func_31(bool bParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<29> Var26;

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
	Var26.f_15 = 4;
	Var26.f_20 = 4;
	Var26.f_26 = -1;
	Var26.f_28 = 2;
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_71(&Var0, Var26.f_5);
	iVar25 = func_72(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_73(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*bParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_32(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	MISC::_COPY_MEMORY(uParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		uParam0->f_28[iVar31] = 0;
		iVar31++;
	}
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
			func_74(uParam0, iParam2);
			break;
		case 2:
			func_75(uParam0, iParam2);
			break;
		case 3:
			func_76(uParam0, iParam2);
			break;
		case 4:
			func_77(uParam0, iParam2);
			break;
		case 12:
			func_78(uParam0, iParam2);
			break;
		case 6:
			func_79(uParam0, iParam2, -1);
			break;
		case 7:
			func_80(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_81(uParam0, iParam2);
			break;
		case 11:
			func_82(uParam0, iParam2);
			break;
		case 9:
			func_83(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_84(uParam0, iParam2);
			break;
		case 8:
			func_85(uParam0, iParam2);
			break;
		case 13:
			func_86(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_87(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_88(uParam0, iParam2);
			break;
		case 16:
			func_89(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_90(uParam0, iParam2);
			break;
		case 21:
			func_91(uParam0, iParam2);
			break;
		case 28:
			func_92(uParam0, iParam2);
			break;
		case 25:
			func_93(uParam0, iParam2);
			break;
		case 24:
			func_94(uParam0, iParam2);
			break;
		case 22:
			func_95(uParam0, iParam2);
			break;
		case 23:
			func_96(uParam0, iParam2);
			break;
		case 29:
			func_97(uParam0, iParam2);
			break;
		case 26:
			func_98(uParam0, iParam2);
			break;
		case 30:
			func_99(uParam0, iParam2);
			break;
		case 27:
			func_100(uParam0, iParam2);
			break;
		case 32:
			func_101(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_102(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_103(uParam0, iParam2);
			break;
		case 17:
			func_104(uParam0, iParam2);
			break;
		case 18:
			func_105(uParam0, iParam2);
			break;
		case 19:
			func_106(uParam0, iParam2);
			break;
		case 20:
			func_107(uParam0, iParam2);
			break;
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_108(uParam0, iParam1, iParam2);
			break;
		default:
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
			Var0.f_1 = func_110(iParam0, &(Global_1071686.f_636), func_109(iParam1));
			break;
		case 3:
			Var0.f_1 = func_110(iParam0, &(Global_1071686.f_636.f_602), func_109(iParam1));
			break;
		case 4:
			Var0.f_1 = func_110(iParam0, &(Global_1071686.f_636.f_2104), func_109(iParam1));
			break;
		case 5:
			Var0.f_1 = func_110(iParam0, &(Global_1071686.f_636.f_12606), func_109(iParam1));
			break;
		case 6:
			Var0.f_1 = func_110(iParam0, &(Global_1071686.f_636.f_12908), func_109(iParam1));
			break;
		case 7:
			Var0.f_1 = func_110(iParam0, &(Global_1071686.f_636.f_15910), func_109(iParam1));
			break;
		case 8:
			Var0.f_1 = func_110(iParam0, &(Global_1071686.f_636.f_16512), func_109(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_111();
	}
	return Var0;
}

void func_34()
{
	func_112();
	func_113();
	func_114();
	func_115();
}

void func_35()
{
	Local_879.f_19 = Local_879.f_4;
	func_116();
	func_117();
	func_118();
}

void func_36()
{
}

void func_37()
{
}

void func_38()
{
}

void func_39()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_119(&(Local_13.f_57.f_7), iVar0, 3);
		iVar0++;
	}
}

bool func_40(struct<2> Param0)
{
	if (!func_120(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_109(Param0))
	{
		return false;
	}
	return true;
}

bool func_41(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_42(int iParam0, int iParam1)
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

bool func_43()
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
	if (!func_40(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_44()
{
}

void func_45()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1198046.f_231.f_1066[Local_879.f_12 /*17*/].f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_879.f_1, Local_879.f_2, Local_879.f_3, iVar0);
	if (!func_121(&Var1, 1))
	{
		func_122(1);
		return;
	}
	Local_13.f_6 = func_123(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)));
	func_124(256);
	if (func_125(Local_13.f_6))
	{
		func_126(5);
		func_122(6);
	}
	else
	{
		func_122(1);
	}
}

void func_46()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_879.f_1, Local_879.f_2, -1, 255);
	if (func_121(&Var0, 1))
	{
		func_122(2);
		return;
	}
	if (func_127(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_879.f_15, Var0.f_10, 2442122);
		func_122(2);
	}
	else if (bVar31)
	{
		func_126(3);
		func_122(6);
	}
	if (!func_128(Local_13.f_3.f_2))
	{
		func_129(&(Local_13.f_3.f_2));
	}
	else if (func_130(Local_13.f_3.f_2) > 45000)
	{
		func_126(4);
		func_122(6);
	}
}

void func_47()
{
	if (func_131(1, 255))
	{
		if (!func_132(1))
		{
			if (func_133())
			{
				func_124(1);
			}
		}
		else
		{
			func_134();
			func_122(3);
		}
	}
}

void func_48()
{
	bool bVar0;

	if (func_131(2, 255))
	{
		if (!func_132(2))
		{
			bVar0 = true;
			if (!func_135())
			{
				bVar0 = false;
			}
			if (!func_136())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_124(2);
			}
		}
		else
		{
			func_137();
			func_122(4);
		}
	}
}

void func_49()
{
	func_138();
	func_139();
	func_140();
	if (func_141() || Local_13.f_2 != 0)
	{
		func_142();
		func_122(5);
	}
}

void func_50()
{
	if (func_131(4, 255))
	{
		if (func_143())
		{
			func_124(4);
			func_122(6);
		}
	}
}

void func_51()
{
	if (!func_132(256))
	{
		return;
	}
	if (func_132(512))
	{
		if (func_68(64) && func_123(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_69(Local_13.f_6);
			func_144(64);
		}
	}
	else if (!func_68(64))
	{
		if (func_123(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_145(Local_13.f_6, 1, 1);
			func_146(64);
		}
	}
	else if (func_123(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_69(Local_13.f_6);
		func_144(64);
	}
}

void func_52()
{
	if (!Global_13)
	{
		if (func_131(8192, 255))
		{
			func_147(8192);
		}
	}
	else if (!func_131(8192, 255))
	{
		func_148(8192);
	}
}

void func_53()
{
	func_149();
	func_150();
}

void func_54()
{
	if (Local_13 == 6)
	{
		func_151(6);
	}
	else if (Local_13 > 0)
	{
		func_51();
		func_151(1);
	}
}

void func_55()
{
	if (Local_13 == 6)
	{
		func_151(6);
	}
	else if (Local_13 > 1)
	{
		func_151(2);
	}
}

void func_56()
{
	bool bVar0;
	int iVar1;

	if (!func_131(1, 255))
	{
		bVar0 = true;
		if (!func_152())
		{
			bVar0 = false;
		}
		if (!func_153())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_148(1);
		}
		else
		{
			iVar1 = Global_1901947.f_236.f_68;
			if (!func_128(Local_879.f_11))
			{
				func_129(&(Local_879.f_11));
			}
			if (func_130(Local_879.f_11) >= iVar1)
			{
				func_151(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_154(&(Local_879.f_11));
		func_155();
		func_151(3);
	}
}

void func_57()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_131(2, 255))
	{
		iVar0 = func_156();
		iVar1 = func_157();
		if (iVar0 && iVar1)
		{
			func_148(2);
		}
		else
		{
			iVar2 = Global_1901947.f_236.f_68;
			if (!func_128(Local_879.f_11))
			{
				func_129(&(Local_879.f_11));
			}
			if (func_158(Local_879.f_11) >= iVar2)
			{
				func_151(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_154(&(Local_879.f_11));
		func_159();
		func_160();
		func_161();
		func_162();
		func_151(4);
	}
}

void func_58()
{
	if (Local_13 >= 5)
	{
		func_163();
		func_151(5);
		return;
	}
	func_164();
	func_165();
	func_166();
	func_167();
	func_168();
	func_169();
}

void func_59()
{
	if (!func_131(4, 255))
	{
		if (func_170())
		{
			func_171();
			func_66(Local_879.f_12, 4);
			func_148(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_151(6);
	}
}

void func_60()
{
}

bool func_61()
{
	return (func_132(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_62()
{
}

void func_63()
{
	int iVar0;
	int iVar1;

	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_43[iVar1]);
				func_172(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					if (!func_173(iVar1, 16))
					{
						PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				if (func_174(iVar1, iVar2))
				{
				}
				else if (func_175(iVar1, iVar2))
				{
					iVar0 = Local_879.f_274[iVar1 /*34*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_176(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*3*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar1 /*3*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_176(iVar1, iVar2))
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

void func_65()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_178(func_177(iVar0), 1);
		iVar0++;
	}
}

void func_66(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_179(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_67()
{
	int iVar0;
	bool bVar1;

	if (!func_68(1))
	{
		return;
	}
	if (func_68(4))
	{
		return;
	}
	if (!func_68(2))
	{
		iVar0 = -1;
	}
	else if (!func_68(8))
	{
		iVar0 = 2;
	}
	else if (func_68(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_68(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_180(Local_879.f_9, iVar0, 0, 255, 0);
	func_146(4);
	if (bVar1)
	{
		func_181(Local_879.f_1, Local_879.f_2);
		if (!func_68(256))
		{
			if (iVar0 == 1)
			{
				func_182(Local_879.f_18, 1);
			}
			else
			{
				func_182(Local_879.f_18, 0);
			}
			func_146(256);
		}
	}
	else
	{
		func_182(Local_879.f_18, 2);
	}
}

bool func_68(int iParam0)
{
	return func_183(Local_879.f_7, iParam0);
}

void func_69(int iParam0)
{
	int iVar0;

	if (!func_184(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_70 = iParam0;
	Global_1134390[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_70()
{
	bool bVar0;

	bVar0 = func_61();
	func_185(0, 2);
	func_185(0, 1);
	func_186(bVar0);
	STREAMING::REMOVE_ANIM_DICT(func_187());
	STREAMING::REMOVE_ANIM_DICT(func_188());
	if (bVar0)
	{
		if (func_189(32))
		{
			if (!func_189(512))
			{
				func_190(9, Local_879.f_4);
			}
		}
	}
	if (MAP::DOES_BLIP_EXIST(Local_879.f_19.f_213))
	{
		MAP::REMOVE_BLIP(&(Local_879.f_19.f_213));
	}
	func_191();
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_192(uParam0))
	{
		return -1;
	}
	iVar0 = func_193(uParam0, uParam0->f_9);
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
			iVar0 = func_193(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_73(int iParam0)
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
	return Global_1198046.f_231[iParam0 /*15*/];
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_194(uParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
			break;
		case 1:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
		case 2:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_1");
			uParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
		case 3:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_2");
			uParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
		case 4:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_3");
			uParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
			break;
		case 5:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_4");
			uParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
		case 6:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_1");
			uParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
		case 7:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_2");
			uParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
		case 8:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GREAT_PLAINS_1");
			uParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
		case 9:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_195(uParam0);
	uParam0->f_15[0] = joaat("22_TO_4");
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_198(uParam0, 0);
			func_198(uParam0, 1);
			func_198(uParam0, 4);
			func_198(uParam0, 5);
			break;
		case 1:
			func_198(uParam0, 2);
			func_198(uParam0, 3);
			func_198(uParam0, 6);
			func_198(uParam0, 7);
			func_199(uParam0, 2);
			break;
		default:
			func_195(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_197(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_197(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_197(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_197(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_197(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_197(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_197(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_197(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_80(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 8);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 7);
			func_197(uParam0, 8);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 6);
			func_197(uParam0, 7);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 5);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_195(uParam0);
	func_199(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_83(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_201(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_84(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_195(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_86(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_195(uParam0);
	func_199(uParam0, 1);
	func_199(uParam0, 4);
	func_199(uParam0, 8);
	func_199(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			uParam0->f_11 = { func_202(func_123(iParam2)) };
			break;
	}
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_89(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_204(uParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_0");
			uParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
		case 1:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_1");
			uParam0->f_11 = { 2602.444f, -1286.57f, 51.2567f };
			break;
		case 2:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_2");
			uParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
		case 3:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_3");
			uParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
		case 4:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_4");
			uParam0->f_11 = { 2530.883f, -1149.375f, 49.0052f };
			break;
		case 5:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_5");
			uParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
		case 6:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_6");
			uParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
		case 7:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_7");
			uParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
		case 8:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_8");
			uParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
		case 9:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_9");
			uParam0->f_11 = { 2593.165f, -1207.484f, 52.3112f };
			break;
		case 10:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_10");
			uParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
		case 11:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_11");
			uParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
		case 12:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_0");
			uParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
		case 13:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_1");
			uParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
		case 14:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_2");
			uParam0->f_11 = { -843.7784f, -1282.664f, 42.3634f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1084113577;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 8;
	}
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 13;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 477228254;
	if (iParam1 > 7)
	{
		uParam0->f_27 = 18;
		uParam0->f_20[0] = joaat("NIGHT");
	}
	else
	{
		uParam0->f_27 = 1;
		uParam0->f_20[0] = joaat("DAY");
	}
	switch (iParam1)
	{
		case 0:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 1796670491;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 18;
	}
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_197(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_197(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_195(uParam0);
	if (iParam1 > 4)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_197(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_197(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_197(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_197(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_197(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_197(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_197(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_197(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_197(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_195(uParam0);
	if (iParam1 > 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 9;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_197(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_197(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_197(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_197(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_197(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_197(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_197(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_197(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_197(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_197(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 458679075;
	switch (iParam1)
	{
		case 0:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 5;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 78935770;
	switch (iParam1)
	{
		case 0:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_195(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -463663296;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_195(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_197(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_197(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 25;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -646307557;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_101(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -196458416;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 1;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 1;
	}
	func_211(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1725684832;
			uParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
		case 1:
			uParam0->f_5 = -1992129571;
			uParam0->f_11 = { 477.293f, -270.4016f, 143.0532f };
			break;
		case 2:
			uParam0->f_5 = 2064181094;
			uParam0->f_11 = { 178.3377f, -192.7462f, 126.5609f };
			break;
		case 3:
			uParam0->f_5 = 1983503816;
			uParam0->f_11 = { -138.1221f, -21.41103f, 95.08842f };
			break;
		case 4:
			uParam0->f_5 = 1603580030;
			uParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
		case 5:
			uParam0->f_5 = 1591141935;
			uParam0->f_11 = { -2105.914f, -1658.808f, 139.2303f };
			break;
		case 6:
			uParam0->f_5 = 1382010177;
			uParam0->f_11 = { -2322.846f, -1606.925f, 147.5517f };
			break;
		case 7:
			uParam0->f_5 = -1315566672;
			uParam0->f_11 = { -2327.094f, -1401.05f, 142.4195f };
			break;
		case 8:
			uParam0->f_5 = 395106204;
			uParam0->f_11 = { -2004.499f, -1326.471f, 115.4162f };
			break;
		case 9:
			uParam0->f_5 = 88814361;
			uParam0->f_11 = { -2532.945f, -1409.852f, 145.3983f };
			break;
	}
}

void func_102(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = 970130440;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_20[1] = joaat("DAY");
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 57;
	}
	func_212(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -44146172;
			uParam0->f_11 = { -4886.723f, -3659.611f, 23.51921f };
			break;
		case 1:
			uParam0->f_5 = -1882192159;
			uParam0->f_11 = { -3706.045f, -3561.407f, 47.211f };
			break;
		case 2:
			uParam0->f_5 = -1446495535;
			uParam0->f_11 = { -3997.887f, -3743.7f, 39.394f };
			break;
		case 3:
			uParam0->f_5 = -1153835596;
			uParam0->f_11 = { -4533.075f, -3761.288f, 13.8127f };
			break;
		case 4:
			uParam0->f_5 = 345870470;
			uParam0->f_11 = { -4165.463f, -3614.162f, 49.5309f };
			break;
		case 5:
			uParam0->f_5 = -1885586340;
			uParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
		case 6:
			uParam0->f_5 = 1366147128;
			uParam0->f_11 = { 1879.319f, 2050.416f, 269.9333f };
			break;
		case 7:
			uParam0->f_5 = 1740369108;
			uParam0->f_11 = { 1522.469f, 2192.855f, 333.81f };
			break;
		case 8:
			uParam0->f_5 = -416486532;
			uParam0->f_11 = { 693.7542f, 2222.729f, 222.769f };
			break;
		case 9:
			uParam0->f_5 = -1184690199;
			uParam0->f_11 = { 756.6907f, 2034.318f, 266.4209f };
			break;
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_195(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = joaat("6_TO_18");
	}
	else
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = joaat("18_TO_0");
		uParam0->f_20[1] = joaat("22_TO_4");
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -145880949;
			uParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_197(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_197(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_197(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_197(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_197(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_197(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_197(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_197(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_197(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_197(uParam0, 1);
			break;
	}
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_108(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam1)
	{
		case 35:
			uParam0->f_8 = joaat("HIDEOUT");
			break;
		case 36:
			uParam0->f_8 = joaat("DYNAMIC_AMBUSH");
			break;
		case 37:
			uParam0->f_8 = joaat("DYNAMIC_RESCUE_PED_MULTIPLE");
			break;
		case 38:
			uParam0->f_8 = joaat("DYNAMIC_ESCORT");
			break;
		case 39:
			uParam0->f_8 = joaat("DYNAMIC_CAMPSITE_DEFEND");
			break;
		case 40:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_SABOTAGE");
			break;
		case 41:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_DESTROY");
			break;
		case 42:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_ROADBLOCK");
			break;
		case 43:
			uParam0->f_8 = 362795228;
			break;
	}
	iVar0 = func_214(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		uParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		uParam0->f_7 = 2;
	}
	*uParam0 = func_215(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_199(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_217(func_216(iVar0), iParam2);
		uParam0->f_15[0] = func_218(func_216(iVar0), iParam2);
		uParam0->f_5 = func_219(iVar0, iParam2);
		uParam0->f_11 = { func_220(iVar0, iParam2) };
	}
}

int func_109(int iParam0)
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

int func_110(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
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

struct<2> func_111()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_112()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Local_78[iVar1 /*25*/].f_6.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_113()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (func_175(iVar1, iVar2))
			{
				Jump @49; //curOff = 37
			}
			else
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_221(&iVar2);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_223(func_177(iVar0), func_222(func_177(iVar0)));
		Local_879.f_423[iVar0 /*39*/] = func_222(func_177(iVar0));
		if (bVar3)
		{
			func_119(&(Local_78[iVar2 /*25*/].f_22.f_1), iVar0, 3);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				func_119(&(Local_78[iVar1 /*25*/].f_22.f_1), iVar0, 3);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_115()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_224(&(Local_879.f_309), &(Local_879.f_309.f_32));
	bVar2 = true;
	if (!func_221(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_50.f_4[iVar0] = 0;
			Local_13.f_50.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_78[iVar1 /*25*/].f_11.f_8[iVar0] = 0;
		}
		iVar0++;
	}
	func_225(&(Local_879.f_309.f_75), 8, -1);
	if (bVar2)
	{
		func_225(&(Local_78[iVar1 /*25*/].f_11), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_225(&(Local_78[iVar3 /*25*/].f_11), 8, -1);
			iVar3++;
		}
	}
}

void func_116()
{
	switch (func_226())
	{
		case 0:
			func_227(0, joaat("RE_TREASUREHUNTER_MALES_01"));
			func_228(0, -452499109);
			func_229(0, "0813_G_M_M_UniBraithwaites_01_WHITE_02");
			break;
		case 1:
			func_227(0, joaat("RE_TREASUREHUNTER_MALES_01"));
			func_228(0, -861764706);
			func_229(0, "0718_A_M_M_BtcHillbilly_01_WHITE_02");
			break;
		case 2:
			func_227(0, joaat("RE_TREASUREHUNTER_MALES_01"));
			func_228(0, 346229808);
			func_229(0, "0050_A_M_M_BiVRoughTravellers_01_WHITE_01");
			break;
		case 3:
			func_227(0, joaat("MP_RE_TREASUREHUNTER_MALES_01"));
			func_228(0, -1984768738);
			break;
		case 4:
			func_227(0, joaat("MP_RE_TREASUREHUNTER_FEMALES_01"));
			func_228(0, 1643709708);
			break;
	}
	func_227(1, func_230(joaat("HORSE_CLASS_RIDING"), 1));
	func_231(1, 1);
	switch (func_232())
	{
		case 0:
			func_233(0, 0f, 0f, 0f, 210.128f, 0);
			func_233(1, -0.83f, 5.04f, -0.38f, 273.1825f, 0);
			break;
		case 1:
			func_233(0, 0f, -1f, 0f, -106.91f, 0);
			func_233(1, -2.83f, 6.04f, 0.12f, 93.1825f, 0);
			break;
		case 2:
			func_233(0, 0f, 0f, 0f, -130.41f, 0);
			func_233(1, -0.83f, 5.04f, -0.38f, 273.1825f, 0);
			break;
		case 3:
			func_233(0, 0f, 0f, 0f, -151.84f, 0);
			func_233(1, -0.83f, 5.04f, -0.38f, 273.1825f, 0);
			break;
		case 4:
			func_233(0, 0f, 0f, 0f, -64.19f, 0);
			func_233(1, -4.95f, -6.86f, -0.02f, 93.1825f, 0);
			break;
		case 5:
			func_233(0, 0f, 0f, 0f, -70.56f, 0);
			func_233(1, -2.83f, 3.04f, -0.38f, 93.1825f, 0);
			break;
		case 6:
			func_233(0, 0f, 0f, 0f, -101.52f, 0);
			func_233(1, -0.83f, 5.04f, -0.38f, 93.1825f, 0);
			break;
		case 7:
			func_233(0, 0f, 0f, 0f, 0f, 0);
			func_233(1, 3.17f, -4.04f, -0.38f, 93.1825f, 0);
			break;
		case 8:
			func_233(0, 0f, 0f, 0f, 180f, 0);
			func_233(1, -0.83f, 5.04f, -0.38f, 273.1825f, 0);
			break;
		case 9:
			func_233(0, 0f, 0f, 0f, -138.24f, 0);
			func_233(1, -1.83f, -3.04f, -0.38f, 93.1825f, 0);
			break;
		case 10:
			func_233(0, 0f, 0f, 0f, -146.88f, 0);
			func_233(1, -0.83f, 5.04f, -0.38f, 93.1825f, 0);
			break;
		case 11:
			func_233(0, 0f, 0f, 0f, -113.38f, 0);
			func_233(1, -0.83f, 5.04f, -0.38f, 93.1825f, 0);
			break;
	}
}

void func_117()
{
	func_234(0, joaat("S_TWOFOLDMAP01X"));
	func_234(1, joaat("P_BINOCULARS01X"));
}

void func_118()
{
	if (func_235(9, Local_879.f_4))
	{
		func_236(64);
	}
	if (func_237(9, Local_879.f_4))
	{
		func_236(128);
	}
}

void func_119(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam2;
	iVar1 = iParam1 * 2;
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		MISC::SET_BIT(iParam0, iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar1);
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		MISC::SET_BIT(iParam0, iVar1 + 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar1 + 1);
	}
}

bool func_120(int iParam0)
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

bool func_121(var uParam0, int iParam1)
{
	return func_238(uParam0->f_25, iParam1);
}

void func_122(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_123(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_124(int iParam0)
{
	if (!func_132(iParam0))
	{
		func_239(&(Local_13.f_1), iParam0);
	}
}

bool func_125(int iParam0)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return (func_240(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_126(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_127(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_241(Local_879.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_879.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_242(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_148(128);
	}
	else if (!func_131(128, 255))
	{
		Local_13.f_3.f_1 = func_243(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_13.f_3);
	switch (iVar0)
	{
		case 3:
			Local_13.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_13.f_3);
			return true;
		case 4:
			Local_13.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_128(int iParam0)
{
	return iParam0 != 0;
}

void func_129(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_130(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

bool func_131(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_221(&iParam1))
		{
			return false;
		}
	}
	return func_183(Local_78[iParam1 /*25*/], iParam0);
}

bool func_132(int iParam0)
{
	return func_183(Local_13.f_1, iParam0);
}

bool func_133()
{
	return true;
}

void func_134()
{
}

bool func_135()
{
	return true;
}

bool func_136()
{
	bool bVar0;

	if (!func_244(&bVar0))
	{
		if (bVar0)
		{
			func_245();
		}
		return false;
	}
	if (!func_246(&bVar0))
	{
		if (bVar0)
		{
			func_245();
		}
		return false;
	}
	return true;
}

void func_137()
{
}

void func_138()
{
	if (!func_132(32) && func_247(32))
	{
		func_124(32);
	}
	if (!func_132(64) && func_247(64))
	{
		func_124(64);
	}
	if (!func_132(16) && func_248(16))
	{
		func_124(16);
	}
	if ((!func_132(2048) && func_247(2048)) && !func_247(4096))
	{
		func_124(2048);
	}
}

void func_139()
{
	bool bVar0;

	if (!bVar0 && func_132(16))
	{
		func_126(1);
		return;
	}
	if (func_132(2048) && !func_247(4096))
	{
		func_126(6);
		return;
	}
}

void func_140()
{
	func_249();
}

bool func_141()
{
	if (func_250())
	{
		return true;
	}
	switch (func_251())
	{
		case 0:
		case 1:
			if (func_251() == 0)
			{
				func_253(func_252(0), 0, 0, 291934926, 0);
				func_253(func_252(0), 0, 1, 291934926, 0);
			}
			switch (Local_13.f_7)
			{
				case 0:
					func_254();
					break;
				case 1:
					func_255();
					break;
				case 2:
					func_256();
					break;
				case 14:
					func_257();
					break;
				case 15:
					func_258();
					break;
				case 16:
					func_259();
					break;
				default:
					break;
			}
			break;
		case 2:
		case 3:
			switch (Local_13.f_7)
			{
				case 0:
					func_260();
					break;
				case 3:
					func_261();
					break;
				case 4:
					func_262();
					break;
				case 5:
					func_263();
					break;
				case 6:
					func_264();
					break;
				case 7:
					func_265();
					break;
				case 8:
					func_266();
					break;
				case 9:
					func_267();
					break;
				case 10:
					func_268();
					break;
				case 11:
					func_269();
					break;
				case 12:
					func_270();
					break;
				case 13:
					func_271();
					break;
				case 14:
					func_272();
					break;
				case 15:
					func_273();
					break;
				case 16:
					func_259();
					break;
				default:
					break;
			}
			break;
	}
	if (func_251() == 1)
	{
		if (Local_13.f_7 > 0 && Local_13.f_7 < 16)
		{
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				Local_13.f_7.f_20 = func_274(0, 0, 1, 0);
			}
		}
	}
	return false;
}

void func_142()
{
}

bool func_143()
{
	int iVar0;

	iVar0 = func_252(0);
	if ((((((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_ON_MOUNT(iVar0)) || func_275(iVar0, 518218985)) || func_276()) || Local_13.f_7 == 17) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_277()) >= 40f)
	{
		return true;
	}
	return false;
}

void func_144(int iParam0)
{
	if (func_68(iParam0))
	{
		func_278(&(Local_879.f_7), iParam0);
	}
}

int func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_184(iParam0))
	{
		return 0;
	}
	iVar0 = func_279(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1134390[iVar1 /*83*/].f_70 = iParam0;
	Global_1134390[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_280(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_281(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_146(int iParam0)
{
	if (!func_68(iParam0))
	{
		func_239(&(Local_879.f_7), iParam0);
	}
}

void func_147(int iParam0)
{
	if (func_183(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*25*/], iParam0))
	{
		func_278(&(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*25*/]), iParam0);
	}
}

void func_148(int iParam0)
{
	if (!func_131(iParam0, 255))
	{
		func_239(&(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*25*/]), iParam0);
	}
}

void func_149()
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
				func_282(iVar0);
				break;
			case -1315570756:
				func_283(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_284(iVar0);
		iVar0++;
	}
}

void func_150()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_879.f_505 >= 2)
		{
			Local_879.f_505 = 0;
		}
		func_286(func_285(Local_879.f_505));
		Local_879.f_505++;
		iVar0++;
	}
}

void func_151(int iParam0)
{
	if (Local_879.f_8 != iParam0)
	{
		Local_879.f_8 = iParam0;
	}
}

bool func_152()
{
	bool bVar0;
	char* sVar1;

	bVar0 = false;
	sVar1 = "TREAS";
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar1))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar1);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
		{
			bVar0 = true;
		}
	}
	if (!func_287())
	{
		bVar0 = true;
	}
	if (!func_288())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		return false;
	}
	switch (func_251())
	{
		case 2:
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_879.f_19.f_45, "pl_exchange_f"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_879.f_19.f_45, "pl_exchange_f");
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_879.f_19.f_45, "pl_exchange_m"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_879.f_19.f_45, "pl_exchange_m");
					}
				}
			}
			break;
	}
	HUD::_TEXT_DATABASE_REQUEST("TREAS");
	if (HUD::_TEXT_DATABASE_HAS_LOADED("TREAS"))
	{
		return true;
	}
	return true;
}

bool func_153()
{
	bool bVar0;

	bVar0 = false;
	if (!func_289())
	{
		bVar0 = true;
	}
	if (!func_290())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_154(var uParam0)
{
	*uParam0 = 0;
}

void func_155()
{
}

int func_156()
{
	return 1;
}

int func_157()
{
	bool bVar0;

	if (!func_291())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_158(int iParam0)
{
	return (iParam0 - Global_1296859.f_21) * 1000;
}

void func_159()
{
	if (!func_68(1))
	{
		func_292(Local_879.f_9);
		func_146(1);
	}
}

void func_160()
{
	func_293();
	func_294();
}

void func_161()
{
	int iVar0;
	int iVar1;

	iVar0 = func_252(0);
	switch (func_251())
	{
		case 0:
		case 1:
			func_295(1);
			func_296(&(Local_879.f_19.f_46), func_187(), "base_idle", 4f, -4f, 0);
			iVar1 = func_297(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				ENTITY::PLAY_ENTITY_ANIM(iVar1, "aggro_idle_map", func_188(), 1000f, true, true, true, 0f, 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				func_298(0, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 37709), 0f, 0f, 0f, 0f, 0f, 0f);
				func_298(1, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 7966), 0f, 0f, 0f, 0f, 0f, 0f);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::_REQUEST_PED_EMOTIONAL_PRESET(iVar0, "DEFAULT_SHOCKED");
					WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar0 = func_252(0);
			iVar1 = func_297(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				ENTITY::PLAY_ENTITY_ANIM(iVar1, "aggro_idle_map", func_188(), 1000f, true, true, true, 0f, 2);
			}
			break;
		case 2:
		case 3:
			WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			func_299(0);
			func_296(&(Local_879.f_19.f_46), func_188(), "EXCHANGE_BASE_HUNTER", 4f, -4f, 0);
			break;
	}
	func_300(1, joaat("PERSONA_HONOR_ACTION__MURDER"));
	func_300(2, joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"));
	func_300(0, joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"));
	func_301(0);
	func_303(&(Local_879.f_309), func_302(0), func_302(1), 0);
	func_304();
	PED::_REQUEST_PED_EMOTIONAL_PRESET(func_302(0), "DEFAULT_SHOCKED");
	if (func_305() == 0)
	{
		func_306(0, "NB_TRHU_ILO_NAME");
	}
	else
	{
		func_306(0, "NB_TRHU_ILO_NAME_F");
	}
	Local_879.f_19.f_203 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), iVar0, 0f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	func_307(0);
}

void func_162()
{
	func_308();
}

void func_163()
{
}

void func_164()
{
	float fVar0;

	if (func_241(Local_879.f_15))
	{
		return;
	}
	if (func_309())
	{
		return;
	}
	if (func_310(Local_879.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_879.f_15);
		if (fVar0 < 200f)
		{
			func_148(4096);
		}
		else if (fVar0 < 400f)
		{
			func_147(4096);
			func_148(2048);
		}
		else
		{
			func_147(4096);
			func_147(2048);
		}
	}
}

void func_165()
{
	func_311();
	func_312();
	func_313();
	func_314();
	func_315();
}

void func_166()
{
	if (func_316())
	{
		func_148(8);
	}
	else
	{
		func_147(8);
	}
}

void func_167()
{
	int iVar0;
	int iVar1;

	func_317();
	func_318();
	func_319();
	func_320();
	func_321(joaat("TREASURE_MAP_C2_M1"));
	func_322();
	func_323(0);
	if (func_324(1073741824 /* Float: 2f */) && Local_879.f_19.f_203 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_879.f_19.f_203);
		Local_879.f_19.f_203 = 0;
	}
	switch (func_251())
	{
		case 0:
		case 1:
			switch (Local_879.f_19.f_1)
			{
				case 0:
					func_325();
					break;
				case 1:
					func_326();
					break;
				case 2:
					func_327();
					break;
				case 14:
					func_328();
					break;
				case 15:
					func_329();
					break;
				case 16:
					func_330();
					break;
				default:
					break;
			}
			break;
		case 2:
		case 3:
			func_331();
			func_332();
			func_333();
			switch (Local_879.f_19.f_1)
			{
				case 0:
					func_334();
					break;
				case 3:
					func_335();
					break;
				case 4:
					func_336();
					break;
				case 5:
					func_337();
					break;
				case 6:
					func_338();
					break;
				case 7:
					func_339();
					break;
				case 8:
					func_340();
					break;
				case 9:
					func_341();
					break;
				case 10:
					func_342();
					break;
				case 11:
					func_343();
					break;
				case 12:
					func_344();
					break;
				case 13:
					func_345();
					break;
				case 14:
					func_346();
					break;
				case 15:
					func_347();
					break;
				case 16:
					func_330();
					break;
				default:
					break;
			}
			break;
	}
	if (Local_13.f_7 < 14)
	{
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = func_302(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					func_348(&(Local_879.f_19.f_170), iVar0, 0, 100, 1, 1, 2, 1, 0, 0, 0, 0);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iVar1, &(Local_879.f_19.f_170));
				}
			}
		}
	}
}

void func_168()
{
	if (!func_131(8, 255))
	{
		func_148(16);
	}
	else
	{
		func_147(16);
	}
}

void func_169()
{
	int iVar0;

	Local_879.f_6 = -1;
	Local_879.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_879.f_5 = (Local_879.f_5 || Local_78[iVar0 /*25*/]);
			Local_879.f_6 = (Local_879.f_6 && Local_78[iVar0 /*25*/]);
		}
		iVar0++;
	}
}

bool func_170()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_189(16))
	{
		return true;
	}
	func_349();
	iVar0 = func_252(0);
	iVar1 = func_252(1);
	iVar2 = func_350(1112014848 /* Float: 50f */);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iVar2, 3, 0, -1f, -1, iVar1);
	}
	else
	{
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 3, 0, -1f, -1, iVar1);
	}
	iVar3 = func_351(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iVar3))
			{
				ENTITY::DETACH_ENTITY(iVar3, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar3);
			}
		}
	}
	iVar3 = func_351(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iVar3))
			{
				ENTITY::DETACH_ENTITY(iVar3, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar3);
			}
		}
	}
	func_236(16);
	if (Local_879.f_19.f_203 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_879.f_19.f_203);
		Local_879.f_19.f_203 = 0;
	}
	return true;
}

void func_171()
{
	func_352();
}

void func_172(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_879.f_233.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_879.f_233.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_173(int iParam0, int iParam1)
{
	return func_183(Local_879.f_233.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_174(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_175(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_176(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_879.f_274[iParam0 /*34*/].f_4, iParam1);
}

int func_177(int iParam0)
{
	return iParam0;
}

void func_178(int iParam0, bool bParam1)
{
	int iVar0;

	func_353(iParam0, 8);
	if (!func_354(iParam0, 1))
	{
		return;
	}
	iVar0 = func_355(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!MISC::_0xE98D55C5983F2509(iVar0))
		{
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 315, false);
		}
	}
	func_356(iParam0, bParam1);
	func_353(iParam0, 1);
}

bool func_179(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

void func_180(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_358(func_357(Param0));
	iVar1 = func_359(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_360(Param0, &Var2);
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
	STATS::_0xD5910ECF81A2278C(iVar0, iVar1, iParam2, &Var2);
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_361(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_362(iVar0);
}

void func_182(int iParam0, int iParam1)
{
	func_129(&(Global_1272030.f_3271[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1272030.f_3275[iParam0] = func_363(iParam0);
			break;
		case 1:
			Global_1272030.f_3275[iParam0] = func_364(iParam0);
			break;
		case 2:
			Global_1272030.f_3275[iParam0] = func_365(iParam0);
			break;
	}
}

bool func_183(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_184(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_185(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 != 0)
	{
		return false;
	}
	iVar0 = func_302(iParam0);
	iVar1 = 0;
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = func_366(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (iVar0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1))
						{
							if (func_367())
							{
								func_368(0, 3, 25, 291934926);
							}
							else
							{
								func_368(0, 3, 12, 291934926);
							}
							if (func_369(PLAYER::PLAYER_PED_ID(), Local_879.f_15, 1) < 25f)
							{
								func_370(1);
							}
							return true;
						}
					}
				}
			}
			break;
		case 1:
			if (func_237(9, Local_879.f_4))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				iVar2 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2) == PLAYER::PLAYER_PED_ID())
					{
						return true;
					}
				}
			}
			break;
		case 2:
			if (!func_237(9, Local_879.f_4) || (func_251() == 1 && (func_324(1) || PED::IS_PED_IN_COMBAT(iVar0, 0))))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				iVar2 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2) == PLAYER::PLAYER_PED_ID())
					{
						return true;
					}
				}
			}
			break;
	}
	return false;
}

void func_186(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_371(iVar0, bParam0);
		iVar0++;
	}
}

char* func_187()
{
	return "script_re@treasure_hunter";
}

char* func_188()
{
	return "script_re@treasure_hunter@treasure_hunter_offer";
}

bool func_189(int iParam0)
{
	return func_183(Local_879.f_19.f_2, iParam0);
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_372(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_373(iParam1);
	func_374(iVar0, iParam0);
}

void func_191()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_375(iVar0);
		iVar0++;
	}
}

bool func_192(var uParam0)
{
	if (func_40(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_193(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_376(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_377(iParam1)) - 1);
	}
	bVar2 = func_40(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21(Global_1198046.f_231[iVar6 /*15*/].f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_194(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_378(uParam0);
			break;
		case 1:
			func_378(uParam0);
			break;
		case 2:
			func_378(uParam0);
			break;
		case 3:
			func_379(uParam0);
			break;
		case 4:
			func_378(uParam0);
			break;
		case 5:
			func_378(uParam0);
			break;
		case 6:
			func_379(uParam0);
			break;
		case 7:
			func_379(uParam0);
			break;
		case 8:
			func_379(uParam0);
			break;
		case 9:
			func_378(uParam0);
			break;
		default:
			func_196(uParam0);
			func_195(uParam0);
			break;
	}
}

void func_195(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_198(uParam0, iVar0);
		iVar0++;
	}
}

void func_196(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_197(uParam0, iVar0);
		iVar0++;
	}
}

void func_197(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_198(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_199(var uParam0, int iParam1)
{
	func_280(&(uParam0->f_25), iParam1);
}

void func_200(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_198(uParam0, 0);
			break;
		case 1:
		case 2:
			func_198(uParam0, 1);
			func_198(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_198(uParam0, 0);
			func_198(uParam0, 2);
			break;
		case 8:
			func_198(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_198(uParam0, 1);
			break;
		default:
			func_195(uParam0);
			break;
	}
}

void func_201(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_380(uParam0);
			break;
		case 1:
			func_381(uParam0);
			break;
		case 2:
			func_382(uParam0);
			break;
		case 3:
			func_383(uParam0);
			break;
		default:
			func_196(uParam0);
			func_195(uParam0);
			break;
	}
}

Vector3 func_202(int iParam0)
{
	if (!func_184(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

void func_203(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_384(uParam0);
			break;
		case 1:
		case 2:
			func_385(uParam0);
			break;
		case 3:
		case 4:
			func_386(uParam0);
			break;
		default:
			func_195(uParam0);
			break;
	}
	func_196(uParam0);
}

void func_204(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_198(uParam0, 0);
			func_198(uParam0, 2);
			break;
		case 1:
			func_198(uParam0, 1);
			func_198(uParam0, 3);
			break;
		default:
			func_196(uParam0);
			func_195(uParam0);
			break;
	}
}

void func_205(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_197(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_197(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_197(uParam0, 0);
			break;
		default:
			func_197(uParam0, 0);
			break;
	}
	func_195(uParam0);
}

void func_206(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_197(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_197(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_197(uParam0, 2);
			break;
		default:
			func_196(uParam0);
			break;
	}
	func_195(uParam0);
}

void func_207(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_197(uParam0, 0);
			func_198(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_197(uParam0, 1);
			func_198(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_197(uParam0, 2);
			func_198(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_197(uParam0, 3);
			func_198(uParam0, 0);
			break;
	}
}

void func_208(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_197(uParam0, 0);
			func_198(uParam0, 0);
			break;
		case 2:
			func_197(uParam0, 1);
			func_198(uParam0, 0);
			break;
		case 3:
		case 4:
			func_197(uParam0, 2);
			func_198(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_197(uParam0, 3);
			func_198(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_197(uParam0, 4);
			func_198(uParam0, 1);
			break;
	}
}

void func_209(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_197(uParam0, 3);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			break;
		default:
			func_196(uParam0);
			break;
	}
	func_195(uParam0);
}

void func_210(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_197(uParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			break;
		default:
			func_196(uParam0);
			break;
	}
	func_195(uParam0);
}

void func_211(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_198(uParam0, 0);
			func_197(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_198(uParam0, 1);
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			break;
		default:
			func_198(uParam0, 0);
			func_197(uParam0, 0);
			break;
	}
}

void func_212(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_198(uParam0, 0);
			func_197(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_198(uParam0, 1);
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			break;
		default:
			func_198(uParam0, 0);
			func_197(uParam0, 0);
			break;
	}
}

void func_213(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_195(uParam0);
			func_196(uParam0);
			break;
		default:
			func_195(uParam0);
			func_196(uParam0);
			break;
	}
}

int func_214(int iParam0)
{
	return Global_1272030.f_3348[iParam0];
}

int func_215(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_3;
}

int func_216(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/];
}

var func_217(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_387(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_389(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_218(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_387(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_389(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_219(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_390(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

Vector3 func_220(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_390(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

bool func_221(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_391(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

var func_222(int iParam0)
{
	return Local_13.f_57[iParam0 /*3*/];
}

void func_223(int iParam0, var uParam1)
{
	if (iParam0 == 1)
	{
		func_392(iParam0, 0);
		return;
	}
	switch (func_393(uParam1))
	{
		case 0:
			func_392(iParam0, 0);
			break;
		case 1:
			func_394(iParam0, 1);
			break;
		case 2:
			if (func_189(1024))
			{
				func_395("NB_TRHU_HELP", 10000, 0, 0, 0, 1);
				func_396(1024);
			}
			func_392(iParam0, 1);
			func_397(iParam0, 0, "NB_TRHU_PROMPT_BUY", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
			func_397(iParam0, 1, "INTERACT_DECLINE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			if (!func_324(512))
			{
				func_398(iParam0, 0, "NB_TRHU_PROMPT_BUY", 500, 1, 1);
			}
			else
			{
				func_398(iParam0, 0, "NB_TRHU_PROMPT_BUY", 250, 1, 1);
			}
			func_399(iParam0, 0);
			func_400(iParam0, 0, 1, 1);
			func_400(iParam0, 1, 1, 1);
			func_394(iParam0, 0);
			break;
		case 3:
			func_399(iParam0, 8);
			func_400(iParam0, 0, 0, 1);
			func_400(iParam0, 1, 0, 1);
			break;
	}
}

void func_224(var uParam0, var uParam1)
{
	func_401(uParam0);
	func_402(uParam0, 1);
	func_403(uParam0, 1);
	func_404(uParam1);
	func_405(uParam1);
	func_406(uParam1);
	func_407(uParam1, 1);
	func_408(uParam1, 1);
}

int func_225(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_409(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_410(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_410(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_410(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_226()
{
	return Local_879.f_19;
}

void func_227(int iParam0, int iParam1)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_3 = iParam1;
}

void func_228(int iParam0, int iParam1)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_4 = iParam1;
}

void func_229(int iParam0, char* sParam1)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_10 = sParam1;
}

int func_230(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_DRAFT"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_DRAFT"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_RACE"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RACE"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WAR"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WAR"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WORK"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WORK"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), true, false, 0f, 0f, 0f);
}

void func_231(int iParam0, int iParam1)
{
	func_239(&(Local_879.f_233.f_7[iParam0 /*11*/].f_2), iParam1);
}

int func_232()
{
	return Local_879.f_2;
}

void func_233(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_879.f_233.f_7[iParam0 /*11*/].f_5 = fParam4;
	if (bParam5)
	{
		func_239(&(Local_879.f_233.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_278(&(Local_879.f_233.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_234(int iParam0, int iParam1)
{
	func_411(0, iParam0, iParam1);
}

bool func_235(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_372(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_373(iParam1);
	return func_412(iVar0, iParam0);
}

void func_236(int iParam0)
{
	func_239(&(Local_879.f_19.f_2), iParam0);
}

bool func_237(int iParam0, int iParam1)
{
	if (!func_372(iParam0, iParam1))
	{
		return false;
	}
	return func_412(iParam1, iParam0);
}

bool func_238(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_239(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_240(int iParam0)
{
	int iVar0;

	if (!func_184(iParam0))
	{
		return false;
	}
	iVar0 = func_413(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_241(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_242(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_243(struct<31> Param0)
{
	var uVar0;

	func_242(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

bool func_244(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (func_173(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_414(iVar2, uParam0, &bVar1))
				{
					if (*uParam0)
					{
						return false;
					}
					if (bVar1)
					{
						bVar0 = true;
					}
				}
			}
			if (func_415(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_43[iVar2]))
					{
						NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_43[iVar2]);
					}
				}
			}
		}
		iVar2++;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_245()
{
	func_126(2);
}

bool func_246(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;

	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*bParam0 = 1;
		return false;
	}
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_879.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = func_416(iVar0, iVar1);
			if (func_175(iVar0, iVar1))
			{
			}
			else if (func_174(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_2, iVar1))
			{
				if (func_417(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_46[iVar0 /*3*/][iVar1]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_46[iVar0 /*3*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
				{
					if (!func_418(iVar0, iVar1))
					{
						vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_419(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_419(iVar0, iVar1) };
					}
					if (func_420(iVar0, iVar1))
					{
						if (!func_421(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_422(iVar0, iVar1))
							{
								iVar13 = PED::_0x9641A9A20310F6B8(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 1, 0, 0);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_46[iVar0 /*3*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_423(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5, Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_4, func_419(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_46[iVar0 /*3*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_13.f_46[iVar0 /*3*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1091; //curOff = 577
							}
							else if (!func_424(&(Local_13.f_46[iVar0 /*3*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar0 /*3*/][iVar1]);
								if (func_417(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_46[iVar0 /*3*/][iVar1]))
										{
											NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_46[iVar0 /*3*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_2), iVar1);
								if (func_425(iVar0, iVar1))
								{
									TASK::_0x78B4567E18B54480(iVar13);
									GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
								}
								if (func_426(iVar0, iVar1))
								{
									ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
								}
								if (func_427(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_0xA91E6CF94404E8C9(iVar13);
								}
								if (func_420(iVar0, iVar1))
								{
									ENTITY::_0x9587913B9E772D29(iVar13, 0);
								}
								vVar4 = { func_428(iVar0, iVar1) };
								if (!func_241(vVar4))
								{
									if (vVar4.x == 0f && vVar4.y == 0f)
									{
										if (vVar4.z != 0f)
										{
											ENTITY::SET_ENTITY_HEADING(iVar13, vVar4.z);
										}
									}
									else
									{
										ENTITY::SET_ENTITY_ROTATION(iVar13, vVar4, 2, true);
										if (!func_429(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_430(vVar4.x)), MISC::ABSF(func_430(vVar4.y))) };
											vVar27 = { func_431(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_432(iVar0, iVar1))
								{
									func_433(iVar0, iVar1, 1);
								}
								if (func_434(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(iVar13, true);
								}
								bVar3 = true;
							}
							else
							{
								iVar1++;
							}
							iVar0++;
							if (bVar3)
							{
								return false;
							}
							return true;
						}
					}
				}
			}
		}
	}
}

bool func_247(int iParam0)
{
	return func_183(Local_879.f_5, iParam0);
}

bool func_248(int iParam0)
{
	return func_183(Local_879.f_6, iParam0);
}

void func_249()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_435(&(Local_13.f_57[iVar0 /*3*/]), func_177(iVar0));
		iVar0++;
	}
}

bool func_250()
{
	int iVar0;

	iVar0 = func_252(0);
	if (func_276())
	{
		if (Local_13.f_7 == 17)
		{
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return true;
		}
		if (func_324(1073741824 /* Float: 2f */))
		{
			if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || (PED::IS_PED_FLEEING(iVar0) && !func_436(0, 50f, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

var func_251()
{
	return func_437();
}

int func_252(int iParam0)
{
	return func_302(iParam0);
}

int func_253(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_13.f_7.f_5, iParam2) || MISC::IS_BIT_SET(Local_879.f_19.f_7, iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, func_438(iParam2)))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, 0);
		AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, 0);
		if (!func_440(iParam0, func_439(iParam2), iParam3, iParam1, !bParam4, 0, 0, 1))
		{
		}
		MISC::SET_BIT(&(Local_13.f_7.f_5), iParam2);
		MISC::SET_BIT(&(Local_879.f_19.f_7), iParam2);
		return 1;
	}
	return 0;
}

void func_254()
{
	int iVar0;

	iVar0 = func_252(0);
	if (!func_441(0))
	{
	}
	if (func_324(1073741824 /* Float: 2f */))
	{
		if (func_251() != 1)
		{
			func_442(16);
			return;
		}
	}
	if (func_309())
	{
		if (func_324(1))
		{
			if (func_251() == 1)
			{
				if (!func_443(iVar0, 242628503) || TASK::GET_SEQUENCE_PROGRESS(iVar0) >= 1)
				{
					func_442(2);
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_187(), "standing_idle", 1))
			{
				func_442(1);
			}
		}
	}
}

void func_255()
{
	int iVar0;

	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	iVar0 = func_252(0);
	if (func_324(2))
	{
		if (!func_275(iVar0, 1435919172))
		{
			func_444();
			func_442(14);
		}
	}
}

void func_256()
{
	func_445(1024, 1);
	func_442(16);
}

void func_257()
{
	int iVar0;

	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	iVar0 = func_252(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_442(15);
	}
}

void func_258()
{
	int iVar0;

	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	iVar0 = func_252(0);
	if (func_276())
	{
		func_442(17);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_442(14);
		}
	}
}

void func_259()
{
	func_446(11, 1, 1);
	func_446(13, 1, 1);
	if (!func_447(512))
	{
		if (func_324(33554432))
		{
			if (!func_447(8192))
			{
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_445(8192, 1);
			}
			else if (Local_13.f_7.f_6 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000)
			{
				if (!func_448(0))
				{
					if (func_449())
					{
						if (func_324(2097152))
						{
							func_368(0, 3, 23, 291934926);
						}
						else if (!func_324(131072))
						{
							if (!func_324(262144))
							{
								func_368(0, 3, 17, 291934926);
							}
							else
							{
								func_368(0, 3, 24, 291934926);
							}
						}
					}
					else if (func_251() == 1)
					{
						func_368(0, 3, 23, 291934926);
					}
					else if (func_324(2097152))
					{
						func_368(0, 3, 10, 1744022339);
					}
					else if (!func_450(8))
					{
						func_368(0, 3, 8, 1744022339);
					}
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_445(512, 1);
				}
			}
		}
	}
	else if (Local_13.f_7.f_6 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000)
	{
		if (!func_448(0))
		{
			if ((func_276() && func_451(0, 255, 1) > 5f) && func_369(func_252(0), Local_879.f_15, 1) > 20f)
			{
				func_442(17);
				return;
			}
		}
	}
}

void func_260()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	if (func_309())
	{
		func_442(3);
	}
	else if (func_448(0))
	{
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	else if (Local_13.f_7.f_6 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
	{
		func_368(0, 0, 1, 291934926);
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

void func_261()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	switch (func_452())
	{
		case 2:
			func_453(255);
			func_442(5);
			break;
		case -1:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_448(0))
				{
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
				else if (Local_13.f_7.f_6 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
				{
					func_368(0, 0, 1, 291934926);
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
			break;
	}
}

void func_262()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
}

void func_263()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	func_441(0);
	if (func_324(2048))
	{
		if (func_454(0, 1))
		{
			func_442(6);
		}
	}
}

void func_264()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	func_441(0);
	if (func_324(128))
	{
		if (func_455(0))
		{
			if (func_454(0, 2))
			{
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_442(7);
			}
		}
	}
}

void func_265()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	func_456();
}

void func_266()
{
	if (func_324(8))
	{
		func_442(9);
	}
}

void func_267()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	if (func_324(8388608))
	{
		if (func_324(262144))
		{
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false)) || func_324(262144))
			{
				if (func_454(0, 0))
				{
					func_442(14);
				}
			}
		}
	}
}

void func_268()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	if (func_324(512))
	{
		func_442(11);
	}
}

void func_269()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	if (func_455(0))
	{
		if (func_454(0, 2))
		{
			func_442(7);
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			Local_13.f_7.f_9 = 0;
			Local_13.f_7.f_10 = 0;
			SCRIPTS::_0xDE544B7EC0C187CC(&(Local_13.f_7.f_12));
			SCRIPTS::_0xDE544B7EC0C187CC(&(Local_13.f_7.f_13));
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
			{
				SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_12), Local_13.f_7.f_21);
				SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_13), Local_13.f_7.f_21);
			}
			Local_13.f_7.f_20 = 255;
			func_445(262144, 1);
			func_457(2048, 1);
		}
	}
}

void func_270()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	if (func_454(0, 0))
	{
		if (func_324(1024))
		{
			func_442(13);
		}
	}
}

void func_271()
{
	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
	{
		func_442(14);
	}
}

void func_272()
{
	int iVar0;

	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	iVar0 = func_252(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_442(15);
	}
}

void func_273()
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (func_324(1073741824 /* Float: 2f */))
	{
		func_442(16);
		return;
	}
	iVar0 = func_252(0);
	iVar2 = func_458(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &uVar1, 80f, 0, 0, 1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		func_442(17);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_442(14);
		}
	}
}

int func_274(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_879.f_233.f_7[iParam0 /*11*/]))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
		}
		else if (Local_78[iVar0 /*25*/].f_6.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_459(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_78[iVar0 /*25*/].f_6.f_2[iParam0] > Local_78[iVar1 /*25*/].f_6.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_78[iVar0 /*25*/].f_6.f_2[iParam0] > fParam1)
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

bool func_275(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_276()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(func_351(0)))
	{
		if (func_460(1112014848 /* Float: 50f */))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else if (Local_13.f_7.f_26 == 0)
	{
		Local_13.f_7.f_26 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (func_324(262144))
	{
		return true;
	}
	else if (!func_461(128))
	{
		if (Local_13.f_7.f_26 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_26, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				return true;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_351(0)))
		{
			return false;
		}
	}
	iVar0 = func_302(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (!func_436(0, 50f, 0))
	{
		return true;
	}
	if (ENTITY::_0x8DE41E9902E85756(iVar0))
	{
		if (Local_13.f_7.f_27 == 0)
		{
			Local_13.f_7.f_27 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		if (Local_13.f_7.f_27 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_27, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_277()
{
	return Local_879.f_15;
}

void func_278(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_279(int iParam0)
{
	if (!func_184(iParam0))
	{
		return 0;
	}
	if (!func_240(iParam0))
	{
		return 0;
	}
	return Global_1131196[iParam0 /*27*/].f_18.f_1;
}

void func_280(var uParam0, int iParam1)
{
	func_462(uParam0, iParam1);
}

void func_281(var uParam0, int iParam1)
{
	func_463(uParam0, iParam1);
}

void func_282(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_464(&Var0, iParam0))
			{
				func_465(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_283(int iParam0)
{
}

void func_284(int iParam0)
{
	vector3 vVar0;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0) != joaat("EVENT_PLAYER_PROMPT_TRIGGERED"))
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	iVar12 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar12))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar12))
	{
		return;
	}
	iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12);
	if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
	{
		return;
	}
	if (iVar13 != func_302(1))
	{
		return;
	}
	switch (iVar11)
	{
		case 11:
		case 33:
			func_466(512);
			break;
	}
}

int func_285(int iParam0)
{
	return iParam0;
}

void func_286(int iParam0)
{
	int iVar0;

	if (func_467(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_468(iParam0, func_285(iVar0)))
			{
				if (!func_469(iParam0, func_285(iVar0)))
				{
					if (func_185(iParam0, iVar0))
					{
						func_470(Local_879.f_505.f_7[iVar0], 0, 0);
						func_471(iParam0, func_285(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_287()
{
	if (!func_449())
	{
		return true;
	}
	if (!HUD::_DOES_TEXT_DATABASE_EXIST("NBTHAUD"))
	{
		return true;
	}
	if (!HUD::_0x3CF96E16265B7DC8("NBTHAUD"))
	{
		HUD::_TEXT_DATABASE_REQUEST("NBTHAUD");
	}
	return HUD::_TEXT_DATABASE_HAS_LOADED("NBTHAUD");
}

bool func_288()
{
	bool bVar0;

	if (func_183(Local_879.f_19.f_3, 4))
	{
		return true;
	}
	bVar0 = false;
	switch (func_251())
	{
		case 0:
		case 1:
			if (!func_472(func_187()))
			{
				bVar0 = true;
			}
			if (!func_472(func_188()))
			{
				bVar0 = true;
			}
			break;
		case 2:
		case 3:
			if (!func_472(func_187()))
			{
				bVar0 = true;
			}
			if (!func_472(func_188()))
			{
				bVar0 = true;
			}
			if (!func_474(func_473(), &(Local_879.f_19.f_45), &(Local_13.f_7.f_17), 64, "pl_root"))
			{
				bVar0 = true;
			}
			break;
	}
	if (bVar0)
	{
		return false;
	}
	func_239(&(Local_879.f_19.f_3), 4);
	return true;
}

bool func_289()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (MISC::IS_BIT_SET(Local_879.f_233.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_475(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_879.f_233.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_879.f_233.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_879.f_233.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

bool func_290()
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
		while (iVar1 < 2)
		{
			if (MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_416(iVar0, iVar1);
				if (func_476(iVar1))
				{
					if (Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_0x93FFD92F05EC32FD(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6 = PED::_0x91FE941F9FCFB702(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_1), iVar1);
					}
				}
				else if (func_477(iVar1))
				{
					WEAPON::_0x72D4CB5DB927009C(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5, -1, 0);
					if (!WEAPON::_0xFF07CF465F48B830(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @468; //curOff = 360
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @468; //curOff = 422
					}
					else if (!MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return false;
	}
	return true;
}

bool func_291()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;

	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_879.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = func_416(iVar0, iVar1);
			if (func_174(iVar0, iVar1))
			{
			}
			else if (!func_175(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_2, iVar1))
					{
						if (func_417(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_46[iVar0 /*3*/][iVar1]))
								{
									NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_46[iVar0 /*3*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_418(iVar0, iVar1))
				{
					vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_419(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_419(iVar0, iVar1) };
				}
				if (func_420(iVar0, iVar1))
				{
					if (!func_421(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_422(iVar0, iVar1))
						{
							iVar13 = PED::_0x9641A9A20310F6B8(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 0, 0, 0);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_423(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5, Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_4, func_419(iVar0, iVar1), true, 1f);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (iVar2 == 0)
						{
							Jump @837; //curOff = 451
						}
						else
						{
							iVar13 = OBJECT::CREATE_OBJECT(iVar2, vVar7, false, true, false, false, true);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_2), iVar1);
						if (func_425(iVar0, iVar1))
						{
							TASK::_0x78B4567E18B54480(iVar13);
							GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
						}
						if (func_426(iVar0, iVar1))
						{
							ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
						}
						if (func_427(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar13);
						}
						if (func_420(iVar0, iVar1))
						{
							ENTITY::_0x9587913B9E772D29(iVar13, 0);
						}
						vVar4 = { func_428(iVar0, iVar1) };
						if (!func_241(vVar4))
						{
							if (vVar4.x == 0f && vVar4.y == 0f)
							{
								if (vVar4.z != 0f)
								{
									ENTITY::SET_ENTITY_HEADING(iVar13, vVar4.z);
								}
							}
							else
							{
								ENTITY::SET_ENTITY_ROTATION(iVar13, vVar4, 2, true);
								if (!func_429(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_430(vVar4.x)), MISC::ABSF(func_430(vVar4.y))) };
									vVar27 = { func_431(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_432(iVar0, iVar1))
						{
							func_433(iVar0, iVar1, 1);
						}
						bVar3 = true;
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					if (bVar3)
					{
						return false;
					}
					return true;
				}
			}
		}
	}
}

void func_292(struct<2> Param0)
{
	if (func_359(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_359(Param0)))
	{
		STATS::_0x99230691875FC218(func_357(Param0), func_359(Param0), Global_35);
	}
}

void func_293()
{
	int iVar0;
	int iVar1;

	if (!func_221(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_478(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_294()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (func_175(iVar1, iVar2))
			{
			}
			else if (func_174(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*3*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar1 /*3*/][iVar2]);
				Local_879.f_274[iVar1 /*34*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_417(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*3*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_46[iVar1 /*3*/][iVar2]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_46[iVar1 /*3*/][iVar2]);
						}
					}
				}
				if (func_425(iVar1, iVar2))
				{
					TASK::_0x78B4567E18B54480(iVar0);
					GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, true);
				}
			}
			else if (0 != func_416(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_295(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_252(0);
	if (func_479(iVar0, -2017877118, 1, 0))
	{
		TASK::TASK_PLAY_ANIM(iVar0, func_187(), "base_idle", 1000f, -4f, -1, 1, 0f, false, 0, false, 0, false);
		PED::_0x2208438012482A1A(iVar0, false, false);
	}
	iVar1 = func_252(1);
	if (func_479(iVar1, 993674639, 1, 0))
	{
		if (!PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC")))
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(iVar1, joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), -1, true, 0, -1f, false);
		}
	}
	if (bParam0)
	{
		func_480(7f);
	}
	PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, 0);
}

void func_296(var uParam0, char* sParam1, char* sParam2, float fParam3, float fParam4, int iParam5)
{
	*uParam0 = 1;
	uParam0->f_1 = fParam3;
	uParam0->f_2 = fParam4;
	uParam0->f_3 = sParam1;
	uParam0->f_4 = sParam2;
	uParam0->f_5 = iParam5;
}

int func_297(int iParam0)
{
	return func_351(iParam0);
}

int func_298(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	int iVar0;

	iVar0 = func_297(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iParam1, iParam2, vParam3, vParam6, false, false, false, false, 2, true, false, false);
	return 1;
}

bool func_299(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	var uVar11;

	if (!bParam0)
	{
		func_480(35f);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
	{
		return false;
	}
	bVar0 = false;
	bVar1 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, true);
	if (!bVar1)
	{
		if (!func_481())
		{
			bVar0 = true;
		}
		if (!func_482(&vVar2, &vVar5))
		{
		}
		ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Local_879.f_19.f_45, &vVar8, &uVar11, 2);
		if (!func_483(vVar2, vVar8, 1f, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_879.f_19.f_45, vVar2, vVar5, 2);
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_879.f_19.f_45);
			}
		}
	}
	return bVar1;
}

void func_300(int iParam0, int iParam1)
{
	Local_879.f_505.f_7[iParam0] = iParam1;
}

void func_301(int iParam0)
{
	Local_879.f_505.f_1[iParam0] = -1;
}

int func_302(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/];
}

void func_303(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_484(uParam0, iParam1, iParam3);
	func_485(uParam0, iParam2, iParam3);
}

void func_304()
{
	if (!func_367())
	{
		return;
	}
	if (func_305() == 0)
	{
		func_486(&(Local_879.f_19.f_72), func_302(0), "RE005_MALE1", 0);
	}
	else
	{
		func_486(&(Local_879.f_19.f_72), func_302(0), "RE005_FEMALE1", 0);
	}
}

int func_305()
{
	if (func_226() == 4)
	{
		return 1;
	}
	return 0;
}

void func_306(int iParam0, char* sParam1)
{
	if (func_487(sParam1, Local_879.f_423[iParam0 /*39*/].f_3) == 0)
	{
		return;
	}
	Local_879.f_423[iParam0 /*39*/].f_3 = sParam1;
	func_488(iParam0, 8);
}

bool func_307(int iParam0)
{
	return func_489(&(Local_879.f_309.f_75), 6, iParam0);
}

void func_308()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_491(func_490(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_0xBB1E41DD3D3C6250(Var1, "MpRandomEvent", 1);
					func_492(&(Local_879.f_309), Var1);
					func_493(func_490(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_309()
{
	return (func_132(32) || func_131(32, 255));
}

bool func_310(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_494(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 != 0 && (Global_1296859.f_21 - iVar2) < iParam1)
	{
		return true;
	}
	return false;
}

void func_311()
{
	func_495();
	func_496();
	func_497();
}

void func_312()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_498(iVar0, bVar1, iVar2);
		func_499(iVar0, bVar1, iVar2);
		func_500(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_313()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!func_221(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_879.f_233.f_40)
	{
		bVar8 = true;
		Local_879.f_233.f_40 = !Local_879.f_233.f_40;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_879.f_233.f_30 >= 2)
		{
			Local_879.f_233.f_30 = 0;
		}
		iVar0 = Local_879.f_233.f_30;
		Local_879.f_233.f_30++;
		iVar9 = func_501(iVar0);
		iVar1 = Local_879.f_233.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_173(iVar9, 4))
		{
			func_478(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_78[iVar3 /*25*/].f_6.f_2[iVar0] > -1f)
			{
				Local_78[iVar3 /*25*/].f_6.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_879.f_233.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_879.f_233.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_879.f_233.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_879.f_233.f_31), iVar0);
			}
		}
		else
		{
			bVar7 = func_502(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_879.f_233.f_31, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_879.f_233.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_879.f_233.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_78[iVar3 /*25*/].f_6.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_78[iVar3 /*25*/].f_6.f_1), iVar0);
				}
				func_503(&(Local_879.f_233.f_32[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_78[iVar3 /*25*/].f_6.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_504(&(Local_879.f_233.f_32[iVar0 /*3*/])) || func_505(&(Local_879.f_233.f_32[iVar0 /*3*/]), 0.5f))))
			{
				func_506(&(Local_879.f_233.f_32[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_78[iVar3 /*25*/].f_6.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_173(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_879.f_233.f_40, false, 256);
		}
		if (func_173(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_507(iVar9))
						{
							if (!func_414(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_508(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::_0xB07D3185E11657A5(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_173(iVar9, 8))
			{
				if (!func_507(iVar9))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_879.f_233.f_31 != 0)
	{
		if (!func_509(1, 255))
		{
			func_510(1);
		}
	}
	else if (func_509(1, 255))
	{
		func_511(1);
	}
}

void func_314()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	int iVar19;
	int iVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;

	Var5.f_6 = 1065353216;
	Var5.f_7 = 1065353216;
	Var5.f_8 = 1065353216;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_221(&iVar25))
	{
		return;
	}
	func_512();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::_0x705BE297EEBDB95D(iVar26))
	{
		Local_879.f_309.f_64 = 0;
		Local_78[iVar25 /*25*/].f_11.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == joaat("WEAPON_MOONSHINEJUG") || iVar26 == joaat("WEAPON_MOONSHINEJUG_MP")));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_879.f_309.f_109 >= 2)
		{
			Local_879.f_309.f_109 = 0;
		}
		iVar1 = Local_879.f_309.f_109;
		Local_879.f_309.f_109++;
		iVar22++;
		iVar18 = func_490(iVar1);
		if (!func_513(iVar18))
		{
		}
		else if (func_514(iVar18, &Var5))
		{
			if (func_515(&Var5, iVar18))
			{
				if (func_489(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1))
				{
					func_516(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1);
				}
			}
			else if (!func_489(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1))
			{
				func_517(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_518(iVar18);
				if (func_519(iVar18))
				{
					if (func_520(iVar18))
					{
						if (!func_521(iVar18))
						{
							func_522(iVar18);
						}
					}
					if (func_523(iVar18))
					{
						func_524(iVar18);
					}
				}
				else
				{
					if (func_307(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_525(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_492(&(Local_879.f_309), Var5);
						}
					}
					if (!func_526(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_527(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_528(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_529(Var5, Var5.f_1, &(Local_879.f_309), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_879.f_309.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_879.f_309.f_64), iVar18);
									}
									break;
								case 8:
									if (bVar27)
									{
										if (!WEAPON::_IS_WEAPON_LASSO(iVar26) && !TASK::_0x8785E6E40C7A8819(PLAYER::PLAYER_PED_ID()))
										{
											bVar2 = true;
										}
									}
									break;
								default:
									bVar2 = true;
									break;
							}
						}
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_530(PLAYER::PLAYER_PED_ID(), Var5, 1060437492 /* Float: 0.707f */) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_531(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_879.f_309.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_532(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_0xBB1E41DD3D3C6250(Var5, "MpRandomEvent", 1);
										func_493(iVar18);
									}
								}
								if (bVar30)
								{
									iVar31 = EVENT::_0x796EECFF0C6D39BE(Var5, 1, 1);
									if (iVar31 != 0)
									{
										iVar32 = EVENT::_0x822A001BCEA5BD81(Var5, iVar31, 1, 1);
										if (ENTITY::DOES_ENTITY_EXIST(iVar32) && ENTITY::IS_ENTITY_A_PED(iVar32))
										{
											iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar32);
											if (PED::IS_PED_A_PLAYER(iVar33) && iVar33 == PLAYER::PLAYER_PED_ID())
											{
												switch (iVar31)
												{
													case joaat("EVENT_SHOT_FIRED"):
														if (func_533(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_879.f_309.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_879.f_309.f_2 & 4 != 0)
														{
															iVar4 = 4;
															bVar2 = true;
														}
														break;
												}
											}
										}
										EVENT::_0x1A5C5D350068A673(Var5, 1);
									}
								}
								if (!bVar2)
								{
									if (func_534(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_879.f_309.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_535(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_489(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1))
								{
									func_516(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1);
								}
								func_536(iVar18, 1);
								if (func_537(iVar18))
								{
									if (!func_538(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_539(iVar18))
											{
											}
											else
											{
												func_540(iVar18);
												func_541(iVar18);
												Jump @1397; //curOff = 1201
												if (func_542(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (Local_879.f_309.f_111[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_879.f_309.f_111[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_879.f_309.f_111[iVar18];
																Local_879.f_309.f_111[iVar18]++;
															}
															iVar24++;
															if (func_543(iVar0, &uVar21, &iVar20, &iVar19))
															{
																if (!func_544(iVar18, iVar20))
																{
																	if (func_526(iVar18, iVar0))
																	{
																		if (!func_545(iVar18, uVar21, iVar20, iVar19))
																		{
																		}
																		else
																		{
																			func_546(iVar18, iVar20);
																		}
																	}
																}
															}
														}
														iVar23++;
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
}

void func_315()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_547(&(Local_13.f_57[iVar0 /*3*/]), &(Local_879.f_423[iVar0 /*39*/]), func_177(iVar0));
		iVar0++;
	}
}

bool func_316()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_879.f_14))
	{
		return false;
	}
	if (func_548())
	{
		return false;
	}
	if (func_549(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_317()
{
	int iVar0;
	int iVar1;
	struct<15> Var2;

	Local_879.f_19.f_196 = -1;
	Local_879.f_19.f_197 = 0;
	Local_879.f_19.f_198 = -1;
	Local_879.f_19.f_199 = 0;
	Local_879.f_19.f_200 = -1;
	Local_879.f_19.f_201 = 0;
	if (!func_221(&iVar1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_879.f_19.f_196 = (Local_879.f_19.f_196 && Local_78[iVar0 /*25*/].f_1);
			Local_879.f_19.f_197 = (Local_879.f_19.f_197 || Local_78[iVar0 /*25*/].f_1);
			Local_879.f_19.f_198 = (Local_879.f_19.f_198 && Local_78[iVar0 /*25*/].f_1.f_1);
			Local_879.f_19.f_199 = (Local_879.f_19.f_199 || Local_78[iVar0 /*25*/].f_1.f_1);
			Local_879.f_19.f_200 = (Local_879.f_19.f_200 && Local_78[iVar0 /*25*/].f_1.f_2);
			Local_879.f_19.f_201 = (Local_879.f_19.f_201 || Local_78[iVar0 /*25*/].f_1.f_2);
			Local_78[iVar1 /*25*/].f_1.f_3 = (Local_78[iVar1 /*25*/].f_1.f_3 || Local_78[iVar0 /*25*/].f_1.f_3);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (((func_550(8388608, iVar0) && !func_324(262144)) && !func_447(65536)) && Local_13.f_7 != 9)
				{
					Var2 = { func_551(-180890260) };
					Var2.f_10 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					if (!PLAYER::IS_PLAYER_DEAD(Var2.f_10))
					{
						func_552(&Var2);
						func_445(65536, 1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_318()
{
	int iVar0;

	iVar0 = Local_879.f_19.f_1;
	func_553(Local_13.f_7);
	if (iVar0 != Local_879.f_19.f_1)
	{
		func_554(iVar0);
	}
}

void func_319()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_252(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -494058147))
	{
		iVar1 = func_297(1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, joaat("OBJECTEXCHANGE")))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_324(512))
			{
			}
		}
	}
	iVar2 = func_297(0);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 2076049331))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			OBJECT::DELETE_OBJECT(&iVar2);
		}
		func_555(iVar0, 1);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::_0x6569F31A01B4C097(iVar0, 4, 1);
			PED::_0x6569F31A01B4C097(iVar0, 7, 1);
			func_466(256);
		}
		func_466(128);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
		{
			iVar3 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "player_m", false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				iVar3 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "player_f", false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 2076049331))
				{
					OBJECT::DELETE_OBJECT(&iVar2);
					func_556(8388608);
				}
			}
		}
	}
}

void func_320()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_252(0);
	bVar1 = false;
	if (((((((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::_IS_PED_LASSOED(iVar0)) || PED::IS_PED_FLEEING(iVar0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iVar0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iVar0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iVar0)) || PED::_0x3BDFCF25B58B0415(iVar0)) || func_557(iVar0, 0))
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = func_297(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2) && ENTITY::IS_ENTITY_ATTACHED(iVar2))
		{
			ENTITY::DETACH_ENTITY(iVar2, true, true);
			PHYSICS::ACTIVATE_PHYSICS(iVar2);
		}
	}
	iVar2 = func_297(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2) && ENTITY::IS_ENTITY_ATTACHED(iVar2))
		{
			ENTITY::DETACH_ENTITY(iVar2, true, true);
			PHYSICS::ACTIVATE_PHYSICS(iVar2);
		}
	}
}

void func_321(int iParam0)
{
	int iVar0;

	if (func_324(1048576))
	{
		return;
	}
	iVar0 = func_351(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(iParam0))
	{
		if (!func_189(256))
		{
			TXD::_REQUEST_STREAMED_TXD(iParam0, false);
			func_236(256);
		}
		if (TXD::_HAS_STREAMED_TXD_LOADED(iParam0))
		{
			OBJECT::_SET_APPLY_OBJECT_TXD(func_351(0), iParam0, 0, 0);
			func_556(1048576);
		}
	}
}

void func_322()
{
	int iVar0;

	if (!func_324(8388608) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_351(0);
		if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && func_558(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1) < 1.25f) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1)) && !ENTITY::IS_ENTITY_ATTACHED(iVar0))
		{
			func_556(8388608);
		}
	}
}

void func_323(bool bParam0)
{
	char* sVar0;

	if (!bParam0)
	{
		if (func_324(2097152))
		{
			bParam0 = true;
		}
	}
	sVar0 = "NB_TRHU_ILO_NAME";
	if (func_305() == 1)
	{
		sVar0 = "NB_TRHU_ILO_NAME_F";
	}
	if (!bParam0)
	{
		if (Local_879.f_19.f_1 < 14)
		{
			func_560(0, func_559(PLAYER::PLAYER_ID()), 125f, -89429847, 580546400, 0, sVar0, 0, 1);
		}
		else
		{
			func_172(0);
		}
	}
	else if (func_251() != 1 || func_324(2097152))
	{
		func_560(0, func_559(PLAYER::PLAYER_ID()), 100f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, sVar0, 0, 1);
	}
	else
	{
		func_172(0);
	}
}

bool func_324(int iParam0)
{
	return func_183(Local_879.f_19.f_197, iParam0);
}

void func_325()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_252(0);
	if (func_251() != 1)
	{
		if (func_324(1073741824 /* Float: 2f */))
		{
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!func_309())
		{
			if (func_561())
			{
				if (func_562(0))
				{
					func_563();
				}
			}
			else
			{
				func_295(0);
				func_564();
			}
		}
		else
		{
			func_565(35f);
			if (func_324(1))
			{
				return;
			}
			if (func_566(0))
			{
				return;
			}
			if (!func_567(0, 255))
			{
				if (func_568(0))
				{
					iVar2 = Local_13.f_7.f_20;
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
					{
						iVar2 = PLAYER::PLAYER_ID();
					}
					sVar3 = "";
					if (func_251() == 1)
					{
						sVar3 = func_569(iVar2);
					}
					else
					{
						sVar3 = func_570(iVar2);
					}
					TASK::TASK_PLAY_ANIM(0, func_187(), sVar3, 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
					if (func_251() == 1)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_879.f_15, 4, 12288, 5000f, -1, func_252(1));
					}
					else
					{
						TASK::TASK_PLAY_ANIM(0, func_187(), "standing_idle", 4f, -4f, -1, 1, 0f, false, 0, false, 0, false);
					}
					func_571(0);
				}
			}
			else if (func_572(0))
			{
				if (!func_479(iVar0, 242628503, 1, 0))
				{
					return;
				}
				if (func_251() == 1)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_PLAYER_ENEMY"));
					func_556(2097152);
				}
				if (!func_573(0, 0))
				{
					return;
				}
				iVar5 = 255;
				iVar4 = 0;
				while (iVar4 < 32)
				{
					iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
					if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5) && func_574(0, 50f, iVar4, 0))
						{
							PED::REGISTER_TARGET(iVar0, PLAYER::GET_PLAYER_PED(iVar5), 1);
						}
					}
					iVar4++;
				}
				func_575(0);
				func_556(1);
				if (func_251() != 1)
				{
				}
				else
				{
					switch (func_226())
					{
						case 3:
						case 4:
							func_368(0, 3, 22, 291934926);
							break;
						default:
							func_368(0, 3, 10, 291934926);
							break;
					}
				}
			}
		}
	}
}

void func_326()
{
	int iVar0;
	int iVar1;

	iVar0 = func_252(0);
	func_565(35f);
	if (func_324(65536) || func_576(iVar0) == 1)
	{
		if (!func_324(65536))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				iVar1 = func_274(0, 0, 1, 0);
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_187(), "standing_idle", PLAYER::GET_PLAYER_PED(iVar1), -1, 8f, -8f, 1, 0f, false, false, -1f, 0, 0, -1f);
				}
				func_556(65536);
			}
		}
		else
		{
			if (func_324(1073741824 /* Float: 2f */))
			{
				return;
			}
			if (func_479(iVar0, -2017877118, 1, 0))
			{
				if (!func_577(0, 3f))
				{
					return;
				}
				TASK::TASK_PLAY_ANIM(iVar0, func_187(), "outro", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
				func_556(2);
			}
		}
	}
}

void func_327()
{
}

void func_328()
{
	int iVar0;
	int iVar1;

	if (Local_879.f_19.f_203 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_879.f_19.f_203);
		Local_879.f_19.f_203 = 0;
	}
	iVar0 = func_252(1);
	iVar1 = func_252(0);
	func_446(4, 0, 1);
	if (func_479(iVar1, 1868526510, 1, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::TASK_MOUNT_ANIMAL(iVar1, iVar0, 20000, -1, 1.5f, 1, 0, 0);
		}
	}
}

void func_329()
{
	int iVar0;

	iVar0 = func_252(0);
	if (func_479(iVar0, -1665583462, 1, 0))
	{
		TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 2.001f, 0, 0);
	}
}

void func_330()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<15> Var8;

	iVar1 = func_252(1);
	iVar2 = func_252(0);
	func_578();
	if (func_251() == 1)
	{
		func_560(0, func_559(PLAYER::PLAYER_ID()), 100f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0, 0, 1);
	}
	else
	{
		if (func_550(33554432, 255))
		{
			return;
		}
		if (func_566(1))
		{
			return;
		}
		if (!func_567(1, 255))
		{
			if (func_568(1))
			{
				iVar3 = func_579();
				iVar4 = func_350(1112014848 /* Float: 50f */);
				switch (iVar3)
				{
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(iVar4))
						{
							iVar0 = func_580(func_187(), "breakout");
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_187(), "breakout", iVar4, iVar0, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, func_187(), "breakout", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						}
						break;
					case 2:
						if (ENTITY::DOES_ENTITY_EXIST(iVar4))
						{
							iVar0 = func_580(func_188(), "aggro_idle_hunter");
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_188(), "aggro_idle_hunter", iVar4, iVar0, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, func_188(), "aggro_idle_hunter", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						}
						break;
					default:
						break;
				}
				iVar5 = 4;
				Local_879.f_19.f_205 = func_581(0);
				if (!Local_879.f_19.f_205 && func_324(-2147483648))
				{
					TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_879.f_15, iVar5, 12288, 5000f, -1, func_252(1));
				}
				else
				{
					if (Local_879.f_19.f_205)
					{
						iVar5 = 3;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, iVar4, iVar5, 2097152, 10000f, -1, iVar1);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), iVar5, 2097152, 10000f, -1, iVar1);
					}
				}
				Local_879.f_19.f_204 = iVar3;
				func_571(1);
			}
		}
		else if (func_572(1))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				return;
			}
			if (!Local_879.f_19.f_205 && func_324(-2147483648))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar2, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, joaat("REL_PLAYER_ENEMY"));
				func_556(2097152);
			}
			if (func_582(2097152, 255))
			{
				iVar7 = 255;
				iVar6 = 0;
				while (iVar6 < 32)
				{
					iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar6);
					if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar7))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) && func_574(0, 50f, iVar6, 0))
						{
							PED::REGISTER_TARGET(iVar2, PLAYER::GET_PLAYER_PED(iVar7), 1);
						}
					}
					iVar6++;
				}
			}
			PED::_0xAAB050DA48B57978(iVar2, "DEFAULT_SHOCKED", 0, -1, 4);
			TASK::CLEAR_PED_TASKS(iVar2, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iVar2);
			func_573(0, 1);
			func_556(33554432);
			PED::SET_PED_KEEP_TASK(iVar2, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
			{
				Var8 = { func_551(107137171) };
				func_552(&Var8);
			}
			switch (Local_879.f_19.f_204)
			{
				case 1:
					if (func_449())
					{
						if (!func_324(-2147483648))
						{
							func_368(0, 3, 19, 291934926);
						}
						else
						{
							func_368(0, 3, 21, 291934926);
						}
					}
					else if (!func_324(-2147483648))
					{
						func_368(0, 3, 5, 1744022339);
					}
					else
					{
						func_368(0, 3, 9, 1744022339);
					}
					break;
				case 2:
					if (func_449())
					{
						if (!(func_324(-2147483648) || func_324(-2147483648)))
						{
							func_368(0, 3, 16, 291934926);
						}
						else
						{
							func_368(0, 3, 21, 291934926);
						}
					}
					else if (!func_324(-2147483648))
					{
						func_368(0, 3, 7, 1744022339);
					}
					else
					{
						func_368(0, 3, 9, 1744022339);
					}
					break;
				default:
					if (func_449())
					{
						if (!(func_324(-2147483648) || func_324(-2147483648)))
						{
							func_556(131072);
							if (!func_324(262144))
							{
								func_368(0, 3, 17, 291934926);
							}
							else
							{
								func_368(0, 3, 24, 291934926);
							}
						}
						else
						{
							func_368(0, 3, 21, 291934926);
						}
					}
					else if (!func_324(-2147483648))
					{
						func_368(0, 3, 8, 1744022339);
					}
					else
					{
						func_368(0, 3, 9, 1744022339);
					}
					break;
			}
		}
	}
}

void func_331()
{
	if (func_583())
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "S_BASE", 1))
		{
			if (!func_582(134217728, 255))
			{
				func_556(134217728);
			}
		}
	}
	else if (func_582(134217728, 255))
	{
		func_584(134217728);
	}
}

void func_332()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (Local_13.f_7 < 5)
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
		{
			return;
		}
	}
	if (func_324(8))
	{
		return;
	}
	if (func_324(4096))
	{
		return;
	}
	if (func_324(33554432) || func_324(1073741824 /* Float: 2f */))
	{
		return;
	}
	iVar0 = func_302(0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (func_447(2048))
	{
		if (Local_879.f_19.f_69 != Local_13.f_7.f_21)
		{
			bVar1 = true;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
			{
				Local_13.f_7.f_21 = Local_879.f_19.f_69;
			}
		}
	}
	if (bVar1 || NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_879.f_19.f_69))
	{
		if ((bVar1 || Local_879.f_19.f_70 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_879.f_19.f_70, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000)
		{
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				Local_879.f_19.f_69 = Local_13.f_7.f_20;
				Local_879.f_19.f_70 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_447(2048))
				{
					Local_879.f_19.f_69 = Local_13.f_7.f_21;
				}
				iVar2 = PLAYER::GET_PLAYER_PED(Local_879.f_19.f_69);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					if (func_455(1))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, iVar2, -1, -1f, -1f, -1f);
					}
				}
			}
		}
	}
	else if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) || (func_447(2048) && NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21)))
	{
		Local_879.f_19.f_69 = Local_13.f_7.f_20;
		Local_879.f_19.f_70 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		if (func_447(2048))
		{
			Local_879.f_19.f_69 = Local_13.f_7.f_21;
		}
		if (func_455(1))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(Local_879.f_19.f_69), -1, -1f, -1f, -1f);
		}
	}
}

void func_333()
{
}

void func_334()
{
	if (func_309())
	{
		return;
	}
	if (!func_461(1024))
	{
		if (func_299(1))
		{
			func_466(1024);
		}
	}
	else if (func_509(1, 255))
	{
		func_563();
	}
}

void func_335()
{
	func_585();
}

void func_336()
{
}

void func_337()
{
	int iVar0;
	int iVar1;

	if (func_324(2048))
	{
		return;
	}
	iVar1 = func_302(0);
	if (!func_448(0))
	{
		if (func_586(&iVar0))
		{
			if (func_587(3, 3, iVar1, iVar0, 1060437492 /* Float: 0.707f */))
			{
				if (func_588(8, 0))
				{
					func_368(0, 3, 5, 291934926);
					func_556(2048);
				}
			}
		}
	}
}

void func_338()
{
	var uVar0;

	func_565(35f);
	func_589(0);
	if (func_324(128))
	{
		return;
	}
	if (func_586(&uVar0))
	{
		if (func_590(4, 0))
		{
			if (func_588(16, 0))
			{
				func_368(0, 3, 8, 291934926);
				func_556(128);
			}
		}
	}
}

void func_339()
{
	func_565(35f);
	func_589(Local_13.f_7.f_20 != PLAYER::PLAYER_ID());
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_879.f_19.f_45, "pl_exchange_f"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_879.f_19.f_45, "pl_exchange_f");
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_879.f_19.f_45, "pl_exchange_m"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_879.f_19.f_45, "pl_exchange_m");
		}
	}
}

void func_340()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	func_565(35f);
	if (func_324(8))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	sVar1 = "pl_exchange_f";
	if (PED::IS_PED_MALE(iVar0))
	{
		sVar1 = "pl_exchange_m";
	}
	if (!func_324(16))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_879.f_19.f_45, sVar1))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_879.f_19.f_45, sVar1);
				return;
			}
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_879.f_19.f_45, sVar1, true);
			func_556(16);
		}
	}
	else
	{
		iVar2 = func_302(0);
		iVar3 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
		{
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
			vVar8 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iVar2) };
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &uVar4, false))
			{
				vVar5.f_2 = (vVar5.z - 1f);
			}
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_879.f_19.f_45, vVar5, vVar8, 2);
			if (func_324(64))
			{
				if (PED::IS_PED_FACING_PED(iVar2, iVar3, 45f))
				{
					if (PED::IS_PED_MALE(iVar0))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "player_m", iVar0, 0);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "player_f", iVar0, 0);
					}
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_879.f_19.f_45, "b_root_upper", true, false);
					func_368(0, 3, 13, 291934926);
					func_556(8);
				}
			}
		}
		if (func_324(8))
		{
			return;
		}
		if (iVar3 == PLAYER::PLAYER_PED_ID())
		{
			if (!func_550(524288, 255))
			{
				Local_879.f_19.f_195 = 0;
				TASK::OPEN_SEQUENCE_TASK(&iVar11);
				if (func_591(iVar3, 0, 1, 0) != joaat("WEAPON_UNARMED"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iVar3, joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					Local_879.f_19.f_195++;
				}
				if (PED::IS_PED_ON_MOUNT(iVar3))
				{
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					Local_879.f_19.f_195++;
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, true))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					Local_879.f_19.f_195++;
				}
				TASK::TASK_ENTER_ANIM_SCENE(0, Local_879.f_19.f_45, "player_f", "pl_exchange_f", 1f, 0, 512, 20000, -1082130432 /* Float: -1f */);
				Local_879.f_19.f_195++;
				TASK::TASK_STAND_STILL(0, 5000);
				func_592(iVar3, &iVar11, 0, 0, 1, 1);
				func_556(524288);
			}
			else if (!func_443(iVar3, 242628503))
			{
				func_584(524288);
			}
			else if (TASK::GET_SEQUENCE_PROGRESS(iVar3) == Local_879.f_19.f_195)
			{
				WEAPON::_HIDE_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 2, true);
				func_556(64);
			}
		}
		else if (func_550(64, 255))
		{
			func_584(64);
		}
	}
}

void func_341()
{
	int iVar0;
	bool bVar1;
	struct<15> Var2;

	func_565(35f);
	if (func_324(1073741824 /* Float: 2f */))
	{
		return;
	}
	iVar0 = func_351(0);
	if (!func_324(262144))
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2076049331) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_879.f_19.f_45, false)) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
		{
			if (Local_13.f_7.f_21 == PLAYER::PLAYER_ID())
			{
				bVar1 = false;
				if (!func_324(512))
				{
					bVar1 = func_593(500, 0);
				}
				else
				{
					bVar1 = func_593(250, 0);
				}
				if (bVar1)
				{
					func_594(joaat("REWARD_FREEROAM_TREASURE_MAP_RANDOM"), 0);
				}
				Var2 = { func_551(1773639449) };
				func_552(&Var2);
				func_556(262144);
			}
		}
	}
	if (!func_324(8388608))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_879.f_19.f_45))
				{
					OBJECT::DELETE_OBJECT(&iVar0);
					func_556(8388608);
				}
			}
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
		{
			func_556(8388608);
		}
	}
}

void func_342()
{
	func_565(35f);
	if (func_324(512))
	{
		return;
	}
	if (func_590(5, 0))
	{
		if (func_588(32, 0))
		{
			func_368(0, 3, 12, 291934926);
			func_556(512);
		}
	}
}

void func_343()
{
	func_565(35f);
}

void func_344()
{
	func_565(35f);
	if (func_324(1024))
	{
		return;
	}
	if (func_595())
	{
		if (func_590(5, 1))
		{
			if (func_588(64, 0))
			{
				if (!func_447(4096))
				{
					func_368(0, 3, 15, 291934926);
				}
				else
				{
					func_368(0, 3, 27, 291934926);
				}
				func_556(1024);
			}
		}
	}
}

void func_345()
{
	func_565(35f);
}

void func_346()
{
	int iVar0;
	int iVar1;

	if (Local_879.f_19.f_203 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_879.f_19.f_203);
		Local_879.f_19.f_203 = 0;
	}
	iVar0 = func_252(1);
	iVar1 = func_252(0);
	func_446(4, 0, 1);
	if (func_479(iVar1, 1868526510, 1, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::TASK_MOUNT_ANIMAL(iVar1, iVar0, 20000, -1, 1.5f, 1, 0, 0);
		}
	}
}

void func_347()
{
	int iVar0;

	if (func_566(2))
	{
		return;
	}
	if (!func_567(2, 255))
	{
		if (func_568(2))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar0, 4000, -1f, -1f, -1f);
			}
			else
			{
				TASK::TASK_STAND_STILL(0, 4000);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 2.001f, 0, 0);
			func_571(2);
		}
	}
	else if (func_572(2))
	{
		if (func_479(func_302(0), 242628503, 1, 0))
		{
			if (!func_573(0, 2))
			{
			}
		}
	}
}

void func_348(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

void func_349()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_172(func_501(iVar0));
		iVar0++;
	}
}

int func_350(float fParam0)
{
	int iVar0;

	iVar0 = func_597(0, 80908, fParam0, 1, 0);
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return PLAYER::GET_PLAYER_PED(iVar0);
	}
	return 0;
}

int func_351(int iParam0)
{
	return func_598(0, iParam0);
}

void func_352()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_491(func_490(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_0xAD8F2424C6E1E3A8(Var1);
			}
		}
		iVar0++;
	}
}

void func_353(int iParam0, int iParam1)
{
	func_278(&(Local_879.f_423[iParam0 /*39*/].f_5), iParam1);
}

bool func_354(int iParam0, int iParam1)
{
	return func_183(Local_879.f_423[iParam0 /*39*/].f_5, iParam1);
}

int func_355(int iParam0)
{
	return func_302(iParam0);
}

void func_356(int iParam0, bool bParam1)
{
	int iVar0;
	struct<8> Var1;

	Var1.f_4 = 1;
	Var1.f_7 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_599(Local_879.f_423[iParam0 /*39*/].f_6[iVar0 /*8*/]))
		{
			func_600(&(Local_879.f_423[iParam0 /*39*/].f_6[iVar0 /*8*/]), 1, 1);
			if (bParam1)
			{
				MISC::_COPY_MEMORY(&(Local_879.f_423[iParam0 /*39*/].f_6[iVar0 /*8*/]), &Var1, 8);
			}
		}
		iVar0++;
	}
	func_353(iParam0, 2);
}

int func_357(var uParam0, var uParam1)
{
	return uParam0;
}

int func_358(int iParam0)
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

int func_359(struct<2> Param0)
{
	return func_601(Param0);
}

void func_360(struct<2> Param0, var uParam2)
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
	switch (func_357(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_603(func_602(Param0));
			iVar5 = func_604(iVar4);
			if (!func_605(iVar5, 0))
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

int func_361(int iParam0, int iParam1)
{
	int iVar0;
	struct<29> Var1;
	int iVar32;
	int iVar33;

	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 43)
	{
		iVar32 = iVar33;
		if (iVar32 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_32(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_362(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_606(&Var0);
}

var func_363(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947.f_236.f_57;
		default:
			break;
	}
	return Global_1901947.f_236.f_53;
}

var func_364(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947.f_236.f_59;
		default:
			break;
	}
	return Global_1901947.f_236.f_55;
}

var func_365(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947.f_236.f_58;
		default:
			break;
	}
	return Global_1901947.f_236.f_54;
}

int func_366(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_367()
{
	switch (func_226())
	{
		case 3:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<15> Var0;

	Var0 = { func_551(377515857) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	Var0.f_14 = iParam3;
	func_552(&Var0);
}

float func_369(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_370(bool bParam0)
{
	if (!func_68(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_68(256))
		{
			func_182(Local_879.f_18, 0);
			func_146(256);
		}
	}
	func_146(16);
}

int func_371(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Local_13.f_7.f_2[iParam0];
	if (!bParam1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NET_TO_ENT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		ENTITY::DELETE_ENTITY(&iVar1);
	}
	return 1;
}

bool func_372(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_607(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_373(int iParam0)
{
	return iParam0 + 8;
}

void func_374(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_494(iParam1, joaat("CHARACTER_MEMORY")) };
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

void func_375(int iParam0)
{
	if (!MISC::IS_BIT_SET(Local_879.f_19.f_202, iParam0) && !func_567(iParam0, 255))
	{
		return;
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_879.f_19.f_206[iParam0]));
}

int func_376(int iParam0)
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

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (Global_1198046.f_3[iParam0] * 2 <= 32)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (Global_1198046.f_3[iParam0] * 2 <= 20)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (Global_1198046.f_3[iParam0] * 2 <= 16)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_378(var uParam0)
{
	func_197(uParam0, 0);
	func_197(uParam0, 1);
	func_197(uParam0, 3);
	func_195(uParam0);
}

void func_379(var uParam0)
{
	func_196(uParam0);
	func_608(uParam0, 0, 3);
}

void func_380(var uParam0)
{
	func_197(uParam0, 0);
	func_198(uParam0, 0);
	func_198(uParam0, 1);
	func_198(uParam0, 2);
}

void func_381(var uParam0)
{
	func_197(uParam0, 1);
	func_195(uParam0);
}

void func_382(var uParam0)
{
	func_197(uParam0, 2);
	func_198(uParam0, 3);
}

void func_383(var uParam0)
{
	func_197(uParam0, 3);
	func_198(uParam0, 4);
}

void func_384(var uParam0)
{
	func_198(uParam0, 0);
	func_198(uParam0, 1);
}

void func_385(var uParam0)
{
	func_198(uParam0, 2);
	func_198(uParam0, 3);
}

void func_386(var uParam0)
{
	func_198(uParam0, 4);
	func_198(uParam0, 5);
}

bool func_387(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_388(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_389(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_390(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

bool func_391(int iParam0, bool bParam1)
{
	if (iParam0 > -1 && iParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bParam1)
		{
			return true;
		}
		return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	}
	return false;
}

void func_392(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_354(iParam0, 4))
		{
			func_488(iParam0, 4);
		}
	}
	else if (func_354(iParam0, 4))
	{
		func_353(iParam0, 4);
	}
}

int func_393(var uParam0)
{
	return uParam0;
}

void func_394(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_488(iParam0, 16);
	}
	else
	{
		func_353(iParam0, 16);
	}
}

var func_395(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_396(int iParam0)
{
	func_278(&(Local_879.f_19.f_2), iParam0);
}

void func_397(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = sParam2;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 = iParam3;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6 = iParam4;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4 = iParam5;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5 = iParam6;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = iParam7;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1 = iParam8;
	if (func_609(iParam0))
	{
		func_610(iParam0, iParam1, 16);
	}
}

void func_398(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5)
{
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = sParam2;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = sParam3;
	func_610(iParam0, iParam1, 2);
	if (bParam4)
	{
		func_610(iParam0, iParam1, 4);
	}
	else
	{
		func_611(iParam0, iParam1, 4);
	}
	if (bParam5 && func_609(iParam0))
	{
		func_612(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], sParam2, sParam3, 1);
	}
}

void func_399(int iParam0, int iParam1)
{
	if (Local_879.f_423[iParam0 /*39*/].f_4 == iParam1)
	{
		return;
	}
	Local_879.f_423[iParam0 /*39*/].f_4 = iParam1;
	func_488(iParam0, 8);
}

void func_400(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (MISC::_IS_STRING_SPACE(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_610(iParam0, iParam1, 1);
	}
	else
	{
		func_611(iParam0, iParam1, 1);
	}
	if (bParam3 && func_609(iParam0))
	{
		func_613(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], bParam2, 1, 1);
	}
}

void func_401(var uParam0)
{
	func_614(uParam0, 0);
	func_615(uParam0, 0);
	func_402(uParam0, 1);
	func_616(uParam0, 1);
	func_617(uParam0, 0);
	func_618(uParam0, 1);
	func_619(uParam0, 1, 1, 1);
}

void func_402(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 256);
	}
	else
	{
		func_239(&(uParam0->f_2), 256);
	}
}

void func_403(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 4);
	}
	else
	{
		func_239(&(uParam0->f_2), 4);
	}
}

void func_404(var uParam0)
{
	func_621(uParam0, (func_620(uParam0) - 6f));
	func_622(uParam0, 1);
}

void func_405(var uParam0)
{
	func_614(uParam0, 0);
	func_615(uParam0, 0);
	func_402(uParam0, 0);
	func_617(uParam0, 0);
	func_619(uParam0, 1, 1, 1);
}

void func_406(var uParam0)
{
	func_623(uParam0, 1);
	func_624(uParam0, 1);
	func_625(uParam0, 1);
}

void func_407(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 131072);
	}
	else
	{
		func_239(&(uParam0->f_2), 131072);
	}
}

void func_408(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(uParam0, 4);
	}
	else
	{
		func_278(uParam0, 4);
	}
}

bool func_409(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0 * 10) * 0.03125f));
	uParam1->f_2 = (iParam0 * 10 % 32);
	iVar0 = (32 - uParam1->f_2);
	if (iVar0 < 10)
	{
		uParam1->f_1 = *uParam1 + 1;
		uParam1->f_3 = (9 - iVar0);
	}
	else
	{
		uParam1->f_1 = *uParam1;
		uParam1->f_3 = uParam1->f_2 + 9;
	}
	return (((*uParam1 > -1 && uParam1->f_1 > -1) && *uParam1 < 3) && uParam1->f_1 < 3);
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

void func_411(int iParam0, int iParam1, int iParam2)
{
	Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_2 = iParam2;
}

bool func_412(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_494(iParam1, joaat("CHARACTER_MEMORY")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	return MISC::IS_BIT_SET(iVar2, iParam0);
}

int func_413(int iParam0)
{
	if (!func_184(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

bool func_414(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_879.f_15 };
	iVar7 = 0;
	iVar8 = func_475(iParam0);
	iVar9 = func_626(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iParam0]))
		{
			iVar9 = func_626(iParam0);
			fVar0 = func_627(iParam0);
			if (!func_183(Local_879.f_233.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_628(iParam0)) };
			}
			else
			{
				vVar1 = { func_628(iParam0) };
			}
			if (!func_629(&(Local_13.f_43[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_43[iParam0]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (PED::IS_PED_HUMAN(iVar7))
					{
						WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iVar7, false);
						WEAPON::_0x431240A58484D5D0(iVar7, 0);
						WEAPON::_0x45E57FDD531C9477(iVar7, 0);
					}
					if (iVar9 != 0)
					{
						PED::_SET_PED_BODY_COMPONENT(iVar7, iVar9);
						PED::_UPDATE_PED_VARIATION(iVar7, func_173(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_630(iVar7, 1);
					}
					if (func_631(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_632(iParam0))
						{
							if (func_631(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_415(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_43[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_43[iParam0]);
						}
					}
					*bParam2 = 1;
					return false;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_13.f_43[iParam0])))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_415(int iParam0)
{
	return func_173(iParam0, 128);
}

int func_416(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_2;
}

bool func_417(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_418(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_419(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_7;
}

bool func_420(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_13;
}

bool func_421(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_633(*uParam0, 0f, 0f, 0f))
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

bool func_422(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_879.f_274[iParam0 /*34*/].f_3, iParam1);
}

bool func_423(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 1);
}

bool func_424(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_634(iParam1))
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

bool func_425(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_426(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_427(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_428(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_10;
}

bool func_429(int iParam0, int iParam1, int iParam2)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_430(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

Vector3 func_431(vector3 vParam0)
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

bool func_432(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_433(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_434(int iParam0, int iParam1)
{
	return func_183(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 512);
}

void func_435(var uParam0, int iParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
			{
				uParam0->f_2 = 1;
			}
			break;
		case 1:
			if (!func_635(iParam1))
			{
			}
			else
			{
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (func_636(iParam1))
			{
			}
			else
			{
				uParam0->f_1 = 255;
				*uParam0 = func_638(iParam1, func_637(Local_13.f_57.f_7, iParam1), func_222(iParam1));
				func_119(&(Local_13.f_57.f_7), iParam1, 3);
				uParam0->f_2 = 0;
			}
			break;
	}
}

bool func_436(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_459(iVar0))
			{
				if (func_574(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

var func_437()
{
	return Local_879.f_3;
}

int func_438(int iParam0)
{
	switch (func_226())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("RE_TH_PLN_V1_SPOOK");
				case 1:
					return joaat("RE_TH_PLN_V1_LEAVE");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("RE_TH_MTN_V1_SPOOK");
				case 1:
					return joaat("RE_TH_MTN_V1_LEAVE");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("RE_TH_FTH_V1_SPOOK");
				case 1:
					return joaat("RE_TH_FTH_V1_LEAVE");
				default:
					break;
			}
			break;
	}
	return 2;
}

char* func_439(int iParam0)
{
	switch (func_226())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE_TH_PLN_V1_SPOOK";
				case 1:
					return "RE_TH_PLN_V1_LEAVE";
				case 2:
					return "RE_TH_PLN_V1_IDLE";
				case 3:
					return "RE_TH_PLN_V1_IDLE_ALT";
				case 4:
					return "RE_TH_PLN_V1_RIDE";
				case 5:
					return "RE_TH_PLN_V1_AGGRO";
				case 6:
					return "GENERIC_CURSE_MED";
				case 7:
					return "HAND_OVER_MONEY";
				case 8:
					return "GET_AWAY_FROM_ME";
				case 9:
					return "RE_TH_PLN_V1_AGGRO_HORSE";
				case 11:
					return "RE_TH_PLN_V1_HOGTIE";
				case 10:
					return "GET_LOST";
				case 12:
					return "RE_TH_PLN_V1_UNTIE";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE_TH_MTN_V1_SPOOK";
				case 1:
					return "RE_TH_MTN_V1_LEAVE";
				case 2:
					return "RE_TH_MTN_V1_IDLE";
				case 3:
					return "RE_TH_MTN_V1_IDLE_ALT";
				case 4:
					return "RE_TH_MTN_V1_RIDE";
				case 5:
					return "RE_TH_MTN_V1_AGGRO";
				case 6:
					return "GENERIC_CURSE_MED";
				case 7:
					return "HAND_OVER_MONEY";
				case 8:
					return "GET_AWAY_FROM_ME";
				case 9:
					return "RE_TH_MTN_V1_AGGRO_HORSE";
				case 11:
					return "RE_TH_MTN_V1_HOGTIE";
				case 10:
					return "GET_AWAY_FROM_ME";
				case 12:
					return "RE_TH_MTN_V1_UNTIE";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE_TH_FTH_V1_SPOOK";
				case 1:
					return "RE_TH_FTH_V1_LEAVE";
				case 2:
					return "RE_TH_FTH_V1_IDLE";
				case 3:
					return "RE_TH_FTH_V1_IDLE_ALT";
				case 4:
					return "RE_TH_FTH_V1_RIDE";
				case 5:
					return "RE_TH_FTH_V1_AGGRO";
				case 6:
					return "GENERIC_CURSE_MED";
				case 7:
					return "HAND_OVER_MONEY";
				case 8:
					return "GET_AWAY_FROM_ME";
				case 9:
					return "RE_TH_FTH_V1_AGGRO_HORSE";
				case 11:
					return "RE_TH_FTH_V1_HOGTIE";
				case 10:
					return "GET_AWAY_FROM_ME";
				case 12:
					return "RE_TH_FTH_V1_UNTIE";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_440(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_639(iParam0, &Var0);
}

bool func_441(int iParam0)
{
	if (Local_13.f_7 < 5)
	{
		if (func_251() == 2 || func_251() == 3)
		{
			return false;
		}
	}
	if (func_251() == 2 || func_251() == 3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
		{
			return false;
		}
	}
	if (func_324(8))
	{
		return false;
	}
	if (func_324(4096))
	{
		return false;
	}
	Local_13.f_7.f_20 = func_597(0, 83147, 20f, 1, 0);
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_20))
	{
		return true;
	}
	if (!func_324(128))
	{
		Local_13.f_7.f_20 = func_274(0, 0, 1, 0);
	}
	else
	{
		Local_13.f_7.f_20 = func_274(0, 20f, 1, 0);
	}
	return (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_20));
}

void func_442(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

bool func_443(int iParam0, int iParam1)
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

void func_444()
{
	Local_879.f_19.f_41 = 0;
	if (func_504(&(Local_879.f_19.f_42)))
	{
		func_506(&(Local_879.f_19.f_42));
	}
}

void func_445(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	func_239(&(Local_13.f_7.f_1), iParam0);
}

int func_446(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_450(iParam0))
		{
			return 0;
		}
	}
	iVar0 = func_252(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 4:
			if (func_324(1073741824 /* Float: 2f */))
			{
				return 0;
			}
			switch (Local_879.f_19.f_1)
			{
				case 14:
				case 15:
					if (PED::IS_PED_ON_MOUNT(iVar0) || func_275(iVar0, 1868526510))
					{
						if (func_367())
						{
							if (func_324(64))
							{
								func_368(0, 3, 14, 291934926);
							}
							else if (!func_447(4096))
							{
								func_368(0, 3, 27, 291934926);
							}
							else
							{
								func_368(0, 3, 7, 291934926);
							}
							MISC::SET_BIT(&(Local_13.f_7.f_5), 4);
							MISC::SET_BIT(&(Local_879.f_19.f_7), 4);
							return 1;
						}
						else
						{
							func_368(0, 3, 4, 291934926);
							MISC::SET_BIT(&(Local_13.f_7.f_5), 4);
							MISC::SET_BIT(&(Local_879.f_19.f_7), 4);
							return 1;
						}
					}
					break;
			}
			break;
		case 11:
			if (PED::_IS_PED_HOGTIED(iVar0))
			{
				if (func_367())
				{
					func_368(0, 3, 20, 291934926);
				}
				else
				{
					func_368(0, 3, 11, 291934926);
				}
				MISC::SET_BIT(&(Local_13.f_7.f_5), 11);
				MISC::SET_BIT(&(Local_879.f_19.f_7), 11);
				return 1;
			}
			break;
		case 13:
			if (func_450(11) && !PED::_IS_PED_HOGTIED(iVar0))
			{
				if (func_367())
				{
					func_368(0, 3, 26, 291934926);
				}
				else
				{
					func_368(0, 3, 11, 291934926);
				}
				MISC::SET_BIT(&(Local_13.f_7.f_5), 13);
				MISC::SET_BIT(&(Local_879.f_19.f_7), 13);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_447(int iParam0)
{
	return func_183(Local_13.f_7.f_1, iParam0);
}

bool func_448(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_233.f_6, iParam0);
}

bool func_449()
{
	if (func_251() == 2 || func_251() == 3)
	{
		return true;
	}
	return false;
}

bool func_450(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_19.f_7, iParam0);
}

float func_451(int iParam0, int iParam1, bool bParam2)
{
	if (!func_391(iParam1, 0))
	{
		if (!func_221(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_78[iParam1 /*25*/].f_6.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_78[iParam1 /*25*/].f_6.f_2[iParam0];
}

int func_452()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	if (func_447(32))
	{
		return -1;
	}
	if (func_447(64))
	{
		if (func_641(268435456))
		{
			func_457(64, 1);
		}
		else
		{
			return -1;
		}
	}
	if (!func_642())
	{
		iVar0 = func_643(0, 0, 1, 0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
				return -1;
			}
			fVar2 = func_451(0, iVar0, 1);
			if (func_644(fVar2))
			{
				Local_13.f_7.f_19 = 2;
				return func_645();
			}
			else
			{
				fVar3 = func_646();
				if (fVar2 <= fVar3)
				{
					func_453(iVar1);
				}
			}
		}
	}
	else
	{
		if (func_324(536870912))
		{
			func_445(64, 1);
			func_453(255);
			return -1;
		}
		iVar4 = func_647();
		if (func_324(iVar4))
		{
			iVar5 = func_645();
			if (Local_13.f_7.f_19 < 2)
			{
				Local_13.f_7.f_19++;
			}
			return iVar5;
		}
	}
	return -1;
}

void func_453(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam0 == 255)
		{
			Local_13.f_7.f_20 = 255;
			Local_13.f_7.f_24 = 0;
			func_457(func_648(), 1);
			return;
		}
		return;
	}
	Local_13.f_7.f_20 = iParam0;
	Local_13.f_7.f_24 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_445(func_648(), 1);
}

bool func_454(int iParam0, int iParam1)
{
	return func_649(iParam0, iParam1);
}

bool func_455(bool bParam0)
{
	if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "s_root_upper", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "s_root_upper_ex", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "s_root_upper_transition", 1))
	{
		return true;
	}
	if (!bParam0)
	{
		return false;
	}
	if ((((ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "s_offer_00", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "s_offer_01", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "s_offer_02", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "s_ilo_neg_00", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "s_ilo_neg_01", 1))
	{
		return true;
	}
	return false;
}

void func_456()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = func_302(0);
	if (func_650(0))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	}
	switch (func_651())
	{
		case 0:
			if (func_652())
			{
				func_653(3);
				Local_13.f_7.f_10 = 3;
				func_456();
			}
			break;
		case 1:
			if (func_654(0, 3))
			{
				Local_13.f_7.f_29 = -1;
				Local_13.f_7.f_24 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_447(524288))
				{
					Local_13.f_7.f_21 = Local_13.f_7.f_22;
					func_457(524288, 1);
				}
				else
				{
					Local_13.f_7.f_21 = Local_13.f_7.f_23;
				}
				if (!func_655())
				{
					func_653(4);
					func_456();
				}
				else
				{
					func_457(16, 1);
					Local_13.f_7.f_20 = Local_13.f_7.f_21;
					SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_13), Local_13.f_7.f_21);
					bVar0 = func_656();
					if (Local_13.f_7.f_10 < func_657(bVar0, 2, 1))
					{
						if (bVar0 && Local_13.f_7.f_10 > 0)
						{
							func_658();
							func_653(2);
						}
						else
						{
							func_445(32768, 1);
							func_653(4);
							SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_13), Local_13.f_7.f_21);
						}
						Local_13.f_7.f_10++;
					}
					else if (!func_447(262144))
					{
						func_653(5);
						SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_13), Local_13.f_7.f_21);
					}
					else
					{
						func_653(6);
					}
				}
			}
			break;
		case 2:
			if (func_659())
			{
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_13), Local_13.f_7.f_20))
				{
					func_445(32768, 1);
					func_653(4);
				}
				else if (PED::IS_PED_FACING_PED(iVar2, iVar1, 100f))
				{
					if (!func_660(500))
					{
						func_661(Local_13.f_7.f_20);
						func_653(4);
					}
				}
			}
			else
			{
				func_653(4);
			}
			break;
		case 3:
			if (!func_659())
			{
				func_653(4);
			}
			else if (func_454(0, 3))
			{
				Local_13.f_7.f_22 = Local_13.f_7.f_20;
				func_445(524288, 1);
				func_653(1);
			}
			break;
		case 4:
			if (!func_660(500))
			{
				if (func_454(0, 2))
				{
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_653(0);
				}
			}
			break;
		case 5:
			if (!func_660(500))
			{
				func_442(10);
				func_653(0);
			}
			break;
		case 6:
			if (!func_660(500))
			{
				if (func_454(0, 2))
				{
					func_442(12);
					func_445(4096, 1);
					func_653(0);
				}
			}
			break;
	}
}

void func_457(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	func_278(&(Local_13.f_7.f_1), iParam0);
}

int func_458(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = iParam4;
	iVar3 = 255;
	*iParam3 = iParam4;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
		{
		}
		else if (bParam7 && !func_662(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2), 1, 1))
		{
		}
		else
		{
			iVar4 = PLAYER::GET_PLAYER_PED(iVar2);
			if ((iParam5 == 0 || iParam6 == 0) || PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam6, iVar4) == iParam5)
			{
				fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), vParam0);
				if (fVar1 < *iParam3)
				{
					iVar3 = iVar2;
					*iParam3 = fVar1;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_459(int iParam0)
{
	return func_131(8, iParam0);
}

bool func_460(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_351(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2)) && func_558(iVar1, PLAYER::GET_PLAYER_PED(iVar2), 0, 1) <= fParam0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_461(int iParam0)
{
	return func_183(Local_879.f_19.f_199, iParam0);
}

void func_462(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_463(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_464(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_879.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != Local_879)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_879.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_879.f_3)
	{
		return false;
	}
	return true;
}

void func_465(int iParam0)
{
	int iVar0;

	switch (iParam0->f_9)
	{
		case 377515857:
			func_663(iParam0);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (iParam0->f_13)
				{
					case 2:
					case 3:
					case 4:
						Local_13.f_7.f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						break;
				}
			}
			break;
		case 398686063:
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), PLAYER::GET_PLAYER_PED(iParam0->f_1), 20f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			break;
		case -180890260:
			if (!func_324(262144))
			{
				if (iParam0->f_10 == PLAYER::PLAYER_ID())
				{
					func_664();
					func_556(262144);
				}
			}
			if (func_369(PLAYER::PLAYER_PED_ID(), Local_879.f_15, 1) < 25f)
			{
				func_370(1);
			}
			iVar0 = func_351(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					OBJECT::DELETE_OBJECT(&iVar0);
				}
			}
			break;
		case 107137171:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Local_879.f_19.f_45))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false);
					TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
				}
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_879.f_19.f_45);
				}
			}
			break;
		case 1773639449:
			if (func_369(PLAYER::PLAYER_PED_ID(), Local_879.f_15, 1) < 25f)
			{
				func_370(1);
			}
			break;
	}
}

void func_466(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_239(&(Local_78[iVar0 /*25*/].f_1.f_1), iParam0);
}

bool func_467(int iParam0)
{
	return Local_879.f_505.f_1[iParam0] != 0;
}

bool func_468(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_879.f_505.f_1[iParam0], iParam1);
}

bool func_469(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_879.f_505.f_4[iParam0], iParam1);
}

void func_470(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_665())
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
		if (!Global_1139381.f_3876.f_2[func_666(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1139381.f_3876.f_2[func_666(iParam0, 1) /*4*/].f_2++;
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
	func_667(&Var0, uVar7);
}

void func_471(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_879.f_505.f_4[iParam0]), iParam1);
}

bool func_472(char* sParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return true;
	}
	return false;
}

char* func_473()
{
	return "script@beat@wilderness@treasureHunter@mp@sell@main";
}

bool func_474(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam0, iParam3, sParam4, true, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
					{
						return false;
					}
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, false, false))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
					}
					return false;
				}
				else
				{
					*uParam2 = NETWORK::_ANIM_SCENE_TO_NET(*uParam1);
				}
			}
			return false;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
	{
		return false;
	}
	*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam2);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

int func_475(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_3;
}

bool func_476(int iParam0)
{
	return func_422(0, iParam0);
}

bool func_477(int iParam0)
{
	return func_423(0, iParam0);
}

void func_478(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_475(iParam0);
	bVar3 = func_391(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_879.f_233.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_43[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_879.f_233.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_78[iParam1 /*25*/].f_6.f_2[iParam0] = -1f;
				}
				else
				{
					Local_78[iParam1 /*25*/].f_6.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_415(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_43[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_43[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_668(iVar1, 1f, 0);
					iVar0 = func_669(iParam0);
					if (!MISC::_IS_STRING_SPACE(iVar0))
					{
						func_670(iVar1, iVar0, 1);
					}
				}
				if (func_631(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_632(iParam0))
					{
						if (func_631(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_879.f_233.f_5), iParam0);
				if (bParam2)
				{
					func_671(iParam0);
				}
			}
		}
	}
}

bool func_479(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_275(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

void func_480(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_672(func_501(iVar0), fParam0);
		iVar0++;
	}
}

bool func_481()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
	{
		return false;
	}
	bVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "hunter", false) == func_302(0);
	bVar1 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_879.f_19.f_45, "map", false) == func_351(0);
	bVar2 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_879.f_19.f_45, "binoculars", false) == func_351(1);
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
	{
		if (!bVar0)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "hunter", func_302(0), 0);
		}
		if (!bVar1)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "map", func_351(0), 0);
		}
		if (!bVar2)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "binoculars", func_351(1), 0);
		}
	}
	if ((!bVar0 || !bVar1) || !bVar2)
	{
		return false;
	}
	return true;
}

bool func_482(var uParam0, var uParam1)
{
	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = { 0f, 0f, 0f };
	switch (func_232())
	{
		case 0:
			*uParam0 = { -1159.115f, 397.0877f, 60.4953f };
			*uParam1 = { 0f, 0f, 210.128f };
			break;
		case 1:
			*uParam0 = { -1279.397f, 294.3471f, 77.27344f };
			*uParam1 = { 0f, 0f, -106.91f };
			break;
		case 2:
			*uParam0 = { -1371.28f, 283.4114f, 86.0114f };
			*uParam1 = { 0f, 0f, -130.41f };
			break;
		case 3:
			*uParam0 = { -1117.687f, 406.6783f, 55.3681f };
			*uParam1 = { 0f, 0f, -151.84f };
			break;
		case 4:
			*uParam0 = { -1288.323f, 148.5012f, 71.7864f };
			*uParam1 = { 0f, 0f, -64.19f };
			break;
		case 5:
			*uParam0 = { -1648.447f, -114.858f, 170.0504f };
			*uParam1 = { 0f, 0f, -70.56f };
			break;
		case 6:
			*uParam0 = { -1081.189f, -405.0457f, 97.0153f };
			*uParam1 = { 0f, 0f, -101.52f };
			break;
		case 7:
			*uParam0 = { 206.8413f, -170.3653f, 130.5284f };
			*uParam1 = { 0f, 0f, 0f };
			break;
		case 8:
			*uParam0 = { -621.2297f, 186.8452f, 41.2741f };
			*uParam1 = { 0f, 0f, 180f };
			break;
		case 9:
			*uParam0 = { 44.3784f, 388.2357f, 129.8287f };
			*uParam1 = { 0f, 0f, -138.24f };
			break;
		case 10:
			*uParam0 = { 752.9834f, -58.1133f, 157.6479f };
			*uParam1 = { 0f, 0f, -146.88f };
			break;
		case 11:
			*uParam0 = { 817.7247f, 566.3447f, 114.3761f };
			*uParam1 = { 0f, 0f, -113.38f };
			break;
	}
	if (func_241(*uParam0))
	{
		*uParam0 = { Local_879.f_15 };
		return false;
	}
	return true;
}

bool func_483(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_484(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_485(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
}

void func_486(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_673(uParam0, iParam1, sParam2))
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

int func_487(char* sParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = MISC::_IS_STRING_SPACE(sParam0);
	bVar1 = MISC::_IS_STRING_SPACE(sParam1);
	if (bVar0 != bVar1)
	{
		return 1;
	}
	if (bVar0 || bVar1)
	{
		return 0;
	}
	return MISC::COMPARE_STRINGS(sParam0, sParam1, false, -1);
}

void func_488(int iParam0, int iParam1)
{
	func_239(&(Local_879.f_423[iParam0 /*39*/].f_5), iParam1);
}

bool func_489(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_409(iParam1, &Var0))
	{
		return false;
	}
	if (Var0 == Var0.f_1)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	return MISC::IS_BIT_SET((*uParam0)[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
}

int func_490(int iParam0)
{
	return iParam0;
}

bool func_491(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_302(iParam0);
	uParam1->f_2 = func_451(iParam0, 255, 1);
	return ENTITY::DOES_ENTITY_EXIST(*uParam1);
}

void func_492(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_493(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_517(&(Local_78[iVar0 /*25*/].f_11), 0, iParam0);
}

struct<2> func_494(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_674(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_675(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_495()
{
	Local_879.f_233.f_6 = 0;
	Local_879.f_233.f_2 = 0;
	Local_879.f_233.f_1 = -1;
}

void func_496()
{
	int iVar0;

	func_225(&(Local_879.f_309.f_75), 2, 0);
	func_225(&(Local_879.f_309.f_75), 1, 0);
	func_225(&(Local_879.f_309.f_75), 4, 0);
	func_225(&(Local_879.f_309.f_75), 5, 0);
	func_225(&(Local_879.f_309.f_75), 8, -1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_879.f_309.f_66[iVar0]));
		SCRIPTS::_0x20F4CB76689ACDBC(&(Local_879.f_309.f_72[iVar0]));
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_879.f_309.f_69[iVar0]));
		func_676(iVar0);
		iVar0++;
	}
}

void func_497()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar1 = 0;
	iVar2 = func_677(0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		func_678();
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	bVar3 = false;
	Local_879.f_423.f_79 = 0;
	Local_879.f_423.f_80 = -1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!bVar3 && ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (func_679(func_177(iVar0), iVar1))
			{
				bVar3 = true;
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		func_678();
	}
}

void func_498(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_879.f_233.f_2 = (Local_879.f_233.f_2 || Local_78[iParam0 /*25*/].f_6);
		Local_879.f_233.f_1 = (Local_879.f_233.f_1 && Local_78[iParam0 /*25*/].f_6);
		Local_879.f_233.f_6 = (Local_879.f_233.f_6 || Local_78[iParam0 /*25*/].f_6.f_1);
	}
}

void func_499(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_680(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 2);
		func_680(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 1);
		func_680(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 4);
		func_680(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 5);
		func_680(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 6);
		func_680(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 7);
		func_680(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 0);
		func_680(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 3);
		func_681(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 8);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_78[iParam0 /*25*/].f_11.f_5[iVar0]), &(Local_879.f_309.f_66[iVar0]), &(Local_879.f_309.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_78[iParam0 /*25*/].f_11.f_5[iVar0]), &(Local_879.f_309.f_66[iVar0]), &(Local_879.f_309.f_69[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_78[iParam0 /*25*/].f_11.f_5[iVar0]), &(Local_879.f_309.f_66[iVar0]), &(Local_879.f_309.f_72[iVar0]));
			func_682(func_490(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_500(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return;
	}
	Local_879.f_423.f_79 = (Local_879.f_423.f_79 || Local_78[iParam0 /*25*/].f_22.f_2);
	Local_879.f_423.f_80 = (Local_879.f_423.f_80 && Local_78[iParam0 /*25*/].f_22.f_2);
	func_683(iParam0);
}

int func_501(int iParam0)
{
	return iParam0;
}

int func_502(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_78[iParam3 /*25*/].f_6.f_2[iParam2] = fVar0;
	if (fVar0 > Local_879.f_233.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_503(var uParam0)
{
	func_684(uParam0, 0f);
}

bool func_504(var uParam0)
{
	return func_685(*uParam0, 1);
}

bool func_505(var uParam0, float fParam1)
{
	if (!func_504(uParam0))
	{
		return false;
	}
	if (func_686(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_506(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_507(int iParam0)
{
	return true;
}

void func_508(int iParam0, int iParam1)
{
	func_278(&(Local_879.f_233.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_509(int iParam0, int iParam1)
{
	if (!func_391(iParam1, 0))
	{
		if (!func_221(&iParam1))
		{
			return false;
		}
	}
	return func_183(Local_78[iParam1 /*25*/].f_6, iParam0);
}

void func_510(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_239(&(Local_78[iVar0 /*25*/].f_6), iParam0);
}

void func_511(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_278(&(Local_78[iVar0 /*25*/].f_6), iParam0);
}

void func_512()
{
	int iVar0;
	struct<13> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_221(&iVar15))
	{
		return;
	}
	iVar16 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16))
	{
		return;
	}
	iVar17 = PLAYER::GET_PLAYER_PED(iVar16);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar14 = func_490(iVar0);
		if (!func_513(iVar14))
		{
		}
		else if (!func_514(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_879.f_309.f_65), iVar14);
			}
			if (func_528(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, 0, 0))
			{
				func_687(iVar14);
				func_688(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_513(int iParam0)
{
	return !func_489(&(Local_879.f_309.f_75), 5, iParam0);
}

bool func_514(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_879.f_309.f_106, iParam0))
	{
		return false;
	}
	*uParam1 = Local_879.f_309.f_79[iParam0 /*13*/];
	uParam1->f_1 = Local_879.f_309.f_79[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_879.f_309.f_79[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_515(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_689(iParam1))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (uParam0->f_2 <= 25f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) >= 4f)
		{
			if (PED::IS_PED_IN_COVER(iVar0, false, false) || PED::IS_PED_GOING_INTO_COVER(iVar0))
			{
			}
			else
			{
				return true;
			}
		}
	}
	if (func_690(*uParam0, &(Local_879.f_309.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

int func_516(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_409(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::CLEAR_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

int func_517(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_409(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::SET_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

void func_518(int iParam0)
{
}

bool func_519(int iParam0)
{
	return func_489(&(Local_879.f_309.f_75), 4, iParam0);
}

bool func_520(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return false;
	}
	return func_489(&(Local_78[iVar0 /*25*/].f_11), 4, iParam0);
}

bool func_521(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_879.f_309.f_69[iParam0]));
}

void func_522(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_516(&(Local_78[iVar0 /*25*/].f_11), 4, iParam0);
}

bool func_523(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_78[iVar0 /*25*/].f_11.f_5[iParam0]));
}

void func_524(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Local_78[iVar0 /*25*/].f_11.f_5[iParam0]));
}

bool func_525(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!EVENT::_0x83D43F0FD5276E4D(iParam0, 0))
	{
		return false;
	}
	return true;
}

bool func_526(int iParam0, int iParam1)
{
	if (!func_391(iParam1, 0))
	{
		if (!func_221(&iParam1))
		{
			return false;
		}
	}
	return func_489(&(Local_78[iParam1 /*25*/].f_11), 1, iParam0);
}

bool func_527(int iParam0)
{
	int iVar0;

	if (iParam0 == 1)
	{
		if (func_691(512, 255))
		{
			return true;
		}
	}
	switch (func_251())
	{
		case 1:
			if (func_574(iParam0, 20f, 255, 0))
			{
				return func_447(1024);
			}
			break;
		case 2:
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
			{
				iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "player_m", false);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "player_f", false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, func_302(iParam0), 1, 1) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
					{
						return true;
					}
				}
			}
			break;
	}
	return false;
}

bool func_528(int iParam0, int iParam1)
{
	if (!func_391(iParam1, 0))
	{
		if (!func_221(&iParam1))
		{
			return false;
		}
	}
	if (!func_692(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_489(&(Local_78[iParam1 /*25*/].f_11), 3, iParam0);
}

bool func_529(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_693(uParam2, 1, iVar0);
	}
	if (!Global_1940258.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_694(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_695(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_696(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_697(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_698(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_20 && func_699(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_695(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_700(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_701(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_695(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_702(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_695(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258.f_23) < 300)
			{
				if (func_703(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_703(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_695(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_704(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258.f_19 || uParam2->f_13 < 20f)
			{
				if (func_705(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_706(uParam2, 4000))
				{
					if ((func_707(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_708(uParam2, iParam0)) && func_709(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_695(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_707(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_708(uParam2, iParam0)) && func_709(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258.f_34 == 0)
			{
				if (Global_1940258.f_35 != 0)
				{
					if (func_710(iParam0, Global_1940258.f_35))
					{
						func_711();
						*iParam3 = 2;
						func_695(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_712(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_713() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_711();
						*iParam3 = 2;
						func_695(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_714())
				{
					if (func_710(iParam0, Global_1940258.f_36))
					{
						func_711();
						*iParam3 = 2;
						func_695(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_715(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_695(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_716(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_695(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_717(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_718(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_695(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_719(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_720(uParam2, 4000))
				{
					if (func_721(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_695(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_722(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_695(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_723(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_695(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_530(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_724(iParam0, vVar0, iParam2);
}

bool func_531(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_725(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_726(&iVar4, iParam1->f_12);
	func_728(Local_879.f_233.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_727(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_729(&iVar4, &uVar0);
}

bool func_532(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return false;
	}
	return func_489(&(Local_78[iVar0 /*25*/].f_11), 0, iParam0);
}

bool func_533(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_879.f_309.f_64, iParam0))
	{
		return false;
	}
	if (func_183(Local_879.f_309.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_730(&(Local_879.f_309))))
	{
		return false;
	}
	return true;
}

bool func_534(int iParam0, int iParam1, int iParam2)
{
	if (!func_533(iParam0, iParam1))
	{
		return false;
	}
	if (Local_78[iParam2 /*25*/].f_11.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_78[iParam2 /*25*/].f_11.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_535(int iParam0, int iParam1, int iParam2)
{
	struct<15> Var0;

	switch (iParam1)
	{
		case 4:
		case 16:
		case 256:
			break;
		default:
			if (iParam0 == 1 || iParam1 == 1024)
			{
				if ((iParam1 != 1024 && !func_731(iParam1, 0, 0, 0, 0)) && !func_461(512))
				{
					return false;
				}
				else
				{
					func_556(-2147483648);
				}
			}
			break;
	}
	if (!func_309())
	{
		func_563();
	}
	if (!func_732())
	{
		func_733(1);
	}
	if (!func_324(1073741824 /* Float: 2f */))
	{
		Var0 = { func_551(398686063) };
		func_552(&Var0);
	}
	func_236(512);
	func_556(1073741824 /* Float: 2f */);
	return true;
}

void func_536(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_517(&(Local_78[iVar0 /*25*/].f_11), 1, iParam0);
	if (bParam1)
	{
		Local_78[iVar0 /*25*/].f_11.f_8[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_537(int iParam0)
{
	return func_489(&(Local_879.f_309.f_75), 1, iParam0);
}

bool func_538(int iParam0, int iParam1)
{
	if (!func_391(iParam1, 0))
	{
		if (!func_221(&iParam1))
		{
			return false;
		}
	}
	return func_489(&(Local_78[iParam1 /*25*/].f_11), 2, iParam0);
}

bool func_539(int iParam0)
{
	int iVar0;

	iVar0 = func_302(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	switch (func_734(iParam0))
	{
		case 0:
			break;
		case 1:
			break;
	}
	return true;
}

void func_540(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_302(iParam0);
	iVar1 = func_734(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 0:
			if (func_251() == 1)
			{
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar0, 30f, 0, 0);
			}
			break;
		case 1:
			break;
	}
}

void func_541(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_517(&(Local_78[iVar0 /*25*/].f_11), 2, iParam0);
}

bool func_542(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_879.f_309.f_72[iParam0]), &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

bool func_543(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*uParam1))
	{
		return false;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*uParam1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(*iParam2))
	{
		return false;
	}
	*uParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam3))
	{
		return false;
	}
	return true;
}

bool func_544(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Local_879.f_309.f_66[iParam0]), iParam1);
}

bool func_545(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_302(iParam0);
	iVar1 = func_734(iParam0);
	switch (iVar1)
	{
		case 0:
			if (func_251() == 1)
			{
				PED::REGISTER_TARGET(iVar0, iParam3, 1);
			}
			break;
		case 1:
			break;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_442(16);
	}
	return true;
}

void func_546(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_221(&iVar0))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&(Local_78[iVar0 /*25*/].f_11.f_5[iParam0]), iParam1);
}

void func_547(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = func_355(iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_735(iParam2))
		{
			func_356(iParam2, 0);
		}
		return;
	}
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	if (uParam0->f_2 != uParam1->f_1)
	{
		uParam1->f_1 = uParam0->f_2;
	}
	if (uParam1->f_1 == 0 && *uParam0 != *uParam1)
	{
		func_223(iParam2, *uParam0);
		func_736(*uParam1, *uParam0);
		*uParam1 = *uParam0;
	}
	func_737(iParam2);
	switch (uParam1->f_1)
	{
		case 0:
			if (!func_354(iParam2, 1))
			{
				return;
			}
			if (func_609(iParam2))
			{
				if (!func_735(iParam2))
				{
					func_738(iParam2);
				}
				if (func_354(iParam2, 16))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
				}
				bVar3 = MISC::IS_BIT_SET(Local_78[iVar1 /*25*/].f_22, iParam2);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (func_739(iParam2, iVar2, 16))
					{
						func_740(iParam2, iVar2, 1);
					}
					bVar4 = (func_739(iParam2, iVar2, 1) || bVar3);
					bVar5 = func_739(iParam2, iVar2, 8);
					bVar6 = (bVar4 || bVar5);
					if (!bVar6)
					{
						if (func_739(iParam2, iVar2, 4))
						{
							if (func_741() < Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/].f_7)
							{
								bVar6 = true;
							}
						}
					}
					if (bVar5)
					{
						func_611(iParam2, iVar2, 8);
					}
					if (!func_599(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/]))
					{
					}
					else if (func_742(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
					{
						if (bVar6)
						{
							func_613(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
						}
						else
						{
							if (!func_221(&iVar1))
							{
							}
							else
							{
								if (func_743(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 1))
								{
									if (!func_744(iParam2, iVar2, func_222(iParam2)))
									{
										Jump @583; //curOff = 513
									}
									else
									{
										MISC::SET_BIT(&(Local_78[iVar1 /*25*/].f_22), iParam2);
										func_119(&(Local_78[iVar1 /*25*/].f_22.f_1), iParam2, iVar2);
									}
								}
								Jump @583; //curOff = 551
								if (!bVar6)
								{
									func_613(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 1, 1, 1);
								}
							}
							iVar2++;
							Jump @611; //curOff = 592
							if (func_735(iParam2))
							{
								func_356(iParam2, 0);
							}
							Jump @924; //curOff = 611
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_599(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_742(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_613(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (!MISC::IS_BIT_SET(Local_78[iVar1 /*25*/].f_22.f_2, iParam2))
							{
								func_745(iParam2, func_637(Local_13.f_57.f_7, iParam2));
								MISC::SET_BIT(&(Local_78[iVar1 /*25*/].f_22.f_2), iParam2);
							}
							Jump @924; //curOff = 760
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_599(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_742(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_613(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (MISC::IS_BIT_SET(Local_78[iVar1 /*25*/].f_22.f_2, iParam2))
							{
								MISC::CLEAR_BIT(&(Local_78[iVar1 /*25*/].f_22.f_2), iParam2);
								MISC::CLEAR_BIT(&(Local_78[iVar1 /*25*/].f_22), iParam2);
								func_119(&(Local_78[iVar1 /*25*/].f_22.f_1), iParam2, 3);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_548()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_549(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_746(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_550(int iParam0, int iParam1)
{
	if (!func_391(iParam1, 0))
	{
		if (!func_221(&iParam1))
		{
			return false;
		}
	}
	return func_183(Local_78[iParam1 /*25*/].f_1, iParam0);
}

struct<15> func_551(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_879, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_552(var uParam0)
{
	func_748(uParam0, func_747(4, 117));
}

void func_553(int iParam0)
{
	if (Local_879.f_19.f_1 != iParam0)
	{
		if (iParam0 == 16)
		{
			func_172(0);
		}
		Local_879.f_19.f_1 = iParam0;
	}
}

void func_554(int iParam0)
{
}

void func_555(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar3 = func_749(vVar0, iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	if (!ENTITY::_0x8C03CD6B5E0E85E8(iParam0, iVar3))
	{
	}
}

void func_556(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_239(&(Local_78[iVar0 /*25*/].f_1), iParam0);
}

bool func_557(int iParam0, bool bParam1)
{
	if (((((func_443(iParam0, 780511057) || func_443(iParam0, -219932022)) || func_443(iParam0, 1120685857)) || func_443(iParam0, -2117564886)) || func_443(iParam0, 655999185)) || func_443(iParam0, 1345172471))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_443(iParam0, -653332088) || func_443(iParam0, 167901368))
		{
			return true;
		}
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return true;
		}
	}
	return false;
}

float func_558(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

Vector3 func_559(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_560(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;

	iVar0 = func_302(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || (ENTITY::IS_ENTITY_DEAD(iVar0) && iParam10 == 1))
	{
		func_172(iParam0);
		return;
	}
	if (!func_750(iParam0))
	{
		if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4) || (bParam9 && func_751(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4))
		{
			func_752(iParam0, iParam5, iParam6, iParam7, sParam8);
		}
	}
	else if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4) || (bParam9 && func_751(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4))
	{
		func_172(iParam0);
	}
}

bool func_561()
{
	return func_753(1);
}

bool func_562(int iParam0)
{
	return !func_489(&(Local_879.f_309.f_75), 8, iParam0);
}

void func_563()
{
	int iVar0;

	if (!func_131(32, 255))
	{
		func_754(Local_879.f_1, Local_879.f_3);
		if (!func_131(1024, 255))
		{
			func_755(Local_879.f_1);
			func_148(1024);
		}
		iVar0 = func_361(Local_879.f_1, Local_879.f_2);
		func_756(iVar0);
		func_757(iVar0);
		func_146(2);
		func_758(Local_879.f_9);
		func_759(Local_879.f_1);
		func_760(Local_879.f_1, Local_879.f_2, Local_879.f_3);
		func_148(32);
	}
}

void func_564()
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_252(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
	{
		Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return;
	}
	iVar2 = func_458(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &uVar1, 60f, 0, 0, 1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return;
	}
	switch (Local_13.f_7.f_14)
	{
		case 0:
			if (Local_13.f_7.f_15 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_15, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				if (!func_367())
				{
					func_368(0, 0, 2, 291934926);
				}
				else
				{
					func_368(0, 0, 1, 291934926);
				}
				Local_13.f_7.f_14++;
				Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
		case 1:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_15, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				if (!func_367())
				{
					func_368(0, 0, 3, 291934926);
				}
				else
				{
					func_368(0, 0, 1, 291934926);
				}
				Local_13.f_7.f_14++;
				Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
		case 2:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_15, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				if (func_367())
				{
					func_368(0, 0, 1, 291934926);
				}
				Local_13.f_7.f_14 = 0;
				Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
	}
}

void func_565(float fParam0)
{
	if (func_189(32))
	{
		return;
	}
	if (fParam0 > 0f)
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_302(0)))
		{
			if (!func_574(0, fParam0, 255, 0))
			{
				return;
			}
		}
	}
	func_236(32);
	func_563();
	func_761();
	if (!func_237(9, Local_879.f_4) && func_451(0, 255, 1) < 20f)
	{
		func_236(1024);
	}
	func_762(9, Local_879.f_4);
}

bool func_566(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Local_78[iVar0 /*25*/].f_1.f_3, iParam0);
}

bool func_567(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!func_221(&iParam1))
		{
			return false;
		}
	}
	else if (!func_391(iParam1, 1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Local_78[iParam1 /*25*/].f_1.f_2, iParam0);
}

bool func_568(int iParam0)
{
	char cVar0[32];

	if (MISC::IS_BIT_SET(Local_879.f_19.f_202, iParam0))
	{
		return true;
	}
	if (func_567(iParam0, 255))
	{
		return false;
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_879.f_19.f_206[iParam0]));
	StringCopy(&cVar0, "nbth_seq_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	TASK::_0x23767D80C7EED7C6(&(Local_879.f_19.f_206[iParam0]), MISC::GET_HASH_KEY(&cVar0));
	MISC::SET_BIT(&(Local_879.f_19.f_202), iParam0);
	return true;
}

char* func_569(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return "react_front_right_aggro";
	}
	iVar0 = func_252(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return "react_front_right_aggro";
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return "react_front_right_aggro";
	}
	iVar2 = func_530(iVar0, iVar1, 0f);
	iVar3 = func_530(iVar0, iVar1, 1f);
	switch (iVar2)
	{
		case 0:
			switch (iVar3)
			{
				case 3:
					return "react_front_left_aggro";
				case 2:
					return "react_front_right_aggro";
				default:
					break;
			}
			break;
		case 1:
			switch (iVar3)
			{
				case 3:
					return "react_back_left_aggro";
				case 2:
					return "react_back_right_aggro";
				default:
					break;
			}
			break;
	}
	return "react_front_right_aggro";
}

char* func_570(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return "react_front_right";
	}
	iVar0 = func_252(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return "react_front_right";
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return "react_front_right";
	}
	iVar2 = func_530(iVar0, iVar1, 0f);
	iVar3 = func_530(iVar0, iVar1, 1f);
	switch (iVar2)
	{
		case 0:
			switch (iVar3)
			{
				case 3:
					return "react_front_left";
				case 2:
					return "react_front_right";
				default:
					break;
			}
			break;
		case 1:
			switch (iVar3)
			{
				case 3:
					return "react_back_left";
				case 2:
					return "react_back_right";
				default:
					break;
			}
			break;
	}
	return "react_front_right";
}

void func_571(int iParam0)
{
	if (func_567(iParam0, 255))
	{
		return;
	}
	if (!func_763(iParam0))
	{
		return;
	}
	TASK::CLOSE_SEQUENCE_TASK(Local_879.f_19.f_206[iParam0]);
	MISC::CLEAR_BIT(&(Local_879.f_19.f_202), iParam0);
}

bool func_572(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_19.f_200, iParam0);
}

bool func_573(int iParam0, int iParam1)
{
	if (func_566(iParam1))
	{
		return false;
	}
	if (!func_567(iParam1, 255))
	{
		return false;
	}
	TASK::TASK_PERFORM_SEQUENCE(func_302(iParam0), Local_879.f_19.f_206[iParam1]);
	func_764(iParam1);
	return true;
}

bool func_574(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_391(iParam2, 0))
	{
		if (!func_221(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_78[iParam2 /*25*/].f_6.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_302(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_559(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_78[iParam2 /*25*/].f_6.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

void func_575(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_879.f_19.f_41), iParam0);
	if (func_504(&(Local_879.f_19.f_42)))
	{
		func_506(&(Local_879.f_19.f_42));
	}
}

int func_576(int iParam0)
{
	if (!func_275(iParam0, 242628503))
	{
		return -1;
	}
	return TASK::GET_SEQUENCE_PROGRESS(iParam0);
}

bool func_577(int iParam0, float fParam1)
{
	if (MISC::IS_BIT_SET(Local_879.f_19.f_41, iParam0))
	{
		return true;
	}
	if (!func_504(&(Local_879.f_19.f_42)))
	{
		func_503(&(Local_879.f_19.f_42));
		return false;
	}
	if (func_505(&(Local_879.f_19.f_42), fParam1))
	{
		MISC::SET_BIT(&(Local_879.f_19.f_41), iParam0);
		return true;
	}
	return false;
}

void func_578()
{
	int iVar0;
	int iVar1;

	if (func_324(67108864))
	{
		if (!func_550(67108864, 255))
		{
			func_556(67108864);
		}
		func_765();
		return;
	}
	iVar0 = func_351(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!func_324(16777216))
	{
		if (ENTITY::PLAY_ENTITY_ANIM(iVar0, "aggro_idle_map", func_188(), 1000f, false, true, false, 0f, 0))
		{
			func_556(16777216);
		}
	}
	iVar1 = func_302(0);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || PED::IS_PED_FLEEING(iVar1)) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, -2002118997))
	{
		ENTITY::DETACH_ENTITY(iVar0, true, true);
		TASK::_0x78B4567E18B54480(iVar0);
		GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, true);
		func_556(67108864);
	}
}

int func_579()
{
	int iVar0;

	iVar0 = func_302(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(func_351(0)))
	{
		return 0;
	}
	switch (func_251())
	{
		case 2:
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "script_re@treasure_hunter@leadin@int", "base_traveller", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "script_re@treasure_hunter@leadin@int", "base_hunter_female", 1))
			{
				return 1;
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
			{
				return 0;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
			{
				return 0;
			}
			if ((((((((((((((((ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_00_l") || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_00_lb")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_00_n")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_00_r")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_00_rb")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_01_l")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_01_lb")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_01_n")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_01_r")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_01_rb")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_02_l")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_02_lb")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_02_n")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_02_r")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_call_02_rb")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_intro_idle_00")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_intro_idle_01"))
			{
				return 1;
			}
			if ((((ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_offer_00") || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_offer_01")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_offer_02")) || ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, "pl_ilo_neg_00")) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_188(), "waiting_idle_hunter", 1))
			{
				return 2;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_188(), "waiting_idle", 1))
			{
				return 2;
			}
			break;
		case 0:
			if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_187(), "base_idle", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_187(), "base_idle_mp_female", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_187(), "idle_a", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_187(), "idle_a_mp_female", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_187(), "idle_b", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_187(), "idle_b_mp_female", 1))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_187(), "standing_idle", 1))
			{
				return 2;
			}
			break;
		case 1:
			return 0;
	}
	return 0;
}

int func_580(char* sParam0, char* sParam1)
{
	return BUILTIN::CEIL((1000f * ENTITY::GET_ANIM_DURATION(sParam0, sParam1)));
}

bool func_581(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_309.f_107, iParam0);
}

bool func_582(int iParam0, int iParam1)
{
	if (!func_391(iParam1, 0))
	{
		if (!func_221(&iParam1))
		{
			return false;
		}
	}
	return func_183(Local_78[iParam1 /*25*/].f_1, iParam0);
}

bool func_583()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_879.f_19.f_45, false))
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
			{
				return true;
			}
		}
	}
	return false;
}

void func_584(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_278(&(Local_78[iVar0 /*25*/].f_1), iParam0);
}

void func_585()
{
	int iVar0;
	float fVar1;

	iVar0 = func_647();
	if (func_447(64))
	{
		func_766();
		return;
	}
	else if (func_582(268435456, 255))
	{
		func_584(268435456);
	}
	if (func_324(536870912))
	{
		return;
	}
	if (func_324(iVar0))
	{
		return;
	}
	if (func_642())
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
		{
			if (func_767(1077936128 /* Float: 3f */, 1000))
			{
				func_556(536870912);
			}
			return;
		}
		fVar1 = func_451(0, func_643(0, 0, 1, 0), 1);
		if (func_644(fVar1))
		{
			func_556(iVar0);
			return;
		}
		if (Local_13.f_7.f_7 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 8000)
			{
				return;
			}
		}
		if (func_587(3, Local_13.f_7.f_19, func_302(0), PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20), 1060437492 /* Float: 0.707f */))
		{
			if (func_588(func_768(Local_13.f_7.f_19), 0))
			{
				switch (Local_13.f_7.f_19)
				{
					case 0:
						func_368(0, 3, 2, 291934926);
						break;
					case 1:
						func_368(0, 3, 3, 291934926);
						break;
					case 2:
						func_368(0, 3, 4, 291934926);
						break;
				}
				func_556(iVar0);
			}
		}
	}
}

bool func_586(int iParam0)
{
	int iVar0;

	iVar0 = Local_879.f_19.f_69;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
		{
			iVar0 = Local_13.f_7.f_20;
		}
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		*iParam0 = PLAYER::GET_PLAYER_PED(iVar0);
		return ENTITY::DOES_ENTITY_EXIST(*iParam0);
	}
	return false;
}

int func_587(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = func_530(iParam2, iParam3, iParam4);
	if (iVar0 == 1)
	{
		if (func_769(iParam2, iParam3))
		{
			iVar1 = 3;
		}
		else
		{
			iVar1 = 2;
		}
	}
	return func_770(iParam0, iParam1, &(Local_879.f_19.f_65), iVar0, iVar1);
}

bool func_588(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_879.f_19.f_45, &(Local_879.f_19.f_65)))
		{
			return true;
		}
		else
		{
			if (func_691(iParam0, 255))
			{
				func_771(iParam0);
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_879.f_19.f_45, &(Local_879.f_19.f_65)))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_879.f_19.f_45, &(Local_879.f_19.f_65)))
				{
					if (!ANIMSCENE::_0xDF7B5144E25CD3FE(Local_879.f_19.f_45, &(Local_879.f_19.f_65)))
					{
					}
				}
				return false;
			}
			if ((iParam1 || func_772()) || func_455(1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_879.f_19.f_45, &(Local_879.f_19.f_65), true);
			}
		}
	}
	return false;
}

void func_589(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_448(0))
	{
		Local_879.f_19.f_212 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (Local_879.f_19.f_212 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_879.f_19.f_212, iVar2) <= 1000)
	{
		bVar0 = true;
	}
	if (Local_879.f_19.f_211 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_879.f_19.f_211, iVar2) <= 2000)
	{
		bVar0 = true;
		bVar1 = true;
	}
	if (bParam0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_773(0, 1, 1);
	}
	if (bVar1)
	{
		func_773(0, 0, 1);
	}
}

int func_590(int iParam0, int iParam1)
{
	return func_770(iParam0, iParam1, &(Local_879.f_19.f_65), 4, 1);
}

int func_591(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_592(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_593(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	if (iParam0 > iVar0 && !bParam1)
	{
		return 0;
	}
	func_774(iParam0, 0, 0, 1, 0);
	return 1;
}

int func_594(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_775(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_776(iParam0, &Var4, &uVar0, iParam1, 0);
}

bool func_595()
{
	if (!func_550(4096, 255))
	{
		func_556(4096);
	}
	return func_641(4096);
}

bool func_596(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0))))
	{
		return false;
	}
	return func_582(1073741824 /* Float: 2f */, iParam0);
}

int func_597(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_879.f_233.f_7[iParam0 /*11*/]))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam2 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
		}
		else if (Local_78[iVar0 /*25*/].f_6.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_459(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_78[iVar0 /*25*/].f_6.f_2[iParam0] > Local_78[iVar1 /*25*/].f_6.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_78[iVar0 /*25*/].f_6.f_2[iParam0] > fParam2)
		{
		}
		else
		{
			Stack.Push(iVar0);
			Stack.Push(iParam0);
			Call_Loc(iParam1);
			if (!StackVal)
			{
			}
			else
			{
				iVar1 = iVar0;
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

var func_598(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/];
}

bool func_599(int iParam0)
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

void func_600(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_599(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_777(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_778(iVar0);
	*uParam0 = 0;
}

int func_601(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_779(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_602(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_779(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_603(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_387(&Var1, iParam0))
	{
		iVar0 = ((func_780() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_604(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_605(int iParam0, int iParam1)
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

void func_606(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051252.f_16[16] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[16]))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 10, Global_1051252.f_16[16]);
	func_781(uParam0, uParam0->f_1);
}

int func_607(int iParam0)
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

void func_608(var uParam0, int iParam1, int iParam2)
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
		func_198(uParam0, iVar0);
		iVar0++;
	}
}

bool func_609(int iParam0)
{
	if (Local_879.f_423.f_81 == iParam0)
	{
		return true;
	}
	return false;
}

void func_610(int iParam0, int iParam1, int iParam2)
{
	func_239(&(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_611(int iParam0, int iParam1, int iParam2)
{
	func_278(&(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_612(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_599(iParam0))
	{
		return;
	}
	iVar0 = func_777(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_613(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_599(iParam0))
	{
		return;
	}
	iVar0 = func_777(iParam0);
	if (bParam1)
	{
		func_782(iParam0, 4);
		if (bParam3)
		{
			func_783(iVar0, 1);
		}
		func_784(iVar0, 1);
	}
	else
	{
		func_785(iParam0, 4);
		func_784(iVar0, 0);
	}
}

void func_614(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 16384);
	}
	else
	{
		func_239(&(uParam0->f_2), 16384);
	}
}

void func_615(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 2048);
	}
	else
	{
		func_239(&(uParam0->f_2), 2048);
	}
}

void func_616(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(uParam0, 16);
	}
	else
	{
		func_278(uParam0, 67108864);
		func_278(uParam0, 16);
	}
}

void func_617(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 128);
	}
	else
	{
		func_239(&(uParam0->f_2), 128);
	}
}

void func_618(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(uParam0, 256);
	}
	else
	{
		func_278(uParam0, 256);
	}
}

void func_619(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_239(uParam0, 268435456);
	}
	else
	{
		func_278(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_239(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_278(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_239(uParam0, 536870912);
	}
	else
	{
		func_278(uParam0, 536870912);
	}
}

float func_620(var uParam0)
{
	return uParam0->f_26;
}

void func_621(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_622(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(uParam0, 1);
	}
	else
	{
		func_278(uParam0, 1);
	}
}

void func_623(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(uParam0, 512);
	}
	else
	{
		func_278(uParam0, 512);
	}
}

void func_624(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(uParam0, 2);
	}
	else
	{
		func_278(uParam0, 2);
	}
}

void func_625(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(uParam0, 8);
	}
	else
	{
		func_278(uParam0, 8);
	}
}

int func_626(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_4;
}

float func_627(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_628(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_6;
}

bool func_629(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_634(iParam1))
	{
		return false;
	}
	iVar0 = func_786(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_630(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_631(int iParam0)
{
	return func_173(iParam0, 32);
}

bool func_632(int iParam0)
{
	return func_173(iParam0, 64);
}

bool func_633(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_634(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_635(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_423.f_80, iParam0);
}

bool func_636(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_423.f_79, iParam0);
}

int func_637(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam1 * 2;
	if (MISC::IS_BIT_SET(iParam0, iVar1))
	{
		MISC::SET_BIT(&iVar0, 0);
	}
	if (MISC::IS_BIT_SET(iParam0, iVar1 + 1))
	{
		MISC::SET_BIT(&iVar0, 1);
	}
	return iVar0;
}

int func_638(int iParam0, int iParam1, var uParam2)
{
	switch (func_393(uParam2))
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

bool func_639(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_640(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (func_787(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			return !SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_13), iVar1);
		}
	}
	return false;
}

bool func_641(int iParam0)
{
	return func_183(Local_879.f_19.f_196, iParam0);
}

bool func_642()
{
	return func_447(func_648());
}

int func_643(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_274(iParam0, fParam1, bParam2, bParam3);
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

bool func_644(float fParam0)
{
	float fVar0;

	fVar0 = 7f;
	if (func_449())
	{
		fVar0 = 15f;
	}
	if (fParam0 <= fVar0)
	{
		return true;
	}
	return false;
}

int func_645()
{
	switch (Local_13.f_7.f_19)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_646()
{
	switch (func_251())
	{
		case 2:
		case 3:
			switch (Local_13.f_7.f_19)
			{
				case 0:
					return 30f;
				case 1:
					return 45f;
				case 2:
					return 45f;
				default:
					break;
			}
			break;
		default:
			switch (Local_13.f_7.f_19)
			{
				case 0:
					return 35f;
				case 1:
					return 15f;
				case 2:
					return 15f;
				default:
					break;
			}
			break;
	}
	return 7f;
}

int func_647()
{
	switch (Local_13.f_7.f_19)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 1;
}

int func_648()
{
	switch (Local_13.f_7.f_19)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 1;
}

int func_649(int iParam0, int iParam1)
{
	if (func_788(iParam0))
	{
		return 0;
	}
	if (Local_13.f_57[iParam0 /*3*/] == iParam1)
	{
		return 1;
	}
	Local_13.f_57[iParam0 /*3*/] = iParam1;
	return 1;
}

bool func_650(bool bParam0)
{
	return ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_20)) && (func_451(0, 255, 1) <= 20f || !bParam0));
}

int func_651()
{
	return Local_13.f_7.f_34;
}

bool func_652()
{
	if (func_659())
	{
		if (func_660(500))
		{
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (!func_654(0, 2))
		{
			if (!func_454(0, 2))
			{
			}
		}
		else
		{
			if (!func_450(14))
			{
				if (func_447(1048576))
				{
					if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_35, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 5000)
					{
						func_789(18, 291934926);
						MISC::SET_BIT(&(Local_13.f_7.f_5), 14);
						MISC::SET_BIT(&(Local_879.f_19.f_7), 14);
					}
					if (!func_436(0, 1.5f, 0))
					{
						func_457(1048576, 1);
					}
				}
				else if (func_436(0, 1.5f, 0))
				{
					Local_13.f_7.f_35 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_445(1048576, 1);
				}
			}
			if ((Local_13.f_7.f_6 == 0 || func_447(32768)) || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 6000)
			{
				switch (Local_13.f_7.f_9)
				{
					case 0:
						func_789(9, 291934926);
						Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						func_457(32768, 1);
						break;
					case 1:
						func_790();
						break;
					case 2:
						func_789(10, 291934926);
						Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						func_457(32768, 1);
						break;
					case 3:
						func_790();
						break;
					case 4:
						func_789(10, 291934926);
						Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						func_457(32768, 1);
						break;
				}
				Local_13.f_7.f_9++;
			}
		}
	}
	else if (Local_13.f_7.f_8 < 5)
	{
		if (!func_660(12000))
		{
			func_789(6, 291934926);
			Local_13.f_7.f_8++;
		}
	}
	else if (!func_660(500))
	{
		if (func_454(0, 0))
		{
			return true;
		}
	}
	return Local_13.f_7.f_9 > 4;
}

void func_653(int iParam0)
{
	Local_13.f_7.f_34 = iParam0;
}

bool func_654(int iParam0, int iParam1)
{
	return Local_13.f_57[iParam0 /*3*/] == iParam1;
}

bool func_655()
{
	return (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_21));
}

bool func_656()
{
	int iVar0;

	iVar0 = func_597(0, 83147, 20f, 1, 0);
	return NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0);
}

int func_657(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_658()
{
	Local_13.f_7.f_20 = 255;
}

bool func_659()
{
	if (func_650(1) || func_441(0))
	{
		return true;
	}
	return false;
}

bool func_660(int iParam0)
{
	if (Local_13.f_7.f_28 != 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_28, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= iParam0)
		{
			return true;
		}
	}
	return func_448(0);
}

void func_661(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	func_789(11, 291934926);
	SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_12), iParam0);
}

bool func_662(int iParam0, bool bParam1, bool bParam2)
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

void func_663(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_367())
	{
		func_791(iParam0->f_11, iParam0->f_12, iParam0->f_13);
	}
	else
	{
		iVar0 = func_792(iParam0->f_11);
		iVar1 = func_792(iParam0->f_12);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_793(iVar0, iVar1, iParam0->f_13, iParam0->f_14, func_669(func_501(iParam0->f_11)), 1);
		}
	}
}

void func_664()
{
	int iVar0;

	iVar0 = func_749(Global_35, 1);
	func_594(iVar0, 0);
}

bool func_665()
{
	if (func_28() != 0)
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

int func_666(int iParam0, int iParam1)
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

void func_667(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 7, &uParam1);
}

void func_668(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_794(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

int func_669(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_10;
}

void func_670(int iParam0, char* sParam1, bool bParam2)
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

void func_671(int iParam0)
{
}

void func_672(int iParam0, float fParam1)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_9 = fParam1;
}

bool func_673(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
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
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("NET_BEAT_ANIMAL_ATTACK");
		case 2:
			return joaat("NET_BEAT_ARROWHEAD_INJURY");
		case 14:
			return joaat("NET_BEAT_DUEL");
		case 4:
			return joaat("NET_BEAT_GRAVEROBBER");
		case 5:
			return joaat("NET_BEAT_RIVAL_COLLECTOR");
		case 6:
			return joaat("NET_BEAT_KIDNAPPED");
		case 7:
			return joaat("NET_BEAT_PHOTOGRAPHY");
		case 8:
			return joaat("NET_BEAT_TIED_UP_PED");
		case 9:
			return joaat("NET_BEAT_TREASURE_HUNTER");
		case 10:
			return joaat("NET_BEAT_TREE_MAP");
		case 11:
			return joaat("NET_BEAT_RUNAWAY_WAGON");
		case 12:
			return joaat("NET_BEAT_HOBO_DOG");
		case 13:
			return joaat("NET_BEAT_WILDMAN");
		case 3:
			return joaat("NET_BEAT_EGG_PROTECTOR");
		case 15:
			return joaat("NET_BEAT_MOONSHINE_CAMP");
		case 16:
			return joaat("NET_BEAT_BEGGAR");
		case 17:
			return joaat("NET_BEAT_STALKING_HUNTER");
		case 18:
			return joaat("NET_BEAT_SLUMPED_HUNTER");
		case 19:
			return joaat("NET_BEAT_CRASHED_WAGON");
		case 20:
			return joaat("NET_BEAT_SUSPENSION_TRAP");
		case 31:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_ALLIGATOR");
		case 21:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_BEAR");
		case 28:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_BEAVER");
		case 25:
			return 1829377792;
		case 24:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_BOAR");
		case 32:
			return -753359492;
		case 22:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_COUGAR");
		case 29:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_COYOTE");
		case 26:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_FOX");
		case 30:
			return -1373797819;
		case 27:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_WOLF");
		case 33:
			return -268685349;
		case 34:
			return -2047817190;
		case 23:
			return 257784569;
		default:
			break;
	}
	return 0;
}

struct<2> func_675(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_676(int iParam0)
{
	if (!func_491(func_490(iParam0), &(Local_879.f_309.f_79[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_879.f_309.f_106), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_879.f_309.f_106), iParam0);
}

int func_677(int iParam0, int iParam1)
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

void func_678()
{
	if (Local_879.f_423.f_81 < 0)
	{
		return;
	}
	func_356(func_177(Local_879.f_423.f_81), 0);
	Local_879.f_423.f_81 = -1;
	func_795(func_177(Local_879.f_423.f_81));
}

bool func_679(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_355(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (iParam1 == iVar0)
	{
		if (Local_879.f_423.f_81 != iParam0)
		{
			func_678();
			func_738(iParam0);
			Local_879.f_423.f_81 = iParam0;
			func_796(iParam0);
		}
		return true;
	}
	return false;
}

int func_680(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_409(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_410(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_410(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_410(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_681(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_409(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_410(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_410(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_410(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_682(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_489(&(Local_78[iParam1 /*25*/].f_11), 1, iParam0))
	{
		if (Local_78[iParam1 /*25*/].f_11.f_8[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_50.f_1[iParam0]))
		{
			if (Local_13.f_50.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_13.f_50.f_4[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_78[iParam1 /*25*/].f_11.f_8[iParam0], Local_13.f_50.f_4[iParam0]))
		{
			Local_13.f_50.f_1[iParam0] = iVar0;
			Local_13.f_50.f_4[iParam0] = Local_78[iParam1 /*25*/].f_11.f_8[iParam0];
		}
	}
}

void func_683(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_13.f_57[iVar0 /*3*/].f_2 != 0)
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_57[iVar0 /*3*/].f_1))
		{
		}
		else if (!MISC::IS_BIT_SET(Local_78[iParam0 /*25*/].f_22, iVar0))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				Jump @155; //curOff = 109
			}
			else
			{
				Local_13.f_57[iVar0 /*3*/].f_1 = iVar1;
				func_119(&(Local_13.f_57.f_7), iVar0, func_637(Local_78[iParam0 /*25*/].f_22.f_1, iVar0));
			}
		}
		iVar0++;
	}
}

void func_684(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_797() - fParam1);
	func_798(uParam0, 1);
	func_799(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_685(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_686(var uParam0)
{
	if (!func_504(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_800(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_797() - uParam0->f_1);
}

void func_687(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_517(&(Local_78[iVar0 /*25*/].f_11), 3, iParam0);
}

void func_688(int iParam0)
{
}

bool func_689(int iParam0)
{
	return func_489(&(Local_879.f_309.f_75), 7, iParam0);
}

bool func_690(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_693(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_13 = fParam3;
	}
	else
	{
		uParam1->f_13 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1940258.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam1->f_2 & 2 != 0)
			{
				if (func_706(uParam1, 4000))
				{
					if ((func_707(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_708(uParam1, iParam0)) && func_709(uParam1, iParam0))
					{
						func_711();
						*uParam2 = 2;
						func_695(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_706(uParam1, 4000))
				{
					if ((func_707(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_708(uParam1, iParam0)) && func_709(uParam1, iParam0))
					{
						func_711();
						*uParam2 = 2;
						func_695(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258.f_35 != 0)
			{
				if (Global_1940258.f_34 == 0)
				{
					if (func_710(iParam0, Global_1940258.f_35))
					{
						func_711();
						*uParam2 = 2;
						func_695(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_714())
				{
					if (func_710(iParam0, Global_1940258.f_36))
					{
						func_711();
						*uParam2 = 2;
						func_695(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_700(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_701(Global_34, iParam0, uParam1))
					{
						func_711();
						*uParam2 = 4;
						func_695(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_702(Global_34, iParam0, uParam1))
					{
						func_711();
						*uParam2 = 256;
						func_695(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_801(iParam0, uParam1))
			{
				func_711();
				*uParam2 = 131072;
				func_695(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_802(iParam0, uParam1))
			{
				func_711();
				*uParam2 = 262144;
				func_695(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_691(int iParam0, int iParam1)
{
	if (!func_391(iParam1, 0))
	{
		if (!func_221(&iParam1))
		{
			return false;
		}
	}
	return func_183(Local_78[iParam1 /*25*/].f_1.f_1, iParam0);
}

bool func_692(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_693(var uParam0, bool bParam1, int iParam2)
{
	func_803(iParam2);
	if (Global_1572887.f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		if (Global_1940258.f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1296859.f_11)
		{
			return;
		}
		if (Global_1296859.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887.f_13 == -1)
	{
		uParam0->f_14 = Global_1940258.f_38;
	}
	else
	{
		uParam0->f_14 = func_804(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_14 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_34))
						{
							func_239(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_805(1, 1))
						{
							func_239(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_805(1, 1) || *uParam0 & 8192 != 0))
				{
					func_278(uParam0, 33554432);
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
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (func_806(uParam0))
			{
				uParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_807(uParam0);
}

bool func_694(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1940258.f_27)
			{
				return false;
			}
			if (iVar2 == Global_1940258.f_26)
			{
				return false;
			}
			if (!func_808(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_809(iParam0, iVar2) <= func_810(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_695(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_731(iParam2, 1, 1, 1, 0))
	{
		func_239(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_811(uParam1, 1);
	func_812();
}

bool func_696(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_813(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_814(uParam1);
			if (func_815(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_816(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_811(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_817(uParam1))
						{
							func_811(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_697(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_818(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_814(uParam2);
		if (func_815(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_816(uParam2)
				{
					func_811(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_698(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1940258.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940258.f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_808(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_816(uParam1)
		{
			fVar3 = func_814(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_699(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_819(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1296859.f_10)
		{
			if (!Global_1296859.f_11)
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

bool func_700(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_713();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_701(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_820(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) || Global_1940258.f_40 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && WEAPON::_0xEA522F991E120D45(Global_1940258.f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) || Global_1940258.f_40 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)))
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
			if (func_709(uParam2, iParam1))
			{
				func_811(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_702(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_730(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_709(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_811(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_703(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_821(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_811(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_30))
				{
					func_811(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar4, 0, 0);
					if (func_822(iParam1, vVar0, vVar4))
					{
						func_811(uParam2, 1);
						return true;
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_811(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar7, 0, 0);
					if (func_822(iParam1, vVar0, vVar7))
					{
						func_811(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE_CLOUD"), vVar0, 15f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE"), vVar0, 15f))
	{
		return true;
	}
	return false;
}

bool func_704(int iParam0, var uParam1)
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
	while (iVar0 < Global_1940258.f_33)
	{
		if (!func_808(iParam0, uParam1, Global_1940258.f_28[iVar0]) || iParam0 == Global_1940258.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_823(Global_1940258.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false), vVar9);
			if (func_824(Global_1940258.f_28[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_825(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_826(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_827(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_705(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_706(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_713();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_707(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_828(iVar0, &iVar2))
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
	if (func_829(iVar0, iParam0))
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

int func_708(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_709(var uParam0, int iParam1)
{
	if (func_830(uParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_34) != 0)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_34, iParam1))
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_710(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_558(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_711()
{
}

bool func_712(var uParam0, int iParam1)
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
		if (func_831(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_713();
			return true;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_369(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_713();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_713()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_714()
{
	if (Global_1940258.f_36 == 0)
	{
		return false;
	}
	if (Global_1940258.f_36 == Global_1940258.f_34)
	{
		return false;
	}
	if (Global_1940258.f_37 <= 0)
	{
		return false;
	}
	if ((func_713() - Global_1940258.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_715(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_810(uParam0);
	if (uParam0->f_13 > func_620(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_832(iParam1);
	iVar1 = func_833(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_716(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	if (!Global_1940258.f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_530(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_751(vVar1, vVar4);
	fVar8 = MISC::ABSF((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_717(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_834(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_718(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1940258.f_18)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_835(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, 1, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_34);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)) || Global_1940258.f_24)
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!func_525(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			if (func_836(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_34)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!func_837(uParam1, iParam0))
					{
						if (func_369(iVar4, Global_35, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (!PED::IS_PED_A_PLAYER(iVar4) || !PED::IS_PED_A_PLAYER(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) || PED::_0x06087579E7AA85A9(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			EVENT::_0x1A5C5D350068A673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_719(int iParam0, var uParam1)
{
	if (!func_838(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_720(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_713();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_721(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_722(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_713();
	}
	else if (func_713() - uParam1->f_5) > func_839(uParam1)
	{
		return func_840(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_723(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_34 == iVar1 || Global_1940258.f_34 == iVar1)
	{
		return true;
	}
	return false;
}

int func_724(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_841(vVar3, vVar6);
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
	if (func_842(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_725(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_183(Local_879.f_309.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_879.f_309.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_879.f_309.f_65), iParam0);
	if (!bParam3 && Local_78[iParam2 /*25*/].f_11.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_78[iParam2 /*25*/].f_11.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(*iParam1))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam1, 17))
	{
		return false;
	}
	iVar0 = func_591(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::_0x705BE297EEBDB95D(iVar0) || func_843(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_0x79B1A6E780266DB0(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_726(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_727(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_728(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	int iVar34;
	int iVar35;
	vector3 vVar36;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	int iVar45;
	int iVar46;

	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	vVar7 = { vVar4 - vVar1 * Vector(0.5f, 0.5f, 0.5f) };
	if (bParam8)
	{
		vVar7.x = ((func_844(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_845(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_846(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_431(func_847(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_848(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_848(vVar13, vVar10) };
	vVar19 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + vParam2 };
	vVar22 = { vVar19 - vVar7 * vVar13 + vVar7 * vVar16 };
	vVar25 = { vVar19 + vVar7 * vVar13 + vVar7 * vVar16 };
	vVar28 = { vVar19 - vVar7 * vVar13 - vVar7 * vVar16 };
	vVar31 = { vVar19 + vVar7 * vVar13 - vVar7 * vVar16 };
	GRAPHICS::GET_SCREEN_RESOLUTION(&iVar34, &iVar35);
	vVar36 = { BUILTIN::TO_FLOAT(iVar34), BUILTIN::TO_FLOAT(iVar35), 0f };
	bVar39 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar19, &vVar19, &(vVar19.f_1));
	bVar40 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar22, &vVar22, &(vVar22.f_1));
	bVar41 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar25, &vVar25, &(vVar25.f_1));
	bVar42 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar28, &vVar28, &(vVar28.f_1));
	bVar43 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar31, &vVar31, &(vVar31.f_1));
	bVar44 = (((bVar40 || bVar41) || bVar42) || bVar43);
	if (bVar39)
	{
		vVar19 = { vVar19 * vVar36 };
	}
	if (bVar40)
	{
		vVar22 = { vVar22 * vVar36 };
	}
	if (bVar41)
	{
		vVar25 = { vVar25 * vVar36 };
	}
	if (bVar42)
	{
		vVar28 = { vVar28 * vVar36 };
	}
	if (bVar43)
	{
		vVar31 = { vVar31 * vVar36 };
	}
	iVar45 = (iParam9 / 2);
	iVar46 = (iParam10 / 2);
	if (!bVar39 && !bVar44)
	{
		return 0;
	}
	else if (bVar39 && !bVar44)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = iVar34;
		uParam1->f_3 = iVar35;
	}
	else if (!bVar44)
	{
		return 0;
	}
	else if (bVar40)
	{
		if (!bVar41)
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar22.x)));
		}
		else
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_849((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_849((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar22.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar22.x) - iVar45);
		uParam1->f_1 = (BUILTIN::FLOOR(vVar22.y) - iVar46);
	}
	else if (bVar41)
	{
		if (bVar43)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_849(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar25.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_3 = 0;
			return 0;
		}
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_849((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = 0;
		uParam1->f_1 = (BUILTIN::FLOOR(vVar25.y) - iVar46);
	}
	else if (bVar42)
	{
		if (bVar43)
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((vVar31.x - vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		else
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar28.x) - iVar45);
		uParam1->f_1 = 0;
	}
	else if (bVar43)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(vVar31.x));
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_2 < 1 || uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_729(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = (uParam1->f_2 / 2);
	iVar1 = (uParam1->f_3 / 2);
	iVar2 = (*uParam1 + iVar0);
	iVar3 = (uParam1->f_1 + iVar1);
	iVar4 = MISC::ABSI((*iParam0 - iVar2));
	iVar5 = MISC::ABSI((iParam0->f_1 - iVar3));
	if (iVar4 > (iVar0 + iParam0->f_2) || iVar5 > (iVar1 + iParam0->f_2))
	{
		return 0;
	}
	if (iVar4 <= iVar0 || iVar5 <= iVar1)
	{
		return 1;
	}
	iVar6 = (iVar4 - iVar0);
	iVar7 = (iVar5 - iVar1);
	iVar6 = (iVar6 * iVar6);
	iVar7 = (iVar7 * iVar7);
	if (iVar6 + iVar7) <= (iParam0->f_2 * iParam0->f_2)
	{
		return 1;
	}
	return 0;
}

int func_730(var uParam0)
{
	return uParam0->f_23;
}

bool func_731(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

bool func_732()
{
	return (func_132(64) || func_131(64, 255));
}

void func_733(bool bParam0)
{
	int iVar0;

	if (!func_131(64, 255))
	{
		iVar0 = func_361(Local_879.f_1, Local_879.f_2);
		func_756(iVar0);
		if (!func_131(1024, 255))
		{
			func_148(1024);
		}
		func_757(iVar0);
		if (bParam0)
		{
			func_850(Local_879.f_1, Local_879.f_4);
		}
		func_148(64);
	}
}

int func_734(int iParam0)
{
	return iParam0;
}

bool func_735(int iParam0)
{
	if (func_354(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_736(var uParam0, var uParam1)
{
}

void func_737(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_355(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_851(iParam0))
	{
		func_178(iParam0, 0);
		return;
	}
	else if (func_354(iParam0, 8))
	{
		func_178(iParam0, 0);
	}
	bVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_559(PLAYER::PLAYER_ID())) <= Local_879.f_423[iParam0 /*39*/].f_2;
	if (bVar1 != func_354(iParam0, 1))
	{
		func_178(iParam0, 0);
		if (bVar1)
		{
			if (!MISC::_0x870708A6E147A9AD(iVar0, Local_879.f_423[iParam0 /*39*/].f_3, Local_879.f_423[iParam0 /*39*/].f_2, 0, Local_879.f_423[iParam0 /*39*/].f_4, 0, 0, 0, 0, 3))
			{
			}
			else
			{
				if (func_609(iParam0))
				{
					func_738(iParam0);
				}
				if (!MISC::_IS_STRING_SPACE(Local_879.f_423[iParam0 /*39*/].f_3))
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iVar0, MISC::GET_HASH_KEY(Local_879.f_423[iParam0 /*39*/].f_3));
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
				}
				func_488(iParam0, 1);
			}
		}
	}
}

void func_738(int iParam0)
{
	int iVar0;

	if (func_735(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_740(iParam0, iVar0, 1);
		iVar0++;
	}
	func_488(iParam0, 2);
}

bool func_739(int iParam0, int iParam1, int iParam2)
{
	return func_183(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1, iParam2);
}

void func_740(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		func_600(&(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/]), 1, 1);
	}
	if (MISC::_IS_STRING_SPACE(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 == 0)
	{
	}
	iVar0 = func_355(iParam0);
	iVar1 = func_852(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3, iVar0, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5, 0, 0, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	iVar2 = func_777(iVar1);
	func_853(iVar1, 18, 0, 1);
	func_853(iVar1, 17, 0, 1);
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar2 /*23*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	if (func_739(iParam0, iParam1, 2))
	{
		func_612(iVar1, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7, 1);
	}
	if (!func_739(iParam0, iParam1, 1))
	{
		if (func_739(iParam0, iParam1, 4))
		{
			if (func_741() < Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7)
			{
				if (func_742(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
				{
					func_613(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
				}
			}
			else if (!func_742(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
			{
				func_613(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 1, 1, 1);
			}
		}
	}
	else
	{
		func_613(iVar1, 0, 1, 1);
	}
	func_611(iParam0, iParam1, 16);
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/] = iVar1;
}

int func_741()
{
	if (func_28() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_742(int iParam0, bool bParam1)
{
	if (bParam1 && !func_599(iParam0))
	{
		return false;
	}
	return !func_854(iParam0, 4);
}

bool func_743(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_599(iParam0))
	{
		return false;
	}
	iVar0 = func_777(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_744(int iParam0, int iParam1, var uParam2)
{
	return true;
}

void func_745(int iParam0, int iParam1)
{
	switch (func_393(func_222(iParam0)))
	{
		case 2:
			if (func_855(iParam0) == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 1:
						func_856(0, 0, joaat("KIT_EMOTE_REACTION_SHAKEHEAD_1"), 1, 1, 0, 0);
						Local_879.f_19.f_211 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						break;
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_29 = iParam1;
				Local_13.f_7.f_23 = func_855(iParam0);
				func_445(16, 1);
			}
			break;
	}
	func_857(iParam0, iParam1);
}

bool func_746(int iParam0, var uParam1, var uParam2, bool bParam3)
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
	*uParam2 = Global_1298536[iVar0 /*87*/].f_3;
	return true;
}

var func_747(int iParam0, int iParam1)
{
	return func_858(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_748(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

int func_749(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_859(vParam0);
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

bool func_750(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_879.f_233.f_7[iParam0 /*11*/].f_1);
}

float func_751(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_752(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_172(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_879.f_233.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, Local_879.f_233.f_7[iParam0 /*11*/]);
	if (iParam2 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, iParam2);
	}
	if (iParam3 != 0)
	{
		MAP::SET_BLIP_SPRITE(iVar0, iParam3, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, sParam4);
	}
	Local_879.f_233.f_7[iParam0 /*11*/].f_1 = iVar0;
}

bool func_753(int iParam0)
{
	return func_183(Local_879.f_233.f_2, iParam0);
}

void func_754(int iParam0, int iParam1)
{
	struct<29> Var0;
	struct<2> Var31;
	int iVar33;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_494(iParam0, joaat("VARIATIONS_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_121(&Var0, 4) && func_860(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1268861[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*99*/].f_56[iParam0] = iVar33;
}

void func_755(int iParam0)
{
	func_861(iParam0);
}

void func_756(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_128(Global_1272030[iParam0 /*4*/]))
	{
		return;
	}
	func_862(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_129(&(Global_1272030[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_863(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_863(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1296859.f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_863(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_863(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1296859.f_21, true);
	}
}

void func_757(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_606(&Var0);
}

void func_758(struct<2> Param0)
{
	struct<32> Var0;

	if (func_359(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_359(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_359(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_864(Param0, &Var0))
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

void func_759(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_494(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_760(int iParam0, int iParam1, int iParam2)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar31 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar31 > -1 && iVar31 < 32)
	{
		func_32(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 3 && Var0.f_7 >= 0)
		{
			Global_1268861[iVar31 /*99*/].f_95[Var0.f_7] = 0;
		}
	}
}

void func_761()
{
	if (!func_68(2))
	{
		return;
	}
	func_146(8);
}

void func_762(int iParam0, int iParam1)
{
	if (!func_372(iParam0, iParam1))
	{
		return;
	}
	func_865(iParam1, iParam0);
}

bool func_763(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return false;
	}
	MISC::SET_BIT(&(Local_78[iVar0 /*25*/].f_1.f_2), iParam0);
	return true;
}

int func_764(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return 0;
	}
	MISC::SET_BIT(&(Local_78[iVar0 /*25*/].f_1.f_3), iParam0);
	return 1;
}

void func_765()
{
	bool bVar0;
	bool bVar1;

	bVar0 = (func_866(0) && ENTITY::IS_ENTITY_VISIBLE(func_351(0)));
	bVar1 = MAP::DOES_BLIP_EXIST(Local_879.f_19.f_213);
	if (bVar0 != bVar1)
	{
		if (bVar0)
		{
			Local_879.f_19.f_213 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PICKUP"), func_351(0));
			MAP::SET_BLIP_SCALE(Local_879.f_19.f_213, 0.75f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_879.f_19.f_213, "NB_TRHU_MAP_BLIP");
		}
		else
		{
			MAP::REMOVE_BLIP(&(Local_879.f_19.f_213));
		}
	}
}

void func_766()
{
	if (!func_582(268435456, 255))
	{
		func_584(536870912);
		func_556(268435456);
		if (func_504(&(Local_879.f_19.f_62)))
		{
			func_506(&(Local_879.f_19.f_62));
		}
	}
}

bool func_767(float fParam0, int iParam1)
{
	if (!func_504(&(Local_879.f_19.f_62)))
	{
		func_503(&(Local_879.f_19.f_62));
	}
	if (Local_13.f_7.f_24 == 0)
	{
		if (func_505(&(Local_879.f_19.f_62), fParam0))
		{
		}
		return false;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_24, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= iParam1)
	{
		return true;
	}
	return false;
}

int func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 1;
}

bool func_769(int iParam0, int iParam1)
{
	return func_867(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
}

int func_770(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam2, "pl_root", 32);
			return 1;
		case 1:
			StringCopy(sParam2, "pl_root_upper", 32);
			return 1;
		case 2:
			StringCopy(sParam2, "pl_intro_idle_", 32);
			break;
		case 3:
			StringCopy(sParam2, "pl_call_", 32);
			break;
		case 4:
			StringCopy(sParam2, "pl_offer_", 32);
			break;
		case 5:
			StringCopy(sParam2, "pl_ilo_neg_", 32);
			break;
		default:
			return 0;
	}
	if (iParam1 > -1)
	{
		if (iParam1 < 10)
		{
			StringConCat(sParam2, "0", 32);
		}
		StringIntConCat(sParam2, iParam1, 32);
	}
	if (iParam3 != 4)
	{
		switch (iParam3)
		{
			case 0:
				StringConCat(sParam2, "_n", 32);
				break;
			case 3:
				StringConCat(sParam2, "_l", 32);
				break;
			case 2:
				StringConCat(sParam2, "_r", 32);
				break;
			case 1:
				switch (iParam4)
				{
					case 1:
						StringConCat(sParam2, "_b", 32);
						break;
					case 3:
						StringConCat(sParam2, "_lb", 32);
						break;
					case 2:
						StringConCat(sParam2, "_rb", 32);
						break;
					default:
						return 0;
				}
				break;
		}
	}
	return 1;
}

void func_771(int iParam0)
{
	int iVar0;

	if (!func_221(&iVar0))
	{
		return;
	}
	func_278(&(Local_78[iVar0 /*25*/].f_1.f_1), iParam0);
}

int func_772()
{
	if (ANIMSCENE::_0x8D81E7824B7753F7(Local_879.f_19.f_45, "s_root", 1))
	{
		return 1;
	}
	return 0;
}

void func_773(int iParam0, int iParam1, bool bParam2)
{
	func_610(iParam0, iParam1, 8);
	if (bParam2 && func_609(iParam0))
	{
		func_613(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
	}
}

void func_774(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_28() == 0)
	{
		iVar0 = func_741();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_868(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_869(iParam0);
		if (bParam3)
		{
			func_870(iParam0, sParam1, iParam2);
		}
	}
}

void func_775(var uParam0, int iParam1)
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
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
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

int func_776(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_871(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_872(uParam2, iParam0, Var1);
	return 1;
}

int func_777(int iParam0)
{
	return iParam0;
}

void func_778(int iParam0)
{
	if (!func_873(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1951255[iParam0 /*23*/].f_3);
	}
	Global_1951255[iParam0 /*23*/].f_4 = 0;
	Global_1951255[iParam0 /*23*/] = 1;
	Global_1951255[iParam0 /*23*/].f_16 = 0;
	Global_1951255[iParam0 /*23*/].f_1 = 0;
	Global_1951255[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_9 = 0f;
	Global_1951255[iParam0 /*23*/].f_10 = 0;
	Global_1951255[iParam0 /*23*/].f_11 = 0;
	Global_1951255[iParam0 /*23*/].f_2 = 1;
	Global_1951255[iParam0 /*23*/].f_15 = -1f;
}

bool func_779(struct<2> Param0, var uParam2)
{
	if (!func_40(Param0))
	{
		return false;
	}
	func_874(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

int func_780()
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

void func_781(var uParam0, var uParam1)
{
}

void func_782(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_783(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_854(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_784(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_785(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

int func_786(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

bool func_787(int iParam0)
{
	return func_875(iParam0);
}

bool func_788(int iParam0)
{
	return Local_13.f_57[iParam0 /*3*/].f_2 > 0;
}

void func_789(int iParam0, int iParam1)
{
	Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_13.f_7.f_28 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_368(0, 3, iParam0, iParam1);
}

int func_790()
{
	bool bVar0;

	bVar0 = false;
	if (func_650(0))
	{
		bVar0 = SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_13), Local_13.f_7.f_20);
		if (!bVar0)
		{
			SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_13), Local_13.f_7.f_20);
		}
	}
	else
	{
		return 0;
	}
	if (func_656())
	{
		func_658();
		func_653(2);
		return 1;
	}
	if (!bVar0)
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_13), Local_13.f_7.f_20);
	}
	return 0;
}

void func_791(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	if (!func_876(iParam2, &vVar0))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(func_302(iParam0), 0);
	AUDIO::_0x36559148B78853B3(1, 0, 0);
	if (!func_877(&(Local_879.f_19.f_72), vVar0, 0, -1, 0, 0))
	{
	}
	if (iParam2 == 1)
	{
		if (func_574(iParam0, 200f, 255, 0))
		{
			func_878(1891783641, func_302(iParam0), 1);
		}
	}
}

int func_792(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || (iParam0 != 3 && iParam0 >= 2))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 == 3)
	{
		iVar1 = Local_13.f_7.f_21;
		if (!func_447(2048) || !NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
		{
			iVar1 = Local_13.f_7.f_20;
		}
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			return 0;
		}
		return PLAYER::GET_PLAYER_PED(iVar1);
	}
	return func_302(iVar0);
}

int func_793(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam5)
	{
		if (MISC::IS_BIT_SET(Local_13.f_7.f_5, iParam2) || MISC::IS_BIT_SET(Local_879.f_19.f_7, iParam2))
		{
			return 1;
		}
	}
	if (iParam2 == 2 || iParam2 == 3)
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), func_559(PLAYER::PLAYER_ID())) <= 200f)
		{
			func_878(1891783641, iParam0, 1);
		}
	}
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, 0);
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, 0);
	if (!func_440(iParam0, func_439(iParam2), iParam3, iParam1, 0, iParam4, func_879(iParam2), 1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		MISC::SET_BIT(&(Local_13.f_7.f_5), iParam2);
	}
	MISC::SET_BIT(&(Local_879.f_19.f_7), iParam2);
	return 1;
}

float func_794(float fParam0, float fParam1, float fParam2)
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

void func_795(int iParam0)
{
}

void func_796(int iParam0)
{
}

float func_797()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_798(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_799(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_800(var uParam0)
{
	return func_685(*uParam0, 2);
}

bool func_801(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_880(uParam1);
	if (uParam1->f_13 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_13 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_881(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		bVar3 = uParam1->f_1 & 2 != false;
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, 1, bVar3) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1940258.f_38) || WEAPON::_IS_WEAPON_TORCH(Global_1940258.f_38))
			{
				if (uParam1->f_13 <= 5f)
				{
					if (func_882())
					{
						if (PED::IS_PED_FACING_PED(Global_34, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_802(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_883(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_GET_PED_CROUCH_MOVEMENT(Global_34) || PED::IS_PED_IN_COVER(Global_34, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_34)) || *uParam1 & 2097152 != 0)
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
			if (PED::IS_PED_IN_COVER(Global_34, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_34))
			{
				return false;
			}
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34) || ((PED::_GET_PED_BLACKBOARD_FLOAT(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

void func_803(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258.f_32);
	Global_1940258.f_21 = func_884();
	if (Global_1940258.f_21)
	{
		Global_1940258.f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_34))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1940258.f_38;
			}
			Global_1940258.f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_885(&(Global_1940258.f_28), &(Global_1940258.f_33));
			Global_1940258.f_32 = iParam0;
			break;
		case 1:
			Global_1940258.f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1940258.f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_38))
				{
					Global_1940258.f_24 = PED::_GET_LASSO_TARGET(Global_34) != 0;
				}
				if (Global_1940258.f_40 == joaat("WEAPON_THROWN_BOLAS"))
				{
					Global_1940258.f_24 = WEAPON::_0x46D42883E873C1D7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1940258.f_40);
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_40))
			{
				Global_1940258.f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40))
				{
					Global_1940258.f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 3f;
				}
				else
				{
					Global_1940258.f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 1f;
				}
				if (Global_1940258.f_19)
				{
					Global_1940258.f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1940258.f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_804(int iParam0)
{
	return Global_1102219.f_3705[iParam0 /*3*/];
}

bool func_805(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_886(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_806(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940258.f_34;
	if (func_28() == -1)
	{
		if (Global_1940258.f_34 == 0)
		{
			iVar0 = func_887(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_34) || !Global_1956200.f_1716[4])
	{
		iVar0 = func_887(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_833(iVar0) == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_807(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_888(uParam0);
	}
}

bool func_808(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_833(iParam2);
	}
	else
	{
		iVar1 = func_832(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_833(iParam0);
	}
	else
	{
		iVar0 = func_832(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_183(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_809(int iParam0, int iParam1)
{
	return func_558(iParam0, iParam1, 1, 1);
}

float func_810(var uParam0)
{
	return uParam0->f_29;
}

void func_811(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(uParam0, 134217728);
	}
	else
	{
		func_278(uParam0, 134217728);
	}
}

void func_812()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_813(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_558(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_889(iVar0, 0)))
		{
			if (func_890(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_814(var uParam0)
{
	return uParam0->f_18;
}

bool func_815(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_183(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

int func_816(var uParam0)
{
	return uParam0->f_19;
}

int func_817(var uParam0)
{
	return uParam0->f_20;
}

bool func_818(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

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
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_889(iVar0, 0)))
		{
			if (func_891(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_819(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_820(var uParam0)
{
	return uParam0->f_25;
}

int func_821(var uParam0)
{
	int iVar0;

	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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

bool func_822(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_892(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_823(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1940258.f_38 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40))
		{
			if (WEAPON::_IS_WEAPON_MELEE(Global_1940258.f_40) || WEAPON::_IS_WEAPON_BOW(Global_1940258.f_40))
			{
				return 1;
			}
		}
	}
	if (func_893(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_824(int iParam0)
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

bool func_825(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_883(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_826(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_883(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_827(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_894(uParam0);
	if (func_883(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1940258.f_28[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1940258.f_28[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_828(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_829(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_895(iParam0, 1, 0, 0)) && !func_895(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_830(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_831(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_369(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_832(int iParam0)
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

int func_833(int iParam0)
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

int func_834(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1940258.f_34 != 0)
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
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1940258.f_34, 1, 1))
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
			if (func_828(Global_34, &iVar1))
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
		fVar2 = func_558(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_558(iParam0, Global_1940258.f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1940258.f_34, iParam0))
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

bool func_835(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_886(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!bParam2 || !func_837(uParam1, iVar0))
					{
						return true;
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
				if (!bParam2 || !func_837(uParam1, iVar1))
				{
					if (func_369(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_836(var uParam0)
{
	return func_183(*uParam0, 131072);
}

bool func_837(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_838(int iParam0)
{
	return false;
}

int func_839(var uParam0)
{
	return uParam0->f_22;
}

int func_840(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_13;
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

float func_841(vector3 vParam0, vector3 vParam3)
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

bool func_842(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_843(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

float func_844(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.x, fVar0);
	fVar1 = func_881(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.x, fVar0);
	fVar1 = func_881(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.x, fVar0);
	fVar1 = func_881(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.x, fVar0);
	fVar1 = func_881(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.x, fVar0);
	fVar1 = func_881(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_845(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.y, fVar0);
	fVar1 = func_881(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.y, fVar0);
	fVar1 = func_881(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.y, fVar0);
	fVar1 = func_881(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.y, fVar0);
	fVar1 = func_881(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.y, fVar0);
	fVar1 = func_881(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_846(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.z, fVar0);
	fVar1 = func_881(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.z, fVar0);
	fVar1 = func_881(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.z, fVar0);
	fVar1 = func_881(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.z, fVar0);
	fVar1 = func_881(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_896(vVar2.z, fVar0);
	fVar1 = func_881(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_847(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_431((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_848(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_849(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_850(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_372(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_373(iParam1);
	func_865(iVar0, iParam0);
}

bool func_851(int iParam0)
{
	return !func_354(iParam0, 4);
}

int func_852(char* sParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_854(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951255[iVar0 /*23*/].f_11 && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951255[iVar0 /*23*/])
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
				func_897(iVar1, iParam1, sParam0, 5, iParam3, uParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_853(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_599(iParam0))
	{
		return;
	}
	iVar0 = func_777(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_854(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_855(int iParam0)
{
	return Local_13.f_57[iParam0 /*3*/].f_1;
}

void func_856(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::_IS_PED_CARRYING(iVar0))
	{
		return;
	}
	if (func_591(iVar0, 0, 1, 0) != joaat("WEAPON_UNARMED"))
	{
		return;
	}
	TASK::_TASK_EMOTE_2(iVar0, iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6, false);
}

void func_857(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || iParam0 != 0)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			Local_13.f_7.f_29 = -1;
			Local_13.f_7.f_21 = Local_13.f_7.f_23;
			Local_13.f_7.f_20 = Local_13.f_7.f_21;
			Local_13.f_7.f_24 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_457(16, 1);
			func_445(2048, 1);
			func_442(8);
			break;
		case 1:
			func_653(1);
			break;
	}
}

var func_858(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_898() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_899());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_899());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_899());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_900(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_901(iVar2))
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
				if (iVar9 & 8192 != 0 && func_902(iVar2) != 1)
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
					if (!func_903(iVar10))
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

int func_859(vector3 vParam0)
{
	return func_904(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_860(int iParam0)
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

void func_861(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1296859.f_21;
	Var1 = { func_494(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_862(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 43)
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

struct<2> func_863(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_864(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_779(Param0, &vVar0);
	if (func_905(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_865(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_494(iParam1, joaat("CHARACTER_MEMORY")) };
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

bool func_866(int iParam0)
{
	return func_906(0, iParam0);
}

bool func_867(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_842(vVar0, vVar3, vParam1);
}

int func_868(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<17> Var22;

	iVar0 = -1;
	Var1 = { func_907(joaat("CURRENCY_CASH"), 1, 0) };
	Var6 = { func_908(joaat("CURRENCY_CASH"), Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_909(joaat("USE"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_910(iVar0, Var22);
	}
	return iVar0;
}

void func_869(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_741() < iParam0)
	{
		iParam0 = func_741();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_911(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_870(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_912(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_871(var uParam0)
{
	func_775(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_913() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_775(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_775(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_872(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_914(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2538 < 20)
	{
		Global_1293346.f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2538.f_1[iVar0 /*22*/] = { Global_1293346.f_2538.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1293346.f_2538.f_1[(Global_1293346.f_2538 - 1) /*22*/] = { Var1 };
}

bool func_873(int iParam0)
{
	return func_854(iParam0, 2);
}

void func_874(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_875(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

bool func_876(int iParam0, char* sParam1)
{
	bool bVar0;

	bVar0 = false;
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "NBTH_IDLE", 24);
			break;
		case 2:
			StringCopy(sParam1, "NBTH_CALL0", 24);
			break;
		case 3:
			if (func_915())
			{
				bVar0 = true;
				StringCopy(sParam1, "NBTH_CAL1", 24);
				if (func_305() != 1)
				{
					StringConCat(sParam1, "M_A", 24);
				}
				else
				{
					StringConCat(sParam1, "F_A", 24);
				}
			}
			else if (func_916())
			{
				StringCopy(sParam1, "NBTH_CAL1M", 24);
			}
			else
			{
				StringCopy(sParam1, "NBTH_CALL1", 24);
			}
			break;
		case 4:
			StringCopy(sParam1, "NBTH_CALL2", 24);
			break;
		case 5:
			StringCopy(sParam1, "NBTH_CALL3", 24);
			break;
		case 6:
			StringCopy(sParam1, "NBTH_CWAIT", 24);
			break;
		case 7:
			StringCopy(sParam1, "NBTH_CEXIT", 24);
			if (func_916())
			{
				StringConCat(sParam1, "B", 24);
			}
			break;
		case 8:
			StringCopy(sParam1, func_917("NBTH_OFFER", "NBTH_OFFERAG", "NBTH_OFFERB"), 24);
			break;
		case 9:
			StringCopy(sParam1, "NBTH_OWAIT0", 24);
			break;
		case 10:
			StringCopy(sParam1, "NBTH_OWAIT1", 24);
			break;
		case 11:
			StringCopy(sParam1, "NBTH_HBU", 24);
			break;
		case 12:
			StringCopy(sParam1, "NBTH_NEG0", 24);
			break;
		case 13:
			StringCopy(sParam1, "NBTH_POS0", 24);
			break;
		case 14:
			StringCopy(sParam1, "NBTH_POS1", 24);
			break;
		case 15:
			StringCopy(sParam1, "NBTH_NEG1", 24);
			break;
		case 16:
			StringCopy(sParam1, "NBTH_AGDROP", 24);
			break;
		case 17:
			StringCopy(sParam1, "NBTH_AGFLEE", 24);
			if (func_305() == 1)
			{
				StringConCat(sParam1, "F", 24);
				bVar0 = true;
			}
			break;
		case 18:
			StringConCat(sParam1, "NBTH_CLOSE", 24);
			if (func_305() != 1)
			{
				StringConCat(sParam1, "1", 24);
			}
			else
			{
				StringConCat(sParam1, "0", 24);
			}
			break;
		case 19:
			StringCopy(sParam1, "NBTH_AGGRO", 24);
			break;
		case 20:
			StringCopy(sParam1, "NBTH_LASSO", 24);
			break;
		case 21:
			StringCopy(sParam1, "NBTH_AGHORSE", 24);
			break;
		case 27:
			StringCopy(sParam1, "NBTH_OEXIT", 24);
			break;
		case 23:
			StringCopy(sParam1, "NBTH_AGATK", 24);
			break;
		case 24:
			StringCopy(sParam1, "NBTH_AGRUN", 24);
			break;
		case 25:
			StringCopy(sParam1, "NBTH_HOGSTEAL", 24);
			if (func_305() != 1)
			{
				bVar0 = true;
			}
			break;
		case 26:
			StringCopy(sParam1, "NBTH_UNHOG", 24);
			if (func_305() != 1)
			{
				bVar0 = true;
			}
			break;
		case 22:
			StringCopy(sParam1, "NBTH_CFUCKU", 24);
			if (func_305() != 1)
			{
				bVar0 = true;
			}
			break;
		default:
			return false;
	}
	if (!bVar0)
	{
		if (func_305() != 1)
		{
			StringConCat(sParam1, "_M", 24);
		}
		else
		{
			StringConCat(sParam1, "_F", 24);
		}
	}
	return true;
}

bool func_877(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_918(vParam1, uParam0);
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

void func_878(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

int func_879(int iParam0)
{
	switch (func_226())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 10:
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 10:
					return 2;
				default:
					break;
			}
			break;
	}
	return 0;
}

float func_880(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_620(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_919(uParam0);
	}
	return func_620(uParam0);
}

float func_881(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_882()
{
	int iVar0;
	int iVar1;

	iVar0 = func_921(func_920());
	iVar1 = func_922(func_920());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_883(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT")) || iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_884()
{
	if (func_923())
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

void func_885(var uParam0, var uParam1)
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
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
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

bool func_886(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940258.f_26))
		{
			*iParam1 = Global_1940258.f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940258.f_27))
		{
			if (PED::_IS_PED_HOGTIED(Global_1940258.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940258.f_27))
			{
				*iParam2 = Global_1940258.f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940258.f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_34);
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

int func_887(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
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
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940258.f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_34);
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

void func_888(var uParam0)
{
	int iVar0;

	if (Global_1940258.f_32 == 0)
	{
		func_278(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940258.f_28[iVar0]))
				{
					func_239(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_889(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_890(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_891(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_891(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_892(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_893(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
			{
				if (WEAPON::_IS_WEAPON_MELEE(Global_1940258.f_38) || Global_1940258.f_38 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1940258.f_38, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_894(var uParam0)
{
	return uParam0->f_28;
}

int func_895(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_896(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_897(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = uParam5;
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
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_783(iParam0, 1);
	func_784(iParam0, 1);
	func_785(iParam0, 128);
}

int func_898()
{
	return Global_1051252.f_12;
}

char* func_899()
{
	return "unnamed";
}

int func_900(int iParam0)
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

bool func_901(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_924(36, iParam0);
}

int func_902(int iParam0)
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

bool func_903(int iParam0)
{
	if (func_925(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_926(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

int func_904(int iParam0)
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

bool func_905(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_927(iParam0))
	{
		return false;
	}
	if (func_928(iParam0, uParam1, &uVar0))
	{
		func_929(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_906(int iParam0, int iParam1)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/]);
}

struct<5> func_907(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_930(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_931(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_932(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_933(bParam1) };
			if (bParam2 && func_934(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_935(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_935(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_936(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_937(bParam1) };
			switch (func_938(iParam0))
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
			if (func_939(iParam0, -1823706425))
			{
				Var0 = { func_932(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_939(iParam0, -1483207246))
			{
				Var0 = { func_932(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_932(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_939(iParam0, -1653629781))
			{
				Var0 = { func_932(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_940(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_939(iParam0, -1653629781))
			{
				Var0 = { func_932(1384535894, Var0, 1784584921, bParam1) };
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

struct<16> func_908(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_932(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_941(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_942() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_909(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_943(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_945(func_944(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_946(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_910(int iParam0, struct<17> Param1)
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

struct<2> func_911(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

var func_912(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_947(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_913()
{
	return Global_1952637.f_1;
}

bool func_914(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_915()
{
	return func_189(64);
}

bool func_916()
{
	return func_189(128);
}

char* func_917(char* sParam0, char* sParam1, char* sParam2)
{
	if (!MISC::_IS_STRING_SPACE(sParam1) && func_915())
	{
		return sParam1;
	}
	if (!MISC::_IS_STRING_SPACE(sParam2) && func_916())
	{
		return sParam2;
	}
	return sParam0;
}

void func_918(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], 0))
				{
					AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
				}
			}
		}
		iVar0++;
	}
}

var func_919(var uParam0)
{
	return uParam0->f_27;
}

int func_920()
{
	return Global_1902818;
}

int func_921(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_922(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_923()
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

bool func_924(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_948(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_949())
	{
		return func_948(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_948(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_925(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_926(int iParam0)
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
		func_950(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_951(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

bool func_927(int iParam0)
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

bool func_928(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_952(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_929(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_953(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_954(iVar0);
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
			uParam2->f_5 = func_955(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_956(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_957(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_958(iVar0);
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

struct<4> func_930(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_959(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_932(joaat("CHARACTER"), func_942(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_932(joaat("CHARACTER"), func_942(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_932(joaat("CHARACTER"), func_942(), -1591664384, bParam0);
}

int func_931(int iParam0)
{
	vector3 vVar0;

	if (!func_960(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_932(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_960(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_959(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_933(bool bParam0)
{
	int iVar0;

	iVar0 = func_959(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_932(923904168, func_930(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_932(923904168, func_930(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_932(923904168, func_930(bParam0), -740156546, 0);
}

bool func_934(int iParam0, bool bParam1)
{
	if (func_938(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_961();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_935(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_962(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_936(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_963(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_937(bool bParam0)
{
	int iVar0;

	iVar0 = func_959(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_932(271701509, func_930(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_932(271701509, func_930(bParam0), 12999093, 0);
}

int func_938(int iParam0)
{
	struct<2> Var0;

	if (!func_960(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_939(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_938(iParam0);
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
			if (func_964(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_940(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_965(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_941(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_942()
{
	struct<4> Var0;

	return Var0;
}

bool func_943(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_966(uParam1->f_8, iParam0, uVar0, 2048) || func_966(uParam1->f_8, iParam0, uVar0, 32768)) || func_966(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_966(uParam1->f_8, iParam0, uVar0, 4) || func_966(uParam1->f_8, iParam0, uVar0, 256)) || func_966(uParam1->f_8, iParam0, uVar0, 65536)) || func_966(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_966(uParam1->f_8, iParam0, uVar0, 1) || func_966(uParam1->f_8, iParam0, uVar0, 8)) || func_966(uParam1->f_8, iParam0, uVar0, 65536)) || func_966(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_966(uParam1->f_8, iParam0, uVar0, 1) || func_966(uParam1->f_8, iParam0, uVar0, 16)) || func_966(uParam1->f_8, iParam0, uVar0, 2)) || func_966(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_966(uParam1->f_8, iParam0, uVar0, 8) || func_966(uParam1->f_8, iParam0, uVar0, 4096)) || func_966(uParam1->f_8, iParam0, uVar0, 256)) || func_966(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_944(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_945(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_967(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_967(iParam1, 2, 0, 0);
	return -1;
}

int func_946(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_967(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_947(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_948(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_949()
{
	return Global_1102219.f_3672;
}

void func_950(int iParam0)
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
	func_951(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_951(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_952(int iParam0)
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

int func_953(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_968(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_954(int iParam0)
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

int func_955(int iParam0)
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

int func_956(int iParam0)
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

int func_957(int iParam0)
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

int func_958(int iParam0)
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

int func_959(bool bParam0)
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

bool func_960(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_961()
{
	return (func_969(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_970(func_932(joaat("WARDROBE"), func_930(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_962(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_960(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_941(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_932(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_959(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_959(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_963(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_959(0);
	*uParam1 = { func_932(iParam0, func_933(0), iParam3, 0) };
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

bool func_964(int iParam0, int iParam1, int iParam2)
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

bool func_965(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_959(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_966(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_238(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_967(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_971(iParam0, iParam1, iParam2, iParam3);
}

bool func_968(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_972(iParam0, uParam1, &uVar0))
	{
		func_973(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_969(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_974(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_959(bParam1), iParam0, iParam3);
}

int func_970(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_975(&uParam0, iParam4, bParam5, iParam6);
}

void func_971(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_976(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_972(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_952(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_973(var uParam0, int iParam1, var uParam2)
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

bool func_974(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_975(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_977(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_976(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_978(&(uParam0->f_4));
}

bool func_977(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_959(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_965(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_978(var uParam0)
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

