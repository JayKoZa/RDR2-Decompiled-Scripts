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
	struct<36> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_49 = 3;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 3;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	struct<23> Local_57[32];
	struct<270> Local_794 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1064 = 3;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 3;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 1;
	var uLocal_1073 = 0;
	float fLocal_1074 = 0f;
	float fLocal_1075 = 0f;
	var uLocal_1076 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1074 = 1f;
	fLocal_1075 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 44, 42);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 44, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_57, 737, 43);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Local_57[0 /*23*/])), 737, "m_clientData");
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
	else if (func_17(Local_794.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_794.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_794.f_12), Local_794.f_9))
	{
		return true;
	}
	else if (Local_794.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_794, iParam0, 5);
	iVar2 = func_31(&bVar1, Local_794.f_1, Local_794.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_794.f_12 = iVar2;
	iVar0 = Global_1198046.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_794.f_1, Local_794.f_2, Local_794.f_3, iVar0);
	Local_794.f_9 = { func_33(Var3.f_5, 8) };
	Local_794.f_14 = Var3.f_5;
	Local_794.f_15 = { Var3.f_11 };
	Local_794.f_18 = Var3.f_7;
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
	if (Local_794.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_794.f_8)
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
}

void func_27()
{
	if (Local_794.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_63(Local_794.f_12, 4);
		}
	}
	func_64();
	if (func_65(64))
	{
		func_66(Local_13.f_6);
	}
	func_67();
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
	while (iVar0 < 3)
	{
		Local_13.f_35.f_1[iVar0] = 255;
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
	func_68(&Var0, Var26.f_5);
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
			func_71(uParam0, iParam2);
			break;
		case 2:
			func_72(uParam0, iParam2);
			break;
		case 3:
			func_73(uParam0, iParam2);
			break;
		case 4:
			func_74(uParam0, iParam2);
			break;
		case 12:
			func_75(uParam0, iParam2);
			break;
		case 6:
			func_76(uParam0, iParam2, -1);
			break;
		case 7:
			func_77(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_78(uParam0, iParam2);
			break;
		case 11:
			func_79(uParam0, iParam2);
			break;
		case 9:
			func_80(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_81(uParam0, iParam2);
			break;
		case 8:
			func_82(uParam0, iParam2);
			break;
		case 13:
			func_83(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_84(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_85(uParam0, iParam2);
			break;
		case 16:
			func_86(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_87(uParam0, iParam2);
			break;
		case 21:
			func_88(uParam0, iParam2);
			break;
		case 28:
			func_89(uParam0, iParam2);
			break;
		case 25:
			func_90(uParam0, iParam2);
			break;
		case 24:
			func_91(uParam0, iParam2);
			break;
		case 22:
			func_92(uParam0, iParam2);
			break;
		case 23:
			func_93(uParam0, iParam2);
			break;
		case 29:
			func_94(uParam0, iParam2);
			break;
		case 26:
			func_95(uParam0, iParam2);
			break;
		case 30:
			func_96(uParam0, iParam2);
			break;
		case 27:
			func_97(uParam0, iParam2);
			break;
		case 32:
			func_98(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_99(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_100(uParam0, iParam2);
			break;
		case 17:
			func_101(uParam0, iParam2);
			break;
		case 18:
			func_102(uParam0, iParam2);
			break;
		case 19:
			func_103(uParam0, iParam2);
			break;
		case 20:
			func_104(uParam0, iParam2);
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
			func_105(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_107(iParam0, &(Global_1071686.f_636), func_106(iParam1));
			break;
		case 3:
			Var0.f_1 = func_107(iParam0, &(Global_1071686.f_636.f_602), func_106(iParam1));
			break;
		case 4:
			Var0.f_1 = func_107(iParam0, &(Global_1071686.f_636.f_2104), func_106(iParam1));
			break;
		case 5:
			Var0.f_1 = func_107(iParam0, &(Global_1071686.f_636.f_12606), func_106(iParam1));
			break;
		case 6:
			Var0.f_1 = func_107(iParam0, &(Global_1071686.f_636.f_12908), func_106(iParam1));
			break;
		case 7:
			Var0.f_1 = func_107(iParam0, &(Global_1071686.f_636.f_15910), func_106(iParam1));
			break;
		case 8:
			Var0.f_1 = func_107(iParam0, &(Global_1071686.f_636.f_16512), func_106(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_108();
	}
	return Var0;
}

void func_34()
{
	func_109();
	func_110();
	func_111();
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	func_113(0, func_112(0));
	func_116(0, func_114(0), func_115(0), 1);
	func_117(0, 16);
	func_113(1, func_112(1));
	func_119(1, func_118());
	func_121(1, func_120());
	func_116(1, func_114(1), func_115(1), 1);
	func_113(2, func_112(2));
	func_117(2, 1);
	func_116(2, func_114(2), func_115(2), 1);
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_122(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_106(Param0))
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

	iVar0 = Global_1198046.f_231.f_1066[Local_794.f_12 /*17*/].f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_794.f_1, Local_794.f_2, Local_794.f_3, iVar0);
	if (!func_123(&Var1, 1))
	{
		func_124(1);
		return;
	}
	Local_13.f_6 = func_125(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)));
	func_126(256);
	if (func_127(Local_13.f_6))
	{
		func_128(5);
		func_124(6);
	}
	else
	{
		func_124(1);
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
	func_32(&Var0, Local_794.f_1, Local_794.f_2, -1, 255);
	if (func_123(&Var0, 1))
	{
		func_124(2);
		return;
	}
	if (func_129(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_794.f_15, Var0.f_10, 2442122);
		func_124(2);
	}
	else if (bVar31)
	{
		func_128(3);
		func_124(6);
	}
	if (!func_130(Local_13.f_3.f_2))
	{
		func_131(&(Local_13.f_3.f_2));
	}
	else if (func_132(Local_13.f_3.f_2) > 45000)
	{
		func_128(4);
		func_124(6);
	}
}

void func_45()
{
	if (func_133(1, 255))
	{
		if (!func_134(1))
		{
			if (func_135())
			{
				func_126(1);
			}
		}
		else
		{
			func_136();
			func_124(3);
		}
	}
}

void func_46()
{
	bool bVar0;

	if (func_133(2, 255))
	{
		if (!func_134(2))
		{
			bVar0 = true;
			if (!func_137())
			{
				bVar0 = false;
			}
			if (!func_138())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_126(2);
			}
		}
		else
		{
			func_139();
			func_124(4);
		}
	}
}

void func_47()
{
	func_140();
	func_141();
	func_142();
	if (func_143() || Local_13.f_2 != 0)
	{
		func_144();
		func_124(5);
	}
}

void func_48()
{
	if (func_133(4, 255))
	{
		if (func_145())
		{
			func_126(4);
			func_124(6);
		}
	}
}

void func_49()
{
	if (!func_134(256))
	{
		return;
	}
	if (func_134(512))
	{
		if (func_65(64) && func_125(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_66(Local_13.f_6);
			func_146(64);
		}
	}
	else if (!func_65(64))
	{
		if (func_125(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_147(Local_13.f_6, 1, 1);
			func_148(64);
		}
	}
	else if (func_125(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_66(Local_13.f_6);
		func_146(64);
	}
}

void func_50()
{
	if (!Global_13)
	{
		if (func_133(8192, 255))
		{
			func_149(8192);
		}
	}
	else if (!func_133(8192, 255))
	{
		func_150(8192);
	}
}

void func_51()
{
	func_151();
	func_152();
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 0)
	{
		func_49();
		func_153(1);
	}
}

void func_53()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 1)
	{
		func_153(2);
	}
}

void func_54()
{
	bool bVar0;
	int iVar1;

	if (!func_133(1, 255))
	{
		bVar0 = true;
		if (!func_154())
		{
			bVar0 = false;
		}
		if (!func_155())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_150(1);
		}
		else
		{
			iVar1 = Global_1901947.f_236.f_68;
			if (!func_130(Local_794.f_11))
			{
				func_131(&(Local_794.f_11));
			}
			if (func_132(Local_794.f_11) >= iVar1)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_156(&(Local_794.f_11));
		func_157();
		func_153(3);
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_133(2, 255))
	{
		iVar0 = func_158();
		iVar1 = func_159();
		if (iVar0 && iVar1)
		{
			func_150(2);
		}
		else
		{
			iVar2 = Global_1901947.f_236.f_68;
			if (!func_130(Local_794.f_11))
			{
				func_131(&(Local_794.f_11));
			}
			if (func_160(Local_794.f_11) >= iVar2)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_156(&(Local_794.f_11));
		func_161();
		func_162();
		func_163();
		func_164();
		func_153(4);
	}
}

void func_56()
{
	if (Local_13 >= 5)
	{
		func_165();
		func_153(5);
		return;
	}
	func_166();
	func_167();
	func_168();
	func_169();
	func_170();
	func_171();
}

void func_57()
{
	if (!func_133(4, 255))
	{
		if (func_172())
		{
			func_173();
			func_63(Local_794.f_12, 4);
			func_150(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_153(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_134(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
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
		while (iVar1 < 3)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_31[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_31[iVar1]);
				func_174(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					if (!func_175(iVar1, 16))
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
	func_176(&(Local_794.f_246.f_13));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_794.f_246.f_11))
	{
		VOLUME::_DELETE_VOLUME(Local_794.f_246.f_11);
	}
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_177(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
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
	else if (func_65(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_178(Local_794.f_9, iVar0, 0, 255, 0);
	func_148(4);
	if (bVar1)
	{
		func_179(Local_794.f_1, Local_794.f_2);
		if (!func_65(256))
		{
			if (iVar0 == 1)
			{
				func_180(Local_794.f_18, 1);
			}
			else
			{
				func_180(Local_794.f_18, 0);
			}
			func_148(256);
		}
	}
	else
	{
		func_180(Local_794.f_18, 2);
	}
}

bool func_65(int iParam0)
{
	return func_181(Local_794.f_7, iParam0);
}

void func_66(int iParam0)
{
	int iVar0;

	if (!func_182(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_70 = iParam0;
	Global_1134390[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_67()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = func_59();
	func_183(1, 0);
	iVar1 = func_184(1);
	iVar2 = func_184(0);
	iVar3 = func_184(2);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		PED::_0x78815FC52832B690(iVar1, 1);
		PED::_0x58F7DB5BD8FA2288(iVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (!func_185(iVar1, iVar3, 0) && !func_186(65536))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iVar1, iVar2, 6, 0, -1082130432 /* Float: -1f */, -1, iVar3);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (func_187() == 0)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, joaat("REL_CIVMALE"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, joaat("REL_WILD_ANIMAL_PREDATOR"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_CIVMALE"), joaat("REL_WILD_ANIMAL_PREDATOR"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), joaat("REL_WILD_ANIMAL_PREDATOR"));
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iVar2, true, joaat("REL_CIVMALE"));
			PED::SET_PED_CONFIG_FLAG(iVar2, 263, false);
		}
		func_188(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		PED::SET_PED_CONFIG_FLAG(iVar3, 367, false);
		PED::_0x06D26A96CA1BCA75(iVar3, 3, 0f, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar3, false);
		TASK::TASK_GO_TO_WHISTLE(iVar3, iVar1, 0);
	}
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		func_189(iVar4);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_2[iVar4])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_2[iVar4]))
		{
			iVar5 = NETWORK::NET_TO_ENT(Local_13.f_7.f_2[iVar4]);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar5);
		}
		iVar4++;
	}
	func_190();
	func_191(Local_794.f_19.f_34);
	func_191(Local_794.f_19.f_35);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_794.f_19.f_30))
	{
		TASK::_DELETE_SCENARIO_POINT(Local_794.f_19.f_30);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_794.f_19.f_31))
	{
		TASK::_DELETE_SCENARIO_POINT(Local_794.f_19.f_31);
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
	TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_33));
	GRAPHICS::_0xD1472AFF30C103D6(1f);
}

void func_68(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_69(var uParam0)
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
	return Global_1198046.f_231[iParam0 /*15*/];
}

void func_71(var uParam0, int iParam1)
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

void func_72(var uParam0, int iParam1)
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

void func_73(var uParam0, int iParam1)
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

void func_74(var uParam0, int iParam1)
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

void func_75(var uParam0, int iParam1)
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

void func_76(var uParam0, int iParam1, int iParam2)
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

void func_77(var uParam0, int iParam1, int iParam2)
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

void func_78(var uParam0, int iParam1)
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

void func_79(var uParam0, int iParam1)
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

void func_80(var uParam0, int iParam1, int iParam2)
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

void func_81(var uParam0, int iParam1)
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

void func_82(var uParam0, int iParam1)
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

void func_83(var uParam0, int iParam1, int iParam2)
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
			uParam0->f_11 = { func_202(func_125(iParam2)) };
			break;
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
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
			Jump @506; //curOff = 421
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			Jump @506; //curOff = 462
			func_203(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
		}

void func_85(var uParam0, int iParam1)
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

void func_86(var uParam0, int iParam1, int iParam2)
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

void func_87(var uParam0, int iParam1)
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

void func_88(var uParam0, int iParam1)
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

void func_89(var uParam0, int iParam1)
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

void func_90(var uParam0, int iParam1)
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

void func_91(var uParam0, int iParam1)
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

void func_92(var uParam0, int iParam1)
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

void func_93(var uParam0, int iParam1)
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

void func_94(var uParam0, int iParam1)
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

void func_95(var uParam0, int iParam1)
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

void func_96(var uParam0, int iParam1)
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

void func_97(var uParam0, int iParam1)
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

void func_98(var uParam0, int iParam1, int iParam2)
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

void func_99(var uParam0, int iParam1, int iParam2)
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

void func_100(var uParam0, int iParam1)
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

void func_101(var uParam0, int iParam1)
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

void func_102(var uParam0, int iParam1)
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

void func_103(var uParam0, int iParam1)
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

void func_104(var uParam0, int iParam1)
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

void func_105(var uParam0, int iParam1, int iParam2)
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

int func_106(int iParam0)
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

int func_107(int iParam0, var uParam1, int iParam2)
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

struct<2> func_108()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_109()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Local_57[iVar1 /*23*/].f_3.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_110()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_221(&(Local_794.f_115), &(Local_794.f_115.f_32));
	bVar2 = true;
	if (!func_222(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_35.f_5[iVar0] = 0;
			Local_13.f_35.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_57[iVar1 /*23*/].f_9.f_9[iVar0] = 0;
		}
		iVar0++;
	}
	func_223(&(Local_794.f_115.f_78), 8, -1);
	if (bVar2)
	{
		func_223(&(Local_57[iVar1 /*23*/].f_9), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_223(&(Local_57[iVar3 /*23*/].f_9), 8, -1);
			iVar3++;
		}
	}
}

void func_111()
{
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_187())
			{
				case 0:
					return joaat("A_C_BEAR_01");
				case 1:
					return joaat("A_C_BUCK_01");
				default:
					break;
			}
			break;
		case 1:
			return joaat("RE_STALKINGHUNTER_MALES_01");
		case 2:
			return func_224(joaat("HORSE_CLASS_RIDING"), 1);
	}
	return 0;
}

void func_113(int iParam0, int iParam1)
{
	Local_794.f_60.f_7[iParam0 /*11*/].f_3 = iParam1;
}

Vector3 func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_225())
			{
				case 0:
					return -2600.339f, -200.348f, 172.4074f;
				case 1:
					return -2471.388f, 344.5066f, 155.2384f;
				case 2:
					return -2196.24f, 385.8229f, 142.956f;
				case 3:
					return -1598.706f, -1583.181f, 82.05007f;
				case 4:
					return -754.1541f, -1812.722f, 43.37779f;
				case 5:
					return 1789.223f, 1674.79f, 175.551f;
				case 6:
					return 1983.676f, 1325.422f, 193.4437f;
				case 7:
					return 583.4135f, 2036.525f, 209.769f;
				case 8:
					return 1319.929f, 1070.54f, 159.915f;
				case 9:
					return -2181.646f, -1349.82f, 131.5856f;
				case 10:
					return -2137.098f, -1568.92f, 146.1239f;
				default:
					break;
			}
			break;
		case 1:
			return Local_794.f_15;
		case 2:
			return Local_794.f_15;
	}
	return Local_794.f_15;
}

float func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_225())
			{
				case 0:
					return 290f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_116(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_794.f_60.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_794.f_60.f_7[iParam0 /*11*/].f_5 = fParam4;
	if (bParam5)
	{
		func_226(&(Local_794.f_60.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_227(&(Local_794.f_60.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_117(int iParam0, int iParam1)
{
	func_226(&(Local_794.f_60.f_7[iParam0 /*11*/].f_2), iParam1);
}

int func_118()
{
	switch (func_187())
	{
		case 0:
			return 676615008;
		case 1:
			return 1049788380;
		default:
			break;
	}
	return 676615008;
}

void func_119(int iParam0, int iParam1)
{
	Local_794.f_60.f_7[iParam0 /*11*/].f_4 = iParam1;
}

char* func_120()
{
	switch (func_187())
	{
		case 0:
			return "0454_A_M_M_GriRoughTravellers_01_WHITE_01";
		case 1:
			return "0589_A_M_M_Civ_White_13";
		default:
			break;
	}
	return "0454_A_M_M_GriRoughTravellers_01_WHITE_01";
}

void func_121(int iParam0, char* sParam1)
{
	Local_794.f_60.f_7[iParam0 /*11*/].f_10 = sParam1;
}

bool func_122(int iParam0)
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

bool func_123(var uParam0, int iParam1)
{
	return func_228(uParam0->f_25, iParam1);
}

void func_124(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_125(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_126(int iParam0)
{
	if (!func_134(iParam0))
	{
		func_226(&(Local_13.f_1), iParam0);
	}
}

bool func_127(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return (func_229(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_128(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_129(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_230(Local_794.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_794.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_231(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_150(128);
	}
	else if (!func_133(128, 255))
	{
		Local_13.f_3.f_1 = func_232(Param0);
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

bool func_130(int iParam0)
{
	return iParam0 != 0;
}

void func_131(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_132(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

bool func_133(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_181(Local_57[iParam1 /*23*/], iParam0);
}

bool func_134(int iParam0)
{
	return func_181(Local_13.f_1, iParam0);
}

bool func_135()
{
	return true;
}

void func_136()
{
}

bool func_137()
{
	int iVar0;
	bool bVar1;

	iVar0 = 1;
	bVar1 = false;
	if (bVar1)
	{
		func_233();
	}
	return iVar0;
}

bool func_138()
{
	bool bVar0;

	if (!func_234(&bVar0))
	{
		if (bVar0)
		{
			func_233();
		}
		return false;
	}
	return true;
}

void func_139()
{
}

void func_140()
{
	if (!func_134(32) && func_235(32))
	{
		func_126(32);
	}
	if (!func_134(64) && func_235(64))
	{
		func_126(64);
	}
	if (!func_134(16) && func_236(16))
	{
		func_126(16);
	}
	if ((!func_134(2048) && func_235(2048)) && !func_235(4096))
	{
		func_126(2048);
	}
}

void func_141()
{
	bool bVar0;

	if (!bVar0 && func_134(16))
	{
		func_128(1);
		return;
	}
	if (func_134(2048) && !func_235(4096))
	{
		func_128(6);
		return;
	}
}

void func_142()
{
}

bool func_143()
{
	if (func_237())
	{
		return true;
	}
	func_238();
	func_239();
	func_240();
	func_241();
	func_242();
	func_243();
	switch (Local_13.f_7)
	{
		case 0:
			func_244();
			break;
		case 1:
			func_245();
			break;
		case 2:
			func_246();
			break;
		case 3:
			func_247();
			break;
		case 4:
			func_248();
			break;
		case 5:
			func_249();
			break;
		case 6:
			func_250();
			break;
		case 7:
			func_251();
			break;
		case 8:
			func_252();
			break;
		case 9:
			func_253();
			break;
	}
	return false;
}

void func_144()
{
}

bool func_145()
{
	return true;
}

void func_146(int iParam0)
{
	if (func_65(iParam0))
	{
		func_227(&(Local_794.f_7), iParam0);
	}
}

int func_147(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_182(iParam0))
	{
		return 0;
	}
	iVar0 = func_254(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1134390[iVar1 /*83*/].f_70 = iParam0;
	Global_1134390[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_255(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_256(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_148(int iParam0)
{
	if (!func_65(iParam0))
	{
		func_226(&(Local_794.f_7), iParam0);
	}
}

void func_149(int iParam0)
{
	if (func_181(Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*23*/], iParam0))
	{
		func_227(&(Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*23*/]), iParam0);
	}
}

void func_150(int iParam0)
{
	if (!func_133(iParam0, 255))
	{
		func_226(&(Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*23*/]), iParam0);
	}
}

void func_151()
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
				func_257(iVar0);
				break;
			case -1315570756:
				func_258(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_259(iVar0);
		iVar0++;
	}
}

void func_152()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_794.f_269 >= 3)
		{
			Local_794.f_269 = 0;
		}
		func_261(func_260(Local_794.f_269));
		Local_794.f_269++;
		iVar0++;
	}
}

void func_153(int iParam0)
{
	if (Local_794.f_8 != iParam0)
	{
		Local_794.f_8 = iParam0;
	}
}

bool func_154()
{
	int iVar0;

	iVar0 = 1;
	if (!func_262())
	{
		iVar0 = 0;
	}
	if (!func_263("SCRIPT_RE@HUNTER@RIFLE"))
	{
		iVar0 = 0;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_264());
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_264()))
	{
		iVar0 = 0;
	}
	if (STREAMING::HAS_MODEL_LOADED(func_112(0)))
	{
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(func_112(0), func_114(0), true))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_155()
{
	bool bVar0;

	bVar0 = false;
	if (!func_265())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_156(var uParam0)
{
	*uParam0 = 0;
}

void func_157()
{
}

int func_158()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_794.f_19.f_30))
	{
		Local_794.f_19.f_30 = func_266(func_114(0), func_115(0));
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_794.f_19.f_30))
	{
		return 1;
	}
	return 0;
}

int func_159()
{
	return 1;
}

int func_160(int iParam0)
{
	return (iParam0 - Global_1296859.f_21) * 1000;
}

void func_161()
{
	if (!func_65(1))
	{
		func_267(Local_794.f_9);
		func_148(1);
	}
}

void func_162()
{
	func_268();
}

void func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_269(30f, 30f, 1, 1077936128 /* Float: 3f */, 0);
	func_270(1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	func_271(iVar0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, joaat("REL_WILD_ANIMAL"));
		TASK::_TASK_USE_SCENARIO_POINT(iVar1, Local_794.f_19.f_30, 0, 0, false, true, 0, false, -1f, false);
		PED::_0xEEED8FAFEC331A70(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1);
		PED::_SET_PED_DAMAGE(iVar1, 2);
		PED::_SET_PED_QUALITY(iVar1, 2);
		PED::SET_PED_RESET_FLAG(iVar1, 170, true);
		if (func_187() != 0)
		{
		}
		else
		{
			ENTITY::SET_ENTITY_MAX_HEALTH(iVar1, 400);
			ENTITY::_SET_ENTITY_HEALTH(iVar1, 400, 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iVar1, false, joaat("REL_CIVMALE"));
			PED::SET_PED_CONFIG_FLAG(iVar1, 263, true);
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_CIVMALE"));
		func_273(iVar0, func_272());
		func_274(iVar0, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		func_274(iVar0, joaat("WEAPON_REPEATER_CARBINE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		func_275(iVar0, 100f, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 30, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
		PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, 0);
		PED::_0x923583741DC87BCE(iVar0, "Default");
		PED::_0x89F5E7ADECCCB49C(iVar0, "stealth");
		TASK::_0x12990818C1D35886(iVar0, 0, 1065353216 /* Float: 1f */);
		PLAYER::_0xCB0B9506BC91E441(iVar0, 2);
		TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(3), 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
		PED::_0xED1C764997A86D5A(iVar0, iVar2);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
	{
		ENTITY::SET_ENTITY_COORDS(iVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -2f, -3f, 0f), true, false, true, true);
		PED::SET_PED_CONFIG_FLAG(iVar2, 367, true);
		PED::SET_PED_CONFIG_FLAG(iVar2, 297, true);
		PED::SET_PED_CONFIG_FLAG(iVar2, 319, true);
	}
	func_277(&(Local_794.f_115), iVar0, 0);
	func_278(&(Local_794.f_115), iVar0, iVar2, 0);
	func_279(&(Local_794.f_115), 1);
	func_280(1, 1);
	func_280(0, 1);
	func_281(1, 1);
	func_275(iVar0, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 75f, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
	func_282();
	func_283(0, joaat("PERSONA_HONOR_ACTION__MURDER"));
	func_284(1, 0);
	PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iVar1, 0);
	func_285(iVar1, func_264(), 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1);
	func_286();
	GRAPHICS::_0xD1472AFF30C103D6(2.5f);
}

void func_164()
{
	func_287();
}

void func_165()
{
}

void func_166()
{
	float fVar0;

	if (func_230(Local_794.f_15))
	{
		return;
	}
	if (func_288())
	{
		return;
	}
	if (func_289(Local_794.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_794.f_15);
		if (fVar0 < 200f)
		{
			func_150(4096);
		}
		else if (fVar0 < 400f)
		{
			func_149(4096);
			func_150(2048);
		}
		else
		{
			func_149(4096);
			func_149(2048);
		}
	}
}

void func_167()
{
	func_290();
	func_291();
	func_292();
	func_293();
	func_294();
}

void func_168()
{
	if (func_295())
	{
		func_150(8);
	}
	else
	{
		func_149(8);
	}
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if (Local_13.f_7.f_21 != -1)
	{
		func_296(8192, 0);
	}
	else
	{
		func_297(8192);
	}
	if (Local_13.f_7 == 1)
	{
		if (Local_13.f_7.f_1 != 6 && Local_13.f_7.f_1 != 2)
		{
			if (!func_186(4))
			{
				if (!func_186(8))
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
					{
						func_298(&(Local_794.f_115.f_32), ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 15f);
					}
				}
			}
		}
	}
	if (!Local_13.f_7.f_11)
	{
		if (func_299(1))
		{
			func_298(&(Local_794.f_115.f_32), ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 15f);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(iVar2, 6, 1);
	}
	func_300();
	func_301(Local_13.f_7);
	func_302(0);
	func_303();
	func_304();
	if (Local_794.f_19 > 0)
	{
		if (func_305(1, 255, 1) < 50f || Local_794.f_19 > 1)
		{
			func_306();
			if ((((Local_794.f_19.f_9 == 2 || Local_794.f_19.f_9 == 5) || Local_794.f_19.f_9 == 6) || Local_794.f_19 > 1) || func_305(1, 255, 1) < 25f)
			{
				func_307();
			}
			if ((Local_794.f_19 > 1 && (!func_186(1024) || Local_13.f_7.f_12)) && !func_308(iVar0))
			{
				func_309(1);
			}
		}
	}
	switch (Local_794.f_19)
	{
		case 0:
			func_310();
			break;
		case 1:
			func_311();
			break;
		case 2:
			func_312();
			break;
		case 3:
			func_313();
			break;
		case 4:
			func_314();
			break;
		case 5:
			func_315();
			break;
		case 6:
			func_316();
			break;
		case 7:
			func_317();
			break;
		case 8:
			func_318();
			break;
		case 9:
			func_319();
			break;
	}
}

void func_170()
{
	if (!func_133(8, 255))
	{
		func_150(16);
	}
	else
	{
		func_149(16);
	}
}

void func_171()
{
	int iVar0;

	Local_794.f_6 = -1;
	Local_794.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_794.f_5 = (Local_794.f_5 || Local_57[iVar0 /*23*/]);
			Local_794.f_6 = (Local_794.f_6 && Local_57[iVar0 /*23*/]);
		}
		iVar0++;
	}
}

bool func_172()
{
	return true;
}

void func_173()
{
	func_320();
}

void func_174(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_794.f_60.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_794.f_60.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_175(int iParam0, int iParam1)
{
	return func_181(Local_794.f_60.f_7[iParam0 /*11*/].f_2, iParam1);
}

void func_176(var uParam0)
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

bool func_177(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

void func_178(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_322(func_321(Param0));
	iVar1 = func_323(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_324(Param0, &Var2);
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

void func_179(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_325(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_326(iVar0);
}

void func_180(int iParam0, int iParam1)
{
	func_131(&(Global_1272030.f_3271[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1272030.f_3275[iParam0] = func_327(iParam0);
			break;
		case 1:
			Global_1272030.f_3275[iParam0] = func_328(iParam0);
			break;
		case 2:
			Global_1272030.f_3275[iParam0] = func_329(iParam0);
			break;
	}
}

bool func_181(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_182(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_183(int iParam0, int iParam1)
{
	if (iParam0 != 1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (func_330(17, Local_794.f_4))
			{
				return false;
			}
			if (func_331(1, PLAYER::PLAYER_ID(), 0, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_184(int iParam0)
{
	return Local_794.f_60.f_7[iParam0 /*11*/];
}

bool func_185(int iParam0, int iParam1, bool bParam2)
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
	return false;
}

bool func_186(int iParam0)
{
	return func_181(Local_794.f_19.f_38, iParam0);
}

int func_187()
{
	switch (func_225())
	{
		case 3:
		case 4:
		case 9:
		case 10:
			return 1;
		case 0:
		case 1:
		case 2:
		case 5:
		case 6:
		case 7:
		case 8:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_188(bool bParam0)
{
	int iVar0;
	struct<15> Var1;

	iVar0 = func_184(0);
	if (!bParam0)
	{
		if (!func_186(67108864))
		{
			Var1 = { func_332(-113210209) };
			func_333(&Var1);
		}
	}
	else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		func_334(&iVar0, 1, 1, 1);
	}
}

void func_189(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_794.f_19.f_2[iParam0 /*2*/]))
	{
		return;
	}
	MAP::REMOVE_BLIP(&(Local_794.f_19.f_2[iParam0 /*2*/]));
}

void func_190()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_794.f_19.f_36))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_794.f_19.f_36);
		func_191(Local_794.f_19.f_36);
	}
}

void func_191(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_192(var uParam0)
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

int func_193(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_335(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_336(iParam1)) - 1);
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

void func_194(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_337(uParam0);
			break;
		case 1:
			func_337(uParam0);
			break;
		case 2:
			func_337(uParam0);
			break;
		case 3:
			func_338(uParam0);
			break;
		case 4:
			func_337(uParam0);
			break;
		case 5:
			func_337(uParam0);
			break;
		case 6:
			func_338(uParam0);
			break;
		case 7:
			func_338(uParam0);
			break;
		case 8:
			func_338(uParam0);
			break;
		case 9:
			func_337(uParam0);
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
	func_255(&(uParam0->f_25), iParam1);
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
			func_339(uParam0);
			break;
		case 1:
			func_340(uParam0);
			break;
		case 2:
			func_341(uParam0);
			break;
		case 3:
			func_342(uParam0);
			break;
		default:
			func_196(uParam0);
			func_195(uParam0);
			break;
	}
}

Vector3 func_202(int iParam0)
{
	if (!func_182(iParam0))
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
			func_343(uParam0);
			break;
		case 1:
		case 2:
			func_344(uParam0);
			break;
		case 3:
		case 4:
			func_345(uParam0);
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

	if (func_346(&Var1, iParam0) && func_347(&Var1, iParam1))
	{
		func_348(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_218(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_346(&Var1, iParam0) && func_347(&Var1, iParam1))
	{
		func_348(Var1, -1052341598, &iVar0, 0);
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
	iVar0 = func_349(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

Vector3 func_220(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_349(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

void func_221(var uParam0, var uParam1)
{
	func_350(uParam1);
	func_351(uParam1);
	func_352(uParam1);
	func_353(uParam1, 65);
	func_354(uParam1, 15f);
	func_355(uParam1, 1);
	func_356(uParam1, 0);
	func_357(uParam0);
	func_351(uParam0);
	func_358(uParam0, 1);
	func_359(uParam0, 5000);
	func_360(uParam0, 0.5f);
	func_361(uParam0, 1);
	func_356(uParam0, 1);
	func_355(uParam0, 1);
	func_354(uParam0, 15f);
	func_362(uParam0, 1);
	func_363(uParam0, 1);
	func_353(uParam0, 30);
	func_364(uParam0, 1);
	func_365(uParam0, 1);
	func_366(uParam0, 1);
	func_367(uParam0, 1);
	func_368(uParam0, 1.25f);
}

bool func_222(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_369(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_223(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_370(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_371(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_371(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_371(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_224(int iParam0, bool bParam1)
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

int func_225()
{
	return Local_794.f_2;
}

void func_226(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_227(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_228(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_229(int iParam0)
{
	int iVar0;

	if (!func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_372(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_230(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_231(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_232(struct<31> Param0)
{
	var uVar0;

	func_231(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

void func_233()
{
	func_128(2);
}

bool func_234(var uParam0)
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
	while (iVar2 < 3)
	{
		if (func_175(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_373(iVar2, uParam0, &bVar1))
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
			if (func_374(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_31[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_31[iVar2]))
					{
						NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_31[iVar2]);
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

bool func_235(int iParam0)
{
	return func_181(Local_794.f_5, iParam0);
}

bool func_236(int iParam0)
{
	return func_181(Local_794.f_6, iParam0);
}

bool func_237()
{
	int iVar0;

	if (Local_13.f_7 == 10)
	{
		return true;
	}
	if (func_288())
	{
		iVar0 = func_375(1, Global_1901947.f_236.f_63, 1, 0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_238()
{
	int iVar0;
	int iVar1;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (func_187() == 0)
	{
		if (Local_13.f_7.f_12)
		{
			if (!PED::_0x3BDFCF25B58B0415(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					func_376(iVar0, 1, 0);
				}
				Local_13.f_7.f_12 = 0;
				func_377(9);
			}
		}
		else if (PED::_0x3BDFCF25B58B0415(iVar0) && PED::_0xD0B7AEB56229D317(iVar1) == iVar0)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			Local_13.f_7.f_12 = 1;
		}
	}
}

void func_239()
{
	int iVar0;
	int iVar1;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (!func_186(65536) && !func_186(131072))
	{
		if (!func_186(32768))
		{
			if (func_187() != 0 && !ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar0, 1, 1))
				{
					func_376(iVar1, 0, 0);
				}
			}
			if (func_378(iVar1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && Local_794.f_19 != 5)
			{
				func_379(32768);
				func_379(8192);
				if (!func_186(2048))
				{
					Local_13.f_7.f_17 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_296(16, 1);
				}
			}
		}
	}
}

void func_240()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_7 == 1)
	{
		iVar0 = func_184(1);
		iVar1 = func_375(1, 70f, 1, 0);
		if (func_380(iVar0) && NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			if (Local_13.f_7.f_6 < 5)
			{
				if (func_382(func_381(Local_13.f_7.f_6), 1649931367) || func_382(func_381(Local_13.f_7.f_6), -139091549))
				{
					Local_13.f_7.f_6++;
				}
			}
		}
	}
}

void func_241()
{
	int iVar0;

	iVar0 = func_184(1);
	if (Local_13.f_7 == 1)
	{
		if (Local_13.f_7.f_1 != 6 && Local_13.f_7.f_1 != 2)
		{
			if (!func_186(4))
			{
				if (!func_186(8))
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
					{
						if (func_383(Local_13.f_7.f_18, 1500) || (Local_13.f_7.f_18 == 0 && func_384(8192)))
						{
							Local_13.f_7.f_18 = 0;
							func_385(2, 0);
							func_379(8);
							func_379(16777216);
							func_379(32);
						}
					}
				}
				else if (Local_13.f_7.f_18 != 0)
				{
					if (func_383(Local_13.f_7.f_18, 2250) && func_384(8192))
					{
						Local_13.f_7.f_18 = 0;
						if (!func_186(4194304) && Local_13.f_7.f_8 < 3)
						{
							Local_13.f_7.f_8++;
							func_379(16777216);
							func_385(6, 0);
						}
						else
						{
							func_388(func_387(1, 59287, 0, 1, 0), 0, 26);
							func_188(0);
							func_296(32, 1);
						}
					}
				}
			}
		}
	}
}

void func_242()
{
	int iVar0;
	var uVar1;
	int iVar2;

	iVar0 = func_184(0);
	uVar1 = func_184(1);
	if (((((func_389(128) || ENTITY::IS_ENTITY_DEAD(iVar0)) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) || func_390(&uVar1)) || func_186(512)) || func_186(67108864))
	{
		return;
	}
	if (!Local_13.f_7.f_11)
	{
		if (func_299(0))
		{
			iVar2 = func_387(0, 59669, 0, 1, 0);
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2) && func_305(1, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2), 1) > 5f)
			{
				Local_13.f_7.f_11 = 1;
				func_392(0, 0, 0, 255);
			}
		}
	}
}

void func_243()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_7.f_1 != 3 || func_186(16777216))
	{
		return;
	}
	if (!func_186(8))
	{
		iVar0 = func_387(1, 59669, 0, 1, 0);
		if (iVar0 != Local_13.f_7.f_22 && NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			Local_13.f_7.f_22 = iVar0;
			iVar1 = func_393(1060437492 /* Float: 0.707f */, 0, 1);
			switch (iVar1)
			{
				case 0:
					Local_13.f_7.f_21 = 9;
					break;
				case 3:
					Local_13.f_7.f_21 = 10;
					break;
				case 2:
					Local_13.f_7.f_21 = 11;
					break;
				case 1:
					iVar1 = func_393(1f, 1, 0);
					if (iVar1 == 3)
					{
						Local_13.f_7.f_21 = 10;
					}
					else
					{
						Local_13.f_7.f_21 = 8;
					}
					break;
			}
		}
	}
	else
	{
		iVar0 = func_387(1, 60084, 30f, 1, 0);
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			if (Local_13.f_7.f_18 == 0)
			{
				Local_13.f_7.f_22 = iVar0;
				iVar1 = func_393(1060437492 /* Float: 0.707f */, 0, 0);
				if (iVar1 == 1)
				{
					iVar1 = func_393(1f, 0, 0);
				}
				if (func_395())
				{
					switch (iVar1)
					{
						case 0:
							Local_13.f_7.f_21 = 21;
							break;
						case 3:
							Local_13.f_7.f_21 = 22;
							break;
						case 2:
							Local_13.f_7.f_21 = 23;
							break;
					}
				}
				else
				{
					switch (iVar1)
					{
						case 0:
							Local_13.f_7.f_21 = 18;
							break;
						case 3:
							Local_13.f_7.f_21 = 19;
							break;
						case 2:
							Local_13.f_7.f_21 = 20;
							break;
					}
				}
				Local_13.f_7.f_18 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Local_13.f_7.f_22 = 255;
			}
		}
	}
}

void func_244()
{
	if (func_389(512))
	{
		func_377(10);
	}
	if (func_389(1))
	{
		func_377(1);
	}
	if (func_389(4))
	{
		func_377(2);
	}
	if (func_389(8))
	{
		func_377(3);
	}
	if (func_389(2))
	{
		func_377(6);
	}
	if (func_389(16))
	{
		func_377(7);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_245()
{
	int iVar0;
	int iVar1;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	Local_13.f_7.f_10 = (func_396(iVar0, iVar1, 1, 85f, 0) || (func_186(16) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1)));
	if (func_389(4))
	{
		func_377(2);
	}
	if (func_389(8))
	{
		func_377(3);
	}
	if (func_389(2))
	{
		func_377(6);
	}
	if (func_389(16))
	{
		func_377(7);
	}
	if (func_389(32))
	{
		func_377(4);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_246()
{
	if (func_384(128))
	{
		Local_13.f_7.f_20 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_377(5);
	}
}

void func_247()
{
	if (func_389(32))
	{
		func_377(4);
	}
	if (func_384(128))
	{
		Local_13.f_7.f_20 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_377(5);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_248()
{
	if (func_384(256))
	{
		func_377(9);
		Local_13.f_7.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_249()
{
	if (func_389(16))
	{
		Local_13.f_7.f_17 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_377(7);
	}
	if (func_389(256))
	{
		func_377(9);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_250()
{
	if (func_389(256) || func_384(4096))
	{
		func_377(9);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_251()
{
	if (func_389(256))
	{
		func_377(9);
	}
	if (func_389(32))
	{
		func_377(4);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_252()
{
	if (func_389(256) && func_186(524288))
	{
		func_377(9);
	}
	if (func_389(2))
	{
		func_377(6);
	}
}

void func_253()
{
	if (func_389(512))
	{
		func_377(10);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

int func_254(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	if (!func_229(iParam0))
	{
		return 0;
	}
	return Global_1131196[iParam0 /*27*/].f_18.f_1;
}

void func_255(var uParam0, int iParam1)
{
	func_397(uParam0, iParam1);
}

void func_256(var uParam0, int iParam1)
{
	func_398(uParam0, iParam1);
}

void func_257(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_399(&Var0, iParam0))
			{
				func_400(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_258(int iParam0)
{
}

void func_259(int iParam0)
{
}

int func_260(int iParam0)
{
	return iParam0;
}

void func_261(int iParam0)
{
	int iVar0;

	if (func_401(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (func_402(iParam0, func_260(iVar0)))
			{
				if (!func_403(iParam0, func_260(iVar0)))
				{
					if (func_183(iParam0, iVar0))
					{
						func_404(Local_794.f_269.f_9[iVar0], 0, 0);
						func_405(iParam0, func_260(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_262()
{
	switch (func_187())
	{
		case 0:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_ANIMAL_BEAR_SNIFFING_GROUND"), 15, 0, 0);
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_ANIMAL_BEAR_SNIFFING_GROUND"), false))
			{
				return true;
			}
			break;
		case 1:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_ANIMAL_DEER_GRAZING"), 15, 0, 0);
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_ANIMAL_DEER_GRAZING"), false))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_263(char* sParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return true;
	}
	return false;
}

char* func_264()
{
	switch (func_225())
	{
		case 0:
			return "RE_StalkingHunter_Big_Valley_0";
		case 1:
			return "RE_StalkingHunter_Big_Valley_1";
		case 2:
			return "RE_StalkingHunter_Big_Valley_2";
		case 3:
			return "RE_StalkingHunter_Great_Plains_0";
		case 4:
			return "RE_StalkingHunter_Great_Plains_1";
		case 5:
			return "RE_StalkingHunter_Grizzlies_East_0";
		case 6:
			return "RE_StalkingHunter_Grizzlies_East_1";
		case 7:
			return "RE_StalkingHunter_Grizzlies_East_2";
		case 8:
			return "RE_StalkingHunter_Grizzlies_East_3";
		case 9:
			return "net_beat_stalking_hunter_tall_tree_0";
		case 10:
			return "net_beat_stalking_hunter_tall_tree_1";
		default:
			break;
	}
	return "";
}

bool func_265()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(Local_794.f_60.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_406(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_794.f_60.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_794.f_60.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_794.f_60.f_3), iVar0);
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

var func_266(vector3 vParam0, float fParam3)
{
	switch (func_187())
	{
		case 0:
			return TASK::CREATE_SCENARIO_POINT(joaat("WORLD_ANIMAL_BEAR_SNIFFING_GROUND"), vParam0, fParam3, 0, 0, 0);
		case 1:
			return TASK::CREATE_SCENARIO_POINT(joaat("WORLD_ANIMAL_DEER_GRAZING"), vParam0, 0, 0, 0, 0);
		default:
			break;
	}
	return TASK::CREATE_SCENARIO_POINT(joaat("WORLD_ANIMAL_BEAR_SNIFFING_GROUND"), vParam0, -57.94f, 0, 0, 0);
}

void func_267(struct<2> Param0)
{
	if (func_323(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_323(Param0)))
	{
		STATS::_0x99230691875FC218(func_321(Param0), func_323(Param0), Global_35);
	}
}

void func_268()
{
	int iVar0;
	int iVar1;

	if (!func_222(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_407(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_269(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_794.f_246.f_2 = iParam2;
	Local_794.f_246.f_9 = fParam0;
	Local_794.f_246.f_10 = fParam1;
	Local_794.f_246.f_8 = iParam3;
	if (bParam4)
	{
		func_226(&(Local_794.f_246.f_12), 1);
	}
	else
	{
		func_227(&(Local_794.f_246.f_12), 1);
	}
}

void func_270(int iParam0, int iParam1)
{
	func_226(&(Local_794.f_246.f_12), 2);
	Local_794.f_246.f_7 = iParam1;
	Local_794.f_246.f_5 = iParam0;
}

int func_271(int iParam0)
{
	if (func_408(iParam0, &(Local_794.f_246.f_13)))
	{
		Local_794.f_246++;
		return 1;
	}
	return 0;
}

Vector3 func_272()
{
	switch (func_225())
	{
		case 0:
			return -2594.432f, -199.1454f, 172.0232f;
		case 1:
			return -2478.66f, 346.0224f, 154.0556f;
		case 2:
			return -2194.713f, 391.2226f, 140.5225f;
		case 3:
			return -1595.42f, -1579.488f, 82.2383f;
		case 4:
			return -761.2654f, -1810.883f, 46.58766f;
		case 5:
			return 1780.553f, 1667.592f, 176.4512f;
		case 6:
			return 1984.434f, 1330.207f, 193.295f;
		case 7:
			return 595.3819f, 2036.739f, 211.652f;
		case 8:
			return 1321.227f, 1080.102f, 160.5545f;
		case 9:
			return -2177.032f, -1345.304f, 132.7611f;
		case 10:
			return -2141.865f, -1573.724f, 148.1821f;
		default:
			break;
	}
	return 1780.553f, 1667.592f, 176.4512f;
}

void func_273(int iParam0, struct<2> Param1, var uParam3)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		ENTITY::SET_ENTITY_HEADING(iParam0, MISC::GET_HEADING_FROM_VECTOR_2D((Param1 - vVar0.x), (Param1.f_1 - vVar0.y)));
	}
}

int func_274(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_409(iParam3, 1);
	bVar1 = func_409(iParam3, 2);
	bVar2 = !func_409(iParam3, 4);
	bVar3 = func_409(iParam3, 8);
	bVar4 = !func_409(iParam3, 16);
	bVar5 = func_409(iParam3, 32);
	bVar6 = func_409(iParam3, 64);
	return func_410(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_275(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BASE_KNEEL_HUNTER";
		case 1:
			return "ENTER_KNEEL_HUNTER";
		case 2:
			return "EXIT_KNEEL_HUNTER";
		case 3:
			return "IDLE_A_KNEEL_HUNTER";
		case 4:
			return "IDLE_B_KNEEL_HUNTER";
		case 5:
			return "INSPECT_KILL_HUNTER";
		case 6:
			return "FIRE_FAIL_HUNTER";
		case 7:
			return "KILL_REACT_HUNTER";
		case 8:
			return "SHUSH_BEHIND_HUNTER";
		case 9:
			return "SHUSH_FORWARD_HUNTER";
		case 10:
			return "SHUSH_LEFT_HUNTER";
		case 11:
			return "SHUSH_RIGHT_HUNTER";
		case 12:
			return "TRACKING_IDLE_A_HUNTER";
		case 13:
			return "TRACKING_IDLE_B_HUNTER";
		case 14:
			return "WALK";
		case 15:
			return "RUN";
		case 16:
			return "SPOT_HUNTER";
		case 17:
			return "IN_THE_WAY_FWD_HUNTER";
		case 18:
			return "SHUSH_WALKING_FWD_HUNTER";
		case 19:
			return "SHUSH_WALKING_LEFT_HUNTER";
		case 20:
			return "SHUSH_WALKING_RIGHT_HUNTER";
		case 21:
			return "SHUSH_KNEEL_FWD_LT_HUNTER";
		case 22:
			return "SHUSH_KNEEL_LT_HUNTER";
		case 23:
			return "SHUSH_KNEEL_RT_HUNTER";
		case 24:
			return "KNEEL_BRKOUT_B_HUNTER";
		case 25:
			return "KNEEL_BRKOUT_L_HUNTER";
		case 26:
			return "KNEEL_BRKOUT_R_HUNTER";
		case 27:
			return "KNEEL_BRKOUT_F_HUNTER";
		default:
			break;
	}
	return "";
}

void func_277(var uParam0, int iParam1, int iParam2)
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

void func_278(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_277(uParam0, iParam1, iParam3);
	func_411(uParam0, iParam2, iParam3);
}

void func_279(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 65536);
	}
	else
	{
		func_227(uParam0, 65536);
	}
}

void func_280(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_412(&(Local_57[iVar0 /*23*/].f_9), 7, iParam0);
	}
	else
	{
		func_413(&(Local_57[iVar0 /*23*/].f_9), 7, iParam0);
	}
}

void func_281(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_412(&(Local_57[iVar0 /*23*/].f_9), 6, iParam0);
	}
	else
	{
		func_413(&(Local_57[iVar0 /*23*/].f_9), 6, iParam0);
	}
}

void func_282()
{
	vector3 vVar0;

	vVar0 = { func_414(func_114(0), func_114(1)) };
	Local_794.f_19.f_34 = VOLUME::_CREATE_VOLUME_SPHERE(vVar0, 0f, 0f, 0f, 55f, 55f, 20f);
	Local_794.f_19.f_35 = VOLUME::_CREATE_VOLUME_SPHERE(vVar0, 0f, 0f, 0f, 75f, 75f, 20f);
	POPULATION::_0xB56D41A694E42E86(Local_794.f_19.f_34, 224, 0, 0, -1, -1, 10);
	POPULATION::_0x18262CAFEBB5FBE1(Local_794.f_19.f_34, 224, 0, 0, -1, -1, 10);
	func_415(Local_794.f_19.f_35, 0, 262144, 0);
	func_416(Local_794.f_19.f_35);
}

void func_283(int iParam0, int iParam1)
{
	Local_794.f_269.f_9[iParam0] = iParam1;
}

void func_284(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_794.f_269.f_1[iParam0]), iParam1);
}

int func_285(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_286()
{
	func_190();
	Local_794.f_19.f_36 = VOLUME::_CREATE_VOLUME_CYLINDER(func_417(), 0f, 0f, 0f, 3f, 3f, 3f);
	POPULATION::_0xB56D41A694E42E86(Local_794.f_19.f_36, 2490399, 0, 0, -1, -1, 10);
	PED::_0x7C00CFC48A782DC0(Local_794.f_19.f_36, func_184(1), 0f, 2f, 0f, 0f, 0f, 0f, 2, 1);
}

void func_287()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_419(func_418(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_0xBB1E41DD3D3C6250(Var1, "MpRandomEvent", 1);
					func_420(&(Local_794.f_115), Var1);
					func_421(func_418(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_288()
{
	return (func_134(32) || func_133(32, 255));
}

bool func_289(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_422(iParam0, joaat("COOLDOWN")) };
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

void func_290()
{
	func_423();
	func_424();
}

void func_291()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_425(iVar0, bVar1, iVar2);
		func_426(iVar0, bVar1, iVar2);
		func_427(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_292()
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
	if (!func_222(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_794.f_60.f_54)
	{
		bVar8 = true;
		Local_794.f_60.f_54 = !Local_794.f_60.f_54;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_794.f_60.f_41 >= 3)
		{
			Local_794.f_60.f_41 = 0;
		}
		iVar0 = Local_794.f_60.f_41;
		Local_794.f_60.f_41++;
		iVar9 = func_428(iVar0);
		iVar1 = Local_794.f_60.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_175(iVar9, 4))
		{
			func_407(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_57[iVar3 /*23*/].f_3.f_2[iVar0] > -1f)
			{
				Local_57[iVar3 /*23*/].f_3.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_794.f_60.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_794.f_60.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_794.f_60.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_794.f_60.f_42), iVar0);
			}
		}
		else
		{
			bVar7 = func_429(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_794.f_60.f_42, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_794.f_60.f_42), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_794.f_60.f_42), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_57[iVar3 /*23*/].f_3.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_57[iVar3 /*23*/].f_3.f_1), iVar0);
				}
				func_430(&(Local_794.f_60.f_43[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_57[iVar3 /*23*/].f_3.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_431(&(Local_794.f_60.f_43[iVar0 /*3*/])) || func_432(&(Local_794.f_60.f_43[iVar0 /*3*/]), 0.5f))))
			{
				func_433(&(Local_794.f_60.f_43[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_57[iVar3 /*23*/].f_3.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_175(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_794.f_60.f_54, false, 256);
		}
		if (func_175(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_434(iVar9))
						{
							if (!func_373(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_435(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::_0xB07D3185E11657A5(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_175(iVar9, 8))
			{
				if (!func_434(iVar9))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_794.f_60.f_42 != 0)
	{
		if (!func_436(1, 255))
		{
			func_437(1);
		}
	}
	else if (func_436(1, 255))
	{
		func_438(1);
	}
}

void func_293()
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
	if (!func_222(&iVar25))
	{
		return;
	}
	func_439();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::_0x705BE297EEBDB95D(iVar26))
	{
		Local_794.f_115.f_64 = 0;
		Local_57[iVar25 /*23*/].f_9.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == joaat("WEAPON_MOONSHINEJUG") || iVar26 == joaat("WEAPON_MOONSHINEJUG_MP")));
	bVar30 = false;
	while (iVar22 < 2)
	{
		if (Local_794.f_115.f_125 >= 3)
		{
			Local_794.f_115.f_125 = 0;
		}
		iVar1 = Local_794.f_115.f_125;
		Local_794.f_115.f_125++;
		iVar22++;
		iVar18 = func_418(iVar1);
		if (!func_440(iVar18))
		{
		}
		else if (func_441(iVar18, &Var5))
		{
			if (func_442(&Var5, iVar18))
			{
				if (func_443(&(Local_57[iVar25 /*23*/].f_9), 8, iVar1))
				{
					func_412(&(Local_57[iVar25 /*23*/].f_9), 8, iVar1);
				}
			}
			else if (!func_443(&(Local_57[iVar25 /*23*/].f_9), 8, iVar1))
			{
				func_413(&(Local_57[iVar25 /*23*/].f_9), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_444(iVar18);
				if (func_445(iVar18))
				{
					if (func_446(iVar18))
					{
						if (!func_447(iVar18))
						{
							func_448(iVar18);
						}
					}
					if (func_449(iVar18))
					{
						func_450(iVar18);
					}
				}
				else
				{
					if (func_451(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_452(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_420(&(Local_794.f_115), Var5);
						}
					}
					if (!func_453(iVar18, 255))
					{
						bVar2 = false;
						bVar3 = false;
						if (func_454(iVar18))
						{
							bVar2 = true;
							bVar3 = true;
						}
						else if (func_455(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_456(Var5, Var5.f_1, &(Local_794.f_115), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_794.f_115.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_794.f_115.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_457(PLAYER::PLAYER_PED_ID(), Var5, 1060437492 /* Float: 0.707f */) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_458(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_794.f_115.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_459(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_0xBB1E41DD3D3C6250(Var5, "MpRandomEvent", 1);
										func_421(iVar18);
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
														if (func_460(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_794.f_115.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_794.f_115.f_2 & 4 != 0)
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
									if (func_461(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_794.f_115.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_462(iVar18, iVar4, bVar3))
							{
							}
							else
							{
								if (func_443(&(Local_57[iVar25 /*23*/].f_9), 8, iVar1))
								{
									func_412(&(Local_57[iVar25 /*23*/].f_9), 8, iVar1);
								}
								func_463(iVar18, 1);
								if (func_464(iVar18))
								{
									if (!func_465(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_466(iVar18))
											{
											}
											else
											{
												func_467(iVar18);
												func_468(iVar18);
												Jump @1377; //curOff = 1187
												if (func_469(iVar18))
												{
												}
												else if (iVar23 < 4)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 4)
														{
															if (Local_794.f_115.f_127[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_794.f_115.f_127[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_794.f_115.f_127[iVar18];
																Local_794.f_115.f_127[iVar18]++;
															}
															iVar24++;
															if (func_470(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_471(iVar18, iVar20))
																{
																	if (func_453(iVar18, iVar0))
																	{
																		if (!func_472(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_473(iVar18, iVar20);
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

void func_294()
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

	fVar0 = func_474();
	if (Local_794.f_246.f_4)
	{
		return;
	}
	if (!func_222(&iVar1))
	{
		return;
	}
	if (func_181(Local_57[iVar1 /*23*/].f_22, 1))
	{
		Local_794.f_246.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_475(iVar2, 0))
	{
		return;
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_794.f_15);
	fVar4 = Local_794.f_246.f_9;
	fVar5 = Local_794.f_246.f_10;
	if (func_181(Local_794.f_246.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_794.f_246.f_7));
		if (fVar7 > 0f)
		{
			if (func_476(Local_794.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_794.f_246.f_6 < 1f)
			{
				Local_794.f_246.f_6 = (Local_794.f_246.f_6 + fVar8);
				if (Local_794.f_246.f_6 > 1f)
				{
					Local_794.f_246.f_6 = 1f;
				}
			}
		}
		else if (Local_794.f_246.f_6 > 0f)
		{
			Local_794.f_246.f_6 = (Local_794.f_246.f_6 - fVar8);
			if (Local_794.f_246.f_6 < 0f)
			{
				Local_794.f_246.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_794.f_246.f_5) * Local_794.f_246.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_226(&(Local_57[iVar1 /*23*/].f_22), 1);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_794.f_246.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_794.f_246.f_11, false, 0))
	{
		func_226(&(Local_57[iVar1 /*23*/].f_22), 1);
	}
	else if (Local_794.f_246 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 1)
		{
			func_477(&(Local_794.f_246.f_13[iVar10 /*9*/]), fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_478(&(Local_794.f_246.f_13), Local_794.f_246, Local_794.f_246.f_8))
		{
			func_226(&(Local_57[iVar1 /*23*/].f_22), 1);
		}
	}
	if (func_181(Local_57[iVar1 /*23*/].f_22, 1))
	{
		Local_794.f_246.f_4 = 1;
	}
}

bool func_295()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_794.f_14))
	{
		return false;
	}
	if (func_479())
	{
		return false;
	}
	if (func_480(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_296(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	func_226(&(Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*23*/].f_1.f_1), iParam0);
}

void func_297(int iParam0)
{
	func_227(&(Local_57[NETWORK::PARTICIPANT_ID_TO_INT() /*23*/].f_1.f_1), iParam0);
}

int func_298(var uParam0, vector3 vParam1, float fParam4)
{
	if (BUILTIN::VDIST(Global_35, vParam1) < fParam4)
	{
		if (!*uParam0 & 4 != 0)
		{
			func_356(uParam0, 1);
			return 1;
		}
	}
	else if (*uParam0 & 4 != 0)
	{
		func_356(uParam0, 0);
		return 1;
	}
	return 0;
}

bool func_299(int iParam0)
{
	return !func_443(&(Local_794.f_115.f_78), 8, iParam0);
}

void func_300()
{
	int iVar0;

	Local_794.f_19.f_37 = -1;
	Local_794.f_19.f_38 = 0;
	Local_794.f_19.f_39 = -1;
	Local_794.f_19.f_40 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_794.f_19.f_37 = (Local_794.f_19.f_37 && Local_57[iVar0 /*23*/].f_1);
			Local_794.f_19.f_38 = (Local_794.f_19.f_38 || Local_57[iVar0 /*23*/].f_1);
			Local_794.f_19.f_39 = (Local_794.f_19.f_39 && Local_57[iVar0 /*23*/].f_1.f_1);
			Local_794.f_19.f_40 = (Local_794.f_19.f_40 || Local_57[iVar0 /*23*/].f_1.f_1);
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		iVar0++;
	}
}

void func_301(int iParam0)
{
	if (Local_794.f_19 != iParam0)
	{
		Local_794.f_19 = iParam0;
	}
}

void func_302(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if ((!func_186(512) && !func_186(4194304)) && !func_186(524288))
	{
		if ((!func_186(64) && func_481(iVar0, iVar1, 1, 1) < (func_482() + 8f)) && Local_13.f_7.f_1 == 3)
		{
			func_379(64);
		}
		if ((func_186(64) && !func_395()) || bParam0)
		{
			if (!func_186(16))
			{
				if (func_481(iVar0, iVar1, 1, 1) < func_482() || bParam0)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
					{
						if (PED::_IS_PED_USING_SCENARIO_POINT(iVar1, Local_794.f_19.f_30) || !func_483(iVar1, 1435919172))
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar1, true);
							if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_794.f_19.f_31))
							{
								Local_794.f_19.f_31 = func_266(func_272(), 0);
							}
							TASK::CLEAR_PED_TASKS(iVar1, true, false);
							TASK::_TASK_USE_SCENARIO_POINT(iVar1, Local_794.f_19.f_31, 0, 0, true, false, 0, false, -1f, false);
							TASK::_0x2E1D6D87346BB7D2(iVar1, iVar0, 0, 0);
						}
						else
						{
							func_379(16);
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
	bool bVar2;
	bool bVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PED::_GET_LAST_MOUNT(iVar0);
	bVar2 = func_484(1);
	bVar3 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_485(iVar0, func_417(), 20f, 1, 1))
		{
			bVar3 = true;
		}
	}
	if (!bVar3 && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_485(iVar1, func_417(), 20f, 1, 1))
		{
			bVar3 = true;
		}
	}
	if (bVar2 != bVar3)
	{
		if (bVar3)
		{
			if (func_486())
			{
				func_487(1);
			}
		}
		else
		{
			func_488();
			func_489(1);
		}
	}
}

void func_304()
{
	int iVar0;

	iVar0 = AUDIO::_0x4A98E228A936DBCC(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
	if ((((((((((((((iVar0 == -220837440 || iVar0 == -1319858708) || iVar0 == joaat("HOWL_SHORT")) || iVar0 == joaat("HOWL_LONG")) || iVar0 == 1292715290) || iVar0 == 68969381) || iVar0 == 261384898) || iVar0 == 618996671) || iVar0 == -1499531531) || iVar0 == 497381157) || iVar0 == joaat("YEEHAW")) || iVar0 == -1382321285) || iVar0 == 175388181) || iVar0 == 1635224593) || iVar0 == -883958510)
	{
		func_379(2);
	}
	else
	{
		func_490(2);
	}
}

float func_305(int iParam0, int iParam1, bool bParam2)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_57[iParam1 /*23*/].f_3.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_57[iParam1 /*23*/].f_3.f_2[iParam0];
}

void func_306()
{
	int iVar0;

	if (!func_133(32, 255))
	{
		func_491(Local_794.f_1, Local_794.f_3);
		if (!func_133(1024, 255))
		{
			func_492(Local_794.f_1);
			func_150(1024);
		}
		iVar0 = func_325(Local_794.f_1, Local_794.f_2);
		func_493(iVar0);
		func_494(iVar0);
		func_148(2);
		func_495(Local_794.f_9);
		func_496(Local_794.f_1);
		func_497(Local_794.f_1, Local_794.f_2, Local_794.f_3);
		func_150(32);
	}
}

void func_307()
{
	if (!func_65(2))
	{
		return;
	}
	func_148(8);
}

bool func_308(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_309(bool bParam0)
{
	if (!func_65(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_65(256))
		{
			func_180(Local_794.f_18, 0);
			func_148(256);
		}
	}
	func_148(16);
}

void func_310()
{
	int iVar0;

	if (!func_389(1))
	{
		if (func_498())
		{
			func_296(1, 1);
			func_499(0, 291934926, 0);
		}
		iVar0 = func_184(1);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && !func_483(iVar0, 1435919172))
		{
			TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(3), 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
		}
	}
}

void func_311()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<15> Var3;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_500(iVar2) && func_305(1, 255, 1) < 20f)
	{
		func_379(8388608);
	}
	else
	{
		func_490(8388608);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 12, true);
		PED::SET_PED_RESET_FLAG(iVar0, 172, true);
	}
	if (Local_13.f_7.f_1 != Local_794.f_19.f_9)
	{
		return;
	}
	if ((!func_186(4) && Local_13.f_7.f_1 != 1) && Local_13.f_7.f_1 != 2)
	{
		if (Local_13.f_7.f_10 && func_186(16))
		{
			func_379(4);
		}
	}
	Var3.f_10 = 255;
	switch (Local_13.f_7.f_1)
	{
		case 0:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_385(3, 0);
			}
			break;
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_501(iVar0, "REHU_WALK_LOOP_EXIT"))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
				}
				if ((!func_502(iVar0, 2) && func_502(iVar0, Local_13.f_7.f_21)) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21)) > 0.5f)
				{
					if (func_501(iVar0, "REHU_WALK_LOOP"))
					{
						TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
					}
					if (func_501(iVar0, "REHU_BEGIN_WALK"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iVar0, func_272(), 0.25f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
							Var3 = { func_332(-524700565) };
							func_333(&Var3);
							func_379(32);
							func_385(3, 1);
						}
					}
				}
			}
			break;
		case 3:
			func_503();
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_501(iVar0, "REHU_WALK_LOOP"))
				{
					TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
				}
				if ((!func_186(32) && func_501(iVar0, "REHU_BEGIN_WALK")) || !func_483(iVar0, 1435919172))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iVar0, func_272(), 0.25f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
							Var3 = { func_332(-524700565) };
							func_333(&Var3);
							func_379(32);
						}
					}
				}
				if (!func_186(64) && func_383(Local_13.f_7.f_14, 15000))
				{
					func_385(4, 0);
				}
				if (((func_186(4) && !func_186(1048576)) && !func_186(-2147483648)) && !func_186(131072))
				{
					TASK::TASK_CLEAR_LOOK_AT(iVar0);
					func_385(7, 0);
				}
			}
			break;
		case 4:
			func_503();
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_502(iVar0, 1))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
					func_385(3, 1);
				}
			}
			break;
		case 5:
			func_503();
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(17), 1) && !func_186(33554432))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iVar0, func_272(), 0.25f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
					Var3 = { func_332(-524700565) };
					Var3.f_11 = 8000;
					func_333(&Var3);
					func_379(32);
					TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
					TASK::TASK_CLEAR_LOOK_AT(iVar0);
					func_385(3, 1);
				}
			}
			break;
		case 6:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21)) > 0.85f)
				{
					if (!func_395())
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(iVar0, func_272(), 0.25f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
						TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
						Var3 = { func_332(-524700565) };
						func_333(&Var3);
						func_379(32);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
					}
					TASK::TASK_CLEAR_LOOK_AT(iVar0);
					func_385(3, 1);
				}
			}
			break;
		case 7:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_501(iVar0, "REHU_WALK_LOOP_EXIT"))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
				}
				if (func_501(iVar0, "REHU_WALK_LOOP"))
				{
					TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
				}
				if (func_501(iVar0, "REHU_BEGIN_WALK") || !func_483(iVar0, 1435919172))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iVar0, func_272(), 0.25f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
							Var3 = { func_332(-524700565) };
							func_333(&Var3);
							func_379(32);
						}
					}
					func_385(8, 0);
				}
			}
			break;
		case 8:
			if ((!func_504(128) && Local_13.f_7.f_10) && !func_502(iVar0, 16))
			{
				if (func_505(iVar0, iVar2, 0.9f) && func_506(iVar0, iVar2, 5f, 1, 1))
				{
					func_392(0, 0, 0, 255);
					func_379(128);
				}
				else
				{
					if (!func_507(128, 255))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && func_187() != 0)
						{
							func_508(iVar1, 1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							PED::_0x8ACC0506743A8A5C(iVar0, joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
							TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
							if (func_187() != 0)
							{
								PED::SET_PED_ACCURACY(iVar0, 100);
								PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 27, true);
								PED::_0xC5B78E41DCF8227C(iVar0, 1);
							}
							else
							{
								PED::_0xC5B78E41DCF8227C(iVar0, 1);
								PED::SET_PED_ACCURACY(iVar0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(iVar0, 0);
								TASK::_0x2E1D6D87346BB7D2(iVar0, iVar1, 0, 0);
							}
							PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 133, true);
						}
						TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
						TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), 171278965);
						TASK::TASK_AIM_AT_ENTITY(0, iVar1, 1000, 0, 1);
						TASK::TASK_SHOOT_AT_ENTITY(0, iVar1, 2750, joaat("FIRING_PATTERN_SINGLE_SHOT"), 1);
						TASK::TASK_AIM_AT_ENTITY(0, iVar1, 2000, 1, 1);
						if (func_187() != 0)
						{
							TASK::TASK_AIM_AT_ENTITY(0, iVar1, -1, 1, 1);
						}
						else
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_794.f_15, iVar1, 1.5f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 1, joaat("FIRING_PATTERN_FULL_AUTO"), -1, 0);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
						}
						else
						{
							TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
						}
					}
					func_379(128);
				}
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_510(0.1f) || PED::IS_PED_DEAD_OR_DYING(iVar1, true))
				{
					if (func_187() != 0)
					{
						if (PED::IS_PED_DEAD_OR_DYING(iVar1, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iVar1))
						{
							if (func_383(Local_13.f_7.f_15, 800))
							{
								TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(7), 2f, -2f, -1, 3072, 0f, false, 0, false, 0, false);
								func_296(16, 1);
							}
						}
						else
						{
							func_392(1, 0, 0, 255);
						}
					}
					else
					{
						func_392(1, 0, 0, 255);
					}
				}
			}
			break;
		case 9:
			break;
	}
}

void func_312()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if (!func_511(128, 255))
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
		TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), -1557004870);
		if (func_395())
		{
			TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
		}
		TASK::TASK_AIM_GUN_AT_ENTITY(0, iVar1, 3000, false, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			func_512(0, 869278708, joaat("UNSPECIFIED"));
			TASK::TASK_MOUNT_ANIMAL(0, iVar2, -1, -1, 3f, 1, 0, 0);
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			PED::SET_PED_COMBAT_MOVEMENT(iVar0, 2);
			PED::SET_PED_ACCURACY(iVar0, 85);
			PED::SET_PED_SHOOT_RATE(iVar0, 75);
		}
		else
		{
			TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (PED::_IS_MOUNT_SEAT_FREE(iVar2, -1))
			{
				TASK::TASK_GO_TO_WHISTLE(iVar2, iVar0, 0);
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
		}
		func_296(128, 1);
	}
}

void func_313()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_511(128, 255))
	{
		return;
	}
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	func_189(1);
	if (!func_431(&(Local_794.f_19.f_20)))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
		{
			func_430(&(Local_794.f_19.f_20));
		}
	}
	else if ((Local_13.f_7.f_10 || func_481(iVar0, iVar1, 1, 1) < func_482()) || func_186(16))
	{
		if (func_513(&(Local_794.f_19.f_20), 0.5f))
		{
			func_499(27, 1744022339, 0);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
			TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), -2049936868);
			if (func_395())
			{
				TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			TASK::TASK_AIM_GUN_AT_ENTITY(0, iVar1, 3000, false, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				func_512(0, 869278708, joaat("UNSPECIFIED"));
				TASK::TASK_MOUNT_ANIMAL(0, iVar2, -1, -1, 3f, 1, 0, 0);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
				PED::SET_PED_COMBAT_MOVEMENT(iVar0, 2);
				PED::SET_PED_ACCURACY(iVar0, 85);
				PED::SET_PED_SHOOT_RATE(iVar0, 75);
			}
			else
			{
				TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(iVar2, -1))
				{
					TASK::TASK_GO_TO_WHISTLE(iVar2, iVar0, 0);
				}
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
			}
			func_296(128, 1);
		}
	}
	else if (func_513(&(Local_794.f_19.f_20), 0.5f))
	{
		func_388(func_375(1, 0, 1, 0), 0, 27);
		func_377(4);
	}
}

void func_314()
{
	int iVar0;
	int iVar1;

	if (func_511(256, 255))
	{
		return;
	}
	iVar0 = func_184(1);
	iVar1 = func_184(2);
	func_189(1);
	if (func_431(&(Local_794.f_19.f_17)))
	{
		if (func_432(&(Local_794.f_19.f_17), 1.5f))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				PED::SET_PED_USING_ACTION_MODE(iVar0, false, -1, 0);
				PED::_0x58F7DB5BD8FA2288(iVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
			TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), -2049936868);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_481(iVar0, iVar1, 1, 1) > 8f)
				{
					func_512(0, 869278708, joaat("UNSPECIFIED"));
				}
				TASK::TASK_MOUNT_ANIMAL(0, iVar1, -1, -1, 1f, 1, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 0, 0);
			}
			else
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (func_481(iVar0, iVar1, 1, 1) > 8f && PED::_IS_MOUNT_SEAT_FREE(iVar1, -1))
				{
					TASK::TASK_GO_TO_WHISTLE(iVar1, iVar0, 0);
				}
			}
			func_379(4194304);
			func_296(256, 1);
		}
	}
	else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
	{
		func_514(&(Local_794.f_19.f_17), 0);
	}
}

void func_315()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_511(16, 255) || func_511(256, 255))
	{
		return;
	}
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	func_189(1);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if ((TASK::GET_SCRIPT_TASK_STATUS(iVar0, 242628503, true) == 1 && TASK::GET_SEQUENCE_PROGRESS(iVar0) > 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
		{
			func_499(30, -417894478, 0);
		}
		if (!func_186(134217728))
		{
			if (PED::IS_PED_ON_MOUNT(iVar0) || (ENTITY::IS_ENTITY_DEAD(iVar2) && !func_483(iVar0, 242628503)))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iVar1, -1, 0.5f, 2f, 2f, 0);
				func_379(134217728);
			}
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				TASK::TASK_REACT(iVar0, 0, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), "Default_Curious", 2f, 5f, 4);
			}
		}
		else
		{
			TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
			TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), 2005498298);
			TASK::TASK_STAND_STILL(0, 3000);
			TASK::TASK_GO_TO_ENTITY(0, iVar1, -1, 15f, 2.001f, 2f, 0);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
			}
		}
		func_379(8192);
		func_296(16, 1);
	}
	if (func_383(Local_13.f_7.f_20, 20000))
	{
		func_499(29, -417894478, 0);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
		TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), 286440846);
		TASK::TASK_STAND_STILL(0, 5000);
		TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.001f, 0, 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
		}
		else
		{
			TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
		}
		func_296(256, 1);
	}
}

void func_316()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_511(4096, 255))
	{
		return;
	}
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_515(iVar1, iVar2))
	{
		func_296(16384, 1);
	}
	else
	{
		func_297(16384);
	}
	func_189(1);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		if (func_481(iVar0, iVar1, 1, 1) < 5f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1.5f);
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (PED::IS_PED_RAGDOLL(iVar0))
		{
			func_516(iVar0, iVar1);
			func_296(256, 1);
		}
		if (!func_517(17) && (TASK::GET_SEQUENCE_PROGRESS(iVar0) > 1 || !func_483(iVar0, 242628503)))
		{
			func_499(17, 1744022339, 0);
			func_518(17);
		}
	}
	if (!Local_13.f_7.f_12)
	{
		if (func_186(1024))
		{
			if (func_383(Local_13.f_7.f_16, 3000) || !func_483(iVar0, 1435919172))
			{
				bVar3 = true;
				iVar4 = func_387(1, 73702, 25f, 1, 0);
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar4))
				{
					bVar3 = false;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
					TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), -2000912006);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, iVar1, 2000, false, 3);
					func_516(0, iVar1);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (bVar3)
						{
							func_499(18, 1744022339, 0);
						}
						func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
					}
					else
					{
						TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
					}
				}
				func_296(4096, 1);
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_186(2048))
			{
				if (func_383(Local_13.f_7.f_16, 4000) || !func_483(iVar0, 1435919172))
				{
					func_516(iVar0, iVar1);
					func_296(256, 1);
				}
			}
		}
	}
}

void func_317()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if (func_187() != 0)
	{
		if (!func_384(1024))
		{
			if (!func_511(1024, 255))
			{
				if (!PED::IS_PED_ON_MOUNT(iVar0))
				{
					if (((func_501(iVar0, "Transition") && func_502(iVar0, 7)) || (func_186(8192) && func_383(Local_13.f_7.f_17, 2000))) || func_389(1024))
					{
						func_520();
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar2))
							{
								TASK::TASK_GO_TO_WHISTLE(iVar2, iVar0, 0);
							}
						}
						func_296(1024, 1);
					}
				}
			}
		}
		else if (!func_384(2048))
		{
			func_521();
			if (!func_517(24) && func_522(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 1) < 3f)
			{
				func_499(24, -417894478, 0);
			}
			if (!func_511(2048, 255))
			{
				if ((!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || TASK::GET_SCRIPT_TASK_STATUS(iVar0, 242628503, true) != 1) && PED::_IS_PED_CARRYING(iVar0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						func_379(16384);
						func_499(25, -417894478, 0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
					TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), 660220433);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						if (!PED::_IS_MOUNT_SEAT_FREE(iVar2, -1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_523(Local_794.f_15, iVar0, 5f), 1.5f, -1, 0.25f, 1, 40000f);
						}
						TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0), iVar2, 1.5f);
						TASK::TASK_MOUNT_ANIMAL(0, iVar2, -1, -1, 1f, 1, 0, 0);
						TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 0, 0);
					}
					else
					{
						TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
					}
					else
					{
						TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
					}
					func_296(2048, 1);
				}
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				TASK::TASK_GO_TO_WHISTLE(iVar2, iVar0, 0);
				func_296(256, 1);
			}
		}
	}
	else if (func_383(Local_13.f_7.f_17, 2000))
	{
		func_388(PLAYER::PLAYER_ID(), 0, 28);
		func_296(32, 1);
	}
}

void func_318()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<15> Var9;
	int iVar24;
	int iVar25;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if (!func_186(524288))
	{
		func_189(1);
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_272(), func_114(1), true);
		if ((func_187() != 0 || ENTITY::IS_ENTITY_DEAD(iVar1)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_114(1), true) < (fVar3 / 3f))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
				}
			}
			if (!func_186(65536))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!func_186(268435456) || func_186(536870912))
					{
						if (func_501(iVar0, "bSafeToBreakout") || !func_186(268435456))
						{
							iVar4 = func_387(1, 74185, 35f, 1, 0);
							iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
							PED::SET_PED_ACCURACY(iVar0, 60);
							TASK::CLEAR_PED_TASKS(iVar0, true, false);
							PED::_0x78815FC52832B690(iVar0, 1);
							TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
							PED::_0x58F7DB5BD8FA2288(iVar0);
							if (func_186(-2147483648))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									func_516(iVar0, iVar5);
									func_296(256, 1);
								}
							}
							else
							{
								func_499(31, 1744022339, 0);
								func_525(iVar4);
								PED::SET_PED_ACCURACY(iVar0, 60);
								TASK::TASK_COMBAT_PED(iVar0, iVar5, 16384, 0);
								func_526(1, joaat("BLIP_STYLE_ENEMY"));
								func_379(65536);
							}
							func_379(524288);
							PED::SET_PED_KEEP_TASK(iVar0, true);
						}
					}
					else
					{
						iVar6 = func_387(1, 74185, 35f, 1, 0);
						TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_527(iVar6), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
						func_379(536870912);
					}
				}
			}
		}
		else if (!func_186(65536))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				iVar7 = func_387(1, 74185, 35f, 1, 0);
				iVar8 = PLAYER::GET_PLAYER_PED(iVar7);
				func_525(iVar7);
				func_499(31, 1744022339, 0);
				TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
				TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, iVar8, 4000, false, 3);
				func_379(65536);
				Var9 = { func_332(-456522470) };
				Var9.f_11 = 2000;
				func_333(&Var9);
				func_296(2, 1);
				func_379(512);
			}
		}
	}
	else if (func_186(65536))
	{
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (func_222(&iVar24))
			{
				if (func_453(1, iVar24))
				{
					func_526(1, joaat("BLIP_STYLE_ENEMY"));
				}
			}
			if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					iVar25 = func_387(1, 74185, 35f, 1, 0);
					if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar25))
					{
						TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar25), 0, 0);
					}
					else
					{
						func_528(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false));
						func_296(256, 1);
					}
				}
			}
		}
		else
		{
			func_296(256, 1);
		}
	}
}

void func_319()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if ((func_186(65536) && !func_186(2048)) && !PED::IS_PED_FLEEING(iVar0))
	{
		if (func_222(&iVar3))
		{
			if (func_453(1, iVar3))
			{
				func_526(1, joaat("BLIP_STYLE_ENEMY"));
			}
		}
	}
	else
	{
		func_189(1);
	}
	if (((!func_186(32768) && !func_186(2048)) && !PED::IS_PED_FLEEING(iVar0)) && !Local_13.f_7.f_13)
	{
		if (Local_13.f_7.f_19 != 0)
		{
			if (func_383(Local_13.f_7.f_19, 2500))
			{
				func_499(29, -417894478, 0);
			}
		}
	}
	if (func_186(2048) && !PED::IS_PED_FLEEING(iVar0))
	{
		func_516(iVar0, iVar1);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
	{
		if (func_186(512) && func_187() == 0)
		{
			if (!func_186(262144) && !func_475(iVar2, 0))
			{
				if (PED::IS_PED_IN_COMBAT(iVar1, iVar0) || func_481(iVar1, iVar2, 1, 1) < 15f)
				{
					if (func_481(iVar0, iVar2, 1, 1) < 5f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar1))
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(iVar2, iVar1, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						}
						else
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar2, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						}
						func_379(262144);
					}
				}
			}
		}
	}
	iVar4 = func_375(1, 125f, 1, 0);
	if (func_475(iVar0, 0) || !NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar4))
	{
		func_296(512, 1);
	}
}

void func_320()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_419(func_418(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_0xAD8F2424C6E1E3A8(Var1);
			}
		}
		iVar0++;
	}
}

int func_321(var uParam0, var uParam1)
{
	return uParam0;
}

int func_322(int iParam0)
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

int func_323(struct<2> Param0)
{
	return func_529(Param0);
}

void func_324(struct<2> Param0, var uParam2)
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
	switch (func_321(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_531(func_530(Param0));
			iVar5 = func_532(iVar4);
			if (!func_533(iVar5, 0))
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

int func_325(int iParam0, int iParam1)
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

void func_326(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_534(&Var0);
}

var func_327(int iParam0)
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

var func_328(int iParam0)
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

var func_329(int iParam0)
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

bool func_330(int iParam0, int iParam1)
{
	if (!func_535(iParam0, iParam1))
	{
		return false;
	}
	return func_536(iParam1, iParam0);
}

bool func_331(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			return false;
		}
	}
	return func_537(iParam0, PLAYER::GET_PLAYER_PED(iParam1), bParam2);
}

struct<15> func_332(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_794, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_333(var uParam0)
{
	func_539(uParam0, func_538(4, 117));
}

void func_334(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

int func_335(int iParam0)
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

int func_336(int iParam0)
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

void func_337(var uParam0)
{
	func_197(uParam0, 0);
	func_197(uParam0, 1);
	func_197(uParam0, 3);
	func_195(uParam0);
}

void func_338(var uParam0)
{
	func_196(uParam0);
	func_540(uParam0, 0, 3);
}

void func_339(var uParam0)
{
	func_197(uParam0, 0);
	func_198(uParam0, 0);
	func_198(uParam0, 1);
	func_198(uParam0, 2);
}

void func_340(var uParam0)
{
	func_197(uParam0, 1);
	func_195(uParam0);
}

void func_341(var uParam0)
{
	func_197(uParam0, 2);
	func_198(uParam0, 3);
}

void func_342(var uParam0)
{
	func_197(uParam0, 3);
	func_198(uParam0, 4);
}

void func_343(var uParam0)
{
	func_198(uParam0, 0);
	func_198(uParam0, 1);
}

void func_344(var uParam0)
{
	func_198(uParam0, 2);
	func_198(uParam0, 3);
}

void func_345(var uParam0)
{
	func_198(uParam0, 4);
	func_198(uParam0, 5);
}

bool func_346(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_347(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_348(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_349(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

void func_350(var uParam0)
{
	func_542(uParam0, (func_541(uParam0) - 6f));
	func_543(uParam0, 1);
}

void func_351(var uParam0)
{
	func_544(uParam0, 0);
	func_362(uParam0, 0);
	func_363(uParam0, 0);
	func_545(uParam0, 0);
	func_546(uParam0, 1, 1, 1);
}

void func_352(var uParam0)
{
	func_547(uParam0, 1);
	func_548(uParam0, 1);
	func_366(uParam0, 1);
}

void func_353(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

void func_354(var uParam0, float fParam1)
{
	uParam0->f_26 = fParam1;
}

void func_355(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 131072);
	}
	else
	{
		func_226(&(uParam0->f_2), 131072);
	}
}

void func_356(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 4);
	}
	else
	{
		func_227(iParam0, 4);
	}
}

void func_357(var uParam0)
{
	func_544(uParam0, 0);
	func_362(uParam0, 0);
	func_363(uParam0, 1);
	func_364(uParam0, 1);
	func_545(uParam0, 0);
	func_361(uParam0, 1);
	func_546(uParam0, 1, 1, 1);
}

void func_358(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 1024);
	}
	else
	{
		func_227(iParam0, 1024);
	}
}

void func_359(var uParam0, int iParam1)
{
	uParam0->f_22 = iParam1;
}

void func_360(var uParam0, float fParam1)
{
	uParam0->f_21 = fParam1;
}

void func_361(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 256);
	}
	else
	{
		func_227(iParam0, 256);
	}
}

void func_362(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 2048);
	}
	else
	{
		func_226(&(uParam0->f_2), 2048);
	}
}

void func_363(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 256);
	}
	else
	{
		func_226(&(uParam0->f_2), 256);
	}
}

void func_364(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 16);
	}
	else
	{
		func_227(iParam0, 67108864);
		func_227(iParam0, 16);
	}
}

void func_365(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 1024);
	}
	else
	{
		func_226(&(uParam0->f_2), 1024);
	}
}

void func_366(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 8);
	}
	else
	{
		func_227(iParam0, 8);
	}
}

void func_367(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(&(uParam0->f_1), 1);
	}
	else
	{
		func_227(&(uParam0->f_1), 1);
	}
}

void func_368(var uParam0, float fParam1)
{
	uParam0->f_31 = fParam1;
}

bool func_369(int iParam0, bool bParam1)
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

bool func_370(int iParam0, var uParam1)
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

int func_371(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

int func_372(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

bool func_373(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_794.f_15 };
	iVar7 = 0;
	iVar8 = func_406(iParam0);
	iVar9 = func_549(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_31[iParam0]))
		{
			iVar9 = func_549(iParam0);
			fVar0 = func_550(iParam0);
			if (!func_181(Local_794.f_60.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_551(iParam0)) };
			}
			else
			{
				vVar1 = { func_551(iParam0) };
			}
			if (!func_552(&(Local_13.f_31[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_31[iParam0]);
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
						PED::_UPDATE_PED_VARIATION(iVar7, func_175(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_553(iVar7, 1);
					}
					if (func_554(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_555(iParam0))
						{
							if (func_554(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_374(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_31[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_31[iParam0]);
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
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_13.f_31[iParam0])))
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

bool func_374(int iParam0)
{
	return func_175(iParam0, 128);
}

int func_375(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_794.f_60.f_7[iParam0 /*11*/]))
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
		else if (Local_57[iVar0 /*23*/].f_3.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_556(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_57[iVar0 /*23*/].f_3.f_2[iParam0] > Local_57[iVar1 /*23*/].f_3.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_57[iVar0 /*23*/].f_3.f_2[iParam0] > fParam1)
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

void func_376(int iParam0, bool bParam1, bool bParam2)
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

void func_377(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

bool func_378(int iParam0, int iParam1)
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

void func_379(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_226(&(Local_57[iVar0 /*23*/].f_1), iParam0);
}

bool func_380(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (((TASK::GET_IS_TASK_ACTIVE(iParam0, 3) || func_483(iParam0, -2017877118)) || func_483(iParam0, 242628503)) || func_483(iParam0, -1162159953))
	{
		return true;
	}
	return false;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 19;
		case 1:
			return 20;
		case 2:
			return 21;
		case 3:
			return 22;
		case 4:
			return 23;
		default:
			break;
	}
	return 19;
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_184(1);
	if (!func_475(iVar0, 0) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, iParam1))
	{
		func_499(iParam0, -417894478, 0);
		return 1;
	}
	return 0;
}

bool func_383(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= iParam1;
	}
	return false;
}

bool func_384(int iParam0)
{
	return func_181(Local_794.f_19.f_39, iParam0);
}

void func_385(int iParam0, bool bParam1)
{
	struct<15> Var0;

	Var0 = { func_332(-1177380711) };
	Var0.f_11 = iParam0;
	if (bParam1)
	{
		Var0.f_12 = 1;
	}
	func_333(&Var0);
}

bool func_386(int iParam0, var uParam1)
{
	return func_507(8388608, iParam0);
}

int func_387(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_794.f_60.f_7[iParam0 /*11*/]))
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
		else if (Local_57[iVar0 /*23*/].f_3.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_556(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_57[iVar0 /*23*/].f_3.f_2[iParam0] > Local_57[iVar1 /*23*/].f_3.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_57[iVar0 /*23*/].f_3.f_2[iParam0] > fParam2)
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

void func_388(int iParam0, bool bParam1, int iParam2)
{
	struct<15> Var0;

	if (!func_517(iParam2))
	{
		Var0 = { func_332(-1175879321) };
		Var0.f_11 = iParam2;
		Var0.f_12 = func_557(bParam1);
		Var0.f_10 = iParam0;
		func_333(&Var0);
	}
}

bool func_389(int iParam0)
{
	return func_181(Local_794.f_19.f_40, iParam0);
}

bool func_390(var uParam0)
{
	if (!func_558(*uParam0, 0))
	{
		return false;
	}
	return PED::IS_PED_SHOOTING(*uParam0);
}

bool func_391(int iParam0, int iParam1)
{
	return ((func_559(iParam1, iParam0) || func_507(8388608, iParam0)) || func_507(2, iParam0));
}

void func_392(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<15> Var0;

	if (!func_186(131072))
	{
		Var0 = { func_332(joaat("ANIMALALERTED")) };
		Var0.f_11 = func_557(bParam0);
		Var0.f_12 = func_557(bParam1);
		Var0.f_13 = func_557(bParam2);
		if (iParam3 != 255)
		{
			Var0.f_10 = iParam3;
			Var0.f_14 = 1;
		}
		else if (!bParam0)
		{
			Var0.f_10 = func_387(0, 59669, 0, 1, 0);
		}
		func_333(&Var0);
		func_379(131072);
	}
}

int func_393(float fParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	int iVar13;
	float fVar14;

	iVar12 = Local_13.f_7.f_22;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar12))
	{
		iVar12 = func_375(1, 0, 1, 0);
	}
	iVar13 = PLAYER::GET_PLAYER_PED(iVar12);
	if (bParam2)
	{
		func_525(iVar12);
	}
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar13, true, false) };
	vVar0 = { ENTITY::GET_ENTITY_COORDS(func_184(1), false, false) };
	vVar3 = { func_272() - vVar0 };
	vVar6 = { vVar9 - vVar0 };
	fVar14 = func_560(vVar3, vVar6);
	if (!bParam1)
	{
		if (MISC::ABSF(fVar14) > fParam0)
		{
			if (fVar14 > 0f)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else if (func_561(vVar0, vVar0 + vVar3, ENTITY::GET_ENTITY_COORDS(iVar13, true, false)))
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	if (func_561(vVar0, vVar0 + vVar3, ENTITY::GET_ENTITY_COORDS(iVar13, true, false)) && fVar14 > -0.866f)
	{
		return 3;
	}
	return 1;
}

bool func_394(int iParam0, var uParam1)
{
	return (func_507(8388608, iParam0) || func_507(2, iParam0));
}

bool func_395()
{
	int iVar0;

	iVar0 = func_184(1);
	return ((((((ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(3), 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(4), 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(0), 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(21), 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(22), 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(23), 1)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(1), 1) && func_501(iVar0, "REHU_IN_KNEEL")));
}

bool func_396(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_505(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_506(iParam0, iParam1, fParam3, 1, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, false) == 1;
}

void func_397(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_398(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_399(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_794.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != Local_794)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_794.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_794.f_3)
	{
		return false;
	}
	return true;
}

void func_400(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	switch (iParam0->f_9)
	{
		case 377515857:
			iVar4 = iParam0->f_11;
			if (!func_517(iVar4))
			{
				if (!MAP::DOES_BLIP_EXIST(Local_794.f_19.f_2[1 /*2*/]) && func_305(1, 255, 1) < 125f)
				{
					func_562(1891783641, iVar0, 1);
					func_526(1, -89429847);
				}
				if (func_564(iVar0, func_563(iVar4), iParam0->f_12, iVar3, 1, 0, 0, 1))
				{
				}
				func_518(iVar4);
			}
			break;
		case -1175879321:
			iVar4 = iParam0->f_11;
			iVar3 = PLAYER::GET_PLAYER_PED(iParam0->f_10);
			if (!func_517(iVar4))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
				if (iParam0->f_12 == 1)
				{
					bVar6 = true;
				}
				TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
				TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), -223096933);
				if (bVar6 && !PED::IS_PED_ON_MOUNT(iVar3))
				{
					WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar7, true, 0, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar7, false, 1, false, false);
					func_565(0, iVar3, 0);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_CONFRONT(0, iVar3, 2);
				}
				else
				{
					TASK::TASK_REACT(0, iVar3, ENTITY::GET_ENTITY_COORDS(iVar3, true, false), "DEFAULT_ANGRY", 3f, 5f, 4);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 1f, 20000, 0.25f, 65, 40000f);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_794.f_15, 1f, 20000, 0.25f, 0, 40000f);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
				}
				else
				{
					TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
				}
				if (func_564(iVar0, func_563(iVar4), 1744022339, iVar3, 1, 0, 0, 1))
				{
				}
				func_518(iVar4);
			}
			break;
		case -524700565:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (iParam0->f_11 > 0)
				{
					Local_13.f_7.f_14 = NETWORK::GET_TIME_OFFSET(Local_13.f_7.f_14, iParam0->f_11);
				}
			}
			break;
		case -1177380711:
			if (Local_13.f_7 == 1)
			{
				if (iParam0->f_12 != 1)
				{
					func_566(iParam0->f_11);
				}
				else
				{
					func_490(16777216);
				}
				Local_794.f_19.f_9 = iParam0->f_11;
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Local_13.f_7.f_1 = iParam0->f_11;
				}
			}
			break;
		case 1948200198:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			func_379(256);
			break;
		case joaat("ANIMALALERTED"):
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_11 = 1;
			}
			func_379(4);
			func_379(8);
			if (iParam0->f_14 == 1)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						TASK::CLEAR_PED_TASKS(iVar2, true, false);
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
					if (func_483(iVar0, -1073489615))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(iParam0->f_10), -1, false, 3);
					}
					else
					{
						TASK::TASK_REACT(iVar0, PLAYER::GET_PLAYER_PED(iParam0->f_10), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0->f_10), true, false), "DEFAULT_SHOCKED", 3f, 5f, 4);
					}
				}
			}
			if (!func_475(func_184(0), 0))
			{
				if (iParam0->f_13 != 1)
				{
					if (iParam0->f_11 == 1)
					{
						func_567(func_184(1), 0);
					}
					else
					{
						bVar5 = (((PED::_IS_PED_LASSOED(iVar0) || PED::_IS_PED_BEING_HOGTIED(iVar0)) || PED::_IS_PED_HOGTIED(iVar0)) && PED::_0x285D36C5C72B0569(iVar2) > 5f);
						func_567(PLAYER::GET_PLAYER_PED(iParam0->f_10), bVar5);
					}
				}
				else
				{
					func_188(1);
				}
				if (func_288())
				{
					if (iParam0->f_12 != 1)
					{
						if (func_187() != 0)
						{
							if (iParam0->f_11 == 1)
							{
								func_296(4, 1);
							}
							else
							{
								func_296(8, 1);
							}
						}
						else
						{
							func_296(2, 1);
						}
					}
				}
				else
				{
					func_296(512, 1);
				}
			}
			break;
		case -456522470:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (iParam0->f_11 > 0)
				{
					Local_13.f_7.f_16 = NETWORK::GET_TIME_OFFSET(Local_13.f_7.f_16, iParam0->f_11);
				}
			}
			break;
		case -113210209:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_334(&iVar1, 1, 1, 1);
			}
			func_296(32, 1);
			func_379(67108864);
			break;
		case joaat("HORSEAGITATION"):
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar2, "AGITATED", false);
				func_568(iVar2, 1f, PED::_GET_RIDER_OF_MOUNT(iVar2, true));
			}
			break;
		case 978130566:
			func_569(5000, 0, 51, 0);
			break;
		case joaat("LOOKAT"):
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0->f_10))
			{
				func_569(5000, 0, 51, 0);
			}
			else
			{
				func_570(iParam0->f_10, 5000, 0, 51, 0);
			}
			break;
	}
}

bool func_401(int iParam0)
{
	return Local_794.f_269.f_1[iParam0] != 0;
}

bool func_402(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_794.f_269.f_1[iParam0], iParam1);
}

bool func_403(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_794.f_269.f_5[iParam0], iParam1);
}

void func_404(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_571())
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
		if (!Global_1139381.f_3876.f_2[func_572(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1139381.f_3876.f_2[func_572(iParam0, 1) /*4*/].f_2++;
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
	func_573(&Var0, uVar7);
}

void func_405(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_794.f_269.f_5[iParam0]), iParam1);
}

int func_406(int iParam0)
{
	return Local_794.f_60.f_7[iParam0 /*11*/].f_3;
}

void func_407(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_406(iParam0);
	bVar3 = func_369(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_794.f_60.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_31[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_31[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_794.f_60.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_57[iParam1 /*23*/].f_3.f_2[iParam0] = -1f;
				}
				else
				{
					Local_57[iParam1 /*23*/].f_3.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_374(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_31[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_31[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_31[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_574(iVar1, 1f, 0);
					sVar0 = func_575(iParam0);
					if (!MISC::_IS_STRING_SPACE(sVar0))
					{
						func_576(iVar1, sVar0, 1);
					}
				}
				if (func_554(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_555(iParam0))
					{
						if (func_554(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_794.f_60.f_5), iParam0);
				if (bParam2)
				{
					func_577(iParam0);
				}
			}
		}
	}
}

bool func_408(int iParam0, var uParam1)
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

bool func_409(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_410(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_578(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_578(iVar4) && iVar4 != iVar0)
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
	if (func_28() == -1 && !func_579(iVar0))
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
				if (func_579(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_34 && func_578(iVar0))
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
		func_580(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_581(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_582(iVar0))
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

void func_411(var uParam0, int iParam1, int iParam2)
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

int func_412(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_370(iParam1, &Var0))
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

int func_413(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_370(iParam1, &Var0))
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

Vector3 func_414(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

void func_415(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_227(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
}

void func_416(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 224, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 224, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(224, 16384, 0, -1, -1, iParam0);
}

Vector3 func_417()
{
	return Local_794.f_15;
}

int func_418(int iParam0)
{
	return iParam0;
}

bool func_419(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_184(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_305(iParam0, 255, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 10000f;
		}
		return true;
	}
	return false;
}

void func_420(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_421(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_413(&(Local_57[iVar0 /*23*/].f_9), 0, iParam0);
}

struct<2> func_422(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_583(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_584(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_423()
{
	Local_794.f_60.f_6 = 0;
	Local_794.f_60.f_2 = 0;
	Local_794.f_60.f_1 = -1;
}

void func_424()
{
	int iVar0;

	func_223(&(Local_794.f_115.f_78), 2, 0);
	func_223(&(Local_794.f_115.f_78), 1, 0);
	func_223(&(Local_794.f_115.f_78), 4, 0);
	func_223(&(Local_794.f_115.f_78), 5, 0);
	func_223(&(Local_794.f_115.f_78), 8, -1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_794.f_115.f_66[iVar0]));
		SCRIPTS::_0x20F4CB76689ACDBC(&(Local_794.f_115.f_74[iVar0]));
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_794.f_115.f_70[iVar0]));
		func_585(iVar0);
		iVar0++;
	}
}

void func_425(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_794.f_60.f_2 = (Local_794.f_60.f_2 || Local_57[iParam0 /*23*/].f_3);
		Local_794.f_60.f_1 = (Local_794.f_60.f_1 && Local_57[iParam0 /*23*/].f_3);
		Local_794.f_60.f_6 = (Local_794.f_60.f_6 || Local_57[iParam0 /*23*/].f_3.f_1);
	}
}

void func_426(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0 /*23*/].f_9), 2);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0 /*23*/].f_9), 1);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0 /*23*/].f_9), 4);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0 /*23*/].f_9), 5);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0 /*23*/].f_9), 6);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0 /*23*/].f_9), 7);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0 /*23*/].f_9), 0);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0 /*23*/].f_9), 3);
		func_587(&(Local_794.f_115.f_78), &(Local_57[iParam0 /*23*/].f_9), 8);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_57[iParam0 /*23*/].f_9.f_5[iVar0]), &(Local_794.f_115.f_66[iVar0]), &(Local_794.f_115.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_57[iParam0 /*23*/].f_9.f_5[iVar0]), &(Local_794.f_115.f_66[iVar0]), &(Local_794.f_115.f_70[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_57[iParam0 /*23*/].f_9.f_5[iVar0]), &(Local_794.f_115.f_66[iVar0]), &(Local_794.f_115.f_74[iVar0]));
			func_588(func_418(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_427(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_57[iParam2 /*23*/].f_22 = (Local_57[iParam2 /*23*/].f_22 || Local_57[iParam0 /*23*/].f_22);
	}
}

int func_428(int iParam0)
{
	return iParam0;
}

int func_429(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_57[iParam3 /*23*/].f_3.f_2[iParam2] = fVar0;
	if (fVar0 > Local_794.f_60.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_430(var uParam0)
{
	func_589(uParam0, 0f);
}

bool func_431(var uParam0)
{
	return func_590(*uParam0, 1);
}

bool func_432(var uParam0, float fParam1)
{
	if (!func_431(uParam0))
	{
		return false;
	}
	if (func_591(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_433(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_434(int iParam0)
{
	return true;
}

void func_435(int iParam0, int iParam1)
{
	func_227(&(Local_794.f_60.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_436(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_181(Local_57[iParam1 /*23*/].f_3, iParam0);
}

void func_437(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_226(&(Local_57[iVar0 /*23*/].f_3), iParam0);
}

void func_438(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_227(&(Local_57[iVar0 /*23*/].f_3), iParam0);
}

void func_439()
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
	if (!func_222(&iVar15))
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
	while (iVar0 < 3)
	{
		iVar14 = func_418(iVar0);
		if (!func_440(iVar14))
		{
		}
		else if (!func_441(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_794.f_115.f_65), iVar14);
			}
			if (func_455(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, 0, 0))
			{
				func_592(iVar14);
				func_593(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_440(int iParam0)
{
	return !func_443(&(Local_794.f_115.f_78), 5, iParam0);
}

bool func_441(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_794.f_115.f_122, iParam0))
	{
		return false;
	}
	*uParam1 = Local_794.f_115.f_82[iParam0 /*13*/];
	uParam1->f_1 = Local_794.f_115.f_82[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_794.f_115.f_82[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_442(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_594(iParam1))
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
	if (func_595(*uParam0, &(Local_794.f_115.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_443(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_370(iParam1, &Var0))
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

void func_444(int iParam0)
{
}

bool func_445(int iParam0)
{
	return func_443(&(Local_794.f_115.f_78), 4, iParam0);
}

bool func_446(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return false;
	}
	return func_443(&(Local_57[iVar0 /*23*/].f_9), 4, iParam0);
}

bool func_447(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_794.f_115.f_70[iParam0]));
}

void func_448(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_412(&(Local_57[iVar0 /*23*/].f_9), 4, iParam0);
}

bool func_449(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_57[iVar0 /*23*/].f_9.f_5[iParam0]));
}

void func_450(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Local_57[iVar0 /*23*/].f_9.f_5[iParam0]));
}

bool func_451(int iParam0)
{
	return func_443(&(Local_794.f_115.f_78), 6, iParam0);
}

bool func_452(int iParam0)
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

bool func_453(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_443(&(Local_57[iParam1 /*23*/].f_9), 1, iParam0);
}

bool func_454(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<15> Var4;
	struct<2> Var19;
	int iVar23;
	var uVar24[8];
	int iVar33;
	int iVar34;
	vector3 vVar35;
	float fVar38;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar3, iVar0) && !func_431(&(Local_794.f_19.f_23)))
	{
		Local_794.f_19.f_12++;
	}
	if (!func_431(&(Local_794.f_19.f_26)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (func_185(iVar3, iVar2, 0))
			{
				Var4 = { func_332(joaat("HORSEAGITATION")) };
				func_333(&Var4);
				func_514(&(Local_794.f_19.f_26), 0);
			}
		}
	}
	if (Local_794.f_19.f_12 > 75)
	{
		Local_794.f_19.f_29 = 2048;
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::_0x5203038FF8BAE577(iVar0, 15, 3000) || PED::_0x5203038FF8BAE577(iVar0, 38, 3000))
		{
			if (PED::IS_PED_RAGDOLL(iVar0))
			{
				Local_794.f_19.f_29 = 2048;
				return true;
			}
		}
	}
	if (func_432(&(Local_794.f_19.f_26), 3f))
	{
		Local_794.f_19.f_29 = 1024;
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		if (PED::_0x4642182A298187D0(iVar3, 5, &Var19, 4, 2) == 3)
		{
			if (Var19.f_1 == func_596(iVar2))
			{
				Local_794.f_19.f_29 = 1024;
				return true;
			}
		}
	}
	if (Local_13.f_7 == 1 || Local_13.f_7 == 7)
	{
		if (!func_186(16384) && func_187() != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iVar34 = func_597(Global_34, &uVar24, 8);
				if (iVar34 > 0)
				{
					iVar33 = 0;
					while (iVar33 < 8)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uVar24[iVar33]))
						{
							if (ENTITY::IS_ENTITY_A_PED(uVar24[iVar33]))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar24[iVar33]) == iVar1)
								{
									Local_794.f_19.f_29 = 1024;
									PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
									func_499(28, -417894478, 1);
									return true;
								}
							}
						}
						iVar33++;
					}
				}
				if (func_598(iVar3))
				{
					iVar23 = func_599(Global_34);
					if (ENTITY::DOES_ENTITY_EXIST(iVar23))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar23))
						{
							if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == iVar1)
							{
								Local_794.f_19.f_29 = 1024;
								PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
								func_499(28, -417894478, 1);
								return true;
							}
						}
					}
				}
			}
		}
	}
	vVar35 = { func_414(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_272()) };
	fVar38 = (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar35, func_272(), true) * 0.75f);
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE_CLOUD"), vVar35, fVar38) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE"), vVar35, fVar38))
	{
		Local_794.f_19.f_29 = 16;
		return true;
	}
	if (PED::_0x5407B7288D0478B7(iVar3, 256) > 0 && func_481(iVar3, iVar0, 1, 1) < 25f)
	{
		if (!func_475(iVar1, 0) && PED::IS_PED_IN_COMBAT(iVar1, iVar3))
		{
			return false;
		}
		Local_794.f_19.f_29 = 8192;
		return true;
	}
	return false;
}

bool func_455(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	if (!func_600(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_443(&(Local_57[iParam1 /*23*/].f_9), 3, iParam0);
}

bool func_456(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_6)
	{
		func_601(iParam2, 1, iVar0);
	}
	if (!Global_1940258.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_13 = fParam5;
		}
		else
		{
			iParam2->f_13 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_2 & 128 != 0)
		{
			if (func_602(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_21)
		{
			if (!iParam2->f_2 & 8 != 0)
			{
				if (func_604(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_605(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_606(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_20 && func_607(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_2 & 524288 == 0))
		{
			if (!iParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_608(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_2 & 4 != 0)
				{
					if (func_609(Global_34, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_2 & 256 != 0)
				{
					if (func_610(Global_34, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_2 & 16 != 0)
		{
			if ((iParam2->f_6 - Global_1940258.f_23) < 300)
			{
				if (func_611(Global_34, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_611(Global_34, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_33 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_612(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1940258.f_19 || iParam2->f_13 < 20f)
			{
				if (func_613(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!iParam2->f_2 & 2 != 0)
			{
				if (func_614(iParam2, 4000))
				{
					if ((func_615(iParam0, Global_1940258.f_35, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_616(iParam2, iParam0)) && func_617(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_2 & 2 != 0)
		{
			if (iParam2->f_13 < 4f)
			{
				if ((func_615(iParam0, Global_1940258.f_35, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_616(iParam2, iParam0)) && func_617(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258.f_34 == 0)
			{
				if (Global_1940258.f_35 != 0)
				{
					if (func_618(iParam0, Global_1940258.f_35))
					{
						func_619();
						*iParam3 = 2;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (iParam2->f_13 < 10f)
			{
				if (func_620(iParam2, iParam0) || (iParam2->f_10 > 0 && (func_621() - iParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_619();
						*iParam3 = 2;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_622())
				{
					if (func_618(iParam0, Global_1940258.f_36))
					{
						func_619();
						*iParam3 = 2;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_2 & 1024 != 0)
		{
			if (func_623(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (func_624(iParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_603(iParam0, iParam2, *iParam3);
			return true;
		}
		if (iParam2->f_13 < iParam2->f_29)
		{
			if (!iParam2->f_2 & 2048 != 0)
			{
				if (func_625(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_7 == 2)
				{
					if (func_626(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_627(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_13 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_628(iParam2, 4000))
				{
					if (func_629(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_13 < iParam2->f_21)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_630(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_5 = 0;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_631(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_457(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_632(iParam0, vVar0, iParam2);
}

bool func_458(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_633(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_634(&iVar4, iParam1->f_12);
	func_636(Local_794.f_60.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_635(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_637(&iVar4, &uVar0);
}

bool func_459(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return false;
	}
	return func_443(&(Local_57[iVar0 /*23*/].f_9), 0, iParam0);
}

bool func_460(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_794.f_115.f_64, iParam0))
	{
		return false;
	}
	if (func_181(Local_794.f_115.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_638(&(Local_794.f_115))))
	{
		return false;
	}
	return true;
}

bool func_461(int iParam0, int iParam1, int iParam2)
{
	if (!func_460(iParam0, iParam1))
	{
		return false;
	}
	if (Local_57[iParam2 /*23*/].f_9.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_57[iParam2 /*23*/].f_9.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_462(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		iParam1 = Local_794.f_19.f_29;
	}
	if (((Local_13.f_7.f_12 || (func_186(512) && func_187() == 0)) || (iParam1 == 8 && !PED::IS_PED_HUMAN(func_184(iParam0)))) || (iParam1 == 8192 && !PED::IS_PED_HUMAN(func_184(iParam0))))
	{
		return false;
	}
	iVar0 = func_184(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (((iParam1 == 4 || iParam1 == 256) || PED::IS_PED_SHOOTING(iVar1)) || (iParam1 == 2 && !PED::IS_PED_HUMAN(func_184(iParam0))))
	{
		if ((Local_13.f_7 == 1 || Local_13.f_7 == 3) || Local_13.f_7 == 5)
		{
			if (func_639(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 0.4f, 0.6f, 0.4f, 0.6f))
			{
				Global_1940258.f_19 = 0;
				if (!func_186(512))
				{
					func_499(32, 1744022339, 0);
					func_392(0, 0, 0, PLAYER::PLAYER_ID());
				}
				return false;
			}
		}
	}
	if (!func_186(1073741824 /* Float: 2f */) && !func_186(4194304))
	{
		if ((func_640(iParam1) || iParam1 == 65536) || Local_794.f_19.f_12 > 75)
		{
			func_379(1073741824 /* Float: 2f */);
			func_379(4194304);
			func_388(PLAYER::PLAYER_ID(), 1, 26);
			func_188(0);
			func_296(32, 1);
			Local_794.f_19.f_12 = 0;
			func_430(&(Local_794.f_19.f_23));
			return false;
		}
	}
	if (iParam1 == 8192)
	{
		iVar2 = func_641(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))) && !PED::IS_PED_IN_COMBAT(iVar1, 0))
		{
			return false;
		}
		func_379(-2147483648);
	}
	if (func_186(2048))
	{
		func_379(-2147483648);
	}
	if (func_395())
	{
		func_379(268435456);
	}
	if (Local_13.f_7 != 9)
	{
		if (((iParam1 != 8 && iParam1 != 1024) && iParam1 != 2048) && iParam1 != 65536)
		{
			func_392(0, 1, 0, 255);
		}
		else
		{
			func_392(0, 1, 1, 255);
		}
	}
	if (func_642(iParam1))
	{
		func_379(1048576);
	}
	else if (iParam1 == 1048576 || bParam2)
	{
		if (!bParam2)
		{
			if (!func_507(2097152, 255))
			{
				func_379(2097152);
			}
		}
	}
	func_296(64, 1);
	return true;
}

void func_463(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_413(&(Local_57[iVar0 /*23*/].f_9), 1, iParam0);
	if (bParam1)
	{
		Local_57[iVar0 /*23*/].f_9.f_9[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_464(int iParam0)
{
	return func_443(&(Local_794.f_115.f_78), 1, iParam0);
}

bool func_465(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_443(&(Local_57[iParam1 /*23*/].f_9), 2, iParam0);
}

bool func_466(int iParam0)
{
	return true;
}

void func_467(int iParam0)
{
}

void func_468(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_413(&(Local_57[iVar0 /*23*/].f_9), 2, iParam0);
}

bool func_469(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_794.f_115.f_74[iParam0]), &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

bool func_470(int iParam0, var uParam1, int iParam2, var uParam3)
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

bool func_471(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Local_794.f_115.f_66[iParam0]), iParam1);
}

bool func_472(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return true;
}

void func_473(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_222(&iVar0))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&(Local_57[iVar0 /*23*/].f_9.f_5[iParam0]), iParam1);
}

float func_474()
{
	int iVar0;
	float fVar1;

	if (Local_794.f_246.f_3 == 0)
	{
		Local_794.f_246.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_794.f_246.f_3)) * 0.001f);
	Local_794.f_246.f_3 = iVar0;
	return fVar1;
}

bool func_475(int iParam0, bool bParam1)
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

bool func_476(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_643(vVar0, vParam0) > func_643(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_477(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
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
			else if (func_644(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_645(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_646() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_478(var uParam0, int iParam1, float fParam2)
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
	func_176(uParam0);
	return true;
}

bool func_479()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_480(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_647(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

float func_481(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_482()
{
	switch (func_187())
	{
		case 0:
			return 48f;
		case 1:
			return 40f;
		default:
			break;
	}
	return 48f;
}

bool func_483(int iParam0, int iParam1)
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

bool func_484(int iParam0)
{
	return func_181(Local_794.f_19.f_1, iParam0);
}

bool func_485(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_648(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_486()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!func_649(&uVar2))
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

void func_487(int iParam0)
{
	func_226(&(Local_794.f_19.f_1), iParam0);
}

void func_488()
{
	int iVar0;
	int iVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (!func_650(iVar0))
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

void func_489(int iParam0)
{
	func_227(&(Local_794.f_19.f_1), iParam0);
}

void func_490(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_227(&(Local_57[iVar0 /*23*/].f_1), iParam0);
}

void func_491(int iParam0, int iParam1)
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
	Var31 = { func_422(iParam0, joaat("VARIATIONS_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_123(&Var0, 4) && func_651(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1268861[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*99*/].f_56[iParam0] = iVar33;
}

void func_492(int iParam0)
{
	func_652(iParam0);
}

void func_493(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_130(Global_1272030[iParam0 /*4*/]))
	{
		return;
	}
	func_653(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_131(&(Global_1272030[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_654(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_654(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1296859.f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_654(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_654(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1296859.f_21, true);
	}
}

void func_494(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_534(&Var0);
}

void func_495(struct<2> Param0)
{
	struct<32> Var0;

	if (func_323(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_323(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_323(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_655(Param0, &Var0))
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

void func_496(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_422(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_497(int iParam0, int iParam1, int iParam2)
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

bool func_498()
{
	return Local_794.f_246.f_4;
}

void func_499(int iParam0, int iParam1, bool bParam2)
{
	struct<15> Var0;

	if (!func_517(iParam0))
	{
		Var0.f_10 = 255;
		Var0 = { func_332(377515857) };
		Var0.f_11 = iParam0;
		Var0.f_12 = iParam1;
		func_333(&Var0);
		if (bParam2)
		{
			func_525(PLAYER::PLAYER_ID());
		}
	}
}

bool func_500(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

bool func_501(int iParam0, char* sParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_502(int iParam0, int iParam1)
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@HUNTER@RIFLE", func_276(iParam1), 1);
}

void func_503()
{
	int iVar0;
	int iVar1;

	iVar0 = func_184(1);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (PED::IS_PED_FACING_PED(iVar0, iVar1, 30f) && func_305(1, 255, 1) < func_656(PED::IS_PED_ON_MOUNT(iVar1), 8f, 5f))
	{
		if (!func_507(33554432, 255))
		{
			func_379(33554432);
		}
	}
	else
	{
		func_490(33554432);
	}
	if (Local_13.f_7.f_1 != 5)
	{
		if ((!func_657(1) && !func_395()) && !func_502(iVar0, 1))
		{
			if (func_186(33554432))
			{
				if (!func_431(&(Local_794.f_19.f_14)))
				{
					func_430(&(Local_794.f_19.f_14));
				}
			}
			else if (func_431(&(Local_794.f_19.f_14)))
			{
				func_433(&(Local_794.f_19.f_14));
			}
		}
		else if (func_431(&(Local_794.f_19.f_14)))
		{
			func_433(&(Local_794.f_19.f_14));
		}
		if (func_513(&(Local_794.f_19.f_14), func_656(Local_13.f_7.f_9 < 2, 3f, 1.5f)) || (func_431(&(Local_794.f_19.f_14)) && func_305(1, 255, 1) < 2.5f))
		{
			if (Local_13.f_7.f_9 < 2)
			{
				func_379(16777216);
				func_385(5, 0);
			}
			else
			{
				func_388(func_387(1, 59287, 0, 1, 0), 0, 26);
				func_188(0);
				func_296(32, 1);
			}
		}
	}
	else if (func_432(&(Local_794.f_19.f_14), 5f))
	{
		func_388(func_387(1, 59287, 0, 1, 0), 0, 26);
		func_188(0);
		func_296(32, 1);
	}
}

bool func_504(int iParam0)
{
	return func_181(Local_794.f_19.f_37, iParam0);
}

bool func_505(int iParam0, int iParam1, float fParam2)
{
	return func_658(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_506(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_648(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_507(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	if (!func_369(iParam1, 1))
	{
		return false;
	}
	if (func_181(Local_57[iParam1 /*23*/].f_1, iParam0))
	{
		return true;
	}
	return false;
}

void func_508(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

void func_509(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_510(float fParam0)
{
	int iVar0;
	float fVar1;
	struct<15> Var2;

	iVar0 = func_184(1);
	fVar1 = PED::_0x285D36C5C72B0569(iVar0);
	if ((fVar1 > 0f && fVar1 > fParam0) && fVar1 < 10f)
	{
		if (!func_186(256))
		{
			Var2 = { func_332(1948200198) };
			func_333(&Var2);
		}
		return true;
	}
	return false;
}

bool func_511(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_181(Local_57[iParam1 /*23*/].f_1.f_1, iParam0);
}

void func_512(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_WHISTLE_ANIM(iParam0, iParam1, iParam2);
}

bool func_513(var uParam0, float fParam1)
{
	if (func_432(uParam0, fParam1))
	{
		func_433(uParam0);
		return true;
	}
	return false;
}

void func_514(var uParam0, bool bParam1)
{
	if (bParam1 || !func_431(uParam0))
	{
		func_430(uParam0);
	}
}

bool func_515(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_516(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_184(2);
	if (!func_186(2048))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && PED::_IS_MOUNT_SEAT_FREE(iVar0, -1))
		{
			if (func_522(iVar0, Local_794.f_15, 1) > 10f)
			{
				func_512(iParam0, 869278708, joaat("UNSPECIFIED"));
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0, iParam1, 4, 0, -1082130432 /* Float: -1f */, -1, iVar0);
		}
		else
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 4, 0, -1082130432 /* Float: -1f */, -1, iVar0);
		}
		func_379(2048);
	}
}

bool func_517(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_13.f_7.f_7, iParam0) || MISC::IS_BIT_SET(Local_794.f_19.f_11, iParam0))
	{
		return true;
	}
	return false;
}

void func_518(int iParam0)
{
	MISC::SET_BIT(&(Local_794.f_19.f_11), iParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		MISC::SET_BIT(&(Local_13.f_7.f_7), iParam0);
	}
}

bool func_519(int iParam0, var uParam1)
{
	return func_511(16384, iParam0);
}

void func_520()
{
	int iVar0;
	int iVar1;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_PED_USING_ACTION_MODE(iVar0, false, -1, 0);
		PED::_0x58F7DB5BD8FA2288(iVar0);
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
	TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), -106360093);
	if (func_187() != 1)
	{
		TASK::TASK_LOOT_ENTITY(0, iVar1);
	}
	if (func_187() != 0)
	{
		if (func_187() == 1)
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iVar1);
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
	}
	else
	{
		TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
	}
}

void func_521()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		fVar2 = func_522(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 1);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.5f);
		if (fVar2 < 12f)
		{
			if (!func_186(4096))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
				TASK::TASK_LOOK_AT_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 10000, 0, 51, 0);
				func_379(4096);
			}
		}
		if (fVar2 < 12f)
		{
			if (!func_186(4096))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
				func_379(4096);
			}
		}
		else if (!func_186(8192))
		{
			fVar3 = (fVar2 / 20f);
			fVar4 = func_659(1f, 1.5f, fVar3);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar0, fVar4);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, fVar4);
		}
	}
}

float func_522(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

Vector3 func_523(vector3 vParam0, int iParam3, float fParam4)
{
	vector3 vVar0;

	vVar0 = { func_660(vParam0, iParam3, fParam4) };
	return vParam0 + vVar0;
}

int func_524(int iParam0, int iParam1)
{
	if (func_453(iParam1, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_525(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		Var0 = { func_332(joaat("LOOKAT")) };
		Var0.f_10 = iParam0;
	}
	else
	{
		Var0 = { func_332(978130566) };
	}
	func_333(&Var0);
}

void func_526(int iParam0, int iParam1)
{
	if (!func_556(255))
	{
		func_189(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_794.f_19.f_2[iParam0 /*2*/]))
	{
		Local_794.f_19.f_2[iParam0 /*2*/] = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, func_184(iParam0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_794.f_19.f_2[iParam0 /*2*/], "NB_STALKING_HUNTER_BLIP");
	}
}

char* func_527(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_184(1);
	iVar1 = func_457(iVar0, PLAYER::GET_PLAYER_PED(iParam0), 1060437492 /* Float: 0.707f */);
	switch (iVar1)
	{
		case 1:
			return func_276(24);
		case 3:
			return func_276(25);
		case 2:
			return func_276(26);
		case 0:
			return func_276(27);
		default:
			break;
	}
	return func_276(27);
}

void func_528(int iParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = func_184(2);
	if (!func_186(2048))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && PED::_IS_MOUNT_SEAT_FREE(iVar0, -1))
		{
			if (func_522(iVar0, Local_794.f_15, 1) > 10f)
			{
				func_512(iParam0, 869278708, joaat("UNSPECIFIED"));
			}
		}
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iParam0, vParam1, 4, 0, -1082130432 /* Float: -1f */, -1, iVar0);
		func_379(2048);
	}
}

int func_529(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_661(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_530(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_661(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_531(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_346(&Var1, iParam0))
	{
		iVar0 = ((func_662() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_532(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_533(int iParam0, int iParam1)
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

void func_534(var uParam0)
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
	func_663(uParam0, uParam0->f_1);
}

bool func_535(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_664(iParam0) - 1))
	{
		return false;
	}
	return true;
}

bool func_536(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_422(iParam1, joaat("CHARACTER_MEMORY")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	return MISC::IS_BIT_SET(iVar2, iParam0);
}

int func_537(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_665(iParam0))
	{
		return 0;
	}
	iVar0 = func_184(iParam0);
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

var func_538(int iParam0, int iParam1)
{
	return func_666(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_539(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

void func_540(var uParam0, int iParam1, int iParam2)
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

float func_541(int iParam0)
{
	return iParam0->f_26;
}

void func_542(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_543(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 1);
	}
	else
	{
		func_227(iParam0, 1);
	}
}

void func_544(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 16384);
	}
	else
	{
		func_226(&(uParam0->f_2), 16384);
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 128);
	}
	else
	{
		func_226(&(uParam0->f_2), 128);
	}
}

void func_546(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_226(iParam0, 268435456);
	}
	else
	{
		func_227(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_226(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_227(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_226(iParam0, 536870912);
	}
	else
	{
		func_227(iParam0, 536870912);
	}
}

void func_547(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 512);
	}
	else
	{
		func_227(iParam0, 512);
	}
}

void func_548(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 2);
	}
	else
	{
		func_227(iParam0, 2);
	}
}

int func_549(int iParam0)
{
	return Local_794.f_60.f_7[iParam0 /*11*/].f_4;
}

float func_550(int iParam0)
{
	return Local_794.f_60.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_551(int iParam0)
{
	return Local_794.f_60.f_7[iParam0 /*11*/].f_6;
}

bool func_552(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_667(iParam1))
	{
		return false;
	}
	iVar0 = func_668(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_553(int iParam0, bool bParam1)
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

bool func_554(int iParam0)
{
	return func_175(iParam0, 32);
}

bool func_555(int iParam0)
{
	return func_175(iParam0, 64);
}

bool func_556(int iParam0)
{
	return func_133(8, iParam0);
}

int func_557(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_558(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_228(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_228(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_228(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_559(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	if (!func_443(&(Local_57[iParam1 /*23*/].f_9), 8, iParam0))
	{
		return !func_443(&(Local_57[iParam1 /*23*/].f_9), 1, iParam0);
	}
	return false;
}

float func_560(vector3 vParam0, vector3 vParam3)
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

bool func_561(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_562(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

char* func_563(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_669("RE_HU_HTL_V1_INTRO", "RE_HU_GRI_V1_INTRO");
		case 1:
			return func_669("RE_HU_HTL_V1_GREET", "RE_HU_GRI_V1_GREET");
		case 2:
			return func_669("RE_HU_HTL_V1_ANTAGONIZE", "RE_HU_GRI_V1_ANTAGONIZE");
		case 3:
			return func_669("RE_HU_HTL_V1_ENCOURAGE", "RE_HU_GRI_V1_ENCOURAGE");
		case 4:
			return func_669("RE_HU_HTL_V1_ANTAGONIZE_2", "RE_HU_GRI_V1_ANTAGONIZE_2");
		case 5:
			return func_669("RE_HU_HTL_V1_ENCOURAGE_2", "RE_HU_GRI_V1_ENCOURAGE_2");
		case 6:
			return func_669("RE_HU_HTL_V1_ANTAGONIZE_3", "RE_HU_GRI_V1_ANTAGONIZE_3");
		case 7:
			return func_669("RE_HU_HTL_V1_ANTAGONIZE_4", "RE_HU_GRI_V1_ANTAGONIZE_4");
		case 8:
			return func_669("RE_HU_HTL_V1_HIT_POS", "RE_HU_GRI_V1_HIT_POS");
		case 9:
			return func_669("RE_HU_HTL_V1_HIT_NEG", "RE_HU_GRI_V1_HIT_NEG");
		case 10:
			return func_669("RE_HU_HTL_V1_MISS_POS", "RE_HU_GRI_V1_MISS_POS");
		case 11:
			return func_669("RE_HU_HTL_V1_MISS_NEG", "RE_HU_GRI_V1_MISS_NEG");
		case 12:
			return func_669("RE_HU_HTL_V1_PLY_ALERT_GREET", "RE_HU_GRI_V1_PLY_ALERT_GREET");
		case 13:
			return func_669("RE_HU_HTL_V1_PLY_ALERT_ANT", "RE_HU_GRI_V1_PLY_ALERT_ANT");
		case 14:
			return func_669("RE_HU_HTL_V1_SHH", "RE_HU_GRI_V1_SHH");
		case 15:
			return func_669("RE_HU_HTL_V1_REPLY_SHH_A", "RE_HU_GRI_V1_REPLY_SHH_A");
		case 16:
			return func_669("RE_HU_HTL_V1_REPLY_SHH_B", "RE_HU_GRI_V1_REPLY_SHH_B");
		case 17:
			return "GENERIC_FRIGHTENED_MED";
		case 18:
			return "GENERIC_FRIGHTENED_HIGH";
		case 19:
			return func_669("RE_HU_HTL_V1_NEW_TRACKS", "RE_HU_GRI_V1_NEW_TRACKS");
		case 20:
			return func_669("RE_HU_HTL_V1_DROPPINGS", "RE_HU_GRI_V1_DROPPINGS");
		case 21:
			return func_669("RE_HU_HTL_V1_RECENTLY", "RE_HU_GRI_V1_RECENTLY");
		case 22:
			return func_669("RE_HU_HTL_V1_SOME_TRACKS", "RE_HU_GRI_V1_SOME_TRACKS");
		case 23:
			return func_669("RE_HU_HTL_V1_ITS_CLOSE", "RE_HU_GRI_V1_ITS_CLOSE");
		case 24:
			return func_669("CHAT_FLATTER", "RE_HU_GRI_V1_INSPECT");
		case 25:
			return "GOODBYE_START_MOVING";
		case 26:
			return func_669("INSULT_RESPONSE", "RE_HU_GRI_V1_OWNPATCH");
		case 28:
			return func_669("RE_HU_HTL_V1_STEAL", "RE_HU_GRI_V1_STEAL");
		case 27:
			return func_669("RE_HU_HTL_V1_SCARE", "RE_HU_GRI_V1_SCARE");
		case 29:
			return func_669("RE_HU_HTL_V1_SAD_EXIT", "RE_HU_GRI_V1_SAD_EXIT");
		case 30:
			return func_669("RE_HU_HTL_V1_FLEE", "RE_HU_GRI_V1_FLEE");
		case 31:
			return func_669("RE_HU_HTL_V1_AGGRO", "RE_HU_GRI_V1_AGGRO");
		case 32:
			return "GENERIC_CURSE_HIGH";
		default:
			break;
	}
	return "";
}

bool func_564(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_670(iParam0, &Var0);
}

int func_565(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3f, 0.25f, -1f);
	return 1;
}

void func_566(int iParam0)
{
	int iVar0;

	iVar0 = func_184(1);
	switch (iParam0)
	{
		case 4:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_14 = 0;
			}
			func_490(32);
			break;
		case 5:
			func_430(&(Local_794.f_19.f_14));
			break;
	}
	switch (iParam0)
	{
		case 2:
			TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
			TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), 36892756);
			if (func_395())
			{
				TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21), 2f, -2f, -1, 2048, 0f, false, 0, false, 0, false);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
			}
			break;
		case 3:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_395())
				{
					TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 2048, 0f, false, 0, false, 0, false);
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_21 = -1;
				Local_13.f_7.f_22 = 255;
			}
			func_297(8192);
			break;
		case 4:
			TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
			TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), -106360093);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_671(iVar0, func_272(), 1f), 0.5f, 20000, 0.25f, 1, 40000f);
			TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(1), 2f, -2f, -1, 66560, 0f, false, 0, false, 0, false);
			if ((Local_13.f_7.f_6 % 2) == 0)
			{
				TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(3), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(4), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 2048, 0f, false, 0, false, 0, false);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
			}
			break;
		case 5:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
			TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), 884269307);
			TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(17), 8f, -2f, -1, 67108864, 0f, false, 32768, false, 0, false);
			TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(14), 2f, -2f, -1, 67108865, 0f, false, 32768, false, 0, false);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_21 = 17;
				Local_13.f_7.f_9++;
			}
			break;
		case 6:
			if (func_672(Local_13.f_7.f_21))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21), 2f, -2f, -1, 2048, 0f, false, 0, false, 0, false);
				}
			}
			else
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iVar0);
				}
				TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_32));
				TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_32), 123378686);
				TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21), 8f, -8f, -1, 67108864, 0f, false, 32768, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(14), 8f, -8f, -1, 67108865, 0f, false, 32768, false, 0, false);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
				}
				else
				{
					TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_32);
				}
			}
			break;
		case 7:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				TASK::TASK_PLAY_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(16), 2f, -2f, -1, 3072, 0f, false, 0, false, 0, false);
			}
			break;
	}
}

void func_567(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	struct<15> Var5;

	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		func_379(512);
	}
	func_379(512);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		TASK::CLEAR_PED_TASKS(iVar1, true, false);
	}
	if (func_187() == 0 && !bParam1)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			PED::SET_PED_COMBAT_MOVEMENT(iVar1, 2);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar1, 60, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar1, 31, true);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 112, 0f);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 512, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 17, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 46, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 263, false);
		}
		if (iParam0 == iVar0)
		{
			iVar2 = PLAYER::GET_PLAYER_PED(func_375(0, 0, 1, 0));
		}
		else
		{
			iVar2 = iParam0;
		}
		fVar3 = func_481(iVar1, iVar2, 1, 1);
		fVar4 = func_481(iVar1, iVar0, 1, 1);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_794.f_19.f_33));
		TASK::_0x23767D80C7EED7C6(&(Local_794.f_19.f_33), -624000404);
		if ((fVar3 < (fVar4 - 8f) && func_481(iVar1, iVar2, 1, 1) > 4f) || iParam0 != iVar0)
		{
			func_379(1024);
			TASK::TASK_COMBAT_PED(0, iVar2, 0, 0);
		}
		else
		{
			TASK::TASK_COMBAT_PED(0, iVar0, 0, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
		if (func_305(0, 255, 1) < 125f)
		{
			func_673(0, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			Var5 = { func_332(-456522470) };
			func_333(&Var5);
			func_509(iVar1, &(Local_794.f_19.f_33), 0, 0, 0, 1);
		}
		else
		{
			TASK::CLOSE_SEQUENCE_TASK(Local_794.f_19.f_33);
		}
	}
	else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		TASK::SET_PED_PATH_MAY_ENTER_WATER(iVar1, false);
		PED::_0xEEED8FAFEC331A70(iVar1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iVar1, iParam0, 4, 524288, -1082130432 /* Float: -1f */, -1, 0);
		}
		else
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar1, ENTITY::GET_ENTITY_COORDS(iParam0, false, false), 3, 524288, -1082130432 /* Float: -1f */, -1, 0);
		}
		PED::SET_PED_KEEP_TASK(iVar1, true);
	}
}

void func_568(int iParam0, float fParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	PED::_0x06D26A96CA1BCA75(iParam0, 3, fParam1, iParam2);
}

void func_569(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_375(1, 0, 1, 0);
	func_570(iVar0, iParam0, iParam1, iParam2, iParam3);
}

int func_570(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	iVar1 = func_184(1);
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

bool func_571()
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

int func_572(int iParam0, int iParam1)
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

void func_573(var uParam0, var uParam1)
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

void func_574(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_674(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_575(int iParam0)
{
	return Local_794.f_60.f_7[iParam0 /*11*/].f_10;
}

void func_576(int iParam0, char* sParam1, bool bParam2)
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

void func_577(int iParam0)
{
}

bool func_578(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_579(int iParam0)
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

int func_580(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_675(iParam0, 0, 1) };
		if (func_676(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_677(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_678(iParam0, Var0, Var0.f_4, 0) };
				func_679(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_680(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_681(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_682(iParam0, iParam1);
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

void func_581(int iParam0, int iParam1, float fParam2)
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

bool func_582(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_583(int iParam0)
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

struct<2> func_584(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_585(int iParam0)
{
	if (!func_419(func_418(iParam0), &(Local_794.f_115.f_82[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_794.f_115.f_122), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_794.f_115.f_122), iParam0);
}

int func_586(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_370(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_371(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_371(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_371(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_587(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_370(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_371(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_371(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_371(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_588(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_443(&(Local_57[iParam1 /*23*/].f_9), 1, iParam0))
	{
		if (Local_57[iParam1 /*23*/].f_9.f_9[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_35.f_1[iParam0]))
		{
			if (Local_13.f_35.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_13.f_35.f_5[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_57[iParam1 /*23*/].f_9.f_9[iParam0], Local_13.f_35.f_5[iParam0]))
		{
			Local_13.f_35.f_1[iParam0] = iVar0;
			Local_13.f_35.f_5[iParam0] = Local_57[iParam1 /*23*/].f_9.f_9[iParam0];
		}
	}
}

void func_589(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_646() - fParam1);
	func_683(uParam0, 1);
	func_684(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_590(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_591(var uParam0)
{
	if (!func_431(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_685(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_646() - uParam0->f_1);
}

void func_592(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_413(&(Local_57[iVar0 /*23*/].f_9), 3, iParam0);
}

void func_593(int iParam0)
{
	if (func_686(iParam0) == 1)
	{
		func_379(1048576);
	}
}

bool func_594(int iParam0)
{
	return func_443(&(Local_794.f_115.f_78), 7, iParam0);
}

bool func_595(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_6)
	{
		func_601(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_13 = fParam3;
	}
	else
	{
		iParam1->f_13 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1940258.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!iParam1->f_2 & 2 != 0)
			{
				if (func_614(iParam1, 4000))
				{
					if ((func_615(iParam0, Global_1940258.f_35, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_616(iParam1, iParam0)) && func_617(iParam1, iParam0))
					{
						func_619();
						*uParam2 = 2;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_2 & 2 != 0)
		{
			if (iParam1->f_13 < 4f)
			{
				if (func_614(iParam1, 4000))
				{
					if ((func_615(iParam0, Global_1940258.f_35, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_616(iParam1, iParam0)) && func_617(iParam1, iParam0))
					{
						func_619();
						*uParam2 = 2;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258.f_35 != 0)
			{
				if (Global_1940258.f_34 == 0)
				{
					if (func_618(iParam0, Global_1940258.f_35))
					{
						func_619();
						*uParam2 = 2;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_622())
				{
					if (func_618(iParam0, Global_1940258.f_36))
					{
						func_619();
						*uParam2 = 2;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_608(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_2 & 4 != 0)
				{
					if (func_609(Global_34, iParam0, iParam1))
					{
						func_619();
						*uParam2 = 4;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_2 & 256 != 0)
				{
					if (func_610(Global_34, iParam0, iParam1))
					{
						func_619();
						*uParam2 = 256;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_2 & 131072 != 0)
		{
			if (func_687(iParam0, iParam1))
			{
				func_619();
				*uParam2 = 131072;
				func_603(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_688(iParam0, iParam1))
			{
				func_619();
				*uParam2 = 262144;
				func_603(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_596(int iParam0)
{
	return iParam0;
}

int func_597(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*uParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}
}

bool func_598(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

int func_599(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = func_689(iParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar1 = func_689(iParam0, 2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar1;
	}
	iVar2 = func_689(iParam0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return iVar2;
	}
	uVar3 = PED::_0x14169FA823679E41(iParam0);
	return uVar3;
}

bool func_600(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_601(int iParam0, bool bParam1, int iParam2)
{
	func_690(iParam2);
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
		iParam0->f_11 = 0;
	}
	iParam0->f_6 = iParam2;
	if (Global_1572887.f_13 == -1)
	{
		iParam0->f_14 = Global_1940258.f_38;
	}
	else
	{
		iParam0->f_14 = func_691(0);
	}
	switch (iParam0->f_7)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_14 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_34))
						{
							func_226(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_692(1, 1))
						{
							func_226(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_692(1, 1) || *iParam0 & 8192 != 0))
				{
					func_227(iParam0, 33554432);
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
	if (!iParam0->f_2 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_15))
		{
			if (func_693(iParam0))
			{
				iParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else if (iParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_15))
				{
					iParam0->f_15 = 0;
					iParam0->f_16 = 0;
				}
			}
		}
	}
	iParam0->f_7++;
	if (iParam0->f_7 >= 4)
	{
		iParam0->f_7 = 0;
		iParam0->f_8++;
		if (iParam0->f_8 > 4)
		{
			iParam0->f_8 = 0;
		}
	}
	func_694(iParam0);
}

bool func_602(int iParam0, int iParam1)
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
			if (!func_695(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_696(iParam0, iVar2) <= func_697(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_603(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_11 = iParam0;
	}
	if (func_698(iParam2, 1, 1, 1, 0))
	{
		func_226(iParam1, 2048);
	}
	iParam1->f_17 = iParam2;
	func_699(iParam1, 1);
	func_700();
}

bool func_604(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_701(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_702(iParam1);
			if (func_703(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_3 == 0)
				{
					iParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_3);
				iVar3 = func_704(iParam1);
				if (iParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_699(iParam1, 1);
						return true;
					}
					else if (iParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_705(iParam1))
						{
							func_699(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_605(int iParam0, int iParam1, int iParam2)
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
	if (func_706(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_702(iParam2);
		if (func_703(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_3 == 0)
			{
				iParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_3) > func_704(iParam2)
				{
					func_699(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_606(int iParam0, int iParam1)
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
	if (func_695(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_4 == 0)
		{
			iParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_4) > func_704(iParam1)
		{
			fVar3 = func_702(iParam1);
			if (iParam1->f_13 < fVar3)
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

int func_607(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_707(bParam1, bParam2, bParam3);
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

bool func_608(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_621();
	iVar1 = (iVar0 - iParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_609(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_708(iParam2);
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
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(iParam0) <= fVar2)
		{
			if (func_617(iParam2, iParam1))
			{
				func_699(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_610(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_13 < IntToFloat(func_638(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_617(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(iParam0) <= 1f)
				{
					func_699(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_611(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_709(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_24))
				{
					func_699(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_30))
				{
					func_699(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_29, &vVar4, 0, 0);
					if (func_710(iParam1, vVar0, vVar4))
					{
						func_699(iParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_24))
				{
					func_699(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_29, &vVar7, 0, 0);
					if (func_710(iParam1, vVar0, vVar7))
					{
						func_699(iParam2, 1);
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

bool func_612(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258.f_33)
	{
		if (!func_695(iParam0, iParam1, Global_1940258.f_28[iVar0]) || iParam0 == Global_1940258.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_711(Global_1940258.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false), vVar9);
			if (func_712(Global_1940258.f_28[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						iParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_713(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_11 = iParam0;
				return true;
			}
			else if (func_714(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_11 = iParam0;
				return true;
			}
			else if (func_715(iParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_613(int iParam0, int iParam1)
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

bool func_614(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_621();
	iVar1 = (iVar0 - iParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_615(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_716(iVar0, &iVar2))
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
	if (func_717(iVar0, iParam0))
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

int func_616(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_6))
		{
		}
	}
	else if (iParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_617(int iParam0, int iParam1)
{
	if (func_718(iParam0))
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

bool func_618(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_481(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_619()
{
}

bool func_620(int iParam0, int iParam1)
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
		if (func_719(iVar0, iParam1, vVar1))
		{
			iParam0->f_10 = func_621();
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
						if (func_522(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_10 = func_621();
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

int func_621()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_622()
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
	if ((func_621() - Global_1940258.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_623(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_15))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_697(iParam0);
	if (iParam0->f_13 > func_541(iParam0) && iParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_720(iParam1);
	iVar1 = func_721(iParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, iParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_624(int iParam0, int iParam1)
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
	if (!iParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_457(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_722(vVar1, vVar4);
	fVar8 = MISC::ABSF((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > iParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_625(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_723(iParam0, iParam1, bVar0, bVar2, iParam2->f_13, bVar1);
}

bool func_626(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1940258.f_18)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_724(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, true, false) == 1)
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
	if (!func_452(iParam0))
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
			if (func_725(iParam1))
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
					if (!func_726(iParam1, iParam0))
					{
						if (func_522(iVar4, Global_35, 1) < 7f)
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

bool func_627(int iParam0, int iParam1)
{
	if (!func_727(0))
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

bool func_628(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_621();
	iVar1 = (iVar0 - iParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_629(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_630(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_5 == 0)
	{
		iParam1->f_5 = func_621();
	}
	else if (func_621() - iParam1->f_5) > func_728(iParam1)
	{
		return func_729(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_631(int iParam0, int iParam1)
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

int func_632(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_560(vVar3, vVar6);
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
	if (func_561(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_633(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_181(Local_794.f_115.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_794.f_115.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_794.f_115.f_65), iParam0);
	if (!bParam3 && Local_57[iParam2 /*23*/].f_9.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_57[iParam2 /*23*/].f_9.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
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
	iVar0 = func_730(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::_0x705BE297EEBDB95D(iVar0) || func_731(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_0x79B1A6E780266DB0(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_634(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_635(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_636(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_732(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_733(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_734(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_736(func_735(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_737(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_737(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_656((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_656((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_656(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_656((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_637(int iParam0, var uParam1)
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

int func_638(int iParam0)
{
	return iParam0->f_23;
}

bool func_639(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_640(int iParam0)
{
	int iVar0;

	if (iParam0 == 2048)
	{
		iVar0 = func_184(1);
		if ((!PED::_0x29FCE825613FEFCA(iVar0, 400) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PED::GET_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), 1, 1)) && !PED::IS_PED_RAGDOLL(iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_641(int iParam0)
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

bool func_642(int iParam0)
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

float func_643(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_644(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_645(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_644(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_646() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_646()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_647(int iParam0, var uParam1, var uParam2, bool bParam3)
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

float func_648(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_649(var uParam0)
{
	*uParam0 = 0;
	if (Global_1291734.f_11.f_560 >= 8)
	{
		return false;
	}
	if (func_650(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		*uParam0 = 1;
		return false;
	}
	return true;
}

bool func_650(int iParam0)
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

int func_651(int iParam0)
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

void func_652(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1296859.f_21;
	Var1 = { func_422(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_653(int iParam0, var uParam1, var uParam2)
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

struct<2> func_654(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_655(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_661(Param0, &vVar0);
	if (func_738(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

float func_656(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_657(bool bParam0)
{
	int iVar0;

	iVar0 = func_184(1);
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 1))
	{
		if (bParam0)
		{
			return !func_501(iVar0, "REHU_STANDING");
		}
		return true;
	}
	return false;
}

bool func_658(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

float func_659(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

Vector3 func_660(vector3 vParam0, int iParam3, float fParam4)
{
	return func_739(vParam0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false), fParam4);
}

bool func_661(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_740(uParam2);
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

int func_662()
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

void func_663(var uParam0, var uParam1)
{
}

int func_664(int iParam0)
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

bool func_665(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_794.f_60.f_7[iParam0 /*11*/]);
}

var func_666(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_741() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_742());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_742());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_742());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_743(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_744(iVar2))
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
				if (iVar9 & 8192 != 0 && func_745(iVar2) != 1)
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
					if (!func_746(iVar10))
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

bool func_667(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_668(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

char* func_669(char* sParam0, char* sParam1)
{
	switch (func_747())
	{
		case 1:
			return sParam0;
		case 0:
			return sParam1;
		default:
			break;
	}
	return sParam1;
}

bool func_670(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

Vector3 func_671(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;

	vVar0 = { func_748(iParam0, vParam1, fParam4) };
	return ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + vVar0;
}

bool func_672(int iParam0)
{
	return ((iParam0 == 21 || iParam0 == 22) || iParam0 == 23);
}

void func_673(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_174(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_794.f_60.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, Local_794.f_60.f_7[iParam0 /*11*/]);
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
	Local_794.f_60.f_7[iParam0 /*11*/].f_1 = iVar0;
}

float func_674(float fParam0, float fParam1, float fParam2)
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

struct<5> func_675(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_749(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_750(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_678(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_751(bParam1) };
			if (bParam2 && func_752(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_676(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_676(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_677(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_753(bParam1) };
			switch (func_754(iParam0))
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
			if (func_755(iParam0, -1823706425))
			{
				Var0 = { func_678(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_755(iParam0, -1483207246))
			{
				Var0 = { func_678(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_678(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_755(iParam0, -1653629781))
			{
				Var0 = { func_678(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_756(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_755(iParam0, -1653629781))
			{
				Var0 = { func_678(1384535894, Var0, 1784584921, bParam1) };
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

bool func_676(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_757(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_677(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_758(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_678(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_759(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_760(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_679(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_761(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_756(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_680(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_28() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_762(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_763(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_760(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_680(bool bParam0)
{
	if (func_28() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_760(bParam0));
}

int func_681(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_764(iParam0))
	{
		return 0;
	}
	if (!func_680(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_682(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_765(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

void func_683(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_684(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_685(var uParam0)
{
	return func_590(*uParam0, 2);
}

int func_686(int iParam0)
{
	return iParam0;
}

bool func_687(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_766(iParam1);
	if (iParam1->f_13 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (iParam1->f_13 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_767(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		bVar3 = iParam1->f_1 & 2 != false;
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, true, bVar3) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1940258.f_38) || WEAPON::_IS_WEAPON_TORCH(Global_1940258.f_38))
			{
				if (iParam1->f_13 <= 5f)
				{
					if (func_768())
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

bool func_688(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_769(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_GET_PED_CROUCH_MOVEMENT(Global_34) || PED::IS_PED_IN_COVER(Global_34, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_34)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_34, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_34, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_34))
			{
				return false;
			}
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34) || ((PED::_GET_PED_BLACKBOARD_FLOAT(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *iParam1 & 2097152 != 0))
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

int func_689(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar1 = PED::_0x5463C962BC7777C3(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_690(int iParam0)
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
	Global_1940258.f_21 = func_770();
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
			func_771(&(Global_1940258.f_28), &(Global_1940258.f_33));
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

var func_691(int iParam0)
{
	return Global_1102219.f_3705[iParam0 /*3*/];
}

bool func_692(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_772(bParam0, &iVar0, &iVar1))
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

bool func_693(int iParam0)
{
	int iVar0;

	iVar0 = Global_1940258.f_34;
	if (func_28() == -1)
	{
		if (Global_1940258.f_34 == 0)
		{
			iVar0 = func_773(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_34) || !Global_1956200.f_1716[4])
	{
		iVar0 = func_773(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_721(iVar0) == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return false;
	}
	iParam0->f_15 = iVar0;
	return true;
}

void func_694(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_774(iParam0);
	}
}

bool func_695(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_721(iParam2);
	}
	else
	{
		iVar1 = func_720(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_721(iParam0);
	}
	else
	{
		iVar0 = func_720(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_181(*iParam1, 8388608))
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

float func_696(int iParam0, int iParam1)
{
	return func_481(iParam0, iParam1, 1, 1);
}

float func_697(int iParam0)
{
	return iParam0->f_29;
}

bool func_698(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_699(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 134217728);
	}
	else
	{
		func_227(iParam0, 134217728);
	}
}

void func_700()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_701(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_481(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_775(iVar0, 0)))
		{
			if (func_776(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_702(int iParam0)
{
	return iParam0->f_18;
}

bool func_703(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_181(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

int func_704(int iParam0)
{
	return iParam0->f_19;
}

int func_705(int iParam0)
{
	return iParam0->f_20;
}

bool func_706(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_775(iVar0, 0)))
		{
			if (func_639(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_707(bool bParam0, bool bParam1, bool bParam2)
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

float func_708(int iParam0)
{
	return iParam0->f_25;
}

int func_709(int iParam0)
{
	int iVar0;

	switch (iParam0->f_8)
	{
		case 0:
			switch (iParam0->f_7)
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
			switch (iParam0->f_7)
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
			switch (iParam0->f_7)
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
			switch (iParam0->f_7)
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
			switch (iParam0->f_7)
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
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_710(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_658(iParam0, vParam4, 0.5f))
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

int func_711(int iParam0)
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
	if (func_777(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_712(int iParam0)
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

bool func_713(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_769(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_714(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_769(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_715(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_778(iParam0);
	if (func_769(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
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

bool func_716(int iParam0, int iParam1)
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

bool func_717(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_779(iParam0, 1, 0, 0)) && !func_779(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
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

bool func_718(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_719(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_522(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_720(int iParam0)
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

int func_721(int iParam0)
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

float func_722(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_723(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_716(Global_34, &iVar1))
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
		fVar2 = func_481(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_481(iParam0, Global_1940258.f_34, 0, 1) < 2.5f)
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

bool func_724(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_772(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_726(iParam1, iVar0))
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
				if (!bParam2 || !func_726(iParam1, iVar1))
				{
					if (func_522(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_725(int iParam0)
{
	return func_181(*iParam0, 131072);
}

bool func_726(int iParam0, int iParam1)
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

bool func_727(int iParam0)
{
	return false;
}

int func_728(int iParam0)
{
	return iParam0->f_22;
}

int func_729(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_13;
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

int func_730(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_731(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

float func_732(int iParam0)
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
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_733(int iParam0)
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
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_734(int iParam0)
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
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_735(int iParam0)
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
	return func_736((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_736(vector3 vParam0)
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

Vector3 func_737(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

bool func_738(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_781(iParam0))
	{
		return false;
	}
	if (func_782(iParam0, uParam1, &uVar0))
	{
		func_783(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

Vector3 func_739(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_736(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

void func_740(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_741()
{
	return Global_1051252.f_12;
}

char* func_742()
{
	return "unnamed";
}

int func_743(int iParam0)
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

bool func_744(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_784(36, iParam0);
}

int func_745(int iParam0)
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

bool func_746(int iParam0)
{
	if (func_785(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_786(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

int func_747()
{
	switch (func_187())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_748(int iParam0, vector3 vParam1, float fParam4)
{
	return func_739(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vParam1, fParam4);
}

struct<4> func_749(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_760(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_678(joaat("CHARACTER"), func_787(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_678(joaat("CHARACTER"), func_787(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_678(joaat("CHARACTER"), func_787(), -1591664384, bParam0);
}

int func_750(int iParam0)
{
	vector3 vVar0;

	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_751(bool bParam0)
{
	int iVar0;

	iVar0 = func_760(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_678(923904168, func_749(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_678(923904168, func_749(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_678(923904168, func_749(bParam0), -740156546, 0);
}

bool func_752(int iParam0, bool bParam1)
{
	if (func_754(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_788();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_753(bool bParam0)
{
	int iVar0;

	iVar0 = func_760(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_678(271701509, func_749(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_678(271701509, func_749(bParam0), 12999093, 0);
}

int func_754(int iParam0)
{
	struct<2> Var0;

	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_755(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_754(iParam0);
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
			if (func_789(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_756(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_790(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_757(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_791(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_678(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_760(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_760(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_758(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_760(0);
	*uParam1 = { func_678(iParam0, func_751(0), iParam3, 0) };
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

bool func_759(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_760(bool bParam0)
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

bool func_761(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_762(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_792(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_794(func_793(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_795(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_763(int iParam0, struct<17> Param1)
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

bool func_764(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_765(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_766(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_541(iParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_796(iParam0);
	}
	return func_541(iParam0);
}

float func_767(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_768()
{
	int iVar0;
	int iVar1;

	iVar0 = func_798(func_797());
	iVar1 = func_799(func_797());
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

bool func_769(int iParam0)
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

bool func_770()
{
	if (func_800())
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

void func_771(var uParam0, var uParam1)
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

bool func_772(bool bParam0, int iParam1, int iParam2)
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

int func_773(int iParam0)
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
	if (iParam0->f_7 == 3)
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

void func_774(int iParam0)
{
	int iVar0;

	if (Global_1940258.f_32 == 0)
	{
		func_227(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940258.f_28[iVar0]))
				{
					func_226(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_775(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_776(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_639(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_777(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_778(int iParam0)
{
	return iParam0->f_28;
}

int func_779(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_780(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool func_781(int iParam0)
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

bool func_782(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_801(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_783(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_802(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_803(iVar0);
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
			uParam2->f_5 = func_804(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_805(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_806(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_807(iVar0);
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

bool func_784(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_808(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_809())
	{
		return func_808(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_808(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_785(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_786(int iParam0)
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
		func_810(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_811(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

struct<4> func_787()
{
	struct<4> Var0;

	return Var0;
}

bool func_788()
{
	return (func_812(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_813(func_678(joaat("WARDROBE"), func_749(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_789(int iParam0, int iParam1, int iParam2)
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

bool func_790(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_760(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_791(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_792(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_814(uParam1->f_8, iParam0, iVar0, 2048) || func_814(uParam1->f_8, iParam0, iVar0, 32768)) || func_814(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_814(uParam1->f_8, iParam0, iVar0, 4) || func_814(uParam1->f_8, iParam0, iVar0, 256)) || func_814(uParam1->f_8, iParam0, iVar0, 65536)) || func_814(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_814(uParam1->f_8, iParam0, iVar0, 1) || func_814(uParam1->f_8, iParam0, iVar0, 8)) || func_814(uParam1->f_8, iParam0, iVar0, 65536)) || func_814(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_814(uParam1->f_8, iParam0, iVar0, 1) || func_814(uParam1->f_8, iParam0, iVar0, 16)) || func_814(uParam1->f_8, iParam0, iVar0, 2)) || func_814(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_814(uParam1->f_8, iParam0, iVar0, 8) || func_814(uParam1->f_8, iParam0, iVar0, 4096)) || func_814(uParam1->f_8, iParam0, iVar0, 256)) || func_814(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_793(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_794(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_815(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_815(iParam1, 2, 0, 0);
	return -1;
}

int func_795(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_815(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

var func_796(int iParam0)
{
	return iParam0->f_27;
}

int func_797()
{
	return Global_1902818;
}

int func_798(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_799(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_800()
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

int func_801(int iParam0)
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

int func_802(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_816(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_803(int iParam0)
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

int func_804(int iParam0)
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

int func_805(int iParam0)
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

int func_806(int iParam0)
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

int func_807(int iParam0)
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

bool func_808(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_809()
{
	return Global_1102219.f_3672;
}

void func_810(int iParam0)
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
	func_811(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_811(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_812(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_764(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_760(bParam1), iParam0, iParam3);
}

int func_813(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_817(&uParam0, iParam4, bParam5, iParam6);
}

int func_814(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_228(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_815(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_818(iParam0, iParam1, iParam2, iParam3);
}

bool func_816(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_819(iParam0, uParam1, &uVar0))
	{
		func_820(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_817(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_821(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_818(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_822(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_819(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_801(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_820(var uParam0, int iParam1, var uParam2)
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

bool func_821(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_760(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_790(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_822(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_823(&(uParam0->f_4));
}

void func_823(var uParam0)
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

