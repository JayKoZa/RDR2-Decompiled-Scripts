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
	struct<48> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_61 = 1;
	var uLocal_62 = 0;
	struct<18> Local_63[32];
	struct<312> Local_640 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 1112014848, 1106247680, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1723181095, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 255, 255, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 1;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = -1;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 1;
	float fLocal_972 = 0f;
	float fLocal_973 = 0f;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_972 = 1f;
	fLocal_973 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 50, 56);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 50, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_63, 577, 57);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Local_63[0 /*18*/])), 577, "m_clientData");
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
	else if (func_17(Local_640.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_640.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_640.f_12), Local_640.f_9))
	{
		return true;
	}
	else if (Local_640.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_640, iParam0, 5);
	iVar2 = func_30(&bVar1, Local_640.f_1, Local_640.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_640.f_12 = iVar2;
	iVar0 = Global_1198046.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_31(&Var3, Local_640.f_1, Local_640.f_2, Local_640.f_3, iVar0);
	Local_640.f_9 = { func_32(Var3.f_5, 8) };
	Local_640.f_14 = Var3.f_5;
	Local_640.f_15 = { Var3.f_11 };
	Local_640.f_18 = Var3.f_7;
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
	func_37();
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
	if (func_38(Global_1051213) && !func_21(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_39(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_40(iParam3, 255))
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
	if (func_41())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_38(Global_1051213))
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
		func_42();
	}
	switch (Local_13)
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
	func_50();
	if (Local_640.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_640.f_8)
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
}

void func_27()
{
	if (Local_640.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_64(Local_640.f_12, 4);
		}
	}
	func_65();
	if (func_66(64))
	{
		func_67(Local_13.f_6);
	}
	func_68();
}

int func_28()
{
	return Global_1572887.f_13;
}

bool func_29()
{
	return Global_1051252.f_8;
}

int func_30(bool bParam0, int iParam1, int iParam2)
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
	func_31(&Var26, iParam1, iParam2, -1, 255);
	func_69(&Var0, Var26.f_5);
	iVar25 = func_70(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_71(iVar25) };
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

void func_31(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			func_72(uParam0, iParam2);
			break;
		case 2:
			func_73(uParam0, iParam2);
			break;
		case 3:
			func_74(uParam0, iParam2);
			break;
		case 4:
			func_75(uParam0, iParam2);
			break;
		case 12:
			func_76(uParam0, iParam2);
			break;
		case 6:
			func_77(uParam0, iParam2, -1);
			break;
		case 7:
			func_78(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_79(uParam0, iParam2);
			break;
		case 11:
			func_80(uParam0, iParam2);
			break;
		case 9:
			func_81(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_82(uParam0, iParam2);
			break;
		case 8:
			func_83(uParam0, iParam2);
			break;
		case 13:
			func_84(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_85(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_86(uParam0, iParam2);
			break;
		case 16:
			func_87(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_88(uParam0, iParam2);
			break;
		case 21:
			func_89(uParam0, iParam2);
			break;
		case 28:
			func_90(uParam0, iParam2);
			break;
		case 25:
			func_91(uParam0, iParam2);
			break;
		case 24:
			func_92(uParam0, iParam2);
			break;
		case 22:
			func_93(uParam0, iParam2);
			break;
		case 23:
			func_94(uParam0, iParam2);
			break;
		case 29:
			func_95(uParam0, iParam2);
			break;
		case 26:
			func_96(uParam0, iParam2);
			break;
		case 30:
			func_97(uParam0, iParam2);
			break;
		case 27:
			func_98(uParam0, iParam2);
			break;
		case 32:
			func_99(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_100(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_101(uParam0, iParam2);
			break;
		case 17:
			func_102(uParam0, iParam2);
			break;
		case 18:
			func_103(uParam0, iParam2);
			break;
		case 19:
			func_104(uParam0, iParam2);
			break;
		case 20:
			func_105(uParam0, iParam2);
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
			func_106(uParam0, iParam1, iParam2);
			break;
		default:
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
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636), func_107(iParam1));
			break;
		case 3:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_602), func_107(iParam1));
			break;
		case 4:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_2104), func_107(iParam1));
			break;
		case 5:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_12606), func_107(iParam1));
			break;
		case 6:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_12908), func_107(iParam1));
			break;
		case 7:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_15910), func_107(iParam1));
			break;
		case 8:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_16512), func_107(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_109();
	}
	return Var0;
}

void func_33()
{
	func_110();
	func_111();
}

void func_34()
{
	func_112();
	func_113();
	Local_640.f_173.f_3 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_114();
	switch (func_115())
	{
		case 2:
			func_116(0, joaat("WORLD_ANIMAL_BEAVER_EATING"), 0, 10f);
			break;
		case 3:
			func_117(0, 20f, 10f);
			break;
		case 1:
			TASK::REQUEST_WAYPOINT_RECORDING(func_118());
			break;
	}
}

void func_35()
{
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_119(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_107(Param0))
	{
		return false;
	}
	return true;
}

bool func_39(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_40(int iParam0, int iParam1)
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

bool func_41()
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
	if (!func_38(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_42()
{
}

void func_43()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1198046.f_231.f_1066[Local_640.f_12 /*17*/].f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_31(&Var1, Local_640.f_1, Local_640.f_2, Local_640.f_3, iVar0);
	if (!func_120(&Var1, 1))
	{
		func_121(1);
		return;
	}
	Local_13.f_6 = func_122(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)));
	func_123(256);
	if (func_124(Local_13.f_6))
	{
		func_125(5);
		func_121(6);
	}
	else
	{
		func_121(1);
	}
}

void func_44()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, Local_640.f_1, Local_640.f_2, -1, 255);
	if (func_120(&Var0, 1))
	{
		func_121(2);
		return;
	}
	if (func_126(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_640.f_15, Var0.f_10, 2442122);
		func_121(2);
	}
	else if (bVar31)
	{
		func_125(3);
		func_121(6);
	}
	if (!func_127(Local_13.f_3.f_2))
	{
		func_128(&(Local_13.f_3.f_2));
	}
	else if (func_129(Local_13.f_3.f_2) > 45000)
	{
		func_125(4);
		func_121(6);
	}
}

void func_45()
{
	if (func_130(1, 255))
	{
		if (!func_131(1))
		{
			if (func_132())
			{
				func_123(1);
			}
		}
		else
		{
			func_133();
			func_121(3);
		}
	}
}

void func_46()
{
	bool bVar0;

	if (func_130(2, 255))
	{
		if (!func_131(2))
		{
			bVar0 = true;
			if (!func_134())
			{
				bVar0 = false;
			}
			if (!func_135())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_123(2);
			}
		}
		else
		{
			func_136();
			func_121(4);
		}
	}
}

void func_47()
{
	func_137();
	func_138();
	func_139();
	if (func_140() || Local_13.f_2 != 0)
	{
		func_141();
		func_121(5);
	}
}

void func_48()
{
	if (func_130(4, 255))
	{
		if (func_142())
		{
			func_123(4);
			func_121(6);
		}
	}
}

void func_49()
{
	if (!func_131(256))
	{
		return;
	}
	if (func_131(512))
	{
		if (func_66(64) && func_122(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_67(Local_13.f_6);
			func_143(64);
		}
	}
	else if (!func_66(64))
	{
		if (func_122(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_144(Local_13.f_6, 1, 1);
			func_145(64);
		}
	}
	else if (func_122(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_67(Local_13.f_6);
		func_143(64);
	}
}

void func_50()
{
	if (!Global_13)
	{
		if (func_130(8192, 255))
		{
			func_146(8192);
		}
	}
	else if (!func_130(8192, 255))
	{
		func_147(8192);
	}
}

void func_51()
{
	func_148();
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_149(6);
	}
	else if (Local_13 > 0)
	{
		func_49();
		func_149(1);
	}
}

void func_53()
{
	if (Local_13 == 6)
	{
		func_149(6);
	}
	else if (Local_13 > 1)
	{
		func_149(2);
	}
}

void func_54()
{
	bool bVar0;
	int iVar1;

	if (!func_130(1, 255))
	{
		bVar0 = true;
		if (!func_150())
		{
			bVar0 = false;
		}
		if (!func_151())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_147(1);
		}
		else
		{
			iVar1 = Global_1901947.f_236.f_68;
			if (!func_127(Local_640.f_11))
			{
				func_128(&(Local_640.f_11));
			}
			if (func_129(Local_640.f_11) >= iVar1)
			{
				func_149(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_152(&(Local_640.f_11));
		func_153();
		func_149(3);
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_130(2, 255))
	{
		iVar0 = func_154();
		iVar1 = func_155();
		if (iVar0 && iVar1)
		{
			func_147(2);
		}
		else
		{
			iVar2 = Global_1901947.f_236.f_68;
			if (!func_127(Local_640.f_11))
			{
				func_128(&(Local_640.f_11));
			}
			if (func_156(Local_640.f_11) >= iVar2)
			{
				func_149(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_152(&(Local_640.f_11));
		func_157();
		func_158();
		func_159();
		func_160();
		func_149(4);
	}
}

void func_56()
{
	if (Local_13 >= 5)
	{
		func_161();
		func_149(5);
		return;
	}
	func_162();
	func_163();
	func_164();
	func_165();
	func_166();
	func_167();
}

void func_57()
{
	if (!func_130(4, 255))
	{
		if (func_168())
		{
			func_169();
			func_64(Local_640.f_12, 4);
			func_147(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_149(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_131(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
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
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_38[iVar1]);
				func_170(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					if (!func_171(iVar1, 16))
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
				if (func_172(iVar1, iVar2))
				{
				}
				else if (func_173(iVar1, iVar2))
				{
					iVar0 = Local_640.f_311[iVar1 /*20*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_174(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar1 /*2*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_47[iVar1 /*2*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_174(iVar1, iVar2))
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
	func_175();
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_176(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_65()
{
	int iVar0;
	bool bVar1;

	if (!func_66(1))
	{
		return;
	}
	if (func_66(4))
	{
		return;
	}
	if (!func_66(2))
	{
		iVar0 = -1;
	}
	else if (!func_66(8))
	{
		iVar0 = 2;
	}
	else if (func_66(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_66(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_177(Local_640.f_9, iVar0, 0, 255, 0);
	func_145(4);
	if (bVar1)
	{
		func_178(Local_640.f_1, Local_640.f_2);
		if (!func_66(256))
		{
			if (iVar0 == 1)
			{
				func_179(Local_640.f_18, 1);
			}
			else
			{
				func_179(Local_640.f_18, 0);
			}
			func_145(256);
		}
	}
	else
	{
		func_179(Local_640.f_18, 2);
	}
}

bool func_66(int iParam0)
{
	return func_180(Local_640.f_7, iParam0);
}

void func_67(int iParam0)
{
	int iVar0;

	if (!func_181(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_70 = iParam0;
	Global_1134390[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_68()
{
	if (func_59())
	{
		func_182();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_MP007_Leg_Beav_Event_Chew_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_MP007_Leg_Beav_Event_Chew_scene");
	}
}

void func_69(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_183(uParam0))
	{
		return -1;
	}
	iVar0 = func_184(uParam0, uParam0->f_9);
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
			iVar0 = func_184(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_71(int iParam0)
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

void func_72(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_185(uParam0, iParam1);
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

void func_73(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_186(uParam0);
	uParam0->f_15[0] = joaat("22_TO_4");
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_189(uParam0, 0);
			func_189(uParam0, 1);
			func_189(uParam0, 4);
			func_189(uParam0, 5);
			break;
		case 1:
			func_189(uParam0, 2);
			func_189(uParam0, 3);
			func_189(uParam0, 6);
			func_189(uParam0, 7);
			func_190(uParam0, 2);
			break;
		default:
			func_186(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_188(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_188(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_188(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_188(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_188(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_188(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_188(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_188(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_78(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 8);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 7);
			func_188(uParam0, 8);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 6);
			func_188(uParam0, 7);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 5);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_186(uParam0);
	func_190(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_192(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_186(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_186(uParam0);
	func_190(uParam0, 1);
	func_190(uParam0, 4);
	func_190(uParam0, 8);
	func_190(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			uParam0->f_11 = { func_193(func_122(iParam2)) };
			break;
	}
}

void func_85(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_194(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_195(uParam0, iParam2);
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

void func_88(var uParam0, int iParam1)
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
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
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
			func_197(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
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
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_188(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_188(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_186(uParam0);
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
			func_188(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_188(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_188(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_188(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_188(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_188(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_188(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_188(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_188(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_188(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_186(uParam0);
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
			func_188(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_188(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_188(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_188(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_188(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_188(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_188(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_188(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_188(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_188(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_188(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
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
			func_198(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
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
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_186(uParam0);
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
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
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
			func_200(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_186(uParam0);
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
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_188(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_188(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
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
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_99(var uParam0, int iParam1, int iParam2)
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
	func_202(uParam0, iParam1, iParam2);
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

void func_100(var uParam0, int iParam1, int iParam2)
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
	func_203(uParam0, iParam1, iParam2);
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

void func_101(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_186(uParam0);
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
			func_188(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_188(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_188(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_188(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_188(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_188(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_188(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_188(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_188(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_188(uParam0, 1);
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_106(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_205(iParam1);
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
	*uParam0 = func_206(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_190(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_208(func_207(iVar0), iParam2);
		uParam0->f_15[0] = func_209(func_207(iVar0), iParam2);
		uParam0->f_5 = func_210(iVar0, iParam2);
		uParam0->f_11 = { func_211(iVar0, iParam2) };
	}
}

int func_107(int iParam0)
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

int func_108(int iParam0, var uParam1, int iParam2)
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

struct<2> func_109()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_110()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(8);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Local_63[iVar1 /*18*/].f_7.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_111()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_173(iVar1, iVar2))
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

void func_112()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	func_212(0, joaat("MP_A_C_BEAVER_01"));
	if (func_213())
	{
		func_214(0, 1321671943);
	}
	else
	{
		func_214(0, 334014283);
	}
	func_215(&vVar1, &uVar4);
	func_216(0, vVar1, uVar4, 1);
	func_217(0);
	if (func_213())
	{
		iVar0 = 1;
		while (iVar0 <= 3)
		{
			func_212(iVar0, joaat("A_C_BEAVER_01"));
			func_216(iVar0, vVar1, uVar4, 1);
			iVar0++;
		}
	}
	switch (func_115())
	{
		case 1:
			iVar0 = 1;
			while (iVar0 <= 7)
			{
				func_212(iVar0, joaat("A_C_BEAVER_01"));
				func_218(iVar0, &vVar1, &uVar4);
				func_216(iVar0, vVar1, uVar4, 1);
				iVar0++;
			}
			break;
		case 0:
			iVar0 = 1;
			while (iVar0 <= 3)
			{
				func_212(iVar0, joaat("A_C_BEAVER_01"));
				func_218(iVar0, &vVar1, &uVar4);
				func_216(iVar0, vVar1, uVar4, 1);
				iVar0++;
			}
			break;
	}
}

void func_113()
{
	switch (func_115())
	{
		case 0:
			func_219(0, joaat("P_STICKFIREPOKER01X"));
			func_221(0, func_220(), 0f, 0, 0);
			break;
	}
}

void func_114()
{
	func_222(&(Local_640.f_118), 1);
	func_223(&(Local_640.f_118), 1);
	func_224(&(Local_640.f_118), 1);
	func_225(&(Local_640.f_118), 0);
	func_226(&(Local_640.f_118), 1);
	func_227(&(Local_640.f_118), 0);
	func_228(&(Local_640.f_118), 0);
	func_229(&(Local_640.f_118), 0);
	func_230(&(Local_640.f_118), 0);
	func_231(&(Local_640.f_118), 6f);
	func_232(&(Local_640.f_118), 1106247680 /* Float: 30f */);
	func_233(&(Local_640.f_118), 1);
	func_234(&(Local_640.f_118), 1);
	func_235(&(Local_640.f_118), 1, 1, 1);
	func_236(&(Local_640.f_118), 60);
}

int func_115()
{
	return func_237();
}

void func_116(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	Local_640.f_25 = 1;
	Local_640.f_25.f_1 = iParam0;
	Local_640.f_25.f_3 = iParam1;
	if (bParam2)
	{
		func_238(&(Local_640.f_25), 1);
	}
	if (fParam3 > 0f)
	{
		Local_640.f_25.f_27 = fParam3;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7 = 1;
		func_239();
	}
}

void func_117(int iParam0, float fParam1, float fParam2)
{
	Local_640.f_25 = 1;
	Local_640.f_25.f_1 = iParam0;
	if (fParam1 > 0f)
	{
		Local_640.f_25.f_26 = fParam1;
	}
	if (fParam2 > 0f)
	{
		Local_640.f_25.f_27 = fParam2;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7 = 2;
		func_239();
	}
}

char* func_118()
{
	switch (func_240())
	{
		case 5:
			return "la_beaver_flee_krm";
		case 6:
			return "la_beaver_flee_krs";
		case 7:
			return "la_beaver_flee_ep";
		case 8:
			return "la_beaver_flee_krn";
		case 9:
			return "la_beaver_flee_sep";
		default:
			break;
	}
	return "";
}

bool func_119(int iParam0)
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

bool func_120(var uParam0, int iParam1)
{
	return func_241(uParam0->f_25, iParam1);
}

void func_121(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_122(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_123(int iParam0)
{
	if (!func_131(iParam0))
	{
		func_242(&(Local_13.f_1), iParam0);
	}
}

bool func_124(int iParam0)
{
	if (!func_181(iParam0))
	{
		return false;
	}
	return (func_243(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_125(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_126(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_244(Local_640.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_640.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_245(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_147(128);
	}
	else if (!func_130(128, 255))
	{
		Local_13.f_3.f_1 = func_246(Param0);
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

bool func_127(int iParam0)
{
	return iParam0 != 0;
}

void func_128(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_129(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

bool func_130(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_247(&iParam1))
		{
			return false;
		}
	}
	return func_180(Local_63[iParam1 /*18*/], iParam0);
}

bool func_131(int iParam0)
{
	return func_180(Local_13.f_1, iParam0);
}

bool func_132()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

void func_133()
{
}

bool func_134()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

bool func_135()
{
	bool bVar0;

	if (!func_248(&bVar0))
	{
		if (bVar0)
		{
			func_249();
		}
		return false;
	}
	if (!func_250(&bVar0))
	{
		if (bVar0)
		{
			func_249();
		}
		return false;
	}
	return true;
}

void func_136()
{
	if (func_251())
	{
		func_252(0);
	}
}

void func_137()
{
	if (!func_131(32) && func_253(32))
	{
		func_123(32);
	}
	if (!func_131(64) && func_253(64))
	{
		func_123(64);
	}
	if (!func_131(16) && func_254(16))
	{
		func_123(16);
	}
	if ((!func_131(2048) && func_253(2048)) && !func_253(4096))
	{
		func_123(2048);
	}
}

void func_138()
{
	bool bVar0;

	if (!bVar0 && func_131(16))
	{
		func_125(1);
		return;
	}
	if (func_131(2048) && !func_253(4096))
	{
		func_125(6);
		return;
	}
}

void func_139()
{
	func_255();
}

bool func_140()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_256(0)))
	{
		func_257(ENTITY::GET_ENTITY_COORDS(func_256(0), true, false));
	}
	if (func_251())
	{
		return false;
	}
	return func_258();
}

void func_141()
{
}

bool func_142()
{
	return true;
}

void func_143(int iParam0)
{
	if (func_66(iParam0))
	{
		func_259(&(Local_640.f_7), iParam0);
	}
}

int func_144(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_181(iParam0))
	{
		return 0;
	}
	iVar0 = func_260(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1134390[iVar1 /*83*/].f_70 = iParam0;
	Global_1134390[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_261(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_262(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_145(int iParam0)
{
	if (!func_66(iParam0))
	{
		func_242(&(Local_640.f_7), iParam0);
	}
}

void func_146(int iParam0)
{
	if (func_180(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/], iParam0))
	{
		func_259(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/]), iParam0);
	}
}

void func_147(int iParam0)
{
	if (!func_130(iParam0, 255))
	{
		func_242(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/]), iParam0);
	}
}

void func_148()
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
				func_263(iVar0);
				break;
			case -1315570756:
				func_264(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_265(iVar0);
		iVar0++;
	}
}

void func_149(int iParam0)
{
	if (Local_640.f_8 != iParam0)
	{
		Local_640.f_8 = iParam0;
	}
}

bool func_150()
{
	int iVar0;

	if (!func_266())
	{
		return false;
	}
	iVar0 = 1;
	if (func_115() == 1 && !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_118()))
	{
		iVar0 = 0;
	}
	if (func_115() == 0 || func_115() == 1)
	{
		if (!func_269(&(Local_13.f_24.f_5), &(Local_640.f_173.f_5), func_267(), func_268(), 0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_151()
{
	bool bVar0;

	bVar0 = false;
	if (!func_270())
	{
		bVar0 = true;
	}
	if (!func_271())
	{
		bVar0 = true;
	}
	if (Local_640.f_25 && !func_272(&(Local_13.f_7), &(Local_640.f_25)))
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_152(var uParam0)
{
	*uParam0 = 0;
}

void func_153()
{
}

int func_154()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

int func_155()
{
	bool bVar0;

	if (!func_273())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_156(int iParam0)
{
	return (iParam0 - Global_1296859.f_21) * 1000;
}

void func_157()
{
	if (!func_66(1))
	{
		func_274(Local_640.f_9);
		func_145(1);
	}
}

void func_158()
{
	func_275();
	func_276();
}

void func_159()
{
	vector3 vVar0;
	var uVar3;

	func_277();
	func_278();
	func_215(&vVar0, &uVar3);
	func_279(&(Local_640.f_53), 0, vVar0, 1112014848 /* Float: 50f */);
	func_280(&(Local_640.f_53), 2);
}

void func_160()
{
}

void func_161()
{
}

void func_162()
{
	float fVar0;

	if (func_244(Local_640.f_15))
	{
		return;
	}
	if (func_281())
	{
		return;
	}
	if (func_282(Local_640.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_640.f_15);
		if (fVar0 < 200f)
		{
			func_147(4096);
		}
		else if (fVar0 < 400f)
		{
			func_146(4096);
			func_147(2048);
		}
		else
		{
			func_146(4096);
			func_146(2048);
		}
	}
}

void func_163()
{
	func_283();
	func_284();
	func_285();
	func_286();
}

void func_164()
{
	if (func_287())
	{
		func_147(8);
	}
	else
	{
		func_146(8);
	}
}

void func_165()
{
	func_289(func_256(0), func_288(func_251(), 0));
	func_290();
	func_291();
	if (func_251())
	{
		return;
	}
	func_292();
	func_293();
}

void func_166()
{
	if (!func_130(8, 255))
	{
		func_147(16);
	}
	else
	{
		func_146(16);
	}
}

void func_167()
{
	int iVar0;

	Local_640.f_6 = -1;
	Local_640.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_640.f_5 = (Local_640.f_5 || Local_63[iVar0 /*18*/]);
			Local_640.f_6 = (Local_640.f_6 && Local_63[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

bool func_168()
{
	return true;
}

void func_169()
{
}

void func_170(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_640.f_186.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_640.f_186.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_171(int iParam0, int iParam1)
{
	return func_180(Local_640.f_186.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_172(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_173(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_174(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_640.f_311[iParam0 /*20*/].f_4, iParam1);
}

void func_175()
{
	char* sVar0;

	if (!func_294())
	{
		return;
	}
	if (func_295(2, -1))
	{
		return;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_640.f_53) && ENTITY::IS_ENTITY_DEAD(Local_640.f_53)) || Local_640.f_53.f_2 == 12)
	{
		return;
	}
	if (func_296(16))
	{
		return;
	}
	sVar0 = func_297(Local_640.f_163.f_5, Local_640.f_163.f_6);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	func_298(sVar0);
}

bool func_176(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

void func_177(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_300(func_299(Param0));
	iVar1 = func_301(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_302(Param0, &Var2);
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

void func_178(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_303(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_304(iVar0);
}

void func_179(int iParam0, int iParam1)
{
	func_128(&(Global_1272030.f_3271[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1272030.f_3275[iParam0] = func_305(iParam0);
			break;
		case 1:
			Global_1272030.f_3275[iParam0] = func_306(iParam0);
			break;
		case 2:
			Global_1272030.f_3275[iParam0] = func_307(iParam0);
			break;
	}
}

bool func_180(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_181(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_182()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iVar1 = func_256(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 74, 0f);
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_256(0)))
	{
		func_308(0);
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

bool func_183(var uParam0)
{
	if (func_38(*uParam0))
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

int func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_309(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_310(iParam1)) - 1);
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

void func_185(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_311(uParam0);
			break;
		case 1:
			func_311(uParam0);
			break;
		case 2:
			func_311(uParam0);
			break;
		case 3:
			func_312(uParam0);
			break;
		case 4:
			func_311(uParam0);
			break;
		case 5:
			func_311(uParam0);
			break;
		case 6:
			func_312(uParam0);
			break;
		case 7:
			func_312(uParam0);
			break;
		case 8:
			func_312(uParam0);
			break;
		case 9:
			func_311(uParam0);
			break;
		default:
			func_187(uParam0);
			func_186(uParam0);
			break;
	}
}

void func_186(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_189(uParam0, iVar0);
		iVar0++;
	}
}

void func_187(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_188(uParam0, iVar0);
		iVar0++;
	}
}

void func_188(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_189(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_190(var uParam0, int iParam1)
{
	func_261(&(uParam0->f_25), iParam1);
}

void func_191(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_189(uParam0, 0);
			break;
		case 1:
		case 2:
			func_189(uParam0, 1);
			func_189(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_189(uParam0, 0);
			func_189(uParam0, 2);
			break;
		case 8:
			func_189(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_189(uParam0, 1);
			break;
		default:
			func_186(uParam0);
			break;
	}
}

void func_192(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_313(uParam0);
			break;
		case 1:
			func_314(uParam0);
			break;
		case 2:
			func_315(uParam0);
			break;
		case 3:
			func_316(uParam0);
			break;
		default:
			func_187(uParam0);
			func_186(uParam0);
			break;
	}
}

Vector3 func_193(int iParam0)
{
	if (!func_181(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

void func_194(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_317(uParam0);
			break;
		case 1:
		case 2:
			func_318(uParam0);
			break;
		case 3:
		case 4:
			func_319(uParam0);
			break;
		default:
			func_186(uParam0);
			break;
	}
	func_187(uParam0);
}

void func_195(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_189(uParam0, 0);
			func_189(uParam0, 2);
			break;
		case 1:
			func_189(uParam0, 1);
			func_189(uParam0, 3);
			break;
		default:
			func_187(uParam0);
			func_186(uParam0);
			break;
	}
}

void func_196(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_188(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_188(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_188(uParam0, 0);
			break;
		default:
			func_188(uParam0, 0);
			break;
	}
	func_186(uParam0);
}

void func_197(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_188(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_188(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_188(uParam0, 2);
			break;
		default:
			func_187(uParam0);
			break;
	}
	func_186(uParam0);
}

void func_198(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_188(uParam0, 0);
			func_189(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_188(uParam0, 1);
			func_189(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_188(uParam0, 2);
			func_189(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_188(uParam0, 3);
			func_189(uParam0, 0);
			break;
	}
}

void func_199(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_188(uParam0, 0);
			func_189(uParam0, 0);
			break;
		case 2:
			func_188(uParam0, 1);
			func_189(uParam0, 0);
			break;
		case 3:
		case 4:
			func_188(uParam0, 2);
			func_189(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_188(uParam0, 3);
			func_189(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_188(uParam0, 4);
			func_189(uParam0, 1);
			break;
	}
}

void func_200(var uParam0, int iParam1)
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
			func_188(uParam0, 3);
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
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			break;
		default:
			func_187(uParam0);
			break;
	}
	func_186(uParam0);
}

void func_201(var uParam0, int iParam1)
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
			func_188(uParam0, 3);
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
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			break;
		default:
			func_187(uParam0);
			break;
	}
	func_186(uParam0);
}

void func_202(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_189(uParam0, 0);
			func_188(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_189(uParam0, 1);
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			break;
		default:
			func_189(uParam0, 0);
			func_188(uParam0, 0);
			break;
	}
}

void func_203(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_189(uParam0, 0);
			func_188(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_189(uParam0, 1);
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			break;
		default:
			func_189(uParam0, 0);
			func_188(uParam0, 0);
			break;
	}
}

void func_204(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_186(uParam0);
			func_187(uParam0);
			break;
		default:
			func_186(uParam0);
			func_187(uParam0);
			break;
	}
}

int func_205(int iParam0)
{
	return Global_1272030.f_3348[iParam0];
}

int func_206(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_3;
}

int func_207(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/];
}

var func_208(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_320(&Var1, iParam0) && func_321(&Var1, iParam1))
	{
		func_322(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_320(&Var1, iParam0) && func_321(&Var1, iParam1))
	{
		func_322(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_210(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_323(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

Vector3 func_211(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_323(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

void func_212(int iParam0, int iParam1)
{
	Local_640.f_186.f_7[iParam0 /*11*/].f_3 = iParam1;
}

bool func_213()
{
	return (func_115() == 2 || func_115() == 3);
}

void func_214(int iParam0, int iParam1)
{
	Local_640.f_186.f_7[iParam0 /*11*/].f_4 = iParam1;
}

void func_215(var uParam0, var uParam1)
{
	if (func_213())
	{
		*uParam0 = { func_324() };
		switch (func_240())
		{
			case 4:
				*uParam1 = 0f;
				break;
		}
		return;
	}
	if (func_115() == 1)
	{
		func_325(uParam0, uParam1);
		return;
	}
	switch (func_240())
	{
		case 5:
			*uParam0 = { 2442.455f, 557.3737f, 66.3274f };
			*uParam1 = 0f;
			break;
		case 6:
			*uParam0 = { 2257.893f, 256.7348f, 43.6559f };
			*uParam1 = 237.973f;
			break;
		case 7:
			*uParam0 = { 2324.826f, 895.6353f, 71.6451f };
			*uParam1 = 279.835f;
			break;
	}
}

void func_216(int iParam0, vector3 vParam1, var uParam4, bool bParam5)
{
	Local_640.f_186.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_640.f_186.f_7[iParam0 /*11*/].f_5 = uParam4;
	if (bParam5)
	{
		func_242(&(Local_640.f_186.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_259(&(Local_640.f_186.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_217(int iParam0)
{
	MISC::SET_BIT(&(Local_640.f_19), iParam0);
}

void func_218(int iParam0, var uParam1, var uParam2)
{
	switch (func_240())
	{
		case 5:
			switch (iParam0)
			{
				case 1:
					*uParam1 = { 2475.379f, 552.3309f, 67.5424f };
					break;
				case 2:
					*uParam1 = { 2488.615f, 548.3564f, 67.6973f };
					break;
				case 3:
					*uParam1 = { 2497.364f, 550.9832f, 67.9051f };
					break;
				case 4:
					*uParam1 = { 2497.867f, 569.1229f, 71.2686f };
					break;
				case 5:
					*uParam1 = { 2497.101f, 578.0073f, 67.3406f };
					break;
				case 6:
					*uParam1 = { 2494.621f, 590.5859f, 66.7382f };
					break;
				case 7:
					*uParam1 = { 2484.535f, 593.1011f, 66.8304f };
					break;
			}
			break;
		case 6:
			switch (func_115())
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							*uParam1 = { 2283.758f, 285.8581f, 43.8284f };
							break;
						case 2:
							*uParam1 = { 2318.151f, 254.1129f, 45.6237f };
							break;
						case 3:
							*uParam1 = { 2309.686f, 263.6326f, 44.5854f };
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 1:
							*uParam1 = { 2236.275f, 354.2925f, 46.3247f };
							break;
						case 2:
							*uParam1 = { 2233.76f, 364.1183f, 47.4306f };
							break;
						case 3:
							*uParam1 = { 2227.986f, 350.8033f, 48.5572f };
							break;
						case 4:
							*uParam1 = { 2231.054f, 349.3844f, 47.2356f };
							break;
						case 5:
							*uParam1 = { 2239.505f, 370.6862f, 46.0616f };
							break;
						case 6:
							*uParam1 = { 2233.874f, 376.6818f, 48.6074f };
							break;
						case 7:
							*uParam1 = { 2225.481f, 373.6492f, 51.8369f };
							break;
					}
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 1:
					*uParam1 = { 2365.932f, 884.5194f, 73.829f };
					break;
				case 2:
					*uParam1 = { 2357.523f, 887.364f, 73.6483f };
					break;
				case 3:
					*uParam1 = { 2356.994f, 875.4745f, 75.1467f };
					break;
				case 4:
					*uParam1 = { 2368.435f, 880.3166f, 74.2015f };
					break;
				case 5:
					*uParam1 = { 2371.591f, 892.6826f, 73.1244f };
					break;
				case 6:
					*uParam1 = { 2337.391f, 876.0068f, 74.0349f };
					break;
				case 7:
					*uParam1 = { 2334.523f, 859.9404f, 79.6665f };
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 1:
					*uParam1 = { 2387.229f, 1081.107f, 86.0164f };
					break;
				case 2:
					*uParam1 = { 2389.928f, 1085.194f, 87.4927f };
					break;
				case 3:
					*uParam1 = { 2378.365f, 1088.183f, 86.0293f };
					break;
				case 4:
					*uParam1 = { 2376.322f, 1069.768f, 84.0566f };
					break;
				case 5:
					*uParam1 = { 2397.98f, 1081.741f, 88.3477f };
					break;
				case 6:
					*uParam1 = { 2394.057f, 1102.884f, 92.2858f };
					break;
				case 7:
					*uParam1 = { 2383.151f, 1106.654f, 89.8897f };
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 1:
					*uParam1 = { 2406.771f, 766.3069f, 66.9201f };
					break;
				case 2:
					*uParam1 = { 2416.629f, 773.7221f, 67.1645f };
					break;
				case 3:
					*uParam1 = { 2406.41f, 775.5928f, 67.2986f };
					break;
				case 4:
					*uParam1 = { 2418.522f, 762.7133f, 66.8697f };
					break;
				case 5:
					*uParam1 = { 2424.586f, 777.2223f, 67.3494f };
					break;
				case 6:
					*uParam1 = { 2416.513f, 785.4976f, 67.8911f };
					break;
				case 7:
					*uParam1 = { 2401.04f, 782.2295f, 67.6257f };
					break;
			}
			break;
	}
	*uParam2 = 0f;
}

void func_219(int iParam0, int iParam1)
{
	func_326(0, iParam0, iParam1);
}

Vector3 func_220()
{
	vector3 vVar0;
	var uVar3;

	func_215(&vVar0, &uVar3);
	return vVar0;
}

void func_221(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		func_327(iParam0);
	}
	func_328(0, iParam0, vParam1, fParam4, iParam5);
}

void func_222(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_259(&(uParam0->f_2), 131072);
	}
	else
	{
		func_242(&(uParam0->f_2), 131072);
	}
}

void func_223(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_259(&(uParam0->f_2), 2048);
	}
	else
	{
		func_242(&(uParam0->f_2), 2048);
	}
}

void func_224(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_259(&(uParam0->f_2), 256);
	}
	else
	{
		func_242(&(uParam0->f_2), 256);
	}
}

void func_225(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 4);
	}
	else
	{
		func_259(uParam0, 4);
	}
}

void func_226(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_259(&(uParam0->f_2), 4);
	}
	else
	{
		func_242(&(uParam0->f_2), 4);
	}
}

void func_227(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_259(&(uParam0->f_2), 8);
	}
	else
	{
		func_242(&(uParam0->f_2), 8);
	}
}

void func_228(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_259(&(uParam0->f_2), 16384);
	}
	else
	{
		func_242(&(uParam0->f_2), 16384);
	}
}

void func_229(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_259(&(uParam0->f_2), 128);
	}
	else
	{
		func_242(&(uParam0->f_2), 128);
	}
}

void func_230(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 16);
	}
	else
	{
		func_259(uParam0, 67108864);
		func_259(uParam0, 16);
	}
}

void func_231(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_232(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

void func_233(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(&(uParam0->f_1), 2);
	}
	else
	{
		func_259(&(uParam0->f_1), 2);
	}
}

void func_234(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 256);
	}
	else
	{
		func_259(uParam0, 256);
	}
}

void func_235(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_242(uParam0, 268435456);
	}
	else
	{
		func_259(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_242(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_259(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_242(uParam0, 536870912);
	}
	else
	{
		func_259(uParam0, 536870912);
	}
}

void func_236(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

var func_237()
{
	return Local_640.f_3;
}

void func_238(var uParam0, int iParam1)
{
	func_261(&(uParam0->f_21), iParam1);
}

void func_239()
{
	int iVar0;

	if (Local_13.f_7.f_1 == -1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		Local_13.f_7.f_1 = iVar0;
	}
}

int func_240()
{
	return func_329();
}

bool func_241(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_242(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_243(int iParam0)
{
	int iVar0;

	if (!func_181(iParam0))
	{
		return false;
	}
	iVar0 = func_330(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_244(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_245(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_246(struct<31> Param0)
{
	var uVar0;

	func_245(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

bool func_247(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_331(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

bool func_248(var uParam0)
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
	while (iVar2 < 8)
	{
		if (func_171(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_332(iVar2, uParam0, &bVar1))
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
			if (func_333(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_38[iVar2]))
					{
						NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_38[iVar2]);
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

void func_249()
{
	func_125(2);
}

bool func_250(bool bParam0)
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
	vVar10 = { Local_640.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = func_334(iVar0, iVar1);
			if (func_173(iVar0, iVar1))
			{
			}
			else if (func_172(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_640.f_311[iVar0 /*20*/].f_2, iVar1))
			{
				if (func_335(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar0 /*2*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_47[iVar0 /*2*/][iVar1]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_47[iVar0 /*2*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar0 /*2*/][iVar1]))
				{
					if (!func_336(iVar0, iVar1))
					{
						vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_337(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_337(iVar0, iVar1) };
					}
					if (func_338(iVar0, iVar1))
					{
						if (!func_339(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_340(iVar0, iVar1))
							{
								iVar13 = PED::_0x9641A9A20310F6B8(Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 1, 0, 0);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_47[iVar0 /*2*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar0 /*2*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_341(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5, Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_4, func_337(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_47[iVar0 /*2*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar0 /*2*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_13.f_47[iVar0 /*2*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1091; //curOff = 577
							}
							else if (!func_342(&(Local_13.f_47[iVar0 /*2*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar0 /*2*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_13.f_47[iVar0 /*2*/][iVar1]);
								if (func_335(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar0 /*2*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_47[iVar0 /*2*/][iVar1]))
										{
											NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_47[iVar0 /*2*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_640.f_311[iVar0 /*20*/].f_2), iVar1);
								if (func_343(iVar0, iVar1))
								{
									TASK::_0x78B4567E18B54480(iVar13);
									GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
								}
								if (func_344(iVar0, iVar1))
								{
									ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
								}
								if (func_345(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_0xA91E6CF94404E8C9(iVar13);
								}
								if (func_338(iVar0, iVar1))
								{
									ENTITY::_0x9587913B9E772D29(iVar13, 0);
								}
								vVar4 = { func_346(iVar0, iVar1) };
								if (!func_244(vVar4))
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
										if (!func_347(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_348(vVar4.x)), MISC::ABSF(func_348(vVar4.y))) };
											vVar27 = { func_349(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_350(iVar0, iVar1))
								{
									func_351(iVar0, iVar1, 1);
								}
								if (func_352(iVar0, iVar1))
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

bool func_251()
{
	return Local_640.f_25;
}

void func_252(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

bool func_253(int iParam0)
{
	return func_180(Local_640.f_5, iParam0);
}

bool func_254(int iParam0)
{
	return func_180(Local_640.f_6, iParam0);
}

void func_255()
{
	if (Local_640.f_25 && func_353(&(Local_13.f_7), &(Local_640.f_25)))
	{
		func_125(7);
	}
}

int func_256(int iParam0)
{
	return Local_640.f_186.f_7[iParam0 /*11*/];
}

void func_257(vector3 vParam0)
{
	if (!func_127(Local_640.f_13))
	{
		func_128(&(Local_640.f_13));
	}
	if (func_129(Local_640.f_13) < Global_1901947.f_236.f_69)
	{
		return;
	}
	func_354(Local_640.f_9, vParam0, 0, Local_640.f_12);
	func_152(&(Local_640.f_13));
}

int func_258()
{
	return func_355();
}

void func_259(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_260(int iParam0)
{
	if (!func_181(iParam0))
	{
		return 0;
	}
	if (!func_243(iParam0))
	{
		return 0;
	}
	return Global_1131196[iParam0 /*27*/].f_18.f_1;
}

void func_261(var uParam0, int iParam1)
{
	func_356(uParam0, iParam1);
}

void func_262(var uParam0, int iParam1)
{
	func_357(uParam0, iParam1);
}

void func_263(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_358(&Var0, iParam0))
			{
				func_359(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_264(int iParam0)
{
}

void func_265(int iParam0)
{
}

bool func_266()
{
	if (!HUD::_DOES_TEXT_DATABASE_EXIST("LEGANM"))
	{
		return true;
	}
	if (!HUD::_0x3CF96E16265B7DC8("LEGANM"))
	{
		HUD::_TEXT_DATABASE_REQUEST("LEGANM");
	}
	return HUD::_TEXT_DATABASE_HAS_LOADED("LEGANM");
}

char[] func_267()
{
	return "script@mp@naturalist@animal_events@beaver_dive";
}

char* func_268()
{
	return "pbl_action";
}

bool func_269(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam4, sParam3, true, true);
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
				{
					return false;
				}
			}
			if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
			{
				if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					return false;
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				*uParam0 = NETWORK::_ANIM_SCENE_TO_NET(*uParam1);
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
			}
			return false;
		}
		return true;
	}
	else
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			return false;
		}
		*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam0);
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_270()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET(Local_640.f_186.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_360(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_640.f_186.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_640.f_186.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					MISC::SET_BIT(&(Local_640.f_186.f_3), iVar0);
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

bool func_271()
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
			if (MISC::IS_BIT_SET(Local_640.f_311[iVar0 /*20*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_334(iVar0, iVar1);
				if (func_361(iVar1))
				{
					if (Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_0x93FFD92F05EC32FD(Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6 = PED::_0x91FE941F9FCFB702(Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_640.f_311[iVar0 /*20*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_640.f_311[iVar0 /*20*/].f_1), iVar1);
					}
				}
				else if (func_362(iVar1))
				{
					WEAPON::_0x72D4CB5DB927009C(Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5, -1, 0);
					if (!WEAPON::_0xFF07CF465F48B830(Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_640.f_311[iVar0 /*20*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_640.f_311[iVar0 /*20*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @468; //curOff = 360
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_640.f_311[iVar0 /*20*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_640.f_311[iVar0 /*20*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @468; //curOff = 422
					}
					else if (!MISC::IS_BIT_SET(Local_640.f_311[iVar0 /*20*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_640.f_311[iVar0 /*20*/].f_1), iVar1);
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

bool func_272(var uParam0, var uParam1)
{
	if (*uParam0 == 3)
	{
		return func_269(&(uParam0->f_9), &(uParam1->f_16), &(uParam1->f_4), &(uParam1->f_12), 64);
	}
	return true;
}

bool func_273()
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
	vVar10 = { Local_640.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = func_334(iVar0, iVar1);
			if (func_172(iVar0, iVar1))
			{
			}
			else if (!func_173(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_640.f_311[iVar0 /*20*/].f_2, iVar1))
					{
						if (func_335(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar0 /*2*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_47[iVar0 /*2*/][iVar1]))
								{
									NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_47[iVar0 /*2*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_640.f_311[iVar0 /*20*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_336(iVar0, iVar1))
				{
					vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_337(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_337(iVar0, iVar1) };
				}
				if (func_338(iVar0, iVar1))
				{
					if (!func_339(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_340(iVar0, iVar1))
						{
							iVar13 = PED::_0x9641A9A20310F6B8(Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 0, 0, 0);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_341(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5, Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/].f_4, func_337(iVar0, iVar1), true, 1f);
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
						MISC::SET_BIT(&(Local_640.f_311[iVar0 /*20*/].f_2), iVar1);
						if (func_343(iVar0, iVar1))
						{
							TASK::_0x78B4567E18B54480(iVar13);
							GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
						}
						if (func_344(iVar0, iVar1))
						{
							ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
						}
						if (func_345(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar13);
						}
						if (func_338(iVar0, iVar1))
						{
							ENTITY::_0x9587913B9E772D29(iVar13, 0);
						}
						vVar4 = { func_346(iVar0, iVar1) };
						if (!func_244(vVar4))
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
								if (!func_347(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_348(vVar4.x)), MISC::ABSF(func_348(vVar4.y))) };
									vVar27 = { func_349(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_640.f_311[iVar0 /*20*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_350(iVar0, iVar1))
						{
							func_351(iVar0, iVar1, 1);
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

void func_274(struct<2> Param0)
{
	if (func_301(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_301(Param0)))
	{
		STATS::_0x99230691875FC218(func_299(Param0), func_301(Param0), Global_35);
	}
}

void func_275()
{
	int iVar0;
	int iVar1;

	if (!func_247(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_363(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_276()
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
			if (func_173(iVar1, iVar2))
			{
			}
			else if (func_172(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar1 /*2*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_47[iVar1 /*2*/][iVar2]);
				Local_640.f_311[iVar1 /*20*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_335(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_47[iVar1 /*2*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_47[iVar1 /*2*/][iVar2]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_47[iVar1 /*2*/][iVar2]);
						}
					}
				}
				if (func_343(iVar1, iVar2))
				{
					TASK::_0x78B4567E18B54480(iVar0);
					GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, true);
				}
			}
			else if (0 != func_334(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_256(0);
	func_364(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		func_365(&iVar0, 1, 0);
	}
	if (func_115() == 1)
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar0, "DLC_MP007_Leg_Beav_Event_Chew_group", 0f);
	}
	iVar1 = 1;
	while (iVar1 <= 7)
	{
		iVar2 = func_256(iVar1);
		func_366(iVar1);
		if (func_367() < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 25)
		{
			func_368(iVar1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
		}
		else if (func_213())
		{
			func_365(&iVar2, 0, 0);
		}
		else
		{
			func_365(&iVar2, 0, iVar1 > 3);
			if (iVar1 <= 3)
			{
				TASK::TASK_WANDER_IN_AREA(iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 15f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
		}
		iVar1++;
	}
}

void func_278()
{
	ENTITY::SET_ENTITY_VISIBLE(func_369(0), false);
}

void func_279(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	func_370(iParam1, 256);
	uParam0->f_61 = iParam1;
	*uParam0 = func_256(iParam1);
	uParam0->f_33 = iParam5;
	uParam0->f_51 = { vParam2 };
}

void func_280(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	float fVar2;

	fVar0 = Global_1901947.f_852;
	iVar1 = Global_1901947.f_852.f_1;
	fVar2 = Global_1901947.f_852.f_2;
	switch (iParam1)
	{
		case 14:
			func_372(uParam0, func_371(*uParam0), 1000, 15f, 1500f, 10f, -1723181095);
			func_373(uParam0, 30f, 50f, 120f, 50f, 80f, 500f, 1f, 4f, 0.5f);
			func_374(uParam0, 8);
			func_374(uParam0, 4);
			break;
		case 0:
			func_372(uParam0, "LEGENDARY_ALLIGATOR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 30f, 50f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 1:
			func_372(uParam0, "LEGENDARY_BEAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 2:
			func_372(uParam0, "LEGENDARY_BEAVER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 3:
			func_372(uParam0, "LEGENDARY_BISON_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 4:
			func_372(uParam0, "LEGENDARY_BOAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 5:
			func_372(uParam0, "LEGENDARY_BUCK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 6:
			func_372(uParam0, "LEGENDARY_COUGAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 7:
			func_372(uParam0, "LEGENDARY_PANTHER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 8:
			func_372(uParam0, "LEGENDARY_COYOTE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 9:
			func_372(uParam0, "LEGENDARY_FOX_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 10:
			func_372(uParam0, "LEGENDARY_MOOSE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 11:
			func_372(uParam0, "LEGENDARY_RAM_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 12:
			func_372(uParam0, "LEGENDARY_WOLF_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 13:
			func_372(uParam0, "LEGENDARY_ELK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_373(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
	}
}

bool func_281()
{
	return (func_131(32) || func_130(32, 255));
}

bool func_282(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_375(iParam0, joaat("COOLDOWN")) };
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

void func_283()
{
	func_376();
}

void func_284()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_377(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_285()
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
	if (!func_247(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_640.f_186.f_124)
	{
		bVar8 = true;
		Local_640.f_186.f_124 = !Local_640.f_186.f_124;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_640.f_186.f_96 >= 8)
		{
			Local_640.f_186.f_96 = 0;
		}
		iVar0 = Local_640.f_186.f_96;
		Local_640.f_186.f_96++;
		iVar9 = func_378(iVar0);
		iVar1 = Local_640.f_186.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_171(iVar9, 4))
		{
			func_363(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_63[iVar3 /*18*/].f_7.f_2[iVar0] > -1f)
			{
				Local_63[iVar3 /*18*/].f_7.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_640.f_186.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_640.f_186.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_640.f_186.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_640.f_186.f_97), iVar0);
			}
		}
		else
		{
			bVar7 = func_379(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_640.f_186.f_97, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_640.f_186.f_97), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_640.f_186.f_97), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_63[iVar3 /*18*/].f_7.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_63[iVar3 /*18*/].f_7.f_1), iVar0);
				}
				func_380(&(Local_640.f_186.f_98[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_63[iVar3 /*18*/].f_7.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_381(&(Local_640.f_186.f_98[iVar0 /*3*/])) || func_382(&(Local_640.f_186.f_98[iVar0 /*3*/]), 0.5f))))
			{
				func_383(&(Local_640.f_186.f_98[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_63[iVar3 /*18*/].f_7.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_171(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_640.f_186.f_124, false, 256);
		}
		if (func_171(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_384(iVar9))
						{
							if (!func_332(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_385(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::_0xB07D3185E11657A5(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_171(iVar9, 8))
			{
				if (!func_384(iVar9))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_640.f_186.f_97 != 0)
	{
		if (!func_386(1, 255))
		{
			func_387(1);
		}
	}
	else if (func_386(1, 255))
	{
		func_388(1);
	}
}

void func_286()
{
	float fVar0;

	func_389();
	func_390();
	func_391();
	func_392(&(Local_640.f_170));
	if (Local_640.f_25)
	{
		func_393(&(Local_13.f_7), &(Local_640.f_25), &(Local_640.f_53));
	}
	func_394();
	if (func_395(&(Local_640.f_53)))
	{
		func_396(&(Local_640.f_53));
	}
	func_397(Local_640.f_53);
	func_398(Local_640.f_53);
	func_399(Local_640.f_53);
	if (func_295(2, -1))
	{
		fVar0 = 150f;
	}
	else
	{
		fVar0 = 250f;
	}
	func_400(Local_640.f_53, fVar0);
}

bool func_287()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_640.f_14))
	{
		return false;
	}
	if (func_401())
	{
		return false;
	}
	if (func_402(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

int func_288(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return 0;
	}
	if (bParam1)
	{
		return 2;
	}
	return 1;
}

void func_289(int iParam0, int iParam1)
{
	if (Local_640.f_163.f_6 == -1)
	{
		Local_640.f_163.f_6 = iParam1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_403(&(Local_640.f_53), 128))
	{
		if (func_404(Global_34, iParam0, 20f, 1, 1))
		{
			func_406(iParam0, func_405(ENTITY::GET_ENTITY_MODEL(iParam0)), iParam1, &(Local_640.f_53));
			func_374(&(Local_640.f_53), 128);
		}
	}
}

void func_290()
{
	int iVar0;

	iVar0 = func_256(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || (PED::GET_PED_CONFIG_FLAG(iVar0, 580, false) && TASK::IS_PED_IN_WRITHE(iVar0)))
	{
		if ((ENTITY::IS_ENTITY_IN_WATER(iVar0) && !func_407(128)) && func_298("LA_BEAVER_H_LASSO") != 0)
		{
			func_408(128);
		}
	}
}

void func_291()
{
	int iVar0[1];

	if (!func_407(1024))
	{
		if (func_294() && func_409())
		{
			func_408(1024);
		}
	}
	else
	{
		iVar0[0] = func_256(0);
		func_410(&iVar0);
	}
}

void func_292()
{
	int iVar0;

	Local_640.f_173.f_1 = 0;
	Local_640.f_173.f_2 = -1;
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_640.f_173.f_1 = (Local_640.f_173.f_1 || Local_63[iVar0 /*18*/].f_6);
			Local_640.f_173.f_2 = (Local_640.f_173.f_2 && Local_63[iVar0 /*18*/].f_6);
		}
		iVar0++;
	}
}

void func_293()
{
	func_411();
}

bool func_294()
{
	return func_66(8);
}

bool func_295(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_412(iParam1, 0, 1))
	{
		return false;
	}
	return func_241(Local_63[iParam1 /*18*/].f_4, iParam0);
}

bool func_296(int iParam0)
{
	return func_241(Local_640.f_163.f_1, iParam0);
}

char* func_297(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_ALLIGATOR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_ALLIGATOR_02";
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BEAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BEAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BEAVER_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BEAVER_02";
					break;
				case 2:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BISON_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BISON_02";
					break;
				case 2:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BOAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BOAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BUCK_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BUCK_02";
					break;
				case 2:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_COUGAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_COUGAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_PANTHER_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_PANTHER_02";
					break;
				case 2:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_COYOTE_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_COYOTE_02";
					break;
				case 2:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_FOX_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_FOX_02";
					break;
				case 2:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_MOOSE_02";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_MOOSE_01";
					break;
				case 2:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BIG_HORN_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BIG_HORN_02";
					break;
				case 2:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_WOLF_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_WOLF_02";
					break;
				case 2:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_ELK_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_ELK_02";
					break;
				case 2:
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	return sVar0;
}

var func_298(char* sParam0)
{
	if (!func_413(255))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	return func_414(sParam0, 10000, 0, 0, 0, 1);
}

int func_299(var uParam0, var uParam1)
{
	return uParam0;
}

int func_300(int iParam0)
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

int func_301(struct<2> Param0)
{
	return func_415(Param0);
}

void func_302(struct<2> Param0, var uParam2)
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
	switch (func_299(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_417(func_416(Param0));
			iVar5 = func_418(iVar4);
			if (!func_419(iVar5, 0))
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

int func_303(int iParam0, int iParam1)
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
			func_31(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_304(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_420(&Var0);
}

var func_305(int iParam0)
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

var func_306(int iParam0)
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

var func_307(int iParam0)
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

bool func_308(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_640.f_186.f_7[iParam0 /*11*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_640.f_186.f_7[iParam0 /*11*/]))
		{
			PED::DELETE_PED(&(Local_640.f_186.f_7[iParam0 /*11*/]));
			Local_640.f_186.f_7[iParam0 /*11*/] = 0;
			return true;
		}
	}
	return false;
}

int func_309(int iParam0)
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

int func_310(int iParam0)
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

void func_311(var uParam0)
{
	func_188(uParam0, 0);
	func_188(uParam0, 1);
	func_188(uParam0, 3);
	func_186(uParam0);
}

void func_312(var uParam0)
{
	func_187(uParam0);
	func_421(uParam0, 0, 3);
}

void func_313(var uParam0)
{
	func_188(uParam0, 0);
	func_189(uParam0, 0);
	func_189(uParam0, 1);
	func_189(uParam0, 2);
}

void func_314(var uParam0)
{
	func_188(uParam0, 1);
	func_186(uParam0);
}

void func_315(var uParam0)
{
	func_188(uParam0, 2);
	func_189(uParam0, 3);
}

void func_316(var uParam0)
{
	func_188(uParam0, 3);
	func_189(uParam0, 4);
}

void func_317(var uParam0)
{
	func_189(uParam0, 0);
	func_189(uParam0, 1);
}

void func_318(var uParam0)
{
	func_189(uParam0, 2);
	func_189(uParam0, 3);
}

void func_319(var uParam0)
{
	func_189(uParam0, 4);
	func_189(uParam0, 5);
}

bool func_320(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_321(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_322(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_323(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

Vector3 func_324()
{
	return Local_640.f_15;
}

int func_325(var uParam0, var uParam1)
{
	switch (func_240())
	{
		case 5:
			*uParam0 = { 2484.887f, 552.37f, 67.983f };
			*uParam1 = -69.12f;
			return 1;
		case 6:
			*uParam0 = { 2233.03f, 356.227f, 47.2316f };
			*uParam1 = 62.8244f;
			return 0;
		case 7:
			*uParam0 = { 2358.704f, 882.16f, 74.1722f };
			*uParam1 = 167.6217f;
			return 0;
		case 8:
			*uParam0 = { 2383.881f, 1084.265f, 85.9333f };
			*uParam1 = 356.2589f;
			return 0;
		case 9:
			*uParam0 = { 2408.862f, 773.006f, 67.1943f };
			*uParam1 = 249.9681f;
			return 0;
		default:
			break;
	}
	return 0;
}

void func_326(int iParam0, int iParam1, int iParam2)
{
	Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_2 = iParam2;
}

void func_327(int iParam0)
{
	func_422(0, iParam0);
}

void func_328(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_7 = { vParam2 };
	Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_10 = { 0f, 0f, fParam5 };
	Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_13 = iParam6;
}

var func_329()
{
	return Local_640.f_2;
}

int func_330(int iParam0)
{
	if (!func_181(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

bool func_331(int iParam0, bool bParam1)
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

bool func_332(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_640.f_15 };
	iVar7 = 0;
	iVar8 = func_360(iParam0);
	iVar9 = func_423(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iParam0]))
		{
			iVar9 = func_423(iParam0);
			fVar0 = func_424(iParam0);
			if (!func_180(Local_640.f_186.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_425(iParam0)) };
			}
			else
			{
				vVar1 = { func_425(iParam0) };
			}
			if (!func_426(&(Local_13.f_38[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_38[iParam0]);
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
						PED::_UPDATE_PED_VARIATION(iVar7, func_171(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_427(iVar7, 1);
					}
					if (func_428(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_429(iParam0))
						{
							if (func_428(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_333(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_38[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_38[iParam0]);
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
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_13.f_38[iParam0])))
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

bool func_333(int iParam0)
{
	return func_171(iParam0, 128);
}

int func_334(int iParam0, int iParam1)
{
	return Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_2;
}

bool func_335(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_336(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_337(int iParam0, int iParam1)
{
	return Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_7;
}

bool func_338(int iParam0, int iParam1)
{
	return Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_13;
}

bool func_339(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_430(*uParam0, 0f, 0f, 0f))
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

bool func_340(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_640.f_311[iParam0 /*20*/].f_3, iParam1);
}

bool func_341(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 1);
}

bool func_342(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_431(iParam1))
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

bool func_343(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_344(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_345(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_346(int iParam0, int iParam1)
{
	return Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_10;
}

bool func_347(int iParam0, int iParam1, int iParam2)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_348(float fParam0)
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

Vector3 func_349(vector3 vParam0)
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

bool func_350(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_351(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_352(int iParam0, int iParam1)
{
	return func_180(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 512);
}

int func_353(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_432(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (func_433(128))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_434(uParam0, 10);
	}
	if (func_435() && uParam0->f_2 < 8)
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_434(uParam0, 8);
				break;
			case 0:
				func_434(uParam0, 9);
				break;
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_436(1))
			{
				switch (*uParam0)
				{
					case 1:
						func_434(uParam0, 1);
						break;
					case 2:
						func_434(uParam0, 3);
						break;
					case 3:
						func_434(uParam0, 5);
						break;
				}
			}
			break;
		case 5:
			if (func_437(uParam0, uParam1))
			{
				func_434(uParam0, 6);
			}
			break;
		case 6:
			if (func_438())
			{
				func_434(uParam0, 7);
			}
			break;
		case 7:
			break;
		case 1:
			if (PED::IS_PED_USING_ANY_SCENARIO(func_432(uParam1->f_1)))
			{
				func_434(uParam0, 2);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 8:
			if (func_439(iVar0, 780511057))
			{
				func_434(uParam0, 11);
			}
			break;
		case 9:
			if (PED::IS_PED_FLEEING(iVar0))
			{
				func_434(uParam0, 11);
			}
			break;
		case 11:
			if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
			{
				func_440(&(uParam0->f_6));
			}
			if ((func_441(uParam1, 32) && PED::IS_PED_FLEEING(iVar0)) && func_442(&(uParam0->f_6)) > 10f)
			{
				iVar1 = func_443(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if ((func_404(iVar1, iVar0, 15f, 1, 1) || (func_404(iVar1, iVar0, 40f, 1, 1) && PED::IS_PED_SHOOTING(iVar1))) || func_444(64))
					{
						func_445(uParam0, 1);
						func_434(uParam0, 8);
					}
				}
			}
			break;
		case 10:
			break;
	}
	return 0;
}

void func_354(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	struct<21> Var0;

	if (func_244(vParam2))
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
	func_447(&Var0, func_446(0, 8));
}

int func_355()
{
	if (func_448())
	{
		return 1;
	}
	if (!func_433(128))
	{
		return 0;
	}
	return 1;
}

void func_356(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_357(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_358(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_640.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != Local_640)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_640.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_640.f_3)
	{
		return false;
	}
	return true;
}

void func_359(int iParam0)
{
	switch (iParam0->f_9)
	{
		case 1122860053:
			if (!func_407(1))
			{
				func_449();
			}
			break;
		case joaat("ANIMALALERTED"):
			if (!func_407(4))
			{
				func_450(iParam0);
			}
			break;
		case 475888450:
			if (!func_407(2))
			{
				func_451(iParam0);
			}
			break;
		case 1335691564:
			if (iParam0->f_11 == 1)
			{
				func_452();
			}
			else
			{
				func_453();
			}
			break;
		case -922869466:
			func_454(iParam0);
			break;
		case 2126697993:
			func_455(iParam0);
			break;
		case -1485898032:
			func_456(iParam0);
			break;
	}
}

int func_360(int iParam0)
{
	return Local_640.f_186.f_7[iParam0 /*11*/].f_3;
}

bool func_361(int iParam0)
{
	return func_340(0, iParam0);
}

bool func_362(int iParam0)
{
	return func_341(0, iParam0);
}

void func_363(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_360(iParam0);
	bVar3 = func_331(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_640.f_186.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_38[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_640.f_186.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_63[iParam1 /*18*/].f_7.f_2[iParam0] = -1f;
				}
				else
				{
					Local_63[iParam1 /*18*/].f_7.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_333(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_38[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_38[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_457(iVar1, 1f, 0);
					sVar0 = func_458(iParam0);
					if (!MISC::_IS_STRING_SPACE(sVar0))
					{
						func_459(iVar1, sVar0, 1);
					}
				}
				if (func_428(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_429(iParam0))
					{
						if (func_428(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_640.f_186.f_5), iParam0);
				if (bParam2)
				{
					func_460(iParam0);
				}
			}
		}
	}
}

void func_364(int iParam0)
{
	Local_640.f_163.f_5 = func_405(ENTITY::GET_ENTITY_MODEL(iParam0));
	func_461(iParam0, &(Local_640.f_170));
	func_462(iParam0);
}

void func_365(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	if (bParam1)
	{
		func_463(*iParam0, func_288(func_213(), 0));
		PED::SET_PED_CONFIG_FLAG(*iParam0, 585, true);
		PED::_0xAE6004120C18DF97(*iParam0, 0, 1);
		PED::_0xAE6004120C18DF97(*iParam0, 1, 1);
		PED::_0xAE6004120C18DF97(*iParam0, 10, 1);
		ENTITY::_0x18FF3110CF47115D(*iParam0, 23, 0);
		if (func_115() == 0)
		{
			TASK::_0xC6170856E54557B2(*iParam0, 1, 10f);
		}
		if (func_251())
		{
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(*iParam0, true, 2f);
		}
	}
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 43, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*iParam0, 74, 1f);
	if (bParam2)
	{
		func_464(*iParam0);
		ENTITY::SET_ENTITY_COORDS(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) - Vector(10f, 0f, 0f), true, false, true, true);
	}
}

void func_366(int iParam0)
{
	int iVar0;

	iVar0 = func_256(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 402, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 542, true);
		POPULATION::_0xF74E134F40192884(iVar0, 1);
		func_465(iVar0);
	}
	func_370(iParam0, 256);
	func_370(iParam0, 16);
	if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iVar0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iVar0, 1);
	}
}

int func_367()
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	while (iVar1 <= 7)
	{
		if (func_466(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_368(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_408(2048);
			break;
		case 2:
			func_408(4096);
			break;
		case 3:
			func_408(8192);
			break;
		case 4:
			func_408(16384);
			break;
		case 5:
			func_408(32768);
			break;
		case 6:
			func_408(65536);
			break;
		case 7:
			func_408(131072);
			break;
		default:
			break;
	}
}

int func_369(int iParam0)
{
	return func_467(0, iParam0);
}

void func_370(int iParam0, int iParam1)
{
	func_242(&(Local_640.f_186.f_7[iParam0 /*11*/].f_2), iParam1);
}

char* func_371(int iParam0)
{
	int iVar0;

	iVar0 = func_405(ENTITY::GET_ENTITY_MODEL(iParam0));
	switch (iVar0)
	{
		case 0:
			return "LEGENDARY_ALLIGATOR_CALL_SOUNDS";
		case 1:
			return "LEGENDARY_BEAR_CALL_SOUNDS";
		case 2:
			return "LEGENDARY_BEAVER_CALL_SOUNDS";
		case 3:
			return "LEGENDARY_BISON_CALL_SOUNDS";
		case 4:
			return "LEGENDARY_BOAR_CALL_SOUNDS";
		case 5:
			return "LEGENDARY_BUCK_CALL_SOUNDS";
		case 6:
			return "LEGENDARY_COUGAR_CALL_SOUNDS";
		case 7:
			return "LEGENDARY_PANTHER_CALL_SOUNDS";
		case 8:
			return "LEGENDARY_COYOTE_CALL_SOUNDS";
		case 13:
			return "LEGENDARY_ELK_CALL_SOUNDS";
		case 9:
			return "LEGENDARY_FOX_CALL_SOUNDS";
		case 10:
			return "LEGENDARY_MOOSE_CALL_SOUNDS";
		case 12:
			return "LEGENDARY_WOLF_CALL_SOUNDS";
		default:
			break;
	}
	return "";
}

void func_372(var uParam0, char* sParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	StringCopy(&(uParam0->f_43), sParam1, 64);
	uParam0->f_28 = iParam2;
	uParam0->f_29 = fParam3;
	uParam0->f_31 = fParam4;
	uParam0->f_32 = fParam5;
	uParam0->f_30 = iParam6;
}

void func_373(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9)
{
	uParam0->f_34 = fParam1;
	uParam0->f_35 = fParam2;
	uParam0->f_36 = fParam3;
	uParam0->f_37 = fParam4;
	uParam0->f_38 = fParam5;
	uParam0->f_39 = fParam6;
	uParam0->f_40 = fParam7;
	uParam0->f_41 = fParam8;
	uParam0->f_42 = fParam9;
}

void func_374(var uParam0, int iParam1)
{
	func_261(&(uParam0->f_57), iParam1);
}

struct<2> func_375(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_468(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_469(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_376()
{
	Local_640.f_186.f_6 = 0;
	Local_640.f_186.f_2 = 0;
	Local_640.f_186.f_1 = -1;
}

void func_377(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_640.f_186.f_2 = (Local_640.f_186.f_2 || Local_63[iParam0 /*18*/].f_7);
		Local_640.f_186.f_1 = (Local_640.f_186.f_1 && Local_63[iParam0 /*18*/].f_7);
		Local_640.f_186.f_6 = (Local_640.f_186.f_6 || Local_63[iParam0 /*18*/].f_7.f_1);
	}
}

int func_378(int iParam0)
{
	return iParam0;
}

int func_379(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_63[iParam3 /*18*/].f_7.f_2[iParam2] = fVar0;
	if (fVar0 > Local_640.f_186.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_380(var uParam0)
{
	func_470(uParam0, 0f);
}

bool func_381(var uParam0)
{
	return func_471(*uParam0, 1);
}

bool func_382(var uParam0, float fParam1)
{
	if (!func_381(uParam0))
	{
		return false;
	}
	if (func_472(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_383(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_384(int iParam0)
{
	return true;
}

void func_385(int iParam0, int iParam1)
{
	func_259(&(Local_640.f_186.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_386(int iParam0, int iParam1)
{
	if (!func_331(iParam1, 0))
	{
		if (!func_247(&iParam1))
		{
			return false;
		}
	}
	return func_180(Local_63[iParam1 /*18*/].f_7, iParam0);
}

void func_387(int iParam0)
{
	int iVar0;

	if (!func_247(&iVar0))
	{
		return;
	}
	func_242(&(Local_63[iVar0 /*18*/].f_7), iParam0);
}

void func_388(int iParam0)
{
	int iVar0;

	if (!func_247(&iVar0))
	{
		return;
	}
	func_259(&(Local_63[iVar0 /*18*/].f_7), iParam0);
}

void func_389()
{
	int iVar0;

	Local_640.f_163.f_1 = 0;
	Local_640.f_163.f_2 = -1;
	Local_640.f_25.f_22 = 0;
	Local_640.f_25.f_23 = -1;
	Local_640.f_53.f_64 = 0;
	Local_640.f_53.f_63 = -1;
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_640.f_163.f_1 = (Local_640.f_163.f_1 || Local_63[iVar0 /*18*/].f_4);
			Local_640.f_163.f_2 = (Local_640.f_163.f_2 && Local_63[iVar0 /*18*/].f_4);
			Local_640.f_25.f_22 = (Local_640.f_25.f_22 || Local_63[iVar0 /*18*/].f_5);
			Local_640.f_25.f_23 = (Local_640.f_25.f_23 && Local_63[iVar0 /*18*/].f_5);
			Local_640.f_53.f_64 = (Local_640.f_53.f_64 || Local_63[iVar0 /*18*/].f_1);
			Local_640.f_53.f_63 = (Local_640.f_53.f_63 && Local_63[iVar0 /*18*/].f_1);
		}
		iVar0++;
	}
}

void func_390()
{
	int iVar0;

	Local_640.f_163.f_4++;
	if (Local_640.f_163.f_4 >= 8)
	{
		Local_640.f_163.f_4 = 0;
	}
	iVar0 = func_432(Local_640.f_163.f_4);
	if (MISC::IS_BIT_SET(Local_640.f_163.f_3, Local_640.f_163.f_4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_HUMAN(iVar0))
	{
		return;
	}
	if (func_473(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
		func_474(Local_640.f_163.f_4);
	}
}

void func_391()
{
	int iVar0;
	int iVar1;
	var uVar5;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) != -507840394)
		{
		}
		else if (!SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar1, 4))
		{
		}
		else if (iVar1 != 194)
		{
		}
		else
		{
			if (!SCRIPTS::GET_EVENT_DATA(1, iVar0, &uVar5, 6))
			{
				return;
			}
			func_475(&uVar5, &(Local_640.f_170));
		}
		iVar0++;
	}
}

void func_392(var uParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<2> Var3;

	if (uParam0->f_1 == 0)
	{
		return;
	}
	iVar0 = (Global_1296859.f_21 - uParam0->f_1) * 1000;
	if (iVar0 < 4000)
	{
		return;
	}
	else if (iVar0 > 15000 && func_241(uParam0->f_2, 4))
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		return;
	}
	else if (!func_241(uParam0->f_2, 4))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		fVar1 = func_476(Global_34, *uParam0, 1, 1);
		bVar2 = ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::_IS_ENTITY_FROZEN(*uParam0)) && !ENTITY::IS_ENTITY_VISIBLE(*uParam0));
		if (fVar1 < 300f && (func_241(uParam0->f_2, 1) || func_241(uParam0->f_2, 2)))
		{
			if (!func_477())
			{
				if (!bVar2)
				{
					func_478(*uParam0);
				}
			}
		}
		if (!bVar2 && fVar1 < 300f)
		{
			func_479(*uParam0);
		}
		if (func_241(uParam0->f_2, 1))
		{
			func_480(2, *uParam0);
		}
		if (func_241(uParam0->f_2, 1) && ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			Var3 = { func_469(joaat("USED"), -1530824760) };
			if (STATS::_0x5420D398A42917FC(*uParam0, &Var3))
			{
				func_481(Var3, 1);
			}
		}
		func_261(&(uParam0->f_2), 4);
	}
}

void func_393(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_432(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0);
	if (!func_482() && func_483(uParam1->f_1, 40f, 60f, 100f, 1065353216 /* Float: 1f */, 5, 0, 1))
	{
		func_484();
	}
	if (!func_435())
	{
		if (func_485(iVar0, &(Local_640.f_118)) || func_486(iVar0, &(Local_640.f_118), 0))
		{
			func_487();
			func_488(uParam0, uParam1, 0, 0);
		}
	}
	if ((func_489(4, -1) && !func_444(8)) && !func_490(uParam0, iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_488(uParam0, uParam1, 0, 0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
		}
	}
	if (!func_441(uParam1, 8) && func_435())
	{
		iVar1 = 0;
		while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && func_489(4, -1))
			{
				uParam1->f_20 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			}
			else
			{
				iVar1++;
			}
		}
		if (uParam0->f_2 == 7 && !func_441(uParam1, 2))
		{
			func_491(uParam1->f_16);
			func_238(uParam1, 2);
		}
		func_488(uParam0, uParam1, 0, 0);
		func_492(uParam0, uParam1);
		func_493(&(Local_640.f_53));
		func_494(&(Local_640.f_53));
		func_238(uParam1, 8);
	}
	func_495(uParam0, uParam1, uParam2);
	if (func_441(uParam1, 8))
	{
		func_496(uParam0, uParam1);
	}
	else
	{
		func_497(uParam1);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!func_489(1, -1))
			{
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					iVar2 = Local_640.f_186.f_7[iVar1 /*11*/];
					if (iVar1 != uParam1->f_1 && ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						func_498(iVar1);
					}
					iVar1++;
				}
				func_499(1);
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(uParam1->f_16))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam1->f_16, "bStopLoop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam1->f_16, "bStopLoop", true, false);
				}
			}
			if (!func_441(uParam1, 4))
			{
				if (func_500(uParam1->f_16) || ANIMSCENE::_0xB89FCFF19DAFFF28(uParam1->f_16, &(uParam1->f_14)))
				{
					func_501(uParam1->f_16);
					func_238(uParam1, 4);
				}
			}
			else
			{
				func_502();
			}
			break;
		case 1:
			if (bVar3 && !PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				if (func_441(uParam1, 1))
				{
					iVar4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), uParam1->f_3, 2f, 1, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar4))
					{
						TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar4, 0, 0, false, true, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, uParam1->f_3, Local_640.f_186.f_7[uParam1->f_1 /*11*/].f_6, Local_640.f_186.f_7[uParam1->f_1 /*11*/].f_5, 0, false, true, 0, -1f, false);
					}
				}
				else
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, uParam1->f_3, Local_640.f_186.f_7[uParam1->f_1 /*11*/].f_6, Local_640.f_186.f_7[uParam1->f_1 /*11*/].f_5, 0, false, true, 0, -1f, false);
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (bVar3 && !func_503(iVar0, 923520851))
			{
				TASK::TASK_WANDER_IN_AREA(iVar0, Local_640.f_186.f_7[uParam1->f_1 /*11*/].f_6, uParam1->f_26, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
			break;
		case 4:
			break;
		case 8:
			func_488(uParam0, uParam1, 0, 0);
			break;
		case 9:
			func_488(uParam0, uParam1, 0, 0);
			break;
		case 11:
			if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !func_489(64, -1))
			{
				if (func_404(Global_34, iVar0, 15f, 1, 1) || (func_404(Global_34, iVar0, 40f, 1, 1) && PED::IS_PED_SHOOTING(Global_34)))
				{
					func_499(64);
				}
			}
			else if (func_489(64, -1))
			{
				if (!func_404(Global_34, iVar0, 40f, 1, 1) || PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
				{
					func_504(64);
				}
			}
			if (((bVar3 && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && (MISC::GET_FRAME_COUNT() % 10) == 0)
			{
				iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_0xCD66FEA29400A0B5(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && PED::IS_PED_A_PLAYER(iVar5))
				{
					iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
					iVar7 = iVar6;
					if (func_412(iVar7, 1, 1))
					{
						if (func_505(4, iVar7))
						{
							func_488(uParam0, uParam1, 1, 1);
						}
					}
				}
			}
			if (!func_444(16))
			{
				if (bVar3)
				{
					PED::SET_PED_KEEP_TASK(iVar0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_499(16);
				}
			}
			else if ((((Local_13.f_7.f_1 == 0 && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, false)) && !PED::IS_PED_FLEEING(iVar0)) && TASK::IS_PED_STILL(iVar0))
			{
				func_488(uParam0, uParam1, 1, 1);
			}
			if ((!func_444(32) && bVar3) && PED::IS_PED_IN_COMBAT(iVar0, 0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(uParam1->f_20)) || !func_404(PLAYER::GET_PLAYER_PED(uParam1->f_20), iVar0, 100f, 1, 1))
				{
					TASK::TASK_ANIMAL_UNALERTED(iVar0, -1, 0, 0, 0);
					PED::SET_PED_KEEP_TASK(iVar0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_499(32);
				}
			}
			break;
		case 10:
			break;
	}
}

void func_394()
{
	int iVar0;

	if (func_506(256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_640.f_53))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_640.f_53))
	{
		return;
	}
	if (!func_404(Global_34, Local_640.f_53, 50f, 1, 1))
	{
		func_383(&(Local_640.f_118.f_42));
		func_507(4);
		func_507(8);
		func_507(16);
		func_507(32);
		func_507(64);
		return;
	}
	if ((PED::_IS_PED_HOGTIED(Global_34) || PED::_GET_LASSOER_OF_PED(Global_34)) || PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_508(Local_640.f_53, Global_34, &(Local_640.f_118.f_39), &(Local_640.f_118.f_38));
	}
	if (!func_505(4, -1))
	{
		if (iVar0 == 1)
		{
			func_509(&(Local_640.f_118.f_42), 0);
			func_510(4);
		}
	}
	else if (iVar0 == 0)
	{
		func_383(&(Local_640.f_118.f_42));
		func_507(4);
		func_507(8);
		func_507(16);
		func_507(32);
		func_507(64);
		func_507(128);
	}
	else
	{
		if (!func_505(128, -1) && func_486(Local_640.f_53, &(Local_640.f_118), 0))
		{
			func_510(128);
		}
		if (func_472(&(Local_640.f_118.f_42)) > 15f)
		{
			if (!func_505(64, -1))
			{
				func_510(64);
			}
		}
		else if (func_472(&(Local_640.f_118.f_42)) > 10f)
		{
			if (!func_505(32, -1))
			{
				func_510(32);
			}
		}
		else if (func_472(&(Local_640.f_118.f_42)) > 8f)
		{
			if (!func_505(16, -1))
			{
				func_510(16);
			}
		}
		else if (func_472(&(Local_640.f_118.f_42)) > 5f)
		{
			if (!func_505(8, -1))
			{
				func_510(8);
			}
		}
	}
}

bool func_395(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	if (!func_413(255))
	{
		return false;
	}
	if (!func_403(&(Local_640.f_53), 256) && func_404(Global_34, *uParam0, Global_1901947.f_852.f_3, 1, 0))
	{
		func_511();
	}
	else if (func_403(&(Local_640.f_53), 256) && !func_404(Global_34, *uParam0, (Global_1901947.f_852.f_3 + 50f), 1, 0))
	{
		func_512();
	}
	if ((uParam0->f_56 < 2 && func_513()) || Local_13.f_18.f_1)
	{
		uParam0->f_56 = 2;
	}
	switch (uParam0->f_56)
	{
		case 0:
			if (!func_514(uParam0))
			{
				return false;
			}
			if (func_515(Global_34, uParam0->f_51, uParam0->f_31, 1, 1))
			{
				if ((MISC::GET_FRAME_COUNT() % 5) == 0)
				{
					CLOCK::GET_POSIX_TIME(&uVar0, &uVar0, &uVar0, &uVar0, &uVar0, &iVar1);
					iVar2 = (iVar1 % BUILTIN::ROUND(uParam0->f_29));
					if (iVar2 < 5)
					{
						func_516(uParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (!func_515(Global_34, uParam0->f_51, (uParam0->f_31 + 20f), 1, 1))
			{
				func_383(&(uParam0->f_58));
				func_516(uParam0, 0);
			}
			else if (func_515(Global_34, uParam0->f_51, (uParam0->f_33 + 10f), 1, 1) || func_403(uParam0, 1))
			{
				func_383(&(uParam0->f_58));
				func_516(uParam0, 2);
			}
			else if (uParam0->f_28 == -1 || uParam0->f_55 < uParam0->f_28)
			{
				if (!func_381(&(uParam0->f_58)) || func_472(&(uParam0->f_58)) > uParam0->f_29)
				{
					if (func_515(Global_34, uParam0->f_51, (uParam0->f_33 + 20f), 1, 1))
					{
						uParam0->f_32 = (uParam0->f_32 / 4f);
					}
					if (func_403(uParam0, 8))
					{
						vVar3 = { func_517(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_32, 0f) };
						func_518(vVar3, uParam0->f_30);
					}
					else
					{
						vVar3 = { func_517(uParam0->f_51, uParam0->f_32, 0f) };
						func_518(vVar3, uParam0->f_30);
					}
					func_380(&(uParam0->f_58));
					func_519();
					func_520(uParam0, uParam0->f_51);
					uParam0->f_55++;
					if (uParam0->f_55 == 1)
					{
						iVar6 = func_521(21, 34);
						if (iVar6 <= 3)
						{
							func_298("LA_H_BLIPPED");
						}
					}
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

int func_396(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (!func_413(255))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if ((!func_505(2, -1) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && PED::IS_PED_FLEEING(*uParam0))
		{
			func_510(2);
		}
		if (func_522(&(Local_13.f_20)))
		{
			bVar2 = true;
		}
		else if (func_506(2))
		{
			bVar2 = true;
		}
		func_523(*uParam0, &(Local_13.f_20), bVar2);
	}
	if ((uParam0->f_2 < 12 && ENTITY::DOES_ENTITY_EXIST(*uParam0)) && ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1));
		}
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
		func_524(uParam0, 12);
	}
	if ((uParam0->f_2 < 11 && PED::GET_PED_CONFIG_FLAG(*uParam0, 580, true)) && TASK::IS_PED_IN_WRITHE(*uParam0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1));
		}
		func_524(uParam0, 11);
	}
	if (func_403(uParam0, 64) && MAP::DOES_BLIP_EXIST(uParam0->f_54))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_54));
	}
	if (uParam0->f_2 <= 3 && func_513())
	{
		uParam0->f_2 = 3;
		func_494(uParam0);
	}
	if (func_525(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (func_404(Global_34, *uParam0, uParam0->f_33, 0, 1) && uParam0->f_2 >= 4)
			{
				if (!func_526())
				{
					func_527();
				}
				if (!func_294())
				{
					func_528();
				}
			}
		}
	}
	if (((uParam0->f_2 < 3 && Local_13.f_18.f_1) && ENTITY::DOES_ENTITY_EXIST(*uParam0)) && !func_529(*uParam0))
	{
		func_524(uParam0, 3);
		func_493(uParam0);
		func_494(uParam0);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_403(uParam0, 4))
			{
				func_524(uParam0, 2);
			}
			if (func_530(uParam0) || func_403(uParam0, 1))
			{
				func_524(uParam0, 1);
			}
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_54))
			{
				uParam0->f_54 = MAP::_BLIP_ADD_FOR_COORD(func_531(), uParam0->f_51);
				MAP::_BLIP_SET_MODIFIER(uParam0->f_54, joaat("BLIP_MODIFIER_LEGENDARY"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_54, "LA_CLUE");
				func_527();
				func_524(uParam0, 2);
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				iVar0 = func_432(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && MISC::IS_BIT_SET(uParam0->f_62, iVar1)) && func_483(iVar1, uParam0->f_34, uParam0->f_35, uParam0->f_36, 1065353216 /* Float: 1f */, 5, 0, 1))
				{
					func_493(uParam0);
				}
				else
				{
					iVar1++;
				}
			}
			iVar0 = *uParam0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_483(uParam0->f_61, uParam0->f_34, uParam0->f_35, uParam0->f_36, 1065353216 /* Float: 1f */, 5, 0, 1))
			{
				func_493(uParam0);
			}
			if (func_403(uParam0, 1))
			{
				func_524(uParam0, 3);
			}
			break;
		case 3:
			iVar0 = *uParam0;
			if (MAP::DOES_BLIP_EXIST(uParam0->f_54))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_54));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_483(uParam0->f_61, uParam0->f_34, uParam0->f_35, uParam0->f_36, 1065353216 /* Float: 1f */, 5, 0, 1))
			{
				func_494(uParam0);
			}
			if (func_525(uParam0))
			{
				if (TASK::_0x6DAC799857EF3F11(Global_34, *uParam0) || TASK::_0x920684BE432875B1(*uParam0))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_532(*uParam0, &(uParam0->f_1), 0, bVar3);
				func_533(&(uParam0->f_58), -5f, 1);
				func_524(uParam0, 4);
			}
			break;
		case 4:
			if (!PED::IS_PED_FLEEING(*uParam0))
			{
				if (!func_381(&(uParam0->f_58)))
				{
					func_509(&(uParam0->f_58), 0);
				}
				else if (func_472(&(uParam0->f_58)) > 5f && !func_404(*uParam0, Global_34, uParam0->f_38, 1, 1))
				{
					func_383(&(uParam0->f_58));
					func_524(uParam0, 5);
				}
			}
			else if (!func_381(&(uParam0->f_58)))
			{
				func_509(&(uParam0->f_58), 0);
			}
			else if (func_472(&(uParam0->f_58)) > 5f && !func_483(uParam0->f_61, uParam0->f_37, (uParam0->f_35 + 10f), (uParam0->f_36 + 10f), 1f, 0, 0, 1))
			{
				func_383(&(uParam0->f_58));
				func_524(uParam0, 5);
			}
			break;
		case 5:
			if (!func_381(&(uParam0->f_58)))
			{
				func_509(&(uParam0->f_58), 0);
			}
			else if (func_472(&(uParam0->f_58)) > uParam0->f_40)
			{
				func_383(&(uParam0->f_58));
				func_534(&(uParam0->f_1));
				func_524(uParam0, 7);
			}
			break;
		case 7:
			if (!func_381(&(uParam0->f_58)))
			{
				func_509(&(uParam0->f_58), 0);
			}
			else if (func_472(&(uParam0->f_58)) > 1f && func_483(uParam0->f_61, uParam0->f_37, uParam0->f_35, uParam0->f_36, 0f, 1, 0, 0))
			{
				func_535(&(uParam0->f_1));
				func_383(&(uParam0->f_58));
				func_524(uParam0, 4);
			}
			else if (func_472(&(uParam0->f_58)) > (uParam0->f_41 + ((BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)) / 25f) * uParam0->f_42)) || ((func_381(&(Local_640.f_19.f_3)) && func_472(&(Local_640.f_19.f_3)) < Global_1901947.f_852.f_4) && func_472(&(uParam0->f_58)) > 2f))
			{
				func_536(&(uParam0->f_1));
				if (func_403(uParam0, 32))
				{
					func_537(*uParam0, uParam0->f_30);
				}
				func_383(&(uParam0->f_58));
				func_524(uParam0, 5);
			}
			else if (!func_404(Global_34, *uParam0, uParam0->f_39, 1, 1) && (!func_381(&(Local_640.f_19.f_3)) || func_472(&(Local_640.f_19.f_3)) > Global_1901947.f_852.f_4))
			{
				func_383(&(uParam0->f_58));
				func_524(uParam0, 8);
			}
			break;
		case 8:
			if (!func_381(&(uParam0->f_58)))
			{
				func_509(&(uParam0->f_58), 0);
			}
			if (func_404(Global_34, *uParam0, (uParam0->f_39 - 10f), 1, 1) || (func_381(&(Local_640.f_19.f_3)) && func_472(&(Local_640.f_19.f_3)) < Global_1901947.f_852.f_4))
			{
				func_383(&(uParam0->f_58));
				func_524(uParam0, 7);
			}
			break;
		case 9:
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				func_532(*uParam0, &(uParam0->f_1), 0, 1);
			}
			if (!func_404(Global_34, *uParam0, (50f + 10f), 1, 1))
			{
				func_524(uParam0, 10);
			}
			break;
		case 10:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_1));
			}
			if (func_404(Global_34, *uParam0, 50f, 1, 1))
			{
				func_524(uParam0, 9);
			}
			break;
		case 11:
			if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 580, true) && !TASK::IS_PED_IN_WRITHE(*uParam0))
			{
				if (TASK::_0x6DAC799857EF3F11(Global_34, *uParam0))
				{
					if (func_404(Global_34, *uParam0, 50f, 1, 1))
					{
						func_524(uParam0, 9);
					}
					else
					{
						func_524(uParam0, 10);
					}
				}
				else
				{
					func_524(uParam0, 3);
				}
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_397(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if ((Local_13.f_18 == 255 && !func_433(2)) || (Local_13.f_18 != 255 && Local_13.f_18 != PLAYER::PLAYER_ID()))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0) && ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_34)
		{
			func_538();
			func_539(2);
		}
	}
}

void func_398(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_433(1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0) && PED::GET_PED_CONFIG_FLAG(iParam0, 580, true)) && ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_34)
		{
			func_540();
			func_539(1);
			func_541(2);
		}
	}
}

void func_399(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_433(16))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_542(Global_34)) == iParam0)
		{
			func_543();
			func_539(16);
		}
	}
}

void func_400(int iParam0, float fParam1)
{
	float fVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_13.f_18.f_1 && func_296(32))
		{
			Local_13.f_18.f_1 = 1;
		}
	}
	if (((!func_433(4) && (MISC::GET_FRAME_COUNT() % 10) == 0) && ENTITY::DOES_ENTITY_EXIST(Local_640.f_53)) && TASK::_0x920684BE432875B1(Local_640.f_53))
	{
		func_539(4);
	}
	if (!Local_13.f_18.f_1 && !func_295(32, -1))
	{
		if (Local_640.f_118.f_33 != 0)
		{
			func_541(32);
		}
	}
	if (!func_433(128))
	{
		if (((((func_433(8) || func_433(16)) || func_433(4)) || func_296(8)) || (func_296(2) && ENTITY::IS_ENTITY_DEAD(iParam0))) || (ENTITY::IS_ENTITY_DEAD(iParam0) && !PED::_0xA4B6432E3880F2F9(iParam0)))
		{
			func_539(128);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if ((!func_295(4, -1) && func_433(128)) && func_474(Local_640.f_53.f_61))
		{
			func_541(4);
		}
		if (!func_295(8, -1) && func_544(1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				func_541(16);
			}
			if (func_308(Local_640.f_53.f_61))
			{
				func_541(8);
			}
		}
	}
	if (!func_295(1, -1))
	{
		if (((func_281() && !func_404(Global_34, iParam0, fParam1, 1, 1)) && Local_640.f_19.f_2 != 2) && (!func_381(&(Local_640.f_19.f_3)) || func_472(&(Local_640.f_19.f_3)) > Global_1901947.f_852.f_4))
		{
			func_541(1);
		}
	}
	else
	{
		if (func_381(&(Local_640.f_19.f_3)) && func_472(&(Local_640.f_19.f_3)) < 20f)
		{
			fVar0 = 5f;
		}
		else
		{
			fVar0 = 30f;
		}
		if (func_404(Global_34, iParam0, (fParam1 - fVar0), 1, 1))
		{
			func_545(1);
		}
	}
}

bool func_401()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_402(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_546(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_403(var uParam0, int iParam1)
{
	return func_241(uParam0->f_57, iParam1);
}

bool func_404(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_547(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_ALLIGATOR_01"):
		case joaat("A_C_ALLIGATOR_02"):
		case joaat("A_C_ALLIGATOR_03"):
		case joaat("MP_A_C_ALLIGATOR_01"):
			return 0;
		case joaat("A_C_BEAR_01"):
		case joaat("MP_A_C_BEAR_01"):
			return 1;
		case joaat("MP_A_C_BEAVER_01"):
		case joaat("A_C_BEAVER_01"):
			return 2;
		case joaat("MP_A_C_BUFFALO_01"):
		case joaat("A_C_BUFFALO_TATANKA_01"):
		case joaat("A_C_BUFFALO_01"):
			return 3;
		case joaat("A_C_BOARLEGENDARY_01"):
		case joaat("MP_A_C_BOAR_01"):
		case joaat("A_C_BOAR_01"):
			return 4;
		case joaat("A_C_BUCK_01"):
		case joaat("MP_A_C_BUCK_01"):
			return 5;
		case joaat("MP_A_C_COUGAR_01"):
		case joaat("A_C_COUGAR_01"):
			return 6;
		case joaat("MP_A_C_PANTHER_01"):
		case joaat("A_C_PANTHER_01"):
			return 7;
		case joaat("MP_A_C_COYOTE_01"):
		case joaat("A_C_COYOTE_01"):
			return 8;
		case joaat("MP_A_C_FOX_01"):
		case joaat("A_C_FOX_01"):
			return 9;
		case joaat("A_C_MOOSE_01"):
		case joaat("MP_A_C_MOOSE_01"):
			return 10;
		case joaat("A_C_BIGHORNRAM_01"):
		case joaat("MP_A_C_BIGHORNRAM_01"):
			return 11;
		case joaat("MP_A_C_WOLF_01"):
		case joaat("A_C_WOLF"):
		case joaat("A_C_WOLF_MEDIUM"):
		case joaat("A_C_WOLF_SMALL"):
			return 12;
		case joaat("A_C_ELK_01"):
		case joaat("MP_A_C_ELK_01"):
			return 13;
		default:
			break;
	}
	return -1;
}

void func_406(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_548(iParam1, iParam2);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam3->f_1, func_549(iParam1, iParam2));
	}
}

bool func_407(int iParam0)
{
	return func_241(Local_640.f_173, iParam0);
}

void func_408(int iParam0)
{
	func_261(&(Local_640.f_173), iParam0);
}

bool func_409()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID());
	if (iVar0 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return false;
	}
	if (Local_63[iVar1 /*18*/].f_2.f_1 != 0)
	{
	}
	Local_63[iVar1 /*18*/].f_2.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return true;
}

void func_410(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Local_640.f_19 == 0)
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID());
	if (iVar0 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return;
	}
	switch (Local_640.f_19.f_2)
	{
		case 0:
			if (Local_63[iVar1 /*18*/].f_2.f_1 != 0)
			{
				Local_640.f_19.f_1 = PLAYER::PLAYER_PED_ID();
				if (func_550())
				{
					Local_640.f_19.f_2 = 2;
				}
				else
				{
					Local_640.f_19.f_2 = 1;
				}
			}
			break;
		case 1:
			if (func_550())
			{
				if (func_551(iParam0))
				{
					Local_63[iVar1 /*18*/].f_2++;
				}
				Local_640.f_19.f_2 = 2;
			}
			break;
		case 2:
			if (!func_550())
			{
				Local_640.f_19.f_2 = 1;
				Local_640.f_19.f_1 = PLAYER::PLAYER_PED_ID();
				func_380(&(Local_640.f_19.f_3));
			}
			break;
	}
}

void func_411()
{
	func_552();
}

bool func_412(int iParam0, bool bParam1, bool bParam2)
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

bool func_413(int iParam0)
{
	return func_130(8, iParam0);
}

var func_414(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_415(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_553(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_416(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_553(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_417(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_320(&Var1, iParam0))
	{
		iVar0 = ((func_554() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_418(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_419(int iParam0, int iParam1)
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

void func_420(var uParam0)
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 12, Global_1051252.f_16[16]);
	func_555(uParam0, uParam0->f_1);
}

void func_421(var uParam0, int iParam1, int iParam2)
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
		func_189(uParam0, iVar0);
		iVar0++;
	}
}

void func_422(int iParam0, int iParam1)
{
	func_242(&(Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1), 16);
}

int func_423(int iParam0)
{
	return Local_640.f_186.f_7[iParam0 /*11*/].f_4;
}

float func_424(int iParam0)
{
	return Local_640.f_186.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_425(int iParam0)
{
	return Local_640.f_186.f_7[iParam0 /*11*/].f_6;
}

bool func_426(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_431(iParam1))
	{
		return false;
	}
	iVar0 = func_556(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_427(int iParam0, bool bParam1)
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

bool func_428(int iParam0)
{
	return func_171(iParam0, 32);
}

bool func_429(int iParam0)
{
	return func_171(iParam0, 64);
}

bool func_430(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_431(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_432(int iParam0)
{
	return Local_640.f_186.f_7[iParam0 /*11*/];
}

bool func_433(int iParam0)
{
	return func_241(Local_640.f_163, iParam0);
}

void func_434(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	func_440(&(uParam0->f_6));
	uParam0->f_2 = iParam1;
}

bool func_435()
{
	return func_444(4);
}

bool func_436(int iParam0)
{
	return func_241(Local_640.f_25.f_23, iParam0);
}

bool func_437(var uParam0, var uParam1)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam1->f_16, false))
	{
		return true;
	}
	NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_9);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_9))
	{
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_16, &(uParam1->f_14), func_432(uParam1->f_1), 0);
	func_557(uParam1->f_16);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam1->f_16, Local_640.f_186.f_7[uParam1->f_1 /*11*/].f_6, 0f, 0f, Local_640.f_186.f_7[uParam1->f_1 /*11*/].f_5, 2);
	ANIMSCENE::START_ANIM_SCENE(uParam1->f_16);
	return true;
}

bool func_438()
{
	return func_444(2);
}

bool func_439(int iParam0, int iParam1)
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

void func_440(var uParam0)
{
	func_558(uParam0, 0);
}

bool func_441(var uParam0, int iParam1)
{
	return func_241(uParam0->f_21, iParam1);
}

float func_442(var uParam0)
{
	return (BUILTIN::TO_FLOAT(func_559(uParam0)) * 0.001f);
}

int func_443(int iParam0)
{
	return PLAYER::GET_PLAYER_PED(func_560(iParam0));
}

bool func_444(int iParam0)
{
	return func_241(Local_640.f_25.f_22, iParam0);
}

void func_445(var uParam0, int iParam1)
{
	func_261(&(uParam0->f_10), iParam1);
}

var func_446(int iParam0, int iParam1)
{
	return func_561(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_447(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 5;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 21, 31, &uParam1);
}

bool func_448()
{
	int iVar0;

	iVar0 = func_256(0);
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true) && Local_13.f_24.f_1 < 12)
	{
		func_562(12);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && Local_13.f_24.f_1 < 11)
	{
		func_562(10);
	}
	switch (Local_13.f_24.f_1)
	{
		case 0:
			func_562(1);
			break;
		case 1:
			switch (func_115())
			{
				case 0:
					if (func_407(1))
					{
						Local_13.f_24.f_10 = { func_563(Local_13.f_24.f_6) };
						func_562(2);
					}
					break;
				case 1:
					func_562(6);
					break;
			}
			break;
		case 2:
			if (func_564(64))
			{
				func_562(3);
			}
			break;
		case 3:
			if (func_564(4))
			{
				func_562(4);
			}
			break;
		case 4:
			if (!func_565(2) && func_566(&(Local_13.f_24.f_6), &(Local_13.f_24.f_9), iVar0))
			{
				Local_13.f_24.f_10 = { func_563(Local_13.f_24.f_6) };
				func_567(2);
			}
			if (func_564(8))
			{
				if (func_407(2))
				{
					func_562(10);
				}
				else
				{
					func_562(5);
				}
			}
			break;
		case 5:
			if (func_565(2))
			{
				func_568(2);
			}
			if (func_569(32))
			{
				func_562(2);
			}
			break;
		case 6:
			if (func_564(256))
			{
				func_562(7);
			}
			break;
		case 7:
			break;
		case 8:
			if (func_515(iVar0, func_570(), 5f, 1, 1))
			{
				func_562(9);
			}
			break;
		case 9:
			if (func_571(&(Local_13.f_24.f_2)) > 10f)
			{
				return true;
			}
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
	}
	return false;
}

void func_449()
{
	int iVar0;
	int iVar1;

	func_408(1);
	iVar0 = func_256(0);
	if (func_115() == 0)
	{
		iVar1 = func_369(0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar0, iVar1, false);
		}
	}
}

void func_450(int iParam0)
{
	int iVar0;
	int iVar1;

	func_408(4);
	iVar0 = func_256(0);
	iVar1 = func_369(0);
	Local_640.f_173.f_7 = iParam0->f_1;
	if (func_115() == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			ENTITY::DETACH_ENTITY(iVar1, true, true);
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_640.f_173.f_5) && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_640.f_173.f_5))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(Local_640.f_173.f_5, func_572());
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, func_572());
		}
	}
}

void func_451(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_408(2);
	iVar0 = func_256(0);
	iVar1 = func_369(0);
	Local_640.f_173.f_8 = iParam0->f_1;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iVar0, true, 10f);
	}
	if (func_115() == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			ENTITY::DETACH_ENTITY(iVar1, true, true);
		}
	}
	if (func_115() == 1)
	{
		if (Local_13.f_24.f_1 == 7 || Local_13.f_24.f_1 == 6)
		{
			AUDIO::STOP_AUDIO_SCENE("DLC_MP007_Leg_Beav_Event_Chew_scene");
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				PED::_0x463803429297117C(iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), true, false), 3, 0);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_570(), 3f, -1, 0.25f, 6299657, 40000f);
		}
		iVar2 = 1;
		while (iVar2 <= 3)
		{
			func_573(iVar2, 1);
			iVar2++;
		}
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_115() == 1)
		{
			func_562(8);
		}
	}
}

void func_452()
{
	int iVar0;

	iVar0 = func_256(0);
	func_408(16);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 1);
	}
}

void func_453()
{
	int iVar0;

	iVar0 = func_256(0);
	func_574(16);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iVar0, 1);
	}
}

void func_454(int iParam0)
{
	func_539(8);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_13.f_18 == iParam0->f_1)
		{
		}
		else
		{
			Local_13.f_18 = iParam0->f_1;
		}
	}
	if (GANG::_0x3F59FE6F37869576(iParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_413(255))
	{
		if (!func_526())
		{
			func_527();
		}
		if (!func_294())
		{
			func_528();
		}
		if (!func_575())
		{
			func_576(1);
		}
	}
}

void func_455(int iParam0)
{
	if (GANG::_0x3F59FE6F37869576(iParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_413(255))
	{
		if (!func_526())
		{
			func_527();
		}
		if (!func_294())
		{
			func_528();
		}
		if (!func_577())
		{
			func_578(1);
		}
	}
}

void func_456(int iParam0)
{
	func_539(16);
	if (GANG::_0x3F59FE6F37869576(iParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_413(255))
	{
		if (!func_526())
		{
			func_527();
		}
		if (!func_294())
		{
			func_528();
		}
		if (!func_575())
		{
			func_576(1);
		}
	}
}

void func_457(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_579(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_458(int iParam0)
{
	return Local_640.f_186.f_7[iParam0 /*11*/].f_10;
}

void func_459(int iParam0, char* sParam1, bool bParam2)
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

void func_460(int iParam0)
{
}

void func_461(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	func_580(*uParam1);
}

void func_462(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iParam0))
		{
			PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 1);
		}
		if (!func_581())
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 593, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 593, false);
		}
	}
}

void func_463(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_405(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar1 = func_582(iVar0);
	if (iVar0 != 2 && iVar0 != 0)
	{
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iParam0, true, 2f);
		TASK::_0x9DE63896B176EA94(iParam0, 0);
	}
	TASK::_0x06ECF3925BC2ABAE(iParam0, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 402, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 542, true);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	func_583(iParam0, iVar1, iParam1);
	func_584(iParam0);
}

void func_464(int iParam0)
{
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false);
	ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
}

void func_465(int iParam0)
{
	PED::_SET_PED_QUALITY(iParam0, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
}

bool func_466(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_407(2048);
		case 2:
			return func_407(4096);
		case 3:
			return func_407(8192);
		case 4:
			return func_407(16384);
		case 5:
			return func_407(32768);
		case 6:
			return func_407(65536);
		case 7:
			return func_407(131072);
		default:
			break;
	}
	return false;
}

var func_467(int iParam0, int iParam1)
{
	return Local_640.f_311[iParam0 /*20*/].f_5[iParam1 /*14*/];
}

int func_468(int iParam0)
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

struct<2> func_469(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_470(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_585() - fParam1);
	func_586(uParam0, 1);
	func_587(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_471(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_472(var uParam0)
{
	if (!func_381(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_588(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_585() - uParam0->f_1);
}

bool func_473(int iParam0)
{
	return func_589(iParam0);
}

bool func_474(int iParam0)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_640.f_186.f_7[iParam0 /*11*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_640.f_186.f_7[iParam0 /*11*/]))
		{
			uVar0 = Local_640.f_186.f_7[iParam0 /*11*/];
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uVar0);
			return true;
		}
	}
	return false;
}

void func_475(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_590(uParam0, uParam1);
			break;
		case 2:
			func_591(uParam0, uParam1);
			break;
	}
}

float func_476(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_477()
{
	return false;
}

void func_478(int iParam0)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_2(1231752879, iParam0);
}

void func_479(int iParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("rdro_boost_animal_scene"))
	{
		AUDIO::START_AUDIO_SCENE("rdro_boost_animal_scene");
	}
	if (AUDIO::_0x8B25A18E390F75BF(iParam0) != joaat("RDRO_TARGET_ANIMAL_GROUP"))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0, "rdro_target_animal_group", 0f);
	}
}

void func_480(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;

	Var0 = 194;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	if (iParam0 == 2)
	{
		if (iParam1 == 0 || !ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
		if (((!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam1, false) || !NETWORK::_0xB07D3185E11657A5(iParam1)) || !NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam1)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(NETWORK::PED_TO_NET(iParam1)))
		{
			return;
		}
		Var0.f_5 = NETWORK::PED_TO_NET(iParam1);
	}
	uVar6 = func_446(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 43, &uVar6);
}

void func_481(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_482()
{
	return func_489(2, -1);
}

bool func_483(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_256(iParam0);
	if ((MISC::GET_FRAME_COUNT() % iParam5) != iParam6)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (!func_404(Global_34, iVar0, fParam3, 1, 1))
	{
		return false;
	}
	if (func_529(iVar0))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iVar0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		return false;
	}
	if (bParam7)
	{
		if (func_592(PLAYER::PLAYER_ID(), iVar0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
		{
			return true;
		}
	}
	bVar1 = false;
	if (func_404(Global_34, iVar0, fParam1, 1, 1))
	{
		bVar1 = true;
	}
	else if (func_404(Global_34, iVar0, fParam2, 1, 1) && PED::IS_TRACKED_PED_VISIBLE(iVar0))
	{
		bVar1 = true;
	}
	else if ((func_404(Global_34, iVar0, fParam3, 1, 1) && func_593()) && PED::IS_TRACKED_PED_VISIBLE(iVar0))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (!func_381(&(Local_640.f_53.f_3[iParam0 /*3*/])))
		{
			func_509(&(Local_640.f_53.f_3[iParam0 /*3*/]), 0);
		}
		else if (func_472(&(Local_640.f_53.f_3[iParam0 /*3*/])) > fParam4)
		{
			return true;
		}
	}
	else if (func_381(&(Local_640.f_53.f_3[iParam0 /*3*/])))
	{
		func_383(&(Local_640.f_53.f_3[iParam0 /*3*/]));
	}
	return false;
}

void func_484()
{
	func_499(2);
}

bool func_485(int iParam0, var uParam1)
{
	float fVar0;

	fVar0 = 5f;
	if (func_589(iParam0))
	{
		fVar0 = func_594(iParam0);
	}
	if (func_404(Global_34, iParam0, fVar0, 1, 1))
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (!func_381(&(uParam1->f_35)))
	{
		if (PED::_0xD55DB4466D00A258(iParam0))
		{
			func_509(&(uParam1->f_35), 0);
		}
	}
	else if (func_472(&(uParam1->f_35)) > 2.5f)
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (func_595(iParam0, uParam1, &(uParam1->f_32), 0))
	{
		return true;
	}
	return false;
}

bool func_486(int iParam0, var uParam1, bool bParam2)
{
	if (func_596(iParam0, 0, uParam1, &(uParam1->f_33), 0, 0))
	{
		return true;
	}
	if (Global_1940258.f_19 && !uParam1->f_2 & 4 != 0)
	{
		if (((func_404(Global_34, iParam0, WEAPON::_0x79B1A6E780266DB0(Global_34), 1, 1) && PED::_0x285D36C5C72B0569(Global_34) <= 0.5f) && func_597(iParam0, 0.45f, 0.55f, 0.45f, 0.55f)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			uParam1->f_33 = 4;
			return true;
		}
	}
	if (bParam2 && func_404(Global_34, iParam0, 7f, 1, 1))
	{
		uParam1->f_33 = 65536;
		return true;
	}
	return false;
}

void func_487()
{
	Local_640.f_25.f_20 = PLAYER::PLAYER_ID();
	func_499(4);
}

void func_488(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_432(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if ((uParam1->f_20 == 255 || func_598(uParam0, 1)) || bParam2)
	{
		iVar1 = func_443(iVar0);
		if (!func_404(iVar1, iVar0, 100f, 1, 1))
		{
			bVar2 = true;
		}
	}
	else
	{
		iVar1 = PLAYER::GET_PLAYER_PED(uParam1->f_20);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		bVar2 = true;
		bVar3 = true;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
	{
		if (uParam0->f_1 == 0)
		{
			PED::_0xEEED8FAFEC331A70(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 3);
		}
		else
		{
			PED::_0x463803429297117C(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 3, 1);
		}
	}
	if (bVar2)
	{
		if ((!PED::IS_PED_FLEEING(iVar0) || !func_503(iVar0, 518218985)) || bParam3)
		{
			if (func_441(uParam1, 16))
			{
				iVar4 |= 67108864;
			}
			if (bVar3)
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 0, iVar4, 500f, -1, 0);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iVar1, 3, iVar4, -1082130432 /* Float: -1f */, -1, 0);
			}
			func_499(8);
		}
		return;
	}
	switch (uParam0->f_1)
	{
		case 1:
			if ((!PED::IS_PED_IN_COMBAT(iVar0, 0) || !func_503(iVar0, 780511057)) || bParam3)
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 0, 0);
				func_499(8);
			}
			break;
		case 0:
			if ((!PED::IS_PED_FLEEING(iVar0) || !func_503(iVar0, 518218985)) || bParam3)
			{
				if (func_441(uParam1, 16))
				{
					iVar5 |= 67108864;
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iVar1, 3, iVar5, 400f, -1, 0);
				func_499(8);
			}
			break;
		default:
			break;
	}
}

bool func_489(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_412(iParam1, 0, 1))
	{
		return false;
	}
	return func_241(Local_63[iParam1 /*18*/].f_5, iParam0);
}

bool func_490(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 1:
			return (func_503(iParam1, 780511057) || PED::IS_PED_IN_COMBAT(iParam1, 0));
		case 0:
			return (func_503(iParam1, 518218985) || PED::IS_PED_FLEEING(iParam1));
	}
	return false;
}

void func_491(var uParam0)
{
}

void func_492(var uParam0, var uParam1)
{
}

void func_493(var uParam0)
{
	if (func_403(uParam0, 1))
	{
		return;
	}
	func_528();
	func_374(uParam0, 1);
}

void func_494(var uParam0)
{
	if (func_403(uParam0, 2))
	{
		return;
	}
	func_510(1);
	func_374(uParam0, 2);
}

void func_495(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_413(255))
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= 7)
	{
		iVar0 = Local_640.f_186.f_7[iVar2 /*11*/];
		if (((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					if (func_490(uParam0, iVar0))
					{
						iVar1 = 1;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				case 0:
					iVar1 = 0;
					break;
			}
			if (iVar1 == 1 && func_404(iVar0, Global_34, uParam2->f_34, 1, 1))
			{
				if (!MAP::_DOES_ENTITY_HAVE_BLIP(iVar0) && ENTITY::IS_ENTITY_VISIBLE(iVar0))
				{
					MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iVar0);
				}
			}
			else if (!func_404(iVar0, Global_34, uParam2->f_38, 1, 1) || iVar1 == 0)
			{
				if (MAP::_DOES_ENTITY_HAVE_BLIP(iVar0))
				{
					func_599(iVar0);
				}
			}
		}
		iVar2++;
	}
}

void func_496(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 <= 7)
	{
		iVar0 = Local_640.f_186.f_7[iVar2 /*11*/];
		if ((((((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !func_490(uParam0, iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(uParam1->f_20), 0, 0);
					break;
				case 0:
					iVar1 = 0;
					if (func_441(uParam1, 16))
					{
						iVar1 |= 67108864;
					}
					TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, PLAYER::GET_PLAYER_PED(uParam1->f_20), 3, iVar1, -1082130432 /* Float: -1f */, -1, 0);
					break;
			}
		}
		iVar2++;
	}
}

void func_497(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0 = Local_640.f_186.f_7[iVar1 /*11*/];
		if ((((((iVar1 != uParam0->f_1 && iVar1 != uParam0->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && PED::_0x268B3AEBF032A88D(iVar0))
		{
			TASK::TASK_WANDER_IN_AREA(iVar0, Local_640.f_186.f_7[uParam0->f_1 /*11*/].f_6, uParam0->f_27, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			PED::SET_PED_KEEP_TASK(iVar0, true);
			if (Local_13.f_7.f_1 == 1)
			{
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
			}
			else
			{
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 0f);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		}
		iVar1++;
	}
}

void func_498(int iParam0)
{
	MISC::SET_BIT(&(Local_640.f_53.f_62), iParam0);
}

void func_499(int iParam0)
{
	if (!func_412(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_261(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_5), iParam0);
}

int func_500(var uParam0)
{
	return 0;
}

void func_501(var uParam0)
{
}

void func_502()
{
}

bool func_503(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_504(int iParam0)
{
	if (!func_412(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_262(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_5), iParam0);
}

bool func_505(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_412(iParam1, 0, 1))
	{
		return false;
	}
	return func_241(Local_63[iParam1 /*18*/].f_1, iParam0);
}

bool func_506(int iParam0)
{
	return func_241(Local_640.f_53.f_64, iParam0);
}

void func_507(int iParam0)
{
	if (!func_412(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_262(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
}

int func_508(int iParam0, int iParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;

	if (!func_404(iParam0, iParam1, 50f, 1, 1))
	{
		return 2;
	}
	if (!func_381(uParam2))
	{
		func_380(uParam2);
		*uParam3 = 0;
		return 2;
	}
	else if (func_472(uParam2) > 4f)
	{
		if (*uParam3 == 0)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			*uParam3 = PATHFIND::_0x348F211CA2404039(iParam0, vVar0, vVar3, 29);
			if (*uParam3 == -1)
			{
				func_380(uParam2);
				*uParam3 = 0;
				return 2;
			}
		}
		if (PATHFIND::_0x3A0F82F6EE2291C8(*uParam3) == 1)
		{
			func_380(uParam2);
			if (PATHFIND::_0x8800776E410EB669(*uParam3))
			{
				vVar6 = { PATHFIND::_0x430F8319AE56C8A9(*uParam3, (PATHFIND::_0xD470725E0703D22F(*uParam3) - 1)) };
				fVar9 = FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 164);
				fVar10 = (Global_35.f_2 - 1f);
				if ((vVar6.z + fVar9) < fVar10)
				{
					PATHFIND::_0x661BB1E1FF77742D(*uParam3);
					*uParam3 = 0;
					return 1;
				}
				else
				{
					PATHFIND::_0x661BB1E1FF77742D(*uParam3);
					*uParam3 = 0;
					return 0;
				}
			}
			else
			{
				PATHFIND::_0x661BB1E1FF77742D(*uParam3);
				*uParam3 = 0;
				return 1;
			}
		}
	}
	return 2;
}

void func_509(var uParam0, bool bParam1)
{
	if (bParam1 || !func_381(uParam0))
	{
		func_380(uParam0);
	}
}

void func_510(int iParam0)
{
	if (!func_412(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_261(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
}

void func_511()
{
	if (func_403(&(Local_640.f_53), 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_640.f_53))
	{
		return;
	}
	func_600(Local_640.f_53);
	func_374(&(Local_640.f_53), 256);
}

void func_512()
{
	if (!func_403(&(Local_640.f_53), 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_640.f_53))
	{
		func_601(&(Local_640.f_53), 256);
		return;
	}
	func_602(Local_640.f_53);
	func_601(&(Local_640.f_53), 256);
}

bool func_513()
{
	return func_506(1);
}

bool func_514(var uParam0)
{
	return AUDIO::_0xD9130842D7226045(&(uParam0->f_43), 0);
}

bool func_515(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
		{
			return true;
		}
	}
	else if (func_547(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
	{
		return true;
	}
	return false;
}

void func_516(var uParam0, int iParam1)
{
	if (uParam0->f_56 == iParam1)
	{
		return;
	}
	uParam0->f_56 = iParam1;
}

Vector3 func_517(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_603(vParam0, fParam3, fParam4);
}

void func_518(vector3 vParam0, int iParam3)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::TRIGGER_SONAR_BLIP(iParam3, vParam0);
}

void func_519()
{
}

void func_520(var uParam0, vector3 vParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_43)))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_POSITION("CALL", vParam1, &(uParam0->f_43), false, 0, true, 0);
}

int func_521(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		iVar1 = func_604(iVar2);
		if (iVar1 >= 0)
		{
			iVar0 = (iVar0 + iVar1);
		}
		iVar2++;
	}
	return iVar0;
}

bool func_522(var uParam0)
{
	return func_471(*uParam0, 1);
}

void func_523(int iParam0, var uParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_522(uParam1))
		{
			if (bParam2)
			{
				func_605(uParam1, 0);
			}
		}
		else
		{
			uParam1->f_3 = (func_442(uParam1) * Global_1901947.f_852.f_8);
			if (uParam1->f_3 > 1f)
			{
				uParam1->f_3 = 1f;
			}
		}
	}
	if ((((!ENTITY::IS_ENTITY_DEAD(iParam0) && func_522(uParam1)) && !PED::GET_PED_CONFIG_FLAG(iParam0, 580, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) && (MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (!PED::_0x33FA048675821DA7(iParam0, 5))
		{
			PED::_0x2EB75FB86C41F026(iParam0, 5, 1);
		}
		PED::_0x06D26A96CA1BCA75(iParam0, 5, uParam1->f_3, 0);
	}
}

void func_524(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	uParam0->f_2 = iParam1;
}

bool func_525(var uParam0)
{
	return func_403(uParam0, 2);
}

bool func_526()
{
	return func_66(2);
}

void func_527()
{
	int iVar0;

	if (!func_130(32, 255))
	{
		func_606(Local_640.f_1, Local_640.f_3);
		if (!func_130(1024, 255))
		{
			func_607(Local_640.f_1);
			func_147(1024);
		}
		iVar0 = func_303(Local_640.f_1, Local_640.f_2);
		func_608(iVar0);
		func_609(iVar0);
		func_145(2);
		func_610(Local_640.f_9);
		func_611(Local_640.f_1);
		func_612(Local_640.f_1, Local_640.f_2, Local_640.f_3);
		func_147(32);
	}
}

void func_528()
{
	if (!func_66(2))
	{
		return;
	}
	func_145(8);
}

bool func_529(int iParam0)
{
	return !ENTITY::IS_ENTITY_VISIBLE(iParam0);
}

bool func_530(var uParam0)
{
	return func_515(Global_34, uParam0->f_51, uParam0->f_33, 1, !func_613(uParam0));
}

int func_531()
{
	return -108658760;
}

void func_532(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*uParam1))
	{
		*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(func_614(), iParam0);
		MAP::SET_BLIP_SPRITE(*uParam1, joaat("BLIP_ANIMAL"), false);
		MAP::_BLIP_SET_MODIFIER(*uParam1, joaat("BLIP_MODIFIER_LEGENDARY"));
		if (bParam2)
		{
			MAP::_BLIP_SET_MODIFIER(*uParam1, -1445216292);
		}
		if (bParam3)
		{
			MAP::_BLIP_SET_MODIFIER(*uParam1, -1654168258);
		}
		MAP::_BLIP_SET_MODIFIER(*uParam1, 847579139);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_615(func_405(ENTITY::GET_ENTITY_MODEL(iParam0))));
	}
}

void func_533(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_381(uParam0))
	{
		func_470(uParam0, fParam1);
	}
}

void func_534(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam0, -1833912565);
		MAP::_BLIP_SET_MODIFIER(*uParam0, 197772266);
	}
}

void func_535(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam0, 197772266);
		MAP::_BLIP_SET_MODIFIER(*uParam0, -1833912565);
	}
}

void func_536(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam0, 197772266);
	}
}

void func_537(int iParam0, int iParam1)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_2(iParam1, iParam0);
}

void func_538()
{
	struct<15> Var0;

	Var0 = { func_616(-922869466) };
	func_617(&Var0);
}

void func_539(int iParam0)
{
	func_261(&(Local_640.f_163), iParam0);
}

void func_540()
{
	struct<15> Var0;

	Var0 = { func_616(2126697993) };
	func_617(&Var0);
}

void func_541(int iParam0)
{
	if (!func_412(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_261(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_4), iParam0);
}

int func_542(int iParam0)
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

void func_543()
{
	struct<15> Var0;

	Var0 = { func_616(-1485898032) };
	func_617(&Var0);
}

bool func_544(int iParam0)
{
	return func_241(Local_640.f_163.f_2, iParam0);
}

void func_545(int iParam0)
{
	if (!func_412(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_262(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_4), iParam0);
}

bool func_546(int iParam0, var uParam1, var uParam2, bool bParam3)
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

float func_547(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_548(int iParam0, int iParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_549(iParam0, iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	return iVar1;
}

char* func_549(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_ALLIGATOR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_ALLIGATOR_02";
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAVER_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAVER_02";
					break;
				case 2:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BISON_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BISON_02";
					break;
				case 2:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BOAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BOAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BUCK_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BUCK_02";
					break;
				case 2:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_COUGAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_COUGAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_PANTHER_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_PANTHER_02";
					break;
				case 2:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_COYOTE_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_COYOTE_02";
					break;
				case 2:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_FOX_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_FOX_02";
					break;
				case 2:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_MOOSE_02";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_MOOSE_01";
					break;
				case 2:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BIG_HORN_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BIG_HORN_02";
					break;
				case 2:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_WOLF_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_WOLF_02";
					break;
				case 2:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_ELK_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_ELK_02";
					break;
				case 2:
					break;
			}
			break;
	}
	return sVar0;
}

bool func_550()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	return false;
}

bool func_551(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_640.f_19.f_1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (MISC::IS_BIT_SET(Local_640.f_19, iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
			{
				if (func_618(Local_640.f_19.f_1, (*iParam0)[iVar0]))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_552()
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;

	bVar4 = Local_13.f_24.f_1 != Local_640.f_173.f_4;
	Local_640.f_173.f_4 = Local_13.f_24.f_1;
	iVar5 = func_256(0);
	bVar6 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar5);
	func_619(iVar5);
	func_620();
	func_621();
	func_622();
	func_623();
	func_624();
	if (func_115() == 0)
	{
		func_625();
	}
	switch (Local_13.f_24.f_1)
	{
		case 0:
			func_562(1);
			break;
		case 1:
			if (bVar6 && !func_503(iVar5, 923520851))
			{
				TASK::TASK_WANDER_IN_AREA(iVar5, ENTITY::GET_ENTITY_COORDS(iVar5, true, false), 5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
			break;
		case 2:
			if (((bVar6 && !func_407(2)) && !func_503(iVar5, 713668775)) && func_442(&(Local_13.f_24.f_2)) < 3f)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar5, func_626(), func_572(), -1, 0.25f, 0, 40000f);
			}
			if (!func_564(64))
			{
				if (!PED::GET_PED_CONFIG_FLAG(iVar5, 580, true))
				{
					if (func_407(2) || func_515(iVar5, func_626(), 3f, 1, 1))
					{
						if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_640.f_173.f_5) && func_628(ENTITY::GET_ENTITY_COORDS(iVar5, true, false), func_627()))
						{
							func_629(64);
						}
					}
				}
			}
			break;
		case 3:
			if (func_630(32, -1))
			{
				func_631(32);
			}
			if (func_630(16, -1))
			{
				func_631(16);
			}
			if (bVar6 && func_632(iVar5, 1069547520 /* Float: 1.5f */, 0))
			{
			}
			break;
		case 4:
			if (!func_407(2) && !func_565(2))
			{
				return;
			}
			if (func_564(64) && func_630(64, -1))
			{
				func_631(64);
			}
			if (((!func_564(8) && func_571(&(Local_13.f_24.f_2)) > 8f) && bVar6) && func_633())
			{
				if (func_407(2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iVar5, PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), 3, 67108864, -1082130432 /* Float: -1f */, -1, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar5, func_626(), func_572(), -1, 0.25f, 0, 40000f);
				}
				func_629(8);
			}
			break;
		case 5:
			if (bVar4)
			{
				func_634(1, 1);
			}
			if ((!func_630(32, -1) && func_569(16)) && func_269(&(Local_13.f_24.f_5), &(Local_640.f_173.f_5), func_267(), func_268(), 0))
			{
				func_629(32);
			}
			break;
		case 6:
			if (bVar4)
			{
				if (!AUDIO::START_AUDIO_SCENE("DLC_MP007_Leg_Beav_Event_Chew_scene"))
				{
				}
			}
			if (bVar6)
			{
				if (!func_503(iVar5, -1098463898))
				{
					bVar7 = func_325(&vVar0, &fVar3);
					if (bVar7)
					{
						iVar8 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("WORLD_ANIMAL_BEAVER_EAT_TREE"), 0.5f, 0, false);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar8))
						{
							vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar8, true) };
							fVar3 = TASK::_GET_SCENARIO_POINT_HEADING(iVar8, true);
						}
					}
					TASK::TASK_START_SCENARIO_AT_POSITION(iVar5, joaat("WORLD_ANIMAL_BEAVER_EAT_TREE"), vVar0, fVar3, 0, false, true, 0, -1f, false);
				}
				else
				{
					func_629(256);
				}
			}
			break;
		case 7:
			break;
		case 11:
			if (!func_630(16, -1))
			{
				func_634(0, 0);
				func_629(16);
			}
			break;
		case 8:
			if (!func_630(16, -1))
			{
				func_634(0, 0);
				func_629(16);
			}
			if (bVar6)
			{
				if (!func_503(iVar5, 658540077))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar5))
					{
						PED::_0xEEED8FAFEC331A70(iVar5, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), true, false), 3);
					}
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar5, func_118(), 0, 27656, -1, 0, 0, -1);
				}
			}
			break;
		case 9:
			if ((!func_564(64) && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_640.f_173.f_5)) && func_628(ENTITY::GET_ENTITY_COORDS(iVar5, true, false), func_627()))
			{
				func_629(64);
			}
			if (((bVar6 && func_564(64)) && !func_564(128)) && func_632(iVar5, 10f, 0))
			{
				func_464(iVar5);
				func_308(0);
				func_541(8);
				func_629(128);
			}
			break;
		case 10:
			if (!func_630(16, -1))
			{
				func_634(0, 0);
				func_629(16);
			}
			if (bVar6 && !ENTITY::IS_ENTITY_DEAD(iVar5))
			{
				if (!func_503(iVar5, 518218985))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iVar5, PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
				if (func_442(&(Local_13.f_24.f_2)) > 45f)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar5, 2f);
				}
			}
			break;
		case 12:
			if (PED::GET_PED_CONFIG_FLAG(iVar5, 580, true) && !PED::IS_PED_FLEEING(iVar5))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iVar5, func_635(iVar5), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			func_636(iVar5, 1);
			break;
	}
}

bool func_553(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_637(uParam2);
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

int func_554()
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

void func_555(var uParam0, var uParam1)
{
}

int func_556(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

void func_557(var uParam0)
{
}

void func_558(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_586(uParam0, 1);
	func_587(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_559(var uParam0)
{
	if (!func_522(uParam0))
	{
		return 0;
	}
	if (func_638(uParam0))
	{
		return uParam0->f_2;
	}
	return func_639(uParam0->f_1);
}

int func_560(int iParam0)
{
	return func_640(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1203982208 /* Float: 99999f */, 1, 1);
}

var func_561(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_641() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_642());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_642());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_642());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_643(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_644(iVar2))
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
				if (iVar9 & 8192 != 0 && func_645(iVar2) != 1)
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
					if (!func_646(iVar10))
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

void func_562(int iParam0)
{
	if (Local_13.f_24.f_1 == iParam0)
	{
		return;
	}
	Local_13.f_24.f_1 = iParam0;
	func_440(&(Local_13.f_24.f_2));
}

Vector3 func_563(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar3[14];
	int iVar46;
	vector3 vVar47;
	vector3 vVar50;
	int iVar53;
	float fVar54;
	float fVar55;

	switch (func_240())
	{
		case 5:
			vVar3[0 /*3*/] = { 2448.226f, 553.928f, 66.09f };
			vVar3[1 /*3*/] = { 2405.875f, 579.4902f, 66.09f };
			vVar3[2 /*3*/] = { 2397.45f, 582.4436f, 66.09f };
			vVar3[3 /*3*/] = { 2436.396f, 565.3154f, 66.9758f };
			vVar3[4 /*3*/] = { 2423.566f, 557.0493f, 66.325f };
			vVar3[5 /*3*/] = { 2417.013f, 572.5357f, 66.4459f };
			vVar3[6 /*3*/] = { 2405.802f, 571.2469f, 66.3501f };
			vVar3[7 /*3*/] = { 2399.464f, 594.1443f, 66.4332f };
			vVar3[8 /*3*/] = { 2458.75f, 549.3206f, 66.4149f };
			vVar3[9 /*3*/] = { 2454.482f, 540.7951f, 66.5154f };
			vVar3[10 /*3*/] = { 2388.843f, 612.4101f, 66.9082f };
			vVar3[11 /*3*/] = { 2393.639f, 636.9825f, 66.3028f };
			vVar3[12 /*3*/] = { 2379.371f, 649.1469f, 66.437f };
			vVar3[13 /*3*/] = { 2396.942f, 657.5465f, 66.148f };
			break;
		case 6:
			vVar3[0 /*3*/] = { 2269.086f, 246.5402f, 43.6415f };
			vVar3[1 /*3*/] = { 2290.032f, 233.1136f, 43.6296f };
			vVar3[2 /*3*/] = { 2307.678f, 227.3275f, 43.5611f };
			vVar3[3 /*3*/] = { 2298.581f, 244.8045f, 43.5391f };
			vVar3[4 /*3*/] = { 2278.559f, 262.9825f, 43.5704f };
			vVar3[5 /*3*/] = { 2269.502f, 280.6956f, 43.565f };
			vVar3[6 /*3*/] = { 2246.879f, 281.0435f, 43.6619f };
			vVar3[7 /*3*/] = { 2260.029f, 269.8175f, 43.6423f };
			vVar3[8 /*3*/] = { 2293.865f, 221.8443f, 43.789f };
			vVar3[9 /*3*/] = { 2315.018f, 234.8486f, 43.6802f };
			vVar3[10 /*3*/] = { 2304.44f, 240.3391f, 43.6297f };
			vVar3[11 /*3*/] = { 2269.086f, 246.5402f, 43.6415f };
			vVar3[12 /*3*/] = { 2269.086f, 246.5402f, 43.6415f };
			vVar3[13 /*3*/] = { 2269.086f, 246.5402f, 43.6415f };
			break;
		case 7:
			vVar3[0 /*3*/] = { 2336.061f, 895.5226f, 72.6033f };
			vVar3[1 /*3*/] = { 2336.429f, 909.5871f, 72.4671f };
			vVar3[2 /*3*/] = { 2352.156f, 911.7427f, 72.6241f };
			vVar3[3 /*3*/] = { 2374.058f, 910.8492f, 72.6276f };
			vVar3[4 /*3*/] = { 2383.966f, 915.916f, 72.597f };
			vVar3[5 /*3*/] = { 2399.135f, 916.9211f, 72.622f };
			vVar3[6 /*3*/] = { 2400.476f, 910.9594f, 72.6115f };
			vVar3[7 /*3*/] = { 2408.721f, 912.1439f, 72.6998f };
			vVar3[8 /*3*/] = { 2419.699f, 908.816f, 72.6805f };
			vVar3[9 /*3*/] = { 2431.15f, 913.2443f, 72.6392f };
			vVar3[10 /*3*/] = { 2442.831f, 910.0598f, 72.6474f };
			vVar3[11 /*3*/] = { 2452.621f, 917.3195f, 72.6166f };
			vVar3[12 /*3*/] = { 2455.711f, 923.9888f, 72.7492f };
			vVar3[13 /*3*/] = { 2451.96f, 934.7285f, 72.5998f };
			break;
		default:
			return 0f, 0f, 0f;
	}
	iVar53 = 0;
	fVar54 = 99999.9f;
	if (Local_640.f_173.f_8 != 255)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), true, false) };
	}
	else if (Local_640.f_173.f_7 != 255)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Local_640.f_173.f_7), true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(func_647(vParam0), true, false) };
	}
	vVar47 = { func_349(vVar0 - vParam0) };
	iVar46 = 0;
	while (iVar46 <= 13)
	{
		if ((func_648(vParam0, vVar3[iVar46 /*3*/], 30f, 1) || !func_648(vParam0, vVar3[iVar46 /*3*/], 80f, 1)) || iVar46 == Local_640.f_173.f_6)
		{
		}
		else
		{
			fVar55 = BUILTIN::VDIST2(vVar3[iVar46 /*3*/], vParam0);
			if (fVar55 < fVar54)
			{
				fVar54 = fVar55;
				iVar53 = iVar46;
			}
			vVar50 = { func_349(vVar3[iVar46 /*3*/] - vParam0) };
			if (func_649(vVar47, vVar50) < -0.1f)
			{
				Local_640.f_173.f_6 = iVar46;
				return vVar3[iVar46 /*3*/];
			}
		}
		iVar46++;
	}
	Local_640.f_173.f_6 = iVar53;
	return vVar3[iVar53 /*3*/];
}

bool func_564(int iParam0)
{
	return func_241(Local_640.f_173.f_1, iParam0);
}

bool func_565(int iParam0)
{
	return func_241(Local_13.f_24, iParam0);
}

bool func_566(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0[10];
	float fVar31[10];
	struct<19> Var42;

	switch (func_240())
	{
		case 5:
			vVar0[0 /*3*/] = { 2401.643f, 589.0543f, 64.4702f };
			vVar0[1 /*3*/] = { 2397.292f, 582.7505f, 63.6331f };
			vVar0[2 /*3*/] = { 2392.488f, 617.6112f, 64.8442f };
			vVar0[3 /*3*/] = { 2457.879f, 549.8177f, 64.2408f };
			vVar0[4 /*3*/] = { 2434.69f, 554.0707f, 63.8013f };
			vVar0[5 /*3*/] = { 2409.164f, 696.7398f, 63.8978f };
			vVar0[6 /*3*/] = { 2427.733f, 570.5942f, 64.6635f };
			vVar0[7 /*3*/] = { 2409.233f, 567.8948f, 64.2056f };
			vVar0[8 /*3*/] = { 2406.356f, 579.4111f, 64.3457f };
			vVar0[9 /*3*/] = { 2447.459f, 546.5974f, 63.6034f };
			fVar31[0] = 0f;
			fVar31[1] = 0f;
			fVar31[2] = 0f;
			fVar31[3] = 0f;
			fVar31[4] = 0f;
			fVar31[5] = 0f;
			fVar31[6] = 0f;
			fVar31[7] = 0f;
			fVar31[8] = 0f;
			fVar31[9] = 0f;
			break;
		case 6:
			vVar0[0 /*3*/] = { 2269.086f, 246.5402f, 42.6415f };
			vVar0[1 /*3*/] = { 2290.032f, 233.1136f, 42.6296f };
			vVar0[2 /*3*/] = { 2307.678f, 227.3275f, 42.5611f };
			vVar0[3 /*3*/] = { 2298.581f, 244.8045f, 42.5391f };
			vVar0[4 /*3*/] = { 2278.559f, 262.9825f, 42.5704f };
			vVar0[5 /*3*/] = { 2269.502f, 280.6956f, 42.565f };
			vVar0[6 /*3*/] = { 2246.879f, 281.0435f, 42.6619f };
			vVar0[7 /*3*/] = { 2260.029f, 269.8175f, 42.6423f };
			vVar0[8 /*3*/] = { 2293.865f, 221.8443f, 42.789f };
			vVar0[9 /*3*/] = { 2315.018f, 234.8486f, 42.6802f };
			fVar31[0] = 0f;
			fVar31[1] = 0f;
			fVar31[2] = 0f;
			fVar31[3] = 0f;
			fVar31[4] = 0f;
			fVar31[5] = 0f;
			fVar31[6] = 0f;
			fVar31[7] = 0f;
			fVar31[8] = 0f;
			fVar31[9] = 0f;
			break;
		case 7:
			vVar0[0 /*3*/] = { 2336.061f, 895.5226f, 71.6033f };
			vVar0[1 /*3*/] = { 2352.156f, 911.7427f, 71.6241f };
			vVar0[2 /*3*/] = { 2374.058f, 910.8492f, 71.6276f };
			vVar0[3 /*3*/] = { 2383.966f, 915.916f, 71.597f };
			vVar0[4 /*3*/] = { 2399.135f, 916.9211f, 71.622f };
			vVar0[5 /*3*/] = { 2408.721f, 912.1439f, 71.6998f };
			vVar0[6 /*3*/] = { 2419.699f, 908.816f, 71.6805f };
			vVar0[7 /*3*/] = { 2431.15f, 913.2443f, 71.6392f };
			vVar0[8 /*3*/] = { 2442.831f, 910.0598f, 71.6474f };
			vVar0[9 /*3*/] = { 2451.96f, 934.7285f, 71.5998f };
			fVar31[0] = 0f;
			fVar31[1] = 0f;
			fVar31[2] = 0f;
			fVar31[3] = 0f;
			fVar31[4] = 0f;
			fVar31[5] = 0f;
			fVar31[6] = 0f;
			fVar31[7] = 0f;
			fVar31[8] = 0f;
			fVar31[9] = 0f;
			break;
	}
	Var42.f_6 = 1084227584;
	Var42.f_7 = 1106247680;
	Var42.f_8 = 1073741824;
	Var42.f_9 = 1112014848;
	Var42.f_10 = 1120403456;
	Var42.f_11 = -4;
	Var42.f_12 = 4;
	Var42.f_13 = 4;
	Var42.f_14 = 4;
	Var42.f_15 = 5;
	Var42.f_16 = 5;
	Var42.f_17 = -2;
	Var42.f_18 = -1;
	Var42 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	Var42.f_7 = 40f;
	Var42.f_9 = 60f;
	func_650(&Var42);
	if (func_407(2))
	{
		Var42.f_16 = 20;
	}
	if (func_651(&Var42, &vVar0))
	{
		*uParam0 = { vVar0[Var42.f_18 /*3*/] };
		*uParam1 = fVar31[Var42.f_18];
		if (func_407(2))
		{
			*uParam1 = func_652(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), true, false), *uParam0, 1);
		}
		return true;
	}
	return false;
}

void func_567(int iParam0)
{
	func_261(&(Local_13.f_24), iParam0);
}

void func_568(int iParam0)
{
	func_262(&(Local_13.f_24), iParam0);
}

bool func_569(int iParam0)
{
	return func_241(Local_640.f_173.f_2, iParam0);
}

Vector3 func_570()
{
	int iVar0;
	vector3 vVar1;

	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_118(), &iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (!TASK::WAYPOINT_RECORDING_GET_COORD(func_118(), (iVar0 - 1), &vVar1))
	{
	}
	else
	{
		return vVar1;
	}
	return 0f, 0f, 0f;
}

float func_571(var uParam0)
{
	if (!func_522(uParam0))
	{
		return 0f;
	}
	return (BUILTIN::TO_FLOAT(func_559(uParam0)) * 0.001f);
}

float func_572()
{
	if (func_407(4))
	{
		return 2f;
	}
	return 1f;
}

void func_573(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_256(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (((ENTITY::IS_ENTITY_DEAD(func_256(0)) || PED::GET_PED_CONFIG_FLAG(func_256(0), 580, true)) || !func_404(iVar0, PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), 70f, 1, 1)) || func_466(iParam0))
	{
		bVar1 = true;
	}
	if (!func_653(iParam0))
	{
		if (func_404(Global_34, iVar0, 20f, 1, 1) && !bVar1)
		{
			func_654(iParam0);
		}
	}
	else if (!func_404(Global_34, iVar0, 40f, 1, 1) && bVar1)
	{
		func_655(iParam0);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_656(iVar0);
	}
	else if (bVar1)
	{
		if (!func_503(iVar0, 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), 3, 67108864, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(iVar0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		}
	}
	else if ((MISC::GET_FRAME_COUNT() % 120) == 0 && !PED::IS_PED_IN_COMBAT(iVar0, 0))
	{
		func_656(iVar0);
	}
}

void func_574(int iParam0)
{
	func_262(&(Local_640.f_173), iParam0);
}

bool func_575()
{
	return func_66(32);
}

void func_576(bool bParam0)
{
	if (!func_66(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_66(256))
		{
			func_179(Local_640.f_18, 0);
			func_145(256);
		}
	}
	func_145(32);
}

bool func_577()
{
	return func_66(16);
}

void func_578(bool bParam0)
{
	if (!func_66(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_66(256))
		{
			func_179(Local_640.f_18, 0);
			func_145(256);
		}
	}
	func_145(16);
}

float func_579(float fParam0, float fParam1, float fParam2)
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

void func_580(int iParam0)
{
	AUDIO::_0xD9130842D7226045(func_657(iParam0), 0);
}

bool func_581()
{
	return Global_1146212.f_21645[54 /*209*/].f_208;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1718188498;
		case 1:
			return -1718188498;
		case 2:
			return -1754709769;
		case 3:
			return -1718188498;
		case 4:
			return 986272521;
		case 5:
			return 986272521;
		case 6:
			return 986272521;
		case 7:
			return 986272521;
		case 8:
			return 916613222;
		case 9:
			return 916613222;
		case 10:
			return -1718188498;
		case 11:
			return 986272521;
		case 12:
			return 986272521;
		case 13:
			return -1718188498;
		default:
			break;
	}
	return 0;
}

void func_583(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	FLOCK::_0x8B6F0F59B1B99801(iParam0, 2);
	PED::_0x992187D975635DF5(iParam0, 283549708);
	PED::_0x0B787A37EEDD226F(iParam0, iParam1);
	PED::_0x6569F31A01B4C097(iParam0, 10, 1);
	ENTITY::_0x18FF3110CF47115D(iParam0, 23, 1);
	PED::_0xAE6004120C18DF97(iParam0, 10, 1);
	PED::_0xAE6004120C18DF97(iParam0, 1, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 542, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 15, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 529, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 370, true);
	ENTITY::_0x4B436BAC8CBE9B07(iParam0, 1, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 588, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 568, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 585, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 583, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 305, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 306, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 186, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 465, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 388, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 587, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 76, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 81, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 82, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 85, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 83, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 84, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 89, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 90, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 105, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 106, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 78, 20f);
	PED::SET_PED_HEARING_RANGE(iParam0, 20f);
	if (iParam2 != -1)
	{
		iVar0 = func_405(ENTITY::GET_ENTITY_MODEL(iParam0));
		iVar1 = func_658(iVar0, iParam2);
		ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar1);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar1, 0);
	}
}

void func_584(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 78, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 58, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, true);
	PED::_0xC163DAC52AC975D3(iParam0, 16);
}

float func_585()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_586(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_587(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_588(var uParam0)
{
	return func_471(*uParam0, 2);
}

bool func_589(int iParam0)
{
	return FLOCK::_0xF8B48A361DC388AE(iParam0) == 2;
}

void func_590(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_1 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && func_659(*uParam1, Global_35, 1) < 300f)
	{
		bVar0 = true;
	}
	bVar1 = false;
	bVar1 = func_660();
	if (uParam0->f_1 == PLAYER::PLAYER_ID())
	{
		if (bVar1)
		{
			Global_1198045 = 1;
		}
		else if (bVar0)
		{
			Global_1198045 = 1;
			if ((PED::IS_PED_DEAD_OR_DYING(*uParam1, true) || PED::IS_PED_INJURED(*uParam1)) || PED::GET_PED_CONFIG_FLAG(*uParam1, 580, true))
			{
				func_661(*uParam1);
			}
		}
	}
	if (!bVar1)
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(*uParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam1, true)) || PED::IS_PED_INJURED(*uParam1)) || PED::GET_PED_CONFIG_FLAG(*uParam1, 580, true))
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!bVar1)
	{
		if (func_476(iVar2, *uParam1, 1, 1) > 300f)
		{
			return;
		}
	}
	if ((func_241(uParam1->f_2, 1) || func_241(uParam1->f_2, 2)) && uParam1->f_1 != 0)
	{
		return;
	}
	uParam1->f_1 = Global_1296859.f_21;
	if (uParam0->f_1 == PLAYER::PLAYER_ID())
	{
		func_261(&(uParam1->f_2), 1);
	}
	else if (GANG::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), uParam0->f_1))
	{
		func_261(&(uParam1->f_2), 2);
	}
}

void func_591(var uParam0, var uParam1)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_5))
	{
		iVar0 = NETWORK::NET_TO_PED(uParam0->f_5);
		if (!ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(uParam0->f_5)))
		{
			return;
		}
		if (iVar0 != *uParam1)
		{
			return;
		}
		if (ENTITY::_IS_ENTITY_FROZEN(iVar0) && !ENTITY::IS_ENTITY_VISIBLE(iVar0))
		{
			func_662(947, 1);
			func_663(*uParam1);
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_5))
		{
			if (((PED::IS_PED_DEAD_OR_DYING(iVar0, true) || PED::IS_PED_INJURED(iVar0)) || PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) || (ENTITY::_IS_ENTITY_FROZEN(iVar0) && !ENTITY::IS_ENTITY_VISIBLE(iVar0)))
			{
				return;
			}
			func_664(*uParam1);
		}
	}
}

bool func_592(int iParam0, int iParam1)
{
	int iVar0;

	if ((PLAYER::IS_PLAYER_PLAYING(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (((PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &iVar0, 0, 0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1) || ((PLAYER::_0xBEA3A6E5F5F79A6F(iParam0, &iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_593()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((Global_1940258.f_38 == joaat("WEAPON_KIT_BINOCULARS") || Global_1940258.f_38 == joaat("WEAPON_KIT_BINOCULARS_IMPROVED")) || WEAPON::_IS_WEAPON_SNIPER(Global_1940258.f_38))
	{
		if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			return true;
		}
	}
	return false;
}

float func_594(int iParam0)
{
	switch (func_582(func_405(ENTITY::GET_ENTITY_MODEL(iParam0))))
	{
		case -1630294353:
			return 5f;
		case -1754709769:
			return 6f;
		case 916613222:
			return 7f;
		case 986272521:
			return 9f;
		case -1718188498:
			return 11f;
		default:
			break;
	}
	return 10f;
}

bool func_595(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_665(uParam1, 0, iVar0);
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
				if (func_666(uParam1, 4000))
				{
					if ((func_667(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_668(uParam1, iParam0)) && func_669(uParam1, iParam0))
					{
						func_670();
						*uParam2 = 2;
						func_671(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_666(uParam1, 4000))
				{
					if ((func_667(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_668(uParam1, iParam0)) && func_669(uParam1, iParam0))
					{
						func_670();
						*uParam2 = 2;
						func_671(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258.f_35 != 0)
			{
				if (Global_1940258.f_34 == 0)
				{
					if (func_672(iParam0, Global_1940258.f_35))
					{
						func_670();
						*uParam2 = 2;
						func_671(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_673())
				{
					if (func_672(iParam0, Global_1940258.f_36))
					{
						func_670();
						*uParam2 = 2;
						func_671(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_674(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_675(Global_34, iParam0, uParam1))
					{
						func_670();
						*uParam2 = 4;
						func_671(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_676(Global_34, iParam0, uParam1))
					{
						func_670();
						*uParam2 = 256;
						func_671(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_677(iParam0, uParam1))
			{
				func_670();
				*uParam2 = 131072;
				func_671(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_678(iParam0, uParam1))
			{
				func_670();
				*uParam2 = 262144;
				func_671(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_596(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_665(uParam2, 1, iVar0);
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
			if (func_679(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_671(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_680(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_681(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_682(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_20 && func_683(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_671(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_674(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_675(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_671(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_676(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_671(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258.f_23) < 300)
			{
				if (func_684(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_684(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_671(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_685(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258.f_19 || uParam2->f_13 < 20f)
			{
				if (func_686(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_666(uParam2, 4000))
				{
					if ((func_667(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_668(uParam2, iParam0)) && func_669(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_671(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_667(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_668(uParam2, iParam0)) && func_669(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940258.f_34 == 0)
			{
				if (Global_1940258.f_35 != 0)
				{
					if (func_672(iParam0, Global_1940258.f_35))
					{
						func_670();
						*uParam3 = 2;
						func_671(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_687(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_688() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_670();
						*uParam3 = 2;
						func_671(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_673())
				{
					if (func_672(iParam0, Global_1940258.f_36))
					{
						func_670();
						*uParam3 = 2;
						func_671(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_689(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_671(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (func_690(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_671(iParam0, uParam2, *uParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_691(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_692(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_671(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_693(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_694(uParam2, 4000))
				{
					if (func_695(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_671(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_696(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_671(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_697(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_671(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_597(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_698(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_598(var uParam0, int iParam1)
{
	return func_241(uParam0->f_10, iParam1);
}

void func_599(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_699(&iVar0);
}

void func_600(var uParam0)
{
	PED::_0xE37287EE358939C3(uParam0);
}

void func_601(var uParam0, int iParam1)
{
	func_262(&(uParam0->f_57), iParam1);
}

void func_602(var uParam0)
{
	PED::_0x011A42FD923D41CA(uParam0);
}

Vector3 func_603(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_700(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_604(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_375(iParam0, joaat("NUM_TIMES_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_605(var uParam0, bool bParam1)
{
	if (bParam1 || !func_522(uParam0))
	{
		func_440(uParam0);
	}
}

void func_606(int iParam0, int iParam1)
{
	struct<29> Var0;
	struct<2> Var31;
	int iVar33;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_375(iParam0, joaat("VARIATIONS_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_120(&Var0, 4) && func_701(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1268861[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*99*/].f_56[iParam0] = iVar33;
}

void func_607(int iParam0)
{
	func_702(iParam0);
}

void func_608(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_127(Global_1272030[iParam0 /*4*/]))
	{
		return;
	}
	func_703(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_128(&(Global_1272030[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_704(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_704(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1296859.f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_704(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_704(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1296859.f_21, true);
	}
}

void func_609(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_420(&Var0);
}

void func_610(struct<2> Param0)
{
	struct<32> Var0;

	if (func_301(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_301(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_301(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_705(Param0, &Var0))
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

void func_611(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_375(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_612(int iParam0, int iParam1, int iParam2)
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
		func_31(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 3 && Var0.f_7 >= 0)
		{
			Global_1268861[iVar31 /*99*/].f_95[Var0.f_7] = 0;
		}
	}
}

bool func_613(var uParam0)
{
	return func_403(uParam0, 16);
}

int func_614()
{
	return -839369609;
}

char* func_615(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LA_ALLIGATOR";
		case 1:
			return "LA_BEAR";
		case 2:
			return "LA_BEAVER";
		case 3:
			return "LA_BISON";
		case 4:
			return "LA_BOAR";
		case 5:
			return "LA_BUCK";
		case 6:
			return "LA_COUGAR";
		case 7:
			return "LA_PANTHER";
		case 8:
			return "LA_COYOTE";
		case 13:
			return "LA_ELK";
		case 9:
			return "LA_FOX";
		case 10:
			return "LA_MOOSE";
		case 11:
			return "LA_RAM";
		case 12:
			return "LA_WOLF";
		default:
			break;
	}
	return "";
}

struct<15> func_616(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_640, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_617(var uParam0)
{
	func_706(uParam0, func_446(4, 117));
}

bool func_618(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_619(int iParam0)
{
	if (!func_407(4) && func_485(iParam0, &(Local_640.f_118)))
	{
		func_707();
	}
	if (!func_407(2))
	{
		if (func_486(iParam0, &(Local_640.f_118), 0) || ((func_115() == 1 && func_407(4)) && func_404(Global_34, iParam0, 10f, 1, 1)))
		{
			func_708();
		}
	}
}

void func_620()
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	while (iVar1 <= 3)
	{
		iVar0 = func_256(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
		}
		else if (Local_13.f_24.f_1 < 8 && !func_503(iVar0, 923520851))
		{
			TASK::TASK_WANDER_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 15f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		}
		iVar1++;
	}
	if (Local_13.f_24.f_1 < 8)
	{
		return;
	}
	if (!func_709())
	{
		func_710();
	}
	iVar1 = 1;
	while (iVar1 <= 7)
	{
		iVar0 = func_256(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || func_529(iVar0))
		{
		}
		else
		{
			func_573(iVar1, 0);
		}
		iVar1++;
	}
}

void func_621()
{
	if (!func_407(1) && func_483(0, 10f, 30f, 80f, 1065353216 /* Float: 1f */, 5, 0, 1))
	{
		func_711();
	}
}

void func_622()
{
	if (!func_407(8) && func_712())
	{
		func_534(&(Local_640.f_53.f_1));
		func_408(8);
	}
	else if (func_407(8) && !func_712())
	{
		func_535(&(Local_640.f_53.f_1));
		func_574(8);
	}
}

void func_623()
{
	if ((Local_13.f_24.f_13 == 255 && !func_407(64)) || (Local_13.f_24.f_13 != 255 && Local_13.f_24.f_13 != PLAYER::PLAYER_ID()))
	{
		if (ENTITY::IS_ENTITY_DEAD(func_256(0)) && ENTITY::_0xEF2D9ED7CE684F08(func_256(0)) == Global_34)
		{
			func_713();
			func_408(64);
		}
	}
}

void func_624()
{
	int iVar0;

	iVar0 = func_256(0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (func_407(16) && !ENTITY::IS_ENTITY_IN_WATER(iVar0))
	{
		func_714(0);
	}
	else if (!func_407(16) && ENTITY::IS_ENTITY_IN_WATER(iVar0))
	{
		func_714(1);
	}
}

void func_625()
{
	int iVar0;

	iVar0 = func_369(0);
	if ((Local_13.f_24.f_1 >= 3 && ENTITY::DOES_ENTITY_EXIST(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_640.f_173.f_5) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_640.f_173.f_5, false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_640.f_173.f_5))
		{
			OBJECT::DELETE_OBJECT(&iVar0);
		}
	}
}

Vector3 func_626()
{
	return Local_13.f_24.f_10;
}

Vector3 func_627()
{
	return 0f, 0f, ENTITY::GET_ENTITY_HEADING(func_256(0));
}

bool func_628(vector3 vParam0, vector3 vParam3)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_640.f_173.f_5, false))
	{
		return true;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_640.f_173.f_5))
	{
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_640.f_173.f_5, "beaver", func_256(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_640.f_173.f_5, vParam0, vParam3, 2);
	ANIMSCENE::START_ANIM_SCENE(Local_640.f_173.f_5);
	return true;
}

void func_629(int iParam0)
{
	func_261(&(Local_63[Local_640.f_173.f_3 /*18*/].f_6), iParam0);
}

bool func_630(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = Local_640.f_173.f_3;
	}
	return func_241(Local_63[iParam1 /*18*/].f_6, iParam0);
}

void func_631(int iParam0)
{
	func_262(&(Local_63[Local_640.f_173.f_3 /*18*/].f_6), iParam0);
}

bool func_632(int iParam0, float fParam1, bool bParam2)
{
	if (!func_564(4) || bParam2)
	{
		if ((ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_640.f_173.f_5, false) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && !PED::GET_PED_CONFIG_FLAG(iParam0, 580, false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(-fParam1, 0f, 0f), true, false, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
			func_629(4);
			return true;
		}
	}
	return false;
}

bool func_633()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;

	iVar4 = func_256(0);
	func_715(&vVar0, &fVar3);
	ENTITY::FREEZE_ENTITY_POSITION(iVar4, false);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar4, vVar0, fVar3, true, false, true);
	return true;
}

void func_634(bool bParam0, bool bParam1)
{
	func_631(4);
	func_631(8);
	if (bParam0)
	{
		func_716();
	}
	if (bParam1 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_640.f_173.f_5))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_640.f_173.f_5);
	}
	func_629(16);
}

int func_635(int iParam0)
{
	return PLAYER::GET_PLAYER_PED(func_717(iParam0));
}

void func_636(int iParam0, bool bParam1)
{
	if ((!func_718(1) && bParam1) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 74) > 0f)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 74, 0f);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (!func_718(1))
		{
			if (!PED::GET_PED_CONFIG_FLAG(iParam0, 580, true))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0, func_635(iParam0), 3, 67117056, 9999f, -1, 0);
				PED::SET_PED_KEEP_TASK(iParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
				func_719(1);
			}
		}
		else if ((((!ENTITY::IS_ENTITY_DEAD(iParam0) && !PED::GET_PED_CONFIG_FLAG(iParam0, 580, false)) && !PED::IS_PED_FLEEING(iParam0)) && !PED::IS_PED_IN_COMBAT(iParam0, 0)) && TASK::IS_PED_STILL(iParam0))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0, func_635(iParam0), 3, 67117056, 9999f, -1, 0);
		}
	}
}

void func_637(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_638(var uParam0)
{
	return func_471(*uParam0, 2);
}

int func_639(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_640(vector3 vParam0, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	fVar2 = iParam3;
	iVar5 = 255;
	fVar3 = iParam3;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (bParam4 && !func_412(iVar1, 1, 1))
			{
			}
			else if (!func_413(iVar1))
			{
			}
			else
			{
				iVar6 = PLAYER::GET_PLAYER_PED(iVar4);
				if (bParam5)
				{
					if (((PED::_IS_PED_HOGTIED(iVar6) || PED::_GET_LASSOER_OF_PED(iVar6)) || func_505(4, iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar6, false))
					{
					}
					else
					{
						fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, false, false), vParam0);
						if (fVar2 < fVar3)
						{
							iVar5 = iVar4;
							fVar3 = fVar2;
						}
					}
					iVar0++;
					return iVar5;
				}
			}
		}
	}
}

int func_641()
{
	return Global_1051252.f_12;
}

char* func_642()
{
	return "unnamed";
}

int func_643(int iParam0)
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

bool func_644(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_720(36, iParam0);
}

int func_645(int iParam0)
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

bool func_646(int iParam0)
{
	if (func_721(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_722(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

int func_647(vector3 vParam0)
{
	return PLAYER::GET_PLAYER_PED(func_640(vParam0, 1203982208 /* Float: 99999f */, 1, 0));
}

bool func_648(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_547(vParam0, vParam3) <= (fParam6 * fParam6);
}

float func_649(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

void func_650(var uParam0)
{
	func_723(uParam0, 1);
	func_723(uParam0, 2);
	func_723(uParam0, 4);
}

bool func_651(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[20];
	int iVar24;
	int iVar25;
	int iVar26;
	vector3 vVar27;
	float fVar30;

	iVar2 = *uParam1;
	iVar24 = uParam0->f_11;
	iVar25 = func_724(uParam0);
	if (iVar2 > 20)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (func_725(uParam0, 1))
		{
			if (func_648(*uParam0, *(uParam1[iVar0 /*3*/]), uParam0->f_8, 1) || !func_648(*uParam0, *(uParam1[iVar0 /*3*/]), uParam0->f_9, 1))
			{
				iVar3[iVar0] = (uParam0->f_11 - 1);
			}
			else if (func_725(uParam0, 2))
			{
				if (!func_726(*(uParam1[iVar0 /*3*/]), 1f, uParam0->f_10))
				{
					iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_12);
				}
				else if (func_725(uParam0, 8))
				{
					iVar3[iVar0] = (uParam0->f_11 - 1);
				}
				else
				{
					if (func_725(uParam0, 1))
					{
						if (!func_648(*uParam0, *(uParam1[iVar0 /*3*/]), uParam0->f_6, 1))
						{
							iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_13);
						}
						if (func_648(*uParam0, *(uParam1[iVar0 /*3*/]), uParam0->f_7, 1))
						{
							iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_14);
						}
					}
					if (func_725(uParam0, 4))
					{
						iVar26 = func_647(*uParam0);
						if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar26, true, false), *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar26, true, false), *uParam0))
						{
							iVar3[iVar0] = (iVar3[iVar0] - uParam0->f_16);
						}
					}
					if (func_725(uParam0, 16))
					{
						if (func_727(uParam0->f_3, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
						{
						}
						vVar27 = { *(uParam1[iVar0 /*3*/]) - *uParam0 };
						fVar30 = func_728(uParam0->f_3, vVar27);
						if (fVar30 < 0f)
						{
							iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_15);
						}
					}
					if (iVar3[iVar0] >= iVar25)
					{
						uParam0->f_18 = iVar0;
						return true;
					}
				}
				iVar0++;
				iVar0 = 0;
				while (iVar0 <= (iVar2 - 1))
				{
					if (iVar3[iVar0] < uParam0->f_11)
					{
					}
					else
					{
						if (func_725(uParam0, 2))
						{
							iVar1 = 0;
							while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
							{
								if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iVar1), *(uParam1[iVar0 /*3*/]), 1f, 1120403456 /* Float: 100f */))
								{
									iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_17);
									if (iVar3[iVar0] < uParam0->f_11)
									{
									}
									else
									{
										iVar1++;
									}
									if (iVar3[iVar0] > iVar24)
									{
										iVar24 = iVar3[iVar0];
										uParam0->f_18 = iVar0;
									}
									iVar0++;
									if (uParam0->f_18 > -1)
									{
										return true;
									}
									return false;
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_652(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_653(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_640.f_186.f_7[iParam0 /*11*/].f_1);
}

void func_654(int iParam0)
{
	if (!func_653(iParam0))
	{
		func_729(iParam0, joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
	}
}

void func_655(int iParam0)
{
	if (func_653(iParam0))
	{
		func_170(iParam0);
	}
}

void func_656(int iParam0)
{
	TASK::TASK_COMBAT_PED(iParam0, PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), 0, 0);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 74, 1f);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
}

char* func_657(int iParam0)
{
	switch (func_405(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		case 0:
			return "LEGENDARY_ALLIGATOR_CALL_SOUNDS";
		case 1:
			return "LEGENDARY_BEAR_CALL_SOUNDS";
		case 2:
			return "LEGENDARY_BEAVER_CALL_SOUNDS";
		case 3:
			return "LEGENDARY_BISON_CALL_SOUNDS";
		case 4:
			return "LEGENDARY_BOAR_CALL_SOUNDS";
		case 5:
			return "LEGENDARY_BUCK_CALL_SOUNDS";
		case 6:
			return "LEGENDARY_COUGAR_CALL_SOUNDS";
		case 7:
			return "LEGENDARY_PANTHER_CALL_SOUNDS";
		case 8:
			return "LEGENDARY_COYOTE_CALL_SOUNDS";
		case 9:
			return "LEGENDARY_FOX_CALL_SOUNDS";
		case 10:
			return "LEGENDARY_MOOSE_CALL_SOUNDS";
		case 11:
			return "LEGENDARY_RAM_CALL_SOUNDS";
		case 12:
			return "LEGENDARY_WOLF_CALL_SOUNDS";
		case 13:
			return "LEGENDARY_ELK_CALL_SOUNDS";
		default:
			break;
	}
	return "";
}

int func_658(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	switch (iParam0)
	{
		case 0:
			fVar0 = 230f;
			break;
		case 1:
			fVar0 = 270f;
			break;
		case 2:
			fVar0 = 70f;
			break;
		case 3:
			fVar0 = 220f;
			break;
		case 4:
			fVar0 = 200f;
			break;
		case 5:
			fVar0 = 110f;
			break;
		case 6:
			fVar0 = 200f;
			break;
		case 7:
			fVar0 = 200f;
			break;
		case 8:
			fVar0 = 85f;
			break;
		case 13:
			fVar0 = 110f;
			break;
		case 9:
			fVar0 = 85f;
			break;
		case 10:
			fVar0 = 220f;
			break;
		case 11:
			fVar0 = 110f;
			break;
		case 12:
			fVar0 = 130f;
			break;
	}
	fVar1 = 1f;
	switch (iParam1)
	{
		case 0:
			fVar1 = Global_1901947.f_852.f_5;
			break;
		case 1:
			fVar1 = Global_1901947.f_852.f_6;
			break;
		case 2:
			fVar1 = Global_1901947.f_852.f_7;
			break;
	}
	fVar0 = (fVar0 * fVar1);
	return BUILTIN::ROUND(fVar0);
}

float func_659(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_660()
{
	return 0;
}

void func_661(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (MAP::_DOES_ENTITY_HAVE_BLIP(iParam0))
	{
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::_BLIP_REMOVE_MODIFIER(iVar0, 580546400);
			MAP::_BLIP_SET_MODIFIER(iVar0, 580546400);
		}
	}
}

void func_662(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_730(iParam0, &iVar0, &iVar1);
	if (!func_731(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_732(iVar0, iVar1);
}

void func_663(int iParam0)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar0.f_2 = Global_35.f_2;
	vVar0 = { vVar0 - Global_35 };
	if (func_244(vVar0))
	{
		vVar0 = { 1f, 0f, 0f };
	}
	vVar0 = { func_349(vVar0) };
	vVar0 = { Global_35 + vVar0 * Vector(160f, 160f, 160f) };
	AUDIO::_PLAY_SOUND_FROM_POSITION(func_733(iParam0), vVar0, func_657(iParam0), false, 0, true, 0);
}

void func_664(var uParam0)
{
	AUDIO::_0x0E53530D9B2DB01D(uParam0, -1574878795, 1);
}

void func_665(var uParam0, bool bParam1, int iParam2)
{
	func_734(iParam2);
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
		uParam0->f_14 = func_735(0);
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
							func_242(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_736(1, 1))
						{
							func_242(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_736(1, 1) || *uParam0 & 8192 != 0))
				{
					func_259(uParam0, 33554432);
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
			if (func_737(uParam0))
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
	func_738(uParam0);
}

bool func_666(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_688();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_667(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_739(iVar0, &iVar2))
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
	if (func_740(iVar0, iParam0))
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

int func_668(var uParam0, int iParam1)
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

bool func_669(var uParam0, int iParam1)
{
	if (func_741(uParam0))
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

void func_670()
{
}

void func_671(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_742(iParam2, 1, 1, 1, 0))
	{
		func_242(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_743(uParam1, 1);
	func_744();
}

bool func_672(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_476(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_673()
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
	if ((func_688() - Global_1940258.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_674(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_688();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_675(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_745(uParam2);
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
			if (func_669(uParam2, iParam1))
			{
				func_743(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_676(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_746(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_669(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_743(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_677(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_747(uParam1);
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
		fVar2 = func_748(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_749())
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

bool func_678(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_750(iParam0))
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

bool func_679(int iParam0, var uParam1)
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
			if (!func_751(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_752(iParam0, iVar2) <= func_753(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_680(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_754(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_755(uParam1);
			if (func_756(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_757(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_743(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_758(uParam1))
						{
							func_743(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_681(int iParam0, int iParam1, var uParam2)
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
	if (func_759(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_755(uParam2);
		if (func_756(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_757(uParam2)
				{
					func_743(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_682(int iParam0, var uParam1)
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
	if (func_751(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_757(uParam1)
		{
			fVar3 = func_755(uParam1);
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

int func_683(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_760(bParam1, bParam2, bParam3);
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

bool func_684(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_761(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_743(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_30))
				{
					func_743(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar4, 0, 0);
					if (func_762(iParam1, vVar0, vVar4))
					{
						func_743(uParam2, 1);
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
					func_743(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar7, 0, 0);
					if (func_762(iParam1, vVar0, vVar7))
					{
						func_743(uParam2, 1);
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

bool func_685(int iParam0, var uParam1)
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
		if (!func_751(iParam0, uParam1, Global_1940258.f_28[iVar0]) || iParam0 == Global_1940258.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_763(Global_1940258.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false), vVar9);
			if (func_764(Global_1940258.f_28[iVar0]))
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
			if (func_765(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_766(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_767(uParam1, iParam0, fVar1, iVar0))
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

bool func_686(int iParam0, var uParam1)
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

bool func_687(var uParam0, int iParam1)
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
		if (func_768(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_688();
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
						if (func_659(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_688();
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

int func_688()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_689(var uParam0, int iParam1)
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
	fVar0 = func_753(uParam0);
	if (uParam0->f_13 > func_769(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_770(iParam1);
	iVar1 = func_771(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_690(var uParam0, int iParam1)
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
	if (func_772(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_773(vVar1, vVar4);
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

int func_691(int iParam0, int iParam1, var uParam2)
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
	return func_774(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_692(int iParam0, var uParam1)
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
		if (func_775(iParam0, uParam1, 1))
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
	if (!func_776(iParam0))
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
			if (func_777(uParam1))
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
					if (!func_778(uParam1, iParam0))
					{
						if (func_659(iVar4, Global_35, 1) < 7f)
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

bool func_693(int iParam0, var uParam1)
{
	if (!func_779(0))
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

bool func_694(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_688();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_695(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_696(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_688();
	}
	else if (func_688() - uParam1->f_5) > func_780(uParam1)
	{
		return func_781(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_697(var uParam0, int iParam1)
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

bool func_698(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_699(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

Vector3 func_700(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_701(int iParam0)
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

void func_702(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1296859.f_21;
	Var1 = { func_375(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_703(int iParam0, int iParam1, int iParam2)
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

struct<2> func_704(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_705(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_553(Param0, &vVar0);
	if (func_782(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_706(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 11, &uParam1);
}

void func_707()
{
	struct<15> Var0;

	Var0 = { func_616(joaat("ANIMALALERTED")) };
	func_617(&Var0);
}

void func_708()
{
	struct<15> Var0;

	Var0 = { func_616(475888450) };
	func_617(&Var0);
}

bool func_709()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 1;
	iVar0 = 4;
	while (iVar0 <= 7)
	{
		iVar1 = func_256(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && func_529(iVar1))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return iVar2;
}

int func_710()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	struct<2> Var7;
	char cVar17[64];

	bVar2 = func_709();
	if (bVar2)
	{
		return 1;
	}
	if (!func_381(&(Local_640.f_173.f_10)))
	{
		func_509(&(Local_640.f_173.f_10), 0);
	}
	else if (func_472(&(Local_640.f_173.f_10)) < 6f)
	{
		return 0;
	}
	vVar3.f_3 = -1;
	Var7 = -1;
	iVar0 = 4;
	while (iVar0 <= 7)
	{
		iVar1 = func_256(iVar0);
		if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || !func_529(iVar1))
		{
		}
		else
		{
			Var7 = 52;
			Var7.f_1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), true, false) };
			StringCopy(&cVar17, "la_beaver", 64);
			StringIntConCat(&cVar17, iVar0, 64);
			if (func_783(cVar17, &Var7, &vVar3) != 1)
			{
			}
			else if (func_648(vVar3, 2474.14f, 542f, 64.34f, 3f, 1))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(iVar1, vVar3, true, false, true, true);
				func_784(iVar1);
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar1, 3f);
				TASK::TASK_COMBAT_PED(iVar1, PLAYER::GET_PLAYER_PED(Local_640.f_173.f_8), 0, 0);
				func_380(&(Local_640.f_173.f_10));
			}
			else
			{
				iVar0++;
			}
			return 0;
		}
	}
}

void func_711()
{
	struct<15> Var0;

	Var0 = { func_616(1122860053) };
	func_617(&Var0);
}

bool func_712()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_640.f_173.f_5) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_640.f_173.f_5, false))
	{
		return ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_640.f_173.f_5) > 1f;
	}
	return (func_564(4) || func_564(64));
}

void func_713()
{
	struct<15> Var0;

	Var0 = { func_616(-922869466) };
	func_617(&Var0);
}

void func_714(bool bParam0)
{
	struct<15> Var0;

	Var0 = { func_616(1335691564) };
	if (bParam0)
	{
		Var0.f_11 = 1;
	}
	else
	{
		Var0.f_11 = 0;
	}
	func_617(&Var0);
}

void func_715(var uParam0, var uParam1)
{
	*uParam0 = { Local_13.f_24.f_6 };
	*uParam1 = Local_13.f_24.f_9;
}

void func_716()
{
	func_574(4);
	func_574(2);
	Local_640.f_118.f_32 = 0;
	Local_640.f_118.f_33 = 0;
	Local_640.f_173.f_7 = 255;
	Local_640.f_173.f_8 = 255;
}

int func_717(int iParam0)
{
	return func_640(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1203982208 /* Float: 99999f */, 1, 0);
}

bool func_718(int iParam0)
{
	return func_241(Local_640.f_118.f_34, iParam0);
}

void func_719(int iParam0)
{
	func_261(&(Local_640.f_118.f_34), iParam0);
}

bool func_720(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_785(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_786())
	{
		return func_785(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_785(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_721(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_722(int iParam0)
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
		func_787(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_788(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_723(var uParam0, int iParam1)
{
	func_261(&(uParam0->f_19), iParam1);
}

int func_724(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_725(uParam0, 1))
	{
		iVar0 = (iVar0 + uParam0->f_13);
		iVar0 = (iVar0 + uParam0->f_14);
	}
	if (func_725(uParam0, 2))
	{
		iVar0 = (iVar0 + uParam0->f_12);
	}
	if (func_725(uParam0, 16))
	{
		iVar0 = (iVar0 + uParam0->f_15);
	}
	return iVar0;
}

bool func_725(var uParam0, int iParam1)
{
	return func_241(uParam0->f_19, iParam1);
}

bool func_726(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;

	if (func_515(Global_34, vParam0, fParam4, 1, 1) && CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1), vParam0, fParam3, fParam4))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_727(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

float func_728(vector3 vParam0, vector3 vParam3)
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

void func_729(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_170(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_640.f_186.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, Local_640.f_186.f_7[iParam0 /*11*/]);
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
	Local_640.f_186.f_7[iParam0 /*11*/].f_1 = iVar0;
}

void func_730(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_731(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_789(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_790(iParam0))
	{
		return false;
	}
	if (func_791(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_792(iParam0, 1)) || func_793(32768))
	{
		if (!func_792(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_794())
	{
		return false;
	}
	return true;
}

void func_732(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

char* func_733(int iParam0)
{
	return "CALL";
}

void func_734(int iParam0)
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
	Global_1940258.f_21 = func_795();
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
			func_796(&(Global_1940258.f_28), &(Global_1940258.f_33));
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

var func_735(int iParam0)
{
	return Global_1102219.f_3705[iParam0 /*3*/];
}

bool func_736(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_797(bParam0, &iVar0, &iVar1))
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

bool func_737(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940258.f_34;
	if (func_28() == -1)
	{
		if (Global_1940258.f_34 == 0)
		{
			iVar0 = func_798(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_34) || !Global_1956200.f_1716[4])
	{
		iVar0 = func_798(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_771(iVar0) == -1)
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

void func_738(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_799(uParam0);
	}
}

bool func_739(int iParam0, int iParam1)
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

bool func_740(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_800(iParam0, 1, 0, 0)) && !func_800(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
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

bool func_741(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_742(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_743(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 134217728);
	}
	else
	{
		func_259(uParam0, 134217728);
	}
}

void func_744()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

float func_745(var uParam0)
{
	return uParam0->f_25;
}

int func_746(var uParam0)
{
	return uParam0->f_23;
}

float func_747(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_769(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_801(uParam0);
	}
	return func_769(uParam0);
}

float func_748(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_749()
{
	int iVar0;
	int iVar1;

	iVar0 = func_803(func_802());
	iVar1 = func_804(func_802());
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

bool func_750(int iParam0)
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

bool func_751(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_771(iParam2);
	}
	else
	{
		iVar1 = func_770(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_771(iParam0);
	}
	else
	{
		iVar0 = func_770(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_180(*uParam1, 8388608))
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

float func_752(int iParam0, int iParam1)
{
	return func_476(iParam0, iParam1, 1, 1);
}

float func_753(var uParam0)
{
	return uParam0->f_29;
}

bool func_754(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_476(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_805(iVar0, 0)))
		{
			if (func_597(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_755(var uParam0)
{
	return uParam0->f_18;
}

bool func_756(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_180(*uParam0, 4194304))
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

int func_757(var uParam0)
{
	return uParam0->f_19;
}

int func_758(var uParam0)
{
	return uParam0->f_20;
}

bool func_759(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_805(iVar0, 0)))
		{
			if (func_698(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_760(bool bParam0, bool bParam1, bool bParam2)
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

int func_761(var uParam0)
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

bool func_762(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_806(iParam0, vParam4, 0.5f))
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

int func_763(int iParam0)
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
	if (func_807(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_764(int iParam0)
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

bool func_765(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_750(iParam1))
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

bool func_766(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_750(iParam1))
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

bool func_767(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_808(uParam0);
	if (func_750(iParam1))
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

bool func_768(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_659(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_769(var uParam0)
{
	return uParam0->f_26;
}

int func_770(int iParam0)
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

int func_771(int iParam0)
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

int func_772(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_809(iParam0, vVar0, iParam2);
}

float func_773(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_774(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_739(Global_34, &iVar1))
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
		fVar2 = func_476(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_476(iParam0, Global_1940258.f_34, 0, 1) < 2.5f)
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

bool func_775(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_797(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_778(uParam1, iVar0))
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
				if (!bParam2 || !func_778(uParam1, iVar1))
				{
					if (func_659(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_776(int iParam0)
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

bool func_777(var uParam0)
{
	return func_180(*uParam0, 131072);
}

bool func_778(var uParam0, int iParam1)
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

bool func_779(int iParam0)
{
	return false;
}

int func_780(var uParam0)
{
	return uParam0->f_22;
}

int func_781(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_782(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_810(iParam0))
	{
		return false;
	}
	if (func_811(iParam0, uParam1, &uVar0))
	{
		func_812(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_783(char[32] cParam0, var uParam8, var uParam9)
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
	iVar12 = func_813(&Var1);
	if (iVar12 != -1)
	{
		switch (Global_1275441[iVar12 /*29*/])
		{
			case 4:
				*uParam9 = { Global_1275441[iVar12 /*29*/].f_22 };
				func_814(iVar12);
				return 2;
			case 3:
				*uParam9 = { Global_1275441[iVar12 /*29*/].f_22 };
				func_814(iVar12);
				return 1;
		}
	}
	else
	{
		if (func_815())
		{
			return 0;
		}
		if (!func_816(&Var1))
		{
			return 0;
		}
		if (!func_817(uParam8))
		{
			uParam9->f_3 = 2;
			return 2;
		}
		func_818(uParam8, &Var1);
	}
	return 0;
}

void func_784(int iParam0)
{
	ENTITY::SET_ENTITY_VISIBLE(iParam0, true);
	ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
}

bool func_785(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_786()
{
	return Global_1102219.f_3672;
}

void func_787(int iParam0)
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
	func_788(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_788(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_789(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_790(int iParam0)
{
	if (func_792(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_791(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_39.f_3534[iVar0 /*3*/]);
			if (Global_39.f_3534[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_792(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_793(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_794()
{
	if (!func_18())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_795()
{
	if (func_819())
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

void func_796(var uParam0, var uParam1)
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

bool func_797(bool bParam0, int iParam1, int iParam2)
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

int func_798(var uParam0)
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

void func_799(var uParam0)
{
	int iVar0;

	if (Global_1940258.f_32 == 0)
	{
		func_259(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940258.f_28[iVar0]))
				{
					func_242(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

int func_800(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

var func_801(var uParam0)
{
	return uParam0->f_27;
}

int func_802()
{
	return Global_1902818;
}

int func_803(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_804(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

var func_805(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_806(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_807(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_808(var uParam0)
{
	return uParam0->f_28;
}

int func_809(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_728(vVar3, vVar6);
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
	if (func_820(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_810(int iParam0)
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

bool func_811(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_821(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_812(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_822(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_823(iVar0);
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
			uParam2->f_5 = func_824(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_825(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_826(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_827(iVar0);
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

int func_813(var uParam0)
{
	int iVar0;

	if (!func_828(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_829(&(Global_1275441[iVar0 /*29*/].f_1), uParam0))
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

void func_814(int iParam0)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 1;
	Var0.f_26 = iParam0;
	func_830(&Var0);
}

bool func_815()
{
	return Global_1276421.f_75.f_1 != -1;
}

bool func_816(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_828(uParam0))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (Global_1275441[iVar1 /*29*/].f_1 == *uParam0 && Global_1275441[iVar1 /*29*/].f_1.f_1 == uParam0->f_1)
		{
			return false;
		}
		if (Global_1275441[iVar1 /*29*/] == -1)
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_817(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (func_244(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_818(var uParam0, var uParam1)
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
	Global_1276421.f_75 = { *uParam1 };
	func_830(&Var0);
}

bool func_819()
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

bool func_820(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_821(int iParam0)
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

int func_822(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_831(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_823(int iParam0)
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

int func_824(int iParam0)
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

int func_825(int iParam0)
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

int func_826(int iParam0)
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

int func_827(int iParam0)
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

bool func_828(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return false;
	}
	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	return true;
}

bool func_829(var uParam0, var uParam1)
{
	if (uParam0->f_1 != uParam1->f_1)
	{
		return false;
	}
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_3), &(uParam1->f_3)))
	{
		return false;
	}
	return true;
}

void func_830(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051252.f_16[17] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[17]))
	{
		return;
	}
	uParam0->f_4 = uParam0->f_4;
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 27, 10, Global_1051252.f_16[17]);
	func_832(uParam0);
}

bool func_831(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_833(iParam0, uParam1, &uVar0))
	{
		func_834(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_832(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_835(iVar0);
		if (func_180(uParam0->f_5.f_9, iVar1))
		{
		}
		iVar0++;
	}
}

bool func_833(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_821(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_834(var uParam0, int iParam1, var uParam2)
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

int func_835(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

