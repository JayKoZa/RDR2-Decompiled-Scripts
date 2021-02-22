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
	vector3 vLocal_13 = { 0f, 0f, 0f };
	struct<39> Local_16 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 1, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_55 = 10;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 10;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	struct<44> Local_77[32];
	struct<583> Local_1486 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2069 = 10;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 10;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 2;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	float fLocal_2094 = 0f;
	float fLocal_2095 = 0f;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	vLocal_13 = { 0f, 0f, 0f };
	fLocal_2094 = 1f;
	fLocal_2095 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_16, 61, 43);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_16), 61, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_77, 1409, 44);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Local_77[0 /*44*/])), 1409, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0)
{
	if (Local_16 == 6)
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
	else if (func_17(Local_1486.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_1486.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_1486.f_12), Local_1486.f_9))
	{
		return true;
	}
	else if (Local_1486.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_1486, iParam0, 5);
	iVar2 = func_31(&bVar1, Local_1486.f_1, Local_1486.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_1486.f_12 = iVar2;
	iVar0 = Global_1198046.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_1486.f_1, Local_1486.f_2, Local_1486.f_3, iVar0);
	Local_1486.f_9 = { func_33(Var3.f_5, 8) };
	Local_1486.f_14 = Var3.f_5;
	Local_1486.f_15 = { Var3.f_11 };
	Local_1486.f_18 = Var3.f_7;
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
	if (Local_16 <= 5)
	{
		func_42();
	}
	switch (Local_16)
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
	if (Local_1486.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_1486.f_8)
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
		if (VOLUME::_0xF6A8A652A6B186CD(Local_16.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_16.f_3.f_1);
		}
	}
	func_60();
}

void func_26()
{
	func_61();
}

void func_27()
{
	if (Local_1486.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_62(Local_1486.f_12, 4);
		}
	}
	func_63();
	if (func_64(64))
	{
		func_65(Local_16.f_6);
	}
	func_66();
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
	while (iVar0 < 10)
	{
		Local_16.f_38.f_1[iVar0] = 255;
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
	func_67(&Var0, Var26.f_5);
	iVar25 = func_68(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_69(iVar25) };
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
			func_70(uParam0, iParam2);
			break;
		case 2:
			func_71(uParam0, iParam2);
			break;
		case 3:
			func_72(uParam0, iParam2);
			break;
		case 4:
			func_73(uParam0, iParam2);
			break;
		case 12:
			func_74(uParam0, iParam2);
			break;
		case 6:
			func_75(uParam0, iParam2, -1);
			break;
		case 7:
			func_76(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_77(uParam0, iParam2);
			break;
		case 11:
			func_78(uParam0, iParam2);
			break;
		case 9:
			func_79(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_80(uParam0, iParam2);
			break;
		case 8:
			func_81(uParam0, iParam2);
			break;
		case 13:
			func_82(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_83(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_84(uParam0, iParam2);
			break;
		case 16:
			func_85(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_86(uParam0, iParam2);
			break;
		case 21:
			func_87(uParam0, iParam2);
			break;
		case 28:
			func_88(uParam0, iParam2);
			break;
		case 25:
			func_89(uParam0, iParam2);
			break;
		case 24:
			func_90(uParam0, iParam2);
			break;
		case 22:
			func_91(uParam0, iParam2);
			break;
		case 23:
			func_92(uParam0, iParam2);
			break;
		case 29:
			func_93(uParam0, iParam2);
			break;
		case 26:
			func_94(uParam0, iParam2);
			break;
		case 30:
			func_95(uParam0, iParam2);
			break;
		case 27:
			func_96(uParam0, iParam2);
			break;
		case 32:
			func_97(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_98(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_99(uParam0, iParam2);
			break;
		case 17:
			func_100(uParam0, iParam2);
			break;
		case 18:
			func_101(uParam0, iParam2);
			break;
		case 19:
			func_102(uParam0, iParam2);
			break;
		case 20:
			func_103(uParam0, iParam2);
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
			func_104(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_106(iParam0, &(Global_1071686.f_636), func_105(iParam1));
			break;
		case 3:
			Var0.f_1 = func_106(iParam0, &(Global_1071686.f_636.f_602), func_105(iParam1));
			break;
		case 4:
			Var0.f_1 = func_106(iParam0, &(Global_1071686.f_636.f_2104), func_105(iParam1));
			break;
		case 5:
			Var0.f_1 = func_106(iParam0, &(Global_1071686.f_636.f_12606), func_105(iParam1));
			break;
		case 6:
			Var0.f_1 = func_106(iParam0, &(Global_1071686.f_636.f_12908), func_105(iParam1));
			break;
		case 7:
			Var0.f_1 = func_106(iParam0, &(Global_1071686.f_636.f_15910), func_105(iParam1));
			break;
		case 8:
			Var0.f_1 = func_106(iParam0, &(Global_1071686.f_636.f_16512), func_105(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_107();
	}
	return Var0;
}

void func_34()
{
	func_108();
	func_109();
}

void func_35()
{
	int iVar0;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(10);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_111(iVar0, func_110(iVar0));
		if (iVar0 < 7 || iVar0 > 9)
		{
			func_114(iVar0, func_112(iVar0), func_113(iVar0), 1);
		}
		else
		{
			func_115(iVar0);
		}
		iVar0++;
	}
	func_116(&(Local_1486.f_19.f_9), 5f);
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_117(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_105(Param0))
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

	iVar0 = Global_1198046.f_231.f_1066[Local_1486.f_12 /*17*/].f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_1486.f_1, Local_1486.f_2, Local_1486.f_3, iVar0);
	if (!func_118(&Var1, 1))
	{
		func_119(1);
		return;
	}
	Local_16.f_6 = func_120(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)));
	func_121(256);
	if (func_122(Local_16.f_6))
	{
		func_123(5);
		func_119(6);
	}
	else
	{
		func_119(1);
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
	func_32(&Var0, Local_1486.f_1, Local_1486.f_2, -1, 255);
	if (func_118(&Var0, 1))
	{
		func_119(2);
		return;
	}
	if (func_124(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_1486.f_15, Var0.f_10, 2442122);
		func_119(2);
	}
	else if (bVar31)
	{
		func_123(3);
		func_119(6);
	}
	if (!func_125(Local_16.f_3.f_2))
	{
		func_126(&(Local_16.f_3.f_2));
	}
	else if (func_127(Local_16.f_3.f_2) > 45000)
	{
		func_123(4);
		func_119(6);
	}
}

void func_45()
{
	if (func_128(1, 255))
	{
		if (!func_129(1))
		{
			if (func_130())
			{
				func_121(1);
			}
		}
		else
		{
			func_131();
			func_119(3);
		}
	}
}

void func_46()
{
	bool bVar0;

	if (func_128(2, 255))
	{
		if (!func_129(2))
		{
			bVar0 = true;
			if (!func_132())
			{
				bVar0 = false;
			}
			if (!func_133())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_121(2);
			}
		}
		else
		{
			func_134();
			func_119(4);
		}
	}
}

void func_47()
{
	func_135();
	func_136();
	func_137();
	if (func_138() || Local_16.f_2 != 0)
	{
		func_139();
		func_119(5);
	}
}

void func_48()
{
	if (func_128(4, 255))
	{
		if (func_140())
		{
			func_121(4);
			func_119(6);
		}
	}
}

void func_49()
{
	if (!func_129(256))
	{
		return;
	}
	if (func_129(512))
	{
		if (func_64(64) && func_120(PLAYER::PLAYER_ID()) == Local_16.f_6)
		{
			func_65(Local_16.f_6);
			func_141(64);
		}
	}
	else if (!func_64(64))
	{
		if (func_120(PLAYER::PLAYER_ID()) == Local_16.f_6)
		{
			func_142(Local_16.f_6, 1, 1);
			func_143(64);
		}
	}
	else if (func_120(PLAYER::PLAYER_ID()) != Local_16.f_6)
	{
		func_65(Local_16.f_6);
		func_141(64);
	}
}

void func_50()
{
	if (!Global_13)
	{
		if (func_128(8192, 255))
		{
			func_144(8192);
		}
	}
	else if (!func_128(8192, 255))
	{
		func_145(8192);
	}
}

void func_51()
{
	func_146();
	func_147();
}

void func_52()
{
	if (Local_16 == 6)
	{
		func_148(6);
	}
	else if (Local_16 > 0)
	{
		func_49();
		func_148(1);
	}
}

void func_53()
{
	if (Local_16 == 6)
	{
		func_148(6);
	}
	else if (Local_16 > 1)
	{
		func_148(2);
	}
}

void func_54()
{
	bool bVar0;
	int iVar1;

	if (!func_128(1, 255))
	{
		bVar0 = true;
		if (!func_149())
		{
			bVar0 = false;
		}
		if (!func_150())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_145(1);
		}
		else
		{
			iVar1 = Global_1901947.f_236.f_68;
			if (!func_125(Local_1486.f_11))
			{
				func_126(&(Local_1486.f_11));
			}
			if (func_127(Local_1486.f_11) >= iVar1)
			{
				func_148(6);
			}
		}
	}
	else if (Local_16 > 2)
	{
		func_151(&(Local_1486.f_11));
		func_152();
		func_148(3);
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_128(2, 255))
	{
		iVar0 = func_153();
		iVar1 = func_154();
		if (iVar0 && iVar1)
		{
			func_145(2);
		}
		else
		{
			iVar2 = Global_1901947.f_236.f_68;
			if (!func_125(Local_1486.f_11))
			{
				func_126(&(Local_1486.f_11));
			}
			if (func_155(Local_1486.f_11) >= iVar2)
			{
				func_148(6);
			}
		}
	}
	else if (Local_16 > 3)
	{
		func_151(&(Local_1486.f_11));
		func_156();
		func_157();
		func_158();
		func_159();
		func_148(4);
	}
}

void func_56()
{
	if (Local_16 >= 5)
	{
		func_160();
		func_148(5);
		return;
	}
	func_161();
	func_162();
	func_163();
	func_164();
	func_165();
	func_166();
}

void func_57()
{
	if (!func_128(4, 255))
	{
		if (func_167())
		{
			func_168();
			func_62(Local_1486.f_12, 4);
			func_145(4);
		}
	}
	else if (Local_16 > 5)
	{
		func_148(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_129(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
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
		while (iVar1 < 10)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_16.f_27[iVar1]);
				func_169(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					if (!func_170(iVar1, 16))
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

void func_62(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_171(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_63()
{
	int iVar0;
	bool bVar1;

	if (!func_64(1))
	{
		return;
	}
	if (func_64(4))
	{
		return;
	}
	if (!func_64(2))
	{
		iVar0 = -1;
	}
	else if (!func_64(8))
	{
		iVar0 = 2;
	}
	else if (func_64(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_64(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_172(Local_1486.f_9, iVar0, 0, 255, 0);
	func_143(4);
	if (bVar1)
	{
		func_173(Local_1486.f_1, Local_1486.f_2);
		if (!func_64(256))
		{
			if (iVar0 == 1)
			{
				func_174(Local_1486.f_18, 1);
			}
			else
			{
				func_174(Local_1486.f_18, 0);
			}
			func_143(256);
		}
	}
	else
	{
		func_174(Local_1486.f_18, 2);
	}
}

bool func_64(int iParam0)
{
	return func_175(Local_1486.f_7, iParam0);
}

void func_65(int iParam0)
{
	int iVar0;

	if (!func_176(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_70 = iParam0;
	Global_1134390[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_66()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_59();
	func_177(Local_1486.f_19.f_159, 0);
	if (func_178(-2147483648, -1, 1))
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_1486.f_19.f_143));
	}
	func_180(func_179(), 0, 0);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		func_169(iVar1);
		iVar2 = func_181(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (bVar0 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (func_182(iVar1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !PED::_IS_PED_HOGTIED(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar2, Global_34, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
					PED::SET_PED_KEEP_TASK(iVar2, true);
					PED::SET_PED_CONFIG_FLAG(iVar2, 230, true);
					PED::_0x39A2FC5AF55A52B1(iVar2, -1);
				}
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
}

void func_67(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_68(var uParam0)
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

struct<15> func_69(int iParam0)
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

void func_70(var uParam0, int iParam1)
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

void func_71(var uParam0, int iParam1)
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

void func_72(var uParam0, int iParam1)
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

void func_73(var uParam0, int iParam1)
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

void func_74(var uParam0, int iParam1)
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

void func_75(var uParam0, int iParam1, int iParam2)
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

void func_76(var uParam0, int iParam1, int iParam2)
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

void func_77(var uParam0, int iParam1)
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

void func_78(var uParam0, int iParam1)
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

void func_79(var uParam0, int iParam1, int iParam2)
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

void func_80(var uParam0, int iParam1)
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

void func_81(var uParam0, int iParam1)
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

void func_82(var uParam0, int iParam1, int iParam2)
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
			uParam0->f_11 = { func_193(func_120(iParam2)) };
			break;
	}
}

void func_83(var uParam0, int iParam1, int iParam2)
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

void func_84(var uParam0, int iParam1)
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

void func_85(var uParam0, int iParam1, int iParam2)
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

void func_86(var uParam0, int iParam1)
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

void func_87(var uParam0, int iParam1)
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

void func_88(var uParam0, int iParam1)
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

void func_89(var uParam0, int iParam1)
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

void func_90(var uParam0, int iParam1)
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

void func_91(var uParam0, int iParam1)
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

void func_92(var uParam0, int iParam1)
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

void func_93(var uParam0, int iParam1)
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

void func_94(var uParam0, int iParam1)
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

void func_95(var uParam0, int iParam1)
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

void func_96(var uParam0, int iParam1)
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

void func_97(var uParam0, int iParam1, int iParam2)
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

void func_98(var uParam0, int iParam1, int iParam2)
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

void func_99(var uParam0, int iParam1)
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

void func_100(var uParam0, int iParam1)
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

void func_101(var uParam0, int iParam1)
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

void func_102(var uParam0, int iParam1)
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

void func_103(var uParam0, int iParam1)
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

void func_104(var uParam0, int iParam1, int iParam2)
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

int func_105(int iParam0)
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

int func_106(int iParam0, var uParam1, int iParam2)
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

struct<2> func_107()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_108()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(10);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_77[iVar1 /*44*/].f_4.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_109()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_212(&(Local_1486.f_332), &(Local_1486.f_332.f_32));
	bVar2 = true;
	if (!func_213(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_16.f_38.f_12[iVar0] = 0;
			Local_16.f_38.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_77[iVar1 /*44*/].f_17.f_16[iVar0] = 0;
		}
		iVar0++;
	}
	func_214(&(Local_1486.f_332.f_99), 8, -1);
	if (bVar2)
	{
		func_214(&(Local_77[iVar1 /*44*/].f_17), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_214(&(Local_77[iVar3 /*44*/].f_17), 8, -1);
			iVar3++;
		}
	}
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_215())
			{
				case 0:
					return joaat("GC_LEMOYNECAPTIVE_MALES_01");
				case 1:
					return joaat("S_M_M_AMBIENTSDPOLICE_01");
				default:
					break;
			}
			break;
		case 1:
			return joaat("MP_G_M_O_UNIEXCONFEDS_01");
		case 2:
			return joaat("MP_G_M_Y_UNIEXCONFEDS_01");
		case 3:
			return joaat("MP_G_M_Y_UNIEXCONFEDS_01");
		case 4:
			return joaat("MP_G_M_O_UNIEXCONFEDS_01");
		case 5:
			return joaat("MP_G_M_O_UNIEXCONFEDS_01");
		case 6:
			return joaat("MP_G_M_O_UNIEXCONFEDS_01");
		case 7:
			return joaat("MP_G_M_O_UNIEXCONFEDS_01");
		case 8:
			return joaat("MP_G_M_O_UNIEXCONFEDS_01");
		case 9:
			return joaat("MP_G_M_O_UNIEXCONFEDS_01");
		default:
			return 0;
	}
	return 0;
}

void func_111(int iParam0, int iParam1)
{
	Local_1486.f_179.f_7[iParam0 /*11*/].f_3 = iParam1;
}

Vector3 func_112(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1563.001f, -2045.494f, 47.40215f;
				case 1:
					return 1564.009f, -2046.205f, 47.38874f;
				case 2:
					return 1560.544f, -2044.128f, 47.36815f;
				case 3:
					return 1565.708f, -2050.429f, 47.24094f;
				case 4:
					return 1557.766f, -2051.627f, 47.49878f;
				case 5:
					return 1562.822f, -2056.044f, 47.48583f;
				case 6:
					return 1564.595f, -2041.504f, 47.49982f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1378.372f, -1696.135f, 66.87366f;
				case 1:
					return 1378.334f, -1695.127f, 66.86523f;
				case 2:
					return 1374.531f, -1695.165f, 66.89505f;
				case 3:
					return 1382.254f, -1689.932f, 66.58237f;
				case 4:
					return 1375.964f, -1702.699f, 66.89053f;
				case 5:
					return 1384.54f, -1701.691f, 66.71351f;
				case 6:
					return 1388.199f, -1695.534f, 66.42114f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1620.386f, -1649.888f, 56.0248f;
				case 1:
					return 1620.491f, -1648.925f, 56.02482f;
				case 2:
					return 1617.094f, -1649.619f, 56.025f;
				case 3:
					return 1621.092f, -1652.11f, 56.02486f;
				case 4:
					return 1624.054f, -1646.354f, 56.02502f;
				case 5:
					return 1626.288f, -1654.976f, 56.02556f;
				case 6:
					return 1617.7f, -1657.738f, 56.02635f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1504.89f, -1468.727f, 71.38737f;
				case 1:
					return 1506.201f, -1468.143f, 71.35004f;
				case 2:
					return 1505.608f, -1464.901f, 71.44698f;
				case 3:
					return 1502.297f, -1470.044f, 71.43334f;
				case 4:
					return 1499.141f, -1467.866f, 71.39942f;
				case 5:
					return 1509.982f, -1473.235f, 71.18302f;
				case 6:
					return 1498.737f, -1475.118f, 71.56422f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1081.057f, -1265.789f, 67.49545f;
				case 1:
					return 1081.038f, -1264.815f, 67.49545f;
				case 2:
					return 1078.039f, -1265.329f, 67.49545f;
				case 3:
					return 1081.392f, -1267.831f, 67.49545f;
				case 4:
					return 1084.854f, -1261.718f, 67.49545f;
				case 5:
					return 1079.662f, -1273.534f, 67.49545f;
				case 6:
					return 1088.149f, -1272.135f, 67.49545f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 681.3074f, -992.1173f, 52.42072f;
				case 1:
					return 681.3499f, -991.009f, 52.42072f;
				case 2:
					return 677.1426f, -991.3392f, 52.42072f;
				case 3:
					return 682.7988f, -995.3815f, 52.42072f;
				case 4:
					return 685.3489f, -987.9503f, 52.42072f;
				case 5:
					return 691.7525f, -991.6058f, 52.42072f;
				case 6:
					return 688.1611f, -998.6777f, 52.42072f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 707.892f, -884.1869f, 48.26218f;
				case 1:
					return 708.943f, -884.2095f, 48.26216f;
				case 2:
					return 708.8777f, -880.6065f, 48.41024f;
				case 3:
					return 704.9007f, -885.637f, 48.26198f;
				case 4:
					return 713.6194f, -888.502f, 48.26196f;
				case 5:
					return 700.8785f, -891.6036f, 48.26171f;
				case 6:
					return 707.6378f, -894.5347f, 48.26195f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 879.815f, -536.4342f, 88.03556f;
				case 1:
					return 881.1649f, -536.6054f, 88.03556f;
				case 2:
					return 880.9461f, -532.5448f, 88.03556f;
				case 3:
					return 876.8293f, -538.6234f, 88.03556f;
				case 4:
					return 887.773f, -538.3796f, 88.03556f;
				case 5:
					return 880.2193f, -547.4427f, 88.03556f;
				case 6:
					return 872.5983f, -544.4485f, 88.03556f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1011.536f, -395.7754f, 90.44735f;
				case 1:
					return 1010.475f, -395.1588f, 90.44116f;
				case 2:
					return 1007.957f, -400.366f, 90.66586f;
				case 3:
					return 1014.796f, -395.6366f, 90.44254f;
				case 4:
					return 1007.402f, -388.1241f, 90.55527f;
				case 5:
					return 1016.454f, -384.9804f, 90.65976f;
				case 6:
					return 1020.529f, -391.887f, 90.55995f;
				default:
					break;
			}
			break;
	}
	return vLocal_13;
}

float func_113(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 175.96f;
				case 1:
					return 134.72f;
				case 2:
					return -163.81f;
				case 3:
					return 79.29f;
				case 4:
					return 123.36f;
				case 5:
					return -168.2f;
				case 6:
					return -54.21f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -141.01f;
				case 1:
					return -141.01f;
				case 2:
					return 63f;
				case 3:
					return 179.5f;
				case 4:
					return -99.92f;
				case 5:
					return -145.64f;
				case 6:
					return -67.49f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -79f;
				case 1:
					return -129.26f;
				case 2:
					return 59.21f;
				case 3:
					return 19.43f;
				case 4:
					return -17.42f;
				case 5:
					return -134.84f;
				case 6:
					return 144.21f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 126.43f;
				case 1:
					return 178.89f;
				case 2:
					return -9.12f;
				case 3:
					return -48.59f;
				case 4:
					return 50.59f;
				case 5:
					return -98.46f;
				case 6:
					return 140.21f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -93.87f;
				case 1:
					return -140.52f;
				case 2:
					return 83.86f;
				case 3:
					return -11.14f;
				case 4:
					return -15.67f;
				case 5:
					return 168.36f;
				case 6:
					return -144.39f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -99.63f;
				case 1:
					return -152.61f;
				case 2:
					return 83.8f;
				case 3:
					return 22.02f;
				case 4:
					return -7.96f;
				case 5:
					return -90.05f;
				case 6:
					return -136.98f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -177.59f;
				case 1:
					return 145.4f;
				case 2:
					return -7.92f;
				case 3:
					return -66.65f;
				case 4:
					return -102.38f;
				case 5:
					return 144.2f;
				case 6:
					return 176.92f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 174.71f;
				case 1:
					return 119.68f;
				case 2:
					return -9.76f;
				case 3:
					return -47.53f;
				case 4:
					return -76.69f;
				case 5:
					return -170.89f;
				case 6:
					return 143.06f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -39.81f;
				case 1:
					return -81.83f;
				case 2:
					return 143.67f;
				case 3:
					return 95.58f;
				case 4:
					return 16.67f;
				case 5:
					return -20.54f;
				case 6:
					return -74.71f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_114(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_1486.f_179.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_1486.f_179.f_7[iParam0 /*11*/].f_5 = fParam4;
	if (bParam5)
	{
		func_217(&(Local_1486.f_179.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_218(&(Local_1486.f_179.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_115(int iParam0)
{
	func_219(iParam0, 4);
}

void func_116(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

bool func_117(int iParam0)
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

bool func_118(var uParam0, int iParam1)
{
	return func_220(uParam0->f_25, iParam1);
}

void func_119(int iParam0)
{
	if (Local_16 != iParam0)
	{
		Local_16 = iParam0;
	}
}

int func_120(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_121(int iParam0)
{
	if (!func_129(iParam0))
	{
		func_217(&(Local_16.f_1), iParam0);
	}
}

bool func_122(int iParam0)
{
	if (!func_176(iParam0))
	{
		return false;
	}
	return (func_221(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_123(int iParam0)
{
	if (Local_16.f_2 != iParam0)
	{
		Local_16.f_2 = iParam0;
	}
}

bool func_124(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_16.f_3.f_1))
	{
		return true;
	}
	if (func_222(Local_1486.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_16.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_1486.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_223(&uVar1, Param0);
		Local_16.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_145(128);
	}
	else if (!func_128(128, 255))
	{
		Local_16.f_3.f_1 = func_224(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_16.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_16.f_3);
	switch (iVar0)
	{
		case 3:
			Local_16.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_16.f_3);
			return true;
		case 4:
			Local_16.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_125(int iParam0)
{
	return iParam0 != 0;
}

void func_126(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_127(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

bool func_128(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	return func_175(Local_77[iParam1 /*44*/], iParam0);
}

bool func_129(int iParam0)
{
	return func_175(Local_16.f_1, iParam0);
}

bool func_130()
{
	return true;
}

void func_131()
{
}

bool func_132()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	bVar1 = false;
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1486.f_19.f_142, func_225());
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1486.f_19.f_142, "PB_CUT_FREE_DEAD_F");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1486.f_19.f_142, "PB_CUT_FREE_DEAD_L");
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_7.f_4[iVar2]))
		{
			if (func_226(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			if (bVar1)
			{
				func_227();
			}
			return iVar0;
		}
	}
}

bool func_133()
{
	bool bVar0;

	if (!func_228(&bVar0))
	{
		if (bVar0)
		{
			func_227();
		}
		return false;
	}
	return true;
}

void func_134()
{
}

void func_135()
{
	if (!func_129(32) && func_229(32))
	{
		func_121(32);
	}
	if (!func_129(64) && func_229(64))
	{
		func_121(64);
	}
	if (!func_129(16) && func_230(16))
	{
		func_121(16);
	}
	if ((!func_129(2048) && func_229(2048)) && !func_229(4096))
	{
		func_121(2048);
	}
}

void func_136()
{
	bool bVar0;

	if (!bVar0 && func_129(16))
	{
		func_123(1);
		return;
	}
	if (func_129(2048) && !func_229(4096))
	{
		func_123(6);
		return;
	}
}

void func_137()
{
}

bool func_138()
{
	if (func_231())
	{
		return true;
	}
	Local_16.f_7.f_12 = func_232(0, 150f, 0, 0);
	func_233();
	func_234();
	func_235();
	func_236();
	if (!func_237(Local_16.f_7.f_6[0]))
	{
	}
	switch (Local_16.f_7)
	{
		case 0:
			func_238();
			break;
		case 1:
			func_239();
			break;
		case 2:
			func_240();
			break;
		case 3:
			func_241();
			break;
		case 4:
			func_242();
			break;
		case 5:
			func_243();
			break;
		case 6:
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
		case 10:
			func_248();
			break;
		case 11:
			func_249();
			break;
		case 12:
			func_250();
			break;
	}
	return false;
}

void func_139()
{
}

bool func_140()
{
	return true;
}

void func_141(int iParam0)
{
	if (func_64(iParam0))
	{
		func_218(&(Local_1486.f_7), iParam0);
	}
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_176(iParam0))
	{
		return 0;
	}
	iVar0 = func_251(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1134390[iVar1 /*83*/].f_70 = iParam0;
	Global_1134390[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_252(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_253(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_143(int iParam0)
{
	if (!func_64(iParam0))
	{
		func_217(&(Local_1486.f_7), iParam0);
	}
}

void func_144(int iParam0)
{
	if (func_175(Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/], iParam0))
	{
		func_218(&(Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/]), iParam0);
	}
}

void func_145(int iParam0)
{
	if (!func_128(iParam0, 255))
	{
		func_217(&(Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/]), iParam0);
	}
}

void func_146()
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
				func_254(iVar0);
				break;
			case -1315570756:
				func_255(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_256(iVar0);
		iVar0++;
	}
}

void func_147()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1486.f_582 >= 10)
		{
			Local_1486.f_582 = 0;
		}
		func_258(func_257(Local_1486.f_582));
		Local_1486.f_582++;
		iVar0++;
	}
}

void func_148(int iParam0)
{
	if (Local_1486.f_8 != iParam0)
	{
		Local_1486.f_8 = iParam0;
	}
}

bool func_149()
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	sVar0 = "NBTIED";
	iVar1 = 1;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
		{
			iVar1 = 0;
		}
	}
	sVar2 = "BTUPAUD";
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar2))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar2);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar2))
		{
			iVar1 = 0;
		}
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!func_260(func_259(iVar3)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	switch (Local_1486.f_19)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				return true;
			}
			Local_1486.f_19.f_142 = ANIMSCENE::_CREATE_ANIM_SCENE(func_261(), 0, func_262(), true, true);
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1486.f_19.f_142))
			{
				func_227();
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_1486.f_19.f_142);
				Local_16.f_7.f_14 = NETWORK::_ANIM_SCENE_TO_NET(Local_1486.f_19.f_142);
			}
			func_263(1);
			return false;
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1486.f_19.f_142, true, false))
			{
				return false;
			}
			break;
	}
	return iVar1;
}

bool func_150()
{
	bool bVar0;

	bVar0 = false;
	if (!func_264())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_151(var uParam0)
{
	*uParam0 = 0;
}

void func_152()
{
}

int func_153()
{
	return 1;
}

int func_154()
{
	return 1;
}

int func_155(int iParam0)
{
	return (iParam0 - Global_1296859.f_21) * 1000;
}

void func_156()
{
	if (!func_64(1))
	{
		func_265(Local_1486.f_9);
		func_143(1);
	}
}

void func_157()
{
	func_266();
}

void func_158()
{
	func_267();
	func_268();
	func_269();
	func_180(func_179(), 1, 0);
	func_270(func_179());
	func_271(0, joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"));
	func_271(1, joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"));
	func_272();
	func_273(0);
}

void func_159()
{
	func_274();
}

void func_160()
{
}

void func_161()
{
	float fVar0;

	if (func_222(Local_1486.f_15))
	{
		return;
	}
	if (func_275())
	{
		return;
	}
	if (func_276(Local_1486.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_1486.f_15);
		if (fVar0 < 200f)
		{
			func_145(4096);
		}
		else if (fVar0 < 400f)
		{
			func_144(4096);
			func_145(2048);
		}
		else
		{
			func_144(4096);
			func_144(2048);
		}
	}
}

void func_162()
{
	func_277();
	func_278();
	func_279();
	func_280();
}

void func_163()
{
	if (func_281())
	{
		func_145(8);
	}
	else
	{
		func_144(8);
	}
}

void func_164()
{
	int iVar0;
	float fVar1;

	func_282();
	iVar0 = func_284(func_283(), 1);
	fVar1 = func_285(iVar0, func_283(), 1);
	func_286(fVar1);
	func_287();
	func_288();
	func_289();
	func_290(Local_16.f_7);
	func_291(&(Local_1486.f_19.f_1));
	if (!func_178(1048576, -1, 1))
	{
		func_292();
		func_293();
	}
	func_294();
	func_295();
	func_296();
	func_297();
	func_298();
	func_299();
	func_300();
	func_301();
	func_302();
	func_303();
	switch (Local_1486.f_19.f_1)
	{
		case 0:
			func_304();
			break;
		case 1:
			func_305(&fVar1);
			break;
		case 2:
			func_306(&iVar0, &fVar1);
			break;
		case 3:
			func_307(&iVar0);
			break;
		case 4:
			func_308();
			break;
		case 5:
			func_309();
			break;
		case 6:
			func_310(&fVar1);
			break;
		case 7:
			func_311();
			break;
		case 8:
			func_312();
			break;
		case 9:
			func_313();
			break;
		case 10:
			func_314();
			break;
		case 11:
			func_315();
			break;
		case 12:
			func_316();
			break;
	}
}

void func_165()
{
	if (!func_128(8, 255))
	{
		func_145(16);
	}
	else
	{
		func_144(16);
	}
}

void func_166()
{
	int iVar0;

	Local_1486.f_6 = -1;
	Local_1486.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1486.f_5 = (Local_1486.f_5 || Local_77[iVar0 /*44*/]);
			Local_1486.f_6 = (Local_1486.f_6 && Local_77[iVar0 /*44*/]);
		}
		iVar0++;
	}
}

bool func_167()
{
	bool bVar0;
	float fVar1;

	func_282();
	func_294();
	func_295();
	func_296();
	if (func_317(67108864))
	{
		bVar0 = true;
	}
	else
	{
		fVar1 = func_285(PLAYER::PLAYER_PED_ID(), func_283(), 1);
		if (fVar1 < 80f)
		{
			func_318(67108864);
		}
		else
		{
			func_319(67108864);
		}
	}
	if (func_320(128) || func_320(8388608))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_320(64))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
			func_318(64);
		}
		return true;
	}
	return false;
}

void func_168()
{
	func_321();
}

void func_169(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_1486.f_179.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_1486.f_179.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_170(int iParam0, int iParam1)
{
	return func_175(Local_1486.f_179.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_171(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

void func_172(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_323(func_322(Param0));
	iVar1 = func_324(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_325(Param0, &Var2);
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

void func_173(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_326(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_327(iVar0);
}

void func_174(int iParam0, int iParam1)
{
	func_126(&(Global_1272030.f_3271[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1272030.f_3275[iParam0] = func_328(iParam0);
			break;
		case 1:
			Global_1272030.f_3275[iParam0] = func_329(iParam0);
			break;
		case 2:
			Global_1272030.f_3275[iParam0] = func_330(iParam0);
			break;
	}
}

bool func_175(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_176(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_177(int iParam0, int iParam1)
{
	if (func_331(iParam0))
	{
		return;
	}
	if (func_332(iParam0) == iParam1)
	{
		return;
	}
	if (Global_17374 >= 10)
	{
		Global_17374 = 0;
	}
	Global_17353[Global_17374 /*2*/].f_1 = iParam1;
	Global_17353[Global_17374 /*2*/] = iParam0;
	Global_17374++;
}

bool func_178(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
		{
			return false;
		}
	}
	return (Local_77[iParam1 /*44*/].f_1 && iParam0) != 0;
}

int func_179()
{
	switch (func_216())
	{
		case 0:
			return -812641169;
		case 1:
			return -554519756;
		case 2:
			return 865557632;
		case 3:
			return 1112996351;
		case 4:
			return -1608141409;
		case 5:
			return -311373772;
		case 6:
			return 61537448;
		case 7:
			return -925071604;
		case 8:
			return 1195508693;
		default:
			break;
	}
	return -1;
}

void func_180(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_333(1497516462);
			func_334(2016141805);
			func_334(1010885152);
			func_334(-502324015);
			break;
		case 2016141805:
			func_334(1497516462);
			func_333(2016141805);
			func_334(1010885152);
			func_334(-502324015);
			break;
		case 1010885152:
			func_334(1497516462);
			func_334(2016141805);
			func_333(1010885152);
			func_334(-502324015);
			break;
		case -502324015:
			func_334(1497516462);
			func_334(2016141805);
			func_334(1010885152);
			func_333(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_334(-538889627);
			func_334(-538880323);
			func_334(-1056767524);
			func_333(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_335();
			func_333(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_336();
			func_333(iParam0);
			break;
		case 2019386373:
			func_334(-664252410);
			func_334(2109952320);
			func_333(2019386373);
			break;
		case -664252410:
			func_334(2019386373);
			func_334(2109952320);
			func_333(-664252410);
			break;
		case 2109952320:
			func_334(2019386373);
			func_334(-664252410);
			func_333(2109952320);
			break;
		case -1674179981:
			func_334(-1835851517);
			func_334(-1838352012);
			func_333(-1674179981);
			break;
		case -1835851517:
			func_334(-1674179981);
			func_334(-1838352012);
			func_333(-1835851517);
			break;
		case -1838352012:
			func_334(-1674179981);
			func_334(-1835851517);
			func_333(-1838352012);
			break;
		case -1717960576:
			func_334(210001842);
			func_333(-1717960576);
			break;
		case 210001842:
			func_334(-1717960576);
			func_333(210001842);
			break;
		case -150493654:
			func_334(-1271608261);
			func_334(1846061697);
			func_334(-1145519186);
			func_333(-150493654);
			break;
		case -1271608261:
			func_334(-150493654);
			func_334(1846061697);
			func_334(-1145519186);
			func_333(-1271608261);
			break;
		case 1846061697:
			func_334(-150493654);
			func_334(-1271608261);
			func_334(-1145519186);
			func_333(1846061697);
			break;
		case -1145519186:
			func_334(-150493654);
			func_334(-1271608261);
			func_334(1846061697);
			func_333(-1145519186);
			break;
		case 1766284049:
			func_334(280705402);
			func_334(1926308480);
			func_333(1766284049);
			break;
		case 280705402:
			func_334(1766284049);
			func_334(1926308480);
			func_333(280705402);
			break;
		case 1926308480:
			func_334(1766284049);
			func_334(280705402);
			func_333(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_334(439465264);
				func_333(1609506757);
			}
			else
			{
				func_334(1609506757);
				func_334(439465264);
			}
			break;
		case 439465264:
			if (func_337(1609506757))
			{
				if (bParam1)
				{
					func_333(439465264);
				}
				else
				{
					func_334(439465264);
				}
			}
			break;
		case 1822001510:
			func_334(-1612662716);
			func_333(1822001510);
			break;
		case -1612662716:
			func_334(1822001510);
			func_333(-1612662716);
			break;
		case 1306158345:
			func_334(1952610440);
			func_334(-223469678);
			func_334(-404698347);
			func_334(1517904467);
			func_333(1306158345);
			break;
		case 1952610440:
			func_334(1306158345);
			func_334(-223469678);
			func_334(-404698347);
			func_334(1517904467);
			func_333(1952610440);
			break;
		case -223469678:
			func_334(1306158345);
			func_334(1952610440);
			func_334(-404698347);
			func_334(1517904467);
			func_333(-223469678);
			break;
		case -404698347:
			func_334(1306158345);
			func_334(1952610440);
			func_334(-223469678);
			func_334(1517904467);
			func_333(-404698347);
			break;
		case 1517904467:
			func_334(1306158345);
			func_334(1952610440);
			func_334(-223469678);
			func_334(-404698347);
			func_333(1517904467);
			break;
		case 1376646519:
			func_334(931649776);
			func_334(-434590080);
			func_334(1743048395);
			func_334(449774763);
			func_333(1376646519);
			break;
		case 931649776:
			func_334(1376646519);
			func_334(-434590080);
			func_334(1743048395);
			func_334(449774763);
			func_333(931649776);
			break;
		case -434590080:
			func_334(1376646519);
			func_334(931649776);
			func_334(1743048395);
			func_334(449774763);
			func_333(-434590080);
			break;
		case 1743048395:
			func_334(1376646519);
			func_334(931649776);
			func_334(-434590080);
			func_334(449774763);
			func_333(1743048395);
			break;
		case 449774763:
			func_334(1376646519);
			func_334(931649776);
			func_334(-434590080);
			func_334(1743048395);
			func_333(449774763);
			break;
		case -1414537028:
			func_334(38162571);
			func_334(1350391819);
			func_334(54073871);
			func_333(-1414537028);
			break;
		case 38162571:
			func_334(-1414537028);
			func_334(1350391819);
			func_334(54073871);
			func_333(38162571);
			break;
		case 1350391819:
			func_334(-1414537028);
			func_334(38162571);
			func_334(54073871);
			func_333(1350391819);
			break;
		case 54073871:
			func_334(-1414537028);
			func_334(38162571);
			func_334(1350391819);
			func_333(54073871);
			break;
		case 198200492:
			func_333(198200492);
			func_334(-1124061431);
			func_334(52706132);
			func_334(-259123672);
			break;
		case -1124061431:
			func_334(198200492);
			func_333(-1124061431);
			func_334(52706132);
			func_334(-259123672);
			break;
		case 52706132:
			func_334(198200492);
			func_334(-1124061431);
			func_333(52706132);
			func_334(-259123672);
			break;
		case -259123672:
			func_334(198200492);
			func_334(-1124061431);
			func_334(52706132);
			func_333(-259123672);
			break;
		case -919512195:
			func_333(-919512195);
			func_334(-1925798111);
			func_334(420709909);
			func_334(1703426636);
			break;
		case -1925798111:
			func_333(-1925798111);
			func_334(-919512195);
			func_334(420709909);
			func_334(1703426636);
			break;
		case 420709909:
			func_333(420709909);
			func_334(-919512195);
			func_334(-1925798111);
			func_334(1703426636);
			break;
		case 1703426636:
			func_333(1703426636);
			func_334(-919512195);
			func_334(-1925798111);
			func_334(420709909);
			break;
		case -1223121209:
			func_333(-1223121209);
			func_334(630808005);
			break;
		case 630808005:
			func_333(630808005);
			func_334(-1223121209);
			break;
		case 1453909576:
			func_333(1453909576);
			func_334(1643531967);
			break;
		case 1643531967:
			func_333(1643531967);
			func_334(1453909576);
			break;
		case 0:
			func_333(0);
			func_334(473295046);
			func_334(-1738165526);
			break;
		case 473295046:
			func_333(473295046);
			func_334(0);
			func_334(-1738165526);
			break;
		case -1738165526:
			func_333(-1738165526);
			func_334(0);
			func_334(473295046);
			break;
		case 932909855:
			func_333(932909855);
			func_334(2051822093);
			break;
		case 2051822093:
			func_333(2051822093);
			func_334(932909855);
			break;
		case 405586984:
			func_333(405586984);
			func_334(1509509592);
			func_334(-959357075);
			func_334(-1311865656);
			break;
		case 1509509592:
			func_333(1509509592);
			func_334(405586984);
			func_334(-959357075);
			func_334(-1311865656);
			break;
		case -959357075:
			func_333(-959357075);
			func_334(1509509592);
			func_334(405586984);
			func_334(-1311865656);
			break;
		case -1311865656:
			func_333(-1311865656);
			func_334(1509509592);
			func_334(-959357075);
			func_334(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_333(-524145696);
			}
			else
			{
				func_334(-524145696);
			}
			func_334(1626481264);
			func_334(282809459);
			break;
		case 282809459:
			func_333(282809459);
			func_334(1626481264);
			func_334(-524145696);
			break;
		case 1626481264:
			func_333(1626481264);
			func_334(-524145696);
			func_334(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_333(885203519);
			}
			else
			{
				func_334(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_333(-1080627546);
			}
			else
			{
				func_334(-1080627546);
			}
			break;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (bParam1)
			{
				func_333(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
			}
			else
			{
				func_334(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
				func_338(385812466);
				func_338(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_333(iParam0);
			}
			else
			{
				func_334(iParam0);
			}
			break;
	}
}

int func_181(int iParam0)
{
	if (!func_339(iParam0))
	{
		return 0;
	}
	return func_340(iParam0);
}

bool func_182(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 9)
	{
		return true;
	}
	return false;
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

	iVar0 = func_341(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_342(iParam1)) - 1);
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
			func_343(uParam0);
			break;
		case 1:
			func_343(uParam0);
			break;
		case 2:
			func_343(uParam0);
			break;
		case 3:
			func_344(uParam0);
			break;
		case 4:
			func_343(uParam0);
			break;
		case 5:
			func_343(uParam0);
			break;
		case 6:
			func_344(uParam0);
			break;
		case 7:
			func_344(uParam0);
			break;
		case 8:
			func_344(uParam0);
			break;
		case 9:
			func_343(uParam0);
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
	func_252(&(uParam0->f_25), iParam1);
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
			func_345(uParam0);
			break;
		case 1:
			func_346(uParam0);
			break;
		case 2:
			func_347(uParam0);
			break;
		case 3:
			func_348(uParam0);
			break;
		default:
			func_187(uParam0);
			func_186(uParam0);
			break;
	}
}

Vector3 func_193(int iParam0)
{
	if (!func_176(iParam0))
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
			func_349(uParam0);
			break;
		case 1:
		case 2:
			func_350(uParam0);
			break;
		case 3:
		case 4:
			func_351(uParam0);
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

	if (func_352(&Var1, iParam0) && func_353(&Var1, iParam1))
	{
		func_354(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_352(&Var1, iParam0) && func_353(&Var1, iParam1))
	{
		func_354(Var1, -1052341598, &iVar0, 0);
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
	iVar0 = func_355(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

Vector3 func_211(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_355(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

void func_212(var uParam0, var uParam1)
{
	func_356(uParam0);
	func_357(uParam0, 1);
	func_358(uParam0, 1);
	func_359(uParam1);
	func_360(uParam1);
	func_361(uParam1);
	func_362(uParam1, 1);
	func_363(uParam1, 1);
}

bool func_213(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_364(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_214(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_365(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_366(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_366(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_366(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_215()
{
	return func_367();
}

int func_216()
{
	return func_368();
}

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_219(int iParam0, int iParam1)
{
	func_217(&(Local_1486.f_179.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_220(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_221(int iParam0)
{
	int iVar0;

	if (!func_176(iParam0))
	{
		return false;
	}
	iVar0 = func_369(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_222(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_223(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_224(struct<31> Param0)
{
	var uVar0;

	func_223(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

char* func_225()
{
	return "PB_DEAD";
	return "";
}

int func_226(int iParam0, int iParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*iParam1 = 1;
		return 0;
	}
	if (!func_371(&(Local_16.f_7.f_4[iParam0]), func_259(iParam0), func_370(iParam0), 1, 0))
	{
		*iParam1 = 1;
		return 0;
	}
	return 1;
}

void func_227()
{
	func_123(2);
}

bool func_228(var uParam0)
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
	while (iVar2 < 10)
	{
		if (func_170(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_372(iVar2, uParam0, &bVar1))
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
			if (func_373(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_16.f_27[iVar2]))
					{
						NETWORK::_0x7182EDDA1EE7DB5A(Local_16.f_27[iVar2]);
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

bool func_229(int iParam0)
{
	return func_175(Local_1486.f_5, iParam0);
}

bool func_230(int iParam0)
{
	return func_175(Local_1486.f_6, iParam0);
}

bool func_231()
{
	int iVar0;

	if (Local_16.f_7 == 13)
	{
		func_374(0);
		return true;
	}
	iVar0 = func_181(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_374(2);
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && func_178(2048, -1, 1))
	{
		func_374(1);
		return true;
	}
	return false;
}

int func_232(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam3 || func_375(iVar0))
			{
				if (!bParam2 || func_376(iVar0))
				{
					if (func_377(iParam0, fParam1, iVar0, 0))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_233()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_320(2048))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1486.f_179.f_7)
	{
		if (!func_182(iVar0))
		{
		}
		else
		{
			iVar1 = func_181(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !PED::_IS_PED_HOGTIED(iVar1))
			{
				return;
			}
		}
		iVar0++;
	}
	func_319(2048);
	iVar2 = 0;
	while (iVar2 < Local_1486.f_179.f_7)
	{
		if (!func_378(iVar2))
		{
		}
		else
		{
			iVar3 = func_181(iVar2);
			if (ENTITY::IS_ENTITY_DEAD(iVar3) || !PED::_IS_PED_HOGTIED(iVar3))
			{
			}
		}
		iVar2++;
	}
}

void func_234()
{
	if (Local_16.f_7 >= 4)
	{
		return;
	}
	if (!func_379())
	{
		return;
	}
	func_380(4);
}

void func_235()
{
	if (!func_381(64))
	{
		return;
	}
	if (func_320(4194304))
	{
		return;
	}
	func_382(64);
}

void func_236()
{
	int iVar0;

	if (!func_317(2048))
	{
		return;
	}
	if (func_381(256))
	{
		return;
	}
	if (!func_381(2))
	{
		func_383(&(Local_16.f_7.f_6[2]));
		func_382(2);
		return;
	}
	if (!func_237(Local_16.f_7.f_6[2]))
	{
		func_383(&(Local_16.f_7.f_6[2]));
		func_384(2);
	}
	iVar0 = func_385(Local_16.f_7.f_6[2]);
	if (iVar0 > 4000)
	{
		func_386(&(Local_16.f_7.f_6[2]));
		func_382(256);
	}
}

bool func_237(int iParam0)
{
	return iParam0 != 0;
}

void func_238()
{
	if (!func_317(1))
	{
		return;
	}
	func_380(1);
}

void func_239()
{
	if (!func_317(2))
	{
		return;
	}
	func_380(2);
}

void func_240()
{
	if (!func_317(8))
	{
		return;
	}
	func_380(3);
}

void func_241()
{
	if (!func_317(32))
	{
		return;
	}
	func_387(0);
}

void func_242()
{
	if (!func_317(1024))
	{
		return;
	}
	func_383(&(Local_16.f_7.f_6[1]));
	func_380(5);
}

void func_243()
{
	if (!func_317(16384))
	{
		return;
	}
	func_388(2);
	func_380(6);
}

void func_244()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_389();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
	{
		return;
	}
	iVar2 = iVar1;
	switch (Local_77[iVar2 /*44*/].f_1.f_2)
	{
		case 1:
			break;
		case 2:
			func_380(7);
			func_388(1);
			return;
	}
}

void func_245()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!func_381(32))
	{
		Local_16.f_7.f_17 = func_389();
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_7.f_17))
		{
			return;
		}
		iVar0 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
		iVar1 = func_181(0);
		WEAPON::_0x4820A6939D7CEF28(iVar0, 0);
		WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, false);
		iVar2 = func_390(iVar1, iVar0, 1060437492 /* Float: 0.707f */);
		if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
		{
			bVar3 = true;
			func_382(128);
		}
		switch (iVar2)
		{
			case 0:
			case 1:
			case 2:
				if (!bVar3)
				{
					if (PED::IS_PED_MALE(iVar0))
					{
						Local_16.f_7.f_15 = 1;
					}
					else
					{
						Local_16.f_7.f_15 = 2;
					}
				}
				else
				{
					Local_16.f_7.f_15 = 3;
				}
				break;
			case 3:
				if (!bVar3)
				{
					if (PED::IS_PED_MALE(iVar0))
					{
						Local_16.f_7.f_15 = 4;
					}
					else
					{
						Local_16.f_7.f_15 = 5;
					}
				}
				else
				{
					Local_16.f_7.f_15 = 6;
				}
				break;
			default:
				if (!bVar3)
				{
					if (PED::IS_PED_MALE(iVar0))
					{
						Local_16.f_7.f_15 = 1;
					}
					else
					{
						Local_16.f_7.f_15 = 2;
					}
				}
				else
				{
					Local_16.f_7.f_15 = 3;
				}
				break;
		}
		func_382(32);
		return;
	}
	if (!func_317(32768))
	{
		return;
	}
	func_380(8);
}

void func_246()
{
	if (!func_317(65536))
	{
		return;
	}
	func_380(9);
}

void func_247()
{
	if (!func_317(131072))
	{
		return;
	}
	func_380(10);
}

void func_248()
{
	if (!func_317(262144))
	{
		return;
	}
	func_380(11);
}

void func_249()
{
	if (!func_317(524288))
	{
		return;
	}
	func_383(&(Local_16.f_7.f_6[4]));
	func_380(12);
}

void func_250()
{
	if (!func_317(1048576))
	{
		return;
	}
	if (!func_320(128))
	{
		return;
	}
	func_380(13);
}

int func_251(int iParam0)
{
	if (!func_176(iParam0))
	{
		return 0;
	}
	if (!func_221(iParam0))
	{
		return 0;
	}
	return Global_1131196[iParam0 /*27*/].f_18.f_1;
}

void func_252(var uParam0, int iParam1)
{
	func_391(uParam0, iParam1);
}

void func_253(var uParam0, int iParam1)
{
	func_392(uParam0, iParam1);
}

void func_254(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_393(&Var0, iParam0))
			{
				func_394(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_255(int iParam0)
{
}

void func_256(int iParam0)
{
}

int func_257(int iParam0)
{
	return iParam0;
}

void func_258(int iParam0)
{
	int iVar0;

	if (func_395(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_396(iParam0, func_257(iVar0)))
			{
				if (!func_397(iParam0, func_257(iVar0)))
				{
					if (func_398(iParam0, iVar0))
					{
						func_399(Local_1486.f_582.f_23[iVar0], 0, 0);
						func_400(iParam0, func_257(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_CS_ROPEHANDSSPLIT");
		default:
			break;
	}
	return 0;
}

bool func_260(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

char* func_261()
{
	return "script@beat@wilderness@tied_up_ped@Help";
	return "";
}

char* func_262()
{
	return "PB_HELP";
	return "";
}

void func_263(int iParam0)
{
	if (Local_1486.f_19 == iParam0)
	{
		return;
	}
	Local_1486.f_19 = iParam0;
}

bool func_264()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(Local_1486.f_179.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_401(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_1486.f_179.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1486.f_179.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					MISC::SET_BIT(&(Local_1486.f_179.f_3), iVar0);
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

void func_265(struct<2> Param0)
{
	if (func_324(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_324(Param0)))
	{
		STATS::_0x99230691875FC218(func_322(Param0), func_324(Param0), Global_35);
	}
}

void func_266()
{
	int iVar0;
	int iVar1;

	if (!func_213(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_402(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_267()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 9)
	{
		iVar1 = func_181(iVar0);
		if (func_403(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar1, 317, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 277, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 6, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 494, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 148, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 26, true);
					PED::_0xAE6004120C18DF97(iVar1, 0, 0);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
					break;
				case 1:
					func_404(1, joaat("WEAPON_REPEATER_CARBINE"));
					break;
				case 2:
					func_404(2, joaat("WEAPON_REPEATER_CARBINE"));
					break;
				case 3:
					func_404(3, joaat("WEAPON_REVOLVER_CATTLEMAN"));
					break;
				case 4:
					func_404(4, joaat("WEAPON_REVOLVER_CATTLEMAN"));
					break;
				case 5:
					func_404(5, joaat("WEAPON_REPEATER_CARBINE"));
					break;
				case 6:
					func_404(6, joaat("WEAPON_REPEATER_CARBINE"));
					break;
			}
		}
		iVar0++;
	}
}

void func_268()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_7.f_4[iVar0]))
		{
		}
		else
		{
			Local_1486.f_19.f_5[iVar0 /*2*/].f_1 = NETWORK::NET_TO_OBJ(Local_16.f_7.f_4[iVar0]);
			iVar1 = func_405(iVar0);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_269()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_7.f_14))
		{
			Local_1486.f_19.f_142 = NETWORK::_NET_TO_ANIM_SCENE(Local_16.f_7.f_14);
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1486.f_19.f_142))
			{
			}
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_16.f_7.f_14))
	{
		func_406();
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1486.f_19.f_142, func_407(), 0f, 0f, func_408(), 2);
		ANIMSCENE::START_ANIM_SCENE(Local_1486.f_19.f_142);
	}
}

void func_270(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			if (!func_41())
			{
				if (func_337(joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK")))
				{
					func_409(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0);
					func_410(joaat("DOOR_BLA_JAIL_INT_1"), 0, 0);
					OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(joaat("DOOR_BLA_JAIL_INT_1"), 2f);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(joaat("DOOR_BLA_JAIL_INT_1"), 1f, false);
				}
				else if (func_337(joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK")))
				{
					func_409(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0);
					func_410(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(joaat("DOOR_BLA_JAIL_INT_1"), 0f, true);
					OBJECT::_0x7F458B543006C8FE(joaat("DOOR_BLA_JAIL_INT_1"), 16);
				}
				else
				{
					func_338(joaat("DOOR_BLA_JAIL_INT_1"));
				}
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			if (!func_41())
			{
				if (func_337(joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK")))
				{
					func_409(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0);
					func_410(joaat("DOOR_NEW_POLICE_CELL01"), 0, 0);
					OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(joaat("DOOR_NEW_POLICE_CELL01"), 2f);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(joaat("DOOR_NEW_POLICE_CELL01"), 1f, false);
				}
				else if (func_337(joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK")))
				{
					func_409(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0);
					func_410(joaat("DOOR_NEW_POLICE_CELL01"), 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(joaat("DOOR_NEW_POLICE_CELL01"), 0f, true);
					OBJECT::_0x7F458B543006C8FE(joaat("DOOR_NEW_POLICE_CELL01"), 16);
				}
				else
				{
					func_338(joaat("DOOR_NEW_POLICE_CELL01"));
				}
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			if (!func_41())
			{
				if (func_337(joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK")))
				{
					func_409(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0);
					func_410(joaat("DOOR_STR_JAILPOST_INT_1"), 0, 0);
					OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(joaat("DOOR_STR_JAILPOST_INT_1"), 2f);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(joaat("DOOR_STR_JAILPOST_INT_1"), 1f, false);
				}
				else if (func_337(joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK")))
				{
					func_409(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0);
					func_410(joaat("DOOR_STR_JAILPOST_INT_1"), 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(joaat("DOOR_STR_JAILPOST_INT_1"), 0f, true);
					OBJECT::_0x7F458B543006C8FE(joaat("DOOR_STR_JAILPOST_INT_1"), 16);
				}
				else
				{
					func_338(joaat("DOOR_STR_JAILPOST_INT_1"));
				}
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			if (!func_41())
			{
				if (func_337(joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK")))
				{
					func_409(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0);
					func_410(joaat("DOOR_VAL_JAIL_CELL_03"), 0, 0);
					OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(joaat("DOOR_VAL_JAIL_CELL_03"), 2f);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(joaat("DOOR_VAL_JAIL_CELL_03"), 1f, false);
				}
				else if (func_337(joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK")))
				{
					func_409(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0);
					func_410(joaat("DOOR_VAL_JAIL_CELL_03"), 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(joaat("DOOR_VAL_JAIL_CELL_03"), 0f, true);
					OBJECT::_0x7F458B543006C8FE(joaat("DOOR_VAL_JAIL_CELL_03"), 16);
				}
				else
				{
					func_338(joaat("DOOR_VAL_JAIL_CELL_03"));
				}
			}
			break;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (!func_41())
			{
				if (func_337(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN")))
				{
					func_410(385812466, 0, 0);
					func_410(-1201452352, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(385812466, 1f, true);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1201452352, -1f, true);
				}
				else if (func_337(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK")))
				{
					func_410(385812466, 0, 0);
					func_410(-1201452352, 0, 0);
				}
				else
				{
					func_410(385812466, 1, 0);
					func_410(-1201452352, 1, 0);
				}
			}
			break;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			if (func_337(joaat("WS_MP_HIDEOUT_LAKAY")))
			{
				func_411(joaat("MP001_MP_HID_LAKAY"));
				func_411(1423912753);
				func_412("nav_lakay_mp");
				func_413("MS_HIDOUT_LAKAY");
				func_414(joaat("MP001_MP_HID_LAKAY"));
			}
			else
			{
				func_415(joaat("MP001_MP_HID_LAKAY"));
				func_411(1423912753);
				func_412("MS_HIDOUT_LAKAY");
				func_413("nav_lakay_mp");
				func_416(joaat("MP001_MP_HID_LAKAY"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			if (func_337(joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW")))
			{
				func_411(joaat("MP001_MP_HID_BEAVERHOLLOW"));
				func_413("MS_HIDOUT_BEAVERHOLLOW");
				func_414(joaat("MP001_MP_HID_BEAVERHOLLOW"));
			}
			else
			{
				func_415(joaat("MP001_MP_HID_BEAVERHOLLOW"));
				func_412("MS_HIDOUT_BEAVERHOLLOW");
				func_416(joaat("MP001_MP_HID_BEAVERHOLLOW"));
			}
			break;
		case -460024530:
			if (func_337(-460024530))
			{
				func_411(1092530042);
				func_413("MS_HIDOUT_MILLESANICLAIM");
			}
			else
			{
				func_415(1092530042);
				func_412("MS_HIDOUT_MILLESANICLAIM");
			}
			break;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			if (func_337(joaat("WS_MP_HIDEOUT_FARMHOUSE")))
			{
				func_411(joaat("MP001_MP_HID_FARMHOUSE"));
				func_413("MS_HIDOUT_FARMHOUSE");
				func_414(joaat("MP001_MP_HID_FARMHOUSE"));
			}
			else
			{
				func_415(joaat("MP001_MP_HID_FARMHOUSE"));
				func_412("MS_HIDOUT_FARMHOUSE");
				func_416(joaat("MP001_MP_HID_FARMHOUSE"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			if (func_337(joaat("WS_MP_HIDEOUT_ROCKY_SEVEN")))
			{
				func_411(joaat("MP001_MP_HID_ROCKY_SEVEN"));
				func_413("MS_HIDOUT_ROCKYSEVEN");
				func_414(joaat("MP001_MP_HID_ROCKY_SEVEN"));
				if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1939655.f_21))
				{
					Global_1939655.f_21 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2986.267f, 2204.891f, 165.9559f, 2.793124f, 2.804754f, 2.088651f, 120f, false, 7);
				}
			}
			else
			{
				func_415(joaat("MP001_MP_HID_ROCKY_SEVEN"));
				func_412("MS_HIDOUT_ROCKYSEVEN");
				func_416(joaat("MP001_MP_HID_ROCKY_SEVEN"));
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1939655.f_21))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1939655.f_21));
				}
			}
			break;
		case 1698972798:
			if (func_337(1698972798))
			{
				func_411(joaat("MP001_MP_HID_MOSSYFLATS"));
				func_413("MS_HIDOUT_MOSSYFLATS");
				func_414(joaat("MP001_MP_HID_MOSSYFLATS"));
			}
			else
			{
				func_415(joaat("MP001_MP_HID_MOSSYFLATS"));
				func_412("MS_HIDOUT_MOSSYFLATS");
				func_416(joaat("MP001_MP_HID_MOSSYFLATS"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			if (func_337(joaat("WS_MP_HIDEOUT_QUAKERS_COVE")))
			{
				func_411(-1974746920);
				func_413("MS_HIDOUT_QUAKERSCOVE");
				func_414(joaat("MP001_MP_HID_QUAKERS_COVE"));
			}
			else
			{
				func_415(-1974746920);
				func_412("MS_HIDOUT_QUAKERSCOVE");
				func_416(joaat("MP001_MP_HID_QUAKERS_COVE"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			if (func_337(joaat("WS_MP_HIDEOUT_THE_LOFT")))
			{
				func_411(1171226610);
				func_413("MS_HIDOUT_THELOFT");
				func_414(joaat("MP001_MP_HID_THE_LOFT"));
			}
			else
			{
				func_415(1171226610);
				func_412("MS_HIDOUT_THELOFT");
				func_416(joaat("MP001_MP_HID_THE_LOFT"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			if (func_337(joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS")))
			{
				func_411(406701199);
				func_413("MS_HIDOUT_CUMBERLANDFALLS");
				func_414(joaat("MP001_MP_HID_CUMBERLANDFALLS"));
			}
			else
			{
				func_415(406701199);
				func_412("MS_HIDOUT_CUMBERLANDFALLS");
				func_416(joaat("MP001_MP_HID_CUMBERLANDFALLS"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			if (func_337(joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS")))
			{
				func_411(-1151968796);
				func_413("MS_HIDOUT_STILLWATERSTRANDS");
				func_414(joaat("MP001_MP_HID_SILTWATERSTRAND"));
			}
			else
			{
				func_415(-1151968796);
				func_412("MS_HIDOUT_STILLWATERSTRANDS");
				func_416(joaat("MP001_MP_HID_SILTWATERSTRAND"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			if (func_337(joaat("WS_MP_HIDEOUT_COLTER")))
			{
				func_411(1975720265);
				func_413("MS_HIDOUT_COLTER");
			}
			else
			{
				func_415(1975720265);
				func_412("MS_HIDOUT_COLTER");
			}
			break;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			if (func_337(joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION")))
			{
				func_411(508578717);
				func_413("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			else
			{
				func_415(508578717);
				func_412("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			break;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			if (func_337(joaat("WS_MP_HIDEOUT_CLEMENS_COVE")))
			{
				func_411(-848533860);
				func_413("MS_HIDOUT_CLEMENSCOVE");
			}
			else
			{
				if (STREAMING::_IS_IMAP_ACTIVE(-848533860))
				{
					func_417(791.0508f, -1244.354f, 41.5894f, 25f, 0, 0, 0, 0, 0);
				}
				func_415(-848533860);
				func_412("MS_HIDOUT_CLEMENSCOVE");
			}
			break;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			if (func_337(joaat("WS_MP_HIDEOUT_TALL_TREES")))
			{
				func_411(joaat("MP001_MP_HID_TALLTREES"));
				func_413("MS_HIDOUT_TALLTREES");
				func_414(joaat("MP001_MP_HID_TALLTREES"));
			}
			else
			{
				func_415(joaat("MP001_MP_HID_TALLTREES"));
				func_412("MS_HIDOUT_TALLTREES");
				func_416(joaat("MP001_MP_HID_TALLTREES"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			if (func_337(joaat("WS_MP_HIDEOUT_SHIP_ROCK")))
			{
				func_411(-522767301);
				func_413("MS_HIDOUT_SHIPROCK");
				func_414(joaat("MP001_MP_HID_SHIP_ROCK"));
			}
			else
			{
				func_415(-522767301);
				func_412("MS_HIDOUT_SHIPROCK");
				func_416(joaat("MP001_MP_HID_SHIP_ROCK"));
			}
			break;
		case 1881028477:
			if (func_337(1881028477))
			{
				func_411(-2103414139);
				func_413("MS_HIDOUT_CAMP_BACCHUS");
			}
			else
			{
				func_415(-2103414139);
				func_412("MS_HIDOUT_CAMP_BACCHUS");
			}
			break;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			if (func_337(joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY")))
			{
				func_411(771896020);
				func_413("MS_HIDOUT_SOLOMONSFOLLY");
				func_414(joaat("MP001_MP_HID_SOLOMONS"));
			}
			else
			{
				func_415(771896020);
				func_412("MS_HIDOUT_SOLOMONSFOLLY");
				func_416(joaat("MP001_MP_HID_SOLOMONS"));
			}
			break;
		case -1209597203:
			if (func_337(-1209597203))
			{
				func_411(895825612);
				func_413("MS_HIDOUT_TWINROCKS");
				func_414(joaat("MP001_MP_HID_TWIN_ROCKS"));
			}
			else
			{
				func_415(895825612);
				func_412("MS_HIDOUT_TWINROCKS");
				func_416(joaat("MP001_MP_HID_TWIN_ROCKS"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			if (func_337(joaat("WS_MP_HIDEOUT_CUERA_SECO")))
			{
				func_411(1256749990);
				func_413("MS_HIDOUT_CUERASECO");
				func_414(joaat("MP001_MP_HID_CUERASECO"));
			}
			else
			{
				func_415(1256749990);
				func_412("MS_HIDOUT_CUERASECO");
				func_416(joaat("MP001_MP_HID_CUERASECO"));
			}
			break;
		case 929582877:
			if (func_337(929582877))
			{
				func_411(joaat("MP001_MIN_HID_MANTECAFALLS"));
				func_413("MS_HIDOUT_MANTECAFALLS");
				func_414(joaat("MP001_MIN_HID_MANTECAFALLS"));
			}
			else
			{
				func_415(joaat("MP001_MIN_HID_MANTECAFALLS"));
				func_412("MS_HIDOUT_MANTECAFALLS");
				func_416(joaat("MP001_MIN_HID_MANTECAFALLS"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			if (func_337(joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW")))
			{
				func_411(joaat("MP001_MIN_HID_RATTLESNAKEHOLLOW"));
				func_413("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_414(joaat("MP001_MIN_HID_RATTLESNAKEHOLLOW"));
			}
			else
			{
				func_415(joaat("MP001_MIN_HID_RATTLESNAKEHOLLOW"));
				func_412("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_416(joaat("MP001_MIN_HID_RATTLESNAKEHOLLOW"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			if (func_337(joaat("WS_MP_HIDEOUT_REPENTANCE")))
			{
				func_411(joaat("MP001_MIN_HID_REPENTANCE"));
				func_413("MS_HIDOUT_REPENTANCE");
				func_414(joaat("MP001_MIN_HID_REPENTANCE"));
			}
			else
			{
				func_415(joaat("MP001_MIN_HID_REPENTANCE"));
				func_412("MS_HIDOUT_REPENTANCE");
				func_416(joaat("MP001_MIN_HID_REPENTANCE"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			if (func_337(joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO")))
			{
				func_411(967935536);
				func_413("MS_HIDOUT_SEAOFCORONADO");
				func_414(joaat("MP001_MP_HID_CORONADO"));
			}
			else
			{
				func_415(967935536);
				func_412("MS_HIDOUT_SEAOFCORONADO");
				func_416(joaat("MP001_MP_HID_CORONADO"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			if (func_337(joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS")))
			{
				func_411(-773956478);
				func_413("MS_HIDOUT_CHOLLASPRINGS");
			}
			else
			{
				func_415(-773956478);
				func_412("MS_HIDOUT_CHOLLASPRINGS");
			}
			break;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			if (func_337(joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE")))
			{
				func_411(-1615749463);
				func_413("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			else
			{
				func_415(-1615749463);
				func_412("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			break;
		case -396624371:
			if (func_337(-396624371))
			{
				func_411(-361709910);
				func_413("MS_HIDOUT_CAMP_CHOLLA");
				func_414(joaat("MP001_MP_HID_CHOLLASPRINGS"));
			}
			else
			{
				func_415(-361709910);
				func_412("MS_HIDOUT_CAMP_CHOLLA");
				func_416(joaat("MP001_MP_HID_CHOLLASPRINGS"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			if (func_337(joaat("WS_MP_HIDEOUT_CAMP_PIKES")))
			{
				func_411(-1323334072);
				func_413("MS_HIDOUT_CAMP_PIKES");
				func_414(joaat("MP001_MP_HID_PIKESBASIN"));
			}
			else
			{
				func_415(-1323334072);
				func_412("MS_HIDOUT_CAMP_PIKES");
				func_416(joaat("MP001_MP_HID_PIKESBASIN"));
			}
			break;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			if (func_337(joaat("WS_MP_HIDEOUT_GAPTOOTH")))
			{
				func_411(joaat("MP001_MIN_HID_GAPTOOTH"));
				func_413("MS_HIDOUT_GAPTOOTH");
				func_414(joaat("MP001_MIN_HID_GAPTOOTH"));
			}
			else
			{
				func_415(joaat("MP001_MIN_HID_GAPTOOTH"));
				func_412("MS_HIDOUT_GAPTOOTH");
				func_416(joaat("MP001_MIN_HID_GAPTOOTH"));
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			if (func_337(joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES")))
			{
				func_411(joaat("MP001_MP_JESSICACAMP_RHODES"));
				func_413("mp_intro_jessica_camp_rhodes");
				func_414(joaat("MP001_MP_JESSICACAMP_RHODES"));
			}
			else
			{
				func_415(joaat("MP001_MP_JESSICACAMP_RHODES"));
				func_412("mp_intro_jessica_camp_rhodes");
				func_416(joaat("MP001_MP_JESSICACAMP_RHODES"));
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			if (func_337(joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE")))
			{
				func_411(joaat("MP001_MP_JESSICACAMP_VAL"));
				func_413("mp_intro_jessica_camp_valentine");
				func_414(joaat("MP001_MP_JESSICACAMP_VAL"));
			}
			else
			{
				func_415(joaat("MP001_MP_JESSICACAMP_VAL"));
				func_412("mp_intro_jessica_camp_valentine");
				func_416(joaat("MP001_MP_JESSICACAMP_VAL"));
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			if (func_337(joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER")))
			{
				func_411(joaat("MP001_MP_JESSICACAMP_BLACKWATER"));
				func_413("mp_intro_jessica_camp_blackwater");
				func_414(joaat("MP001_MP_JESSICACAMP_BLACKWATER"));
			}
			else
			{
				func_415(joaat("MP001_MP_JESSICACAMP_BLACKWATER"));
				func_412("mp_intro_jessica_camp_blackwater");
				func_416(joaat("MP001_MP_JESSICACAMP_BLACKWATER"));
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			if (func_337(joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED")))
			{
				func_411(joaat("MP001_MP_JESSICACAMP_TUMBLEWEED"));
				func_413("mp_intro_jessica_camp_tumbleweed");
				func_414(joaat("MP001_MP_JESSICACAMP_TUMBLEWEED"));
			}
			else
			{
				func_415(joaat("MP001_MP_JESSICACAMP_TUMBLEWEED"));
				func_412("mp_intro_jessica_camp_tumbleweed");
				func_416(joaat("MP001_MP_JESSICACAMP_TUMBLEWEED"));
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			if (func_337(joaat("WS_MP_INTRO_HIDEOUT_RHODES")))
			{
				func_411(joaat("MP001_MP_INTRO_GANG_RHODES4"));
				func_413("mp_intro_hideout_rhodes");
				func_414(joaat("MP001_MP_INTRO_GANG_RHODES4"));
			}
			else
			{
				func_415(joaat("MP001_MP_INTRO_GANG_RHODES4"));
				func_412("mp_intro_hideout_rhodes");
				func_416(joaat("MP001_MP_INTRO_GANG_RHODES4"));
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			if (func_337(joaat("WS_MP_INTRO_HIDEOUT_VALENTINE")))
			{
				func_411(joaat("MP001_MP_INTRO_GANG_VALENTINE2"));
				func_413("mp_intro_hideout_valentine");
				func_414(joaat("MP001_MP_INTRO_GANG_VALENTINE2"));
			}
			else
			{
				func_415(joaat("MP001_MP_INTRO_GANG_VALENTINE2"));
				func_412("mp_intro_hideout_valentine");
				func_416(joaat("MP001_MP_INTRO_GANG_VALENTINE2"));
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			if (func_337(joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER")))
			{
				func_411(joaat("MP001_MP_INTRO_GANG_BLACKWATER3"));
				func_413("mp_intro_hideout_blackwater");
				func_414(joaat("MP001_MP_INTRO_GANG_BLACKWATER3"));
			}
			else
			{
				func_415(joaat("MP001_MP_INTRO_GANG_BLACKWATER3"));
				func_412("mp_intro_hideout_blackwater");
				func_416(joaat("MP001_MP_INTRO_GANG_BLACKWATER3"));
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			if (func_337(joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED")))
			{
				func_411(joaat("MP001_MP_INTRO_GANG_TUMBLEWEED1"));
				func_413("mp_intro_hideout_tumbleweed");
				func_414(joaat("MP001_MP_INTRO_GANG_TUMBLEWEED1"));
			}
			else
			{
				func_415(joaat("MP001_MP_INTRO_GANG_TUMBLEWEED1"));
				func_412("mp_intro_hideout_tumbleweed");
				func_416(joaat("MP001_MP_INTRO_GANG_TUMBLEWEED1"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP")))
			{
				func_411(joaat("MP004_CAMPDEF_HRT_HILLTOP"));
				func_413("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_414(joaat("MP004_CAMPDEF_HRT_HILLTOP"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_HRT_HILLTOP"));
				func_412("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_416(joaat("MP004_CAMPDEF_HRT_HILLTOP"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE")))
			{
				func_411(joaat("MP004_CAMPDEF_HEARTLANDS"));
				func_413("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_414(joaat("MP004_CAMPDEF_HEARTLANDS"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_HEARTLANDS"));
				func_412("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_416(joaat("MP004_CAMPDEF_HEARTLANDS"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE")))
			{
				func_411(476687617);
				func_413("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_414(476687617);
			}
			else
			{
				func_415(476687617);
				func_412("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_416(476687617);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE")))
			{
				func_411(joaat("MP004_CAMPDEF_GRT_PLAINS"));
				func_413("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_414(joaat("MP004_CAMPDEF_GRT_PLAINS"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_GRT_PLAINS"));
				func_412("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_416(joaat("MP004_CAMPDEF_GRT_PLAINS"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE")))
			{
				func_411(568096966);
				func_413("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_414(568096966);
			}
			else
			{
				func_415(568096966);
				func_412("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_416(568096966);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS")))
			{
				func_411(joaat("MP004_CAMPDEF_BGV_TWO_ROCKS"));
				func_413("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_414(joaat("MP004_CAMPDEF_BGV_TWO_ROCKS"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_BGV_TWO_ROCKS"));
				func_412("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_416(joaat("MP004_CAMPDEF_BGV_TWO_ROCKS"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE")))
			{
				func_411(joaat("MP004_CAMPDEF_GAP_RIDGE"));
				func_413("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_414(joaat("MP004_CAMPDEF_GAP_RIDGE"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_GAP_RIDGE"));
				func_412("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_416(joaat("MP004_CAMPDEF_GAP_RIDGE"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH")))
			{
				func_411(joaat("MP004_CAMPDEF_GAP_BREACH"));
				func_413("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_414(joaat("MP004_CAMPDEF_GAP_BREACH"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_GAP_BREACH"));
				func_412("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_416(joaat("MP004_CAMPDEF_GAP_BREACH"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS")))
			{
				func_411(-1207218596);
				func_413("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_414(-1207218596);
			}
			else
			{
				func_415(-1207218596);
				func_412("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_416(-1207218596);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO")))
			{
				func_411(-116967529);
				func_413("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_414(-116967529);
			}
			else
			{
				func_415(-116967529);
				func_412("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_416(-116967529);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK")))
			{
				func_412("pro_empty_nav_tu003");
				func_411(joaat("MP004_CAMPDEF_LITTLE_CREEK"));
				func_413("WS_MP_CAMP_DEFEND_LITTLE_CREEK_AND_PRONGHORN");
				func_414(joaat("MP004_CAMPDEF_LITTLE_CREEK"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_LITTLE_CREEK"));
				func_412("WS_MP_CAMP_DEFEND_LITTLE_CREEK");
				func_413("pro_empty_nav_tu003");
				func_416(joaat("MP004_CAMPDEF_LITTLE_CREEK"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE")))
			{
				func_411(joaat("MP004_CAMPDEF_RADLEYS"));
				func_413("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_414(joaat("MP004_CAMPDEF_RADLEYS"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_RADLEYS"));
				func_412("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_416(joaat("MP004_CAMPDEF_RADLEYS"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD")))
			{
				func_411(joaat("MP004_CAMPDEF_HENNIGANS"));
				func_413("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_414(joaat("MP004_CAMPDEF_HENNIGANS"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_HENNIGANS"));
				func_412("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_416(joaat("MP004_CAMPDEF_HENNIGANS"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_TALL_TREES")))
			{
				func_411(18369533);
				func_413("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_414(18369533);
			}
			else
			{
				func_415(18369533);
				func_412("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_416(18369533);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER")))
			{
				func_411(joaat("MP004_CAMPDEF_NEW_HANOVER"));
				func_413("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_414(joaat("MP004_CAMPDEF_NEW_HANOVER"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_NEW_HANOVER"));
				func_412("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_416(joaat("MP004_CAMPDEF_NEW_HANOVER"));
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			if (func_337(joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH")))
			{
				func_411(joaat("MP004_CAMPDEF_BLUEWATER"));
				func_413("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_414(joaat("MP004_CAMPDEF_BLUEWATER"));
			}
			else
			{
				func_415(joaat("MP004_CAMPDEF_BLUEWATER"));
				func_412("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_416(joaat("MP004_CAMPDEF_BLUEWATER"));
			}
			break;
		case 526003171:
			if (func_337(526003171))
			{
				func_411(-2074957003);
				func_413("MS_OTH_MAC");
			}
			else
			{
				func_415(-2074957003);
				func_412("MS_OTH_MAC");
			}
			break;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			if (func_337(joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE")))
			{
				func_411(-1226747327);
				func_411(-141795616);
				func_413("MS_OTH_SHEPHERDS_RISE");
			}
			else
			{
				func_415(-1226747327);
				func_415(-141795616);
				func_412("MS_OTH_SHEPHERDS_RISE");
			}
			break;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			if (func_337(joaat("WS_MP_FETCH_OTH_TALL_TREES")))
			{
				func_411(joaat("MP001_REG_BGV0_MP_THEHUNT_CLUE01"));
				func_413("MS_OTH_TALL_TREES");
			}
			else
			{
				func_415(joaat("MP001_REG_BGV0_MP_THEHUNT_CLUE01"));
				func_412("MS_OTH_TALL_TREES");
			}
			break;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			if (func_337(joaat("WS_MP_FETCH_OTH_CASTORS")))
			{
				func_411(joaat("DIS_HRT_ANIMALDIG"));
				func_413("MS_OTH_CASTORS");
			}
			else
			{
				func_415(joaat("DIS_HRT_ANIMALDIG"));
				func_412("MS_OTH_CASTORS");
			}
			break;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			if (func_337(joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP")))
			{
				func_411(1883767827);
				func_413("MS_AS_TRK_LAKE_ISABELLA");
			}
			else
			{
				func_415(1883767827);
				func_412("MS_AS_TRK_LAKE_ISABELLA");
			}
			break;
		case -812641169:
			if (func_337(-812641169))
			{
				func_411(joaat("GANG_LEMOYNE_SCM003"));
				func_413("gcexc_nav_scm_003");
				func_414(joaat("MP_GANG_LEMOYNE_SCM003"));
			}
			else
			{
				func_415(joaat("GANG_LEMOYNE_SCM003"));
				func_412("gcexc_nav_scm_003");
				func_416(joaat("MP_GANG_LEMOYNE_SCM003"));
			}
			break;
		case -554519756:
			if (func_337(-554519756))
			{
				func_411(joaat("GANG_LEMOYNE_SCM005"));
				func_413("gcexc_nav_scm_005");
				func_414(joaat("MP_GANG_LEMOYNE_SCM005"));
			}
			else
			{
				func_415(joaat("GANG_LEMOYNE_SCM005"));
				func_412("gcexc_nav_scm_005");
				func_416(joaat("MP_GANG_LEMOYNE_SCM005"));
			}
			break;
		case 865557632:
			if (func_337(865557632))
			{
				func_411(joaat("GANG_LEMOYNE_SCM006"));
				func_413("gcexc_nav_scm_006");
				func_414(joaat("MP_GANG_LEMOYNE_SCM006"));
			}
			else
			{
				func_415(joaat("GANG_LEMOYNE_SCM006"));
				func_412("gcexc_nav_scm_006");
				func_416(joaat("MP_GANG_LEMOYNE_SCM006"));
			}
			break;
		case 1112996351:
			if (func_337(1112996351))
			{
				func_411(joaat("GANG_LEMOYNE_SCM007"));
				func_413("gcexc_nav_scm_007");
				func_414(joaat("MP_GANG_LEMOYNE_SCM007"));
			}
			else
			{
				func_415(joaat("GANG_LEMOYNE_SCM007"));
				func_412("gcexc_nav_scm_007");
				func_416(joaat("MP_GANG_LEMOYNE_SCM007"));
			}
			break;
		case -1608141409:
			if (func_337(-1608141409))
			{
				func_411(joaat("GANG_LEMOYNE_SCM010"));
				func_413("gcexc_nav_scm_010");
				func_414(joaat("MP_GANG_LEMOYNE_SCM010"));
			}
			else
			{
				func_415(joaat("GANG_LEMOYNE_SCM010"));
				func_412("gcexc_nav_scm_010");
				func_416(joaat("MP_GANG_LEMOYNE_SCM010"));
			}
			break;
		case -311373772:
			if (func_337(-311373772))
			{
				func_411(joaat("GANG_LEMOYNE_SCM013"));
				func_413("gcexc_nav_scm_013");
				func_414(joaat("MP_GANG_LEMOYNE_SCM013"));
			}
			else
			{
				func_415(joaat("GANG_LEMOYNE_SCM013"));
				func_412("gcexc_nav_scm_013");
				func_416(joaat("MP_GANG_LEMOYNE_SCM013"));
			}
			break;
		case 61537448:
			if (func_337(61537448))
			{
				func_411(joaat("GANG_LEMOYNE_SCM015"));
				func_413("gcexc_nav_scm_015");
				func_414(joaat("MP_GANG_LEMOYNE_SCM015"));
			}
			else
			{
				func_415(joaat("GANG_LEMOYNE_SCM015"));
				func_412("gcexc_nav_scm_015");
				func_416(joaat("MP_GANG_LEMOYNE_SCM015"));
			}
			break;
		case -925071604:
			if (func_337(-925071604))
			{
				func_411(joaat("GANG_LEMOYNE_SCM017"));
				func_413("gcexc_nav_scm_017");
				func_414(joaat("MP_GANG_LEMOYNE_SCM017"));
			}
			else
			{
				func_415(joaat("GANG_LEMOYNE_SCM017"));
				func_412("gcexc_nav_scm_017");
				func_416(joaat("MP_GANG_LEMOYNE_SCM017"));
			}
			break;
		case 1195508693:
			if (func_337(1195508693))
			{
				func_411(joaat("GANG_LEMOYNE_SCM019"));
				func_413("gcexc_nav_scm_019");
				func_414(joaat("MP_GANG_LEMOYNE_SCM019"));
			}
			else
			{
				func_415(joaat("GANG_LEMOYNE_SCM019"));
				func_412("gcexc_nav_scm_019");
				func_416(joaat("MP_GANG_LEMOYNE_SCM019"));
			}
			break;
	}
}

void func_271(int iParam0, int iParam1)
{
	Local_1486.f_582.f_23[iParam0] = iParam1;
}

void func_272()
{
	switch (func_216())
	{
		case 0:
			Local_1486.f_19.f_159 = VOLUME::_CREATE_VOLUME_BOX(1567.49f, -2048.007f, 48.29533f, 0f, 0f, 35.60825f, 4.65819f, 5.95441f, 3.379627f);
			break;
		default:
			return;
	}
	func_177(Local_1486.f_19.f_159, 1);
}

void func_273(int iParam0)
{
	Local_1486.f_582.f_1[iParam0] = -1;
}

void func_274()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 9)
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
					func_420(&(Local_1486.f_332), Var1);
					func_421(func_418(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_275()
{
	return (func_129(32) || func_128(32, 255));
}

bool func_276(int iParam0, int iParam1)
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

void func_277()
{
	func_423();
	func_424();
}

void func_278()
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
		iVar0++;
	}
}

void func_279()
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
	if (!func_213(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_1486.f_179.f_152)
	{
		bVar8 = true;
		Local_1486.f_179.f_152 = !Local_1486.f_179.f_152;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar7 = false;
		if (Local_1486.f_179.f_118 >= 10)
		{
			Local_1486.f_179.f_118 = 0;
		}
		iVar0 = Local_1486.f_179.f_118;
		Local_1486.f_179.f_118++;
		iVar9 = func_427(iVar0);
		iVar1 = Local_1486.f_179.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_170(iVar9, 4))
		{
			func_402(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_77[iVar3 /*44*/].f_4.f_2[iVar0] > -1f)
			{
				Local_77[iVar3 /*44*/].f_4.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1486.f_179.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1486.f_179.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1486.f_179.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1486.f_179.f_119), iVar0);
			}
		}
		else
		{
			bVar7 = func_428(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_1486.f_179.f_119, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_1486.f_179.f_119), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_1486.f_179.f_119), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_77[iVar3 /*44*/].f_4.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_77[iVar3 /*44*/].f_4.f_1), iVar0);
				}
				func_429(&(Local_1486.f_179.f_120[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_77[iVar3 /*44*/].f_4.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_430(&(Local_1486.f_179.f_120[iVar0 /*3*/])) || func_431(&(Local_1486.f_179.f_120[iVar0 /*3*/]), 0.5f))))
			{
				func_432(&(Local_1486.f_179.f_120[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_77[iVar3 /*44*/].f_4.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_170(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_1486.f_179.f_152, false, 256);
		}
		if (func_170(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_433(iVar9))
						{
							if (!func_372(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_434(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::_0xB07D3185E11657A5(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_170(iVar9, 8))
			{
				if (!func_433(iVar9))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1486.f_179.f_119 != 0)
	{
		if (!func_435(1, 255))
		{
			func_436(1);
		}
	}
	else if (func_435(1, 255))
	{
		func_437(1);
	}
}

void func_280()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
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
	if (!func_213(&iVar25))
	{
		return;
	}
	func_438();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::_0x705BE297EEBDB95D(iVar26))
	{
		Local_1486.f_332.f_64 = 0;
		Local_77[iVar25 /*44*/].f_17.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == joaat("WEAPON_MOONSHINEJUG") || iVar26 == joaat("WEAPON_MOONSHINEJUG_MP")));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_1486.f_332.f_237 >= 10)
		{
			Local_1486.f_332.f_237 = 0;
		}
		iVar1 = Local_1486.f_332.f_237;
		Local_1486.f_332.f_237++;
		iVar22++;
		iVar18 = func_418(iVar1);
		if (!func_439(iVar18))
		{
		}
		else if (func_440(iVar18, &Var5))
		{
			if (func_441(&Var5, iVar18))
			{
				if (func_442(&(Local_77[iVar25 /*44*/].f_17), 8, iVar1))
				{
					func_443(&(Local_77[iVar25 /*44*/].f_17), 8, iVar1);
				}
			}
			else if (!func_442(&(Local_77[iVar25 /*44*/].f_17), 8, iVar1))
			{
				func_444(&(Local_77[iVar25 /*44*/].f_17), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_445(iVar18);
				if (func_446(iVar18))
				{
					if (func_447(iVar18))
					{
						if (!func_448(iVar18))
						{
							func_449(iVar18);
						}
					}
					if (func_450(iVar18))
					{
						func_451(iVar18);
					}
				}
				else
				{
					if (func_452(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_453(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_420(&(Local_1486.f_332), Var5);
						}
					}
					if (!func_454(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_455(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_456(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_457(Var5, Var5.f_1, &(Local_1486.f_332), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_1486.f_332.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_1486.f_332.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_390(PLAYER::PLAYER_PED_ID(), Var5, 1060437492 /* Float: 0.707f */) == 0)
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
									MISC::SET_BIT(&(Local_1486.f_332.f_64), iVar18);
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
															MISC::SET_BIT(&(Local_1486.f_332.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_1486.f_332.f_2 & 4 != 0)
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
										MISC::SET_BIT(&(Local_1486.f_332.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_462(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_442(&(Local_77[iVar25 /*44*/].f_17), 8, iVar1))
								{
									func_443(&(Local_77[iVar25 /*44*/].f_17), 8, iVar1);
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
												Jump @1398; //curOff = 1202
												if (func_469(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (Local_1486.f_332.f_239[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_1486.f_332.f_239[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_1486.f_332.f_239[iVar18];
																Local_1486.f_332.f_239[iVar18]++;
															}
															iVar24++;
															if (func_470(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_471(iVar18, iVar20))
																{
																	if (func_454(iVar18, iVar0))
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

bool func_281()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_1486.f_14))
	{
		return false;
	}
	if (func_474())
	{
		return false;
	}
	if (func_475(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_282()
{
	int iVar0;

	Local_1486.f_19.f_149 = -1;
	Local_1486.f_19.f_150 = 0;
	Local_1486.f_19.f_151 = -1;
	Local_1486.f_19.f_152 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1486.f_19.f_150 = (Local_1486.f_19.f_150 || Local_77[iVar0 /*44*/].f_1);
			Local_1486.f_19.f_149 = (Local_1486.f_19.f_149 && Local_77[iVar0 /*44*/].f_1);
			Local_1486.f_19.f_152 = (Local_1486.f_19.f_152 || Local_77[iVar0 /*44*/].f_1.f_1);
			Local_1486.f_19.f_151 = (Local_1486.f_19.f_151 && Local_77[iVar0 /*44*/].f_1.f_1);
		}
		iVar0++;
	}
}

Vector3 func_283()
{
	switch (func_216())
	{
		case 0:
			return 1561.062f, -2047.581f, 47.34312f;
		case 1:
			return 1379.959f, -1696.265f, 67.08415f;
		case 2:
			return 1621.737f, -1650.322f, 56.35657f;
		case 3:
			return 1504.896f, -1470.001f, 71.60625f;
		case 4:
			return 1082.788f, -1266.084f, 67.83965f;
		case 5:
			return 682.6197f, -992.2823f, 52.73629f;
		case 6:
			return 707.7625f, -886.0159f, 48.30226f;
		case 7:
			return 879.6771f, -538.0999f, 88.07765f;
		case 8:
			return 1011.859f, -394.3894f, 90.43398f;
		default:
			break;
	}
	return vLocal_13;
}

int func_284(vector3 vParam0, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	fVar0 = 9999f;
	iVar2 = 255;
	iVar3 = 255;
	iVar5 = iVar5;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
		{
		}
		else if (bParam3 && !func_476(iVar4, 1, 1))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar2);
			fVar6 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), vParam0);
			if (fVar6 < fVar0)
			{
				iVar3 = iVar2;
				fVar0 = fVar6;
				iVar5 = iVar4;
			}
		}
		iVar4++;
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
	{
		return PLAYER::GET_PLAYER_PED(iVar3);
	}
	return 0;
}

float func_285(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_286(float fParam0)
{
	if (func_379())
	{
		return;
	}
	if (fParam0 < func_477())
	{
		func_387(0);
		func_478();
	}
}

void func_287()
{
	func_479();
	func_480();
}

void func_288()
{
	int iVar0;

	if (func_178(4, -1, 1))
	{
		return;
	}
	if (!func_317(2))
	{
		return;
	}
	iVar0 = func_181(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_481(1515458263, iVar0, 1);
	func_319(4);
}

void func_289()
{
	if (!func_320(2048))
	{
		return;
	}
	if (func_178(2048, -1, 1))
	{
		return;
	}
	func_482(&(Local_1486.f_332), 0);
	func_319(2048);
}

void func_290(int iParam0)
{
	if (Local_1486.f_19.f_1 == iParam0)
	{
		return;
	}
	Local_1486.f_19.f_1 = iParam0;
}

void func_291(var uParam0)
{
	if (*uParam0 == Local_16.f_7)
	{
		return;
	}
	func_290(Local_16.f_7);
}

void func_292()
{
	if (func_381(64))
	{
		if (func_178(4194304, -1, 1))
		{
			func_318(4194304);
			Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1.f_2 = -1;
		}
	}
	if (Local_16.f_7.f_1 != Local_1486.f_19.f_2)
	{
		Local_1486.f_19.f_2 = Local_16.f_7.f_1;
		if (func_178(2097152, -1, 1))
		{
			func_483(Local_16.f_7.f_1);
		}
	}
}

void func_293()
{
	int iVar0;
	float fVar1;

	iVar0 = func_181(0);
	fVar1 = func_484(Global_34, iVar0, 1, 1);
	if (func_178(2097152, -1, 1))
	{
		if (fVar1 > 10f)
		{
			MISC::_0xE98D55C5983F2509(func_181(0));
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
			}
			func_485();
			func_318(2097152);
		}
		else if (func_486(0, 0, 0))
		{
			if (!func_487(1))
			{
				func_483(Local_1486.f_19.f_2);
				func_488(1);
			}
		}
		else if (func_487(1))
		{
			func_485();
			func_489(1);
		}
	}
	else
	{
		if (fVar1 > 10f)
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		if (!MISC::_0x870708A6E147A9AD(iVar0, "", 7f, 0, 16, 0, 0, 0, 0, -1))
		{
			return;
		}
		func_319(2097152);
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return;
		}
		PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
	}
}

void func_294()
{
	if (!func_178(1073741824 /* Float: 2f */, -1, 1))
	{
		return;
	}
	if (func_320(262144))
	{
		if (func_320(64))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
			func_318(64);
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	}
}

void func_295()
{
	int iVar0;

	if (func_320(8388608))
	{
		return;
	}
	if (func_320(4096))
	{
		if (!func_317(4096))
		{
			func_319(4096);
		}
		return;
	}
	iVar0 = func_181(0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	func_169(0);
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1486.f_19.f_142))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1486.f_19.f_142, func_225(), true);
	func_382(128);
	func_319(4096);
}

void func_296()
{
	int iVar0;

	iVar0 = func_181(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_RESET_FLAG(iVar0, 269, true);
}

void func_297()
{
	func_491(&(Local_1486.f_19.f_153), func_490(), 1, -1082130432 /* Float: -1f */);
}

void func_298()
{
	int iVar0;

	if (Local_1486.f_19.f_1 <= 0)
	{
		return;
	}
	if (func_320(2048))
	{
		return;
	}
	iVar0 = func_181(0);
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_1486.f_19.f_142))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1486.f_19.f_142))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1486.f_19.f_142, func_262()))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1486.f_19.f_142, func_262());
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1486.f_19.f_142, "vic", iVar0, 0);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1486.f_19.f_142, func_262(), true);
}

void func_299()
{
	int iVar0;

	if (!func_317(2048) || func_320(32768))
	{
		return;
	}
	if (!func_381(256))
	{
		return;
	}
	if (func_492(256))
	{
		return;
	}
	iVar0 = func_181(0);
	if (!ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_34, iVar0))
	{
		func_318(256);
		return;
	}
	if (((((((func_494(func_493()) || func_494(func_495())) || func_494(func_496())) || func_494(func_497())) || func_494(func_498())) || func_494(func_499())) || func_494(func_500())) || func_494(func_501()))
	{
		return;
	}
	func_502(1048576);
	func_319(256);
}

void func_300()
{
	if (!func_492(1048576))
	{
		return;
	}
	if (func_492(256))
	{
		return;
	}
	func_504(func_503());
	func_504(func_505());
	func_507(func_506(), 0, 0);
	func_502(256);
}

void func_301()
{
	if (!func_492(8388608))
	{
		return;
	}
	if (func_492(512))
	{
		return;
	}
	func_504(func_497());
	func_504(func_498());
	func_504(func_499());
	func_504(func_500());
	func_504(func_501());
	func_507(func_496(), 0, 0);
	func_502(512);
}

void func_302()
{
	if (!func_492(2097152))
	{
		return;
	}
	if (func_492(1024))
	{
		return;
	}
	func_504(func_497());
	func_504(func_498());
	func_504(func_499());
	func_504(func_500());
	func_504(func_501());
	func_504(func_503());
	func_507(func_493(), 0, 0);
	func_502(1024);
}

void func_303()
{
	if (!func_492(4194304))
	{
		return;
	}
	if (func_492(2048))
	{
		return;
	}
	func_504(func_497());
	func_504(func_498());
	func_504(func_499());
	func_504(func_500());
	func_504(func_501());
	func_504(func_503());
	func_507(func_495(), 0, 0);
	func_502(2048);
}

void func_304()
{
	int iVar0;
	char* sVar1;

	if (func_320(1))
	{
		func_319(1);
		return;
	}
	func_508();
	iVar0 = func_181(0);
	switch (func_215())
	{
		case 0:
			sVar1 = "ACFEX_SD_Official";
			break;
		case 1:
			sVar1 = "ACFEX_SD_Lawman";
			break;
	}
	func_509(&(Local_1486.f_19.f_42), iVar0, sVar1, 1);
	func_509(&(Local_1486.f_19.f_42), func_181(1), "EXC_OPED2", 1);
	func_509(&(Local_1486.f_19.f_42), func_181(2), "EXC_YPED2", 1);
	func_509(&(Local_1486.f_19.f_42), func_181(3), "EXC_YPED1", 1);
	func_509(&(Local_1486.f_19.f_42), func_181(4), "EXC_OPED3", 1);
	func_319(1);
}

void func_305(float fParam0)
{
	if (func_320(2))
	{
		func_319(2);
		return;
	}
	if (*fParam0 > func_510())
	{
		return;
	}
	func_507(func_511(), 1, 0);
	func_319(2);
}

void func_306(int iParam0, float fParam1)
{
	float fVar0;

	if (!func_275())
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, func_283(), true);
		if (fVar0 < func_512())
		{
			func_513();
			func_514(&(Local_1486.f_19.f_4));
		}
		return;
	}
	else if (!func_515(iParam0, fParam1))
	{
		return;
	}
}

void func_307(int iParam0)
{
	float fVar0;
	int iVar1;

	if (!func_381(1))
	{
		func_383(&(Local_16.f_7.f_6[0]));
		func_382(1);
	}
	if (func_320(32))
	{
		func_319(32);
		return;
	}
	if (!func_320(16))
	{
		if (func_237(Local_16.f_7.f_6[0]))
		{
			fVar0 = func_285(*iParam0, func_283(), 1);
			iVar1 = func_385(Local_16.f_7.f_6[0]);
			if (iVar1 > 20000)
			{
				if (fVar0 < func_516())
				{
					func_507(6, Local_1486.f_19.f_141, 11);
					func_319(32);
				}
				else
				{
					func_517(iParam0);
				}
			}
			else if (fVar0 > func_516())
			{
				func_517(iParam0);
			}
			else if (iVar1 > 10000 && !func_518(2, -1, 1))
			{
				func_507(4, Local_1486.f_19.f_141, 11);
				func_502(2);
			}
		}
	}
	else if (func_285(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), func_283(), 1) < func_519())
	{
		func_507(7, Local_1486.f_19.f_141, 11);
		func_319(32);
	}
}

void func_308()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_320(1024))
	{
		func_478();
		func_319(1024);
		return;
	}
	func_520(&(Local_16.f_7.f_18[0]), 0);
	iVar0 = 0;
	while (iVar0 < Local_1486.f_179.f_7)
	{
		iVar1 = func_521(iVar0);
		iVar2 = func_181(iVar1);
		if (!func_182(iVar0))
		{
		}
		else
		{
			func_522(&iVar2, &(Local_16.f_7.f_18[0]), 1, 0, 0, 1);
		}
		iVar0++;
	}
	func_478();
	func_319(1024);
}

void func_309()
{
	if (!func_317(2048))
	{
		return;
	}
	func_319(16384);
}

void func_310(float fParam0)
{
	if (!func_492(32))
	{
		if (*fParam0 < 20f && func_381(256))
		{
			func_507(func_497(), 0, 11);
			func_502(32);
		}
	}
	else if (!func_523(32))
	{
		func_502(32);
	}
	switch (func_524())
	{
		case 1:
			break;
		case 2:
			break;
	}
	func_525();
}

void func_311()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_381(32))
	{
		return;
	}
	if (func_320(32768))
	{
		func_319(32768);
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
	WEAPON::_0x4820A6939D7CEF28(iVar0, 0);
	WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, false);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return;
	}
	if (!func_526(iVar0, 242628503, 1, 0))
	{
		return;
	}
	iVar3 = func_181(0);
	if (func_527(iVar0) || PED::_IS_PED_CARRYING(iVar0))
	{
		iVar2 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			bVar1 = true;
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar4);
	TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
	if (bVar1)
	{
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar3, 1.85f, -0.25f, 0f), 1f, 0);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_528(Local_16.f_7.f_15), 1f, 20000, 0.1f, 0, 40000f);
	TASK::TASK_ACHIEVE_HEADING(0, func_529(Local_16.f_7.f_15), 0);
	func_530(iVar0, &iVar4, 0, 0, 1, 1);
	func_319(1073741824 /* Float: 2f */);
	func_319(32768);
}

void func_312()
{
	int iVar0;

	if (func_178(65536, -1, 1))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
	if (!func_531(iVar0, func_528(Local_16.f_7.f_15), 0.15f, 1, 1))
	{
		return;
	}
	func_319(65536);
}

void func_313()
{
	int iVar0;
	var uVar1;
	int iVar4;

	iVar0 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
	if (func_320(131072))
	{
		func_319(131072);
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1486.f_19.f_142))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1486.f_19.f_142))
	{
		return;
	}
	if (!func_532(Local_16.f_7.f_15, &uVar1))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1486.f_19.f_142, &uVar1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1486.f_19.f_142, &uVar1);
		return;
	}
	if (PED::IS_PED_MALE(iVar0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1486.f_19.f_142, "player", iVar0, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1486.f_19.f_142, "MP_Female", iVar0, 0);
	}
	iVar4 = func_181(0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar4) && !PED::IS_PED_INJURED(iVar4))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1486.f_19.f_142, &uVar1, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
	func_319(131072);
}

void func_314()
{
	int iVar0;
	int iVar1;

	if (func_320(8388608))
	{
		return;
	}
	if (!func_492(64))
	{
		if (func_533(Local_1486.f_19.f_142, "SCENE_CAPTIVE", 0.787f, 1))
		{
			func_507(func_503(), 0, 11);
			func_502(64);
		}
	}
	else if (!func_523(64))
	{
		func_502(64);
	}
	if (func_320(262144))
	{
		func_319(262144);
		return;
	}
	iVar0 = func_181(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		if (!func_381(128))
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1486.f_19.f_142))
			{
				if (func_533(Local_1486.f_19.f_142, "SCENE_CAPTIVE", func_534(Local_16.f_7.f_15), 0))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1486.f_19.f_142, "vic", iVar0);
					PHYSICS::ACTIVATE_PHYSICS(iVar0);
					func_319(8388608);
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1486.f_19.f_142, func_225(), true);
					iVar1 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
					if (PED::IS_PED_MALE(iVar1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1486.f_19.f_142, "player", iVar1);
					}
					else
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1486.f_19.f_142, "MP_Female", iVar1);
					}
					func_382(128);
				}
			}
		}
		return;
	}
	if (PED::_IS_PED_HOGTIED(iVar0))
	{
		return;
	}
	if (!func_533(Local_1486.f_19.f_142, "SCENE_CAPTIVE", 0.99f, 1))
	{
		if (func_533(Local_1486.f_19.f_142, "SCENE_CAPTIVE", func_534(Local_16.f_7.f_15), 0))
		{
			func_535();
		}
		return;
	}
	func_319(262144);
}

void func_315()
{
	int iVar0;

	if (func_320(524288))
	{
		func_319(524288);
		return;
	}
	iVar0 = func_181(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return;
	}
	if (func_317(-2147483648))
	{
		if (func_320(2048))
		{
			if (!func_526(iVar0, 242628503, 1, 0))
			{
				return;
			}
			TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_1486.f_19.f_143);
			func_319(524288);
		}
		else
		{
			if (!func_526(iVar0, 518218985, 1, 0))
			{
				return;
			}
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			func_319(524288);
		}
	}
	else if (!func_178(-2147483648, -1, 1))
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_1486.f_19.f_143));
		TASK::_0x23767D80C7EED7C6(&(Local_1486.f_19.f_143), -1994340061);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_34, 0, 3f, 0.25f, -1f);
		TASK::TASK_STAND_STILL(0, 3000);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(0, func_283(), 1, 0, -1082130432 /* Float: -1f */, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_1486.f_19.f_143);
		func_319(-2147483648);
	}
}

void func_316()
{
	int iVar0;
	int iVar1;

	if (!func_492(128))
	{
		if (!func_237(Local_16.f_7.f_6[4]))
		{
			func_383(&(Local_16.f_7.f_6[4]));
			return;
		}
		iVar0 = func_385(Local_16.f_7.f_6[4]);
		if (iVar0 > 4000)
		{
			func_507(func_505(), 0, 11);
			func_502(128);
		}
		return;
	}
	else if (!func_523(128))
	{
		func_502(128);
		return;
	}
	if (!func_178(1048576, -1, 1))
	{
		func_485();
		MISC::_0xE98D55C5983F2509(func_181(0));
		func_318(2097152);
		func_319(1048576);
		return;
	}
	if (!func_320(128))
	{
		iVar1 = func_181(0);
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			return;
		}
		PED::SET_PED_KEEP_TASK(iVar1, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 26, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
		PED::_0xAE6004120C18DF97(iVar1, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iVar1, 178, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 467, false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		func_319(128);
	}
}

bool func_317(int iParam0)
{
	return (Local_1486.f_19.f_149 && iParam0) != 0;
}

void func_318(int iParam0)
{
	if (!func_178(iParam0, -1, 1))
	{
		return;
	}
	Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1 = (Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1 - (Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1 && iParam0));
}

void func_319(int iParam0)
{
	if (func_178(iParam0, -1, 1))
	{
		return;
	}
	Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1 = (Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1 || iParam0);
}

bool func_320(int iParam0)
{
	return (Local_1486.f_19.f_150 && iParam0) != 0;
}

void func_321()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 9)
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

int func_322(var uParam0, var uParam1)
{
	return uParam0;
}

int func_323(int iParam0)
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

int func_324(struct<2> Param0)
{
	return func_536(Param0);
}

void func_325(struct<2> Param0, var uParam2)
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
	switch (func_322(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_538(func_537(Param0));
			iVar5 = func_539(iVar4);
			if (!func_540(iVar5, 0))
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

int func_326(int iParam0, int iParam1)
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

void func_327(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_541(&Var0);
}

var func_328(int iParam0)
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

var func_329(int iParam0)
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

var func_330(int iParam0)
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

bool func_331(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17353[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_332(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17353[iVar0 /*2*/] == iParam0)
		{
			return Global_17353[Global_17374 /*2*/].f_1;
		}
		iVar0++;
	}
	return 5;
}

void func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_542(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_39.f_110[iVar1]), iVar2);
	Global_1939655 = 0;
}

void func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_542(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_39.f_110[iVar1]), iVar2);
	Global_1939655 = 0;
}

void func_335()
{
	func_334(-939420910);
	func_334(-1187950766);
	func_334(356365161);
	func_334(753127042);
	func_334(-2038424081);
	func_334(1884271742);
	func_334(459290420);
}

void func_336()
{
	func_334(704802028);
	func_334(588987611);
	func_334(2008888900);
	func_334(1649996811);
	func_334(227918160);
	func_334(168171957);
	func_334(1193080109);
	func_334(-491981251);
	func_334(-639037538);
	func_334(-618620429);
}

bool func_337(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_542(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_543(iVar1))
	{
		if (Global_1071686.f_19648.f_24 && !func_544(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1071686.f_19648[iVar1], iVar2) || MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2);
}

void func_338(int iParam0)
{
	if (func_545(iParam0) && func_546())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

bool func_339(int iParam0)
{
	if ((iParam0 == -1 || iParam0 == 10) || iParam0 > 9)
	{
		return false;
	}
	return true;
}

var func_340(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0 /*11*/];
}

int func_341(int iParam0)
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

int func_342(int iParam0)
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

void func_343(var uParam0)
{
	func_188(uParam0, 0);
	func_188(uParam0, 1);
	func_188(uParam0, 3);
	func_186(uParam0);
}

void func_344(var uParam0)
{
	func_187(uParam0);
	func_547(uParam0, 0, 3);
}

void func_345(var uParam0)
{
	func_188(uParam0, 0);
	func_189(uParam0, 0);
	func_189(uParam0, 1);
	func_189(uParam0, 2);
}

void func_346(var uParam0)
{
	func_188(uParam0, 1);
	func_186(uParam0);
}

void func_347(var uParam0)
{
	func_188(uParam0, 2);
	func_189(uParam0, 3);
}

void func_348(var uParam0)
{
	func_188(uParam0, 3);
	func_189(uParam0, 4);
}

void func_349(var uParam0)
{
	func_189(uParam0, 0);
	func_189(uParam0, 1);
}

void func_350(var uParam0)
{
	func_189(uParam0, 2);
	func_189(uParam0, 3);
}

void func_351(var uParam0)
{
	func_189(uParam0, 4);
	func_189(uParam0, 5);
}

bool func_352(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_353(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_354(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_355(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

void func_356(var uParam0)
{
	func_548(uParam0, 0);
	func_549(uParam0, 0);
	func_357(uParam0, 1);
	func_550(uParam0, 1);
	func_551(uParam0, 0);
	func_482(uParam0, 1);
	func_552(uParam0, 1, 1, 1);
}

void func_357(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 256);
	}
	else
	{
		func_217(&(uParam0->f_2), 256);
	}
}

void func_358(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 4);
	}
	else
	{
		func_217(&(uParam0->f_2), 4);
	}
}

void func_359(var uParam0)
{
	func_554(uParam0, (func_553(uParam0) - 6f));
	func_555(uParam0, 1);
}

void func_360(var uParam0)
{
	func_548(uParam0, 0);
	func_549(uParam0, 0);
	func_357(uParam0, 0);
	func_551(uParam0, 0);
	func_552(uParam0, 1, 1, 1);
}

void func_361(var uParam0)
{
	func_556(uParam0, 1);
	func_557(uParam0, 1);
	func_558(uParam0, 1);
}

void func_362(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 131072);
	}
	else
	{
		func_217(&(uParam0->f_2), 131072);
	}
}

void func_363(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 4);
	}
	else
	{
		func_218(uParam0, 4);
	}
}

bool func_364(int iParam0, bool bParam1)
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

bool func_365(int iParam0, var uParam1)
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

int func_366(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

var func_367()
{
	return Local_1486.f_3;
}

var func_368()
{
	return Local_1486.f_2;
}

int func_369(int iParam0)
{
	if (!func_176(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

Vector3 func_370(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1564.001f, -2045.494f, 47.40215f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1379.372f, -1696.135f, 66.87366f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1621.386f, -1649.888f, 56.0248f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1505.89f, -1468.727f, 71.38737f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1082.057f, -1265.789f, 67.49545f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 682.3074f, -992.1173f, 52.42072f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 708.892f, -884.1869f, 48.26218f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 880.815f, -536.4342f, 88.03556f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1012.536f, -395.7754f, 90.44735f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_371(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_260(iParam1))
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

bool func_372(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_1486.f_15 };
	iVar7 = 0;
	iVar8 = func_401(iParam0);
	iVar9 = func_559(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iParam0]))
		{
			iVar9 = func_559(iParam0);
			fVar0 = func_560(iParam0);
			if (!func_175(Local_1486.f_179.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_561(iParam0)) };
			}
			else
			{
				vVar1 = { func_561(iParam0) };
			}
			if (!func_562(&(Local_16.f_27[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_16.f_27[iParam0]);
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
						PED::_UPDATE_PED_VARIATION(iVar7, func_170(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_563(iVar7, 1);
					}
					if (func_564(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_565(iParam0))
						{
							if (func_564(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_373(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_16.f_27[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_16.f_27[iParam0]);
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
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_16.f_27[iParam0])))
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

bool func_373(int iParam0)
{
	return func_170(iParam0, 128);
}

void func_374(int iParam0)
{
	Local_16.f_7.f_2 = iParam0;
}

bool func_375(int iParam0)
{
	return func_128(8, iParam0);
}

bool func_376(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return Global_1100469[iParam0 /*53*/].f_16;
}

bool func_377(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_364(iParam2, 0))
	{
		if (!func_213(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_77[iParam2 /*44*/].f_4.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_340(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_566(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_77[iParam2 /*44*/].f_4.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

bool func_378(int iParam0)
{
	if (iParam0 < 1)
	{
		return true;
	}
	return false;
}

bool func_379()
{
	return (func_129(64) || func_128(64, 255));
}

void func_380(int iParam0)
{
	if (Local_16.f_7 == iParam0)
	{
		return;
	}
	Local_16.f_7 = iParam0;
}

bool func_381(int iParam0)
{
	return (Local_16.f_7.f_3 && iParam0) != 0;
}

void func_382(int iParam0)
{
	if (func_381(iParam0))
	{
		return;
	}
	Local_16.f_7.f_3 = (Local_16.f_7.f_3 || iParam0);
}

void func_383(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

void func_384(int iParam0)
{
	if (!func_381(iParam0))
	{
		return;
	}
	Local_16.f_7.f_3 = (Local_16.f_7.f_3 - (Local_16.f_7.f_3 && iParam0));
}

int func_385(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

void func_386(var uParam0)
{
	*uParam0 = 0;
}

void func_387(bool bParam0)
{
	int iVar0;

	if (!func_128(64, 255))
	{
		iVar0 = func_326(Local_1486.f_1, Local_1486.f_2);
		func_567(iVar0);
		if (!func_128(1024, 255))
		{
			func_145(1024);
		}
		func_568(iVar0);
		if (bParam0)
		{
			func_569(Local_1486.f_1, Local_1486.f_4);
		}
		func_145(64);
	}
}

void func_388(int iParam0)
{
	Local_16.f_7.f_1 = iParam0;
}

int func_389()
{
	int iVar0;
	int iVar1;

	if (!func_320(4194304))
	{
		return 255;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (!func_175(Local_77[iVar0 /*44*/].f_1, 4194304))
		{
		}
		else if (Local_77[iVar0 /*44*/].f_1.f_2 != -1)
		{
			return NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
		}
		iVar0++;
	}
	return 255;
}

int func_390(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_570(iParam0, vVar0, iParam2);
}

void func_391(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_392(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_393(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_1486.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != Local_1486)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_1486.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_1486.f_3)
	{
		return false;
	}
	return true;
}

void func_394(int iParam0)
{
	switch (iParam0->f_9)
	{
		case 816343230:
			func_571(iParam0);
			break;
		case 753226:
			func_572(iParam0);
			break;
		case 398686063:
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), PLAYER::GET_PLAYER_PED(iParam0->f_1), 20f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			break;
	}
}

bool func_395(int iParam0)
{
	return Local_1486.f_582.f_1[iParam0] != 0;
}

bool func_396(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1486.f_582.f_1[iParam0], iParam1);
}

bool func_397(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1486.f_582.f_12[iParam0], iParam1);
}

bool func_398(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (!func_317(262144))
			{
				return false;
			}
			if (!func_178(1073741824 /* Float: 2f */, -1, 1) && !func_178(536870912, -1, 1))
			{
				return false;
			}
			if (!func_178(1073741824 /* Float: 2f */, -1, 1) && func_178(134217728, -1, 1))
			{
				return false;
			}
			func_573(772680225, 0, 255, 0, 0);
			func_575(func_574(joaat("WINS"), joaat("RE_RESCUES")), 1);
			func_576(1);
			return true;
		case 1:
			if (!func_178(268435456, -1, 1))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

void func_399(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_577())
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
		if (!Global_1139381.f_3876.f_2[func_578(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1139381.f_3876.f_2[func_578(iParam0, 1) /*4*/].f_2++;
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
	func_579(&Var0, uVar7);
}

void func_400(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_1486.f_582.f_12[iParam0]), iParam1);
}

int func_401(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0 /*11*/].f_3;
}

void func_402(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_401(iParam0);
	bVar3 = func_364(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_1486.f_179.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_16.f_27[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_1486.f_179.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_77[iParam1 /*44*/].f_4.f_2[iParam0] = -1f;
				}
				else
				{
					Local_77[iParam1 /*44*/].f_4.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_373(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_16.f_27[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_16.f_27[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_580(iVar1, 1f, 0);
					sVar0 = func_581(iParam0);
					if (!MISC::_IS_STRING_SPACE(sVar0))
					{
						func_582(iVar1, sVar0, 1);
					}
				}
				if (func_564(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_565(iParam0))
					{
						if (func_564(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_1486.f_179.f_5), iParam0);
				if (bParam2)
				{
					func_583(iParam0);
				}
			}
		}
	}
}

bool func_403(int iParam0)
{
	if (iParam0 >= 7 && iParam0 <= 9)
	{
		return true;
	}
	return false;
}

void func_404(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_181(iParam0);
	func_584(iVar0, iParam1, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_CRIMINALS"));
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
	PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iVar0, joaat("DISCOVERABLE_NAME_ENEMY_MP"));
}

var func_405(int iParam0)
{
	return Local_1486.f_19.f_5[iParam0 /*2*/].f_1;
}

void func_406()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1486.f_19.f_142, "vic", func_181(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1486.f_19.f_142, "rope", func_405(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1486.f_19.f_142, "WAKE_BOOL", false, false);
}

Vector3 func_407()
{
	return func_585();
}

float func_408()
{
	switch (func_216())
	{
		case 0:
			return -90.4f;
		case 1:
			return 0f;
		case 2:
			return 0f;
		case 3:
			return -90f;
		case 4:
			return 0f;
		case 5:
			return 0f;
		case 6:
			return -90f;
		case 7:
			return -90f;
		case 8:
			return 66.079f;
		default:
			break;
	}
	return 0f;
}

int func_409(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051252.f_16[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051252.f_16[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

void func_410(int iParam0, int iParam1, bool bParam2)
{
	func_409(iParam0, 0, 0);
	if (func_545(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

void func_411(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_586(iParam0);
	}
}

void func_412(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_413(char* sParam0)
{
	if (!PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x7C334FF4D9215912(sParam0);
	}
}

void func_414(int iParam0)
{
	if (!GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDFEA23EC90113657(iParam0);
	}
}

void func_415(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_587(iParam0);
	}
}

void func_416(int iParam0)
{
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(iParam0);
	}
}

void func_417(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_418(int iParam0)
{
	return iParam0;
}

bool func_419(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_588(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_484(PLAYER::PLAYER_PED_ID(), *uParam1, 1, 1);
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

	if (!func_213(&iVar0))
	{
		return;
	}
	func_444(&(Local_77[iVar0 /*44*/].f_17), 0, iParam0);
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
	iVar4 = func_589(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_574(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_423()
{
	Local_1486.f_179.f_6 = 0;
	Local_1486.f_179.f_2 = 0;
	Local_1486.f_179.f_1 = -1;
}

void func_424()
{
	int iVar0;

	func_214(&(Local_1486.f_332.f_99), 2, 0);
	func_214(&(Local_1486.f_332.f_99), 1, 0);
	func_214(&(Local_1486.f_332.f_99), 4, 0);
	func_214(&(Local_1486.f_332.f_99), 5, 0);
	func_214(&(Local_1486.f_332.f_99), 8, -1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_1486.f_332.f_66[iVar0]));
		SCRIPTS::_0x20F4CB76689ACDBC(&(Local_1486.f_332.f_88[iVar0]));
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_1486.f_332.f_77[iVar0]));
		func_590(iVar0);
		iVar0++;
	}
}

void func_425(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_1486.f_179.f_2 = (Local_1486.f_179.f_2 || Local_77[iParam0 /*44*/].f_4);
		Local_1486.f_179.f_1 = (Local_1486.f_179.f_1 && Local_77[iParam0 /*44*/].f_4);
		Local_1486.f_179.f_6 = (Local_1486.f_179.f_6 || Local_77[iParam0 /*44*/].f_4.f_1);
	}
}

void func_426(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0 /*44*/].f_17), 2);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0 /*44*/].f_17), 1);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0 /*44*/].f_17), 4);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0 /*44*/].f_17), 5);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0 /*44*/].f_17), 6);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0 /*44*/].f_17), 7);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0 /*44*/].f_17), 0);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0 /*44*/].f_17), 3);
		func_592(&(Local_1486.f_332.f_99), &(Local_77[iParam0 /*44*/].f_17), 8);
		iVar0 = 0;
		while (iVar0 < 10)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_77[iParam0 /*44*/].f_17.f_5[iVar0]), &(Local_1486.f_332.f_66[iVar0]), &(Local_1486.f_332.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_77[iParam0 /*44*/].f_17.f_5[iVar0]), &(Local_1486.f_332.f_66[iVar0]), &(Local_1486.f_332.f_77[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_77[iParam0 /*44*/].f_17.f_5[iVar0]), &(Local_1486.f_332.f_66[iVar0]), &(Local_1486.f_332.f_88[iVar0]));
			func_593(func_418(iVar0), iParam0);
			iVar0++;
		}
	}
}

int func_427(int iParam0)
{
	return iParam0;
}

int func_428(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_77[iParam3 /*44*/].f_4.f_2[iParam2] = fVar0;
	if (fVar0 > Local_1486.f_179.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_429(var uParam0)
{
	func_594(uParam0, 0f);
}

bool func_430(var uParam0)
{
	return func_595(*uParam0, 1);
}

bool func_431(var uParam0, float fParam1)
{
	if (!func_430(uParam0))
	{
		return false;
	}
	if (func_596(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_432(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_433(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	struct<2> Var12;
	vector3 vVar22;
	int iVar26;

	iVar0 = iParam0;
	iVar1 = iVar0;
	iVar2 = func_181(iVar1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return true;
	}
	if (func_178(2048, -1, 1))
	{
		return false;
	}
	switch (iVar1)
	{
		case 7:
			if (Local_16.f_7.f_12 < 2)
			{
				return false;
			}
			break;
		case 8:
			if (Local_16.f_7.f_12 < 3)
			{
				return false;
			}
			break;
		case 9:
			if (Local_16.f_7.f_12 < 4)
			{
				return false;
			}
			break;
	}
	if (!func_237(Local_16.f_7.f_6[1]))
	{
		return false;
	}
	iVar3 = func_385(Local_16.f_7.f_6[1]);
	if (iVar3 < 30000)
	{
		return false;
	}
	StringCopy(&cVar4, func_597(iVar0), 64);
	Var12 = -1;
	Var12 = 44;
	Var12.f_1 = { func_585() };
	vVar22.f_3 = -1;
	iVar26 = func_598(cVar4, &Var12, &vVar22);
	switch (iVar26)
	{
		case 0:
			return false;
		case 2:
			if (!func_381(512))
			{
				func_382(1024);
			}
			return false;
		case 1:
			func_382(512);
			func_114(iVar1, vVar22, 0f, 1);
			return true;
	}
	return false;
}

void func_434(int iParam0, int iParam1)
{
	func_218(&(Local_1486.f_179.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_435(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	return func_175(Local_77[iParam1 /*44*/].f_4, iParam0);
}

void func_436(int iParam0)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return;
	}
	func_217(&(Local_77[iVar0 /*44*/].f_4), iParam0);
}

void func_437(int iParam0)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return;
	}
	func_218(&(Local_77[iVar0 /*44*/].f_4), iParam0);
}

void func_438()
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
	if (!func_213(&iVar15))
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
	while (iVar0 < 10)
	{
		iVar14 = func_418(iVar0);
		if (!func_439(iVar14))
		{
		}
		else if (!func_440(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_1486.f_332.f_65), iVar14);
			}
			if (func_456(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, 0, 0))
			{
				func_599(iVar14);
				func_600(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_439(int iParam0)
{
	return !func_442(&(Local_1486.f_332.f_99), 5, iParam0);
}

bool func_440(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_1486.f_332.f_234, iParam0))
	{
		return false;
	}
	*uParam1 = Local_1486.f_332.f_103[iParam0 /*13*/];
	uParam1->f_1 = Local_1486.f_332.f_103[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_1486.f_332.f_103[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_441(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_601(iParam1))
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
	if (func_602(*uParam0, &(Local_1486.f_332.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_442(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_365(iParam1, &Var0))
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

int func_443(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_365(iParam1, &Var0))
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

int func_444(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_365(iParam1, &Var0))
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

void func_445(int iParam0)
{
}

bool func_446(int iParam0)
{
	return func_442(&(Local_1486.f_332.f_99), 4, iParam0);
}

bool func_447(int iParam0)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return false;
	}
	return func_442(&(Local_77[iVar0 /*44*/].f_17), 4, iParam0);
}

bool func_448(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_1486.f_332.f_77[iParam0]));
}

void func_449(int iParam0)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return;
	}
	func_443(&(Local_77[iVar0 /*44*/].f_17), 4, iParam0);
}

bool func_450(int iParam0)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_77[iVar0 /*44*/].f_17.f_5[iParam0]));
}

void func_451(int iParam0)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Local_77[iVar0 /*44*/].f_17.f_5[iParam0]));
}

bool func_452(int iParam0)
{
	return func_442(&(Local_1486.f_332.f_99), 6, iParam0);
}

bool func_453(int iParam0)
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

bool func_454(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	return func_442(&(Local_77[iParam1 /*44*/].f_17), 1, iParam0);
}

bool func_455(int iParam0)
{
	int iVar0;

	iVar0 = func_603(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_379())
	{
		return true;
	}
	return false;
}

bool func_456(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	if (!func_604(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_442(&(Local_77[iParam1 /*44*/].f_17), 3, iParam0);
}

bool func_457(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_605(uParam2, 1, iVar0);
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
			if (func_606(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_608(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_609(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_610(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_20 && func_611(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_612(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_613(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_614(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258.f_23) < 300)
			{
				if (func_615(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_615(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_616(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258.f_19 || uParam2->f_13 < 20f)
			{
				if (func_617(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_618(uParam2, 4000))
				{
					if ((func_619(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_620(uParam2, iParam0)) && func_621(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_619(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_620(uParam2, iParam0)) && func_621(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258.f_34 == 0)
			{
				if (Global_1940258.f_35 != 0)
				{
					if (func_622(iParam0, Global_1940258.f_35))
					{
						func_623();
						*iParam3 = 2;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_624(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_625() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_623();
						*iParam3 = 2;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_626())
				{
					if (func_622(iParam0, Global_1940258.f_36))
					{
						func_623();
						*iParam3 = 2;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_627(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_628(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_607(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_629(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_630(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_631(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_632(uParam2, 4000))
				{
					if (func_633(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_634(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_635(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_458(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_636(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_637(&iVar4, iParam1->f_12);
	func_639(Local_1486.f_179.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_638(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_640(&iVar4, &uVar0);
}

bool func_459(int iParam0)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return false;
	}
	return func_442(&(Local_77[iVar0 /*44*/].f_17), 0, iParam0);
}

bool func_460(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_1486.f_332.f_64, iParam0))
	{
		return false;
	}
	if (func_175(Local_1486.f_332.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_641(&(Local_1486.f_332))))
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
	if (Local_77[iParam2 /*44*/].f_17.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_77[iParam2 /*44*/].f_17.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_462(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<15> Var3;

	iVar0 = func_588(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = func_603(iParam0);
	fVar2 = func_484(PLAYER::PLAYER_PED_ID(), iVar0, 1, 1);
	if (iParam1 == 256 && fVar2 > 40f)
	{
		return false;
	}
	switch (iVar1)
	{
		case 0:
			switch (iParam1)
			{
				case 2:
					if (!PED::IS_PED_INJURED(iVar0))
					{
						func_319(134217728);
					}
					else
					{
						func_319(268435456);
					}
					if (!func_492(8388608))
					{
						if (func_381(256))
						{
							if ((func_494(func_506()) || func_494(func_495())) || func_494(func_493()))
							{
								return false;
							}
							func_502(8388608);
						}
					}
					return false;
				case 2048:
					if (!func_492(1048576))
					{
						if (func_381(256))
						{
							if ((func_494(func_493()) || func_494(func_495())) || func_494(func_496()))
							{
								return false;
							}
							func_502(1048576);
						}
					}
					return false;
				case 8:
					if (!func_492(2097152))
					{
						if (func_381(256) && !func_317(262144))
						{
							if ((func_494(func_506()) || func_494(func_495())) || func_494(func_496()))
							{
								return false;
							}
							func_502(2097152);
						}
					}
					return false;
				case 4:
				case 256:
					if (func_215() != 0)
					{
						if (!func_492(4194304))
						{
							if (func_381(256))
							{
								if ((func_494(func_506()) || func_494(func_496())) || func_494(func_493()))
								{
									return false;
								}
								if (iParam1 == 256 && fVar2 > 30f)
								{
									return false;
								}
								func_502(4194304);
							}
						}
					}
					return false;
				default:
					break;
			}
			Jump @689; //curOff = 571
			if (!func_275())
			{
				func_513();
			}
			func_478();
			if (!func_379())
			{
				func_387(1);
			}
			if (!func_320(512))
			{
				Var3.f_10 = 255;
				Var3 = { func_642(398686063) };
				func_643(&Var3);
				func_319(512);
			}
			if (func_494(func_511()))
			{
				func_504(func_511());
			}
			if (iParam1 != 0)
			{
				func_319(536870912);
			}
			return true;
			return false;
		}

void func_463(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return;
	}
	func_444(&(Local_77[iVar0 /*44*/].f_17), 1, iParam0);
	if (bParam1)
	{
		Local_77[iVar0 /*44*/].f_17.f_16[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_464(int iParam0)
{
	return func_442(&(Local_1486.f_332.f_99), 1, iParam0);
}

bool func_465(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	return func_442(&(Local_77[iParam1 /*44*/].f_17), 2, iParam0);
}

bool func_466(int iParam0)
{
	return true;
}

void func_467(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_588(iParam0);
	iVar1 = func_603(iParam0);
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
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			TASK::TASK_COMBAT_HATED_TARGETS(iVar0, -1f);
			break;
		case 0:
			break;
	}
}

void func_468(int iParam0)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return;
	}
	func_444(&(Local_77[iVar0 /*44*/].f_17), 2, iParam0);
}

bool func_469(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_1486.f_332.f_88[iParam0]), &uVar0);
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
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Local_1486.f_332.f_66[iParam0]), iParam1);
}

bool func_472(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_588(iParam0);
	iVar1 = func_603(iParam0);
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			PED::REGISTER_TARGET(iVar0, uParam3, 1);
			break;
	}
	return true;
}

void func_473(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_213(&iVar0))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&(Local_77[iVar0 /*44*/].f_17.f_5[iParam0]), iParam1);
}

bool func_474()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_475(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_644(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_476(int iParam0, bool bParam1, bool bParam2)
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

float func_477()
{
	return 12f;
}

void func_478()
{
	if (!func_64(2))
	{
		return;
	}
	func_143(8);
}

void func_479()
{
	int iVar0;

	if (!func_320(1024) && !func_320(8))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1486.f_179.f_7)
	{
		if (!func_182(iVar0))
		{
		}
		else if (func_403(iVar0))
		{
			if (!func_381(512))
			{
			}
			else
			{
				func_645(iVar0, joaat("BLIP_STYLE_ENEMY"), 942020339, 1);
			}
			iVar0++;
		}
	}
}

void func_480()
{
	int iVar0;

	if (!func_320(131072))
	{
		func_646();
		return;
	}
	if (func_178(33554432, -1, 1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1486.f_179.f_7)
	{
		if (!func_378(iVar0))
		{
		}
		else
		{
			func_169(iVar0);
		}
		iVar0++;
	}
	func_319(33554432);
}

void func_481(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

void func_482(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 256);
	}
	else
	{
		func_218(uParam0, 256);
	}
}

void func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_485();
			break;
		case 1:
			func_647(2, "NB_NBTIED_INTERACT_CUT", joaat("INPUT_INTERACT_LOCKON_ROB"), 3, 0);
			func_648(0);
			break;
		case 2:
			func_647(2, "NB_NBTIED_INTERACT_CUT", joaat("INPUT_INTERACT_LOCKON_ROB"), 3, 0);
			func_648(1);
			break;
		default:
			break;
	}
}

float func_484(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_485()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_649(Local_1486.f_19.f_145[iVar0]))
		{
		}
		else
		{
			func_650(&(Local_1486.f_19.f_145[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

bool func_486(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, iParam1, iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == func_181(iParam0);
}

bool func_487(int iParam0)
{
	return (Local_1486.f_19.f_8 && iParam0) != 0;
}

void func_488(int iParam0)
{
	if (func_487(iParam0))
	{
		return;
	}
	Local_1486.f_19.f_8 = (Local_1486.f_19.f_8 || iParam0);
}

void func_489(int iParam0)
{
	if (!func_487(iParam0))
	{
		return;
	}
	Local_1486.f_19.f_8 = (Local_1486.f_19.f_8 - (Local_1486.f_19.f_8 && iParam0));
}

Vector3 func_490()
{
	switch (func_216())
	{
		case 0:
			return 1562.239f, -2047.35f, 47.36497f;
		case 1:
			return 1379.845f, -1696.251f, 66.90226f;
		case 2:
			return 1621.773f, -1650.282f, 56.04998f;
		case 3:
			return 1504.962f, -1470.059f, 71.38501f;
		case 4:
			return 1082.787f, -1265.953f, 67.50075f;
		case 5:
			return 682.7037f, -992.2516f, 52.46186f;
		case 6:
			return 707.7961f, -885.7428f, 48.27122f;
		case 7:
			return 879.61f, -538.0069f, 88.09176f;
		case 8:
			return 1012.342f, -394.3301f, 90.45406f;
		default:
			break;
	}
	return vLocal_13;
}

int func_491(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	char* sVar0;

	if (func_175(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (func_175(uParam0->f_1, 16))
			{
				func_651(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_652(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		if (!func_175(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_653(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = func_655(func_654(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_656(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 15f)), BUILTIN::FLOOR((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, func_657(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (func_658(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_217(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_217(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

bool func_492(int iParam0)
{
	return (Local_1486.f_19.f_152 && iParam0) != 0;
}

int func_493()
{
	switch (func_215())
	{
		case 0:
			return 24;
		case 1:
			return 25;
		default:
			break;
	}
	return 0;
}

bool func_494(int iParam0)
{
	var uVar0;

	if (!func_659(iParam0, &uVar0))
	{
		return false;
	}
	if (!func_660(&uVar0))
	{
		return false;
	}
	return true;
}

int func_495()
{
	switch (func_215())
	{
		case 1:
			return 26;
		default:
			break;
	}
	return 0;
}

int func_496()
{
	switch (func_215())
	{
		case 0:
			return 27;
		case 1:
			return 28;
		default:
			break;
	}
	return 0;
}

int func_497()
{
	switch (func_215())
	{
		case 0:
			return 8;
		case 1:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_498()
{
	switch (func_215())
	{
		case 0:
			return 10;
		case 1:
			return 14;
		default:
			break;
	}
	return 0;
}

int func_499()
{
	switch (func_215())
	{
		case 0:
			return 11;
		case 1:
			return 15;
		default:
			break;
	}
	return 0;
}

int func_500()
{
	switch (func_215())
	{
		case 0:
			return 12;
		case 1:
			return 16;
		default:
			break;
	}
	return 0;
}

int func_501()
{
	switch (func_215())
	{
		case 0:
			return 13;
		case 1:
			return 17;
		default:
			break;
	}
	return 0;
}

void func_502(int iParam0)
{
	if (func_518(iParam0, -1, 1))
	{
		return;
	}
	Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1.f_1 = (Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1.f_1 || iParam0);
}

int func_503()
{
	switch (func_215())
	{
		case 0:
			return 18;
		case 1:
			return 19;
		default:
			break;
	}
	return 0;
}

void func_504(int iParam0)
{
	struct<15> Var0;

	Var0 = { func_642(753226) };
	Var0.f_11 = iParam0;
	func_643(&Var0);
}

int func_505()
{
	switch (func_215())
	{
		case 0:
			return 20;
		case 1:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_506()
{
	switch (func_215())
	{
		case 0:
			return 22;
		case 1:
			return 23;
		default:
			break;
	}
	return 0;
}

void func_507(int iParam0, int iParam1, int iParam2)
{
	struct<15> Var0;

	Var0 = { func_642(816343230) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	func_643(&Var0);
}

void func_508()
{
	func_661(1, joaat("WORLD_HUMAN_GUARD_SCOUT"));
	func_661(2, joaat("WORLD_HUMAN_WAITING_IMPATIENT"));
	func_661(3, joaat("WORLD_HUMAN_STARE_STOIC"));
	func_661(4, joaat("WORLD_HUMAN_WAITING_IMPATIENT"));
	func_661(5, joaat("WORLD_HUMAN_GUARD_SCOUT"));
	func_661(6, joaat("WORLD_HUMAN_STARE_STOIC"));
}

void func_509(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_662(uParam0, iParam1, sParam2))
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

float func_510()
{
	return 40f;
}

int func_511()
{
	switch (func_215())
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_512()
{
	return (func_519() + 10f);
}

void func_513()
{
	int iVar0;

	if (!func_128(32, 255))
	{
		func_663(Local_1486.f_1, Local_1486.f_3);
		if (!func_128(1024, 255))
		{
			func_664(Local_1486.f_1);
			func_145(1024);
		}
		iVar0 = func_326(Local_1486.f_1, Local_1486.f_2);
		func_567(iVar0);
		func_568(iVar0);
		func_143(2);
		func_665(Local_1486.f_9);
		func_666(Local_1486.f_1);
		func_667(Local_1486.f_1, Local_1486.f_2, Local_1486.f_3);
		func_145(32);
	}
}

void func_514(int* iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(*iParam0))
	{
		return;
	}
	MAP::REMOVE_BLIP(iParam0);
}

bool func_515(int iParam0, float fParam1)
{
	var uVar0[6];
	int iVar7;
	int iVar8;
	int iVar9;

	if (func_320(8))
	{
		func_478();
		func_319(8);
		return true;
	}
	if (*fParam1 > func_519())
	{
		return false;
	}
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < Local_1486.f_179.f_7)
	{
		if (!func_182(iVar8) || func_403(iVar8))
		{
		}
		else
		{
			uVar0[iVar7] = Local_1486.f_179.f_7[iVar8 /*11*/];
			iVar7++;
		}
		iVar8++;
	}
	iVar9 = func_668(*iParam0, &uVar0, &(Local_1486.f_19.f_140), &(Local_1486.f_19.f_141));
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar9))
	{
		return false;
	}
	func_509(&(Local_1486.f_19.f_42), iVar9, "EXC_OPED1", 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar9, *iParam0, 0, -1f, -1f, -1f);
	func_669();
	func_507(3, Local_1486.f_19.f_141, 11);
	Local_16.f_7.f_16 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(*iParam0);
	func_319(8);
	func_478();
	return true;
}

float func_516()
{
	return (func_519() + 5f);
}

void func_517(int iParam0)
{
	func_504(3);
	func_504(4);
	func_507(5, Local_1486.f_19.f_141, 0);
	func_386(&(Local_16.f_7.f_6[0]));
	func_319(16);
}

bool func_518(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
		{
			return false;
		}
	}
	return (Local_77[iParam1 /*44*/].f_1.f_1 && iParam0) != 0;
}

float func_519()
{
	return 22f;
}

void func_520(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char* sVar9;

	switch (func_216())
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1563.462f, -2047.287f, 47.43777f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1384.543f, -1696.767f, 76.03621f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1624.361f, -1652.599f, 49.90716f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1498.346f, -1466.856f, 71.26947f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1075.167f, -1267.896f, 71.26947f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 683.1252f, -996.1409f, 52.13353f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 705.7239f, -886.8f, 47.43777f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 879.509f, -538.902f, 83.05545f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1017.049f, -390.1011f, 89.35362f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
	}
	func_670(uParam0, vVar0, vVar3, vVar6, sVar9);
}

int func_521(int iParam0)
{
	return iParam0;
}

void func_522(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (bParam5 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		return;
	}
	PED::_0xFC3DB99C8144CD81(*iParam0, *uParam1, iParam3, iParam4, 0);
	if (bParam2)
	{
		PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
	}
}

bool func_523(int iParam0)
{
	return (Local_1486.f_19.f_151 && iParam0) != 0;
}

int func_524()
{
	int iVar0;
	int iVar1;

	if (!func_178(2097152, -1, 1))
	{
		return -1;
	}
	if (func_178(4194304, -1, 1))
	{
		return Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1.f_2;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_671(Local_1486.f_19.f_145[iVar0], 1))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
			Local_16.f_7.f_17 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			Local_77[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_1.f_2 = iVar0;
			func_319(4194304);
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_525()
{
	int iVar0;

	if (!func_381(4))
	{
		func_383(&(Local_16.f_7.f_6[3]));
		func_382(4);
		return;
	}
	if (!func_237(Local_16.f_7.f_6[3]))
	{
		func_383(&(Local_16.f_7.f_6[3]));
	}
	iVar0 = func_385(Local_16.f_7.f_6[3]);
	if (iVar0 < 12000)
	{
		return;
	}
	switch (Local_1486.f_19.f_3)
	{
		case 0:
			if (func_672(32768))
			{
				func_673(1);
				func_386(&(Local_16.f_7.f_6[3]));
				func_384(4);
				return;
			}
			if (!func_674(32768))
			{
				return;
			}
			if (func_675(1))
			{
				return;
			}
			func_507(func_498(), 0, 0);
			func_502(32768);
			break;
		case 1:
			if (func_672(65536))
			{
				func_673(2);
				func_386(&(Local_16.f_7.f_6[3]));
				func_384(4);
				return;
			}
			if (!func_674(65536))
			{
				return;
			}
			if (func_675(1))
			{
				return;
			}
			func_507(func_499(), 0, 0);
			func_502(65536);
			break;
		case 2:
			if (func_672(131072))
			{
				func_673(3);
				func_386(&(Local_16.f_7.f_6[3]));
				func_384(4);
				return;
			}
			if (!func_674(131072))
			{
				return;
			}
			if (func_675(1))
			{
				return;
			}
			func_507(func_500(), 0, 0);
			func_502(131072);
			break;
		case 3:
			if (func_672(262144))
			{
				func_673(4);
				func_386(&(Local_16.f_7.f_6[3]));
				func_384(4);
				return;
			}
			if (!func_674(262144))
			{
				return;
			}
			if (func_675(1))
			{
				return;
			}
			func_507(func_501(), 0, 0);
			func_502(262144);
			break;
	}
}

bool func_526(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_676(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

bool func_527(int iParam0)
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
	if (PED::_0x4642182A298187D0(iParam0, -1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 2, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 4, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 5, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 10, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	return false;
}

Vector3 func_528(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 1562.99f, -2044.45f, 48.34f;
				case 2:
					return 1562.99f, -2044.45f, 48.34f;
				case 3:
					return 1563.32f, -2045.41f, 48.34f;
				case 4:
					return 1563.45f, -2045.38f, 48.34f;
				case 5:
					return 1563.45f, -2045.38f, 48.34f;
				case 6:
					return 1563.45f, -2045.38f, 48.34f;
				default:
					break;
			}
			return 1562.99f, -2044.45f, 48.34f;
		case 1:
			switch (iParam0)
			{
				case 1:
					return 1376.98f, -1695.52f, 67.86f;
				case 2:
					return 1376.98f, -1695.52f, 67.86f;
				case 3:
					return 1377.91f, -1695.2f, 67.86f;
				case 4:
					return 1377.91f, -1695.06f, 67.86f;
				case 5:
					return 1377.91f, -1695.06f, 67.86f;
				case 6:
					return 1377.91f, -1695.06f, 67.86f;
				default:
					break;
			}
			return 1376.98f, -1695.52f, 67.86f;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 1618.74f, -1649.64f, 57.03f;
				case 2:
					return 1618.74f, -1649.64f, 57.03f;
				case 3:
					return 1619.67f, -1649.31f, 57.03f;
				case 4:
					return 1619.66f, -1649.18f, 57.03f;
				case 5:
					return 1619.66f, -1649.18f, 57.03f;
				case 6:
					return 1619.66f, -1649.18f, 57.03f;
				default:
					break;
			}
			return 1618.74f, -1649.64f, 57.03f;
		case 3:
			switch (iParam0)
			{
				case 1:
					return 1505.59f, -1467.06f, 72.38f;
				case 2:
					return 1505.59f, -1467.06f, 72.38f;
				case 3:
					return 1505.92f, -1467.99f, 72.38f;
				case 4:
					return 1506.06f, -1467.98f, 72.38f;
				case 5:
					return 1506.06f, -1467.98f, 72.38f;
				case 6:
					return 1506.06f, -1467.98f, 72.38f;
				default:
					break;
			}
			return 1505.59f, -1467.06f, 72.38f;
		case 4:
			switch (iParam0)
			{
				case 1:
					return 1079.72f, -1265.25f, 68.57f;
				case 2:
					return 1079.72f, -1265.25f, 68.57f;
				case 3:
					return 1080.65f, -1264.93f, 68.57f;
				case 4:
					return 1080.64f, -1264.79f, 68.57f;
				case 5:
					return 1080.64f, -1264.79f, 68.57f;
				case 6:
					return 1080.64f, -1264.79f, 68.57f;
				default:
					break;
			}
			return 1079.72f, -1265.25f, 68.57f;
		case 5:
			switch (iParam0)
			{
				case 1:
					return 679.67f, -991.53f, 53.42f;
				case 2:
					return 679.67f, -991.53f, 53.42f;
				case 3:
					return 680.59f, -991.21f, 53.42f;
				case 4:
					return 680.59f, -991.07f, 53.42f;
				case 5:
					return 680.59f, -991.07f, 53.42f;
				case 6:
					return 680.59f, -991.07f, 53.42f;
				default:
					break;
			}
			return 679.67f, -991.53f, 53.42f;
		case 6:
			switch (iParam0)
			{
				case 1:
					return 708.5f, -882.7f, 49.26f;
				case 2:
					return 708.5f, -882.7f, 49.26f;
				case 3:
					return 708.33f, -883.62f, 49.26f;
				case 4:
					return 708.96f, -883.62f, 49.26f;
				case 5:
					return 708.96f, -883.62f, 49.26f;
				case 6:
					return 708.96f, -883.62f, 49.26f;
				default:
					break;
			}
			return 708.5f, -882.7f, 49.26f;
		case 7:
			switch (iParam0)
			{
				case 1:
					return 880.35f, -534.95f, 89.04f;
				case 2:
					return 880.35f, -534.95f, 89.04f;
				case 3:
					return 880.68f, -535.88f, 89.04f;
				case 4:
					return 880.82f, -535.87f, 89.04f;
				case 5:
					return 880.82f, -535.87f, 89.04f;
				case 6:
					return 880.82f, -535.87f, 89.04f;
				default:
					break;
			}
			return 880.35f, -534.95f, 89.04f;
		case 8:
			switch (iParam0)
			{
				case 1:
					return 1010.46f, -396.79f, 91.43f;
				case 2:
					return 1010.46f, -396.79f, 91.43f;
				case 3:
					return 1010.53f, -395.81f, 91.43f;
				case 4:
					return 1010.41f, -395.76f, 91.43f;
				case 5:
					return 1010.41f, -395.76f, 91.43f;
				case 6:
					return 1010.41f, -395.76f, 91.43f;
				default:
					break;
			}
			return 1010.53f, -395.81f, 91.43f;
	}
	return vLocal_13;
}

float func_529(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 156.45f;
				case 2:
					return 156.45f;
				case 3:
					return 85.98f;
				case 4:
					return 85.98f;
				case 5:
					return 85.98f;
				case 6:
					return 85.98f;
				default:
					break;
			}
			return 156.45f;
		case 1:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 2:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 3:
			switch (iParam0)
			{
				case 1:
					return 156.85f;
				case 2:
					return 156.85f;
				case 3:
					return 62.93f;
				case 4:
					return 86.38f;
				case 5:
					return 86.38f;
				case 6:
					return 86.38f;
				default:
					break;
			}
			return 156.85f;
		case 4:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 5:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 6:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 7:
			switch (iParam0)
			{
				case 1:
					return 156.85f;
				case 2:
					return 156.85f;
				case 3:
					return 62.93f;
				case 4:
					return 86.38f;
				case 5:
					return 86.38f;
				case 6:
					return 86.38f;
				default:
					break;
			}
			return 156.85f;
		case 8:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
	}
	return 0f;
}

void func_530(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_531(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	float fVar0;
	float fVar1;

	fVar0 = func_285(iParam0, vParam1, 1);
	if (fVar0 <= fParam4)
	{
		return true;
	}
	if (bParam5)
	{
		if (!func_677(iParam0, 1435919172, 0))
		{
			if (bParam6)
			{
				fVar1 = 1f;
				if (fVar0 <= fVar1)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_532(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "CUT_FREE_PLYR_F", 24);
			break;
		case 2:
			StringCopy(sParam1, "CUT_FREE_PLYR_F_FEMALE", 24);
			break;
		case 3:
			StringCopy(sParam1, "PB_CUT_FREE_DEAD_F", 24);
			break;
		case 4:
			StringCopy(sParam1, "CUT_FREE_PLYR_L", 24);
			break;
		case 5:
			StringCopy(sParam1, "CUT_FREE_PLYR_L_FEMALE", 24);
			break;
		case 6:
			StringCopy(sParam1, "PB_CUT_FREE_DEAD_L", 24);
			break;
		default:
			return false;
	}
	return true;
}

bool func_533(int iParam0, char* sParam1, float fParam2, int iParam3)
{
	float fVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return iParam3;
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
	{
		return iParam3;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0);
	if (fVar0 >= fParam2)
	{
		return true;
	}
	return false;
}

float func_534(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0.301f;
		case 2:
			return 0.3024f;
		case 4:
			return 0.3004f;
		case 5:
			return 0.3004f;
		default:
			break;
	}
	return 0.301f;
	return 0.301f;
}

void func_535()
{
	int iVar0;

	if (!func_320(1073741824 /* Float: 2f */))
	{
		return;
	}
	if (func_320(8192))
	{
		return;
	}
	iVar0 = func_181(0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	func_678(iVar0, 1);
	func_319(8192);
}

int func_536(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_679(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_537(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_679(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_538(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_352(&Var1, iParam0))
	{
		iVar0 = ((func_680() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_539(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_540(int iParam0, int iParam1)
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

void func_541(var uParam0)
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 16, Global_1051252.f_16[16]);
	func_681(uParam0, uParam0->f_1);
}

int func_542(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
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
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
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
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
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
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
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
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
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
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
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
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
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
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
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
			return 405;
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
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
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
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
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
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
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
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
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
			return 544;
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
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
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
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
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
			return 542;
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
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
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
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
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
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
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
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
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
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
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
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
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
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
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

bool func_543(int iParam0)
{
	int iVar0;

	iVar0 = func_682(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_544(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

bool func_545(int iParam0)
{
	if (func_683(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_546()
{
	return true;
}

void func_547(var uParam0, int iParam1, int iParam2)
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

void func_548(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 16384);
	}
	else
	{
		func_217(&(uParam0->f_2), 16384);
	}
}

void func_549(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 2048);
	}
	else
	{
		func_217(&(uParam0->f_2), 2048);
	}
}

void func_550(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 16);
	}
	else
	{
		func_218(uParam0, 67108864);
		func_218(uParam0, 16);
	}
}

void func_551(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 128);
	}
	else
	{
		func_217(&(uParam0->f_2), 128);
	}
}

void func_552(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_217(uParam0, 268435456);
	}
	else
	{
		func_218(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_217(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_218(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_217(uParam0, 536870912);
	}
	else
	{
		func_218(uParam0, 536870912);
	}
}

float func_553(var uParam0)
{
	return uParam0->f_26;
}

void func_554(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_555(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 1);
	}
	else
	{
		func_218(uParam0, 1);
	}
}

void func_556(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 512);
	}
	else
	{
		func_218(uParam0, 512);
	}
}

void func_557(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 2);
	}
	else
	{
		func_218(uParam0, 2);
	}
}

void func_558(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 8);
	}
	else
	{
		func_218(uParam0, 8);
	}
}

int func_559(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0 /*11*/].f_4;
}

float func_560(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_561(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0 /*11*/].f_6;
}

bool func_562(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_260(iParam1))
	{
		return false;
	}
	iVar0 = func_684(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_563(int iParam0, bool bParam1)
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

bool func_564(int iParam0)
{
	return func_170(iParam0, 32);
}

bool func_565(int iParam0)
{
	return func_170(iParam0, 64);
}

Vector3 func_566(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_567(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_125(Global_1272030[iParam0 /*4*/]))
	{
		return;
	}
	func_685(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_126(&(Global_1272030[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_686(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_686(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1296859.f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_686(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_686(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1296859.f_21, true);
	}
}

void func_568(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_541(&Var0);
}

void func_569(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_687(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_688(iParam1);
	func_689(iVar0, iParam0);
}

int func_570(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_690(vVar3, vVar6);
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
	if (func_691(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_571(int iParam0)
{
	func_692(iParam0->f_11, iParam0->f_12, iParam0->f_13, 0, 0, 0);
}

void func_572(int iParam0)
{
	func_693(iParam0->f_11, 0);
}

int func_573(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_694(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

struct<2> func_574(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_575(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_576(bool bParam0)
{
	if (!func_64(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_64(256))
		{
			func_174(Local_1486.f_18, 0);
			func_143(256);
		}
	}
	func_143(16);
}

bool func_577()
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

int func_578(int iParam0, int iParam1)
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

void func_579(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 14, &uParam1);
}

void func_580(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_695(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_581(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0 /*11*/].f_10;
}

void func_582(int iParam0, char* sParam1, bool bParam2)
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

void func_583(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_181(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	func_404(iVar0, joaat("WEAPON_REPEATER_CARBINE"));
	TASK::TASK_COMBAT_HATED_TARGETS(iVar1, -1f);
}

int func_584(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_696(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_696(iVar4) && iVar4 != iVar0)
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
	if (func_28() == -1 && !func_697(iVar0))
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
				if (func_697(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_34 && func_696(iVar0))
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
		func_698(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_699(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_700(iVar0))
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

Vector3 func_585()
{
	return Local_1486.f_15;
}

int func_586(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_701())
	{
		return 0;
	}
	STREAMING::_REQUEST_IMAP(iParam0);
	return 0;
}

int func_587(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_701())
	{
		return 0;
	}
	STREAMING::_REMOVE_IMAP(iParam0);
	return 0;
}

int func_588(int iParam0)
{
	return func_340(iParam0);
}

int func_589(int iParam0)
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

void func_590(int iParam0)
{
	if (!func_419(func_418(iParam0), &(Local_1486.f_332.f_103[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_1486.f_332.f_234), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_1486.f_332.f_234), iParam0);
}

int func_591(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_365(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_366(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_366(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_366(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_592(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_365(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_366(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_366(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_366(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_593(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_442(&(Local_77[iParam1 /*44*/].f_17), 1, iParam0))
	{
		if (Local_77[iParam1 /*44*/].f_17.f_16[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_38.f_1[iParam0]))
		{
			if (Local_16.f_38.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_16.f_38.f_12[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_77[iParam1 /*44*/].f_17.f_16[iParam0], Local_16.f_38.f_12[iParam0]))
		{
			Local_16.f_38.f_1[iParam0] = iVar0;
			Local_16.f_38.f_12[iParam0] = Local_77[iParam1 /*44*/].f_17.f_16[iParam0];
		}
	}
}

void func_594(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_702() - fParam1);
	func_703(uParam0, 1);
	func_704(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_595(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_596(var uParam0)
{
	if (!func_430(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_705(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_702() - uParam0->f_1);
}

char* func_597(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_598(char[32] cParam0, var uParam8, var uParam9)
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
	iVar12 = func_706(&Var1);
	if (iVar12 != -1)
	{
		switch (Global_1275441[iVar12 /*29*/])
		{
			case 4:
				*uParam9 = { Global_1275441[iVar12 /*29*/].f_22 };
				func_707(iVar12);
				return 2;
			case 3:
				*uParam9 = { Global_1275441[iVar12 /*29*/].f_22 };
				func_707(iVar12);
				return 1;
		}
	}
	else
	{
		if (func_708())
		{
			return 0;
		}
		if (!func_709(&Var1))
		{
			return 0;
		}
		if (!func_710(uParam8))
		{
			uParam9->f_3 = 2;
			return 2;
		}
		func_711(uParam8, &Var1);
	}
	return 0;
}

void func_599(int iParam0)
{
	int iVar0;

	if (!func_213(&iVar0))
	{
		return;
	}
	func_444(&(Local_77[iVar0 /*44*/].f_17), 3, iParam0);
}

void func_600(int iParam0)
{
}

bool func_601(int iParam0)
{
	return func_442(&(Local_1486.f_332.f_99), 7, iParam0);
}

bool func_602(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_605(uParam1, 0, iVar0);
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
				if (func_618(uParam1, 4000))
				{
					if ((func_619(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_620(uParam1, iParam0)) && func_621(uParam1, iParam0))
					{
						func_623();
						*uParam2 = 2;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_618(uParam1, 4000))
				{
					if ((func_619(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_620(uParam1, iParam0)) && func_621(uParam1, iParam0))
					{
						func_623();
						*uParam2 = 2;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258.f_35 != 0)
			{
				if (Global_1940258.f_34 == 0)
				{
					if (func_622(iParam0, Global_1940258.f_35))
					{
						func_623();
						*uParam2 = 2;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_626())
				{
					if (func_622(iParam0, Global_1940258.f_36))
					{
						func_623();
						*uParam2 = 2;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_612(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_613(Global_34, iParam0, uParam1))
					{
						func_623();
						*uParam2 = 4;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_614(Global_34, iParam0, uParam1))
					{
						func_623();
						*uParam2 = 256;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_712(iParam0, uParam1))
			{
				func_623();
				*uParam2 = 131072;
				func_607(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_713(iParam0, uParam1))
			{
				func_623();
				*uParam2 = 262144;
				func_607(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_603(int iParam0)
{
	return iParam0;
}

bool func_604(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_605(var uParam0, bool bParam1, int iParam2)
{
	func_714(iParam2);
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
		uParam0->f_14 = func_715(0);
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
							func_217(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_716(1, 1))
						{
							func_217(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_716(1, 1) || *uParam0 & 8192 != 0))
				{
					func_218(uParam0, 33554432);
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
			if (func_717(uParam0))
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
	func_718(uParam0);
}

bool func_606(int iParam0, var uParam1)
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
			if (!func_719(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_720(iParam0, iVar2) <= func_721(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_607(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_722(iParam2, 1, 1, 1, 0))
	{
		func_217(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_723(uParam1, 1);
	func_724();
}

bool func_608(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_725(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_726(uParam1);
			if (func_727(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_728(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_723(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_729(uParam1))
						{
							func_723(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_609(int iParam0, int iParam1, var uParam2)
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
	if (func_730(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_726(uParam2);
		if (func_727(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_728(uParam2)
				{
					func_723(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_610(int iParam0, var uParam1)
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
	if (func_719(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_728(uParam1)
		{
			fVar3 = func_726(uParam1);
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

int func_611(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_731(bParam1, bParam2, bParam3);
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

bool func_612(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_625();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_613(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_732(uParam2);
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
			if (func_621(uParam2, iParam1))
			{
				func_723(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_614(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_641(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_621(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_723(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_615(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_733(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_723(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_30))
				{
					func_723(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar4, 0, 0);
					if (func_734(iParam1, vVar0, vVar4))
					{
						func_723(uParam2, 1);
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
					func_723(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar7, 0, 0);
					if (func_734(iParam1, vVar0, vVar7))
					{
						func_723(uParam2, 1);
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

bool func_616(int iParam0, var uParam1)
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
		if (!func_719(iParam0, uParam1, Global_1940258.f_28[iVar0]) || iParam0 == Global_1940258.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_735(Global_1940258.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false), vVar9);
			if (func_736(Global_1940258.f_28[iVar0]))
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
			if (func_737(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_738(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_739(uParam1, iParam0, fVar1, iVar0))
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

bool func_617(int iParam0, var uParam1)
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

bool func_618(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_625();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_619(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_740(iVar0, &iVar2))
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
	if (func_741(iVar0, iParam0))
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

int func_620(var uParam0, int iParam1)
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

bool func_621(var uParam0, int iParam1)
{
	if (func_742(uParam0))
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

bool func_622(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_484(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_623()
{
}

bool func_624(var uParam0, int iParam1)
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
		if (func_743(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_625();
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
						if (func_285(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_625();
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

int func_625()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_626()
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
	if ((func_625() - Global_1940258.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_627(var uParam0, int iParam1)
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
	fVar0 = func_721(uParam0);
	if (uParam0->f_13 > func_553(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_744(iParam1);
	iVar1 = func_745(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_628(var uParam0, int iParam1)
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
	if (func_390(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_746(vVar1, vVar4);
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

int func_629(int iParam0, int iParam1, var uParam2)
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
	return func_747(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_630(int iParam0, var uParam1)
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
		if (func_748(iParam0, uParam1, 1))
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
	if (!func_453(iParam0))
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
			if (func_749(uParam1))
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
					if (!func_750(uParam1, iParam0))
					{
						if (func_285(iVar4, Global_35, 1) < 7f)
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

bool func_631(int iParam0, var uParam1)
{
	if (!func_751(0))
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

bool func_632(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_625();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_633(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_634(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_625();
	}
	else if (func_625() - uParam1->f_5) > func_752(uParam1)
	{
		return func_753(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_635(var uParam0, int iParam1)
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

bool func_636(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_175(Local_1486.f_332.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_1486.f_332.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_1486.f_332.f_65), iParam0);
	if (!bParam3 && Local_77[iParam2 /*44*/].f_17.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_77[iParam2 /*44*/].f_17.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
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
	iVar0 = func_754(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::_0x705BE297EEBDB95D(iVar0) || func_755(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_0x79B1A6E780266DB0(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_637(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_638(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_639(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_756(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_757(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_758(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_760(func_759(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_761(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_761(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_762((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_762((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_762(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_762((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_640(int iParam0, var uParam1)
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

int func_641(var uParam0)
{
	return uParam0->f_23;
}

struct<15> func_642(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_1486, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_643(var uParam0)
{
	func_764(uParam0, func_763(4, 117));
}

bool func_644(int iParam0, var uParam1, var uParam2, bool bParam3)
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

int func_645(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!func_375(255))
	{
		func_169(iParam0);
		return 0;
	}
	iVar0 = func_181(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::_IS_PED_HOGTIED(iVar0))
		{
			func_169(iParam0);
			return 0;
		}
	}
	if (func_484(PLAYER::PLAYER_PED_ID(), Local_1486.f_179.f_7[iParam0 /*11*/], 1, 1) > 100f)
	{
		return 0;
	}
	if (MAP::DOES_BLIP_EXIST(Local_1486.f_179.f_7[iParam0 /*11*/].f_1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		iParam2 = 942020339;
	}
	if (func_182(iParam0))
	{
		func_765(iParam0, iParam1, iParam2, 0, "NB_NBTIED_BLIP_NAME_ENE");
	}
	else
	{
		func_765(iParam0, iParam1, iParam2, 0, "NB_NBTIED_BLIP_NAME_STR");
	}
	return 1;
}

void func_646()
{
	float fVar0;

	if (func_275())
	{
		return;
	}
	fVar0 = func_285(Global_34, func_283(), 1);
	if (fVar0 < 125f)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_1486.f_19.f_4))
		{
			func_645(0, -89429847, 1679075994, 0);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Local_1486.f_19.f_4))
	{
		func_169(0);
	}
}

void func_647(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_650(&(Local_1486.f_19.f_145[iParam0]), 1, 1);
	iVar0 = func_181(0);
	iVar1 = func_766(sParam1, iParam2, iVar0, iParam3, iParam4, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	iVar2 = func_767(iVar1);
	func_768(iVar1, 18, 0, 1);
	func_768(iVar1, 17, 0, 1);
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar2 /*23*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	func_770(iVar1, func_769(iParam0), 1, 1);
	Local_1486.f_19.f_145[iParam0] = iVar1;
}

void func_648(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_771(iVar0, bParam0);
		iVar0++;
	}
}

bool func_649(int iParam0)
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

void func_650(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_649(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_767(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_772(iVar0);
	*uParam0 = 0;
}

void func_651(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;

	fParam5 = func_773(vParam1, fParam5);
	fVar0 = func_774(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar0);
	}
}

void func_652(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = (IntToFloat((MISC::GET_FRAME_COUNT() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_217(&(uParam0->f_1), 16);
		func_651(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_773(vParam1, fParam5);
		fVar1 = func_774(fParam5, iParam4);
		fVar3 = func_775(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_775(0f, fVar1, fVar0);
	}
	GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, fVar3);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar2);
}

float func_653(float fParam0)
{
	float fVar0;

	fVar0 = func_776(fParam0);
	return fVar0;
}

float func_654(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		case 2:
			return 1000f;
		default:
			break;
	}
	return 300f;
}

float func_655(float fParam0)
{
	float fVar0;

	fVar0 = func_776(fParam0);
	return fVar0;
}

float func_656(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		case 1:
			return 40f;
		case 3:
			return 200f;
		case 4:
			return 180f;
		case 2:
			return 150f;
		default:
			break;
	}
	return 128f;
}

float func_657(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 0.8f;
		case 4:
			return 0.5f;
		case 0:
			return 0.6f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

float func_658(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_759(0) };
	vVar3 = { func_760(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

bool func_659(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "BTUP_GX_KNOCK1", 24);
			break;
		case 2:
			StringCopy(sParam1, "BTUP_GX_KILL1", 24);
			break;
		case 3:
			StringCopy(sParam1, "BTUP_GX_WARN1", 24);
			break;
		case 4:
			StringCopy(sParam1, "BTUP_GX_WARN2", 24);
			break;
		case 5:
			StringCopy(sParam1, "BTUP_GX_LEFT", 24);
			break;
		case 6:
			StringCopy(sParam1, "BTUP_GX_DONEW", 24);
			break;
		case 7:
			StringCopy(sParam1, "BTUP_GX_RETURN", 24);
			break;
		case 8:
			StringCopy(sParam1, "BTUP_C2_CLEAR", 24);
			break;
		case 9:
			StringCopy(sParam1, "BTUP_C1_CLEAR", 24);
			break;
		case 10:
			StringCopy(sParam1, "BTUP_C2_HELP2", 24);
			break;
		case 11:
			StringCopy(sParam1, "BTUP_C2_HELP3", 24);
			break;
		case 12:
			StringCopy(sParam1, "BTUP_C2_HELP4", 24);
			break;
		case 13:
			StringCopy(sParam1, "BTUP_C2_GIVEUP", 24);
			break;
		case 14:
			StringCopy(sParam1, "BTUP_C1_LAW1", 24);
			break;
		case 15:
			StringCopy(sParam1, "BTUP_C1_HELP1", 24);
			break;
		case 16:
			StringCopy(sParam1, "BTUP_C1_HELP2", 24);
			break;
		case 17:
			StringCopy(sParam1, "BTUP_C1_HELP3", 24);
			break;
		case 18:
			StringCopy(sParam1, "BTUP_C2_THX", 24);
			break;
		case 19:
			StringCopy(sParam1, "BTUP_C1_THX", 24);
			break;
		case 20:
			StringCopy(sParam1, "BTUP_C2_THXBYE", 24);
			break;
		case 21:
			StringCopy(sParam1, "BTUP_C1_THXBYE", 24);
			break;
		case 22:
			StringCopy(sParam1, "BTUP_C2_BUMP", 24);
			break;
		case 23:
			StringCopy(sParam1, "BTUP_C1_BUMP", 24);
			break;
		case 24:
			StringCopy(sParam1, "BTUP_C2_AIM", 24);
			break;
		case 25:
			StringCopy(sParam1, "BTUP_C1_LAWAIM2", 24);
			break;
		case 26:
			StringCopy(sParam1, "BTUP_C1_LAW_GUN", 24);
			break;
		case 27:
			StringCopy(sParam1, "BTUP_C2_AGG", 24);
			break;
		case 28:
			StringCopy(sParam1, "BTUP_C1_AGG", 24);
			break;
		default:
			return false;
	}
	return true;
}

bool func_660(var uParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(uParam0) && AUDIO::_0x1ECC76792F661CF5(uParam0))
	{
		return true;
	}
	return false;
}

void func_661(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_181(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_526(iVar0, 993674639, 1, 0))
	{
		return;
	}
	TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iParam1, 0, false, 0, -1f, false);
	PED::_0xF1C03A5352243A30(iVar0);
}

bool func_662(var uParam0, int iParam1, char* sParam2)
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

void func_663(int iParam0, int iParam1)
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
	if (!func_118(&Var0, 4) && func_777(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1268861[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*99*/].f_56[iParam0] = iVar33;
}

void func_664(int iParam0)
{
	func_778(iParam0);
}

void func_665(struct<2> Param0)
{
	struct<32> Var0;

	if (func_324(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_324(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_324(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_779(Param0, &Var0))
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

void func_666(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_422(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_667(int iParam0, int iParam1, int iParam2)
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

int func_668(int iParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	var uVar1;
	int iVar2;
	float fVar3;

	fVar0 = 9999f;
	*uParam2 = -1;
	*uParam3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam1)
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar2]))
		{
		}
		else
		{
			fVar3 = func_484(iParam0, (*uParam1)[iVar2], 1, 1);
			if (fVar3 >= fVar0)
			{
				*uParam2 = iVar2;
			}
			else
			{
				uVar1 = (*uParam1)[iVar2];
				fVar0 = fVar3;
				*uParam2 = iVar2;
				*uParam3 = iVar2;
			}
		}
		iVar2++;
	}
	return uVar1;
}

void func_669()
{
	func_504(1);
	func_504(2);
}

void func_670(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_671(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_649(iParam0))
	{
		return false;
	}
	iVar0 = func_767(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_672(int iParam0)
{
	if (func_523(iParam0))
	{
		return true;
	}
	return false;
}

void func_673(int iParam0)
{
	if (Local_1486.f_19.f_3 == iParam0)
	{
		return;
	}
	Local_1486.f_19.f_3 = iParam0;
}

bool func_674(int iParam0)
{
	if (!func_492(iParam0))
	{
		return true;
	}
	if (func_518(iParam0, -1, 1))
	{
		return false;
	}
	func_502(iParam0);
	return false;
}

bool func_675(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_676(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_677(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1)
	{
		return true;
	}
	else if (bParam2)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_678(int iParam0, bool bParam1)
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

bool func_679(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_780(uParam2);
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

int func_680()
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

void func_681(var uParam0, var uParam1)
{
}

int func_682(int iParam0)
{
	return func_781(iParam0) + 30;
}

bool func_683(int iParam0)
{
	return iParam0 != 0;
}

int func_684(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

int func_685(int iParam0, int iParam1, int iParam2)
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

struct<2> func_686(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_687(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_782(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_688(int iParam0)
{
	return iParam0 + 8;
}

void func_689(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_422(iParam1, joaat("CHARACTER_MEMORY")) };
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

float func_690(vector3 vParam0, vector3 vParam3)
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

bool func_691(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_692(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;

	iVar0 = func_181(iParam1);
	if (iParam2 != 11)
	{
		iVar1 = func_181(iParam2);
	}
	else
	{
		iVar1 = Global_34;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	fVar2 = func_484(iVar0, iVar1, 1, 1);
	if (fVar2 > 70f && !bParam5)
	{
		return 0;
	}
	if (!func_659(iParam0, &vVar3))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (iParam4 > 0)
	{
		iVar6 = 1;
	}
	if (AUDIO::_0xD89504D9D7D5057D(&vVar3))
	{
		if (func_783(&vVar3))
		{
			return 1;
		}
	}
	else if (func_784(&(Local_1486.f_19.f_42), vVar3, iVar6, iParam4, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_693(int iParam0, bool bParam1)
{
	var uVar0;

	if (!func_659(iParam0, &uVar0))
	{
		return 0;
	}
	func_785(&uVar0, bParam1, 0);
	return 1;
}

int func_694(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_786(iParam2, -372840566);
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
	func_787(uParam1, iParam0, Var3);
	return 1;
}

float func_695(float fParam0, float fParam1, float fParam2)
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

bool func_696(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_697(int iParam0)
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

int func_698(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_788(iParam0, 0, 1) };
		if (func_789(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_790(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_791(iParam0, Var0, Var0.f_4, 0) };
				func_792(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_793(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_794(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_795(iParam0, iParam1);
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

void func_699(int iParam0, int iParam1, float fParam2)
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

bool func_700(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

bool func_701()
{
	return func_796() == 4;
}

float func_702()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_703(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_704(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_705(var uParam0)
{
	return func_595(*uParam0, 2);
}

int func_706(var uParam0)
{
	int iVar0;

	if (!func_797(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_798(&(Global_1275441[iVar0 /*29*/].f_1), uParam0))
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

void func_707(int iParam0)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 1;
	Var0.f_26 = iParam0;
	func_799(&Var0);
}

bool func_708()
{
	return Global_1276421.f_75.f_1 != -1;
}

bool func_709(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_797(uParam0))
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

bool func_710(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (func_222(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_711(var uParam0, var uParam1)
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
	func_799(&Var0);
}

bool func_712(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_800(uParam1);
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
		fVar2 = func_801(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_802())
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

bool func_713(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_803(iParam0))
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

void func_714(int iParam0)
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
	Global_1940258.f_21 = func_804();
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
			func_805(&(Global_1940258.f_28), &(Global_1940258.f_33));
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

var func_715(int iParam0)
{
	return Global_1102219.f_3705[iParam0 /*3*/];
}

bool func_716(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_806(bParam0, &iVar0, &iVar1))
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

bool func_717(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940258.f_34;
	if (func_28() == -1)
	{
		if (Global_1940258.f_34 == 0)
		{
			iVar0 = func_807(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_34) || !Global_1956200.f_1716[4])
	{
		iVar0 = func_807(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_745(iVar0) == -1)
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

void func_718(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_808(uParam0);
	}
}

bool func_719(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_745(iParam2);
	}
	else
	{
		iVar1 = func_744(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_745(iParam0);
	}
	else
	{
		iVar0 = func_744(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_175(*uParam1, 8388608))
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

float func_720(int iParam0, int iParam1)
{
	return func_484(iParam0, iParam1, 1, 1);
}

float func_721(var uParam0)
{
	return uParam0->f_29;
}

bool func_722(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_723(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 134217728);
	}
	else
	{
		func_218(uParam0, 134217728);
	}
}

void func_724()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_725(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_484(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_809(iVar0, 0)))
		{
			if (func_810(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_726(var uParam0)
{
	return uParam0->f_18;
}

bool func_727(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_175(*uParam0, 4194304))
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

int func_728(var uParam0)
{
	return uParam0->f_19;
}

int func_729(var uParam0)
{
	return uParam0->f_20;
}

bool func_730(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_809(iVar0, 0)))
		{
			if (func_811(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_731(bool bParam0, bool bParam1, bool bParam2)
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

float func_732(var uParam0)
{
	return uParam0->f_25;
}

int func_733(var uParam0)
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

bool func_734(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_812(iParam0, vParam4, 0.5f))
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

int func_735(int iParam0)
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
	if (func_813(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_736(int iParam0)
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

bool func_737(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_803(iParam1))
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

bool func_738(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_803(iParam1))
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

bool func_739(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_814(uParam0);
	if (func_803(iParam1))
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

bool func_740(int iParam0, int iParam1)
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

bool func_741(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_815(iParam0, 1, 0, 0)) && !func_815(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
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

bool func_742(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_743(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_285(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_744(int iParam0)
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

int func_745(int iParam0)
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

float func_746(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_747(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_740(Global_34, &iVar1))
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
		fVar2 = func_484(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_484(iParam0, Global_1940258.f_34, 0, 1) < 2.5f)
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

bool func_748(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_806(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_750(uParam1, iVar0))
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
				if (!bParam2 || !func_750(uParam1, iVar1))
				{
					if (func_285(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_749(var uParam0)
{
	return func_175(*uParam0, 131072);
}

bool func_750(var uParam0, int iParam1)
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

bool func_751(int iParam0)
{
	return false;
}

int func_752(var uParam0)
{
	return uParam0->f_22;
}

int func_753(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_754(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_755(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

float func_756(int iParam0)
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
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_757(int iParam0)
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
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_758(int iParam0)
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
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_759(int iParam0)
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
	return func_760((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_760(vector3 vParam0)
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

Vector3 func_761(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_762(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_763(int iParam0, int iParam1)
{
	return func_817(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_764(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

void func_765(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_169(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1486.f_179.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, Local_1486.f_179.f_7[iParam0 /*11*/]);
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
	Local_1486.f_179.f_7[iParam0 /*11*/].f_1 = iVar0;
}

int func_766(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_818(iVar0, 2))
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
				func_819(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_767(int iParam0)
{
	return iParam0;
}

void func_768(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_649(iParam0))
	{
		return;
	}
	iVar0 = func_767(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_769(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1486.f_19.f_144, iParam0);
}

void func_770(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_649(iParam0))
	{
		return;
	}
	iVar0 = func_767(iParam0);
	if (bParam1)
	{
		func_820(iParam0, 4);
		if (bParam3)
		{
			func_821(iVar0, 1);
		}
		func_822(iVar0, 1);
	}
	else
	{
		func_823(iParam0, 4);
		func_822(iVar0, 0);
	}
}

void func_771(int iParam0, bool bParam1)
{
	func_770(Local_1486.f_19.f_145[iParam0], bParam1, 1, 1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_1486.f_19.f_144), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_1486.f_19.f_144), iParam0);
	}
}

void func_772(int iParam0)
{
	if (!func_824(iParam0))
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

float func_773(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vParam0, true);
}

float func_774(float fParam0, int iParam1)
{
	float fVar0;

	fVar0 = (2f * BUILTIN::SIN((180f * (fParam0 / func_654(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_775(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_776(float fParam0)
{
	float fVar0;

	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

int func_777(int iParam0)
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

void func_778(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1296859.f_21;
	Var1 = { func_422(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

bool func_779(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_679(Param0, &vVar0);
	if (func_825(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_780(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_781(int iParam0)
{
	return iParam0 * 31;
}

int func_782(int iParam0)
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

bool func_783(char* sParam0)
{
	if (!AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		return false;
	}
	AUDIO::START_PRELOADED_CONVERSATION(sParam0);
	return true;
}

bool func_784(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_826(vParam1, uParam0);
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

void func_785(char* sParam0, bool bParam1, bool bParam2)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, bParam1, bParam2);
}

void func_786(int iParam0, int iParam1)
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

void func_787(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_827(uParam0))
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

struct<5> func_788(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_828(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_829(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_791(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_830(bParam1) };
			if (bParam2 && func_831(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_789(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_789(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_790(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_832(bParam1) };
			switch (func_833(iParam0))
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
			if (func_834(iParam0, -1823706425))
			{
				Var0 = { func_791(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_834(iParam0, -1483207246))
			{
				Var0 = { func_791(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_791(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_834(iParam0, -1653629781))
			{
				Var0 = { func_791(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_835(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_834(iParam0, -1653629781))
			{
				Var0 = { func_791(1384535894, Var0, 1784584921, bParam1) };
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

bool func_789(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_836(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_790(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_837(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_791(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_838(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_839(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_792(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_840(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_835(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_793(bParam6))
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
			iVar14 = func_841(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_842(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_839(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_793(bool bParam0)
{
	if (func_28() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_839(bParam0));
}

int func_794(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_843(iParam0))
	{
		return 0;
	}
	if (!func_793(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_795(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_844(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_796()
{
	if (Global_1102219 <= 5)
	{
		return Global_1102219;
	}
	if (Global_1102219 <= 22)
	{
		return 4;
	}
	if (Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

bool func_797(var uParam0)
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

bool func_798(var uParam0, var uParam1)
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

void func_799(var uParam0)
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 27, 42, Global_1051252.f_16[17]);
	func_845(uParam0);
}

float func_800(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_553(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_846(uParam0);
	}
	return func_553(uParam0);
}

float func_801(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_802()
{
	int iVar0;
	int iVar1;

	iVar0 = func_848(func_847());
	iVar1 = func_849(func_847());
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

bool func_803(int iParam0)
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

bool func_804()
{
	if (func_850())
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

void func_805(var uParam0, var uParam1)
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

bool func_806(bool bParam0, int iParam1, int iParam2)
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

int func_807(var uParam0)
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

void func_808(var uParam0)
{
	int iVar0;

	if (Global_1940258.f_32 == 0)
	{
		func_218(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940258.f_28[iVar0]))
				{
					func_217(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_809(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_810(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_811(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_811(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_812(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_813(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_814(var uParam0)
{
	return uParam0->f_28;
}

int func_815(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_816(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

var func_817(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_851() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_852());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_852());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_852());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_853(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_854(iVar2))
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
				if (iVar9 & 8192 != 0 && func_855(iVar2) != 1)
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
					if (!func_856(iVar10))
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

bool func_818(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_819(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = iParam5;
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
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_821(iParam0, 1);
	func_822(iParam0, 1);
	func_823(iParam0, 128);
}

void func_820(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_821(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_818(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_822(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_823(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

bool func_824(int iParam0)
{
	return func_818(iParam0, 2);
}

bool func_825(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_857(iParam0))
	{
		return false;
	}
	if (func_858(iParam0, uParam1, &uVar0))
	{
		func_859(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_826(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_827(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<4> func_828(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_839(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_791(joaat("CHARACTER"), func_860(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_791(joaat("CHARACTER"), func_860(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_791(joaat("CHARACTER"), func_860(), -1591664384, bParam0);
}

int func_829(int iParam0)
{
	vector3 vVar0;

	if (!func_838(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_830(bool bParam0)
{
	int iVar0;

	iVar0 = func_839(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_791(923904168, func_828(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_791(923904168, func_828(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_791(923904168, func_828(bParam0), -740156546, 0);
}

bool func_831(int iParam0, bool bParam1)
{
	if (func_833(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_861();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_832(bool bParam0)
{
	int iVar0;

	iVar0 = func_839(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_791(271701509, func_828(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_791(271701509, func_828(bParam0), 12999093, 0);
}

int func_833(int iParam0)
{
	struct<2> Var0;

	if (!func_838(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_834(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_833(iParam0);
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
			if (func_862(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_835(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_863(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_836(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_838(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_864(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_791(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_839(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_839(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_837(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_839(0);
	*uParam1 = { func_791(iParam0, func_830(0), iParam3, 0) };
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

bool func_838(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_839(bool bParam0)
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

bool func_840(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_841(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_865(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_867(func_866(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_868(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_842(int iParam0, struct<17> Param1)
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

bool func_843(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_844(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_845(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_869(iVar0);
		if (func_175(uParam0->f_5.f_9, iVar1))
		{
		}
		iVar0++;
	}
}

var func_846(var uParam0)
{
	return uParam0->f_27;
}

int func_847()
{
	return Global_1902818;
}

int func_848(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_849(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_850()
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

int func_851()
{
	return Global_1051252.f_12;
}

char* func_852()
{
	return "unnamed";
}

int func_853(int iParam0)
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

bool func_854(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_870(36, iParam0);
}

int func_855(int iParam0)
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

bool func_856(int iParam0)
{
	if (func_871(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_872(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_857(int iParam0)
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

bool func_858(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_873(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_859(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_874(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_875(iVar0);
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
			uParam2->f_5 = func_876(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_877(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_878(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_879(iVar0);
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

struct<4> func_860()
{
	struct<4> Var0;

	return Var0;
}

bool func_861()
{
	return (func_880(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_881(func_791(joaat("WARDROBE"), func_828(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_862(int iParam0, int iParam1, int iParam2)
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

bool func_863(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_839(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_864(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_865(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_882(uParam1->f_8, iParam0, uVar0, 2048) || func_882(uParam1->f_8, iParam0, uVar0, 32768)) || func_882(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_882(uParam1->f_8, iParam0, uVar0, 4) || func_882(uParam1->f_8, iParam0, uVar0, 256)) || func_882(uParam1->f_8, iParam0, uVar0, 65536)) || func_882(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_882(uParam1->f_8, iParam0, uVar0, 1) || func_882(uParam1->f_8, iParam0, uVar0, 8)) || func_882(uParam1->f_8, iParam0, uVar0, 65536)) || func_882(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_882(uParam1->f_8, iParam0, uVar0, 1) || func_882(uParam1->f_8, iParam0, uVar0, 16)) || func_882(uParam1->f_8, iParam0, uVar0, 2)) || func_882(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_882(uParam1->f_8, iParam0, uVar0, 8) || func_882(uParam1->f_8, iParam0, uVar0, 4096)) || func_882(uParam1->f_8, iParam0, uVar0, 256)) || func_882(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_866(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_867(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_883(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_883(iParam1, 2, 0, 0);
	return -1;
}

int func_868(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_883(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_869(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_870(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_884(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_885())
	{
		return func_884(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_884(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_871(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_872(int iParam0)
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
		func_886(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_887(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

int func_873(int iParam0)
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

int func_874(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_888(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_875(int iParam0)
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

int func_876(int iParam0)
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

int func_877(int iParam0)
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

int func_878(int iParam0)
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

int func_879(int iParam0)
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

int func_880(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_843(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_839(bParam1), iParam0, iParam3);
}

int func_881(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_889(&uParam0, iParam4, bParam5, iParam6);
}

int func_882(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_220(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_883(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_890(iParam0, iParam1, iParam2, iParam3);
}

bool func_884(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_885()
{
	return Global_1102219.f_3672;
}

void func_886(int iParam0)
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
	func_887(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_887(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_888(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_891(iParam0, uParam1, &uVar0))
	{
		func_892(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_889(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_893(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_890(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_894(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_891(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_873(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_892(var uParam0, int iParam1, var uParam2)
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

bool func_893(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_839(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_863(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_894(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_895(&(uParam0->f_4));
}

void func_895(var uParam0)
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

