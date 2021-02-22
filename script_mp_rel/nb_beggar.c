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
	struct<45> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 255, 255, 0, 0, 255, -1, 0, 0, 0, 0, 0, 255, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 1, 5, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1 } ;
	var uLocal_58 = 0;
	var uLocal_59 = 255;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	struct<23> Local_62[32];
	struct<310> Local_799 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 1, 0, 1, 0, 1, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, -1, 0 } ;
	var uLocal_1109 = 1;
	var uLocal_1110 = 0;
	var uLocal_1111 = 1;
	var uLocal_1112 = 0;
	var uLocal_1113 = 2;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	float fLocal_1116 = 0f;
	float fLocal_1117 = 0f;
	var uLocal_1118 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1116 = 1f;
	fLocal_1117 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 49, 42);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 49, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_62, 737, 43);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Local_62[0 /*23*/])), 737, "m_clientData");
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
	else if (func_17(Local_799.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_799.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_799.f_12), Local_799.f_9))
	{
		return true;
	}
	else if (Local_799.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_799, iParam0, 5);
	iVar2 = func_31(&bVar1, Local_799.f_1, Local_799.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_799.f_12 = iVar2;
	iVar0 = Global_1198046.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_799.f_1, Local_799.f_2, Local_799.f_3, iVar0);
	Local_799.f_9 = { func_33(Var3.f_5, 8) };
	Local_799.f_14 = Var3.f_5;
	Local_799.f_15 = { Var3.f_11 };
	Local_799.f_18 = Var3.f_7;
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
	if (Local_799.f_8 <= 5)
	{
		func_53();
	}
	switch (Local_799.f_8)
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
	func_66();
}

void func_27()
{
	if (Local_799.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_67(Local_799.f_12, 4);
		}
	}
	func_68();
	if (func_69(64))
	{
		func_70(Local_13.f_6);
	}
	func_71();
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
	while (iVar0 < 1)
	{
		Local_13.f_39.f_1[iVar0] = 255;
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
	func_72(&Var0, Var26.f_5);
	iVar25 = func_73(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_74(iVar25) };
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
			func_75(uParam0, iParam2);
			break;
		case 2:
			func_76(uParam0, iParam2);
			break;
		case 3:
			func_77(uParam0, iParam2);
			break;
		case 4:
			func_78(uParam0, iParam2);
			break;
		case 12:
			func_79(uParam0, iParam2);
			break;
		case 6:
			func_80(uParam0, iParam2, -1);
			break;
		case 7:
			func_81(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_82(uParam0, iParam2);
			break;
		case 11:
			func_83(uParam0, iParam2);
			break;
		case 9:
			func_84(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_85(uParam0, iParam2);
			break;
		case 8:
			func_86(uParam0, iParam2);
			break;
		case 13:
			func_87(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_88(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_89(uParam0, iParam2);
			break;
		case 16:
			func_90(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_91(uParam0, iParam2);
			break;
		case 21:
			func_92(uParam0, iParam2);
			break;
		case 28:
			func_93(uParam0, iParam2);
			break;
		case 25:
			func_94(uParam0, iParam2);
			break;
		case 24:
			func_95(uParam0, iParam2);
			break;
		case 22:
			func_96(uParam0, iParam2);
			break;
		case 23:
			func_97(uParam0, iParam2);
			break;
		case 29:
			func_98(uParam0, iParam2);
			break;
		case 26:
			func_99(uParam0, iParam2);
			break;
		case 30:
			func_100(uParam0, iParam2);
			break;
		case 27:
			func_101(uParam0, iParam2);
			break;
		case 32:
			func_102(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_103(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_104(uParam0, iParam2);
			break;
		case 17:
			func_105(uParam0, iParam2);
			break;
		case 18:
			func_106(uParam0, iParam2);
			break;
		case 19:
			func_107(uParam0, iParam2);
			break;
		case 20:
			func_108(uParam0, iParam2);
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
			func_109(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636), func_110(iParam1));
			break;
		case 3:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_602), func_110(iParam1));
			break;
		case 4:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_2104), func_110(iParam1));
			break;
		case 5:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_12606), func_110(iParam1));
			break;
		case 6:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_12908), func_110(iParam1));
			break;
		case 7:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_15910), func_110(iParam1));
			break;
		case 8:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_16512), func_110(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_112();
	}
	return Var0;
}

void func_34()
{
	func_113();
	func_114();
	func_115();
	func_116();
	func_117();
}

void func_35()
{
	func_118();
	func_119();
	func_120(0, joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"));
	func_120(1, joaat("PERSONA_HONOR_ACTION__MURDER"));
	func_121(0, 0);
	func_121(0, 1);
}

void func_36()
{
	func_123(func_122());
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
	while (iVar0 < 1)
	{
		func_124(&(Local_13.f_44.f_4), iVar0, 3);
		iVar0++;
	}
}

bool func_40(struct<2> Param0)
{
	if (!func_125(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_110(Param0))
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

	iVar0 = Global_1198046.f_231.f_1066[Local_799.f_12 /*17*/].f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_799.f_1, Local_799.f_2, Local_799.f_3, iVar0);
	if (!func_126(&Var1, 1))
	{
		func_127(1);
		return;
	}
	Local_13.f_6 = func_128(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)));
	func_129(256);
	if (func_130(Local_13.f_6))
	{
		func_131(5);
		func_127(6);
	}
	else
	{
		func_127(1);
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
	func_32(&Var0, Local_799.f_1, Local_799.f_2, -1, 255);
	if (func_126(&Var0, 1))
	{
		func_127(2);
		return;
	}
	if (func_132(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_799.f_15, Var0.f_10, 2442122);
		func_127(2);
	}
	else if (bVar31)
	{
		func_131(3);
		func_127(6);
	}
	if (!func_133(Local_13.f_3.f_2))
	{
		func_134(&(Local_13.f_3.f_2));
	}
	else if (func_135(Local_13.f_3.f_2) > 45000)
	{
		func_131(4);
		func_127(6);
	}
}

void func_47()
{
	if (func_136(1, 255))
	{
		if (!func_137(1))
		{
			if (func_138())
			{
				func_129(1);
			}
		}
		else
		{
			func_139();
			func_127(3);
		}
	}
}

void func_48()
{
	bool bVar0;

	if (func_136(2, 255))
	{
		if (!func_137(2))
		{
			bVar0 = true;
			if (!func_140())
			{
				bVar0 = false;
			}
			if (!func_141())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_129(2);
			}
		}
		else
		{
			func_142();
			func_127(4);
		}
	}
}

void func_49()
{
	func_143();
	func_144();
	func_145();
	if (func_146() || Local_13.f_2 != 0)
	{
		func_147();
		func_127(5);
	}
}

void func_50()
{
	if (func_136(4, 255))
	{
		if (func_148())
		{
			func_129(4);
			func_127(6);
		}
	}
}

void func_51()
{
	if (!func_137(256))
	{
		return;
	}
	if (func_137(512))
	{
		if (func_69(64) && func_128(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_70(Local_13.f_6);
			func_149(64);
		}
	}
	else if (!func_69(64))
	{
		if (func_128(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_150(Local_13.f_6, 1, 1);
			func_151(64);
		}
	}
	else if (func_128(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_70(Local_13.f_6);
		func_149(64);
	}
}

void func_52()
{
	if (!Global_13)
	{
		if (func_136(8192, 255))
		{
			func_152(8192);
		}
	}
	else if (!func_136(8192, 255))
	{
		func_153(8192);
	}
}

void func_53()
{
	func_154();
	func_155();
}

void func_54()
{
	if (Local_13 == 6)
	{
		func_156(6);
	}
	else if (Local_13 > 0)
	{
		func_51();
		func_156(1);
	}
}

void func_55()
{
	if (Local_13 == 6)
	{
		func_156(6);
	}
	else if (Local_13 > 1)
	{
		func_156(2);
	}
}

void func_56()
{
	bool bVar0;
	int iVar1;

	if (!func_136(1, 255))
	{
		bVar0 = true;
		if (!func_157())
		{
			bVar0 = false;
		}
		if (!func_158())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_153(1);
		}
		else
		{
			iVar1 = Global_1901947.f_236.f_68;
			if (!func_133(Local_799.f_11))
			{
				func_134(&(Local_799.f_11));
			}
			if (func_135(Local_799.f_11) >= iVar1)
			{
				func_156(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_159(&(Local_799.f_11));
		func_160();
		func_156(3);
	}
}

void func_57()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_136(2, 255))
	{
		iVar0 = func_161();
		iVar1 = func_162();
		if (iVar0 && iVar1)
		{
			func_153(2);
		}
		else
		{
			iVar2 = Global_1901947.f_236.f_68;
			if (!func_133(Local_799.f_11))
			{
				func_134(&(Local_799.f_11));
			}
			if (func_163(Local_799.f_11) >= iVar2)
			{
				func_156(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_159(&(Local_799.f_11));
		func_164();
		func_165();
		func_166();
		func_167();
		func_156(4);
	}
}

void func_58()
{
	if (Local_13 >= 5)
	{
		func_168();
		func_156(5);
		return;
	}
	func_169();
	func_170();
	func_171();
	func_172();
	func_173();
	func_174();
}

void func_59()
{
	if (!func_136(4, 255))
	{
		if (func_175())
		{
			func_176();
			func_67(Local_799.f_12, 4);
			func_153(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_156(6);
	}
}

void func_60()
{
}

bool func_61()
{
	return (func_137(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
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
		while (iVar1 < 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_30[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_30[iVar1]);
				func_177(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					if (!func_178(iVar1, 16))
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
			while (iVar2 < 5)
			{
				if (func_179(iVar1, iVar2))
				{
				}
				else if (func_180(iVar1, iVar2))
				{
					iVar0 = Local_799.f_60[iVar1 /*76*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_181(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar1 /*6*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_32[iVar1 /*6*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_181(iVar1, iVar2))
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
	func_182(&(Local_799.f_234.f_13));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_799.f_234.f_11))
	{
		VOLUME::_DELETE_VOLUME(Local_799.f_234.f_11);
	}
}

void func_66()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_184(func_183(iVar0), 1);
		iVar0++;
	}
}

void func_67(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_185(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_68()
{
	int iVar0;
	bool bVar1;

	if (!func_69(1))
	{
		return;
	}
	if (func_69(4))
	{
		return;
	}
	if (!func_69(2))
	{
		iVar0 = -1;
	}
	else if (!func_69(8))
	{
		iVar0 = 2;
	}
	else if (func_69(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_69(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_186(Local_799.f_9, iVar0, 0, 255, 0);
	func_151(4);
	if (bVar1)
	{
		func_187(Local_799.f_1, Local_799.f_2);
		if (!func_69(256))
		{
			if (iVar0 == 1)
			{
				func_188(Local_799.f_18, 1);
			}
			else
			{
				func_188(Local_799.f_18, 0);
			}
			func_151(256);
		}
	}
	else
	{
		func_188(Local_799.f_18, 2);
	}
}

bool func_69(int iParam0)
{
	return func_189(Local_799.f_7, iParam0);
}

void func_70(int iParam0)
{
	int iVar0;

	if (!func_190(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_70 = iParam0;
	Global_1134390[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_71()
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(Local_799.f_19.f_5))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_799.f_19.f_5, false);
	}
	if (func_191(1))
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_799.f_19.f_4);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_799.f_19.f_6))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_799.f_19.f_6);
		VOLUME::_DELETE_VOLUME(Local_799.f_19.f_6);
	}
	if (func_61())
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_799.f_19.f_3))
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_799.f_19.f_3))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_799.f_19.f_3);
			}
		}
	}
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iVar0 > -1 && iVar0 < 32)
	{
		if (func_191(4))
		{
			if ((func_192(8, iVar0) || func_192(16384, iVar0)) || func_193(0, PLAYER::PLAYER_ID()))
			{
				func_194(16, Local_799.f_4);
			}
			else
			{
				func_195(16, Local_799.f_4);
			}
		}
	}
	func_196();
	if (func_191(8))
	{
		func_197();
		func_198(8);
	}
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_199(uParam0))
	{
		return -1;
	}
	iVar0 = func_200(uParam0, uParam0->f_9);
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
			iVar0 = func_200(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_74(int iParam0)
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

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_201(uParam0, iParam1);
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

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_202(uParam0);
	uParam0->f_15[0] = joaat("22_TO_4");
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_80(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_205(uParam0, 0);
			func_205(uParam0, 1);
			func_205(uParam0, 4);
			func_205(uParam0, 5);
			break;
		case 1:
			func_205(uParam0, 2);
			func_205(uParam0, 3);
			func_205(uParam0, 6);
			func_205(uParam0, 7);
			func_206(uParam0, 2);
			break;
		default:
			func_202(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_204(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_204(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_204(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_204(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_204(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_204(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_204(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_204(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 8);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 7);
			func_204(uParam0, 8);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 6);
			func_204(uParam0, 7);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 5);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_202(uParam0);
	func_206(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_208(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_202(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_202(uParam0);
	func_206(uParam0, 1);
	func_206(uParam0, 4);
	func_206(uParam0, 8);
	func_206(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			uParam0->f_11 = { func_209(func_128(iParam2)) };
			break;
	}
}

void func_88(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_210(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_90(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_211(uParam0, iParam2);
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

void func_91(var uParam0, int iParam1)
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
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_212(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_212(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
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
			func_213(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
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
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_204(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_204(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_202(uParam0);
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
			func_204(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_204(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_204(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_204(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_204(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_204(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_204(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_204(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_204(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_204(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_202(uParam0);
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
			func_204(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_204(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_204(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_204(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_204(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_204(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_204(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_204(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_204(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_204(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_204(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
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
			func_214(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
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
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_202(uParam0);
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
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_99(var uParam0, int iParam1)
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
			func_216(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_202(uParam0);
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
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_204(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_204(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_101(var uParam0, int iParam1)
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
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_102(var uParam0, int iParam1, int iParam2)
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
	func_218(uParam0, iParam1, iParam2);
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

void func_103(var uParam0, int iParam1, int iParam2)
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
	func_219(uParam0, iParam1, iParam2);
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

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_202(uParam0);
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
			func_204(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_204(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_204(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_204(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_204(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_204(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_204(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_204(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_204(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_204(uParam0, 1);
			break;
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_108(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_220(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_220(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_109(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_221(iParam1);
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
	*uParam0 = func_222(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_206(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_224(func_223(iVar0), iParam2);
		uParam0->f_15[0] = func_225(func_223(iVar0), iParam2);
		uParam0->f_5 = func_226(iVar0, iParam2);
		uParam0->f_11 = { func_227(iVar0, iParam2) };
	}
}

int func_110(int iParam0)
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

int func_111(int iParam0, var uParam1, int iParam2)
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

struct<2> func_112()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_113()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			Local_62[iVar1 /*23*/].f_6.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			if (func_180(iVar1, iVar2))
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

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_228(&iVar2);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_230(func_183(iVar0), func_229(func_183(iVar0)));
		Local_799.f_266[iVar0 /*39*/] = func_229(func_183(iVar0));
		if (bVar3)
		{
			func_124(&(Local_62[iVar2 /*23*/].f_20.f_1), iVar0, 3);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				func_124(&(Local_62[iVar1 /*23*/].f_20.f_1), iVar0, 3);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_231(&(Local_799.f_137), &(Local_799.f_137.f_32));
	bVar2 = true;
	if (!func_228(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_39.f_3[iVar0] = 0;
			Local_13.f_39.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_62[iVar1 /*23*/].f_10.f_7[iVar0] = 0;
		}
		iVar0++;
	}
	func_232(&(Local_799.f_137.f_72), 8, -1);
	if (bVar2)
	{
		func_232(&(Local_62[iVar1 /*23*/].f_10), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_232(&(Local_62[iVar3 /*23*/].f_10), 8, -1);
			iVar3++;
		}
	}
}

void func_117()
{
}

void func_118()
{
	switch (func_122())
	{
		case 0:
			func_233(0, joaat("RE_DARKALLEYBUM_MALES_01"));
			func_234(0, -1905408471);
			func_235(0, "0838_S_M_M_MarketVendor_01_WHITE_01");
			break;
		case 1:
			func_233(0, joaat("RE_DARKALLEYBUM_MALES_01"));
			func_234(0, 884347675);
			func_235(0, "0779_A_M_M_SDLaborers_02_BLACK_01");
			break;
		case 2:
			func_233(0, joaat("RE_DARKALLEYBUM_MALES_01"));
			func_234(0, -1273957148);
			func_235(0, "0914_A_M_M_Civ_Poor_White_AGGRESSIVE_14");
			break;
		case 3:
			func_233(0, joaat("RE_DARKALLEYBUM_MALES_01"));
			func_234(0, -549369016);
			func_235(0, "0045_A_M_M_BynRoughTravellers_01_BLACK_01");
			break;
	}
}

void func_119()
{
	func_236(0, -252998940);
	if (func_237() == 1)
	{
		func_238(2, joaat("S_INV_WHISKEY01X"));
		func_239(2, 0f, 0f, 1f, 0f, 0, 0);
		func_240(2, 1);
	}
	func_238(3, joaat("P_COIN01X"));
	func_238(4, joaat("P_COIN01X"));
}

void func_120(int iParam0, int iParam1)
{
	Local_799.f_309.f_5[iParam0] = iParam1;
}

void func_121(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_799.f_309.f_1[iParam0]), iParam1);
}

int func_122()
{
	return Local_799.f_4;
}

void func_123(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_13.f_7.f_22 = 0;
	iVar0 = 0;
	while (iVar0 < Local_13.f_7.f_17)
	{
		Local_13.f_7.f_17[iVar0] = iVar0;
		iVar0++;
	}
	iVar2 = func_241(iParam0);
	if (iVar2 < 2)
	{
	}
	else if (iVar2 == 2)
	{
		uVar1 = Local_13.f_7.f_17[0];
		Local_13.f_7.f_17[0] = Local_13.f_7.f_17[1];
		Local_13.f_7.f_17[1] = uVar1;
	}
	else
	{
		func_242(&(Local_13.f_7.f_17), iVar2, 0);
	}
}

void func_124(int* iParam0, int iParam1, int iParam2)
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

bool func_125(int iParam0)
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

bool func_126(var uParam0, int iParam1)
{
	return func_243(uParam0->f_25, iParam1);
}

void func_127(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_128(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_129(int iParam0)
{
	if (!func_137(iParam0))
	{
		func_244(&(Local_13.f_1), iParam0);
	}
}

bool func_130(int iParam0)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	return (func_245(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_131(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_132(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_246(Local_799.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_799.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_247(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_153(128);
	}
	else if (!func_136(128, 255))
	{
		Local_13.f_3.f_1 = func_248(Param0);
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

bool func_133(int iParam0)
{
	return iParam0 != 0;
}

void func_134(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_135(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

bool func_136(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	return func_189(Local_62[iParam1 /*23*/], iParam0);
}

bool func_137(int iParam0)
{
	return func_189(Local_13.f_1, iParam0);
}

bool func_138()
{
	return true;
}

void func_139()
{
}

bool func_140()
{
	return true;
}

bool func_141()
{
	bool bVar0;

	if (!func_249(&bVar0))
	{
		if (bVar0)
		{
			func_250();
		}
		return false;
	}
	if (!func_251(&bVar0))
	{
		if (bVar0)
		{
			func_250();
		}
		return false;
	}
	return true;
}

void func_142()
{
}

void func_143()
{
	if (!func_137(32) && func_252(32))
	{
		func_129(32);
	}
	if (!func_137(64) && func_252(64))
	{
		func_129(64);
	}
	if (!func_137(16) && func_253(16))
	{
		func_129(16);
	}
	if ((!func_137(2048) && func_252(2048)) && !func_252(4096))
	{
		func_129(2048);
	}
}

void func_144()
{
	bool bVar0;

	if (!bVar0 && func_137(16))
	{
		func_131(1);
		return;
	}
	if (func_137(2048) && !func_252(4096))
	{
		func_131(6);
		return;
	}
}

void func_145()
{
	func_254();
}

bool func_146()
{
	if (func_255())
	{
		return true;
	}
	func_256();
	func_257();
	switch (Local_13.f_7)
	{
		case 0:
			func_258();
			break;
		case 1:
			func_259();
			break;
		case 2:
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
			return func_267();
	}
	return false;
}

void func_147()
{
}

bool func_148()
{
	return true;
}

void func_149(int iParam0)
{
	if (func_69(iParam0))
	{
		func_268(&(Local_799.f_7), iParam0);
	}
}

int func_150(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_190(iParam0))
	{
		return 0;
	}
	iVar0 = func_269(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1134390[iVar1 /*83*/].f_70 = iParam0;
	Global_1134390[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_270(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_271(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_151(int iParam0)
{
	if (!func_69(iParam0))
	{
		func_244(&(Local_799.f_7), iParam0);
	}
}

void func_152(int iParam0)
{
	if (func_189(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*23*/], iParam0))
	{
		func_268(&(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*23*/]), iParam0);
	}
}

void func_153(int iParam0)
{
	if (!func_136(iParam0, 255))
	{
		func_244(&(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*23*/]), iParam0);
	}
}

void func_154()
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
				func_272(iVar0);
				break;
			case -1315570756:
				func_273(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_274(iVar0);
		iVar0++;
	}
}

void func_155()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_799.f_309 >= 1)
		{
			Local_799.f_309 = 0;
		}
		func_276(func_275(Local_799.f_309));
		Local_799.f_309++;
		iVar0++;
	}
}

void func_156(int iParam0)
{
	if (Local_799.f_8 != iParam0)
	{
		Local_799.f_8 = iParam0;
	}
}

bool func_157()
{
	bool bVar0;
	char* sVar1;

	bVar0 = false;
	sVar1 = "NBBEG";
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar1))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar1);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
		{
			bVar0 = true;
		}
	}
	if (!func_277())
	{
		bVar0 = true;
	}
	if (!func_279(func_278(), &(Local_799.f_19.f_3), &(Local_13.f_7.f_2), 0, "PBL_IDLES_B"))
	{
		bVar0 = true;
	}
	return !bVar0;
}

bool func_158()
{
	bool bVar0;

	bVar0 = false;
	if (!func_280())
	{
		bVar0 = true;
	}
	if (!func_281())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_159(var uParam0)
{
	*uParam0 = 0;
}

void func_160()
{
}

int func_161()
{
	return 1;
}

int func_162()
{
	bool bVar0;

	if (!func_282())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_163(int iParam0)
{
	return (iParam0 - Global_1296859.f_21) * 1000;
}

void func_164()
{
	if (!func_69(1))
	{
		func_283(Local_799.f_9);
		func_151(1);
	}
}

void func_165()
{
	func_284();
	func_285();
}

void func_166()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_191(1))
	{
		return;
	}
	func_286();
	iVar0 = func_287(0);
	func_288(10f, 20f, 1, 1f, 1);
	func_289(1065353216 /* Float: 1f */, 5f);
	func_290(iVar0);
	func_290(func_291(0));
	if (!PED::_0x91A5F9CBEBB9D936(Local_799.f_19.f_5))
	{
		Local_799.f_19.f_5 = func_293(func_292(), 2f, 2f, 2f);
	}
	Local_799.f_19.f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iVar0, 0f, 7f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	Local_799.f_19.f_6 = VOLUME::_CREATE_VOLUME_SPHERE(func_292(), 0f, 0f, 0f, 1f, 1f, 1f);
	if (!PATHFIND::_0x19C7567D2F2287D6(Local_799.f_19.f_6, 7))
	{
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (func_237() == 1)
		{
			PED::_0x406CCF555B04FAD3(iVar0, 1, 1065353216 /* Float: 1f */);
		}
		LAW::_0xFFEBE5AA96BC2E4E(iVar0, joaat("CRIME_UNARMED_ASSAULT"), 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_291(2)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_291(2), true);
	}
	func_294();
	func_295(0, 49152);
	if (func_296(0) && func_296(1))
	{
		iVar1 = func_291(0);
		iVar2 = func_291(1);
		if (func_297(0))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar1, iVar2, false);
		}
		if (func_297(1))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar2, iVar1, false);
		}
	}
	func_298(1);
}

void func_167()
{
	func_299();
}

void func_168()
{
}

void func_169()
{
	float fVar0;

	if (func_246(Local_799.f_15))
	{
		return;
	}
	if (func_300())
	{
		return;
	}
	if (func_301(Local_799.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_799.f_15);
		if (fVar0 < 200f)
		{
			func_153(4096);
		}
		else if (fVar0 < 400f)
		{
			func_152(4096);
			func_153(2048);
		}
		else
		{
			func_152(4096);
			func_152(2048);
		}
	}
}

void func_170()
{
	func_302();
	func_303();
	func_304();
	func_305();
	func_306();
	func_307();
}

void func_171()
{
	if (func_308())
	{
		func_153(8);
	}
	else
	{
		func_152(8);
	}
}

void func_172()
{
	func_309();
	func_310();
	func_311();
	func_312();
	func_313();
	func_314();
	func_315();
	func_316();
	func_317();
	func_318();
	func_319();
	func_320();
	func_321();
	func_322();
	func_323();
	switch (Local_799.f_19)
	{
		case 0:
			func_324();
			break;
		case 1:
			func_325();
			break;
		case 2:
			func_326();
			break;
		case 3:
			func_327();
			break;
		case 4:
			func_328();
			break;
		case 5:
			func_329();
			break;
		case 6:
			func_330();
			break;
		case 7:
			func_331();
			break;
		case 8:
			func_332();
			break;
		case 9:
			func_333();
			break;
	}
}

void func_173()
{
	if (!func_136(8, 255))
	{
		func_153(16);
	}
	else
	{
		func_152(16);
	}
}

void func_174()
{
	int iVar0;

	Local_799.f_6 = -1;
	Local_799.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_799.f_5 = (Local_799.f_5 || Local_62[iVar0 /*23*/]);
			Local_799.f_6 = (Local_799.f_6 && Local_62[iVar0 /*23*/]);
		}
		iVar0++;
	}
}

bool func_175()
{
	return true;
}

void func_176()
{
	func_334();
}

void func_177(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_799.f_33.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_799.f_33.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_178(int iParam0, int iParam1)
{
	return func_189(Local_799.f_33.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_179(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_180(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_181(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_799.f_60[iParam0 /*76*/].f_4, iParam1);
}

void func_182(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

int func_183(int iParam0)
{
	return iParam0;
}

void func_184(int iParam0, bool bParam1)
{
	int iVar0;

	func_335(iParam0, 8);
	if (!func_336(iParam0, 1))
	{
		return;
	}
	iVar0 = func_337(iParam0);
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
	func_338(iParam0, bParam1);
	func_335(iParam0, 1);
}

bool func_185(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

void func_186(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_340(func_339(Param0));
	iVar1 = func_341(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_342(Param0, &Var2);
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

void func_187(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_343(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_344(iVar0);
}

void func_188(int iParam0, int iParam1)
{
	func_134(&(Global_1272030.f_3271[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1272030.f_3275[iParam0] = func_345(iParam0);
			break;
		case 1:
			Global_1272030.f_3275[iParam0] = func_346(iParam0);
			break;
		case 2:
			Global_1272030.f_3275[iParam0] = func_347(iParam0);
			break;
	}
}

bool func_189(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_190(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_191(int iParam0)
{
	return func_189(Local_799.f_19.f_2, iParam0);
}

bool func_192(int iParam0, int iParam1)
{
	if (iParam1 >= 32)
	{
		return false;
	}
	if (iParam1 < 0)
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	if (!func_348(iParam1, 1))
	{
		return false;
	}
	return func_189(Local_62[iParam1 /*23*/].f_1, iParam0);
}

bool func_193(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Local_799.f_137.f_66[iParam0]), iParam1);
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_349(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_350(iParam1);
	func_351(iVar0, iParam0);
}

void func_195(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_349(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_350(iParam1);
	func_352(iVar0, iParam0);
}

void func_196()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_799.f_19.f_7))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_799.f_19.f_7);
		func_353(Local_799.f_19.f_7);
	}
}

void func_197()
{
	int iVar0;
	int iVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (!func_354(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (iVar0 == Global_1291734.f_11.f_561[iVar1])
		{
			Global_1291734.f_11.f_561[iVar1] = 0;
			Global_1291734.f_11.f_560 = (Global_1291734.f_11.f_560 - 1);
			return;
		}
		iVar1++;
	}
}

void func_198(int iParam0)
{
	func_268(&(Local_799.f_19.f_2), iParam0);
}

bool func_199(var uParam0)
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

int func_200(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_355(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_356(iParam1)) - 1);
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

void func_201(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_357(uParam0);
			break;
		case 1:
			func_357(uParam0);
			break;
		case 2:
			func_357(uParam0);
			break;
		case 3:
			func_358(uParam0);
			break;
		case 4:
			func_357(uParam0);
			break;
		case 5:
			func_357(uParam0);
			break;
		case 6:
			func_358(uParam0);
			break;
		case 7:
			func_358(uParam0);
			break;
		case 8:
			func_358(uParam0);
			break;
		case 9:
			func_357(uParam0);
			break;
		default:
			func_203(uParam0);
			func_202(uParam0);
			break;
	}
}

void func_202(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_205(uParam0, iVar0);
		iVar0++;
	}
}

void func_203(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_204(uParam0, iVar0);
		iVar0++;
	}
}

void func_204(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_205(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_206(var uParam0, int iParam1)
{
	func_270(&(uParam0->f_25), iParam1);
}

void func_207(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_205(uParam0, 0);
			break;
		case 1:
		case 2:
			func_205(uParam0, 1);
			func_205(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_205(uParam0, 0);
			func_205(uParam0, 2);
			break;
		case 8:
			func_205(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_205(uParam0, 1);
			break;
		default:
			func_202(uParam0);
			break;
	}
}

void func_208(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_359(uParam0);
			break;
		case 1:
			func_360(uParam0);
			break;
		case 2:
			func_361(uParam0);
			break;
		case 3:
			func_362(uParam0);
			break;
		default:
			func_203(uParam0);
			func_202(uParam0);
			break;
	}
}

Vector3 func_209(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

void func_210(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_363(uParam0);
			break;
		case 1:
		case 2:
			func_364(uParam0);
			break;
		case 3:
		case 4:
			func_365(uParam0);
			break;
		default:
			func_202(uParam0);
			break;
	}
	func_203(uParam0);
}

void func_211(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_205(uParam0, 0);
			func_205(uParam0, 2);
			break;
		case 1:
			func_205(uParam0, 1);
			func_205(uParam0, 3);
			break;
		default:
			func_203(uParam0);
			func_202(uParam0);
			break;
	}
}

void func_212(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_204(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_204(uParam0, 0);
			break;
		default:
			func_204(uParam0, 0);
			break;
	}
	func_202(uParam0);
}

void func_213(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_204(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_204(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_204(uParam0, 2);
			break;
		default:
			func_203(uParam0);
			break;
	}
	func_202(uParam0);
}

void func_214(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_204(uParam0, 0);
			func_205(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 1);
			func_205(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_204(uParam0, 2);
			func_205(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_204(uParam0, 3);
			func_205(uParam0, 0);
			break;
	}
}

void func_215(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_204(uParam0, 0);
			func_205(uParam0, 0);
			break;
		case 2:
			func_204(uParam0, 1);
			func_205(uParam0, 0);
			break;
		case 3:
		case 4:
			func_204(uParam0, 2);
			func_205(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 3);
			func_205(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_204(uParam0, 4);
			func_205(uParam0, 1);
			break;
	}
}

void func_216(var uParam0, int iParam1)
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
			func_204(uParam0, 3);
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
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			break;
		default:
			func_203(uParam0);
			break;
	}
	func_202(uParam0);
}

void func_217(var uParam0, int iParam1)
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
			func_204(uParam0, 3);
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
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			break;
		default:
			func_203(uParam0);
			break;
	}
	func_202(uParam0);
}

void func_218(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_205(uParam0, 0);
			func_204(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_205(uParam0, 1);
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			break;
		default:
			func_205(uParam0, 0);
			func_204(uParam0, 0);
			break;
	}
}

void func_219(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_205(uParam0, 0);
			func_204(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_205(uParam0, 1);
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			break;
		default:
			func_205(uParam0, 0);
			func_204(uParam0, 0);
			break;
	}
}

void func_220(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			func_203(uParam0);
			break;
		default:
			func_202(uParam0);
			func_203(uParam0);
			break;
	}
}

int func_221(int iParam0)
{
	return Global_1272030.f_3348[iParam0];
}

int func_222(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_3;
}

int func_223(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/];
}

var func_224(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_366(&Var1, iParam0) && func_367(&Var1, iParam1))
	{
		func_368(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_225(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_366(&Var1, iParam0) && func_367(&Var1, iParam1))
	{
		func_368(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_226(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_369(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

Vector3 func_227(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_369(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

bool func_228(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_348(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_229(int iParam0)
{
	return Local_13.f_44[iParam0 /*3*/];
}

void func_230(int iParam0, int iParam1)
{
	switch (func_370(iParam1))
	{
		case 0:
			func_371(iParam0, 0);
			break;
		case 1:
			func_371(iParam0, 1);
			func_372(iParam0, "NB_BEG_NAME");
			func_373(iParam0, 7f);
			func_374(iParam0, 0, "NB_BEG_PROMPT_GIVE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
			func_374(iParam0, 1, "NB_BEG_PROMPT_STEAL", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			func_375(iParam0, 0, "NB_BEG_PROMPT_GIVE", 25, 1, 1);
			func_376(iParam0, 0, 1, 1);
			func_376(iParam0, 1, 1, 1);
			break;
		case 2:
			func_376(iParam0, 0, 0, 1);
			func_376(iParam0, 1, 0, 1);
			break;
	}
}

void func_231(var uParam0, var uParam1)
{
	func_377(uParam0);
	func_378(uParam1);
	func_379(uParam1);
	func_380(uParam1);
	func_381(uParam1, 1);
	func_382(uParam1, 1);
	func_383(uParam0, 1);
	func_384(uParam0, 1.5f);
}

int func_232(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_385(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_386(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_386(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_386(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

void func_233(int iParam0, int iParam1)
{
	Local_799.f_33.f_7[iParam0 /*11*/].f_3 = iParam1;
}

void func_234(int iParam0, int iParam1)
{
	Local_799.f_33.f_7[iParam0 /*11*/].f_4 = iParam1;
}

void func_235(int iParam0, char* sParam1)
{
	Local_799.f_33.f_7[iParam0 /*11*/].f_10 = sParam1;
}

void func_236(int iParam0, int iParam1)
{
	func_387(0, iParam0, iParam1);
}

int func_237()
{
	return Local_799.f_3;
}

void func_238(int iParam0, int iParam1)
{
	func_388(0, iParam0, iParam1);
}

void func_239(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		func_389(iParam0);
	}
	func_390(0, iParam0, vParam1, fParam4, iParam5);
}

void func_240(int iParam0, bool bParam1)
{
	func_391(0, iParam0, bParam1);
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 0:
			return 3;
		case 3:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 2;
}

void func_242(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = (*uParam0)[iVar2];
		(*uParam0)[iVar2] = (*uParam0)[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

bool func_243(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_244(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_245(int iParam0)
{
	int iVar0;

	if (!func_190(iParam0))
	{
		return false;
	}
	iVar0 = func_392(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_246(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_247(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_248(struct<31> Param0)
{
	var uVar0;

	func_247(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

bool func_249(var uParam0)
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
	while (iVar2 < 1)
	{
		if (func_178(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_393(iVar2, uParam0, &bVar1))
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
			if (func_394(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_30[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_30[iVar2]))
					{
						NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_30[iVar2]);
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

void func_250()
{
	func_131(2);
}

bool func_251(bool bParam0)
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
	vVar10 = { Local_799.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar2 = func_395(iVar0, iVar1);
			if (func_180(iVar0, iVar1))
			{
			}
			else if (func_179(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_799.f_60[iVar0 /*76*/].f_2, iVar1))
			{
				if (func_396(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar0 /*6*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_32[iVar0 /*6*/][iVar1]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_32[iVar0 /*6*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar0 /*6*/][iVar1]))
				{
					if (!func_397(iVar0, iVar1))
					{
						vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_398(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_398(iVar0, iVar1) };
					}
					if (func_399(iVar0, iVar1))
					{
						if (!func_400(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_401(iVar0, iVar1))
							{
								iVar13 = PED::_0x9641A9A20310F6B8(Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 1, 0, 0);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_32[iVar0 /*6*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar0 /*6*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_402(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5, Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_4, func_398(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_32[iVar0 /*6*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar0 /*6*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_13.f_32[iVar0 /*6*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1086; //curOff = 573
							}
							else if (!func_403(&(Local_13.f_32[iVar0 /*6*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar0 /*6*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_13.f_32[iVar0 /*6*/][iVar1]);
								if (func_396(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar0 /*6*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_32[iVar0 /*6*/][iVar1]))
										{
											NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_32[iVar0 /*6*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_799.f_60[iVar0 /*76*/].f_2), iVar1);
								if (func_404(iVar0, iVar1))
								{
									TASK::_0x78B4567E18B54480(iVar13);
									GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
								}
								if (func_405(iVar0, iVar1))
								{
									ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
								}
								if (func_406(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_0xA91E6CF94404E8C9(iVar13);
								}
								if (func_399(iVar0, iVar1))
								{
									ENTITY::_0x9587913B9E772D29(iVar13, 0);
								}
								vVar4 = { func_407(iVar0, iVar1) };
								if (!func_246(vVar4))
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
										if (!func_408(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_409(vVar4.x)), MISC::ABSF(func_409(vVar4.y))) };
											vVar27 = { func_410(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_411(iVar0, iVar1))
								{
									func_412(iVar0, iVar1, 1);
								}
								if (func_413(iVar0, iVar1))
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

bool func_252(int iParam0)
{
	return func_189(Local_799.f_5, iParam0);
}

bool func_253(int iParam0)
{
	return func_189(Local_799.f_6, iParam0);
}

void func_254()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_414(&(Local_13.f_44[iVar0 /*3*/]), func_183(iVar0));
		iVar0++;
	}
}

bool func_255()
{
	if (!func_415(0) || func_416(0, 1))
	{
		if (Local_13.f_7.f_13 == 0)
		{
			Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 5000)
		{
			return (!func_415(0) || !func_417(0, 50f, 0));
		}
	}
	return false;
}

void func_256()
{
	if (Local_13.f_7 < 6)
	{
		if (func_418(256, 0))
		{
			if (func_419(0, 0))
			{
				func_420(6);
			}
		}
	}
}

void func_257()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			if (Local_62[iVar0 /*23*/].f_1.f_4 != 0)
			{
				if (Local_13.f_7.f_5 == 0 || NETWORK::IS_TIME_MORE_THAN(Local_62[iVar0 /*23*/].f_1.f_4, Local_13.f_7.f_5))
				{
					Local_13.f_7.f_5 = Local_62[iVar0 /*23*/].f_1.f_4;
					Local_13.f_7.f_4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_258()
{
	if (func_300())
	{
		func_420(1);
	}
	else
	{
		func_421();
	}
}

void func_259()
{
	if (func_422(1, 0))
	{
		if (func_419(0, 1))
		{
			func_420(2);
			Local_13.f_7.f_10 = 3;
		}
	}
	else
	{
		func_421();
	}
}

void func_260()
{
	if (func_423(1))
	{
		func_424(&(Local_13.f_7.f_14), Local_13.f_7.f_7, Local_799.f_19.f_3);
		func_425(256);
		func_420(3);
	}
	else
	{
		if (func_229(0) == 2)
		{
			func_426(256);
			func_420(5);
			return;
		}
		func_427();
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_3) || func_428(Local_13.f_7.f_3))
		{
			func_421();
		}
	}
}

void func_261()
{
	bool bVar0;
	char[] cVar1[8];

	bVar0 = false;
	cVar1 = func_429(Local_13.f_7.f_8);
	if (func_422(32, 0))
	{
		func_420(5);
	}
	else if (func_430(&(Local_13.f_7.f_14), cVar1, &bVar0))
	{
		if (bVar0)
		{
			func_420(5);
		}
		else
		{
			func_420(4);
		}
	}
}

void func_262()
{
	if (func_431(Local_13.f_7.f_8))
	{
		func_420(5);
		return;
	}
	switch (Local_13.f_7.f_8)
	{
		case 1:
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_799.f_19.f_3) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_799.f_19.f_3, false)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_287(0), Local_799.f_19.f_3))
			{
				func_420(6);
				func_426(128);
			}
			break;
		case 0:
		case 2:
		case 3:
			if (func_432() || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_287(0), Local_799.f_19.f_3))
			{
				switch (Local_13.f_7.f_8)
				{
					case 2:
						func_426(32);
						break;
					case 3:
						func_426(512);
						break;
				}
				func_420(5);
			}
			break;
	}
}

void func_263()
{
	bool bVar0;

	bVar0 = true;
	if (!func_433(Local_799.f_19.f_3, "player", "player_f"))
	{
		bVar0 = false;
	}
	if (!func_434())
	{
		bVar0 = false;
	}
	if (!func_419(0, 1))
	{
		bVar0 = false;
	}
	if (!func_423(256))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_799.f_19.f_3) && !ANIMSCENE::_0x1F0E401031E20146(Local_799.f_19.f_3, "PBL_IDLES_B"))
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		return;
	}
	if (!func_435())
	{
	}
	Local_13.f_7.f_7 = 255;
	Local_13.f_7.f_6 = -1;
	Local_13.f_7.f_8 = -1;
	Local_13.f_7.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_13.f_7.f_10 = 3;
	func_436(&(Local_13.f_7.f_14));
	func_425(1);
	func_425(256);
	func_420(2);
}

void func_264()
{
	if (func_419(0, 0))
	{
		if ((((func_423(128) || func_416(0, 1)) || func_437(0, 1)) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_799.f_19.f_3)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_287(0), Local_799.f_19.f_3))
		{
			func_420(7);
		}
	}
}

void func_265()
{
	if (!func_422(4, 0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_799.f_19.f_3))
	{
		return;
	}
	if (func_418(32, 0))
	{
		if (func_419(0, 0))
		{
			func_420(8);
		}
	}
	else if (func_418(64, 0))
	{
		if (func_419(0, 0))
		{
			func_420(9);
		}
	}
}

void func_266()
{
	if (func_418(64, 0))
	{
		func_420(9);
	}
}

int func_267()
{
	if (Local_13.f_7.f_12 == 0)
	{
		Local_13.f_7.f_12 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_12, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 5000)
	{
		if (!func_415(0) || !func_417(0, 50f, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_268(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_269(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	if (!func_245(iParam0))
	{
		return 0;
	}
	return Global_1131196[iParam0 /*27*/].f_18.f_1;
}

void func_270(var uParam0, int iParam1)
{
	func_438(uParam0, iParam1);
}

void func_271(var uParam0, int iParam1)
{
	func_439(uParam0, iParam1);
}

void func_272(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_440(&Var0, iParam0))
			{
				func_441(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_273(int iParam0)
{
}

void func_274(int iParam0)
{
}

int func_275(int iParam0)
{
	return iParam0;
}

void func_276(int iParam0)
{
	int iVar0;

	if (func_442(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_443(iParam0, func_275(iVar0)))
			{
				if (!func_444(iParam0, func_275(iVar0)))
				{
					if (func_445(iParam0, iVar0))
					{
						func_446(Local_799.f_309.f_5[iVar0], 0, 0);
						func_447(iParam0, func_275(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_277()
{
	STREAMING::REQUEST_ANIM_DICT(func_448());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_448()))
	{
		return false;
	}
	return true;
}

char* func_278()
{
	switch (func_237())
	{
		case 1:
			return "script@beat@town@darkAlleyBum@drunkGood";
		case 0:
			return "script@beat@town@darkAlleyBum@desperateGood";
	}
	return "invalid_anim_scene";
}

bool func_279(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
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

bool func_280()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (MISC::IS_BIT_SET(Local_799.f_33.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_449(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_799.f_33.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_799.f_33.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_799.f_33.f_3), iVar0);
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

bool func_281()
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
		while (iVar1 < 5)
		{
			if (MISC::IS_BIT_SET(Local_799.f_60[iVar0 /*76*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_395(iVar0, iVar1);
				if (func_450(iVar1))
				{
					if (Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_0x93FFD92F05EC32FD(Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6 = PED::_0x91FE941F9FCFB702(Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_799.f_60[iVar0 /*76*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_799.f_60[iVar0 /*76*/].f_1), iVar1);
					}
				}
				else if (func_451(iVar1))
				{
					WEAPON::_0x72D4CB5DB927009C(Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5, -1, 0);
					if (!WEAPON::_0xFF07CF465F48B830(Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_799.f_60[iVar0 /*76*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_799.f_60[iVar0 /*76*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @452; //curOff = 348
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_799.f_60[iVar0 /*76*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_799.f_60[iVar0 /*76*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @452; //curOff = 408
					}
					else if (!MISC::IS_BIT_SET(Local_799.f_60[iVar0 /*76*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_799.f_60[iVar0 /*76*/].f_1), iVar1);
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

bool func_282()
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
	vVar10 = { Local_799.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar2 = func_395(iVar0, iVar1);
			if (func_179(iVar0, iVar1))
			{
			}
			else if (!func_180(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_799.f_60[iVar0 /*76*/].f_2, iVar1))
					{
						if (func_396(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar0 /*6*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_32[iVar0 /*6*/][iVar1]))
								{
									NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_32[iVar0 /*6*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_799.f_60[iVar0 /*76*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_397(iVar0, iVar1))
				{
					vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_398(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_398(iVar0, iVar1) };
				}
				if (func_399(iVar0, iVar1))
				{
					if (!func_400(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_401(iVar0, iVar1))
						{
							iVar13 = PED::_0x9641A9A20310F6B8(Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 0, 0, 0);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_402(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5, Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/].f_4, func_398(iVar0, iVar1), true, 1f);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (iVar2 == 0)
						{
							Jump @830; //curOff = 446
						}
						else
						{
							iVar13 = OBJECT::CREATE_OBJECT(iVar2, vVar7, false, true, false, false, true);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						MISC::SET_BIT(&(Local_799.f_60[iVar0 /*76*/].f_2), iVar1);
						if (func_404(iVar0, iVar1))
						{
							TASK::_0x78B4567E18B54480(iVar13);
							GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
						}
						if (func_405(iVar0, iVar1))
						{
							ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
						}
						if (func_406(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar13);
						}
						if (func_399(iVar0, iVar1))
						{
							ENTITY::_0x9587913B9E772D29(iVar13, 0);
						}
						vVar4 = { func_407(iVar0, iVar1) };
						if (!func_246(vVar4))
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
								if (!func_408(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_409(vVar4.x)), MISC::ABSF(func_409(vVar4.y))) };
									vVar27 = { func_410(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_799.f_60[iVar0 /*76*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_411(iVar0, iVar1))
						{
							func_412(iVar0, iVar1, 1);
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

void func_283(struct<2> Param0)
{
	if (func_341(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_341(Param0)))
	{
		STATS::_0x99230691875FC218(func_339(Param0), func_341(Param0), Global_35);
	}
}

void func_284()
{
	int iVar0;
	int iVar1;

	if (!func_228(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_452(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_285()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			if (func_180(iVar1, iVar2))
			{
			}
			else if (func_179(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar1 /*6*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_32[iVar1 /*6*/][iVar2]);
				Local_799.f_60[iVar1 /*76*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_396(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_32[iVar1 /*6*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_32[iVar1 /*6*/][iVar2]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_32[iVar1 /*6*/][iVar2]);
						}
					}
				}
				if (func_404(iVar1, iVar2))
				{
					TASK::_0x78B4567E18B54480(iVar0);
					GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, true);
				}
			}
			else if (0 != func_395(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

bool func_286()
{
	bool bVar0;

	if (func_418(4194304, 1))
	{
		return true;
	}
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_799.f_19.f_3))
	{
		bVar0 = false;
		if (ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_799.f_19.f_3, "HAT", false) != func_291(0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_799.f_19.f_3, "HAT", func_291(0), 0);
			bVar0 = true;
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_799.f_19.f_3, "COIN01", false) != func_291(3))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_799.f_19.f_3, "COIN01", func_291(3), 0);
			bVar0 = true;
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_799.f_19.f_3, "COIN02", false) != func_291(4))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_799.f_19.f_3, "COIN02", func_291(4), 0);
			bVar0 = true;
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PED(Local_799.f_19.f_3, "PED_BUM", false) != func_287(0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_799.f_19.f_3, "PED_BUM", func_287(0), 0);
			bVar0 = true;
		}
		if (func_237() == 1)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_799.f_19.f_3, "BOTTLE", false) != func_291(2))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_799.f_19.f_3, "BOTTLE", func_291(2), 0);
				bVar0 = true;
			}
		}
		if (!bVar0)
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_799.f_19.f_3, func_292(), func_453(), 2);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_799.f_19.f_3, false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_799.f_19.f_3);
			}
			func_454(4194304);
		}
	}
	return false;
}

int func_287(int iParam0)
{
	return Local_799.f_33.f_7[iParam0 /*11*/];
}

void func_288(float fParam0, float fParam1, int iParam2, float fParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_799.f_234.f_2 = iParam2;
	Local_799.f_234.f_9 = fParam0;
	Local_799.f_234.f_10 = fParam1;
	Local_799.f_234.f_8 = fParam3;
	if (bParam4)
	{
		func_244(&(Local_799.f_234.f_12), 1);
	}
	else
	{
		func_268(&(Local_799.f_234.f_12), 1);
	}
}

void func_289(int iParam0, float fParam1)
{
	func_244(&(Local_799.f_234.f_12), 2);
	Local_799.f_234.f_7 = fParam1;
	Local_799.f_234.f_5 = iParam0;
}

int func_290(int iParam0)
{
	if (func_455(iParam0, &(Local_799.f_234.f_13)))
	{
		Local_799.f_234++;
		return 1;
	}
	return 0;
}

int func_291(int iParam0)
{
	return func_456(0, iParam0);
}

Vector3 func_292()
{
	return Local_799.f_15;
}

int func_293(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

void func_294()
{
	func_196();
	Local_799.f_19.f_7 = VOLUME::_CREATE_VOLUME_CYLINDER(func_292(), 0f, 0f, 0f, 3f, 3f, 3f);
	POPULATION::_0xB56D41A694E42E86(Local_799.f_19.f_7, 2490399, 0, 0, -1, -1, 10);
}

void func_295(int iParam0, int iParam1)
{
	if (Local_799.f_266[iParam0 /*39*/].f_4 == iParam1)
	{
		return;
	}
	Local_799.f_266[iParam0 /*39*/].f_4 = iParam1;
	func_457(iParam0, 8);
}

bool func_296(int iParam0)
{
	return func_458(0, iParam0);
}

bool func_297(int iParam0)
{
	return func_459(0, iParam0);
}

void func_298(int iParam0)
{
	func_244(&(Local_799.f_19.f_2), iParam0);
}

void func_299()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (func_461(func_460(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_0xBB1E41DD3D3C6250(Var1, "MpRandomEvent", 1);
					func_462(&(Local_799.f_137), Var1);
					func_463(func_460(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_300()
{
	return (func_137(32) || func_136(32, 255));
}

bool func_301(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_464(iParam0, joaat("COOLDOWN")) };
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

void func_302()
{
	func_465();
	func_466();
	func_467();
}

void func_303()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_468(iVar0, bVar1, iVar2);
		func_469(iVar0, bVar1, iVar2);
		func_470(iVar0, bVar1, iVar2);
		func_471(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_304()
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
	if (!func_228(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_799.f_33.f_26)
	{
		bVar8 = true;
		Local_799.f_33.f_26 = !Local_799.f_33.f_26;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_799.f_33.f_19 >= 1)
		{
			Local_799.f_33.f_19 = 0;
		}
		iVar0 = Local_799.f_33.f_19;
		Local_799.f_33.f_19++;
		iVar9 = func_472(iVar0);
		iVar1 = Local_799.f_33.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_178(iVar9, 4))
		{
			func_452(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_62[iVar3 /*23*/].f_6.f_2[iVar0] > -1f)
			{
				Local_62[iVar3 /*23*/].f_6.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_799.f_33.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_799.f_33.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_799.f_33.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_799.f_33.f_20), iVar0);
			}
		}
		else
		{
			bVar7 = func_473(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_799.f_33.f_20, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_799.f_33.f_20), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_799.f_33.f_20), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_62[iVar3 /*23*/].f_6.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_62[iVar3 /*23*/].f_6.f_1), iVar0);
				}
				func_474(&(Local_799.f_33.f_21[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_62[iVar3 /*23*/].f_6.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_475(&(Local_799.f_33.f_21[iVar0 /*3*/])) || func_476(&(Local_799.f_33.f_21[iVar0 /*3*/]), 0.5f))))
			{
				func_477(&(Local_799.f_33.f_21[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_62[iVar3 /*23*/].f_6.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_178(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_799.f_33.f_26, false, 256);
		}
		if (func_178(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_478(iVar9))
						{
							if (!func_393(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_479(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::_0xB07D3185E11657A5(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_178(iVar9, 8))
			{
				if (!func_478(iVar9))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_799.f_33.f_20 != 0)
	{
		if (!func_480(1, 255))
		{
			func_481(1);
		}
	}
	else if (func_480(1, 255))
	{
		func_482(1);
	}
}

void func_305()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	var uVar19;
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
	if (!func_228(&iVar25))
	{
		return;
	}
	func_483();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::_0x705BE297EEBDB95D(iVar26))
	{
		Local_799.f_137.f_64 = 0;
		Local_62[iVar25 /*23*/].f_10.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == joaat("WEAPON_MOONSHINEJUG") || iVar26 == joaat("WEAPON_MOONSHINEJUG_MP")));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_799.f_137.f_93 >= 1)
		{
			Local_799.f_137.f_93 = 0;
		}
		iVar1 = Local_799.f_137.f_93;
		Local_799.f_137.f_93++;
		iVar22++;
		iVar18 = func_460(iVar1);
		if (!func_484(iVar18))
		{
		}
		else if (func_485(iVar18, &Var5))
		{
			if (func_486(&Var5, iVar18))
			{
				if (func_487(&(Local_62[iVar25 /*23*/].f_10), 8, iVar1))
				{
					func_488(&(Local_62[iVar25 /*23*/].f_10), 8, iVar1);
				}
			}
			else if (!func_487(&(Local_62[iVar25 /*23*/].f_10), 8, iVar1))
			{
				func_489(&(Local_62[iVar25 /*23*/].f_10), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_490(iVar18);
				if (func_491(iVar18))
				{
					if (func_492(iVar18))
					{
						if (!func_493(iVar18))
						{
							func_494(iVar18);
						}
					}
					if (func_495(iVar18))
					{
						func_496(iVar18);
					}
				}
				else
				{
					if (func_497(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_498(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_462(&(Local_799.f_137), Var5);
						}
					}
					if (!func_499(iVar18, 255))
					{
						bVar2 = false;
						bVar3 = false;
						if (func_500(iVar18))
						{
							bVar2 = true;
							bVar3 = true;
						}
						else if (func_501(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_502(Var5, Var5.f_1, &(Local_799.f_137), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_799.f_137.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_799.f_137.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_503(PLAYER::PLAYER_PED_ID(), Var5, 1060437492 /* Float: 0.707f */) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_504(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_799.f_137.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_505(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_0xBB1E41DD3D3C6250(Var5, "MpRandomEvent", 1);
										func_463(iVar18);
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
														if (func_506(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_799.f_137.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_799.f_137.f_2 & 4 != 0)
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
									if (func_507(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_799.f_137.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_508(iVar18, iVar4, bVar3))
							{
							}
							else
							{
								if (func_487(&(Local_62[iVar25 /*23*/].f_10), 8, iVar1))
								{
									func_488(&(Local_62[iVar25 /*23*/].f_10), 8, iVar1);
								}
								func_509(iVar18, 1);
								if (func_510(iVar18))
								{
									if (!func_511(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_512(iVar18))
											{
											}
											else
											{
												func_513(iVar18);
												func_514(iVar18);
												Jump @1378; //curOff = 1187
												if (func_515(iVar18))
												{
												}
												else if (iVar23 < 1)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (Local_799.f_137.f_95[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_799.f_137.f_95[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_799.f_137.f_95[iVar18];
																Local_799.f_137.f_95[iVar18]++;
															}
															iVar24++;
															if (func_516(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_193(iVar18, iVar20))
																{
																	if (func_499(iVar18, iVar0))
																	{
																		if (!func_517(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_518(iVar18, iVar20);
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

void func_306()
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

	fVar0 = func_519();
	if (Local_799.f_234.f_4)
	{
		return;
	}
	if (!func_228(&iVar1))
	{
		return;
	}
	if (func_189(Local_62[iVar1 /*23*/].f_19, 1))
	{
		Local_799.f_234.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_520(iVar2, 0))
	{
		return;
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_799.f_15);
	fVar4 = Local_799.f_234.f_9;
	fVar5 = Local_799.f_234.f_10;
	if (func_189(Local_799.f_234.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_799.f_234.f_7));
		if (fVar7 > 0f)
		{
			if (func_521(Local_799.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_799.f_234.f_6 < 1f)
			{
				Local_799.f_234.f_6 = (Local_799.f_234.f_6 + fVar8);
				if (Local_799.f_234.f_6 > 1f)
				{
					Local_799.f_234.f_6 = 1f;
				}
			}
		}
		else if (Local_799.f_234.f_6 > 0f)
		{
			Local_799.f_234.f_6 = (Local_799.f_234.f_6 - fVar8);
			if (Local_799.f_234.f_6 < 0f)
			{
				Local_799.f_234.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_799.f_234.f_5) * Local_799.f_234.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_244(&(Local_62[iVar1 /*23*/].f_19), 1);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_799.f_234.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_799.f_234.f_11, false, 0))
	{
		func_244(&(Local_62[iVar1 /*23*/].f_19), 1);
	}
	else if (Local_799.f_234 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 2)
		{
			func_522(&(Local_799.f_234.f_13[iVar10 /*9*/]), fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_523(&(Local_799.f_234.f_13), Local_799.f_234, Local_799.f_234.f_8))
		{
			func_244(&(Local_62[iVar1 /*23*/].f_19), 1);
		}
	}
	if (func_189(Local_62[iVar1 /*23*/].f_19, 1))
	{
		Local_799.f_234.f_4 = 1;
	}
}

void func_307()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_524(&(Local_13.f_44[iVar0 /*3*/]), &(Local_799.f_266[iVar0 /*39*/]), func_183(iVar0));
		iVar0++;
	}
}

bool func_308()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_799.f_14))
	{
		return false;
	}
	if (func_525())
	{
		return false;
	}
	if (func_526(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_309()
{
	int iVar0;

	if (Local_13.f_7 != Local_799.f_19)
	{
		Local_799.f_19 = Local_13.f_7;
	}
	Local_799.f_19.f_9 = -1;
	Local_799.f_19.f_10 = 0;
	Local_799.f_19.f_11 = -1;
	Local_799.f_19.f_12 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_348(iVar0, 1))
		{
			Local_799.f_19.f_9 = (Local_799.f_19.f_9 && Local_62[iVar0 /*23*/].f_1);
			Local_799.f_19.f_10 = (Local_799.f_19.f_10 || Local_62[iVar0 /*23*/].f_1);
			Local_799.f_19.f_11 = (Local_799.f_19.f_11 && Local_62[iVar0 /*23*/].f_1.f_1);
			Local_799.f_19.f_12 = (Local_799.f_19.f_12 || Local_62[iVar0 /*23*/].f_1.f_1);
		}
		iVar0++;
	}
}

void func_310()
{
	int iVar0;

	iVar0 = func_527();
	if (iVar0 != Local_799.f_19.f_1)
	{
		Local_799.f_19.f_1 = iVar0;
		func_177(0);
	}
	switch (Local_799.f_19.f_1)
	{
		case 0:
			break;
		case 1:
			func_529(0, func_528(0), 20f, -89429847, 580546400, 0, "NB_BEG_NAME", 0, 1);
			break;
		case 2:
			func_529(0, func_528(0), 20f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, "NB_BEG_NAME", 0, 1);
			break;
	}
}

void func_311()
{
	int iVar0;

	iVar0 = func_122();
	func_530(iVar0, 1, 291934926, 0, 0);
	func_530(iVar0, 2, 291934926, 0, 0);
	func_530(iVar0, 3, 291934926, 0, 0);
	func_530(iVar0, 4, 291934926, 0, 0);
	func_530(iVar0, 5, 291934926, 0, 0);
	func_530(iVar0, 6, 291934926, 0, 0);
	func_530(iVar0, 8, 291934926, 0, 0);
	func_530(iVar0, 11, 291934926, 0, 0);
}

void func_312()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_191(8);
	bVar1 = func_531(0, 20f, 255, 0);
	if (bVar0 != bVar1)
	{
		if (bVar1)
		{
			if (func_532())
			{
				func_298(8);
			}
		}
		else
		{
			func_197();
			func_198(8);
		}
	}
}

void func_313()
{
	int iVar0;
	int iVar1;

	if (!func_415(0))
	{
		return;
	}
	if (func_418(65536, 0))
	{
		if (!func_192(65536, -1))
		{
			func_454(65536);
		}
		return;
	}
	iVar0 = func_287(0);
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!func_418(32768, 0))
	{
		if (func_533(0) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, iVar1, 1, 1) && func_534(iVar1, 0, 1, 0) != joaat("WEAPON_UNARMED")))
		{
			func_454(32768);
		}
		return;
	}
	if (!func_535(0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	func_454(65536);
}

void func_314()
{
	int iVar0;
	int iVar1;

	if (func_191(16))
	{
		return;
	}
	iVar0 = func_287(0);
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar0, 1, 1) || (PED::_0x3BDFCF25B58B0415(iVar1) && PED::_0xD0B7AEB56229D317(iVar0) == iVar1))
	{
		func_298(16);
	}
}

void func_315()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_192(131072, -1);
	bVar1 = !func_536(joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"), 0);
	if (bVar0 != bVar1)
	{
		if (bVar1)
		{
			func_454(131072);
		}
		else
		{
			func_537(131072);
		}
	}
}

void func_316()
{
	int iVar0;

	if (func_237() != 1)
	{
		return;
	}
	if (!func_538(2, 262144, &iVar0))
	{
		return;
	}
	TASK::_0x78B4567E18B54480(iVar0);
	GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
	func_454(262144);
}

void func_317()
{
	var uVar0;

	return;
	if (!func_538(0, 524288, &uVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(func_291(1)))
	{
		return;
	}
	func_539();
	func_454(524288);
}

void func_318()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_192(1048576, -1);
	bVar1 = func_540();
	if (bVar0 != bVar1)
	{
		if (bVar1)
		{
			func_454(1048576);
		}
		else
		{
			func_537(1048576);
		}
	}
}

void func_319()
{
	if (!func_300())
	{
		return;
	}
	if (!func_192(536870912, -1))
	{
		if (func_541())
		{
			func_542();
		}
	}
	else if (!func_191(4))
	{
		if (func_543())
		{
			func_544();
		}
	}
}

void func_320()
{
	int iVar0;

	if (!func_415(0))
	{
		return;
	}
	if (func_416(0, 1))
	{
		return;
	}
	if (!func_535(0))
	{
		return;
	}
	iVar0 = func_287(0);
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
	{
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 169, true))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(iVar0, 169, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
	}
}

void func_321()
{
	if (!func_418(16384, 1))
	{
		if (func_545() || func_418(8, 0))
		{
			func_454(16384);
		}
		else
		{
			return;
		}
	}
	if (func_296(3) && func_297(3))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(func_291(3)))
		{
			func_546(3, 0);
		}
	}
	if (func_296(4) && func_297(4))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(func_291(4)))
		{
			func_546(4, 0);
		}
	}
}

void func_322()
{
	if (Local_13.f_7 == 0)
	{
		return;
	}
	if (!func_300())
	{
		if (func_499(0, 255))
		{
			func_547();
		}
	}
}

void func_323()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_799.f_19.f_6))
	{
		return;
	}
	if (Local_799.f_19 > 5)
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_799.f_19.f_6);
		VOLUME::_DELETE_VOLUME(Local_799.f_19.f_6);
	}
}

void func_324()
{
	int iVar0;
	char* sVar1;

	if (!func_286())
	{
		return;
	}
	if (!func_300())
	{
		if (func_548())
		{
			func_547();
		}
		else
		{
			func_549();
		}
	}
	iVar0 = func_550();
	switch (func_503(func_287(0), PLAYER::GET_PLAYER_PED(iVar0), 1060437492 /* Float: 0.707f */))
	{
		case 0:
			sVar1 = "PBL_FRONT";
			break;
		case 3:
			sVar1 = "PBL_LEFT";
			break;
		case 2:
			sVar1 = "PBL_RIGHT";
			break;
	}
	if (!MISC::_IS_STRING_SPACE(sVar1))
	{
		func_551(Local_799.f_19.f_3, sVar1, 0);
	}
}

void func_325()
{
	int iVar0;
	char* sVar1;

	if (func_422(1, 0))
	{
		return;
	}
	iVar0 = func_550();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	switch (func_503(func_287(0), PLAYER::GET_PLAYER_PED(iVar0), 1060437492 /* Float: 0.707f */))
	{
		case 0:
			sVar1 = "PBL_FRONT";
			break;
		case 3:
			sVar1 = "PBL_LEFT";
			break;
		case 2:
			sVar1 = "PBL_RIGHT";
			break;
	}
	if (!MISC::_IS_STRING_SPACE(sVar1))
	{
		if (func_551(Local_799.f_19.f_3, sVar1, 0))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_799.f_19.f_3, sVar1, true);
			func_552();
			func_553(1);
		}
	}
	if (!func_422(1, 0))
	{
		func_549();
	}
}

void func_326()
{
	if (func_423(1))
	{
		return;
	}
	if (!func_423(1))
	{
		if (func_554())
		{
			func_555(0, 0, 1);
			func_555(0, 1, 1);
		}
		if (func_556())
		{
			if (!func_557(0))
			{
				func_558();
			}
		}
		else
		{
			func_549();
		}
	}
}

void func_327()
{
	if (func_422(32, 0))
	{
		return;
	}
	func_559(&(Local_13.f_7.f_14), &(Local_799.f_19.f_13), "player", "player_f", func_429(Local_13.f_7.f_8), 63, 256, 3000, 7000);
	if (func_560(&(Local_799.f_19.f_13)))
	{
		func_553(32);
	}
}

void func_328()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_561())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_228(&iVar1))
	{
		return;
	}
	if (Local_13.f_7.f_7 == PLAYER::PLAYER_ID())
	{
		func_562(250);
		if (!func_192(2097152, -1))
		{
			if (func_563(PLAYER::PLAYER_PED_ID()))
			{
				func_454(2097152);
			}
		}
	}
	switch (Local_13.f_7.f_8)
	{
		case 2:
			func_564();
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, joaat("OBJECTEXCHANGE")) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 119677702))
			{
				if (!func_191(128))
				{
					func_565();
					func_298(128);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1140537877))
			{
				func_566(25, 0, 0, 1, 0);
				if (!func_192(2048, -1))
				{
					func_446(joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"), 0, 0);
				}
				func_567();
				func_568();
				func_454(2048);
				Local_62[iVar1 /*23*/].f_1.f_3++;
			}
			break;
		case 3:
			func_569();
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 119677702))
			{
				func_454(4096);
				bVar2 = false;
				if (func_536(joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"), 0))
				{
					bVar2 = true;
				}
				if (!bVar2 && !func_570(-1746418219, 0, 255, 0, 0))
				{
					bVar2 = true;
				}
				if (bVar2)
				{
					if (!func_570(-419165566, 0, 255, 0, 0))
					{
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1140537877))
			{
				func_566(25, 0, 0, 1, 0);
				if (!func_192(2048, -1))
				{
					func_446(joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"), 0, 0);
				}
				func_567();
				func_568();
				func_454(2048);
				Local_62[iVar1 /*23*/].f_1.f_3++;
			}
			break;
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 119677702))
			{
				func_566(25, 0, 0, 1, 0);
				if (!func_192(2048, -1))
				{
					func_446(joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"), 0, 0);
				}
				func_567();
				func_568();
				func_454(2048);
				func_571(18, -796779660, -1);
				func_572(7000, 0, 51, 0);
				Local_62[iVar1 /*23*/].f_1.f_3++;
			}
			break;
		case 1:
			if (func_192(8, -1))
			{
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1745322408))
			{
				if (!func_192(8, -1))
				{
					func_446(joaat("PERSONA_HONOR_ACTION__THEFT"), 0, 0);
				}
				if (!func_570(-1163262735, 0, 255, 0, 0))
				{
				}
				func_454(8);
				func_571(7, -796779660, -1);
				func_573(PLAYER::PLAYER_ID());
			}
			break;
	}
}

void func_329()
{
	if (func_423(256) || ANIMSCENE::_0x1F0E401031E20146(Local_799.f_19.f_3, "PBL_IDLES_B"))
	{
		if (!func_574(Local_799.f_19.f_3, "player", "player_f"))
		{
		}
	}
	if (!func_423(256))
	{
		if (!func_551(Local_799.f_19.f_3, "PBL_IDLES_B", 1))
		{
		}
	}
	func_575();
}

void func_330()
{
	if (func_423(128))
	{
		return;
	}
	if (func_422(16, 1))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_799.f_19.f_3))
	{
		return;
	}
	if (func_551(Local_799.f_19.f_3, "PBL_BREAKOUT", 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_799.f_19.f_3, "PBL_BREAKOUT", true);
		if (func_576())
		{
			func_571(15, 1744022339, -1);
		}
		else
		{
			func_571(16, 1744022339, -1);
		}
		func_553(16);
	}
}

void func_331()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	if (!func_422(4, 0))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_799.f_19.f_3))
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_799.f_19.f_3))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_799.f_19.f_3);
				func_553(4);
			}
		}
	}
	if (func_418(64, 0) || func_418(32, 0))
	{
		return;
	}
	iVar0 = func_287(0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_799.f_19.f_3))
		{
			return;
		}
		PED::SET_COMBAT_FLOAT(iVar0, 70, 15f);
		if (func_418(8, 0))
		{
			iVar1 = func_577();
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar1), 1048576, 0);
				func_454(32);
			}
		}
		else if (func_418(8192, 0))
		{
			iVar2 = func_578();
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar2), 1048576, 0);
				func_454(32);
			}
		}
		else if (func_418(16384, 0))
		{
			iVar3 = func_579();
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar3), 1048576, 0);
				func_454(32);
			}
		}
		if (!func_192(32, -1))
		{
			vVar4 = { func_292() };
			if (!func_418(512, 0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, vVar4, 2, 8192, 9999f, -1, 0);
			}
			else
			{
				iVar7 = func_580();
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
				{
					iVar8 = PLAYER::GET_PLAYER_PED(iVar7);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iVar8, 3, 8192, 9999f, -1, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, vVar4, 3, 8192, 9999f, -1, 0);
				}
			}
			func_454(64);
			PED::SET_PED_CONFIG_FLAG(iVar0, 230, true);
		}
	}
}

void func_332()
{
	func_581();
}

void func_333()
{
	func_581();
}

void func_334()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (func_461(func_460(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_0xAD8F2424C6E1E3A8(Var1);
			}
		}
		iVar0++;
	}
}

void func_335(int iParam0, int iParam1)
{
	func_268(&(Local_799.f_266[iParam0 /*39*/].f_5), iParam1);
}

bool func_336(int iParam0, int iParam1)
{
	return func_189(Local_799.f_266[iParam0 /*39*/].f_5, iParam1);
}

int func_337(int iParam0)
{
	return func_287(iParam0);
}

void func_338(int iParam0, bool bParam1)
{
	int iVar0;
	struct<8> Var1;

	Var1.f_4 = 1;
	Var1.f_7 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_582(Local_799.f_266[iParam0 /*39*/].f_6[iVar0 /*8*/]))
		{
			func_583(&(Local_799.f_266[iParam0 /*39*/].f_6[iVar0 /*8*/]), 1, 1);
			if (bParam1)
			{
				MISC::_COPY_MEMORY(&(Local_799.f_266[iParam0 /*39*/].f_6[iVar0 /*8*/]), &Var1, 8);
			}
		}
		iVar0++;
	}
	func_335(iParam0, 2);
}

int func_339(var uParam0, var uParam1)
{
	return uParam0;
}

int func_340(int iParam0)
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

int func_341(struct<2> Param0)
{
	return func_584(Param0);
}

void func_342(struct<2> Param0, var uParam2)
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
	switch (func_339(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_586(func_585(Param0));
			iVar5 = func_587(iVar4);
			if (!func_588(iVar5, 0))
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

int func_343(int iParam0, int iParam1)
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

void func_344(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_589(&Var0);
}

var func_345(int iParam0)
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

var func_346(int iParam0)
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

var func_347(int iParam0)
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

bool func_348(int iParam0, bool bParam1)
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

bool func_349(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_590(iParam0) - 1))
	{
		return false;
	}
	return true;
}

var func_350(int iParam0)
{
	return iParam0 + 8;
}

void func_351(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_464(iParam1, joaat("CHARACTER_MEMORY")) };
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

void func_352(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_464(iParam1, joaat("CHARACTER_MEMORY")) };
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

void func_353(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_354(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::_DOES_THREAD_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_1291734.f_11.f_561[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_355(int iParam0)
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

int func_356(int iParam0)
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

void func_357(var uParam0)
{
	func_204(uParam0, 0);
	func_204(uParam0, 1);
	func_204(uParam0, 3);
	func_202(uParam0);
}

void func_358(var uParam0)
{
	func_203(uParam0);
	func_591(uParam0, 0, 3);
}

void func_359(var uParam0)
{
	func_204(uParam0, 0);
	func_205(uParam0, 0);
	func_205(uParam0, 1);
	func_205(uParam0, 2);
}

void func_360(var uParam0)
{
	func_204(uParam0, 1);
	func_202(uParam0);
}

void func_361(var uParam0)
{
	func_204(uParam0, 2);
	func_205(uParam0, 3);
}

void func_362(var uParam0)
{
	func_204(uParam0, 3);
	func_205(uParam0, 4);
}

void func_363(var uParam0)
{
	func_205(uParam0, 0);
	func_205(uParam0, 1);
}

void func_364(var uParam0)
{
	func_205(uParam0, 2);
	func_205(uParam0, 3);
}

void func_365(var uParam0)
{
	func_205(uParam0, 4);
	func_205(uParam0, 5);
}

bool func_366(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_367(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_368(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_369(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

int func_370(int iParam0)
{
	return iParam0;
}

void func_371(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_336(iParam0, 4))
		{
			func_457(iParam0, 4);
		}
	}
	else if (func_336(iParam0, 4))
	{
		func_335(iParam0, 4);
	}
}

void func_372(int iParam0, char* sParam1)
{
	if (func_592(sParam1, Local_799.f_266[iParam0 /*39*/].f_3) == 0)
	{
		return;
	}
	Local_799.f_266[iParam0 /*39*/].f_3 = sParam1;
	func_457(iParam0, 8);
}

void func_373(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_799.f_266[iParam0 /*39*/].f_2 = fParam1;
	}
}

void func_374(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = sParam2;
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 = iParam3;
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6 = iParam4;
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4 = iParam5;
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5 = iParam6;
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = iParam7;
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1 = iParam8;
	if (func_593(iParam0))
	{
		func_594(iParam0, iParam1, 16);
	}
}

void func_375(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5)
{
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = sParam2;
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = sParam3;
	func_594(iParam0, iParam1, 2);
	if (bParam4)
	{
		func_594(iParam0, iParam1, 4);
	}
	else
	{
		func_595(iParam0, iParam1, 4);
	}
	if (bParam5 && func_593(iParam0))
	{
		func_596(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/], sParam2, sParam3, 1);
	}
}

void func_376(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (MISC::_IS_STRING_SPACE(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_594(iParam0, iParam1, 1);
	}
	else
	{
		func_595(iParam0, iParam1, 1);
	}
	if (bParam3 && func_593(iParam0))
	{
		func_597(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/], bParam2, 1, 1);
	}
}

void func_377(var uParam0)
{
	func_598(uParam0, 0);
	func_599(uParam0, 0);
	func_600(uParam0, 1);
	func_601(uParam0, 1);
	func_602(uParam0, 0);
	func_603(uParam0, 1);
	func_604(uParam0, 1, 1, 1);
}

void func_378(var uParam0)
{
	func_606(uParam0, (func_605(uParam0) - 6f));
	func_607(uParam0, 1);
}

void func_379(var uParam0)
{
	func_598(uParam0, 0);
	func_599(uParam0, 0);
	func_600(uParam0, 0);
	func_602(uParam0, 0);
	func_604(uParam0, 1, 1, 1);
}

void func_380(var uParam0)
{
	func_608(uParam0, 1);
	func_609(uParam0, 1);
	func_610(uParam0, 1);
}

void func_381(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_2), 131072);
	}
	else
	{
		func_244(&(uParam0->f_2), 131072);
	}
}

void func_382(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 4);
	}
	else
	{
		func_268(uParam0, 4);
	}
}

void func_383(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 1);
	}
	else
	{
		func_268(&(uParam0->f_1), 1);
	}
}

void func_384(var uParam0, float fParam1)
{
	uParam0->f_31 = fParam1;
}

bool func_385(int iParam0, var uParam1)
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

int func_386(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

void func_387(int iParam0, int iParam1, int iParam2)
{
	if (func_402(iParam0, iParam1))
	{
		return;
	}
	Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_3 = iParam2;
	MISC::SET_BIT(&(Local_799.f_60[iParam0 /*76*/].f_3), iParam1);
}

void func_388(int iParam0, int iParam1, int iParam2)
{
	Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_2 = iParam2;
}

void func_389(int iParam0)
{
	func_611(0, iParam0);
}

void func_390(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_7 = { vParam2 };
	Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_10 = { 0f, 0f, fParam5 };
	Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_13 = iParam6;
}

void func_391(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_244(&(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1), 512);
	}
	else
	{
		func_268(&(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1), 512);
	}
}

int func_392(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

bool func_393(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_799.f_15 };
	iVar7 = 0;
	iVar8 = func_449(iParam0);
	iVar9 = func_612(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_30[iParam0]))
		{
			iVar9 = func_612(iParam0);
			fVar0 = func_613(iParam0);
			if (!func_189(Local_799.f_33.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_614(iParam0)) };
			}
			else
			{
				vVar1 = { func_614(iParam0) };
			}
			if (!func_615(&(Local_13.f_30[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_30[iParam0]);
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
						PED::_UPDATE_PED_VARIATION(iVar7, func_178(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_616(iVar7, 1);
					}
					if (func_617(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_618(iParam0))
						{
							if (func_617(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_394(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_30[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_30[iParam0]);
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
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_13.f_30[iParam0])))
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

bool func_394(int iParam0)
{
	return func_178(iParam0, 128);
}

int func_395(int iParam0, int iParam1)
{
	return Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_2;
}

bool func_396(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_397(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_398(int iParam0, int iParam1)
{
	return Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_7;
}

bool func_399(int iParam0, int iParam1)
{
	return Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_13;
}

bool func_400(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_619(*uParam0, 0f, 0f, 0f))
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

bool func_401(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_799.f_60[iParam0 /*76*/].f_3, iParam1);
}

bool func_402(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 1);
}

bool func_403(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_620(iParam1))
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

bool func_404(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_405(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_406(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_407(int iParam0, int iParam1)
{
	return Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_10;
}

bool func_408(int iParam0, int iParam1, int iParam2)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_409(float fParam0)
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

Vector3 func_410(vector3 vParam0)
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

bool func_411(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_412(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_413(int iParam0, int iParam1)
{
	return func_189(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 512);
}

void func_414(var uParam0, int iParam1)
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
			if (!func_621(iParam1))
			{
			}
			else
			{
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (func_622(iParam1))
			{
			}
			else
			{
				uParam0->f_1 = 255;
				*uParam0 = func_624(iParam1, func_623(Local_13.f_44.f_4, iParam1), func_229(iParam1));
				func_124(&(Local_13.f_44.f_4), iParam1, 3);
				uParam0->f_2 = 0;
			}
			break;
	}
}

bool func_415(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_799.f_33.f_7[iParam0 /*11*/]);
}

bool func_416(int iParam0, bool bParam1)
{
	if (!bParam1 || func_415(iParam0))
	{
		return ENTITY::IS_ENTITY_DEAD(Local_799.f_33.f_7[iParam0 /*11*/]);
	}
	return false;
}

bool func_417(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_625(iVar0))
			{
				if (func_531(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_418(int iParam0, bool bParam1)
{
	if (func_189(Local_799.f_19.f_10, iParam0))
	{
		if (!bParam1 || func_192(iParam0, -1))
		{
			return true;
		}
		func_454(iParam0);
		return true;
	}
	return false;
}

bool func_419(int iParam0, int iParam1)
{
	return func_626(iParam0, iParam1);
}

void func_420(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_13.f_7 = iParam0;
}

void func_421()
{
	if (!func_423(8))
	{
		if (Local_13.f_7.f_9 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_9, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
		{
			func_426(8);
		}
	}
	else if (!func_423(16))
	{
		if (func_418(1024, 0))
		{
			Local_13.f_7.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_426(16);
		}
	}
	else if (!func_418(1024, 0))
	{
		if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_9, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2500)
		{
			func_425(8);
			func_425(16);
			Local_13.f_7.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
}

bool func_422(int iParam0, bool bParam1)
{
	if (func_189(Local_799.f_19.f_12, iParam0))
	{
		if (bParam1)
		{
			if (!func_627(iParam0, -1))
			{
				func_553(iParam0);
			}
		}
		return true;
	}
	return false;
}

bool func_423(int iParam0)
{
	return func_189(Local_13.f_7.f_1, iParam0);
}

void func_424(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = NETWORK::_ANIM_SCENE_TO_NET(iParam2);
}

void func_425(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	func_268(&(Local_13.f_7.f_1), iParam0);
}

void func_426(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	func_244(&(Local_13.f_7.f_1), iParam0);
}

void func_427()
{
	int iVar0;

	if (!func_432())
	{
		Local_13.f_7.f_11 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	switch (Local_13.f_7.f_10)
	{
		case 0:
			if (Local_13.f_7.f_5 != 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) < (3000 / func_628(func_422(2, 0), 2, 1)))
				{
					return;
				}
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_3))
			{
				Local_13.f_7.f_3 = func_629();
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_3))
				{
					Local_13.f_7.f_11 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
			else
			{
				iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_3);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && func_192(134217728, iVar0))
				{
					Local_13.f_7.f_10 = 1;
					Local_13.f_7.f_11 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
				else if (Local_13.f_7.f_11 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_11, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
				{
					Local_13.f_7.f_10 = 3;
				}
			}
			break;
		case 1:
			if (func_630(268435456))
			{
				Local_13.f_7.f_10 = 2;
			}
			else if (Local_13.f_7.f_11 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_11, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
			{
				Local_13.f_7.f_10 = 3;
			}
			break;
		case 2:
			if (!func_418(268435456, 0))
			{
				Local_13.f_7.f_10 = 3;
			}
			else if (Local_13.f_7.f_11 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_11, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 6000)
			{
				Local_13.f_7.f_10 = 3;
			}
			break;
		case 3:
			if ((!func_422(2, 0) && !func_418(67108864, 0)) && !func_418(134217728, 0))
			{
				Local_13.f_7.f_10 = 0;
				Local_13.f_7.f_3 = 255;
				Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
	}
}

bool func_428(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!func_631(iVar0))
	{
		return false;
	}
	return Local_62[iVar0 /*23*/].f_1.f_3 >= 4;
}

char* func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_DONATE";
		case 1:
			return "PBL_STEAL";
		case 2:
			return "PBL_DONATE_REWARD";
		case 3:
			return "PBL_DONATE_RAT";
		default:
			break;
	}
	return "invalid";
}

bool func_430(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	*iParam2 = 0;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		*iParam2 = 1;
		return true;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(uParam0->f_1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		*iParam2 = 1;
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		*iParam2 = 1;
		return true;
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(iVar0, sParam1) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar1, iVar0))
		{
			return false;
		}
	}
	return true;
}

bool func_431(int iParam0)
{
	if (func_423(64))
	{
		return true;
	}
	if (!func_632(iParam0))
	{
		return false;
	}
	func_426(64);
	return true;
}

bool func_432()
{
	if (((((((ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "IDLES", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "IDLES_1", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "IDLES_2", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "IDLES_3", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "IDLES_4", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "IDLES_REDUX", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "IDLES_2_REDUX", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "IDLES_4_REDUX", 1))
	{
		return true;
	}
	return false;
}

bool func_433(int iParam0, char* sParam1, char* sParam2)
{
	int iVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return true;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam1, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam2, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	return true;
}

bool func_434()
{
	if ((func_422(1024, 0) || func_422(8, 0)) || func_422(32, 0))
	{
		return false;
	}
	if ((func_423(4) || func_423(2)) || func_423(64))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_799.f_19.f_3))
	{
		return true;
	}
	return true;
}

bool func_435()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_7))
	{
		return false;
	}
	if (!func_633(Local_13.f_7.f_7, &iVar0))
	{
		return false;
	}
	if (Local_62[iVar0 /*23*/].f_1.f_3 > 2)
	{
		return false;
	}
	Local_13.f_7.f_16++;
	return true;
}

void func_436(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = 0;
}

bool func_437(int iParam0, bool bParam1)
{
	if (!bParam1 || func_415(iParam0))
	{
		return (PED::IS_PED_RAGDOLL(Local_799.f_33.f_7[iParam0 /*11*/]) || PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_799.f_33.f_7[iParam0 /*11*/]));
	}
	return false;
}

void func_438(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_439(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_440(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_799.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != Local_799)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_799.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_799.f_3)
	{
		return false;
	}
	return true;
}

void func_441(int iParam0)
{
	switch (iParam0->f_9)
	{
		case 377515857:
			if (!func_634(iParam0))
			{
			}
			break;
		case -515553126:
			func_635(5000, 0, 51, 0);
			break;
		case -1865486807:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0->f_10))
			{
				func_635(5000, 0, 51, 0);
			}
			else
			{
				func_636(iParam0->f_10, 5000, 0, 51, 0);
			}
			break;
		case 1448683378:
			func_637(0, iParam0->f_11);
			break;
		case -1834105103:
			if (!func_638(joaat("REWARD_DARK_ALLEY_HOBO_01"), 0))
			{
			}
			func_454(4);
			break;
	}
}

bool func_442(int iParam0)
{
	return Local_799.f_309.f_1[iParam0] != 0;
}

bool func_443(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_799.f_309.f_1[iParam0], iParam1);
}

bool func_444(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_799.f_309.f_3[iParam0], iParam1);
}

bool func_445(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			if (func_639(iParam0, PLAYER::PLAYER_ID(), 0, 1))
			{
				return true;
			}
			break;
		case 0:
			if (func_191(64))
			{
				if (!func_191(32))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_446(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_640())
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
		if (!Global_1139381.f_3876.f_2[func_641(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1139381.f_3876.f_2[func_641(iParam0, 1) /*4*/].f_2++;
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
	func_642(&Var0, uVar7);
}

void func_447(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_799.f_309.f_3[iParam0]), iParam1);
}

char* func_448()
{
	switch (func_237())
	{
		case 1:
			return "SCRIPT_RE@DARK_ALLEY_BUM@DRUNK";
		case 0:
			return "SCRIPT_RE@DARK_ALLEY_BUM@DESP";
		default:
			break;
	}
	return "invalid_anim_dict";
}

int func_449(int iParam0)
{
	return Local_799.f_33.f_7[iParam0 /*11*/].f_3;
}

bool func_450(int iParam0)
{
	return func_401(0, iParam0);
}

bool func_451(int iParam0)
{
	return func_402(0, iParam0);
}

void func_452(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_449(iParam0);
	bVar3 = func_348(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_799.f_33.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_30[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_30[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_799.f_33.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_62[iParam1 /*23*/].f_6.f_2[iParam0] = -1f;
				}
				else
				{
					Local_62[iParam1 /*23*/].f_6.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_394(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_30[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_30[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_30[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_643(iVar1, 1f, 0);
					sVar0 = func_644(iParam0);
					if (!MISC::_IS_STRING_SPACE(sVar0))
					{
						func_645(iVar1, sVar0, 1);
					}
				}
				if (func_617(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_618(iParam0))
					{
						if (func_617(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_799.f_33.f_5), iParam0);
				if (bParam2)
				{
					func_646(iParam0);
				}
			}
		}
	}
}

Vector3 func_453()
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, func_647() };
	return vVar0;
}

void func_454(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	Local_799.f_19.f_10 = (Local_799.f_19.f_10 || iParam0);
	func_244(&(Local_62[iVar0 /*23*/].f_1), iParam0);
}

bool func_455(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_456(int iParam0, int iParam1)
{
	return Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/];
}

void func_457(int iParam0, int iParam1)
{
	func_244(&(Local_799.f_266[iParam0 /*39*/].f_5), iParam1);
}

bool func_458(int iParam0, int iParam1)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/]);
}

bool func_459(int iParam0, int iParam1)
{
	return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/]);
}

int func_460(int iParam0)
{
	return iParam0;
}

bool func_461(int iParam0, var uParam1)
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;

	uParam1->f_1 = 0;
	*uParam1 = func_287(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_648(iParam0, 255, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		if (Local_13.f_7 < 6)
		{
			bVar0 = func_237() == true;
			fVar1 = func_649(*uParam1);
			vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam1) * FtoV(func_650(bVar0, 0f, 0.5f)) };
			func_651(uParam1, vVar2 - Vector((fVar1 * func_650(bVar0, 2.25f, 1f)), 0f, 0f), 1, 0, 0, 8, 1, 1);
		}
		else
		{
			func_651(uParam1, 0f, 0f, 0f, 1, 0, 0, 8, 1, 1);
		}
		return true;
	}
	return false;
}

void func_462(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_463(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	func_489(&(Local_62[iVar0 /*23*/].f_10), 0, iParam0);
}

struct<2> func_464(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_652(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_653(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_465()
{
	Local_799.f_33.f_6 = 0;
	Local_799.f_33.f_2 = 0;
	Local_799.f_33.f_1 = -1;
}

void func_466()
{
	int iVar0;

	func_232(&(Local_799.f_137.f_72), 2, 0);
	func_232(&(Local_799.f_137.f_72), 1, 0);
	func_232(&(Local_799.f_137.f_72), 4, 0);
	func_232(&(Local_799.f_137.f_72), 5, 0);
	func_232(&(Local_799.f_137.f_72), 8, -1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_799.f_137.f_66[iVar0]));
		SCRIPTS::_0x20F4CB76689ACDBC(&(Local_799.f_137.f_70[iVar0]));
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_799.f_137.f_68[iVar0]));
		func_654(iVar0);
		iVar0++;
	}
}

void func_467()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar1 = 0;
	iVar2 = func_655(0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		func_656();
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	bVar3 = false;
	Local_799.f_266.f_40 = 0;
	Local_799.f_266.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!bVar3 && ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (func_657(func_183(iVar0), iVar1))
			{
				bVar3 = true;
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		func_656();
	}
}

void func_468(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_799.f_33.f_2 = (Local_799.f_33.f_2 || Local_62[iParam0 /*23*/].f_6);
		Local_799.f_33.f_1 = (Local_799.f_33.f_1 && Local_62[iParam0 /*23*/].f_6);
		Local_799.f_33.f_6 = (Local_799.f_33.f_6 || Local_62[iParam0 /*23*/].f_6.f_1);
	}
}

void func_469(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_658(&(Local_799.f_137.f_72), &(Local_62[iParam0 /*23*/].f_10), 2);
		func_658(&(Local_799.f_137.f_72), &(Local_62[iParam0 /*23*/].f_10), 1);
		func_658(&(Local_799.f_137.f_72), &(Local_62[iParam0 /*23*/].f_10), 4);
		func_658(&(Local_799.f_137.f_72), &(Local_62[iParam0 /*23*/].f_10), 5);
		func_658(&(Local_799.f_137.f_72), &(Local_62[iParam0 /*23*/].f_10), 6);
		func_658(&(Local_799.f_137.f_72), &(Local_62[iParam0 /*23*/].f_10), 7);
		func_658(&(Local_799.f_137.f_72), &(Local_62[iParam0 /*23*/].f_10), 0);
		func_658(&(Local_799.f_137.f_72), &(Local_62[iParam0 /*23*/].f_10), 3);
		func_659(&(Local_799.f_137.f_72), &(Local_62[iParam0 /*23*/].f_10), 8);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_62[iParam0 /*23*/].f_10.f_5[iVar0]), &(Local_799.f_137.f_66[iVar0]), &(Local_799.f_137.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_62[iParam0 /*23*/].f_10.f_5[iVar0]), &(Local_799.f_137.f_66[iVar0]), &(Local_799.f_137.f_68[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_62[iParam0 /*23*/].f_10.f_5[iVar0]), &(Local_799.f_137.f_66[iVar0]), &(Local_799.f_137.f_70[iVar0]));
			func_660(func_460(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_470(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_62[iParam2 /*23*/].f_19 = (Local_62[iParam2 /*23*/].f_19 || Local_62[iParam0 /*23*/].f_19);
	}
}

void func_471(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return;
	}
	Local_799.f_266.f_40 = (Local_799.f_266.f_40 || Local_62[iParam0 /*23*/].f_20.f_2);
	Local_799.f_266.f_41 = (Local_799.f_266.f_41 && Local_62[iParam0 /*23*/].f_20.f_2);
	func_661(iParam0);
}

int func_472(int iParam0)
{
	return iParam0;
}

int func_473(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_62[iParam3 /*23*/].f_6.f_2[iParam2] = fVar0;
	if (fVar0 > Local_799.f_33.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_474(var uParam0)
{
	func_662(uParam0, 0f);
}

bool func_475(var uParam0)
{
	return func_663(*uParam0, 1);
}

bool func_476(var uParam0, float fParam1)
{
	if (!func_475(uParam0))
	{
		return false;
	}
	if (func_664(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_477(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_478(int iParam0)
{
	return true;
}

void func_479(int iParam0, int iParam1)
{
	func_268(&(Local_799.f_33.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_480(int iParam0, int iParam1)
{
	if (!func_348(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	return func_189(Local_62[iParam1 /*23*/].f_6, iParam0);
}

void func_481(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	func_244(&(Local_62[iVar0 /*23*/].f_6), iParam0);
}

void func_482(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	func_268(&(Local_62[iVar0 /*23*/].f_6), iParam0);
}

void func_483()
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
	if (!func_228(&iVar15))
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
	while (iVar0 < 1)
	{
		iVar14 = func_460(iVar0);
		if (!func_484(iVar14))
		{
		}
		else if (!func_485(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_799.f_137.f_65), iVar14);
			}
			if (func_501(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, 0, 0))
			{
				func_665(iVar14);
				func_666(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_484(int iParam0)
{
	return !func_487(&(Local_799.f_137.f_72), 5, iParam0);
}

bool func_485(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_799.f_137.f_90, iParam0))
	{
		return false;
	}
	*uParam1 = Local_799.f_137.f_76[iParam0 /*13*/];
	uParam1->f_1 = Local_799.f_137.f_76[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_799.f_137.f_76[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_486(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_667(iParam1))
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
	if (func_668(*uParam0, &(Local_799.f_137.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_487(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_385(iParam1, &Var0))
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

int func_488(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_385(iParam1, &Var0))
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

int func_489(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_385(iParam1, &Var0))
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

void func_490(int iParam0)
{
}

bool func_491(int iParam0)
{
	return func_487(&(Local_799.f_137.f_72), 4, iParam0);
}

bool func_492(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return false;
	}
	return func_487(&(Local_62[iVar0 /*23*/].f_10), 4, iParam0);
}

bool func_493(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_799.f_137.f_68[iParam0]));
}

void func_494(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	func_488(&(Local_62[iVar0 /*23*/].f_10), 4, iParam0);
}

bool func_495(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_62[iVar0 /*23*/].f_10.f_5[iParam0]));
}

void func_496(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Local_62[iVar0 /*23*/].f_10.f_5[iParam0]));
}

bool func_497(int iParam0)
{
	return func_487(&(Local_799.f_137.f_72), 6, iParam0);
}

bool func_498(int iParam0)
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

bool func_499(int iParam0, int iParam1)
{
	if (!func_348(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	return func_487(&(Local_62[iParam1 /*23*/].f_10), 1, iParam0);
}

bool func_500(int iParam0)
{
	if (func_192(16384, -1))
	{
		return true;
	}
	if (func_192(8, -1))
	{
		return true;
	}
	return false;
}

bool func_501(int iParam0, int iParam1)
{
	if (!func_348(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	if (!func_669(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_487(&(Local_62[iParam1 /*23*/].f_10), 3, iParam0);
}

bool func_502(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_670(uParam2, 1, iVar0);
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
			if (func_671(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_672(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_673(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_674(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_675(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_20 && func_676(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_672(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_677(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_678(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_672(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_679(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_672(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258.f_23) < 300)
			{
				if (func_680(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_680(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_672(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_681(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258.f_19 || uParam2->f_13 < 20f)
			{
				if (func_682(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_683(uParam2, 4000))
				{
					if ((func_684(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_685(uParam2, iParam0)) && func_686(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_672(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_684(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_685(uParam2, iParam0)) && func_686(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258.f_34 == 0)
			{
				if (Global_1940258.f_35 != 0)
				{
					if (func_687(iParam0, Global_1940258.f_35))
					{
						func_688();
						*iParam3 = 2;
						func_672(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_689(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_690() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_688();
						*iParam3 = 2;
						func_672(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_691())
				{
					if (func_687(iParam0, Global_1940258.f_36))
					{
						func_688();
						*iParam3 = 2;
						func_672(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_692(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_672(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_693(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_672(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_694(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_695(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_672(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_696(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_697(uParam2, 4000))
				{
					if (func_698(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_672(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_699(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_672(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_700(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_672(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_503(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_701(iParam0, vVar0, iParam2);
}

bool func_504(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_702(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_703(&iVar4, iParam1->f_12);
	func_705(Local_799.f_33.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_704(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_706(&iVar4, &uVar0);
}

bool func_505(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return false;
	}
	return func_487(&(Local_62[iVar0 /*23*/].f_10), 0, iParam0);
}

bool func_506(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_799.f_137.f_64, iParam0))
	{
		return false;
	}
	if (func_189(Local_799.f_137.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_707(&(Local_799.f_137))))
	{
		return false;
	}
	return true;
}

bool func_507(int iParam0, int iParam1, int iParam2)
{
	if (!func_506(iParam0, iParam1))
	{
		return false;
	}
	if (Local_62[iParam2 /*23*/].f_10.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_62[iParam2 /*23*/].f_10.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_508(int iParam0, int iParam1, bool bParam2)
{
	func_454(256);
	if (!bParam2 && func_708(iParam1))
	{
		if (func_709(iParam1))
		{
			func_454(512);
			switch (iParam1)
			{
				case 2:
				case 2048:
					break;
				default:
					if (func_534(PLAYER::PLAYER_PED_ID(), 0, 1, 0) != joaat("WEAPON_UNARMED"))
					{
						func_454(32768);
					}
					break;
			}
		}
	}
	else if (iParam1 == 1048576 || bParam2)
	{
		if (!bParam2)
		{
			if (!func_418(8192, 0))
			{
				func_454(8192);
			}
		}
		else if (func_192(16384, -1))
		{
		}
	}
	else if (iParam1 == 256)
	{
		if (func_531(iParam0, 40f, 255, 0))
		{
			func_454(512);
			func_454(32768);
		}
	}
	return true;
}

void func_509(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	func_489(&(Local_62[iVar0 /*23*/].f_10), 1, iParam0);
	if (bParam1)
	{
		Local_62[iVar0 /*23*/].f_10.f_7[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_510(int iParam0)
{
	return func_487(&(Local_799.f_137.f_72), 1, iParam0);
}

bool func_511(int iParam0, int iParam1)
{
	if (!func_348(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	return func_487(&(Local_62[iParam1 /*23*/].f_10), 2, iParam0);
}

bool func_512(int iParam0)
{
	return true;
}

void func_513(int iParam0)
{
}

void func_514(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	func_489(&(Local_62[iVar0 /*23*/].f_10), 2, iParam0);
}

bool func_515(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_799.f_137.f_70[iParam0]), &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

bool func_516(int iParam0, var uParam1, int iParam2, var uParam3)
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

bool func_517(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return true;
}

void func_518(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_228(&iVar0))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&(Local_62[iVar0 /*23*/].f_10.f_5[iParam0]), iParam1);
}

float func_519()
{
	int iVar0;
	float fVar1;

	if (Local_799.f_234.f_3 == 0)
	{
		Local_799.f_234.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_799.f_234.f_3)) * 0.001f);
	Local_799.f_234.f_3 = iVar0;
	return fVar1;
}

bool func_520(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

bool func_521(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_710(vVar0, vParam0) > func_710(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_522(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) || (bParam7 && ENTITY::IS_ENTITY_DEAD(uParam0->f_6)))
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
			else if (func_711(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_712(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_713() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_523(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_182(uParam0);
	return true;
}

void func_524(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = func_337(iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_714(iParam2))
		{
			func_338(iParam2, 0);
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
		func_230(iParam2, *uParam0);
		func_715(*uParam1, *uParam0);
		*uParam1 = *uParam0;
	}
	func_716(iParam2);
	switch (uParam1->f_1)
	{
		case 0:
			if (!func_336(iParam2, 1))
			{
				return;
			}
			if (func_593(iParam2))
			{
				if (!func_714(iParam2))
				{
					func_717(iParam2);
				}
				if (func_336(iParam2, 16))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
				}
				bVar3 = MISC::IS_BIT_SET(Local_62[iVar1 /*23*/].f_20, iParam2);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (func_718(iParam2, iVar2, 16))
					{
						func_719(iParam2, iVar2, 1);
					}
					bVar4 = (func_718(iParam2, iVar2, 1) || bVar3);
					bVar5 = func_718(iParam2, iVar2, 8);
					bVar6 = (bVar4 || bVar5);
					if (!bVar6)
					{
						if (func_718(iParam2, iVar2, 4))
						{
							if (func_720() < Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/].f_7)
							{
								bVar6 = true;
							}
						}
					}
					if (bVar5)
					{
						func_595(iParam2, iVar2, 8);
					}
					if (!func_582(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/]))
					{
					}
					else if (func_721(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
					{
						if (bVar6)
						{
							func_597(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
						}
						else
						{
							if (!func_228(&iVar1))
							{
							}
							else
							{
								if (func_722(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/], 1))
								{
									if (!func_723(iParam2, iVar2, func_229(iParam2)))
									{
										Jump @583; //curOff = 513
									}
									else
									{
										MISC::SET_BIT(&(Local_62[iVar1 /*23*/].f_20), iParam2);
										func_124(&(Local_62[iVar1 /*23*/].f_20.f_1), iParam2, iVar2);
									}
								}
								Jump @583; //curOff = 551
								if (!bVar6)
								{
									func_597(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/], 1, 1, 1);
								}
							}
							iVar2++;
							Jump @611; //curOff = 592
							if (func_714(iParam2))
							{
								func_338(iParam2, 0);
							}
							Jump @924; //curOff = 611
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_582(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_721(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_597(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (!MISC::IS_BIT_SET(Local_62[iVar1 /*23*/].f_20.f_2, iParam2))
							{
								func_724(iParam2, func_623(Local_13.f_44.f_4, iParam2));
								MISC::SET_BIT(&(Local_62[iVar1 /*23*/].f_20.f_2), iParam2);
							}
							Jump @924; //curOff = 760
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_582(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_721(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_597(Local_799.f_266[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (MISC::IS_BIT_SET(Local_62[iVar1 /*23*/].f_20.f_2, iParam2))
							{
								MISC::CLEAR_BIT(&(Local_62[iVar1 /*23*/].f_20.f_2), iParam2);
								MISC::CLEAR_BIT(&(Local_62[iVar1 /*23*/].f_20), iParam2);
								func_124(&(Local_62[iVar1 /*23*/].f_20.f_1), iParam2, 3);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_525()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_526(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_725(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_527()
{
	bool bVar0;
	int iVar1;

	bVar0 = func_193(0, PLAYER::PLAYER_ID());
	if (!func_300() && !bVar0)
	{
		return 0;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	if (!func_415(0) || func_416(0, 1))
	{
		return 0;
	}
	if (PED::IS_PED_FLEEING(func_287(0)))
	{
		return 0;
	}
	if (!func_531(0, 50f, iVar1, 0))
	{
		return 0;
	}
	if ((func_192(8, iVar1) || func_192(16384, iVar1)) || (bVar0 && func_418(32, 0)))
	{
		return 2;
	}
	if ((func_418(8, 0) || func_418(16384, 0)) || func_510(0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_528(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(Local_799.f_33.f_7[iParam0 /*11*/], true, false);
}

void func_529(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;

	iVar0 = func_287(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || (ENTITY::IS_ENTITY_DEAD(iVar0) && iParam10 == 1))
	{
		func_177(iParam0);
		return;
	}
	if (!func_726(iParam0))
	{
		if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4) || (bParam9 && func_727(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4))
		{
			func_728(iParam0, iParam5, iParam6, iParam7, sParam8);
		}
	}
	else if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4) || (bParam9 && func_727(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4))
	{
		func_177(iParam0);
	}
}

void func_530(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = func_729(iParam0, iParam1);
	if (iVar0 == 2)
	{
		return;
	}
	if (!ENTITY::HAS_ANIM_EVENT_FIRED(func_287(0), iVar0))
	{
		return;
	}
	func_730(func_122(), iParam1, 0, iParam2, iParam4, 0, 0);
	MISC::SET_BIT(&(Local_799.f_19.f_8), iParam1);
}

bool func_531(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_348(iParam2, 0))
	{
		if (!func_228(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_62[iParam2 /*23*/].f_6.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_287(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_731(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_62[iParam2 /*23*/].f_6.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

bool func_532()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!func_732(&uVar2))
	{
		return uVar2;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1291734.f_11.f_561[iVar0]))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 < 0)
	{
		return false;
	}
	iVar3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (!SCRIPTS::IS_THREAD_ACTIVE(iVar3, false) || SCRIPTS::_0x30BED53646C86D11(iVar3))
	{
		return false;
	}
	Global_1291734.f_11.f_560++;
	Global_1291734.f_11.f_561[iVar1] = iVar3;
	return true;
}

bool func_533(int iParam0)
{
	int iVar0;

	if (!func_415(iParam0))
	{
		return false;
	}
	if (func_416(iParam0, 1))
	{
		iVar0 = func_287(iParam0);
		return PED::GET_PED_CONFIG_FLAG(iVar0, 11, true);
	}
	return false;
}

int func_534(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_535(int iParam0)
{
	if (!func_415(iParam0))
	{
		return false;
	}
	return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_799.f_33.f_7[iParam0 /*11*/]);
}

bool func_536(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_733(iParam0, bParam1, 1) };
	return func_734(iParam0, &Var0, 1, 0, bParam1, -1, 0);
}

void func_537(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	func_268(&(Local_62[iVar0 /*23*/].f_1), iParam0);
}

bool func_538(int iParam0, int iParam1, var uParam2)
{
	if (func_418(iParam1, 1))
	{
		return false;
	}
	if (!func_300())
	{
		return false;
	}
	*uParam2 = func_291(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam2))
	{
		return false;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*uParam2, -1))
	{
		return false;
	}
	if (ENTITY::_0x0B7CB1300CBFE19C(*uParam2, 1))
	{
		return false;
	}
	return true;
}

void func_539()
{
	int iVar0;
	int iVar1;

	if (func_296(0) && func_296(1))
	{
		if (func_297(0))
		{
			func_546(0, 0);
		}
		if (func_297(1))
		{
			iVar0 = func_291(0);
			iVar1 = func_291(1);
			ENTITY::SET_ENTITY_COORDS(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iVar1, ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2, true);
			ENTITY::SET_ENTITY_VELOCITY(iVar1, ENTITY::GET_ENTITY_VELOCITY(iVar0, -1));
			func_546(1, 1);
			ENTITY::SET_ENTITY_ALPHA(iVar1, 255, false);
		}
	}
}

int func_540()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (func_735(iVar0, 1))
	{
		return 1;
	}
	if (func_736())
	{
		return 1;
	}
	if (func_737(255))
	{
		return 1;
	}
	return 0;
}

bool func_541()
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return false;
	}
	if (func_192(2048, iVar0))
	{
		return true;
	}
	if (func_192(4, iVar0))
	{
		return true;
	}
	if (func_192(4096, iVar0))
	{
		return true;
	}
	if (func_192(8, iVar0))
	{
		return true;
	}
	if (func_499(0, iVar0))
	{
		return true;
	}
	if (Local_62[iVar0 /*23*/].f_1.f_3 > 0)
	{
		return true;
	}
	return false;
}

void func_542()
{
	if (func_192(536870912, -1))
	{
		return;
	}
	func_454(536870912);
	func_547();
	func_738();
	func_739(16, Local_799.f_4);
}

bool func_543()
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return false;
	}
	if (func_192(4, iVar0))
	{
		return true;
	}
	if (func_192(4096, iVar0))
	{
		return true;
	}
	if (func_192(8, iVar0))
	{
		return true;
	}
	return false;
}

void func_544()
{
	if (func_191(4))
	{
		return;
	}
	func_298(4);
	func_740(1);
}

bool func_545()
{
	int iVar0;

	iVar0 = func_741(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
		{
			if (ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0) == func_291(0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_546(int iParam0, bool bParam1)
{
	func_742(0, iParam0, bParam1);
}

void func_547()
{
	int iVar0;

	if (!func_136(32, 255))
	{
		func_743(Local_799.f_1, Local_799.f_3);
		if (!func_136(1024, 255))
		{
			func_744(Local_799.f_1);
			func_153(1024);
		}
		iVar0 = func_343(Local_799.f_1, Local_799.f_2);
		func_745(iVar0);
		func_746(iVar0);
		func_151(2);
		func_747(Local_799.f_9);
		func_748(Local_799.f_1);
		func_749(Local_799.f_1, Local_799.f_2, Local_799.f_3);
		func_153(32);
	}
}

bool func_548()
{
	return Local_799.f_234.f_4;
}

void func_549()
{
	if (func_423(8))
	{
		if (!func_423(16))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_287(0)))
			{
				if (!func_418(1024, 0))
				{
					if (!func_750(0))
					{
						func_571(0, -796779660, -1);
						func_635(5000, 0, 51, 0);
						func_454(1024);
					}
				}
			}
		}
		else if (func_192(1024, -1))
		{
			if (!func_750(0))
			{
				func_537(1024);
			}
		}
	}
}

int func_550()
{
	return func_752(0, 93137, 35f, 1, 0);
}

bool func_551(int iParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iParam0))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
		{
			return false;
		}
		if (bParam2)
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
			{
				return false;
			}
		}
		return true;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		}
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		if (bParam2)
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_552()
{
	struct<15> Var0;

	Var0 = { func_753(-515553126) };
	func_754(&Var0);
}

void func_553(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID());
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return;
	}
	func_244(&(Local_62[iVar0 /*23*/].f_1.f_1), iParam0);
}

bool func_554()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = func_287(0);
	if (func_735(iVar0, 1))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		return true;
	}
	if (!func_531(0, 3f, 255, 0))
	{
		return true;
	}
	if (func_503(iVar1, iVar0, 1060437492 /* Float: 0.707f */) != 0)
	{
		return true;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iVar1, iVar0, 17))
	{
		return true;
	}
	if (!func_432())
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, 1298652404))
		{
			return true;
		}
	}
	return false;
}

void func_555(int iParam0, int iParam1, bool bParam2)
{
	func_594(iParam0, iParam1, 8);
	if (bParam2 && func_593(iParam0))
	{
		func_597(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
	}
}

bool func_556()
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_3))
	{
		return false;
	}
	if (func_428(Local_13.f_7.f_3))
	{
		return false;
	}
	return true;
}

bool func_557(int iParam0)
{
	return Local_13.f_44[iParam0 /*3*/].f_2 > 0;
}

void func_558()
{
	int iVar0;
	bool bVar1;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar1 = false;
	switch (Local_13.f_7.f_10)
	{
		case 0:
			if (func_755(&bVar1))
			{
				if (bVar1)
				{
					if (!func_627(2, -1))
					{
						func_553(2);
					}
				}
				else if (func_627(2, -1))
				{
					func_756(2);
				}
				if (func_757())
				{
					if (!func_192(134217728, -1))
					{
						func_454(134217728);
					}
				}
				else if (func_192(134217728, -1))
				{
					func_537(134217728);
				}
			}
			else
			{
				if (func_192(67108864, -1))
				{
					func_537(67108864);
				}
				if (func_192(134217728, -1))
				{
					func_537(134217728);
				}
				if (func_627(2, -1))
				{
					func_756(2);
				}
			}
			break;
		case 1:
			if (!func_418(268435456, 0))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_799.f_19.f_3))
				{
					if (func_758(Local_13.f_7.f_3))
					{
						func_454(268435456);
					}
				}
			}
			else if (!func_192(268435456, -1))
			{
				func_454(268435456);
			}
			break;
		case 2:
			if (func_432())
			{
				if (func_192(268435456, -1))
				{
					func_537(268435456);
					if (func_192(134217728, -1))
					{
						Local_62[iVar0 /*23*/].f_1.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						if (!func_627(2, -1))
						{
							Local_62[iVar0 /*23*/].f_1.f_2++;
						}
					}
				}
			}
			break;
		case 3:
			if (func_192(67108864, -1))
			{
				func_537(67108864);
			}
			if (func_192(134217728, -1))
			{
				func_537(134217728);
			}
			if (func_627(2, -1))
			{
				func_756(2);
			}
			break;
	}
}

void func_559(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (func_189(*uParam1, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		return;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(uParam0->f_1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar1, iVar0))
	{
		return;
	}
	bVar2 = false;
	if (!func_551(iVar0, sParam4, 0))
	{
	}
	else
	{
		bVar2 = true;
	}
	bVar3 = func_189(iParam5, 64);
	if (*uParam0 != PLAYER::PLAYER_ID())
	{
		if (!bVar3)
		{
		}
		else if (bVar2)
		{
			if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
			{
				return;
			}
			sVar4 = func_759(PED::IS_PED_MALE(iVar1), sParam2, sParam3);
			if (!ANIMSCENE::_0x337F1CC8EE895601(iVar0, sVar4))
			{
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, sVar4, iVar1, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, sParam4, true);
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iVar0);
				}
			}
		}
	}
	else if (func_563(iVar1))
	{
		if (func_189(*uParam1, 1))
		{
			TASK::CLEAR_PED_TASKS(iVar1, true, false);
		}
		func_244(uParam1, 2);
	}
	else
	{
		if (!bVar3)
		{
			NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar0);
		}
		if (bVar2)
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
			{
				if (func_189(*uParam1, 1))
				{
					sVar5 = func_759(PED::IS_PED_MALE(iVar1), sParam2, sParam3);
					if (!ANIMSCENE::_0x337F1CC8EE895601(iVar0, sVar5))
					{
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, sVar5, iVar1, 0);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, sParam4, true);
						if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false))
						{
							ANIMSCENE::START_ANIM_SCENE(iVar0);
						}
					}
				}
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_IGNITE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		func_562(250);
		if (func_189(iParam5, 4) && (func_534(iVar1, 0, 1, 0) != joaat("WEAPON_UNARMED") || func_534(iVar1, 1, 1, 0) != joaat("WEAPON_UNARMED")))
		{
			if (func_760(iVar1, 716706914, 0, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(iVar1, 1, 0, 0, 0);
			}
		}
		else if (func_189(iParam5, 1) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iVar1, true))
		{
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iVar1, false))
			{
				if (func_760(iVar1, 501393341, 0, 0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
				}
			}
		}
		else if (func_189(iParam5, 2) && PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				if (func_760(iVar1, -828834893, 0, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iVar1, 0, 0);
				}
			}
		}
		else if (func_189(iParam5, 8) && PED::GET_PED_STEALTH_MOVEMENT(iVar1))
		{
			PED::SET_PED_STEALTH_MOVEMENT(iVar1, 0, 0, 0);
		}
		else if (func_189(iParam5, 16) && PED::_GET_PED_CROUCH_MOVEMENT(iVar1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iVar1, false, 0, false);
		}
		else if (func_189(iParam5, 32) && PED::_IS_PED_CARRYING(iVar1))
		{
			if (func_760(iVar1, -208384378, 0, 0))
			{
				iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar1);
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar1, iVar6, 0f, 0f, 0f, 1f, 1);
			}
		}
		else if (bVar2)
		{
			iVar7 = 1369124074;
			if (!bVar3)
			{
				iVar7 = 242628503;
			}
			if (func_760(iVar1, iVar7, 0, 0))
			{
				if (func_189(*uParam1, 1))
				{
					if (!func_189(*uParam1, 4))
					{
						func_244(uParam1, 2);
					}
					else if (!bVar3)
					{
						func_244(uParam1, 2);
					}
				}
				else
				{
					if (bVar3)
					{
						iParam6 |= 8;
					}
					if (!bVar3)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(func_761(bVar3, iVar1, 0), iVar0, func_759(PED::IS_PED_MALE(iVar1), sParam2, sParam3), sParam4, 1f, bVar3, iParam6, iParam8, -1082130432 /* Float: -1f */);
					if (!bVar3)
					{
						TASK::TASK_STAND_STILL(0, iParam7);
						func_762(iVar1, &iVar8, 0, 0, 1, 1);
					}
					func_244(uParam1, 1);
				}
			}
			else if (!func_189(*uParam1, 4))
			{
				func_244(uParam1, 4);
			}
		}
	}
}

bool func_560(var uParam0)
{
	return func_189(*uParam0, 2);
}

bool func_561()
{
	if (!func_423(64))
	{
		return false;
	}
	return true;
}

void func_562(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

bool func_563(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iParam0) || PED::IS_PED_RUNNING_RAGDOLL_TASK(iParam0))
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		return true;
	}
	if (PED::_IS_PED_LASSOED(iParam0))
	{
		return true;
	}
	if (TASK::_0xEC7E480FF8BD0BED(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return true;
	}
	if (func_763())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar1)
		{
			case joaat("EVENT_KNOCKEDOUT"):
			case joaat("EVENT_DEATH"):
			case joaat("EVENT_DAMAGE"):
			case joaat("EVENT_LASSO_HIT"):
			case joaat("EVENT_ENTITY_DAMAGED"):
			case joaat("EVENT_BOLAS_HIT"):
			case 2145012826:
				if (!SCRIPTS::GET_EVENT_DATA(0, iVar0, &iVar2, 9))
				{
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
				}
				else
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2) == iParam0)
					{
						return true;
					}
				}
		}
		iVar0++;
	}
	return false;
}

void func_564()
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_287(0)))
	{
		return;
	}
	if (func_764(-201751642, -1534042890))
	{
		func_571(8, -796779660, -1);
		func_572(7000, 0, 51, 0);
	}
	if (func_764(-1514322287, -949284496))
	{
		func_571(9, -796779660, -1);
		func_572(7000, 0, 51, 0);
	}
	if (func_764(835310037, -1009643791))
	{
		func_571(10, -796779660, -1);
		func_572(7000, 0, 51, 0);
	}
}

void func_565()
{
	int iVar0;
	struct<15> Var1;

	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (GANG::_0xD6F6ACF4392187FB(iVar0) && GANG::_0x0F99F6436528A089(iVar0))
	{
		Var1 = { func_753(-1834105103) };
		func_765(&Var1, 0);
	}
	else
	{
		if (!func_638(joaat("REWARD_DARK_ALLEY_HOBO_01"), 0))
		{
		}
		func_454(4);
	}
}

void func_566(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_28() == 0)
	{
		iVar0 = func_720();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_766(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_767(iParam0);
		if (bParam3)
		{
			func_768(iParam0, sParam1, iParam2);
		}
	}
}

void func_567()
{
	struct<2> Var0;

	if (func_69(128))
	{
		return;
	}
	Var0 = { func_464(func_769(), joaat("WINS")) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
	func_151(128);
}

void func_568()
{
	if (func_69(512))
	{
		return;
	}
	func_770(func_653(joaat("WINS"), joaat("RE_RESCUES")), 1);
	func_151(512);
}

void func_569()
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_287(0)))
	{
		return;
	}
	if (func_764(-201751642, -1534042890))
	{
		func_571(8, -796779660, -1);
		func_572(7000, 0, 51, 0);
	}
	if (func_764(-880545320, -1992440724))
	{
		func_571(12, -796779660, -1);
		func_572(7000, 0, 51, 0);
	}
	if (func_764(-1514322287, -949284496))
	{
		func_571(9, -796779660, -1);
		func_572(7000, 0, 51, 0);
	}
	if (func_764(835310037, -1009643791))
	{
		func_571(10, -796779660, -1);
		func_572(7000, 0, 51, 0);
	}
}

int func_570(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_771(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_571(int iParam0, int iParam1, int iParam2)
{
	struct<15> Var0;

	Var0 = { func_753(377515857) };
	Var0.f_11 = iParam0;
	Var0.f_12 = func_772(iParam1, 1);
	Var0.f_13 = iParam2;
	func_754(&Var0);
}

void func_572(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_773();
	func_636(iVar0, iParam0, iParam1, iParam2, iParam3);
}

void func_573(int iParam0)
{
	struct<15> Var0;

	Var0 = { func_753(-1865486807) };
	Var0.f_10 = iParam0;
	func_754(&Var0);
}

bool func_574(int iParam0, char* sParam1, char* sParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return true;
	}
	bVar0 = NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iParam0);
	bVar1 = false;
	iVar2 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam1, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		bVar1 = true;
		if (bVar0)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0, sParam1, iVar2);
		}
	}
	iVar2 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam2, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		bVar1 = true;
		if (bVar0)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0, sParam2, iVar2);
		}
	}
	return !bVar1;
}

void func_575()
{
	func_756(1024);
	func_756(8);
	func_756(32);
	func_537(2097152);
	func_774(&(Local_799.f_19.f_13));
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_425(4);
		func_425(2);
		func_425(64);
	}
}

bool func_576()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_577()
{
	return func_752(0, 95451, 35f, 1, 0);
}

int func_578()
{
	return func_752(0, 95485, 35f, 1, 0);
}

int func_579()
{
	return func_752(0, 95530, 1000f, 1, 0);
}

int func_580()
{
	return func_752(0, 95575, 35f, 1, 0);
}

int func_581()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_415(0))
	{
		return 1;
	}
	if (func_416(0, 1))
	{
		return 1;
	}
	if (!func_535(0))
	{
		return 0;
	}
	iVar0 = func_287(0);
	iVar1 = 255;
	bVar2 = func_779(iVar0, 1435919172);
	if (func_418(32, 0))
	{
		if (!func_418(64, 0))
		{
			if (PED::IS_PED_FLEEING(iVar0))
			{
				func_454(64);
				return 1;
			}
		}
	}
	if (!func_780(&iVar1, !bVar2))
	{
		if (!func_418(64, 0) || !func_779(iVar0, 1435919172))
		{
			iVar1 = func_580();
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar1), 3, 8192, -1f, -1, 0);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, func_292(), 3, 8192, -1f, -1, 0);
			}
			if (!func_418(64, 0))
			{
				func_454(64);
			}
		}
		return 1;
	}
	if (!func_418(32, 0) || !bVar2)
	{
		PED::SET_COMBAT_FLOAT(iVar0, 70, 15f);
		TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar1), 1048576, 0);
		func_454(32);
	}
	return 1;
}

bool func_582(int iParam0)
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

void func_583(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_582(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_781(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_782(iVar0);
	*uParam0 = 0;
}

int func_584(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_783(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_585(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_783(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_586(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_366(&Var1, iParam0))
	{
		iVar0 = ((func_784() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_587(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_588(int iParam0, int iParam1)
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

void func_589(var uParam0)
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
	func_785(uParam0, uParam0->f_1);
}

int func_590(int iParam0)
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

void func_591(var uParam0, int iParam1, int iParam2)
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
		func_205(uParam0, iVar0);
		iVar0++;
	}
}

int func_592(char* sParam0, char* sParam1)
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

bool func_593(int iParam0)
{
	if (Local_799.f_266.f_42 == iParam0)
	{
		return true;
	}
	return false;
}

void func_594(int iParam0, int iParam1, int iParam2)
{
	func_244(&(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_595(int iParam0, int iParam1, int iParam2)
{
	func_268(&(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_596(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_582(iParam0))
	{
		return;
	}
	iVar0 = func_781(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_597(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_582(iParam0))
	{
		return;
	}
	iVar0 = func_781(iParam0);
	if (bParam1)
	{
		func_786(iParam0, 4);
		if (bParam3)
		{
			func_787(iVar0, 1);
		}
		func_788(iVar0, 1);
	}
	else
	{
		func_789(iParam0, 4);
		func_788(iVar0, 0);
	}
}

void func_598(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_2), 16384);
	}
	else
	{
		func_244(&(uParam0->f_2), 16384);
	}
}

void func_599(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_2), 2048);
	}
	else
	{
		func_244(&(uParam0->f_2), 2048);
	}
}

void func_600(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_2), 256);
	}
	else
	{
		func_244(&(uParam0->f_2), 256);
	}
}

void func_601(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 16);
	}
	else
	{
		func_268(uParam0, 67108864);
		func_268(uParam0, 16);
	}
}

void func_602(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_2), 128);
	}
	else
	{
		func_244(&(uParam0->f_2), 128);
	}
}

void func_603(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 256);
	}
	else
	{
		func_268(uParam0, 256);
	}
}

void func_604(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_244(uParam0, 268435456);
	}
	else
	{
		func_268(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_244(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_268(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_244(uParam0, 536870912);
	}
	else
	{
		func_268(uParam0, 536870912);
	}
}

float func_605(var uParam0)
{
	return uParam0->f_26;
}

void func_606(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_607(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 1);
	}
	else
	{
		func_268(uParam0, 1);
	}
}

void func_608(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 512);
	}
	else
	{
		func_268(uParam0, 512);
	}
}

void func_609(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 2);
	}
	else
	{
		func_268(uParam0, 2);
	}
}

void func_610(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 8);
	}
	else
	{
		func_268(uParam0, 8);
	}
}

void func_611(int iParam0, int iParam1)
{
	func_244(&(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1), 16);
}

int func_612(int iParam0)
{
	return Local_799.f_33.f_7[iParam0 /*11*/].f_4;
}

float func_613(int iParam0)
{
	return Local_799.f_33.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_614(int iParam0)
{
	return Local_799.f_33.f_7[iParam0 /*11*/].f_6;
}

bool func_615(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_620(iParam1))
	{
		return false;
	}
	iVar0 = func_790(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_616(int iParam0, bool bParam1)
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

bool func_617(int iParam0)
{
	return func_178(iParam0, 32);
}

bool func_618(int iParam0)
{
	return func_178(iParam0, 64);
}

bool func_619(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_620(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_621(int iParam0)
{
	return MISC::IS_BIT_SET(Local_799.f_266.f_41, iParam0);
}

bool func_622(int iParam0)
{
	return MISC::IS_BIT_SET(Local_799.f_266.f_40, iParam0);
}

int func_623(int iParam0, int iParam1)
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

int func_624(int iParam0, int iParam1, int iParam2)
{
	switch (func_370(iParam2))
	{
		case 1:
			return 2;
		default:
			break;
	}
	return iParam2;
}

bool func_625(int iParam0)
{
	return func_136(8, iParam0);
}

int func_626(int iParam0, int iParam1)
{
	if (func_557(iParam0))
	{
		return 0;
	}
	if (Local_13.f_44[iParam0 /*3*/] == iParam1)
	{
		return 1;
	}
	Local_13.f_44[iParam0 /*3*/] = iParam1;
	return 1;
}

bool func_627(int iParam0, int iParam1)
{
	if (iParam1 >= 32)
	{
		return false;
	}
	if (iParam1 < 0)
	{
		iParam1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID());
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return func_189(Local_62[iParam1 /*23*/].f_1.f_1, iParam0);
}

int func_628(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_629()
{
	return func_752(0, 96653, 15f, 1, 0);
}

bool func_630(int iParam0)
{
	return func_189(Local_799.f_19.f_9, iParam0);
}

bool func_631(int iParam0)
{
	return func_792(iParam0);
}

bool func_632(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_7))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_7))
	{
		return true;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_7);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	if ((((ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "ACTION_RAT", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "EXIT_RAT", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "ACTION_REWARD", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "EXIT_REWARD", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_799.f_19.f_3, "DONATE_COIN", 1))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_799.f_19.f_3) < func_793(iParam0))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_799.f_19.f_3))
			{
				return true;
			}
		}
	}
	if (func_192(2097152, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_7)))
	{
		return true;
	}
	return false;
}

bool func_633(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_794(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), uParam1))
	{
		return false;
	}
	return true;
}

bool func_634(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0->f_11;
	iVar1 = func_795(iParam0->f_12, 1);
	if (iVar0 == 0)
	{
		if (!func_422(1, 0))
		{
			if (func_531(0, 50f, 255, 0))
			{
				func_796(249295937, func_287(0), 1);
			}
		}
	}
	return func_730(func_122(), iVar0, 0, iVar1, iParam0->f_13, 0, 0);
}

void func_635(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_797(0, 0, 1, 0);
	func_636(iVar0, iParam0, iParam1, iParam2, iParam3);
}

int func_636(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = func_287(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return 0;
	}
	TASK::TASK_LOOK_AT_ENTITY(iVar1, iVar0, iParam1, iParam2, iParam3, iParam4);
	return 1;
}

void func_637(int iParam0, var uParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(func_287(iParam0), uParam1);
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_287(iParam0), uParam1);
}

int func_638(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_798(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_799(iParam0, &Var4, &uVar0, iParam1, 0);
}

bool func_639(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			return false;
		}
	}
	return func_800(iParam0, PLAYER::GET_PLAYER_PED(iParam1), bParam2);
}

bool func_640()
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

int func_641(int iParam0, int iParam1)
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

void func_642(var uParam0, var uParam1)
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

void func_643(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_801(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_644(int iParam0)
{
	return Local_799.f_33.f_7[iParam0 /*11*/].f_10;
}

void func_645(int iParam0, char* sParam1, bool bParam2)
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

void func_646(int iParam0)
{
}

float func_647()
{
	switch (func_802())
	{
		case 0:
			return 94.513f;
		case 1:
			return -65f;
		case 2:
			return -90f;
		case 3:
			return -111.148f;
		case 4:
			return 0.8f;
		case 5:
			return 100.187f;
		case 6:
			return -172.261f;
		case 7:
			return -83.61f;
		case 8:
			return 56.512f;
		case 9:
			return 271.129f;
		case 10:
			return 101.292f;
		case 11:
			return 163.562f;
		case 12:
			return 87.7f;
		case 13:
			return 7.352f;
		case 14:
			return 87.504f;
		default:
			break;
	}
	return 0f;
}

float func_648(int iParam0, int iParam1, bool bParam2)
{
	if (!func_348(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_62[iParam1 /*23*/].f_6.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_62[iParam1 /*23*/].f_6.f_2[iParam0];
}

float func_649(int iParam0)
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
	fVar0 = func_803(vVar2.z, fVar0);
	fVar1 = func_804(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.z, fVar0);
	fVar1 = func_804(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.z, fVar0);
	fVar1 = func_804(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.z, fVar0);
	fVar1 = func_804(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.z, fVar0);
	fVar1 = func_804(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

float func_650(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_651(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9)
{
	uParam0->f_3 = { vParam1 };
	uParam0->f_10 = iParam5;
	uParam0->f_11 = iParam6;
	uParam0->f_12 = iParam7;
	uParam0->f_9 = iParam4;
	if (bParam8)
	{
		func_805(uParam0, 1f, 1f, 1f);
	}
}

int func_652(int iParam0)
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

struct<2> func_653(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_654(int iParam0)
{
	if (!func_461(func_460(iParam0), &(Local_799.f_137.f_76[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_799.f_137.f_90), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_799.f_137.f_90), iParam0);
}

int func_655(int iParam0, int iParam1)
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

void func_656()
{
	if (Local_799.f_266.f_42 < 0)
	{
		return;
	}
	func_338(func_183(Local_799.f_266.f_42), 0);
	Local_799.f_266.f_42 = -1;
	func_806(func_183(Local_799.f_266.f_42));
}

bool func_657(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_337(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (iParam1 == iVar0)
	{
		if (Local_799.f_266.f_42 != iParam0)
		{
			func_656();
			func_717(iParam0);
			Local_799.f_266.f_42 = iParam0;
			func_807(iParam0);
		}
		return true;
	}
	return false;
}

int func_658(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_385(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_386(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_386(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_386(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_659(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_385(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_386(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_386(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_386(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_660(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_487(&(Local_62[iParam1 /*23*/].f_10), 1, iParam0))
	{
		if (Local_62[iParam1 /*23*/].f_10.f_7[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_39.f_1[iParam0]))
		{
			if (Local_13.f_39.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_13.f_39.f_3[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_62[iParam1 /*23*/].f_10.f_7[iParam0], Local_13.f_39.f_3[iParam0]))
		{
			Local_13.f_39.f_1[iParam0] = iVar0;
			Local_13.f_39.f_3[iParam0] = Local_62[iParam1 /*23*/].f_10.f_7[iParam0];
		}
	}
}

void func_661(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_13.f_44[iVar0 /*3*/].f_2 != 0)
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_44[iVar0 /*3*/].f_1))
		{
		}
		else if (!MISC::IS_BIT_SET(Local_62[iParam0 /*23*/].f_20, iVar0))
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
				Local_13.f_44[iVar0 /*3*/].f_1 = iVar1;
				func_124(&(Local_13.f_44.f_4), iVar0, func_623(Local_62[iParam0 /*23*/].f_20.f_1, iVar0));
			}
		}
		iVar0++;
	}
}

void func_662(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_713() - fParam1);
	func_808(uParam0, 1);
	func_809(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_663(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_664(var uParam0)
{
	if (!func_475(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_810(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_713() - uParam0->f_1);
}

void func_665(int iParam0)
{
	int iVar0;

	if (!func_228(&iVar0))
	{
		return;
	}
	func_489(&(Local_62[iVar0 /*23*/].f_10), 3, iParam0);
}

void func_666(int iParam0)
{
	if (func_811(iParam0) == 0)
	{
		func_454(512);
		if (func_534(PLAYER::PLAYER_PED_ID(), 0, 1, 0) != joaat("WEAPON_UNARMED"))
		{
			func_454(32768);
		}
		if (!func_191(64))
		{
			if (func_191(16))
			{
				func_298(32);
			}
			func_298(64);
		}
	}
}

bool func_667(int iParam0)
{
	return func_487(&(Local_799.f_137.f_72), 7, iParam0);
}

bool func_668(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_670(uParam1, 0, iVar0);
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
				if (func_683(uParam1, 4000))
				{
					if ((func_684(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_685(uParam1, iParam0)) && func_686(uParam1, iParam0))
					{
						func_688();
						*uParam2 = 2;
						func_672(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_683(uParam1, 4000))
				{
					if ((func_684(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_685(uParam1, iParam0)) && func_686(uParam1, iParam0))
					{
						func_688();
						*uParam2 = 2;
						func_672(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258.f_35 != 0)
			{
				if (Global_1940258.f_34 == 0)
				{
					if (func_687(iParam0, Global_1940258.f_35))
					{
						func_688();
						*uParam2 = 2;
						func_672(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_691())
				{
					if (func_687(iParam0, Global_1940258.f_36))
					{
						func_688();
						*uParam2 = 2;
						func_672(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_677(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_678(Global_34, iParam0, uParam1))
					{
						func_688();
						*uParam2 = 4;
						func_672(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_679(Global_34, iParam0, uParam1))
					{
						func_688();
						*uParam2 = 256;
						func_672(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_812(iParam0, uParam1))
			{
				func_688();
				*uParam2 = 131072;
				func_672(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_813(iParam0, uParam1))
			{
				func_688();
				*uParam2 = 262144;
				func_672(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_669(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_670(var uParam0, bool bParam1, int iParam2)
{
	func_814(iParam2);
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
		uParam0->f_14 = func_815(0);
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
							func_244(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_816(1, 1))
						{
							func_244(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_816(1, 1) || *uParam0 & 8192 != 0))
				{
					func_268(uParam0, 33554432);
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
			if (func_817(uParam0))
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
	func_818(uParam0);
}

bool func_671(int iParam0, var uParam1)
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
			if (!func_819(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_820(iParam0, iVar2) <= func_821(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_672(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_822(iParam2, 1, 1, 1, 0))
	{
		func_244(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_823(uParam1, 1);
	func_824();
}

bool func_673(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_825(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_826(uParam1);
			if (func_827(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_828(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_823(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_829(uParam1))
						{
							func_823(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_674(int iParam0, int iParam1, var uParam2)
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
	if (func_830(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_826(uParam2);
		if (func_827(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_828(uParam2)
				{
					func_823(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_675(int iParam0, var uParam1)
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
	if (func_819(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_828(uParam1)
		{
			fVar3 = func_826(uParam1);
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

int func_676(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_831(bParam1, bParam2, bParam3);
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

bool func_677(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_690();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_678(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_832(uParam2);
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
			if (func_686(uParam2, iParam1))
			{
				func_823(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_679(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_707(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_686(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_823(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_680(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_833(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_823(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_30))
				{
					func_823(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar4, 0, 0);
					if (func_834(iParam1, vVar0, vVar4))
					{
						func_823(uParam2, 1);
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
					func_823(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar7, 0, 0);
					if (func_834(iParam1, vVar0, vVar7))
					{
						func_823(uParam2, 1);
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

bool func_681(int iParam0, var uParam1)
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
		if (!func_819(iParam0, uParam1, Global_1940258.f_28[iVar0]) || iParam0 == Global_1940258.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_835(Global_1940258.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false), vVar9);
			if (func_836(Global_1940258.f_28[iVar0]))
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
			if (func_837(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_838(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_839(uParam1, iParam0, fVar1, iVar0))
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

bool func_682(int iParam0, var uParam1)
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

bool func_683(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_690();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_684(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_840(iVar0, &iVar2))
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
	if (func_841(iVar0, iParam0))
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

int func_685(var uParam0, int iParam1)
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

bool func_686(var uParam0, int iParam1)
{
	if (func_842(uParam0))
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

bool func_687(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_843(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_688()
{
}

bool func_689(var uParam0, int iParam1)
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
		if (func_844(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_690();
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
						if (func_845(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_690();
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

int func_690()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_691()
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
	if ((func_690() - Global_1940258.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_692(var uParam0, int iParam1)
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
	fVar0 = func_821(uParam0);
	if (uParam0->f_13 > func_605(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_846(iParam1);
	iVar1 = func_847(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_693(var uParam0, int iParam1)
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
	if (func_503(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_727(vVar1, vVar4);
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

int func_694(int iParam0, int iParam1, var uParam2)
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
	return func_848(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_695(int iParam0, var uParam1)
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
		if (func_849(iParam0, uParam1, 1))
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
	if (!func_498(iParam0))
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
			if (func_850(uParam1))
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
					if (!func_851(uParam1, iParam0))
					{
						if (func_845(iVar4, Global_35, 1) < 7f)
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

bool func_696(int iParam0, var uParam1)
{
	if (!func_852(0))
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

bool func_697(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_690();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_698(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_699(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_690();
	}
	else if (func_690() - uParam1->f_5) > func_853(uParam1)
	{
		return func_854(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_700(var uParam0, int iParam1)
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

int func_701(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_855(vVar3, vVar6);
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
	if (func_856(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_702(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_189(Local_799.f_137.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_799.f_137.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_799.f_137.f_65), iParam0);
	if (!bParam3 && Local_62[iParam2 /*23*/].f_10.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_62[iParam2 /*23*/].f_10.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
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
	iVar0 = func_534(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::_0x705BE297EEBDB95D(iVar0) || func_857(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_0x79B1A6E780266DB0(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_703(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_704(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_705(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_858(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_859(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_649(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_410(func_860(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_861(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_861(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_650((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_650((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_650(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_650((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_706(int iParam0, var uParam1)
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

int func_707(var uParam0)
{
	return uParam0->f_23;
}

bool func_708(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return true;
		default:
			break;
	}
	return false;
}

bool func_709(int iParam0)
{
	int iVar0;

	if (iParam0 != 8)
	{
		return true;
	}
	iVar0 = func_287(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_531(0, 5f, 255, 0))
		{
			return func_862(0, NETWORK::PARTICIPANT_ID_TO_INT());
		}
		else if (!func_531(0, 15f, 255, 0))
		{
			return false;
		}
		else if (func_862(0, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			return func_503(iVar0, PLAYER::PLAYER_PED_ID(), 0.85f) == 0;
		}
	}
	return false;
}

float func_710(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_711(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_712(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_711(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_713() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_713()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_714(int iParam0)
{
	if (func_336(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_715(var uParam0, var uParam1)
{
}

void func_716(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_337(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_863(iParam0))
	{
		func_184(iParam0, 0);
		return;
	}
	else if (func_336(iParam0, 8))
	{
		func_184(iParam0, 0);
	}
	bVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_731(PLAYER::PLAYER_ID())) <= Local_799.f_266[iParam0 /*39*/].f_2;
	if (bVar1 != func_336(iParam0, 1))
	{
		func_184(iParam0, 0);
		if (bVar1)
		{
			if (!MISC::_0x870708A6E147A9AD(iVar0, Local_799.f_266[iParam0 /*39*/].f_3, Local_799.f_266[iParam0 /*39*/].f_2, 0, Local_799.f_266[iParam0 /*39*/].f_4, 0, 0, 0, 0, 3))
			{
			}
			else
			{
				if (func_593(iParam0))
				{
					func_717(iParam0);
				}
				if (!MISC::_IS_STRING_SPACE(Local_799.f_266[iParam0 /*39*/].f_3))
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iVar0, MISC::GET_HASH_KEY(Local_799.f_266[iParam0 /*39*/].f_3));
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
				}
				func_457(iParam0, 1);
			}
		}
	}
}

void func_717(int iParam0)
{
	int iVar0;

	if (func_714(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_719(iParam0, iVar0, 1);
		iVar0++;
	}
	func_457(iParam0, 2);
}

bool func_718(int iParam0, int iParam1, int iParam2)
{
	return func_189(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1, iParam2);
}

void func_719(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		func_583(&(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/]), 1, 1);
	}
	if (MISC::_IS_STRING_SPACE(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 == 0)
	{
	}
	iVar0 = func_337(iParam0);
	iVar1 = func_864(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3, iVar0, Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4, Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5, 0, 0, Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	iVar2 = func_781(iVar1);
	func_865(iVar1, 18, 0, 1);
	func_865(iVar1, 17, 0, 1);
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar2 /*23*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	if (func_718(iParam0, iParam1, 2))
	{
		func_596(iVar1, Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7, 1);
	}
	if (!func_718(iParam0, iParam1, 1))
	{
		if (func_718(iParam0, iParam1, 4))
		{
			if (func_720() < Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7)
			{
				if (func_721(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
				{
					func_597(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
				}
			}
			else if (!func_721(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
			{
				func_597(Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/], 1, 1, 1);
			}
		}
	}
	else
	{
		func_597(iVar1, 0, 1, 1);
	}
	func_595(iParam0, iParam1, 16);
	Local_799.f_266[iParam0 /*39*/].f_6[iParam1 /*8*/] = iVar1;
}

int func_720()
{
	if (func_28() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_721(int iParam0, bool bParam1)
{
	if (bParam1 && !func_582(iParam0))
	{
		return false;
	}
	return !func_866(iParam0, 4);
}

bool func_722(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_582(iParam0))
	{
		return false;
	}
	iVar0 = func_781(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_723(int iParam0, int iParam1, int iParam2)
{
	return true;
}

void func_724(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7.f_7 = func_867(iParam0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_7))
		{
			Local_13.f_7.f_7 = 255;
			return;
		}
		Local_13.f_7.f_6 = iParam1;
		switch (iParam1)
		{
			case 0:
				if (func_868(Local_13.f_7.f_7))
				{
					Local_13.f_7.f_8 = 2;
				}
				else if (func_869(Local_13.f_7.f_7))
				{
					Local_13.f_7.f_8 = 3;
				}
				else
				{
					Local_13.f_7.f_8 = 0;
				}
				break;
			case 1:
				Local_13.f_7.f_8 = 1;
				break;
		}
		func_426(1);
	}
}

bool func_725(int iParam0, var uParam1, var uParam2, bool bParam3)
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

bool func_726(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_799.f_33.f_7[iParam0 /*11*/].f_1);
}

float func_727(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_728(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_177(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_799.f_33.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, Local_799.f_33.f_7[iParam0 /*11*/]);
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
	Local_799.f_33.f_7[iParam0 /*11*/].f_1 = iVar0;
}

int func_729(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			switch (iParam1)
			{
				case 1:
					return 1676405741;
				case 2:
					return -335040700;
				case 3:
					return -1142896989;
				case 4:
					return -2101883506;
				case 5:
					return -1682902257;
				case 6:
					return -168145339;
				case 8:
					return 1834496238;
				case 11:
					return -968032324;
				default:
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 1:
					return 1676405741;
				case 2:
					return 2009822318;
				case 3:
					return -1139386619;
				case 4:
					return 1529335315;
				case 5:
					return -1422641698;
				case 6:
					return -94050732;
				case 8:
					return 1834496238;
				case 11:
					return -968032324;
				default:
					break;
			}
			break;
	}
	return 2;
}

bool func_730(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	char cVar0[64];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	bVar8 = false;
	bVar9 = false;
	if (iParam1 == 18)
	{
		bVar8 = true;
		iVar10 = iParam4;
		if (iVar10 < 0)
		{
			iVar11 = func_241(iParam0);
			if (Local_13.f_7.f_22 < iVar11)
			{
				iVar10 = Local_13.f_7.f_17[Local_13.f_7.f_22];
			}
			else
			{
				iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar11);
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_22++;
				if (Local_13.f_7.f_22 >= iVar11)
				{
					func_123(iParam0);
				}
			}
		}
		iParam4 = 0;
		switch (iParam0)
		{
			case 1:
				switch (iVar10)
				{
					case 0:
						StringCopy(&cVar0, "RELIEVED_REACT", 64);
						iParam4 = 1;
						break;
					case 1:
						StringCopy(&cVar0, "RELIEVED_REACT", 64);
						iParam4 = 2;
						break;
					case 2:
						StringCopy(&cVar0, "DRUNK", 64);
						iParam4 = 1;
						break;
					case 3:
						StringCopy(&cVar0, "DRUNK", 64);
						iParam4 = 2;
						break;
				}
				break;
			case 0:
				switch (iVar10)
				{
					case 0:
						StringCopy(&cVar0, "RELIEVED_REACT", 64);
						iParam4 = 2;
						break;
					case 1:
						StringCopy(&cVar0, "FAREWELL_SALE", 64);
						iParam4 = 2;
						break;
					case 2:
						StringCopy(&cVar0, "GENERIC_THANKS", 64);
						break;
				}
				break;
			case 3:
				switch (iVar10)
				{
					case 0:
						StringCopy(&cVar0, "GLAD_TO_HEAR_THAT", 64);
						iParam4 = 2;
						break;
					case 1:
						StringCopy(&cVar0, "GENERIC_THANKS", 64);
						break;
				}
				break;
			case 2:
				switch (iVar10)
				{
					case 0:
						StringCopy(&cVar0, "GENERIC_CHEER_ON", 64);
						break;
					case 1:
						StringCopy(&cVar0, "GLAD_TO_HEAR_THAT", 64);
						break;
					case 2:
						StringCopy(&cVar0, "GENERIC_THANKS", 64);
						break;
				}
				break;
		}
	}
	else
	{
		if (iParam4 < 0)
		{
			iParam4 = 0;
		}
		switch (iParam0)
		{
			case 1:
				break;
			case 0:
				switch (iParam1)
				{
					case 3:
					case 12:
					case 17:
						bVar9 = true;
						break;
					case 8:
						StringCopy(&cVar0, "RE_ST_NBX_V1_VENDOR_THANKS_SICK_MP", 64);
						bVar8 = true;
						break;
					case 7:
						StringCopy(&cVar0, "INTIMIDATED_AGAIN_GEN", 64);
						iParam4 = 1;
						bVar8 = true;
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 8:
					case 9:
						bVar9 = true;
						break;
					case 16:
						StringCopy(&cVar0, "WHOA", 64);
						iParam4 = 1;
						bVar8 = true;
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 5:
					case 8:
						bVar9 = true;
						break;
				}
				break;
		}
	}
	if (!bVar8)
	{
		if (!bParam6)
		{
			switch (iParam0)
			{
				case 1:
					StringCopy(&cVar0, "RE_DAB_NBX_V2_", 64);
					break;
				case 0:
					StringCopy(&cVar0, "RE_DAB_NBX_V1_", 64);
					break;
				case 3:
					StringCopy(&cVar0, "RE_DAB_BLW_V2_", 64);
					break;
				case 2:
					StringCopy(&cVar0, "RE_DAB_BLW_V1_", 64);
					break;
			}
			StringConCat(&cVar0, func_870(iParam1), 64);
		}
		else
		{
			StringCopy(&cVar0, func_870(iParam1), 64);
		}
		if (bVar9)
		{
			StringConCat(&cVar0, "_MP", 64);
		}
	}
	return func_871(0, &cVar0, iParam2, iParam3, iParam4, iParam5);
}

Vector3 func_731(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_732(var uParam0)
{
	*uParam0 = 0;
	if (Global_1291734.f_11.f_560 >= 8)
	{
		return false;
	}
	if (func_354(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		*uParam0 = 1;
		return false;
	}
	return true;
}

struct<5> func_733(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_872(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_873(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_874(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_875(bParam1) };
			if (bParam2 && func_876(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_877(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_877(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_878(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_879(bParam1) };
			switch (func_880(iParam0))
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
			if (func_881(iParam0, -1823706425))
			{
				Var0 = { func_874(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_881(iParam0, -1483207246))
			{
				Var0 = { func_874(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_874(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_881(iParam0, -1653629781))
			{
				Var0 = { func_874(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_882(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_881(iParam0, -1653629781))
			{
				Var0 = { func_874(1384535894, Var0, 1784584921, bParam1) };
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

int func_734(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_883(&iParam0);
	if (!func_884(iParam0, 0) && !func_886(func_885(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_887(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_888(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_875(0) };
		Var4.f_9 = -1591664384;
		if (!func_877(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_878(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_876(iParam0, 1))
		{
			if (!func_877(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_878(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_889(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_890(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

bool func_735(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_891(iVar0) || func_892(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_736()
{
	return (Global_1915715.f_20637 || Global_1915715.f_22504.f_1);
}

bool func_737(int iParam0)
{
	return func_136(8192, iParam0);
}

void func_738()
{
	if (!func_69(2))
	{
		return;
	}
	func_151(8);
}

void func_739(int iParam0, int iParam1)
{
	if (!func_349(iParam0, iParam1))
	{
		return;
	}
	func_351(iParam1, iParam0);
}

void func_740(bool bParam0)
{
	if (!func_69(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_69(256))
		{
			func_188(Local_799.f_18, 0);
			func_151(256);
		}
	}
	func_151(16);
}

int func_741(int iParam0)
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
	if (PED::_0x4642182A298187D0(iParam0, -1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 2, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 4, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 5, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 10, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_742(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::SET_ENTITY_VISIBLE(Local_799.f_60[iParam0 /*76*/].f_5[iParam1 /*14*/], bParam2);
}

void func_743(int iParam0, int iParam1)
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
	Var31 = { func_464(iParam0, joaat("VARIATIONS_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_126(&Var0, 4) && func_893(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1268861[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*99*/].f_56[iParam0] = iVar33;
}

void func_744(int iParam0)
{
	func_894(iParam0);
}

void func_745(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_133(Global_1272030[iParam0 /*4*/]))
	{
		return;
	}
	func_895(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_134(&(Global_1272030[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_896(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_896(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1296859.f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_896(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_896(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1296859.f_21, true);
	}
}

void func_746(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_589(&Var0);
}

void func_747(struct<2> Param0)
{
	struct<32> Var0;

	if (func_341(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_341(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_341(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_897(Param0, &Var0))
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

void func_748(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_464(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_749(int iParam0, int iParam1, int iParam2)
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

bool func_750(int iParam0)
{
	return MISC::IS_BIT_SET(Local_799.f_33.f_6, iParam0);
}

int func_751(int iParam0, int iParam1)
{
	if (func_862(iParam1, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_752(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_799.f_33.f_7[iParam0 /*11*/]))
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
		else if (Local_62[iVar0 /*23*/].f_6.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_625(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_62[iVar0 /*23*/].f_6.f_2[iParam0] > Local_62[iVar1 /*23*/].f_6.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_62[iVar0 /*23*/].f_6.f_2[iParam0] > fParam2)
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

struct<15> func_753(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_799, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_754(var uParam0)
{
	func_899(uParam0, func_898(4, 117));
}

bool func_755(int iParam0)
{
	int iVar0;

	*iParam0 = 0;
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_792(iVar0))
	{
		return false;
	}
	if (!func_627(2, -1))
	{
		if (func_531(0, 1.25f, 255, 1) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), func_287(0)))
		{
			*iParam0 = 1;
			return true;
		}
	}
	if (Local_62[iVar0 /*23*/].f_1.f_2 >= 4)
	{
		return false;
	}
	if (Local_62[iVar0 /*23*/].f_1.f_4 != 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(Local_62[iVar0 /*23*/].f_1.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 10000)
		{
			return false;
		}
	}
	return true;
}

void func_756(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID());
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return;
	}
	func_268(&(Local_62[iVar0 /*23*/].f_1.f_1), iParam0);
}

bool func_757()
{
	return Local_13.f_7.f_3 == PLAYER::PLAYER_ID();
}

bool func_758(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	if (!func_432())
	{
		return false;
	}
	iVar1 = iVar0;
	if (func_627(2, iVar1))
	{
		sVar2 = "";
		switch (func_503(func_287(0), PLAYER::GET_PLAYER_PED(iParam0), 1060437492 /* Float: 0.707f */))
		{
			case 0:
				sVar2 = "PBL_REACT_F";
				break;
			case 3:
				sVar2 = "PBL_REACT_L";
				break;
			case 2:
				sVar2 = "PBL_REACT_R";
				break;
			default:
				sVar2 = "PBL_REACT_F";
				break;
		}
		if (!MISC::_IS_STRING_SPACE(sVar2))
		{
			if (func_551(Local_799.f_19.f_3, sVar2, 0))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_799.f_19.f_3, sVar2, true);
				return true;
			}
		}
	}
	else
	{
		sVar3 = func_900(Local_62[iVar1 /*23*/].f_1.f_2);
		if (func_551(Local_799.f_19.f_3, sVar3, 0))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_799.f_19.f_3, sVar3, true);
			func_573(iParam0);
			return true;
		}
	}
	return false;
}

char* func_759(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_760(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_901(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

int func_761(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_762(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_763()
{
	return Global_1896738.f_382;
}

bool func_764(int iParam0, int iParam1)
{
	switch (func_122())
	{
		case 2:
		case 3:
			return ENTITY::HAS_ANIM_EVENT_FIRED(func_287(0), iParam0);
		case 0:
		case 1:
			return ENTITY::HAS_ANIM_EVENT_FIRED(func_287(0), iParam1);
		default:
			break;
	}
	return false;
}

void func_765(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	}
	if (!GANG::_0xD6F6ACF4392187FB(iParam1))
	{
	}
	func_899(uParam0, func_902(iParam1));
}

int func_766(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<17> Var22;

	iVar0 = -1;
	Var1 = { func_733(joaat("CURRENCY_CASH"), 1, 0) };
	Var6 = { func_903(joaat("CURRENCY_CASH"), Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_904(joaat("USE"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_905(iVar0, Var22);
	}
	return iVar0;
}

void func_767(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_720() < iParam0)
	{
		iParam0 = func_720();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_906(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_768(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_907(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

int func_769()
{
	return Local_799.f_1;
}

void func_770(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_771(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_908(iParam2, -372840566);
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
	func_909(uParam1, iParam0, Var3);
	return 1;
}

int func_772(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SPEECH_PARAMS_FORCE_FRONTEND"):
			return 4;
		case -1824788778:
			return 49;
		case joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR_ALLOWPLAYAFTERDEATH"):
			return 40;
		case joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR"):
			return 9;
		case joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"):
			return 6;
		case joaat("SPEECH_PARAMS_ADD_BLIP"):
			return 11;
		case joaat("SPEECH_PARAMS_SHOUTED_CRITICAL"):
			return 17;
		case -1408561526:
			return 14;
		case -1337937821:
			return 50;
		case joaat("SPEECH_PARAMS_ALLOW_REPEAT"):
			return 2;
		case -1223286396:
			return 28;
		case -1194565419:
			return 20;
		case -1100252363:
			return 48;
		case -1050591818:
			return 44;
		case joaat("SPEECH_PARAMS_SHOUTED"):
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
		case joaat("SPEECH_PARAMS_FORCE_SHOUTED"):
			return 8;
		case -417894478:
			return 18;
		case -279373485:
			return 47;
		case joaat("SPEECH_PARAMS_FORCE"):
			return 3;
		case joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"):
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
		case joaat("SPEECH_PARAMS_ADD_BLIP_SHOUTED"):
			return 12;
		case 905388000:
			return 31;
		case joaat("SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE"):
			return 13;
		case 996860239:
			return 23;
		case joaat("SPEECH_PARAMS_STANDARD"):
			return 1;
		case 1124105491:
			return 36;
		case 1196222537:
			return 22;
		case 1342623702:
			return 35;
		case 1506116031:
			return 29;
		case joaat("SPEECH_PARAMS_FORCE_NORMAL"):
			return 5;
		case 1588346500:
			return 38;
		case joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"):
			return 7;
		case 1718175949:
			return 19;
		case 1744022339:
			return 39;
		case 1808677283:
			return 34;
		case joaat("SPEECH_PARAMS_SHOUTED_CLEAR"):
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

var func_773()
{
	return Local_13.f_7.f_7;
}

void func_774(var uParam0)
{
	*uParam0 = 0;
}

bool func_775(int iParam0, var uParam1)
{
	if (func_192(8, iParam0))
	{
		return !func_192(1048576, iParam0);
	}
	return false;
}

bool func_776(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		return false;
	}
	if (func_192(8192, iParam0))
	{
		return !func_192(1048576, iParam0);
	}
	return false;
}

bool func_777(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		return false;
	}
	if (func_192(16384, iParam0))
	{
		return !func_192(1048576, iParam0);
	}
	return false;
}

bool func_778(int iParam0, int iParam1)
{
	if (func_499(iParam1, iParam0))
	{
		return !func_192(1048576, iParam0);
	}
	return false;
}

bool func_779(int iParam0, int iParam1)
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

bool func_780(int iParam0, bool bParam1)
{
	int iVar0;

	*iParam0 = 255;
	if (func_418(64, 0))
	{
		return false;
	}
	if (func_418(8192, 0))
	{
		*iParam0 = func_578();
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam0))
	{
		if (func_418(8, 0))
		{
			*iParam0 = func_577();
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam0))
		{
			if (func_418(16384, 0))
			{
				*iParam0 = func_579();
			}
		}
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(*iParam0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(*iParam0), true))
	{
		return false;
	}
	if (bParam1)
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam0);
		if (!func_862(0, iVar0))
		{
			*iParam0 = 255;
			return false;
		}
	}
	return true;
}

int func_781(int iParam0)
{
	return iParam0;
}

void func_782(int iParam0)
{
	if (!func_910(iParam0))
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

bool func_783(struct<2> Param0, var uParam2)
{
	if (!func_40(Param0))
	{
		return false;
	}
	func_911(uParam2);
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

int func_784()
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

void func_785(var uParam0, var uParam1)
{
}

void func_786(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_787(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_866(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_788(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_789(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

int func_790(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

int func_791(int iParam0, var uParam1)
{
	if (func_192(4, iParam0) || func_192(2048, iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_792(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return false;
	}
	return true;
}

float func_793(int iParam0)
{
	switch (func_237())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.6575f;
				case 3:
					return 0.2588f;
				case 2:
					return 0.2588f;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0.3435f;
				case 3:
					return 0.2794f;
				case 2:
					return 0.2794f;
				default:
					break;
			}
			break;
	}
	return 1f;
}

bool func_794(int iParam0, var uParam1)
{
	*uParam1 = 255;
	if (!func_669(iParam0))
	{
		return false;
	}
	*uParam1 = iParam0;
	if (!func_348(*uParam1, 1))
	{
		return false;
	}
	return true;
}

int func_795(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return joaat("SPEECH_PARAMS_STANDARD");
		case 2:
			return joaat("SPEECH_PARAMS_ALLOW_REPEAT");
		case 3:
			return joaat("SPEECH_PARAMS_FORCE");
		case 4:
			return joaat("SPEECH_PARAMS_FORCE_FRONTEND");
		case 5:
			return joaat("SPEECH_PARAMS_FORCE_NORMAL");
		case 6:
			return joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR");
		case 7:
			return joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL");
		case 8:
			return joaat("SPEECH_PARAMS_FORCE_SHOUTED");
		case 9:
			return joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
		case 10:
			return joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL");
		case 11:
			return joaat("SPEECH_PARAMS_ADD_BLIP");
		case 12:
			return joaat("SPEECH_PARAMS_ADD_BLIP_SHOUTED");
		case 13:
			return joaat("SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE");
		case 14:
			return -1408561526;
		case 15:
			return joaat("SPEECH_PARAMS_SHOUTED");
		case 16:
			return joaat("SPEECH_PARAMS_SHOUTED_CLEAR");
		case 17:
			return joaat("SPEECH_PARAMS_SHOUTED_CRITICAL");
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
			return joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR_ALLOWPLAYAFTERDEATH");
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

void func_796(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

int func_797(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_799.f_33.f_7[iParam0 /*11*/]))
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
		else if (Local_62[iVar0 /*23*/].f_6.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_625(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_62[iVar0 /*23*/].f_6.f_2[iParam0] > Local_62[iVar1 /*23*/].f_6.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_62[iVar0 /*23*/].f_6.f_2[iParam0] > fParam1)
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

void func_798(var uParam0, int iParam1)
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

int func_799(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_912(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_913(uParam2, iParam0, Var1);
	return 1;
}

int func_800(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_415(iParam0))
	{
		return 0;
	}
	iVar0 = func_287(iParam0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true))
	{
		iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam1)
			{
				return 1;
			}
		}
		if (bParam2)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, iParam1, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_801(float fParam0, float fParam1, float fParam2)
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

int func_802()
{
	return Local_799.f_2;
}

float func_803(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_804(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_805(var uParam0, vector3 vParam1)
{
	uParam0->f_6 = vParam1.x;
	uParam0->f_7 = vParam1.y;
	uParam0->f_8 = vParam1.z;
}

void func_806(int iParam0)
{
}

void func_807(int iParam0)
{
}

void func_808(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_809(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_810(var uParam0)
{
	return func_663(*uParam0, 2);
}

int func_811(int iParam0)
{
	return iParam0;
}

bool func_812(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_914(uParam1);
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
		fVar2 = func_804(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_915())
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

bool func_813(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_916(iParam0))
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

void func_814(int iParam0)
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
	Global_1940258.f_21 = func_917();
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
			func_918(&(Global_1940258.f_28), &(Global_1940258.f_33));
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

var func_815(int iParam0)
{
	return Global_1102219.f_3705[iParam0 /*3*/];
}

bool func_816(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_919(bParam0, &iVar0, &iVar1))
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

bool func_817(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940258.f_34;
	if (func_28() == -1)
	{
		if (Global_1940258.f_34 == 0)
		{
			iVar0 = func_920(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_34) || !Global_1956200.f_1716[4])
	{
		iVar0 = func_920(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_847(iVar0) == -1)
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

void func_818(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_921(uParam0);
	}
}

bool func_819(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_847(iParam2);
	}
	else
	{
		iVar1 = func_846(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_847(iParam0);
	}
	else
	{
		iVar0 = func_846(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_189(*uParam1, 8388608))
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

float func_820(int iParam0, int iParam1)
{
	return func_843(iParam0, iParam1, 1, 1);
}

float func_821(var uParam0)
{
	return uParam0->f_29;
}

bool func_822(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_823(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 134217728);
	}
	else
	{
		func_268(uParam0, 134217728);
	}
}

void func_824()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_825(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_843(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_922(iVar0, 0)))
		{
			if (func_923(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_826(var uParam0)
{
	return uParam0->f_18;
}

bool func_827(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_189(*uParam0, 4194304))
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

int func_828(var uParam0)
{
	return uParam0->f_19;
}

int func_829(var uParam0)
{
	return uParam0->f_20;
}

bool func_830(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_922(iVar0, 0)))
		{
			if (func_924(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_831(bool bParam0, bool bParam1, bool bParam2)
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

float func_832(var uParam0)
{
	return uParam0->f_25;
}

int func_833(var uParam0)
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

bool func_834(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_925(iParam0, vParam4, 0.5f))
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

int func_835(int iParam0)
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
	if (func_926(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_836(int iParam0)
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

bool func_837(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_916(iParam1))
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

bool func_838(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_916(iParam1))
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

bool func_839(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_927(uParam0);
	if (func_916(iParam1))
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

bool func_840(int iParam0, int iParam1)
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

bool func_841(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_928(iParam0, 1, 0, 0)) && !func_928(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
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

bool func_842(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_843(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_844(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_845(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_845(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_846(int iParam0)
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

int func_847(int iParam0)
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

int func_848(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_840(Global_34, &iVar1))
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
		fVar2 = func_843(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_843(iParam0, Global_1940258.f_34, 0, 1) < 2.5f)
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

bool func_849(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_919(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_851(uParam1, iVar0))
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
				if (!bParam2 || !func_851(uParam1, iVar1))
				{
					if (func_845(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_850(var uParam0)
{
	return func_189(*uParam0, 131072);
}

bool func_851(var uParam0, int iParam1)
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

bool func_852(int iParam0)
{
	return false;
}

int func_853(var uParam0)
{
	return uParam0->f_22;
}

int func_854(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_855(vector3 vParam0, vector3 vParam3)
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

bool func_856(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_857(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

float func_858(int iParam0)
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
	fVar0 = func_803(vVar2.x, fVar0);
	fVar1 = func_804(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.x, fVar0);
	fVar1 = func_804(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.x, fVar0);
	fVar1 = func_804(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.x, fVar0);
	fVar1 = func_804(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.x, fVar0);
	fVar1 = func_804(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_859(int iParam0)
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
	fVar0 = func_803(vVar2.y, fVar0);
	fVar1 = func_804(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.y, fVar0);
	fVar1 = func_804(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.y, fVar0);
	fVar1 = func_804(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.y, fVar0);
	fVar1 = func_804(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_803(vVar2.y, fVar0);
	fVar1 = func_804(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_860(int iParam0)
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
	return func_410((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_861(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

bool func_862(int iParam0, int iParam1)
{
	if (!func_348(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	if (!func_487(&(Local_62[iParam1 /*23*/].f_10), 8, iParam0))
	{
		return !func_487(&(Local_62[iParam1 /*23*/].f_10), 1, iParam0);
	}
	return false;
}

bool func_863(int iParam0)
{
	return !func_336(iParam0, 4);
}

int func_864(char* sParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_866(iVar0, 2))
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
				func_929(iVar1, iParam1, sParam0, 5, iParam3, uParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_865(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_582(iParam0))
	{
		return;
	}
	iVar0 = func_781(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_866(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

var func_867(int iParam0)
{
	return Local_13.f_44[iParam0 /*3*/].f_1;
}

bool func_868(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_13.f_7.f_16 < 5)
	{
		return false;
	}
	if (func_423(32))
	{
		return false;
	}
	if (!func_633(iParam0, &iVar0))
	{
		return false;
	}
	if (func_192(4, iVar0))
	{
		return false;
	}
	iVar1 = Local_62[iVar0 /*23*/].f_1.f_3;
	if (iVar1 < 1)
	{
		return false;
	}
	iVar2 = iVar1 * 15;
	return func_930(iVar2);
}

bool func_869(int iParam0)
{
	int iVar0;

	if (Local_13.f_7.f_16 < 2)
	{
		return false;
	}
	if (func_423(512))
	{
		return false;
	}
	if (!func_633(iParam0, &iVar0))
	{
		return false;
	}
	if (func_192(4096, iVar0))
	{
		return false;
	}
	if (!func_192(131072, iVar0))
	{
		return false;
	}
	if (Local_62[iVar0 /*23*/].f_1.f_3 >= 7)
	{
		return true;
	}
	if (!func_930(18))
	{
		return false;
	}
	return true;
}

char* func_870(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RAMBLE";
		case 1:
			return "CALLOUT";
		case 2:
			return "COIN";
		case 3:
			return "ANYTHING";
		case 4:
			return "PLEASE";
		case 5:
			return "LUCK_RSP";
		case 6:
			return "SPARE_MID";
		case 7:
			return "STEAL";
		case 8:
			return "THANKS";
		case 11:
			return "LOITER_BEG";
		case 9:
			return "JUDGE";
		case 10:
			return "REGRET";
		case 12:
			return "GIVE_RAT";
		case 13:
			return "GIVE_RAT_B";
		case 14:
			return "GIVE_RAT_C";
		case 15:
			return "AGGRO";
		case 16:
			return "AGGRO_B";
		case 17:
			return "FINAL_BEG";
		default:
			break;
	}
	return "";
}

bool func_871(int iParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	return func_931(func_287(iParam0), cParam1, iParam3, iParam2, iParam5, func_644(iParam0), iParam4, 1);
}

struct<4> func_872(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_932(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_874(joaat("CHARACTER"), func_933(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_874(joaat("CHARACTER"), func_933(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_874(joaat("CHARACTER"), func_933(), -1591664384, bParam0);
}

int func_873(int iParam0)
{
	vector3 vVar0;

	if (!func_884(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_874(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_884(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_932(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_875(bool bParam0)
{
	int iVar0;

	iVar0 = func_932(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_874(923904168, func_872(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_874(923904168, func_872(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_874(923904168, func_872(bParam0), -740156546, 0);
}

bool func_876(int iParam0, bool bParam1)
{
	if (func_880(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_934();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_877(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_890(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_878(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_935(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_879(bool bParam0)
{
	int iVar0;

	iVar0 = func_932(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_874(271701509, func_872(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_874(271701509, func_872(bParam0), 12999093, 0);
}

int func_880(int iParam0)
{
	struct<2> Var0;

	if (!func_884(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_881(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_880(iParam0);
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
			if (func_936(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_882(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_937(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_883(var uParam0)
{
	if (!func_884(*uParam0, 0))
	{
		return 0;
	}
	if (!func_938(*uParam0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*uParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*uParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*uParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*uParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_884(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_885(int iParam0)
{
	return iParam0;
}

bool func_886(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_887(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_888(int iParam0)
{
	return func_873(iParam0) == joaat("WEAPON");
}

int func_889(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_884(iParam0, 0) && !func_886(func_885(iParam0), 2))
	{
		return 0;
	}
	if (func_873(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_887(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_932(bParam3), iParam0);
}

int func_890(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_884(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_887(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_874(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_932(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_932(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_891(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_892(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case 653987431:
			case joaat("HEA_TUNNEL_02"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

int func_893(int iParam0)
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

void func_894(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1296859.f_21;
	Var1 = { func_464(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_895(int iParam0, var uParam1, var uParam2)
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

struct<2> func_896(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_897(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_783(Param0, &vVar0);
	if (func_939(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

var func_898(int iParam0, int iParam1)
{
	return func_940(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_899(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

char* func_900(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_COIN_OR_TWO";
		case 1:
			return "PBL_ANYTHING";
		case 2:
			return "PBL_PLEASE";
		case 3:
			return "PBL_SPARE_CHANGE";
		default:
			break;
	}
	return "PBL_COIN_OR_TWO";
}

bool func_901(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

var func_902(int iParam0)
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

struct<16> func_903(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_874(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_887(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_933() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_904(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_941(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_943(func_942(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_944(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_905(int iParam0, struct<17> Param1)
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

struct<2> func_906(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

var func_907(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_945(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_908(int iParam0, int iParam1)
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

void func_909(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_946(uParam0))
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

bool func_910(int iParam0)
{
	return func_866(iParam0, 2);
}

void func_911(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_912(var uParam0)
{
	func_798(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_947() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_798(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_798(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_913(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_946(uParam0))
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

float func_914(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_605(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_948(uParam0);
	}
	return func_605(uParam0);
}

bool func_915()
{
	int iVar0;
	int iVar1;

	iVar0 = func_950(func_949());
	iVar1 = func_951(func_949());
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

bool func_916(int iParam0)
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

bool func_917()
{
	if (func_952())
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

void func_918(var uParam0, var uParam1)
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

bool func_919(bool bParam0, int iParam1, int iParam2)
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

int func_920(var uParam0)
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

void func_921(var uParam0)
{
	int iVar0;

	if (Global_1940258.f_32 == 0)
	{
		func_268(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940258.f_28[iVar0]))
				{
					func_244(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_922(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_923(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_924(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_924(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_925(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_926(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_927(var uParam0)
{
	return uParam0->f_28;
}

int func_928(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_929(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_787(iParam0, 1);
	func_788(iParam0, 1);
	func_789(iParam0, 128);
}

bool func_930(int iParam0)
{
	int iVar0;

	if (iParam0 >= 100)
	{
		return true;
	}
	iVar0 = (1 + MISC::GET_RANDOM_INT_IN_RANGE(0, 100));
	return iVar0 <= iParam0;
}

bool func_931(int iParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = cParam1;
	Var0.f_1 = uParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_953(iParam0, &Var0);
}

int func_932(bool bParam0)
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

struct<4> func_933()
{
	struct<4> Var0;

	return Var0;
}

bool func_934()
{
	return (func_954(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_955(func_874(joaat("WARDROBE"), func_872(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_935(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_932(0);
	*uParam1 = { func_874(iParam0, func_875(0), iParam3, 0) };
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

bool func_936(int iParam0, int iParam1, int iParam2)
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

bool func_937(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_932(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_938(int iParam0)
{
	return func_956(iParam0, 1279601681);
}

bool func_939(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_957(iParam0))
	{
		return false;
	}
	if (func_958(iParam0, uParam1, &uVar0))
	{
		func_959(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

var func_940(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_960() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_961());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_961());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_961());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_962(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_963(iVar2))
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
				if (iVar9 & 8192 != 0 && func_964(iVar2) != 1)
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
					if (!func_965(iVar10))
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

bool func_941(int iParam0, var uParam1)
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

bool func_942(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_943(bool bParam0, int iParam1, var uParam2)
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

int func_944(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_967(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_945(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_946(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_947()
{
	return Global_1952637.f_1;
}

var func_948(var uParam0)
{
	return uParam0->f_27;
}

int func_949()
{
	return Global_1902818;
}

int func_950(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_951(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_952()
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

bool func_953(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_954(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_968(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_932(bParam1), iParam0, iParam3);
}

int func_955(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_969(&uParam0, iParam4, bParam5, iParam6);
}

int func_956(int iParam0, int iParam1)
{
	if (!func_884(iParam0, 0))
	{
		return func_970(func_885(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_957(int iParam0)
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

bool func_958(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_971(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_959(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_972(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_973(iVar0);
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
			uParam2->f_5 = func_974(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_975(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_976(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_977(iVar0);
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

int func_960()
{
	return Global_1051252.f_12;
}

char* func_961()
{
	return "unnamed";
}

int func_962(int iParam0)
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

bool func_963(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_978(36, iParam0);
}

int func_964(int iParam0)
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

bool func_965(int iParam0)
{
	if (func_979(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_980(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

int func_966(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_243(uParam2, iParam3))
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
	func_981(iParam0, iParam1, iParam2, iParam3);
}

bool func_968(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_969(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_982(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_970(int iParam0, int iParam1)
{
	if (!func_886(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_971(int iParam0)
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

int func_972(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_983(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_973(int iParam0)
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

int func_974(int iParam0)
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

int func_975(int iParam0)
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

int func_976(int iParam0)
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

int func_977(int iParam0)
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

bool func_978(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_984(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_985())
	{
		return func_984(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_984(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_979(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_980(int iParam0)
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
		func_986(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_987(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_981(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_988(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_982(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_932(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_937(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_983(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_989(iParam0, uParam1, &uVar0))
	{
		func_990(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_984(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_985()
{
	return Global_1102219.f_3672;
}

void func_986(int iParam0)
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
	func_987(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_987(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_988(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_991(&(uParam0->f_4));
}

bool func_989(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_971(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_990(var uParam0, int iParam1, var uParam2)
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

void func_991(var uParam0)
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

