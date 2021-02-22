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
	struct<46> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 7, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 } ;
	var uLocal_59 = 7;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 7;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	struct<39> Local_75[32];
	struct<523> Local_1324 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 1112014848, 1106247680, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1723181095, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1847 = 0;
	var uLocal_1848 = 1;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 1065353216;
	var uLocal_1852 = 0;
	var uLocal_1853 = 1065353216;
	var uLocal_1854 = 1077936128;
	var uLocal_1855 = 1108082688;
	var uLocal_1856 = 1113325568;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 3;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	float fLocal_1887 = 0f;
	float fLocal_1888 = 0f;
	var uLocal_1889 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1887 = 1f;
	fLocal_1888 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 62, 44);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 62, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_75, 1249, 45);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Local_75[0 /*39*/])), 1249, "m_clientData");
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
	else if (func_17(Local_1324.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_1324.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_1324.f_12), Local_1324.f_9))
	{
		return true;
	}
	else if (Local_1324.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_1324, iParam0, 5);
	iVar2 = func_31(&bVar1, Local_1324.f_1, Local_1324.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_1324.f_12 = iVar2;
	iVar0 = Global_1198046.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_1324.f_1, Local_1324.f_2, Local_1324.f_3, iVar0);
	Local_1324.f_9 = { func_33(Var3.f_5, 8) };
	Local_1324.f_14 = Var3.f_5;
	Local_1324.f_15 = { Var3.f_11 };
	Local_1324.f_18 = Var3.f_7;
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
	if (func_39(Global_1051213) && !func_21(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_40(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_41(iParam3, 255))
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
	if (func_42())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_39(Global_1051213))
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
	func_51();
	if (Local_1324.f_8 <= 5)
	{
		func_52();
	}
	switch (Local_1324.f_8)
	{
		case 0:
			func_53();
			break;
		case 1:
			func_54();
			break;
		case 2:
			func_55();
			break;
		case 3:
			func_56();
			break;
		case 4:
			func_57();
			break;
		case 5:
			func_58();
			break;
	}
}

void func_24()
{
	func_59();
}

void func_25()
{
	if (func_60())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_61();
}

void func_26()
{
	func_62();
	func_63();
	func_64();
	func_65();
}

void func_27()
{
	if (Local_1324.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_66(Local_1324.f_12, 4);
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
	while (iVar0 < 7)
	{
		Local_13.f_45.f_1[iVar0] = 255;
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
	func_116();
	func_117();
	if (func_118() == 2)
	{
		switch (func_119())
		{
			case 8:
			case 9:
			case 10:
				func_120(0, joaat("WORLD_ANIMAL_BEAR_SNIFFING_GROUND"), 0, -1082130432 /* Float: -1f */);
				break;
			case 11:
			case 12:
				func_121(0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				break;
		}
		func_122();
	}
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

bool func_39(struct<2> Param0)
{
	if (!func_123(Param0))
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

bool func_40(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_41(int iParam0, int iParam1)
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

bool func_42()
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
	if (!func_39(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_43()
{
}

void func_44()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1198046.f_231.f_1066[Local_1324.f_12 /*17*/].f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_1324.f_1, Local_1324.f_2, Local_1324.f_3, iVar0);
	if (!func_124(&Var1, 1))
	{
		func_125(1);
		return;
	}
	Local_13.f_6 = func_126(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)));
	func_127(256);
	if (func_128(Local_13.f_6))
	{
		func_129(5);
		func_125(6);
	}
	else
	{
		func_125(1);
	}
}

void func_45()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_1324.f_1, Local_1324.f_2, -1, 255);
	if (func_124(&Var0, 1))
	{
		func_125(2);
		return;
	}
	if (func_130(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_1324.f_15, Var0.f_10, 2442122);
		func_125(2);
	}
	else if (bVar31)
	{
		func_129(3);
		func_125(6);
	}
	if (!func_131(Local_13.f_3.f_2))
	{
		func_132(&(Local_13.f_3.f_2));
	}
	else if (func_133(Local_13.f_3.f_2) > 45000)
	{
		func_129(4);
		func_125(6);
	}
}

void func_46()
{
	if (func_134(1, 255))
	{
		if (!func_135(1))
		{
			if (func_136())
			{
				func_127(1);
			}
		}
		else
		{
			func_137();
			func_125(3);
		}
	}
}

void func_47()
{
	bool bVar0;

	if (func_134(2, 255))
	{
		if (!func_135(2))
		{
			bVar0 = true;
			if (!func_138())
			{
				bVar0 = false;
			}
			if (!func_139())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_127(2);
			}
		}
		else
		{
			func_140();
			func_125(4);
		}
	}
}

void func_48()
{
	func_141();
	func_142();
	func_143();
	if (func_144() || Local_13.f_2 != 0)
	{
		func_145();
		func_125(5);
	}
}

void func_49()
{
	if (func_134(4, 255))
	{
		if (func_146())
		{
			func_127(4);
			func_125(6);
		}
	}
}

void func_50()
{
	if (!func_135(256))
	{
		return;
	}
	if (func_135(512))
	{
		if (func_68(64) && func_126(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_69(Local_13.f_6);
			func_147(64);
		}
	}
	else if (!func_68(64))
	{
		if (func_126(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_148(Local_13.f_6, 1, 1);
			func_149(64);
		}
	}
	else if (func_126(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_69(Local_13.f_6);
		func_147(64);
	}
}

void func_51()
{
	if (!Global_13)
	{
		if (func_134(8192, 255))
		{
			func_150(8192);
		}
	}
	else if (!func_134(8192, 255))
	{
		func_151(8192);
	}
}

void func_52()
{
	func_152();
}

void func_53()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 0)
	{
		func_50();
		func_153(1);
	}
}

void func_54()
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

void func_55()
{
	bool bVar0;
	int iVar1;

	if (!func_134(1, 255))
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
			func_151(1);
		}
		else
		{
			iVar1 = Global_1901947.f_236.f_68;
			if (!func_131(Local_1324.f_11))
			{
				func_132(&(Local_1324.f_11));
			}
			if (func_133(Local_1324.f_11) >= iVar1)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_156(&(Local_1324.f_11));
		func_157();
		func_153(3);
	}
}

void func_56()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_134(2, 255))
	{
		iVar0 = func_158();
		iVar1 = func_159();
		if (iVar0 && iVar1)
		{
			func_151(2);
		}
		else
		{
			iVar2 = Global_1901947.f_236.f_68;
			if (!func_131(Local_1324.f_11))
			{
				func_132(&(Local_1324.f_11));
			}
			if (func_160(Local_1324.f_11) >= iVar2)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_156(&(Local_1324.f_11));
		func_161();
		func_162();
		func_163();
		func_164();
		func_153(4);
	}
}

void func_57()
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

void func_58()
{
	if (!func_134(4, 255))
	{
		if (func_172())
		{
			func_173();
			func_66(Local_1324.f_12, 4);
			func_151(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_153(6);
	}
}

void func_59()
{
}

bool func_60()
{
	return (func_135(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_61()
{
}

void func_62()
{
	int iVar0;
	int iVar1;

	if (func_60())
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_34[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_34[iVar1]);
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

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_60())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 1)
			{
				if (func_176(iVar1, iVar2))
				{
				}
				else if (func_177(iVar1, iVar2))
				{
					iVar0 = Local_1324.f_302[iVar1 /*20*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_178(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*2*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*2*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_178(iVar1, iVar2))
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

void func_64()
{
	func_179(&(Local_1324.f_522.f_13));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1324.f_522.f_11))
	{
		VOLUME::_DELETE_VOLUME(Local_1324.f_522.f_11);
	}
}

void func_65()
{
	func_180();
}

void func_66(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_181(iParam0, iVar0, iParam1))
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
	func_182(Local_1324.f_9, iVar0, 0, 255, 0);
	func_149(4);
	if (bVar1)
	{
		func_183(Local_1324.f_1, Local_1324.f_2);
		if (!func_68(256))
		{
			if (iVar0 == 1)
			{
				func_184(Local_1324.f_18, 1);
			}
			else
			{
				func_184(Local_1324.f_18, 0);
			}
			func_149(256);
		}
	}
	else
	{
		func_184(Local_1324.f_18, 2);
	}
}

bool func_68(int iParam0)
{
	return func_185(Local_1324.f_7, iParam0);
}

void func_69(int iParam0)
{
	int iVar0;

	if (!func_186(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_70 = iParam0;
	Global_1134390[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_70()
{
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

	if (!func_187(uParam0))
	{
		return -1;
	}
	iVar0 = func_188(uParam0, uParam0->f_9);
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
			iVar0 = func_188(uParam0, iVar1);
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
	func_189(uParam0, iParam1);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_191(uParam0);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			func_192(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
			func_192(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
			func_192(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			func_192(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			func_192(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			func_192(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			func_192(uParam0, 5);
			func_192(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			func_192(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			func_192(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
			func_192(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
			func_192(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
			func_192(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 5);
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
	func_190(uParam0);
	uParam0->f_15[0] = joaat("22_TO_4");
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_191(uParam0);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_191(uParam0);
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
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			break;
		case 1:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 6);
			func_193(uParam0, 7);
			func_194(uParam0, 2);
			break;
		default:
			func_190(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_192(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_192(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_192(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_192(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_192(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_192(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_192(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_192(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_192(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_192(uParam0, 1);
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
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 8);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			func_192(uParam0, 6);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 7);
			func_192(uParam0, 8);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			func_192(uParam0, 6);
			func_192(uParam0, 7);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			func_192(uParam0, 6);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			func_192(uParam0, 5);
			func_192(uParam0, 9);
			func_192(uParam0, 10);
			func_192(uParam0, 11);
			func_195(uParam0, iParam2);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_191(uParam0);
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
	func_190(uParam0);
	func_194(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_191(uParam0);
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
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_196(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_196(uParam0, iParam2);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_191(uParam0);
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
	func_190(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_191(uParam0);
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
	func_190(uParam0);
	func_194(uParam0, 1);
	func_194(uParam0, 4);
	func_194(uParam0, 8);
	func_194(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			uParam0->f_11 = { func_197(func_126(iParam2)) };
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
			func_198(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_198(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_198(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_198(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_198(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_198(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_198(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_198(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_198(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_198(uParam0, iParam2);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_191(uParam0);
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
	func_199(uParam0, iParam2);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_200(uParam0, iParam1);
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
			func_201(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_201(uParam0, iParam1);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_192(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_192(uParam0, 1);
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
	func_190(uParam0);
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
			func_192(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_192(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_192(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_192(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_192(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_192(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_192(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_192(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_192(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_192(uParam0, 1);
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
	func_190(uParam0);
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
			func_192(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_192(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_192(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_192(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_192(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_192(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_192(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_192(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_192(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_192(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_192(uParam0, 2);
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
			func_202(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_202(uParam0, iParam1);
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
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_203(uParam0, iParam1);
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
	func_190(uParam0);
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
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_192(uParam0, 3);
			func_192(uParam0, 4);
			func_192(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
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
			func_204(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_204(uParam0, iParam1);
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
	func_190(uParam0);
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
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_192(uParam0, 2);
			func_192(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_192(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_192(uParam0, 1);
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
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_205(uParam0, iParam1);
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
	func_206(uParam0, iParam1, iParam2);
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
	func_207(uParam0, iParam1, iParam2);
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
	func_190(uParam0);
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
			func_192(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_192(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_192(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_192(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_192(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_192(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_192(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_192(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_192(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_192(uParam0, 1);
			break;
	}
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_191(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_191(uParam0);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_191(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_191(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_191(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_191(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_191(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_191(uParam0);
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
	func_190(uParam0);
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_191(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_192(uParam0, 0);
			func_192(uParam0, 2);
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
			func_208(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_208(uParam0, iParam1);
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
	iVar0 = func_209(iParam1);
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
	*uParam0 = func_210(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_194(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_212(func_211(iVar0), iParam2);
		uParam0->f_15[0] = func_213(func_211(iVar0), iParam2);
		uParam0->f_5 = func_214(iVar0, iParam2);
		uParam0->f_11 = { func_215(iVar0, iParam2) };
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

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(7);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			Local_75[iVar1 /*39*/].f_7.f_2[iVar0] = -1f;
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
		while (iVar2 < 1)
		{
			if (func_177(iVar1, iVar2))
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
	bool bVar2;
	int iVar3;

	func_216(&(Local_1324.f_323), &(Local_1324.f_323.f_32));
	bVar2 = true;
	if (!func_217(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_45.f_9[iVar0] = 0;
			Local_13.f_45.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_75[iVar1 /*39*/].f_17.f_13[iVar0] = 0;
		}
		iVar0++;
	}
	func_218(&(Local_1324.f_323.f_90), 8, -1);
	if (bVar2)
	{
		func_218(&(Local_75[iVar1 /*39*/].f_17), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_218(&(Local_75[iVar3 /*39*/].f_17), 8, -1);
			iVar3++;
		}
	}
}

void func_115()
{
}

void func_116()
{
	switch (func_118())
	{
		case 0:
			func_219(3, joaat("A_C_BEARBLACK_01"));
			func_222(3, func_220(), func_221(), 1);
			func_219(1, joaat("A_C_BEAR_01"));
			func_219(2, joaat("A_C_BEAR_01"));
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) < 9)
			{
				func_223(1);
				func_222(1, func_224(1), func_225(), 1);
				func_222(2, func_224(1), func_225(), 1);
			}
			else
			{
				func_222(1, func_224(0), func_225(), 1);
				func_222(2, func_224(0), func_225(), 1);
			}
			func_226(1);
			func_226(2);
			func_219(6, joaat("MP_A_C_DEER_01"));
			func_227(6, 610434548);
			func_222(6, func_228(), func_229(), 0);
			func_230(1);
			func_230(2);
			func_231(1, 16);
			func_231(2, 16);
			break;
		case 1:
			func_219(4, joaat("MP_A_M_M_UNICORPSE_01"));
			func_227(4, -1697351307);
			func_222(4, func_232(0), 0f, 1);
			func_219(5, joaat("MP_A_M_M_UNICORPSE_01"));
			func_227(5, -1553790318);
			func_222(5, func_232(1), 0f, 1);
			func_219(2, joaat("A_C_BEAR_01"));
			func_222(2, func_233(), func_225(), 1);
			func_230(2);
			func_226(2);
			func_231(2, 16);
			break;
	}
	switch (func_118())
	{
		case 0:
		case 1:
			func_219(0, joaat("MP_A_C_BEAR_01"));
			func_227(0, -1210544352);
			break;
		case 2:
			func_219(0, joaat("MP_A_C_BEAR_01"));
			func_227(0, -1508185179);
			break;
	}
	func_222(0, func_233(), func_225(), 1);
	func_230(0);
	func_231(0, 16);
	if (func_118() != 2)
	{
		func_226(0);
	}
}

void func_117()
{
}

int func_118()
{
	return Local_1324.f_3;
}

int func_119()
{
	return Local_1324.f_2;
}

void func_120(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	Local_1324.f_25 = 1;
	Local_1324.f_25.f_1 = iParam0;
	Local_1324.f_25.f_3 = iParam1;
	if (bParam2)
	{
		func_234(&(Local_1324.f_25), 1);
	}
	if (fParam3 > 0f)
	{
		Local_1324.f_25.f_27 = fParam3;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7 = 1;
		func_235();
	}
}

void func_121(int iParam0, float fParam1, float fParam2)
{
	Local_1324.f_25 = 1;
	Local_1324.f_25.f_1 = iParam0;
	if (fParam1 > 0f)
	{
		Local_1324.f_25.f_26 = fParam1;
	}
	if (fParam2 > 0f)
	{
		Local_1324.f_25.f_27 = fParam2;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7 = 2;
		func_235();
	}
}

void func_122()
{
	func_236(1);
	func_234(&(Local_1324.f_25), 32);
}

bool func_123(int iParam0)
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

bool func_124(var uParam0, int iParam1)
{
	return func_237(uParam0->f_25, iParam1);
}

void func_125(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_126(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_127(int iParam0)
{
	if (!func_135(iParam0))
	{
		func_238(&(Local_13.f_1), iParam0);
	}
}

bool func_128(int iParam0)
{
	if (!func_186(iParam0))
	{
		return false;
	}
	return (func_239(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_129(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_130(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_240(Local_1324.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_1324.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_241(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_151(128);
	}
	else if (!func_134(128, 255))
	{
		Local_13.f_3.f_1 = func_242(Param0);
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

bool func_131(int iParam0)
{
	return iParam0 != 0;
}

void func_132(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_133(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

bool func_134(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_217(&iParam1))
		{
			return false;
		}
	}
	return func_185(Local_75[iParam1 /*39*/], iParam0);
}

bool func_135(int iParam0)
{
	return func_185(Local_13.f_1, iParam0);
}

bool func_136()
{
	return true;
}

void func_137()
{
}

bool func_138()
{
	return true;
}

bool func_139()
{
	bool bVar0;

	if (!func_243(&bVar0))
	{
		if (bVar0)
		{
			func_244();
		}
		return false;
	}
	if (!func_245(&bVar0))
	{
		if (bVar0)
		{
			func_244();
		}
		return false;
	}
	return true;
}

void func_140()
{
}

void func_141()
{
	if (!func_135(32) && func_246(32))
	{
		func_127(32);
	}
	if (!func_135(64) && func_246(64))
	{
		func_127(64);
	}
	if (!func_135(16) && func_247(16))
	{
		func_127(16);
	}
	if ((!func_135(2048) && func_246(2048)) && !func_246(4096))
	{
		func_127(2048);
	}
}

void func_142()
{
	bool bVar0;

	if (!bVar0 && func_135(16))
	{
		func_129(1);
		return;
	}
	if (func_135(2048) && !func_246(4096))
	{
		func_129(6);
		return;
	}
}

void func_143()
{
	func_248();
}

bool func_144()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_249(0)))
	{
		func_250(ENTITY::GET_ENTITY_COORDS(func_249(0), true, false));
	}
	if (func_251())
	{
		return true;
	}
	if (func_252(2, 2, 2) && !func_253(16))
	{
		func_254(16);
	}
	switch (func_118())
	{
		case 0:
			switch (func_255())
			{
				case 0:
					func_256();
					break;
				case 1:
					func_257();
					break;
				case 3:
					func_258();
					break;
				case 4:
					func_259();
					break;
			}
			break;
		case 1:
			switch (func_255())
			{
				case 0:
					func_260();
					break;
				case 2:
					func_261();
					break;
				case 4:
					func_262();
					break;
			}
			break;
		case 2:
			return false;
	}
	return false;
}

void func_145()
{
}

bool func_146()
{
	return true;
}

void func_147(int iParam0)
{
	if (func_68(iParam0))
	{
		func_263(&(Local_1324.f_7), iParam0);
	}
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_186(iParam0))
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1134390[iVar1 /*83*/].f_70 = iParam0;
	Global_1134390[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_265(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_266(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_149(int iParam0)
{
	if (!func_68(iParam0))
	{
		func_238(&(Local_1324.f_7), iParam0);
	}
}

void func_150(int iParam0)
{
	if (func_185(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*39*/], iParam0))
	{
		func_263(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*39*/]), iParam0);
	}
}

void func_151(int iParam0)
{
	if (!func_134(iParam0, 255))
	{
		func_238(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*39*/]), iParam0);
	}
}

void func_152()
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
				func_267(iVar0);
				break;
			case -1315570756:
				func_268(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_269(iVar0);
		iVar0++;
	}
}

void func_153(int iParam0)
{
	if (Local_1324.f_8 != iParam0)
	{
		Local_1324.f_8 = iParam0;
	}
}

bool func_154()
{
	if (!func_270())
	{
		return false;
	}
	if (func_118() == 2)
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_1324.f_170)
		{
			case 0:
				if (func_118() == 1)
				{
					Local_1324.f_170.f_5 = ANIMSCENE::_CREATE_ANIM_SCENE(func_271(), 64, func_272(), true, true);
					Local_13.f_24.f_2 = NETWORK::_ANIM_SCENE_TO_NET(Local_1324.f_170.f_5);
				}
				else
				{
					Local_1324.f_170.f_5 = ANIMSCENE::_CREATE_ANIM_SCENE(func_271(), 0, func_272(), true, true);
					Local_13.f_24.f_2 = NETWORK::_ANIM_SCENE_TO_NET(Local_1324.f_170.f_5);
				}
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1324.f_170.f_5))
				{
					func_244();
					return false;
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_1324.f_170.f_5);
				}
				if (func_118() == 1)
				{
					Local_1324.f_170.f_6 = ANIMSCENE::_CREATE_ANIM_SCENE(func_271(), 64, func_272(), true, true);
					Local_13.f_24.f_3 = NETWORK::_ANIM_SCENE_TO_NET(Local_1324.f_170.f_6);
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1324.f_170.f_6))
					{
						func_244();
						return false;
					}
					else
					{
						ANIMSCENE::LOAD_ANIM_SCENE(Local_1324.f_170.f_6);
					}
				}
				Local_1324.f_170 = 1;
				return false;
			case 1:
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1324.f_170.f_5, true, false))
				{
					return false;
				}
				if (func_118() == 1)
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1324.f_170.f_6, true, false))
					{
						return false;
					}
				}
				break;
		}
	}
	if (!func_273())
	{
		return false;
	}
	if (func_118() == 1)
	{
		if (!func_274())
		{
			return false;
		}
		if (!func_275())
		{
			return false;
		}
	}
	if (func_119() == 0)
	{
		func_276(&(Local_1324.f_170.f_20), -1757.429f, 637.7745f, 121.6214f, 0f, 0f, -157.1274f, 3.423833f, 21.14061f, 2.703941f, "Avoid this pls");
	}
	return true;
}

bool func_155()
{
	bool bVar0;

	bVar0 = false;
	if (!func_277())
	{
		bVar0 = true;
	}
	if (!func_278())
	{
		bVar0 = true;
	}
	if (Local_1324.f_25 && !func_279(&(Local_13.f_7), &(Local_1324.f_25)))
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
	return 1;
}

int func_159()
{
	bool bVar0;

	if (!func_280())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_160(int iParam0)
{
	return (iParam0 - Global_1296859.f_21) * 1000;
}

void func_161()
{
	if (!func_68(1))
	{
		func_281(Local_1324.f_9);
		func_149(1);
	}
}

void func_162()
{
	func_282();
	func_283();
}

void func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_118() == 0)
	{
		func_284(3);
		iVar0 = func_249(3);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_285();
		}
		iVar1 = func_249(6);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 186, true);
			PED::_SET_PED_QUALITY(iVar1, 0);
			MISC::_0x674B90BE1115846D(iVar1, 1);
			PERSISTENCE::_0x3CA5E58C9731A16B(iVar1, MISC::GET_RANDOM_INT_IN_RANGE(80, 91));
			PED::APPLY_PED_DAMAGE_PACK(iVar1, "PD_Deer_aged_carcass_Hvy", 0f, 1f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_KEEP_TASK(iVar1, true);
		}
	}
	if (func_118() == 1)
	{
		iVar2 = 4;
		while (iVar2 <= 5)
		{
			iVar3 = func_249(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
			{
				PED::SET_PED_CONFIG_FLAG(iVar3, 169, true);
				PED::SET_PED_CONFIG_FLAG(iVar3, 170, true);
				PED::SET_PED_CONFIG_FLAG(iVar3, 137, true);
				PED::SET_PED_CONFIG_FLAG(iVar3, 6, true);
				PED::SET_PED_CONFIG_FLAG(iVar3, 278, true);
				PED::SET_PED_CONFIG_FLAG(iVar3, 364, true);
				PED::SET_PED_CONFIG_FLAG(iVar3, 297, true);
				PED::SET_PED_CONFIG_FLAG(iVar3, 509, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar3, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar3, true);
				PED::SET_PED_CAN_BE_TARGETTED(iVar3, false);
				ENTITY::_0x18FF3110CF47115D(iVar3, 7, 0);
				PED::_0xAE6004120C18DF97(iVar3, 0, 0);
				PED::_0xAE6004120C18DF97(iVar3, 1, 0);
				PED::_0x6569F31A01B4C097(iVar3, 1, 0);
				PED::_0x6569F31A01B4C097(iVar3, 0, 0);
				func_286(iVar3, 1, 1);
				ENTITY::_0x6BCF5F3D8FFE988D(iVar3, 1);
				PED::APPLY_PED_DAMAGE_PACK(iVar3, "PD_Animal_attack_body_back_Enemy", 0f, 1f);
				ENTITY::_0x9587913B9E772D29(iVar3, 0);
			}
			PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iVar3, 1);
			iVar2++;
		}
		AUDIO::SET_AMBIENT_ZONE_STATE("AZ_ONALABE_Area", true, false);
		AUDIO::_0x3743CE6948194349("AZ_ONALABE_Area", func_220(), 0f);
	}
	if (func_118() == 2)
	{
		func_287();
		func_288();
		func_289(0, 0);
	}
	func_290(200f);
	func_291(35f, 75f, 1, 1077936128 /* Float: 3f */, 0);
	func_292(1065353216 /* Float: 1f */, 5f);
	func_293(joaat("VOLSPHERE"), func_220(), 0f, 0f, 0f, 10f, 10f, 10f);
	func_293(joaat("VOLBOX"), func_220() + Vector(0f, 10f, 10f), 0f, 0f, 0f, 10f, 10f, 10f);
	func_294(func_249(0));
	func_295();
	if (func_118() == 0)
	{
		func_296();
	}
	switch (func_118())
	{
		case 0:
		case 2:
			func_297(&(Local_1324.f_53), 0, func_220(), 1112014848 /* Float: 50f */);
			break;
		case 1:
			func_297(&(Local_1324.f_53), 0, func_220(), 35f);
			break;
	}
	func_298(&(Local_1324.f_53), 1);
	if (func_118() == 0)
	{
		func_299(3);
	}
}

void func_164()
{
	func_300();
}

void func_165()
{
}

void func_166()
{
	float fVar0;

	if (func_240(Local_1324.f_15))
	{
		return;
	}
	if (func_301())
	{
		return;
	}
	if (func_302(Local_1324.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_1324.f_15);
		if (fVar0 < 200f)
		{
			func_151(4096);
		}
		else if (fVar0 < 400f)
		{
			func_150(4096);
			func_151(2048);
		}
		else
		{
			func_150(4096);
			func_150(2048);
		}
	}
}

void func_167()
{
	func_303();
	func_304();
	func_305();
	func_306();
	func_307();
	func_308();
}

void func_168()
{
	if (func_309())
	{
		func_151(8);
	}
	else
	{
		func_150(8);
	}
}

void func_169()
{
	int iVar0;

	func_310();
	func_311();
	func_312();
	func_313();
	if (func_118() == 2)
	{
		func_314(func_249(0), 0);
	}
	else
	{
		func_314(func_249(0), 1);
	}
	if (func_315(128))
	{
		func_223(1048576);
	}
	if (func_316(8, 0) || func_118() == 2)
	{
		func_317();
	}
	switch (func_118())
	{
		case 0:
			func_318();
			switch (func_319())
			{
				case 0:
					func_320();
					break;
				case 1:
					func_321();
					break;
				case 3:
					func_322();
					break;
				case 4:
					func_323();
					break;
			}
			break;
		case 1:
			func_324();
			switch (func_319())
			{
				case 0:
					func_325();
					break;
				case 2:
					func_326();
					break;
				case 4:
					func_327();
					break;
			}
			break;
		case 2:
			break;
	}
	if (!func_328(4))
	{
		if (func_329() || func_330())
		{
			func_331(4);
			if (func_332() && !func_333(262144, -1, 1))
			{
				func_223(262144);
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				func_334(iVar0);
				func_335(iVar0);
				iVar0++;
			}
		}
	}
	else if (!(func_329() || func_330()))
	{
		func_336(4);
	}
}

void func_170()
{
	if (!func_134(8, 255))
	{
		func_151(16);
	}
	else
	{
		func_150(16);
	}
}

void func_171()
{
	int iVar0;

	Local_1324.f_6 = -1;
	Local_1324.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1324.f_5 = (Local_1324.f_5 || Local_75[iVar0 /*39*/]);
			Local_1324.f_6 = (Local_1324.f_6 && Local_75[iVar0 /*39*/]);
		}
		iVar0++;
	}
}

bool func_172()
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_249(4)))
	{
		func_286(func_249(4), 1, 1);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_249(5)))
	{
		func_286(func_249(5), 1, 1);
	}
	return true;
}

void func_173()
{
	func_337();
}

void func_174(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_1324.f_191.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_175(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_191.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_176(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_177(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_178(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1324.f_302[iParam0 /*20*/].f_4, iParam1);
}

void func_179(var uParam0)
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

void func_180()
{
	char* sVar0;

	if (!func_338())
	{
		return;
	}
	if (func_339(2, -1))
	{
		return;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1324.f_53) && ENTITY::IS_ENTITY_DEAD(Local_1324.f_53)) || Local_1324.f_53.f_2 == 12)
	{
		return;
	}
	if (func_340(16))
	{
		return;
	}
	sVar0 = func_341(Local_1324.f_160.f_5, Local_1324.f_160.f_6);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	func_342(sVar0);
}

bool func_181(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

void func_182(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_344(func_343(Param0));
	iVar1 = func_345(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_346(Param0, &Var2);
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

void func_183(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_347(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_348(iVar0);
}

void func_184(int iParam0, int iParam1)
{
	func_132(&(Global_1272030.f_3271[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1272030.f_3275[iParam0] = func_349(iParam0);
			break;
		case 1:
			Global_1272030.f_3275[iParam0] = func_350(iParam0);
			break;
		case 2:
			Global_1272030.f_3275[iParam0] = func_351(iParam0);
			break;
	}
}

bool func_185(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_186(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_187(var uParam0)
{
	if (func_39(*uParam0))
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

int func_188(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_352(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_353(iParam1)) - 1);
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

void func_189(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_354(uParam0);
			break;
		case 1:
			func_354(uParam0);
			break;
		case 2:
			func_354(uParam0);
			break;
		case 3:
			func_355(uParam0);
			break;
		case 4:
			func_354(uParam0);
			break;
		case 5:
			func_354(uParam0);
			break;
		case 6:
			func_355(uParam0);
			break;
		case 7:
			func_355(uParam0);
			break;
		case 8:
			func_355(uParam0);
			break;
		case 9:
			func_354(uParam0);
			break;
		default:
			func_191(uParam0);
			func_190(uParam0);
			break;
	}
}

void func_190(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_193(uParam0, iVar0);
		iVar0++;
	}
}

void func_191(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_192(uParam0, iVar0);
		iVar0++;
	}
}

void func_192(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_193(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_194(var uParam0, int iParam1)
{
	func_265(&(uParam0->f_25), iParam1);
}

void func_195(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 0);
			break;
		case 1:
		case 2:
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			break;
		case 8:
			func_193(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_193(uParam0, 1);
			break;
		default:
			func_190(uParam0);
			break;
	}
}

void func_196(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_356(uParam0);
			break;
		case 1:
			func_357(uParam0);
			break;
		case 2:
			func_358(uParam0);
			break;
		case 3:
			func_359(uParam0);
			break;
		default:
			func_191(uParam0);
			func_190(uParam0);
			break;
	}
}

Vector3 func_197(int iParam0)
{
	if (!func_186(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

void func_198(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_360(uParam0);
			break;
		case 1:
		case 2:
			func_361(uParam0);
			break;
		case 3:
		case 4:
			func_362(uParam0);
			break;
		default:
			func_190(uParam0);
			break;
	}
	func_191(uParam0);
}

void func_199(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			break;
		case 1:
			func_193(uParam0, 1);
			func_193(uParam0, 3);
			break;
		default:
			func_191(uParam0);
			func_190(uParam0);
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
			func_192(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_192(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_192(uParam0, 0);
			break;
		default:
			func_192(uParam0, 0);
			break;
	}
	func_190(uParam0);
}

void func_201(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_192(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_192(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_192(uParam0, 2);
			break;
		default:
			func_191(uParam0);
			break;
	}
	func_190(uParam0);
}

void func_202(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_192(uParam0, 0);
			func_193(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_192(uParam0, 1);
			func_193(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_192(uParam0, 2);
			func_193(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_192(uParam0, 3);
			func_193(uParam0, 0);
			break;
	}
}

void func_203(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_192(uParam0, 0);
			func_193(uParam0, 0);
			break;
		case 2:
			func_192(uParam0, 1);
			func_193(uParam0, 0);
			break;
		case 3:
		case 4:
			func_192(uParam0, 2);
			func_193(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_192(uParam0, 3);
			func_193(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_192(uParam0, 4);
			func_193(uParam0, 1);
			break;
	}
}

void func_204(var uParam0, int iParam1)
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
			func_192(uParam0, 3);
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
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			break;
		default:
			func_191(uParam0);
			break;
	}
	func_190(uParam0);
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
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_192(uParam0, 3);
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
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			break;
		default:
			func_191(uParam0);
			break;
	}
	func_190(uParam0);
}

void func_206(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_193(uParam0, 0);
			func_192(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_193(uParam0, 1);
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			func_192(uParam0, 2);
			break;
		default:
			func_193(uParam0, 0);
			func_192(uParam0, 0);
			break;
	}
}

void func_207(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_193(uParam0, 0);
			func_192(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_193(uParam0, 1);
			func_192(uParam0, 0);
			func_192(uParam0, 1);
			break;
		default:
			func_193(uParam0, 0);
			func_192(uParam0, 0);
			break;
	}
}

void func_208(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_190(uParam0);
			func_191(uParam0);
			break;
		default:
			func_190(uParam0);
			func_191(uParam0);
			break;
	}
}

int func_209(int iParam0)
{
	return Global_1272030.f_3348[iParam0];
}

int func_210(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_3;
}

int func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/];
}

var func_212(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_363(&Var1, iParam0) && func_364(&Var1, iParam1))
	{
		func_365(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_363(&Var1, iParam0) && func_364(&Var1, iParam1))
	{
		func_365(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_214(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_366(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

Vector3 func_215(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_366(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

void func_216(var uParam0, var uParam1)
{
	func_367(uParam0);
	func_368(uParam0, 1);
	func_369(uParam0, 1);
	func_370(uParam1);
	func_371(uParam1);
	func_372(uParam1);
	func_373(uParam1, 1);
	func_374(uParam1, 1);
}

bool func_217(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_375(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_218(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_376(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_377(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_377(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_377(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

void func_219(int iParam0, int iParam1)
{
	Local_1324.f_191.f_7[iParam0 /*11*/].f_3 = iParam1;
}

Vector3 func_220()
{
	return Local_1324.f_15;
}

float func_221()
{
	switch (func_119())
	{
		case 0:
			return -50f;
		case 1:
			return -160f;
		case 2:
			return -19.4737f;
		case 3:
			return -100f;
		default:
			break;
	}
	return 0f;
}

void func_222(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_1324.f_191.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_1324.f_191.f_7[iParam0 /*11*/].f_5 = fParam4;
	if (bParam5)
	{
		func_238(&(Local_1324.f_191.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_263(&(Local_1324.f_191.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_223(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID();
	if (func_378(iVar0))
	{
		func_238(&(Local_75[iVar0 /*39*/].f_6), iParam0);
	}
}

Vector3 func_224(bool bParam0)
{
	if (!bParam0)
	{
		return func_233() + Vector(0f, 2f, 2f);
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			switch (func_119())
			{
				case 0:
					return -1699.014f, 617.6483f, 118.2329f;
				case 1:
					return -2533.616f, 907.3358f, 167.7475f;
				case 2:
					return -2482.874f, 485.1402f, 142.3067f;
				case 3:
					return -1926.667f, 780.7809f, 153.9174f;
				default:
					break;
			}
			break;
		case 1:
			switch (func_119())
			{
				case 0:
					return -1752.495f, 610.1951f, 116.9599f;
				case 1:
					return -2595.42f, 882.6008f, 163.583f;
				case 2:
					return -2541.974f, 501.7653f, 141.4327f;
				case 3:
					return -1859.774f, 787.0408f, 142.6768f;
				default:
					break;
			}
			break;
	}
	return func_233() + Vector(0f, 2f, 2f);
}

float func_225()
{
	switch (func_119())
	{
		case 0:
			return 242.2885f;
		case 1:
			return 40.9178f;
		case 2:
			return 272.6987f;
		case 3:
			return 109.2439f;
		case 4:
			return 24.5522f;
		case 5:
			return 180.9184f;
		case 8:
			return 147.5836f;
		case 9:
			return 263.9961f;
		case 10:
			return 177.2937f;
		case 11:
			return 342.4729f;
		case 12:
			return 284.676f;
		default:
			break;
	}
	return 0f;
}

void func_226(int iParam0)
{
	func_231(iParam0, 4);
}

void func_227(int iParam0, int iParam1)
{
	Local_1324.f_191.f_7[iParam0 /*11*/].f_4 = iParam1;
}

Vector3 func_228()
{
	return -1f, 2f, 0.3f;
}

float func_229()
{
	return 41.2263f;
}

void func_230(int iParam0)
{
	MISC::SET_BIT(&(Local_1324.f_19), iParam0);
}

void func_231(int iParam0, int iParam1)
{
	func_238(&(Local_1324.f_191.f_7[iParam0 /*11*/].f_2), iParam1);
}

Vector3 func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_119())
			{
				case 4:
					return -2019.771f, 664.5181f, 119.954f;
				case 5:
					return -2431.763f, 829.8461f, 139.0101f;
				case 6:
					return -2484.222f, 419.401f, 147.8952f;
				case 7:
					return -2577.711f, 343.2651f, 149.5964f;
				default:
					break;
			}
			break;
		case 1:
			switch (func_119())
			{
				case 4:
					return -2026.472f, 657.1245f, 119.5974f;
				case 5:
					return -2446.374f, 826.4106f, 139.1827f;
				case 6:
					return -2477.916f, 408.4608f, 148.9756f;
				case 7:
					return -2575.928f, 350.0988f, 149.6606f;
				default:
					break;
			}
			break;
	}
	return func_233() + Vector(0f, 2f, 2f);
}

Vector3 func_233()
{
	switch (func_119())
	{
		case 0:
			return -1746.47f, 671.6854f, 121.6418f;
		case 1:
			return -2513.025f, 857.7523f, 155.6896f;
		case 2:
			return -2532.583f, 532.4015f, 140.8335f;
		case 3:
			return -1888.649f, 712.9268f, 140.8795f;
		case 4:
			return -2016.286f, 624.5898f, 116.7403f;
		case 5:
			return -2432.868f, 784.5943f, 135.0321f;
		case 6:
			return -2443.115f, 437.5349f, 146.6178f;
		case 7:
			return -2604.553f, 303.6333f, 146.0198f;
		default:
			break;
	}
	return func_220();
}

void func_234(var uParam0, int iParam1)
{
	func_265(&(uParam0->f_21), iParam1);
}

void func_235()
{
	int iVar0;

	if (Local_13.f_7.f_1 == -1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		Local_13.f_7.f_1 = iVar0;
	}
}

void func_236(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

bool func_237(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_238(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_239(int iParam0)
{
	int iVar0;

	if (!func_186(iParam0))
	{
		return false;
	}
	iVar0 = func_379(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_240(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_241(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_242(struct<31> Param0)
{
	var uVar0;

	func_241(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

bool func_243(var uParam0)
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
	while (iVar2 < 7)
	{
		if (func_175(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_380(iVar2, uParam0, &bVar1))
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
			if (func_381(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_34[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_34[iVar2]))
					{
						NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_34[iVar2]);
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

void func_244()
{
	func_129(2);
}

bool func_245(bool bParam0)
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
	vVar10 = { Local_1324.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = func_382(iVar0, iVar1);
			if (func_177(iVar0, iVar1))
			{
			}
			else if (func_176(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_1324.f_302[iVar0 /*20*/].f_2, iVar1))
			{
				if (func_383(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*2*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar0 /*2*/][iVar1]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_42[iVar0 /*2*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*2*/][iVar1]))
				{
					if (!func_384(iVar0, iVar1))
					{
						vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_385(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_385(iVar0, iVar1) };
					}
					if (func_386(iVar0, iVar1))
					{
						if (!func_387(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_388(iVar0, iVar1))
							{
								iVar13 = PED::_0x9641A9A20310F6B8(Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 1, 0, 0);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_42[iVar0 /*2*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*2*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_389(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5, Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_4, func_385(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_42[iVar0 /*2*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*2*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_13.f_42[iVar0 /*2*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1091; //curOff = 577
							}
							else if (!func_390(&(Local_13.f_42[iVar0 /*2*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*2*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar0 /*2*/][iVar1]);
								if (func_383(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*2*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar0 /*2*/][iVar1]))
										{
											NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_42[iVar0 /*2*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_1324.f_302[iVar0 /*20*/].f_2), iVar1);
								if (func_391(iVar0, iVar1))
								{
									TASK::_0x78B4567E18B54480(iVar13);
									GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
								}
								if (func_392(iVar0, iVar1))
								{
									ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
								}
								if (func_393(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_0xA91E6CF94404E8C9(iVar13);
								}
								if (func_386(iVar0, iVar1))
								{
									ENTITY::_0x9587913B9E772D29(iVar13, 0);
								}
								vVar4 = { func_394(iVar0, iVar1) };
								if (!func_240(vVar4))
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
										if (!func_395(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_396(vVar4.x)), MISC::ABSF(func_396(vVar4.y))) };
											vVar27 = { func_397(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_398(iVar0, iVar1))
								{
									func_399(iVar0, iVar1, 1);
								}
								if (func_400(iVar0, iVar1))
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

bool func_246(int iParam0)
{
	return func_185(Local_1324.f_5, iParam0);
}

bool func_247(int iParam0)
{
	return func_185(Local_1324.f_6, iParam0);
}

void func_248()
{
	if (Local_1324.f_25 && func_401(&(Local_13.f_7), &(Local_1324.f_25)))
	{
		func_129(7);
	}
}

int func_249(int iParam0)
{
	return Local_1324.f_191.f_7[iParam0 /*11*/];
}

void func_250(vector3 vParam0)
{
	if (!func_131(Local_1324.f_13))
	{
		func_132(&(Local_1324.f_13));
	}
	if (func_133(Local_1324.f_13) < Global_1901947.f_236.f_69)
	{
		return;
	}
	func_402(Local_1324.f_9, vParam0, 0, Local_1324.f_12);
	func_156(&(Local_1324.f_13));
}

bool func_251()
{
	if (!func_316(16, 0) && func_118() != 2)
	{
		return false;
	}
	if (Local_13.f_24 > 3 || func_403())
	{
		if (!func_404(0, 250f, 0) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 5000)
		{
			return true;
		}
		if (func_253(16) && !func_404(0, 150f, 0))
		{
			return true;
		}
		if (ENTITY::IS_ENTITY_DEAD(func_249(0)))
		{
			if (!func_404(0, 175f, 0))
			{
				func_405(0, 16);
				func_405(1, 16);
				func_405(2, 16);
				return true;
			}
		}
		if (func_406(1048576, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_252(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	func_407(&iVar0, &iVar2, &iVar1);
	if (iParam2 > iVar1)
	{
		return false;
	}
	if (iVar0 >= iParam0)
	{
		if (iParam1 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_253(int iParam0)
{
	return func_185(Local_13.f_24.f_1, iParam0);
}

void func_254(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_238(&(Local_13.f_24.f_1), iParam0);
	}
}

int func_255()
{
	return Local_13.f_24;
}

void func_256()
{
	if (func_316(2, 0))
	{
		func_408(1);
	}
	if (func_316(64, 0))
	{
		Local_13.f_24.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_408(4);
	}
}

void func_257()
{
	if (func_316(4, 0))
	{
		if (func_316(64, 0))
		{
			Local_13.f_24.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_408(4);
		}
		else
		{
			func_408(3);
		}
	}
	if (func_316(64, 0))
	{
		Local_13.f_24.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_408(4);
	}
}

void func_258()
{
	if (func_316(64, 0))
	{
		Local_13.f_24.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_408(4);
	}
}

void func_259()
{
	if (func_253(4) && Local_13.f_24.f_6 == 0)
	{
		Local_13.f_24.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (func_316(16, 0) && ENTITY::DOES_ENTITY_EXIST(func_249(0)))
	{
		if (ENTITY::IS_ENTITY_DEAD(func_249(0)))
		{
			func_408(5);
		}
	}
}

void func_260()
{
	if (func_301() && func_316(131072, 0))
	{
		Local_13.f_24.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_408(2);
	}
}

void func_261()
{
	int iVar0;
	bool bVar1;

	if ((NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 20000 && Local_13.f_24.f_7 == 255) || (func_253(2) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 3000))
	{
		Local_13.f_24.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_408(4);
	}
	if (!func_253(2))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_24.f_7))
		{
			iVar0 = 1;
			bVar1 = func_410(&(Local_13.f_24.f_8), func_409(func_253(1)), &iVar0);
			if (bVar1 || func_316(65536, 0))
			{
				Local_13.f_24.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_254(2);
			}
		}
		else if (func_316(16384, 0))
		{
			Local_13.f_24.f_7 = func_412(4, 61163, 20f, 1, 0);
			func_413(&(Local_13.f_24.f_8), Local_13.f_24.f_7, Local_1324.f_170.f_5);
			if (func_414(4))
			{
				func_254(1);
			}
			else
			{
				func_415(1);
			}
		}
		else if (func_316(32768, 0))
		{
			Local_13.f_24.f_7 = func_412(5, 61163, 20f, 1, 0);
			func_413(&(Local_13.f_24.f_8), Local_13.f_24.f_7, Local_1324.f_170.f_6);
			if (func_414(5))
			{
				func_254(1);
			}
			else
			{
				func_415(1);
			}
		}
	}
}

void func_262()
{
	if (func_253(4) && Local_13.f_24.f_6 == 0)
	{
		Local_13.f_24.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_249(0)) && ENTITY::IS_ENTITY_DEAD(func_249(0)))
	{
		if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 15000)
		{
			func_408(5);
		}
	}
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_264(int iParam0)
{
	if (!func_186(iParam0))
	{
		return 0;
	}
	if (!func_239(iParam0))
	{
		return 0;
	}
	return Global_1131196[iParam0 /*27*/].f_18.f_1;
}

void func_265(var uParam0, int iParam1)
{
	func_416(uParam0, iParam1);
}

void func_266(var uParam0, int iParam1)
{
	func_417(uParam0, iParam1);
}

void func_267(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_418(&Var0, iParam0))
			{
				func_419(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_268(int iParam0)
{
}

void func_269(int iParam0)
{
}

bool func_270()
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

char* func_271()
{
	switch (func_118())
	{
		case 0:
		case 2:
			return "script@ambient@animal@bear_scratch_back_on_tree@action";
		case 1:
			return "script@beat@wilderness@legendaryAnimalEncounter@turnover";
	}
	return "";
}

char* func_272()
{
	switch (func_118())
	{
		case 0:
		case 2:
			return "pbl_action";
		case 1:
			return "pbl_idle";
	}
	return "";
}

bool func_273()
{
	switch (func_118())
	{
		case 0:
			if (func_420("CREATURES_MAMMAL@DEER@NORMAL@DEAD"))
			{
				if (func_420("creatures_mammal@bear@action_standing@transition@action_to_standing"))
				{
					if (func_420("CREATURES_MAMMAL@BEAR@ACTION_STANDING@IDLE@IDLE_VARIATION@ROAR"))
					{
						return func_420("CREATURES_MAMMAL@BEAR@ACTION_STANDING@TRANSITION@STANDING_TO_ACTION");
					}
				}
			}
			break;
		case 1:
			if (func_420("AI_DAMAGE@DEAD@BASE"))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_274()
{
	PROPSET::_REQUEST_PROPSET(615791785);
	if (PROPSET::_HAS_PROPSET_LOADED(615791785))
	{
		return true;
	}
	return false;
}

bool func_275()
{
	if (PROPSET::_DOES_PROPSET_EXIST(Local_1324.f_170.f_11) || PROPSET::_DOES_PROPSET_OF_TYPE_EXIST_NEAR_COORDS(615791785, func_220()))
	{
		return true;
	}
	Local_1324.f_170.f_11 = PROPSET::_CREATE_PROPSET(615791785, func_220(), 1, 0f, 1200f, false, true);
	if (PROPSET::_DOES_PROPSET_EXIST(Local_1324.f_170.f_11))
	{
		return true;
	}
	return false;
}

void func_276(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		func_421(uParam0, vParam1, vParam4, vParam7, sParam10);
	}
}

bool func_277()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Local_1324.f_191.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_422(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_1324.f_191.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1324.f_191.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_1324.f_191.f_3), iVar0);
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

bool func_278()
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
			if (MISC::IS_BIT_SET(Local_1324.f_302[iVar0 /*20*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_382(iVar0, iVar1);
				if (func_423(iVar1))
				{
					if (Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_0x93FFD92F05EC32FD(Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6 = PED::_0x91FE941F9FCFB702(Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_1324.f_302[iVar0 /*20*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_1324.f_302[iVar0 /*20*/].f_1), iVar1);
					}
				}
				else if (func_424(iVar1))
				{
					WEAPON::_0x72D4CB5DB927009C(Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5, -1, 0);
					if (!WEAPON::_0xFF07CF465F48B830(Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_1324.f_302[iVar0 /*20*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_1324.f_302[iVar0 /*20*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @468; //curOff = 360
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_1324.f_302[iVar0 /*20*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_1324.f_302[iVar0 /*20*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @468; //curOff = 422
					}
					else if (!MISC::IS_BIT_SET(Local_1324.f_302[iVar0 /*20*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_1324.f_302[iVar0 /*20*/].f_1), iVar1);
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

bool func_279(var uParam0, var uParam1)
{
	if (*uParam0 == 3)
	{
		return func_425(&(uParam0->f_9), &(uParam1->f_16), &(uParam1->f_4), &(uParam1->f_12), 64);
	}
	return true;
}

bool func_280()
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
	vVar10 = { Local_1324.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = func_382(iVar0, iVar1);
			if (func_176(iVar0, iVar1))
			{
			}
			else if (!func_177(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_1324.f_302[iVar0 /*20*/].f_2, iVar1))
					{
						if (func_383(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*2*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar0 /*2*/][iVar1]))
								{
									NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_42[iVar0 /*2*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_1324.f_302[iVar0 /*20*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_384(iVar0, iVar1))
				{
					vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_385(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_385(iVar0, iVar1) };
				}
				if (func_386(iVar0, iVar1))
				{
					if (!func_387(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_388(iVar0, iVar1))
						{
							iVar13 = PED::_0x9641A9A20310F6B8(Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 0, 0, 0);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_389(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5, Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/].f_4, func_385(iVar0, iVar1), true, 1f);
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
						MISC::SET_BIT(&(Local_1324.f_302[iVar0 /*20*/].f_2), iVar1);
						if (func_391(iVar0, iVar1))
						{
							TASK::_0x78B4567E18B54480(iVar13);
							GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
						}
						if (func_392(iVar0, iVar1))
						{
							ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
						}
						if (func_393(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar13);
						}
						if (func_386(iVar0, iVar1))
						{
							ENTITY::_0x9587913B9E772D29(iVar13, 0);
						}
						vVar4 = { func_394(iVar0, iVar1) };
						if (!func_240(vVar4))
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
								if (!func_395(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_396(vVar4.x)), MISC::ABSF(func_396(vVar4.y))) };
									vVar27 = { func_397(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_1324.f_302[iVar0 /*20*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_398(iVar0, iVar1))
						{
							func_399(iVar0, iVar1, 1);
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

void func_281(struct<2> Param0)
{
	if (func_345(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_345(Param0)))
	{
		STATS::_0x99230691875FC218(func_343(Param0), func_345(Param0), Global_35);
	}
}

void func_282()
{
	int iVar0;
	int iVar1;

	if (!func_217(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_426(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_283()
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
			if (func_177(iVar1, iVar2))
			{
			}
			else if (func_176(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*2*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*2*/][iVar2]);
				Local_1324.f_302[iVar1 /*20*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_383(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*2*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar1 /*2*/][iVar2]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_42[iVar1 /*2*/][iVar2]);
						}
					}
				}
				if (func_391(iVar1, iVar2))
				{
					TASK::_0x78B4567E18B54480(iVar0);
					GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, true);
				}
			}
			else if (0 != func_382(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_284(int iParam0)
{
	int iVar0;

	iVar0 = func_249(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 402, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 542, true);
		POPULATION::_0xF74E134F40192884(iVar0, 1);
		func_427(iVar0);
	}
	func_231(iParam0, 256);
	func_231(iParam0, 16);
	if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iVar0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iVar0, 1);
	}
}

void func_285()
{
	func_428(func_249(3));
	ENTITY::SET_ENTITY_MAX_HEALTH(func_249(3), 151);
	ENTITY::_SET_ENTITY_HEALTH(func_249(3), 151, 0);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(func_249(3), 74, 0f);
}

void func_286(int iParam0, bool bParam1, bool bParam2)
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

void func_287()
{
	int iVar0;

	iVar0 = func_249(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		func_428(func_249(0));
		func_430(iVar0, func_429(func_118() == 2, 0));
		AUDIO::PLAY_ANIMAL_VOCALIZATION(func_249(0), "ROAR", false);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(iVar0, true);
		TASK::_0x9DE63896B176EA94(iVar0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 55, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 70, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 54, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 58, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
	}
}

void func_288()
{
	func_373(&(Local_1324.f_115), 1);
	func_431(&(Local_1324.f_115), 1);
	func_368(&(Local_1324.f_115), 1);
	func_374(&(Local_1324.f_115), 0);
	func_369(&(Local_1324.f_115), 1);
	func_432(&(Local_1324.f_115), 0);
	func_433(&(Local_1324.f_115), 0);
	func_434(&(Local_1324.f_115), 0);
	func_435(&(Local_1324.f_115), 0);
	func_436(&(Local_1324.f_115), 6f);
	func_437(&(Local_1324.f_115), 1106247680 /* Float: 30f */);
	func_438(&(Local_1324.f_115), 1);
	func_439(&(Local_1324.f_115), 1);
	func_440(&(Local_1324.f_115), 1, 1, 1);
	func_441(&(Local_1324.f_115), 60);
}

void func_289(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_442(&(Local_75[iVar0 /*39*/].f_17), 5, iParam0);
	}
	else
	{
		func_443(&(Local_75[iVar0 /*39*/].f_17), 5, iParam0);
	}
}

void func_290(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_445(func_444(iVar0), fParam0);
		iVar0++;
	}
}

void func_291(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_1324.f_522.f_2 = iParam2;
	Local_1324.f_522.f_9 = fParam0;
	Local_1324.f_522.f_10 = fParam1;
	Local_1324.f_522.f_8 = iParam3;
	if (bParam4)
	{
		func_238(&(Local_1324.f_522.f_12), 1);
	}
	else
	{
		func_263(&(Local_1324.f_522.f_12), 1);
	}
}

void func_292(int iParam0, float fParam1)
{
	func_238(&(Local_1324.f_522.f_12), 2);
	Local_1324.f_522.f_7 = fParam1;
	Local_1324.f_522.f_5 = iParam0;
}

int func_293(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1324.f_522.f_11))
	{
		Local_1324.f_522.f_11 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("NB_Trigger");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1324.f_522.f_11))
	{
		switch (iParam0)
		{
			case joaat("VOLBOX"):
				VOLUME::_0x39816F6F94F385AD(Local_1324.f_522.f_11, vParam1, vParam4, vParam7);
				break;
			case joaat("VOLSPHERE"):
				VOLUME::_0x5B7D7BF36D2DE18B(Local_1324.f_522.f_11, vParam1, vParam4, vParam7);
				break;
			case joaat("VOLCYLINDER"):
				VOLUME::_0xBCE668AAF83608BE(Local_1324.f_522.f_11, vParam1, vParam4, vParam7);
				break;
		}
		return 1;
	}
	return 0;
}

int func_294(int iParam0)
{
	if (func_446(iParam0, &(Local_1324.f_522.f_13)))
	{
		Local_1324.f_522++;
		return 1;
	}
	return 0;
}

void func_295()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_24.f_2))
		{
			Local_1324.f_170.f_5 = NETWORK::_NET_TO_ANIM_SCENE(Local_13.f_24.f_2);
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1324.f_170.f_5))
			{
			}
		}
		if (func_118() == 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_24.f_3))
			{
				Local_1324.f_170.f_6 = NETWORK::_NET_TO_ANIM_SCENE(Local_13.f_24.f_3);
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1324.f_170.f_6))
				{
				}
			}
		}
	}
}

void func_296()
{
	switch (func_118())
	{
		case 0:
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1324.f_170.f_5))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1324.f_170.f_5, "bear", func_249(3), 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1324.f_170.f_5, func_220(), 0f, 0f, func_221(), 2);
				ANIMSCENE::START_ANIM_SCENE(Local_1324.f_170.f_5);
			}
			break;
		case 1:
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1324.f_170.f_5))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1324.f_170.f_5, "dead", func_249(4), 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1324.f_170.f_5, func_447(4) + Vector(func_448(0), 0f, 0f), 0f, 0f, func_449(0), 2);
				ANIMSCENE::START_ANIM_SCENE(Local_1324.f_170.f_5);
			}
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1324.f_170.f_6))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1324.f_170.f_6, "dead", func_249(5), 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1324.f_170.f_6, func_447(5) + Vector(func_448(1), 0f, 0f), 0f, 0f, func_449(1), 2);
				ANIMSCENE::START_ANIM_SCENE(Local_1324.f_170.f_6);
			}
			break;
	}
}

void func_297(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	func_231(iParam1, 256);
	uParam0->f_58 = iParam1;
	*uParam0 = func_249(iParam1);
	uParam0->f_30 = iParam5;
	uParam0->f_48 = { vParam2 };
}

void func_298(var uParam0, int iParam1)
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
			func_451(uParam0, func_450(*uParam0), 1000, 15f, 1500f, 10f, -1723181095);
			func_452(uParam0, 30f, 50f, 120f, 50f, 80f, 500f, 1f, 4f, 0.5f);
			func_453(uParam0, 8);
			func_453(uParam0, 4);
			break;
		case 0:
			func_451(uParam0, "LEGENDARY_ALLIGATOR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 30f, 50f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 1:
			func_451(uParam0, "LEGENDARY_BEAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 2:
			func_451(uParam0, "LEGENDARY_BEAVER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 3:
			func_451(uParam0, "LEGENDARY_BISON_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 4:
			func_451(uParam0, "LEGENDARY_BOAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 5:
			func_451(uParam0, "LEGENDARY_BUCK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 6:
			func_451(uParam0, "LEGENDARY_COUGAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 7:
			func_451(uParam0, "LEGENDARY_PANTHER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 8:
			func_451(uParam0, "LEGENDARY_COYOTE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 9:
			func_451(uParam0, "LEGENDARY_FOX_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 10:
			func_451(uParam0, "LEGENDARY_MOOSE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 11:
			func_451(uParam0, "LEGENDARY_RAM_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 12:
			func_451(uParam0, "LEGENDARY_WOLF_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 13:
			func_451(uParam0, "LEGENDARY_ELK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_452(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
	}
}

void func_299(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	MISC::SET_BIT(&(Local_1324.f_53.f_59), iVar0);
}

void func_300()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (func_455(func_454(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_0xBB1E41DD3D3C6250(Var1, "MpRandomEvent", 1);
					func_456(&(Local_1324.f_323), Var1);
					func_457(func_454(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_301()
{
	return (func_135(32) || func_134(32, 255));
}

bool func_302(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_458(iParam0, joaat("COOLDOWN")) };
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

void func_303()
{
	func_459();
	func_460();
}

void func_304()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_461(iVar0, bVar1, iVar2);
		func_462(iVar0, bVar1, iVar2);
		func_463(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_305()
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
	if (!func_217(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_1324.f_191.f_110)
	{
		bVar8 = true;
		Local_1324.f_191.f_110 = !Local_1324.f_191.f_110;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_1324.f_191.f_85 >= 7)
		{
			Local_1324.f_191.f_85 = 0;
		}
		iVar0 = Local_1324.f_191.f_85;
		Local_1324.f_191.f_85++;
		iVar9 = func_444(iVar0);
		iVar1 = Local_1324.f_191.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_175(iVar9, 4))
		{
			func_426(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_75[iVar3 /*39*/].f_7.f_2[iVar0] > -1f)
			{
				Local_75[iVar3 /*39*/].f_7.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1324.f_191.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1324.f_191.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1324.f_191.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1324.f_191.f_86), iVar0);
			}
		}
		else
		{
			bVar7 = func_464(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_1324.f_191.f_86, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_1324.f_191.f_86), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_1324.f_191.f_86), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_75[iVar3 /*39*/].f_7.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_75[iVar3 /*39*/].f_7.f_1), iVar0);
				}
				func_465(&(Local_1324.f_191.f_87[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_75[iVar3 /*39*/].f_7.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_466(&(Local_1324.f_191.f_87[iVar0 /*3*/])) || func_467(&(Local_1324.f_191.f_87[iVar0 /*3*/]), 0.5f))))
			{
				func_468(&(Local_1324.f_191.f_87[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_75[iVar3 /*39*/].f_7.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_175(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_1324.f_191.f_110, false, 256);
		}
		if (func_175(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_469(iVar9))
						{
							if (!func_380(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_405(iVar9, 4);
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
				if (!func_469(iVar9))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1324.f_191.f_86 != 0)
	{
		if (!func_470(1, 255))
		{
			func_471(1);
		}
	}
	else if (func_470(1, 255))
	{
		func_472(1);
	}
}

void func_306()
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
	if (!func_217(&iVar25))
	{
		return;
	}
	func_473();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::_0x705BE297EEBDB95D(iVar26))
	{
		Local_1324.f_323.f_64 = 0;
		Local_75[iVar25 /*39*/].f_17.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == joaat("WEAPON_MOONSHINEJUG") || iVar26 == joaat("WEAPON_MOONSHINEJUG_MP")));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_1324.f_323.f_189 >= 7)
		{
			Local_1324.f_323.f_189 = 0;
		}
		iVar1 = Local_1324.f_323.f_189;
		Local_1324.f_323.f_189++;
		iVar22++;
		iVar18 = func_454(iVar1);
		if (!func_474(iVar18))
		{
		}
		else if (func_475(iVar18, &Var5))
		{
			if (func_476(&Var5, iVar18))
			{
				if (func_477(&(Local_75[iVar25 /*39*/].f_17), 8, iVar1))
				{
					func_442(&(Local_75[iVar25 /*39*/].f_17), 8, iVar1);
				}
			}
			else if (!func_477(&(Local_75[iVar25 /*39*/].f_17), 8, iVar1))
			{
				func_443(&(Local_75[iVar25 /*39*/].f_17), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_478(iVar18);
				if (func_479(iVar18))
				{
					if (func_480(iVar18))
					{
						if (!func_481(iVar18))
						{
							func_482(iVar18);
						}
					}
					if (func_483(iVar18))
					{
						func_335(iVar18);
					}
				}
				else
				{
					if (func_484(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_485(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_456(&(Local_1324.f_323), Var5);
						}
					}
					if (!func_486(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_487(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_488(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_489(Var5, Var5.f_1, &(Local_1324.f_323), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_1324.f_323.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_1324.f_323.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_490(PLAYER::PLAYER_PED_ID(), Var5, 1060437492 /* Float: 0.707f */) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_491(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_1324.f_323.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_492(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_0xBB1E41DD3D3C6250(Var5, "MpRandomEvent", 1);
										func_457(iVar18);
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
														if (func_493(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_1324.f_323.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_1324.f_323.f_2 & 4 != 0)
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
									if (func_494(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_1324.f_323.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_495(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_477(&(Local_75[iVar25 /*39*/].f_17), 8, iVar1))
								{
									func_442(&(Local_75[iVar25 /*39*/].f_17), 8, iVar1);
								}
								func_496(iVar18, 1);
								if (func_497(iVar18))
								{
									if (!func_498(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_499(iVar18))
											{
											}
											else
											{
												func_500(iVar18);
												func_501(iVar18);
												Jump @1397; //curOff = 1201
												if (func_502(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (Local_1324.f_323.f_191[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_1324.f_323.f_191[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_1324.f_323.f_191[iVar18];
																Local_1324.f_323.f_191[iVar18]++;
															}
															iVar24++;
															if (func_503(iVar0, &uVar21, &iVar20, &iVar19))
															{
																if (!func_504(iVar18, iVar20))
																{
																	if (func_486(iVar18, iVar0))
																	{
																		if (!func_505(iVar18, uVar21, iVar20, iVar19))
																		{
																		}
																		else
																		{
																			func_506(iVar18, iVar20);
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

void func_307()
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

	fVar0 = func_507();
	if (Local_1324.f_522.f_4)
	{
		return;
	}
	if (!func_217(&iVar1))
	{
		return;
	}
	if (func_185(Local_75[iVar1 /*39*/].f_38, 1))
	{
		Local_1324.f_522.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_508(iVar2, 0))
	{
		return;
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_1324.f_15);
	fVar4 = Local_1324.f_522.f_9;
	fVar5 = Local_1324.f_522.f_10;
	if (func_185(Local_1324.f_522.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_1324.f_522.f_7));
		if (fVar7 > 0f)
		{
			if (func_509(Local_1324.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_1324.f_522.f_6 < 1f)
			{
				Local_1324.f_522.f_6 = (Local_1324.f_522.f_6 + fVar8);
				if (Local_1324.f_522.f_6 > 1f)
				{
					Local_1324.f_522.f_6 = 1f;
				}
			}
		}
		else if (Local_1324.f_522.f_6 > 0f)
		{
			Local_1324.f_522.f_6 = (Local_1324.f_522.f_6 - fVar8);
			if (Local_1324.f_522.f_6 < 0f)
			{
				Local_1324.f_522.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_1324.f_522.f_5) * Local_1324.f_522.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_238(&(Local_75[iVar1 /*39*/].f_38), 1);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_1324.f_522.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_1324.f_522.f_11, false, 0))
	{
		func_238(&(Local_75[iVar1 /*39*/].f_38), 1);
	}
	else if (Local_1324.f_522 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_510(&(Local_1324.f_522.f_13[iVar10 /*9*/]), fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_511(&(Local_1324.f_522.f_13), Local_1324.f_522, Local_1324.f_522.f_8))
		{
			func_238(&(Local_75[iVar1 /*39*/].f_38), 1);
		}
	}
	if (func_185(Local_75[iVar1 /*39*/].f_38, 1))
	{
		Local_1324.f_522.f_4 = 1;
	}
}

void func_308()
{
	float fVar0;

	func_512();
	func_513();
	func_514();
	func_515(&(Local_1324.f_167));
	if (Local_1324.f_25)
	{
		func_516(&(Local_13.f_7), &(Local_1324.f_25), &(Local_1324.f_53));
	}
	func_517();
	if (func_518(&(Local_1324.f_53)))
	{
		func_519(&(Local_1324.f_53));
	}
	func_520(Local_1324.f_53);
	func_521(Local_1324.f_53);
	func_522(Local_1324.f_53);
	if (func_339(2, -1))
	{
		fVar0 = 150f;
	}
	else
	{
		fVar0 = 250f;
	}
	func_523(Local_1324.f_53, fVar0);
}

bool func_309()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_1324.f_14))
	{
		return false;
	}
	if (func_524())
	{
		return false;
	}
	if (func_525(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_310()
{
	int iVar0;

	Local_1324.f_170.f_3 = -1;
	Local_1324.f_170.f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1324.f_170.f_4 = (Local_1324.f_170.f_4 || Local_75[iVar0 /*39*/].f_6);
			Local_1324.f_170.f_3 = (Local_1324.f_170.f_3 && Local_75[iVar0 /*39*/].f_6);
		}
		iVar0++;
	}
}

void func_311()
{
	if (func_255() != func_319())
	{
		func_526(func_319(), func_255());
		func_527(Local_13.f_24);
	}
}

void func_312()
{
	int iVar0[3];
	bool bVar4;
	int iVar5;

	if (func_328(16))
	{
		iVar0[0] = func_249(0);
		iVar0[1] = func_249(1);
		iVar0[2] = func_249(2);
		func_528(&iVar0);
	}
	else if (func_118() == 2)
	{
		if (func_403())
		{
			func_529();
		}
	}
	else
	{
		if (!func_253(4))
		{
			return;
		}
		bVar4 = false;
		iVar5 = 0;
		while (iVar5 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_249(iVar5)))
			{
				if (func_530(iVar5, 255, 1) < 100f)
				{
					bVar4 = true;
				}
			}
			iVar5++;
		}
		if (bVar4)
		{
			func_529();
		}
	}
}

void func_313()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = func_249(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = func_531(iVar1, PLAYER::PLAYER_PED_ID(), &(Local_1324.f_170.f_15), &(Local_1324.f_170.f_18));
			if (iVar2 == 0 && func_333(524288, -1, 1))
			{
				func_532(524288);
				return;
			}
			else if (iVar2 == 1 && !func_333(524288, -1, 1))
			{
				func_223(524288);
				return;
			}
		}
		iVar0++;
	}
}

void func_314(int iParam0, int iParam1)
{
	if (Local_1324.f_160.f_6 == -1)
	{
		Local_1324.f_160.f_6 = iParam1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_533(&(Local_1324.f_53), 128))
	{
		if (func_534(Global_34, iParam0, 20f, 1, 1))
		{
			func_536(iParam0, func_535(ENTITY::GET_ENTITY_MODEL(iParam0)), iParam1, &(Local_1324.f_53));
			func_453(&(Local_1324.f_53), 128);
		}
	}
}

bool func_315(int iParam0)
{
	return func_237(Local_1324.f_160, iParam0);
}

bool func_316(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return func_185(Local_1324.f_170.f_4, iParam0);
	}
	else
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar1 = func_185(Local_1324.f_170.f_4, iParam0);
		if (bVar1 && !func_185(Local_75[iVar0 /*39*/].f_6, iParam0))
		{
			func_238(&(Local_75[iVar0 /*39*/].f_6), iParam0);
		}
		return bVar1;
	}
	return false;
}

void func_317()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_249(0)) && !func_328(32))
	{
		func_537(func_249(0));
		func_331(32);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_249(1)) && !func_328(128))
	{
		func_284(1);
		func_331(128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_249(2)) && !func_328(64))
	{
		func_284(2);
		func_331(64);
	}
}

void func_318()
{
	vector3 vVar0;

	if (!func_538(255))
	{
		return;
	}
	vVar0 = { func_539(PLAYER::PLAYER_ID()) };
	if (func_316(2048, 0) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 5000)
	{
		func_540(1, vVar0, 150f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0, 0, 1);
	}
	if (func_316(4096, 0) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 5000)
	{
		func_540(2, vVar0, 150f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0, 0, 1);
	}
}

int func_319()
{
	return Local_1324.f_170.f_1;
}

void func_320()
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_249(6)) && !ENTITY::IS_ENTITY_DEAD(func_249(6)))
	{
		func_286(func_249(6), 1, 1);
	}
	if ((((func_541(3, 25f, 255, 0) || func_542(func_249(3), 40f)) && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1324.f_170.f_5)) && !func_316(2, 0)) && func_538(255))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1324.f_170.f_5, "bStopLoop", true, false);
		func_223(2);
		Local_1324.f_170.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

void func_321()
{
	func_543();
	if ((!AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(func_249(3)) && NETWORK::GET_TIME_DIFFERENCE(Local_1324.f_170.f_9, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 4500) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_249(3)))
	{
		Local_1324.f_170.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		AUDIO::PLAY_ANIMAL_VOCALIZATION(func_249(3), "ROAR", false);
	}
	if ((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(func_249(3), -1) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1324.f_170.f_5) > 0.86f) || func_541(3, 14f, 255, 0))
	{
		if (!func_544(func_249(3), 923520851))
		{
			func_545(3);
		}
	}
	if (func_546(func_249(3), 0) || (func_544(func_249(3), 923520851) && !func_316(4, 0)))
	{
		func_223(4);
	}
}

void func_322()
{
	int iVar0;
	int iVar1;

	if (func_316(64, 0))
	{
		return;
	}
	iVar0 = func_249(3);
	if ((!func_316(256, 0) && func_404(3, 40f, 0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		iVar1 = func_547(3, 200f, 1, 0);
		if (func_548(iVar1))
		{
			TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1)), 0, 0);
			PED::SET_PED_KEEP_TASK(iVar0, true);
			func_223(256);
		}
	}
	else if (((!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_544(iVar0, 923520851)) && !func_316(256, 0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		TASK::TASK_WANDER_IN_AREA(iVar0, func_447(3), 15f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		PED::SET_PED_KEEP_TASK(iVar0, true);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if ((!func_316(128, 0) && func_404(3, 11.5f, 0)) && PED::IS_PED_FACING_PED(iVar0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_0xCD66FEA29400A0B5(iVar0)), 35f))
		{
			TASK::TASK_PLAY_ANIM(iVar0, "creatures_mammal@bear@action_standing@transition@action_to_standing", "idle_transition", 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			func_223(128);
		}
		else if (((func_316(128, 0) && !func_316(512, 0)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "creatures_mammal@bear@action_standing@transition@action_to_standing", "idle_transition", 1)) && !AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(iVar0))
		{
			func_223(512);
			TASK::TASK_PLAY_ANIM(iVar0, "CREATURES_MAMMAL@BEAR@ACTION_STANDING@IDLE@IDLE_VARIATION@ROAR", "idle", 16f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "TOUGH", false);
		}
		else if ((!func_316(1024, 0) && func_316(512, 0)) && !AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(iVar0))
		{
			func_223(1024);
		}
	}
	if (func_316(256, 0) && PED::IS_PED_FLEEING(func_249(3)))
	{
		func_223(64);
	}
}

void func_323()
{
	int iVar0;

	func_543();
	if (Local_1324.f_53 != func_249(0) && ENTITY::DOES_ENTITY_EXIST(func_249(0)))
	{
		Local_1324.f_53 = func_249(0);
		Local_1324.f_53.f_2 = 3;
	}
	if ((NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 3000 && !func_316(8, 0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_249(3)))
	{
		iVar0 = func_249(3);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			func_289(3, 0);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, Local_1324.f_15, 4, 0, 99999f, -1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		func_223(8);
	}
}

void func_324()
{
	if (!func_538(255))
	{
		return;
	}
	if (func_541(4, 35f, 255, 0))
	{
		if (Local_1324.f_170.f_10 == 0 && !((func_333(16384, -1, 1) || func_333(32768, -1, 1)) || func_333(8, -1, 1)))
		{
			Local_1324.f_170.f_10 = MAP::_BLIP_ADD_FOR_COORD(-108658760, func_220());
			MAP::_BLIP_SET_MODIFIER(Local_1324.f_170.f_10, joaat("BLIP_MODIFIER_LEGENDARY"));
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1324.f_170.f_10, "LA_CLUE");
		}
	}
}

void func_325()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	struct<22> Var18;

	if (func_549(PLAYER::PLAYER_PED_ID(), func_220(), 1) < 35f && !func_301())
	{
	}
	if ((ENTITY::IS_ENTITY_DEAD(func_249(4)) && ENTITY::IS_ENTITY_DEAD(func_249(5))) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1324.f_170.f_5, false))
	{
		func_296();
	}
	else if (!func_328(8))
	{
		ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Local_1324.f_170.f_5, &vVar0, &vVar6, 2);
		ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Local_1324.f_170.f_6, &vVar3, &vVar9, 2);
		vVar12 = { -2.8f, 0f, 0f };
		vVar15 = { -2.8f, 0f, 0f };
		func_550(&vVar12, vVar6 + Vector(-13f, 0f, 0f));
		func_550(&vVar15, vVar9 + Vector(-13f, 0f, 0f));
		GRAPHICS::_ADD_BLOOD_POOL_2(vVar0 + vVar12, 1f, 2.1f, 20f, false, NaNf, false);
		GRAPHICS::_ADD_BLOOD_POOL_2(vVar3 + vVar15, 1f, 2.1f, 20f, false, NaNf, false);
		Var18.f_7 = 1056964608;
		Var18.f_8 = 1065353216;
		Var18.f_9 = 1043542835;
		Var18.f_10 = 1048576000;
		Var18.f_12 = 1061158912;
		Var18.f_13 = 1048576000;
		Var18.f_14 = 1055286886;
		Var18.f_15 = 1048576000;
		Var18.f_17 = 1065353216;
		Var18.f_18 = 1065353216;
		Var18.f_19 = 1073741824;
		Var18.f_20 = 1065353216;
		Var18.f_21 = 1048576000;
		Var18 = 4;
		Var18.f_14 = -1f;
		Var18.f_21 = 0.5f;
		Var18.f_17 = 0.45f;
		Var18.f_18 = 1.25f;
		Var18.f_1 = { vVar12 };
		Var18.f_4 = { 0.75f, -1f, 1f };
		func_551(&Var18, vVar0, 0f, 16);
		Var18.f_1 = { vVar15 };
		Var18.f_21 = 0.75f;
		Var18.f_17 = 0.4f;
		Var18.f_18 = 1f;
		Var18.f_4 = { 1f, 1.25f, 1f };
		func_551(&Var18, vVar3, 0f, 16);
		func_331(8);
	}
	if (!func_328(2))
	{
		Local_1324.f_170.f_12[0] = func_552("RE_LF_USECHECK", joaat("INPUT_CONTEXT_Y"), func_249(4), 2, 1, 0, 0, 5, 4f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		func_553(Local_1324.f_170.f_12[0], 1, 1, 1);
		Local_1324.f_170.f_12[1] = func_552("RE_LF_USECHECK", joaat("INPUT_CONTEXT_Y"), func_249(5), 2, 1, 0, 0, 5, 4f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		func_553(Local_1324.f_170.f_12[1], 1, 1, 1);
		func_331(2);
	}
	if (func_549(PLAYER::PLAYER_PED_ID(), func_220(), 1) < 15f && func_538(255))
	{
		func_223(131072);
	}
}

void func_326()
{
	func_554();
	if (func_555(&(Local_1324.f_170.f_19)) && !func_333(65536, -1, 1))
	{
		func_223(65536);
	}
	if ((Local_13.f_24.f_8.f_1 != 0 && !func_316(65536, 0)) && !func_253(2))
	{
		func_556(&(Local_13.f_24.f_8), &(Local_1324.f_170.f_19), "player", "player", func_409(func_253(1)), 63, 256, 3000, 7000);
	}
}

void func_327()
{
	if (func_557(Local_1324.f_170.f_12[0]))
	{
		func_558(&(Local_1324.f_170.f_12[0]), 1, 1);
	}
	if (func_557(Local_1324.f_170.f_12[1]))
	{
		func_558(&(Local_1324.f_170.f_12[1]), 1, 1);
	}
	if (MAP::DOES_BLIP_EXIST(Local_1324.f_170.f_10))
	{
		MAP::REMOVE_BLIP(&(Local_1324.f_170.f_10));
	}
	if (Local_1324.f_53 != func_249(0) && ENTITY::DOES_ENTITY_EXIST(func_249(0)))
	{
		Local_1324.f_53 = func_249(0);
		Local_1324.f_53.f_2 = 3;
	}
	if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1324.f_170.f_5, "player") || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1324.f_170.f_6, "player"))
	{
		if (!func_328(256))
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, 5000, 0);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MOTIONSTATE_ACTIONMODE_IDLE"), false, 0, true);
			PED::_0xC2722B252C79E641(PLAYER::PLAYER_PED_ID(), 1, 1, 0);
			func_331(256);
		}
	}
	if (Local_1324.f_53 == func_249(0))
	{
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 1000 && !func_316(8, 0))
	{
		func_223(8);
	}
}

bool func_328(int iParam0)
{
	return func_185(Local_1324.f_170.f_2, iParam0);
}

bool func_329()
{
	return func_559(1, 255);
}

bool func_330()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || _NAMESPACE77::_0xC5C395C60B542A3C(1))
	{
		return true;
	}
	return false;
}

void func_331(int iParam0)
{
	func_238(&(Local_1324.f_170.f_2), iParam0);
}

bool func_332()
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(func_249(0)))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID()));
	return ((iVar0 == func_249(0) || iVar0 == func_249(1)) || iVar0 == func_249(2));
}

bool func_333(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_378(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
		{
			return false;
		}
	}
	return func_185(Local_75[iParam1 /*39*/].f_6, iParam0);
}

void func_334(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	func_442(&(Local_75[iVar0 /*39*/].f_17), 3, iParam0);
}

void func_335(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Local_75[iVar0 /*39*/].f_17.f_5[iParam0]));
}

void func_336(int iParam0)
{
	func_263(&(Local_1324.f_170.f_2), iParam0);
}

void func_337()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (func_455(func_454(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_0xAD8F2424C6E1E3A8(Var1);
			}
		}
		iVar0++;
	}
}

bool func_338()
{
	return func_68(8);
}

bool func_339(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_560(iParam1, 0, 1))
	{
		return false;
	}
	return func_237(Local_75[iParam1 /*39*/].f_4, iParam0);
}

bool func_340(int iParam0)
{
	return func_237(Local_1324.f_160.f_1, iParam0);
}

char* func_341(int iParam0, int iParam1)
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

var func_342(char* sParam0)
{
	if (!func_538(255))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	return func_561(sParam0, 10000, 0, 0, 0, 1);
}

int func_343(var uParam0, var uParam1)
{
	return uParam0;
}

int func_344(int iParam0)
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

int func_345(struct<2> Param0)
{
	return func_562(Param0);
}

void func_346(struct<2> Param0, var uParam2)
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
	switch (func_343(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_564(func_563(Param0));
			iVar5 = func_565(iVar4);
			if (!func_566(iVar5, 0))
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

int func_347(int iParam0, int iParam1)
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

void func_348(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_567(&Var0);
}

var func_349(int iParam0)
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

var func_350(int iParam0)
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

var func_351(int iParam0)
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

int func_352(int iParam0)
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

int func_353(int iParam0)
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

void func_354(var uParam0)
{
	func_192(uParam0, 0);
	func_192(uParam0, 1);
	func_192(uParam0, 3);
	func_190(uParam0);
}

void func_355(var uParam0)
{
	func_191(uParam0);
	func_568(uParam0, 0, 3);
}

void func_356(var uParam0)
{
	func_192(uParam0, 0);
	func_193(uParam0, 0);
	func_193(uParam0, 1);
	func_193(uParam0, 2);
}

void func_357(var uParam0)
{
	func_192(uParam0, 1);
	func_190(uParam0);
}

void func_358(var uParam0)
{
	func_192(uParam0, 2);
	func_193(uParam0, 3);
}

void func_359(var uParam0)
{
	func_192(uParam0, 3);
	func_193(uParam0, 4);
}

void func_360(var uParam0)
{
	func_193(uParam0, 0);
	func_193(uParam0, 1);
}

void func_361(var uParam0)
{
	func_193(uParam0, 2);
	func_193(uParam0, 3);
}

void func_362(var uParam0)
{
	func_193(uParam0, 4);
	func_193(uParam0, 5);
}

bool func_363(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_364(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_365(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_366(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

void func_367(var uParam0)
{
	func_433(uParam0, 0);
	func_431(uParam0, 0);
	func_368(uParam0, 1);
	func_435(uParam0, 1);
	func_434(uParam0, 0);
	func_439(uParam0, 1);
	func_440(uParam0, 1, 1, 1);
}

void func_368(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(&(uParam0->f_2), 256);
	}
	else
	{
		func_238(&(uParam0->f_2), 256);
	}
}

void func_369(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(&(uParam0->f_2), 4);
	}
	else
	{
		func_238(&(uParam0->f_2), 4);
	}
}

void func_370(var uParam0)
{
	func_570(uParam0, (func_569(uParam0) - 6f));
	func_571(uParam0, 1);
}

void func_371(var uParam0)
{
	func_433(uParam0, 0);
	func_431(uParam0, 0);
	func_368(uParam0, 0);
	func_434(uParam0, 0);
	func_440(uParam0, 1, 1, 1);
}

void func_372(var uParam0)
{
	func_572(uParam0, 1);
	func_573(uParam0, 1);
	func_574(uParam0, 1);
}

void func_373(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(&(uParam0->f_2), 131072);
	}
	else
	{
		func_238(&(uParam0->f_2), 131072);
	}
}

void func_374(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(uParam0, 4);
	}
	else
	{
		func_263(uParam0, 4);
	}
}

bool func_375(int iParam0, bool bParam1)
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

bool func_376(int iParam0, var uParam1)
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

int func_377(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

int func_378(int iParam0)
{
	return func_575(iParam0);
}

int func_379(int iParam0)
{
	if (!func_186(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

bool func_380(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_1324.f_15 };
	iVar7 = 0;
	iVar8 = func_422(iParam0);
	iVar9 = func_576(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_34[iParam0]))
		{
			iVar9 = func_576(iParam0);
			fVar0 = func_577(iParam0);
			if (!func_185(Local_1324.f_191.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_578(iParam0)) };
			}
			else
			{
				vVar1 = { func_578(iParam0) };
			}
			if (!func_579(&(Local_13.f_34[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_34[iParam0]);
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
						func_580(iVar7, 1);
					}
					if (func_581(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_582(iParam0))
						{
							if (func_581(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_381(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_34[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_34[iParam0]);
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
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_13.f_34[iParam0])))
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

bool func_381(int iParam0)
{
	return func_175(iParam0, 128);
}

int func_382(int iParam0, int iParam1)
{
	return Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_2;
}

bool func_383(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_384(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_385(int iParam0, int iParam1)
{
	return Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_7;
}

bool func_386(int iParam0, int iParam1)
{
	return Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_13;
}

bool func_387(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_583(*uParam0, 0f, 0f, 0f))
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

bool func_388(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1324.f_302[iParam0 /*20*/].f_3, iParam1);
}

bool func_389(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 1);
}

bool func_390(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_584(iParam1))
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

bool func_391(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_392(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_393(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_394(int iParam0, int iParam1)
{
	return Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_10;
}

bool func_395(int iParam0, int iParam1, int iParam2)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_396(float fParam0)
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

Vector3 func_397(vector3 vParam0)
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

bool func_398(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_399(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_400(int iParam0, int iParam1)
{
	return func_185(Local_1324.f_302[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 512);
}

int func_401(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_585(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (func_315(128))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_586(uParam0, 10);
	}
	if (func_403() && uParam0->f_2 < 8)
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_586(uParam0, 8);
				break;
			case 0:
				func_586(uParam0, 9);
				break;
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_587(1))
			{
				switch (*uParam0)
				{
					case 1:
						func_586(uParam0, 1);
						break;
					case 2:
						func_586(uParam0, 3);
						break;
					case 3:
						func_586(uParam0, 5);
						break;
				}
			}
			break;
		case 5:
			if (func_588(uParam0, uParam1))
			{
				func_586(uParam0, 6);
			}
			break;
		case 6:
			if (func_589())
			{
				func_586(uParam0, 7);
			}
			break;
		case 7:
			break;
		case 1:
			if (PED::IS_PED_USING_ANY_SCENARIO(func_585(uParam1->f_1)))
			{
				func_586(uParam0, 2);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 8:
			if (func_544(iVar0, 780511057))
			{
				func_586(uParam0, 11);
			}
			break;
		case 9:
			if (PED::IS_PED_FLEEING(iVar0))
			{
				func_586(uParam0, 11);
			}
			break;
		case 11:
			if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
			{
				func_590(&(uParam0->f_6));
			}
			if ((func_591(uParam1, 32) && PED::IS_PED_FLEEING(iVar0)) && func_592(&(uParam0->f_6)) > 10f)
			{
				iVar1 = func_593(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if ((func_534(iVar1, iVar0, 15f, 1, 1) || (func_534(iVar1, iVar0, 40f, 1, 1) && PED::IS_PED_SHOOTING(iVar1))) || func_594(64))
					{
						func_595(uParam0, 1);
						func_586(uParam0, 8);
					}
				}
			}
			break;
		case 10:
			break;
	}
	return 0;
}

void func_402(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	struct<21> Var0;

	if (func_240(vParam2))
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
	func_597(&Var0, func_596(0, 8));
}

bool func_403()
{
	return func_594(4);
}

bool func_404(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_538(iVar0))
			{
				if (func_541(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_405(int iParam0, int iParam1)
{
	func_263(&(Local_1324.f_191.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_406(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return func_185(Local_1324.f_170.f_3, iParam0);
	}
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar1 = func_185(Local_1324.f_170.f_4, iParam0);
	if (bVar1 && !func_185(Local_75[iVar0 /*39*/].f_6, iParam0))
	{
		func_238(&(Local_75[iVar0 /*39*/].f_6), iParam0);
		Local_1324.f_170.f_3 = (Local_1324.f_170.f_3 && Local_75[iVar0 /*39*/].f_6);
	}
	return func_185(Local_1324.f_170.f_3, iParam0);
}

void func_407(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	*iParam0 = 0;
	iVar3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (iVar4 == 255)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
		}
		else if (Local_75[iVar0 /*39*/].f_2.f_1 == 0)
		{
		}
		else
		{
			*iParam0 = (*iParam0 + Local_75[iVar0 /*39*/].f_2);
			if (iVar1 == 0 || NETWORK::IS_TIME_MORE_THAN(Local_75[iVar0 /*39*/].f_2.f_1, iVar1))
			{
				iVar1 = Local_75[iVar0 /*39*/].f_2.f_1;
			}
			if (iVar2 == 0 || NETWORK::IS_TIME_LESS_THAN(Local_75[iVar0 /*39*/].f_2.f_1, iVar2))
			{
				iVar2 = Local_75[iVar0 /*39*/].f_2.f_1;
			}
		}
		iVar0++;
	}
	*iParam2 = 0;
	*iParam1 = 0;
	if (iVar1 != 0)
	{
		*iParam2 = ((NETWORK::GET_TIME_DIFFERENCE(iVar1, iVar3) / 1000) / 60);
	}
	if (iVar2 != 0)
	{
		*iParam1 = ((NETWORK::GET_TIME_DIFFERENCE(iVar2, iVar3) / 1000) / 60);
	}
}

void func_408(int iParam0)
{
	Local_13.f_24 = iParam0;
}

char* func_409(bool bParam0)
{
	if (bParam0)
	{
		return "PBL_REACT_A_FWD";
	}
	return "PBL_REACT_B_FWD";
}

int func_410(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	*iParam2 = 0;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		*iParam2 = 1;
		return 1;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(uParam0->f_1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		*iParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		*iParam2 = 1;
		return 1;
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(iVar0, sParam1) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar1, iVar0))
		{
			return 0;
		}
	}
	return 1;
}

int func_411(int iParam0, int iParam1)
{
	if (iParam1 == 4)
	{
		if (func_333(16384, iParam0, 1))
		{
			return 1;
		}
	}
	else if (func_333(32768, iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/]))
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
		else if (Local_75[iVar0 /*39*/].f_7.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_538(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_75[iVar0 /*39*/].f_7.f_2[iParam0] > Local_75[iVar1 /*39*/].f_7.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_75[iVar0 /*39*/].f_7.f_2[iParam0] > fParam2)
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

void func_413(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = NETWORK::_ANIM_SCENE_TO_NET(iParam2);
}

bool func_414(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar0 = { 0f, 0f, func_449(func_598(iParam0 == 4, 0, 1)) };
	vVar3 = { -0.16f, 0.59f, -0.55f };
	vVar6 = { 0.39f, -0.67f, -0.62f };
	func_550(&vVar3, vVar0);
	func_550(&vVar6, vVar0);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_539(Local_13.f_24.f_7), func_447(iParam0) - vVar3, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(func_539(Local_13.f_24.f_7), func_447(iParam0) - vVar6, true))
	{
		return true;
	}
	return false;
}

void func_415(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_263(&(Local_13.f_24.f_1), iParam0);
	}
}

void func_416(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_417(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_418(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_1324.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != Local_1324)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_1324.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_1324.f_3)
	{
		return false;
	}
	return true;
}

void func_419(int iParam0)
{
	switch (iParam0->f_9)
	{
		case -922869466:
			func_599(iParam0);
			break;
		case 2126697993:
			func_600(iParam0);
			break;
		case -1485898032:
			func_601(iParam0);
			break;
	}
}

bool func_420(char* sParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return true;
	}
	return false;
}

void func_421(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

int func_422(int iParam0)
{
	return Local_1324.f_191.f_7[iParam0 /*11*/].f_3;
}

bool func_423(int iParam0)
{
	return func_388(0, iParam0);
}

bool func_424(int iParam0)
{
	return func_389(0, iParam0);
}

int func_425(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
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
					return 0;
				}
			}
			if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
			{
				if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					return 0;
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
			return 0;
		}
		return 1;
	}
	else
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			return 0;
		}
		*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam0);
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_426(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_422(iParam0);
	bVar3 = func_375(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_1324.f_191.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_34[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_34[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_1324.f_191.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_75[iParam1 /*39*/].f_7.f_2[iParam0] = -1f;
				}
				else
				{
					Local_75[iParam1 /*39*/].f_7.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_381(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_34[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_34[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_34[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_602(iVar1, 1f, 0);
					sVar0 = func_603(iParam0);
					if (!MISC::_IS_STRING_SPACE(sVar0))
					{
						func_604(iVar1, sVar0, 1);
					}
				}
				if (func_581(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_582(iParam0))
					{
						if (func_581(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_1324.f_191.f_5), iParam0);
				if (bParam2)
				{
					func_605(iParam0);
				}
			}
		}
	}
}

void func_427(int iParam0)
{
	PED::_SET_PED_QUALITY(iParam0, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
}

void func_428(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 186, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 388, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 39, false);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 163, 3f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 74, 1f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 148, 100f);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 31, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 32, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 33, true);
	PED::SET_PED_COMBAT_RANGE(iParam0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	PED::SET_COMBAT_FLOAT(iParam0, 12, 0.2f);
}

int func_429(bool bParam0, bool bParam1)
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

void func_430(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_535(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar1 = func_606(iVar0);
	if (iVar0 != 2 && iVar0 != 0)
	{
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iParam0, true, 2f);
		TASK::_0x9DE63896B176EA94(iParam0, 0);
	}
	TASK::_0x06ECF3925BC2ABAE(iParam0, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 402, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 542, true);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	func_607(iParam0, iVar1, iParam1);
	func_608(iParam0);
}

void func_431(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(&(uParam0->f_2), 2048);
	}
	else
	{
		func_238(&(uParam0->f_2), 2048);
	}
}

void func_432(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(&(uParam0->f_2), 8);
	}
	else
	{
		func_238(&(uParam0->f_2), 8);
	}
}

void func_433(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(&(uParam0->f_2), 16384);
	}
	else
	{
		func_238(&(uParam0->f_2), 16384);
	}
}

void func_434(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(&(uParam0->f_2), 128);
	}
	else
	{
		func_238(&(uParam0->f_2), 128);
	}
}

void func_435(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(uParam0, 16);
	}
	else
	{
		func_263(uParam0, 67108864);
		func_263(uParam0, 16);
	}
}

void func_436(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_437(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

void func_438(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_1), 2);
	}
	else
	{
		func_263(&(uParam0->f_1), 2);
	}
}

void func_439(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(uParam0, 256);
	}
	else
	{
		func_263(uParam0, 256);
	}
}

void func_440(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_238(uParam0, 268435456);
	}
	else
	{
		func_263(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_238(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_263(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_238(uParam0, 536870912);
	}
	else
	{
		func_263(uParam0, 536870912);
	}
}

void func_441(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

int func_442(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_376(iParam1, &Var0))
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

int func_443(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_376(iParam1, &Var0))
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

int func_444(int iParam0)
{
	return iParam0;
}

void func_445(int iParam0, float fParam1)
{
	Local_1324.f_191.f_7[iParam0 /*11*/].f_9 = fParam1;
}

bool func_446(int iParam0, var uParam1)
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

Vector3 func_447(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(Local_1324.f_191.f_7[iParam0 /*11*/], true, false);
}

float func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_119())
			{
				case 4:
					return -0.95f;
				case 5:
					return -0.9f;
				case 6:
					return -0.825f;
				case 7:
					return -1f;
				default:
					break;
			}
			break;
		case 1:
			switch (func_119())
			{
				case 4:
					return -0.9f;
				case 5:
					return -0.8f;
				case 6:
					return -1.05f;
				case 7:
					return -1f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

float func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_119())
			{
				case 4:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 90f;
				case 7:
					return 25f;
				default:
					break;
			}
			break;
		case 1:
			switch (func_119())
			{
				case 4:
					return 270f;
				case 5:
					return 335f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

char* func_450(int iParam0)
{
	int iVar0;

	iVar0 = func_535(ENTITY::GET_ENTITY_MODEL(iParam0));
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

void func_451(var uParam0, char* sParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	StringCopy(&(uParam0->f_40), sParam1, 64);
	uParam0->f_25 = iParam2;
	uParam0->f_26 = fParam3;
	uParam0->f_28 = fParam4;
	uParam0->f_29 = fParam5;
	uParam0->f_27 = iParam6;
}

void func_452(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9)
{
	uParam0->f_31 = fParam1;
	uParam0->f_32 = fParam2;
	uParam0->f_33 = fParam3;
	uParam0->f_34 = fParam4;
	uParam0->f_35 = fParam5;
	uParam0->f_36 = fParam6;
	uParam0->f_37 = fParam7;
	uParam0->f_38 = fParam8;
	uParam0->f_39 = fParam9;
}

void func_453(var uParam0, int iParam1)
{
	func_265(&(uParam0->f_54), iParam1);
}

int func_454(int iParam0)
{
	return iParam0;
}

bool func_455(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_249(iParam0);
	uParam1->f_2 = func_530(iParam0, 255, 1);
	return ENTITY::DOES_ENTITY_EXIST(*uParam1);
}

void func_456(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_457(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	func_443(&(Local_75[iVar0 /*39*/].f_17), 0, iParam0);
}

struct<2> func_458(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_609(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_610(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_459()
{
	Local_1324.f_191.f_6 = 0;
	Local_1324.f_191.f_2 = 0;
	Local_1324.f_191.f_1 = -1;
}

void func_460()
{
	int iVar0;

	func_218(&(Local_1324.f_323.f_90), 2, 0);
	func_218(&(Local_1324.f_323.f_90), 1, 0);
	func_218(&(Local_1324.f_323.f_90), 4, 0);
	func_218(&(Local_1324.f_323.f_90), 5, 0);
	func_218(&(Local_1324.f_323.f_90), 8, -1);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_1324.f_323.f_66[iVar0]));
		SCRIPTS::_0x20F4CB76689ACDBC(&(Local_1324.f_323.f_82[iVar0]));
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_1324.f_323.f_74[iVar0]));
		func_611(iVar0);
		iVar0++;
	}
}

void func_461(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_1324.f_191.f_2 = (Local_1324.f_191.f_2 || Local_75[iParam0 /*39*/].f_7);
		Local_1324.f_191.f_1 = (Local_1324.f_191.f_1 && Local_75[iParam0 /*39*/].f_7);
		Local_1324.f_191.f_6 = (Local_1324.f_191.f_6 || Local_75[iParam0 /*39*/].f_7.f_1);
	}
}

void func_462(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_612(&(Local_1324.f_323.f_90), &(Local_75[iParam0 /*39*/].f_17), 2);
		func_612(&(Local_1324.f_323.f_90), &(Local_75[iParam0 /*39*/].f_17), 1);
		func_612(&(Local_1324.f_323.f_90), &(Local_75[iParam0 /*39*/].f_17), 4);
		func_612(&(Local_1324.f_323.f_90), &(Local_75[iParam0 /*39*/].f_17), 5);
		func_612(&(Local_1324.f_323.f_90), &(Local_75[iParam0 /*39*/].f_17), 6);
		func_612(&(Local_1324.f_323.f_90), &(Local_75[iParam0 /*39*/].f_17), 7);
		func_612(&(Local_1324.f_323.f_90), &(Local_75[iParam0 /*39*/].f_17), 0);
		func_612(&(Local_1324.f_323.f_90), &(Local_75[iParam0 /*39*/].f_17), 3);
		func_613(&(Local_1324.f_323.f_90), &(Local_75[iParam0 /*39*/].f_17), 8);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_75[iParam0 /*39*/].f_17.f_5[iVar0]), &(Local_1324.f_323.f_66[iVar0]), &(Local_1324.f_323.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_75[iParam0 /*39*/].f_17.f_5[iVar0]), &(Local_1324.f_323.f_66[iVar0]), &(Local_1324.f_323.f_74[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_75[iParam0 /*39*/].f_17.f_5[iVar0]), &(Local_1324.f_323.f_66[iVar0]), &(Local_1324.f_323.f_82[iVar0]));
			func_614(func_454(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_463(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_75[iParam2 /*39*/].f_38 = (Local_75[iParam2 /*39*/].f_38 || Local_75[iParam0 /*39*/].f_38);
	}
}

int func_464(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_75[iParam3 /*39*/].f_7.f_2[iParam2] = fVar0;
	if (fVar0 > Local_1324.f_191.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_465(var uParam0)
{
	func_615(uParam0, 0f);
}

bool func_466(var uParam0)
{
	return func_616(*uParam0, 1);
}

bool func_467(var uParam0, float fParam1)
{
	if (!func_466(uParam0))
	{
		return false;
	}
	if (func_617(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_468(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_469(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (ENTITY::DOES_ENTITY_EXIST(func_249(iVar0)))
	{
		return true;
	}
	if (func_316(8, 0))
	{
		switch (iVar0)
		{
			case 0:
				if (func_253(4))
				{
					return true;
				}
				if (!func_316(1, 0) || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 9500)
				{
					return func_618(iVar0);
				}
				break;
			case 1:
				if (func_253(8))
				{
					return true;
				}
				return (func_118() == 0 && func_618(iVar0));
			case 2:
				if ((func_253(8) || (func_253(4) && func_118() == 1)) && func_619(1, 150f, 0, 0) > 3)
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_470(int iParam0, int iParam1)
{
	if (!func_375(iParam1, 0))
	{
		if (!func_217(&iParam1))
		{
			return false;
		}
	}
	return func_185(Local_75[iParam1 /*39*/].f_7, iParam0);
}

void func_471(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	func_238(&(Local_75[iVar0 /*39*/].f_7), iParam0);
}

void func_472(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	func_263(&(Local_75[iVar0 /*39*/].f_7), iParam0);
}

void func_473()
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
	if (!func_217(&iVar15))
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
	while (iVar0 < 7)
	{
		iVar14 = func_454(iVar0);
		if (!func_474(iVar14))
		{
		}
		else if (!func_475(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_1324.f_323.f_65), iVar14);
			}
			if (func_488(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, 0, 0))
			{
				func_620(iVar14);
				func_621(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_474(int iParam0)
{
	return !func_477(&(Local_1324.f_323.f_90), 5, iParam0);
}

bool func_475(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_1324.f_323.f_186, iParam0))
	{
		return false;
	}
	*uParam1 = Local_1324.f_323.f_94[iParam0 /*13*/];
	uParam1->f_1 = Local_1324.f_323.f_94[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_1324.f_323.f_94[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_476(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_622(iParam1))
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
	if (func_623(*uParam0, &(Local_1324.f_323.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_477(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_376(iParam1, &Var0))
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

void func_478(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_624(iParam0);
	iVar1 = func_249(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		iVar2 = func_249(iVar0);
		if (!PED::IS_PED_DEAD_OR_DYING(iVar2, true) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_0xCD66FEA29400A0B5(iVar2));
			if ((!func_544(iVar2, 1435919172) || (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_DEAD(iVar3))) || (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::_IS_PED_HOGTIED(iVar3)))
			{
				TASK::CLEAR_PED_TASKS(iVar2, true, false);
				func_334(iVar0);
				func_625(iVar0);
			}
			else if (func_544(iVar1, 923520851))
			{
				iVar4 = func_547(iVar0, func_626(), 1, 0);
				if (func_548(iVar4) && !PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4)))
				{
					func_334(iVar0);
					func_625(iVar0);
				}
			}
			else if (PED::IS_PED_FLEEING(iVar2) && !PED::GET_PED_CONFIG_FLAG(iVar2, 580, false))
			{
				iVar5 = func_627(iVar0, func_626());
				if ((func_548(iVar5) && !PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5))) && !func_628(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5)), -1))
				{
					TASK::TASK_COMBAT_PED(iVar2, PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5)), 0, 0);
					func_334(iVar0);
					func_625(iVar0);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar3) && func_628(iVar3, -1))
			{
				TASK::_TASK_FLEE_FROM_PED(iVar2, iVar3, 0f, 0f, 0f, 999999f, 99999, 0, 1077936128 /* Float: 3f */, 0);
			}
		}
		if (PED::GET_PED_CONFIG_FLAG(iVar2, 580, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				TASK::CLEAR_PED_TASKS(iVar2, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
			}
			func_334(iVar0);
			func_625(iVar0);
			func_289(iVar0, 0);
		}
		else if (func_253(16))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
				func_289(iVar0, 0);
				if (!func_546(iVar2, 0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar2, func_220(), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			func_334(iVar0);
			func_625(iVar0);
		}
	}
}

bool func_479(int iParam0)
{
	return func_477(&(Local_1324.f_323.f_90), 4, iParam0);
}

bool func_480(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return false;
	}
	return func_477(&(Local_75[iVar0 /*39*/].f_17), 4, iParam0);
}

bool func_481(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_1324.f_323.f_74[iParam0]));
}

void func_482(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	func_442(&(Local_75[iVar0 /*39*/].f_17), 4, iParam0);
}

bool func_483(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_75[iVar0 /*39*/].f_17.f_5[iParam0]));
}

bool func_484(int iParam0)
{
	return func_477(&(Local_1324.f_323.f_90), 6, iParam0);
}

bool func_485(int iParam0)
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

bool func_486(int iParam0, int iParam1)
{
	if (!func_375(iParam1, 0))
	{
		if (!func_217(&iParam1))
		{
			return false;
		}
	}
	return func_477(&(Local_75[iParam1 /*39*/].f_17), 1, iParam0);
}

bool func_487(int iParam0)
{
	int iVar0;

	iVar0 = func_624(iParam0);
	if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) && (Local_13.f_24.f_4 != 0 && !ENTITY::IS_ENTITY_DEAD(func_249(iVar0))))
	{
		return true;
	}
	if (iVar0 == 3 && func_316(1024, 0))
	{
		return true;
	}
	return false;
}

bool func_488(int iParam0, int iParam1)
{
	if (!func_375(iParam1, 0))
	{
		if (!func_217(&iParam1))
		{
			return false;
		}
	}
	if (!func_548(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_477(&(Local_75[iParam1 /*39*/].f_17), 3, iParam0);
}

bool func_489(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_629(uParam2, 1, iVar0);
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
			if (func_630(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_631(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_632(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_633(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_634(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_20 && func_635(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_631(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_636(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_637(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_631(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_638(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_631(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258.f_23) < 300)
			{
				if (func_639(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_639(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_631(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_640(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258.f_19 || uParam2->f_13 < 20f)
			{
				if (func_641(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_642(uParam2, 4000))
				{
					if ((func_643(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_644(uParam2, iParam0)) && func_645(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_631(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_643(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_644(uParam2, iParam0)) && func_645(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258.f_34 == 0)
			{
				if (Global_1940258.f_35 != 0)
				{
					if (func_646(iParam0, Global_1940258.f_35))
					{
						func_647();
						*iParam3 = 2;
						func_631(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_648(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_649() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_647();
						*iParam3 = 2;
						func_631(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_650())
				{
					if (func_646(iParam0, Global_1940258.f_36))
					{
						func_647();
						*iParam3 = 2;
						func_631(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_651(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_631(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_652(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_631(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_653(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_654(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_631(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_655(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_656(uParam2, 4000))
				{
					if (func_657(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_631(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_658(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_631(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_659(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_631(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_490(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_660(iParam0, vVar0, iParam2);
}

bool func_491(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_661(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_662(&iVar4, iParam1->f_12);
	func_664(Local_1324.f_191.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_663(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_665(&iVar4, &uVar0);
}

bool func_492(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return false;
	}
	return func_477(&(Local_75[iVar0 /*39*/].f_17), 0, iParam0);
}

bool func_493(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_1324.f_323.f_64, iParam0))
	{
		return false;
	}
	if (func_185(Local_1324.f_323.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_666(&(Local_1324.f_323))))
	{
		return false;
	}
	return true;
}

bool func_494(int iParam0, int iParam1, int iParam2)
{
	if (!func_493(iParam0, iParam1))
	{
		return false;
	}
	if (Local_75[iParam2 /*39*/].f_17.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_75[iParam2 /*39*/].f_17.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_495(int iParam0, int iParam1, int iParam2)
{
	if (func_624(iParam0) == 0)
	{
		func_667(21, Local_1324.f_4);
		func_223(16);
		return true;
	}
	else if (func_624(iParam0) == 1)
	{
		func_667(21, Local_1324.f_4);
		func_223(2048);
		return true;
	}
	else if (func_624(iParam0) == 2)
	{
		func_667(21, Local_1324.f_4);
		func_223(4096);
		return true;
	}
	else if (func_624(iParam0) == 3)
	{
		func_667(21, Local_1324.f_4);
		func_223(64);
		return true;
	}
	return true;
}

void func_496(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	func_443(&(Local_75[iVar0 /*39*/].f_17), 1, iParam0);
	if (bParam1)
	{
		Local_75[iVar0 /*39*/].f_17.f_13[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_497(int iParam0)
{
	return func_477(&(Local_1324.f_323.f_90), 1, iParam0);
}

bool func_498(int iParam0, int iParam1)
{
	if (!func_375(iParam1, 0))
	{
		if (!func_217(&iParam1))
		{
			return false;
		}
	}
	return func_477(&(Local_75[iParam1 /*39*/].f_17), 2, iParam0);
}

bool func_499(int iParam0)
{
	int iVar0;

	iVar0 = func_624(iParam0);
	return true;
}

void func_500(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_249(iParam0);
	iVar1 = func_624(iParam0);
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
			break;
	}
}

void func_501(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	func_443(&(Local_75[iVar0 /*39*/].f_17), 2, iParam0);
}

bool func_502(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_1324.f_323.f_82[iParam0]), &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

bool func_503(int iParam0, var uParam1, int iParam2, int iParam3)
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
	*iParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam3))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam3))
	{
		return false;
	}
	return true;
}

bool func_504(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Local_1324.f_323.f_66[iParam0]), iParam1);
}

bool func_505(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_249(iParam0);
	iVar1 = iParam0;
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	if (iVar1 == 3)
	{
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, Local_1324.f_15, 4, 0, 99999f, -1, 0);
		return true;
	}
	if ((iVar1 == 0 || iVar1 == 1) || iVar1 == 2)
	{
		if (func_119() == 0 && !func_328(512))
		{
			if (func_668(func_249(0), Local_1324.f_170.f_20))
			{
				func_331(512);
			}
		}
		if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam2) && func_488(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam2))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_0xCD66FEA29400A0B5(iVar0)) != iParam3)
		{
			TASK::TASK_COMBAT_PED(iVar0, iParam3, 16777216, 0);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else if (!func_546(iVar0, 0))
		{
			iVar2 = func_669(iVar1, func_626());
			if (func_548(iVar2) && !PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)))
			{
				TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), 0, 0);
				PED::SET_PED_KEEP_TASK(iVar0, true);
			}
			else
			{
				TASK::TASK_WANDER_IN_AREA(iVar0, func_220(), 40f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
				PED::SET_PED_KEEP_TASK(iVar0, true);
			}
		}
	}
	return true;
}

void func_506(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_217(&iVar0))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&(Local_75[iVar0 /*39*/].f_17.f_5[iParam0]), iParam1);
}

float func_507()
{
	int iVar0;
	float fVar1;

	if (Local_1324.f_522.f_3 == 0)
	{
		Local_1324.f_522.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_1324.f_522.f_3)) * 0.001f);
	Local_1324.f_522.f_3 = iVar0;
	return fVar1;
}

bool func_508(int iParam0, bool bParam1)
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

bool func_509(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_670(vVar0, vParam0) > func_670(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_510(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
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
			else if (func_671(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_672(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_673() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_511(var uParam0, int iParam1, float fParam2)
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
	func_179(uParam0);
	return true;
}

void func_512()
{
	int iVar0;

	Local_1324.f_160.f_1 = 0;
	Local_1324.f_160.f_2 = -1;
	Local_1324.f_25.f_22 = 0;
	Local_1324.f_25.f_23 = -1;
	Local_1324.f_53.f_61 = 0;
	Local_1324.f_53.f_60 = -1;
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1324.f_160.f_1 = (Local_1324.f_160.f_1 || Local_75[iVar0 /*39*/].f_4);
			Local_1324.f_160.f_2 = (Local_1324.f_160.f_2 && Local_75[iVar0 /*39*/].f_4);
			Local_1324.f_25.f_22 = (Local_1324.f_25.f_22 || Local_75[iVar0 /*39*/].f_5);
			Local_1324.f_25.f_23 = (Local_1324.f_25.f_23 && Local_75[iVar0 /*39*/].f_5);
			Local_1324.f_53.f_61 = (Local_1324.f_53.f_61 || Local_75[iVar0 /*39*/].f_1);
			Local_1324.f_53.f_60 = (Local_1324.f_53.f_60 && Local_75[iVar0 /*39*/].f_1);
		}
		iVar0++;
	}
}

void func_513()
{
	int iVar0;

	Local_1324.f_160.f_4++;
	if (Local_1324.f_160.f_4 >= 7)
	{
		Local_1324.f_160.f_4 = 0;
	}
	iVar0 = func_585(Local_1324.f_160.f_4);
	if (MISC::IS_BIT_SET(Local_1324.f_160.f_3, Local_1324.f_160.f_4))
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
	if (func_674(iVar0))
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
		func_675(Local_1324.f_160.f_4);
	}
}

void func_514()
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
			func_676(&uVar5, &(Local_1324.f_167));
		}
		iVar0++;
	}
}

void func_515(var uParam0)
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
	else if (iVar0 > 15000 && func_237(uParam0->f_2, 4))
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		return;
	}
	else if (!func_237(uParam0->f_2, 4))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		fVar1 = func_677(Global_34, *uParam0, 1, 1);
		bVar2 = ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::_IS_ENTITY_FROZEN(*uParam0)) && !ENTITY::IS_ENTITY_VISIBLE(*uParam0));
		if (fVar1 < 300f && (func_237(uParam0->f_2, 1) || func_237(uParam0->f_2, 2)))
		{
			if (!func_678())
			{
				if (!bVar2)
				{
					func_679(*uParam0);
				}
			}
		}
		if (!bVar2 && fVar1 < 300f)
		{
			func_680(*uParam0);
		}
		if (func_237(uParam0->f_2, 1))
		{
			func_681(2, *uParam0);
		}
		if (func_237(uParam0->f_2, 1) && ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			Var3 = { func_610(joaat("USED"), -1530824760) };
			if (STATS::_0x5420D398A42917FC(*uParam0, &Var3))
			{
				func_682(Var3, 1);
			}
		}
		func_265(&(uParam0->f_2), 4);
	}
}

void func_516(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_585(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0);
	if (!func_683() && func_684(uParam1->f_1, 40f, 60f, 100f, 1065353216 /* Float: 1f */, 5, 0, 1))
	{
		func_685();
	}
	if (!func_403())
	{
		if (func_686(iVar0, &(Local_1324.f_115)) || func_687(iVar0, &(Local_1324.f_115), 0))
		{
			func_688();
			func_689(uParam0, uParam1, 0, 0);
		}
	}
	if ((func_690(4, -1) && !func_594(8)) && !func_691(uParam0, iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_689(uParam0, uParam1, 0, 0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
		}
	}
	if (!func_591(uParam1, 8) && func_403())
	{
		iVar1 = 0;
		while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && func_690(4, -1))
			{
				uParam1->f_20 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			}
			else
			{
				iVar1++;
			}
		}
		if (uParam0->f_2 == 7 && !func_591(uParam1, 2))
		{
			func_692(uParam1->f_16);
			func_234(uParam1, 2);
		}
		func_689(uParam0, uParam1, 0, 0);
		func_693(uParam0, uParam1);
		func_694(&(Local_1324.f_53));
		func_695(&(Local_1324.f_53));
		func_234(uParam1, 8);
	}
	func_696(uParam0, uParam1, uParam2);
	if (func_591(uParam1, 8))
	{
		func_697(uParam0, uParam1);
	}
	else
	{
		func_698(uParam1);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!func_690(1, -1))
			{
				iVar1 = 0;
				while (iVar1 <= 6)
				{
					iVar2 = Local_1324.f_191.f_7[iVar1 /*11*/];
					if (iVar1 != uParam1->f_1 && ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						func_699(iVar1);
					}
					iVar1++;
				}
				func_700(1);
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
			if (!func_591(uParam1, 4))
			{
				if (func_701(uParam1->f_16) || ANIMSCENE::_0xB89FCFF19DAFFF28(uParam1->f_16, &(uParam1->f_14)))
				{
					func_702(uParam1->f_16);
					func_234(uParam1, 4);
				}
			}
			else
			{
				func_703();
			}
			break;
		case 1:
			if (bVar3 && !PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				if (func_591(uParam1, 1))
				{
					iVar4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), uParam1->f_3, 2f, 1, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar4))
					{
						TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar4, 0, 0, false, true, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, uParam1->f_3, Local_1324.f_191.f_7[uParam1->f_1 /*11*/].f_6, Local_1324.f_191.f_7[uParam1->f_1 /*11*/].f_5, 0, false, true, 0, -1f, false);
					}
				}
				else
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, uParam1->f_3, Local_1324.f_191.f_7[uParam1->f_1 /*11*/].f_6, Local_1324.f_191.f_7[uParam1->f_1 /*11*/].f_5, 0, false, true, 0, -1f, false);
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (bVar3 && !func_704(iVar0, 923520851))
			{
				TASK::TASK_WANDER_IN_AREA(iVar0, Local_1324.f_191.f_7[uParam1->f_1 /*11*/].f_6, uParam1->f_26, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
			break;
		case 4:
			break;
		case 8:
			func_689(uParam0, uParam1, 0, 0);
			break;
		case 9:
			func_689(uParam0, uParam1, 0, 0);
			break;
		case 11:
			if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !func_690(64, -1))
			{
				if (func_534(Global_34, iVar0, 15f, 1, 1) || (func_534(Global_34, iVar0, 40f, 1, 1) && PED::IS_PED_SHOOTING(Global_34)))
				{
					func_700(64);
				}
			}
			else if (func_690(64, -1))
			{
				if (!func_534(Global_34, iVar0, 40f, 1, 1) || PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
				{
					func_705(64);
				}
			}
			if (((bVar3 && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && (MISC::GET_FRAME_COUNT() % 10) == 0)
			{
				iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_0xCD66FEA29400A0B5(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && PED::IS_PED_A_PLAYER(iVar5))
				{
					iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
					iVar7 = iVar6;
					if (func_560(iVar7, 1, 1))
					{
						if (func_706(4, iVar7))
						{
							func_689(uParam0, uParam1, 1, 1);
						}
					}
				}
			}
			if (!func_594(16))
			{
				if (bVar3)
				{
					PED::SET_PED_KEEP_TASK(iVar0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_700(16);
				}
			}
			else if ((((Local_13.f_7.f_1 == 0 && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, false)) && !PED::IS_PED_FLEEING(iVar0)) && TASK::IS_PED_STILL(iVar0))
			{
				func_689(uParam0, uParam1, 1, 1);
			}
			if ((!func_594(32) && bVar3) && PED::IS_PED_IN_COMBAT(iVar0, 0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(uParam1->f_20)) || !func_534(PLAYER::GET_PLAYER_PED(uParam1->f_20), iVar0, 100f, 1, 1))
				{
					TASK::TASK_ANIMAL_UNALERTED(iVar0, -1, 0, 0, 0);
					PED::SET_PED_KEEP_TASK(iVar0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_700(32);
				}
			}
			break;
		case 10:
			break;
	}
}

void func_517()
{
	int iVar0;

	if (func_707(256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1324.f_53))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_1324.f_53))
	{
		return;
	}
	if (!func_534(Global_34, Local_1324.f_53, 50f, 1, 1))
	{
		func_468(&(Local_1324.f_115.f_42));
		func_708(4);
		func_708(8);
		func_708(16);
		func_708(32);
		func_708(64);
		return;
	}
	if ((PED::_IS_PED_HOGTIED(Global_34) || PED::_GET_LASSOER_OF_PED(Global_34)) || PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_531(Local_1324.f_53, Global_34, &(Local_1324.f_115.f_39), &(Local_1324.f_115.f_38));
	}
	if (!func_706(4, -1))
	{
		if (iVar0 == 1)
		{
			func_709(&(Local_1324.f_115.f_42), 0);
			func_710(4);
		}
	}
	else if (iVar0 == 0)
	{
		func_468(&(Local_1324.f_115.f_42));
		func_708(4);
		func_708(8);
		func_708(16);
		func_708(32);
		func_708(64);
		func_708(128);
	}
	else
	{
		if (!func_706(128, -1) && func_687(Local_1324.f_53, &(Local_1324.f_115), 0))
		{
			func_710(128);
		}
		if (func_617(&(Local_1324.f_115.f_42)) > 15f)
		{
			if (!func_706(64, -1))
			{
				func_710(64);
			}
		}
		else if (func_617(&(Local_1324.f_115.f_42)) > 10f)
		{
			if (!func_706(32, -1))
			{
				func_710(32);
			}
		}
		else if (func_617(&(Local_1324.f_115.f_42)) > 8f)
		{
			if (!func_706(16, -1))
			{
				func_710(16);
			}
		}
		else if (func_617(&(Local_1324.f_115.f_42)) > 5f)
		{
			if (!func_706(8, -1))
			{
				func_710(8);
			}
		}
	}
}

bool func_518(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	if (!func_538(255))
	{
		return false;
	}
	if (!func_533(&(Local_1324.f_53), 256) && func_534(Global_34, *uParam0, Global_1901947.f_852.f_3, 1, 0))
	{
		func_711();
	}
	else if (func_533(&(Local_1324.f_53), 256) && !func_534(Global_34, *uParam0, (Global_1901947.f_852.f_3 + 50f), 1, 0))
	{
		func_712();
	}
	if ((uParam0->f_53 < 2 && func_713()) || Local_13.f_18.f_1)
	{
		uParam0->f_53 = 2;
	}
	switch (uParam0->f_53)
	{
		case 0:
			if (!func_714(uParam0))
			{
				return false;
			}
			if (func_715(Global_34, uParam0->f_48, uParam0->f_28, 1, 1))
			{
				if ((MISC::GET_FRAME_COUNT() % 5) == 0)
				{
					CLOCK::GET_POSIX_TIME(&uVar0, &uVar0, &uVar0, &uVar0, &uVar0, &iVar1);
					iVar2 = (iVar1 % BUILTIN::ROUND(uParam0->f_26));
					if (iVar2 < 5)
					{
						func_716(uParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (!func_715(Global_34, uParam0->f_48, (uParam0->f_28 + 20f), 1, 1))
			{
				func_468(&(uParam0->f_55));
				func_716(uParam0, 0);
			}
			else if (func_715(Global_34, uParam0->f_48, (uParam0->f_30 + 10f), 1, 1) || func_533(uParam0, 1))
			{
				func_468(&(uParam0->f_55));
				func_716(uParam0, 2);
			}
			else if (uParam0->f_25 == -1 || uParam0->f_52 < uParam0->f_25)
			{
				if (!func_466(&(uParam0->f_55)) || func_617(&(uParam0->f_55)) > uParam0->f_26)
				{
					if (func_715(Global_34, uParam0->f_48, (uParam0->f_30 + 20f), 1, 1))
					{
						uParam0->f_29 = (uParam0->f_29 / 4f);
					}
					if (func_533(uParam0, 8))
					{
						vVar3 = { func_717(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_29, 0f) };
						func_718(vVar3, uParam0->f_27);
					}
					else
					{
						vVar3 = { func_717(uParam0->f_48, uParam0->f_29, 0f) };
						func_718(vVar3, uParam0->f_27);
					}
					func_465(&(uParam0->f_55));
					func_719();
					func_720(uParam0, uParam0->f_48);
					uParam0->f_52++;
					if (uParam0->f_52 == 1)
					{
						iVar6 = func_721(21, 34);
						if (iVar6 <= 3)
						{
							func_342("LA_H_BLIPPED");
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

int func_519(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (!func_538(255))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if ((!func_706(2, -1) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && PED::IS_PED_FLEEING(*uParam0))
		{
			func_710(2);
		}
		if (func_722(&(Local_13.f_20)))
		{
			bVar2 = true;
		}
		else if (func_707(2))
		{
			bVar2 = true;
		}
		func_723(*uParam0, &(Local_13.f_20), bVar2);
	}
	if ((uParam0->f_2 < 12 && ENTITY::DOES_ENTITY_EXIST(*uParam0)) && ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1));
		}
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
		func_724(uParam0, 12);
	}
	if ((uParam0->f_2 < 11 && PED::GET_PED_CONFIG_FLAG(*uParam0, 580, true)) && TASK::IS_PED_IN_WRITHE(*uParam0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1));
		}
		func_724(uParam0, 11);
	}
	if (func_533(uParam0, 64) && MAP::DOES_BLIP_EXIST(uParam0->f_51))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51));
	}
	if (uParam0->f_2 <= 3 && func_713())
	{
		uParam0->f_2 = 3;
		func_695(uParam0);
	}
	if (func_725(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (func_534(Global_34, *uParam0, uParam0->f_30, 0, 1) && uParam0->f_2 >= 4)
			{
				if (!func_726())
				{
					func_727();
				}
				if (!func_338())
				{
					func_728();
				}
			}
		}
	}
	if (((uParam0->f_2 < 3 && Local_13.f_18.f_1) && ENTITY::DOES_ENTITY_EXIST(*uParam0)) && !func_729(*uParam0))
	{
		func_724(uParam0, 3);
		func_694(uParam0);
		func_695(uParam0);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_533(uParam0, 4))
			{
				func_724(uParam0, 2);
			}
			if (func_730(uParam0) || func_533(uParam0, 1))
			{
				func_724(uParam0, 1);
			}
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_51))
			{
				uParam0->f_51 = MAP::_BLIP_ADD_FOR_COORD(func_731(), uParam0->f_48);
				MAP::_BLIP_SET_MODIFIER(uParam0->f_51, joaat("BLIP_MODIFIER_LEGENDARY"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_51, "LA_CLUE");
				func_727();
				func_724(uParam0, 2);
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				iVar0 = func_585(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && MISC::IS_BIT_SET(uParam0->f_59, iVar1)) && func_684(iVar1, uParam0->f_31, uParam0->f_32, uParam0->f_33, 1065353216 /* Float: 1f */, 5, 0, 1))
				{
					func_694(uParam0);
				}
				else
				{
					iVar1++;
				}
			}
			iVar0 = *uParam0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_684(uParam0->f_58, uParam0->f_31, uParam0->f_32, uParam0->f_33, 1065353216 /* Float: 1f */, 5, 0, 1))
			{
				func_694(uParam0);
			}
			if (func_533(uParam0, 1))
			{
				func_724(uParam0, 3);
			}
			break;
		case 3:
			iVar0 = *uParam0;
			if (MAP::DOES_BLIP_EXIST(uParam0->f_51))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_51));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_684(uParam0->f_58, uParam0->f_31, uParam0->f_32, uParam0->f_33, 1065353216 /* Float: 1f */, 5, 0, 1))
			{
				func_695(uParam0);
			}
			if (func_725(uParam0))
			{
				if (TASK::_0x6DAC799857EF3F11(Global_34, *uParam0) || TASK::_0x920684BE432875B1(*uParam0))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_732(*uParam0, &(uParam0->f_1), 0, bVar3);
				func_733(&(uParam0->f_55), -5f, 1);
				func_724(uParam0, 4);
			}
			break;
		case 4:
			if (!PED::IS_PED_FLEEING(*uParam0))
			{
				if (!func_466(&(uParam0->f_55)))
				{
					func_709(&(uParam0->f_55), 0);
				}
				else if (func_617(&(uParam0->f_55)) > 5f && !func_534(*uParam0, Global_34, uParam0->f_35, 1, 1))
				{
					func_468(&(uParam0->f_55));
					func_724(uParam0, 5);
				}
			}
			else if (!func_466(&(uParam0->f_55)))
			{
				func_709(&(uParam0->f_55), 0);
			}
			else if (func_617(&(uParam0->f_55)) > 5f && !func_684(uParam0->f_58, uParam0->f_34, (uParam0->f_32 + 10f), (uParam0->f_33 + 10f), 1f, 0, 0, 1))
			{
				func_468(&(uParam0->f_55));
				func_724(uParam0, 5);
			}
			break;
		case 5:
			if (!func_466(&(uParam0->f_55)))
			{
				func_709(&(uParam0->f_55), 0);
			}
			else if (func_617(&(uParam0->f_55)) > uParam0->f_37)
			{
				func_468(&(uParam0->f_55));
				func_734(&(uParam0->f_1));
				func_724(uParam0, 7);
			}
			break;
		case 7:
			if (!func_466(&(uParam0->f_55)))
			{
				func_709(&(uParam0->f_55), 0);
			}
			else if (func_617(&(uParam0->f_55)) > 1f && func_684(uParam0->f_58, uParam0->f_34, uParam0->f_32, uParam0->f_33, 0f, 1, 0, 0))
			{
				func_735(&(uParam0->f_1));
				func_468(&(uParam0->f_55));
				func_724(uParam0, 4);
			}
			else if (func_617(&(uParam0->f_55)) > (uParam0->f_38 + ((BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)) / 25f) * uParam0->f_39)) || ((func_466(&(Local_1324.f_19.f_3)) && func_617(&(Local_1324.f_19.f_3)) < Global_1901947.f_852.f_4) && func_617(&(uParam0->f_55)) > 2f))
			{
				func_736(&(uParam0->f_1));
				if (func_533(uParam0, 32))
				{
					func_737(*uParam0, uParam0->f_27);
				}
				func_468(&(uParam0->f_55));
				func_724(uParam0, 5);
			}
			else if (!func_534(Global_34, *uParam0, uParam0->f_36, 1, 1) && (!func_466(&(Local_1324.f_19.f_3)) || func_617(&(Local_1324.f_19.f_3)) > Global_1901947.f_852.f_4))
			{
				func_468(&(uParam0->f_55));
				func_724(uParam0, 8);
			}
			break;
		case 8:
			if (!func_466(&(uParam0->f_55)))
			{
				func_709(&(uParam0->f_55), 0);
			}
			if (func_534(Global_34, *uParam0, (uParam0->f_36 - 10f), 1, 1) || (func_466(&(Local_1324.f_19.f_3)) && func_617(&(Local_1324.f_19.f_3)) < Global_1901947.f_852.f_4))
			{
				func_468(&(uParam0->f_55));
				func_724(uParam0, 7);
			}
			break;
		case 9:
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				func_732(*uParam0, &(uParam0->f_1), 0, 1);
			}
			if (!func_534(Global_34, *uParam0, (50f + 10f), 1, 1))
			{
				func_724(uParam0, 10);
			}
			break;
		case 10:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_1));
			}
			if (func_534(Global_34, *uParam0, 50f, 1, 1))
			{
				func_724(uParam0, 9);
			}
			break;
		case 11:
			if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 580, true) && !TASK::IS_PED_IN_WRITHE(*uParam0))
			{
				if (TASK::_0x6DAC799857EF3F11(Global_34, *uParam0))
				{
					if (func_534(Global_34, *uParam0, 50f, 1, 1))
					{
						func_724(uParam0, 9);
					}
					else
					{
						func_724(uParam0, 10);
					}
				}
				else
				{
					func_724(uParam0, 3);
				}
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_520(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if ((Local_13.f_18 == 255 && !func_315(2)) || (Local_13.f_18 != 255 && Local_13.f_18 != PLAYER::PLAYER_ID()))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0) && ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_34)
		{
			func_738();
			func_739(2);
		}
	}
}

void func_521(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_315(1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0) && PED::GET_PED_CONFIG_FLAG(iParam0, 580, true)) && ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_34)
		{
			func_740();
			func_739(1);
			func_741(2);
		}
	}
}

void func_522(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_315(16))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_742(Global_34)) == iParam0)
		{
			func_743();
			func_739(16);
		}
	}
}

void func_523(int iParam0, float fParam1)
{
	float fVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_13.f_18.f_1 && func_340(32))
		{
			Local_13.f_18.f_1 = 1;
		}
	}
	if (((!func_315(4) && (MISC::GET_FRAME_COUNT() % 10) == 0) && ENTITY::DOES_ENTITY_EXIST(Local_1324.f_53)) && TASK::_0x920684BE432875B1(Local_1324.f_53))
	{
		func_739(4);
	}
	if (!Local_13.f_18.f_1 && !func_339(32, -1))
	{
		if (func_497(Local_1324.f_53.f_58))
		{
			func_741(32);
		}
		if (Local_1324.f_115.f_33 != 0)
		{
			func_741(32);
		}
	}
	if (!func_315(128))
	{
		if (((((func_315(8) || func_315(16)) || func_315(4)) || func_340(8)) || (func_340(2) && ENTITY::IS_ENTITY_DEAD(iParam0))) || (ENTITY::IS_ENTITY_DEAD(iParam0) && !PED::_0xA4B6432E3880F2F9(iParam0)))
		{
			func_739(128);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if ((!func_339(4, -1) && func_315(128)) && func_675(Local_1324.f_53.f_58))
		{
			func_741(4);
		}
		if (!func_339(8, -1) && func_744(1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				func_741(16);
			}
			if (func_745(Local_1324.f_53.f_58))
			{
				func_741(8);
			}
		}
	}
	if (!func_339(1, -1))
	{
		if (((func_301() && !func_534(Global_34, iParam0, fParam1, 1, 1)) && Local_1324.f_19.f_2 != 2) && (!func_466(&(Local_1324.f_19.f_3)) || func_617(&(Local_1324.f_19.f_3)) > Global_1901947.f_852.f_4))
		{
			func_741(1);
		}
	}
	else
	{
		if (func_466(&(Local_1324.f_19.f_3)) && func_617(&(Local_1324.f_19.f_3)) < 20f)
		{
			fVar0 = 5f;
		}
		else
		{
			fVar0 = 30f;
		}
		if (func_534(Global_34, iParam0, (fParam1 - fVar0), 1, 1))
		{
			func_746(1);
		}
	}
}

bool func_524()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_525(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_747(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

void func_526(int iParam0, int iParam1)
{
	if (iParam0 <= 3)
	{
		func_290(200f);
	}
}

void func_527(var uParam0)
{
	Local_1324.f_170.f_1 = uParam0;
}

void func_528(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Local_1324.f_19 == 0)
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
	switch (Local_1324.f_19.f_2)
	{
		case 0:
			if (Local_75[iVar1 /*39*/].f_2.f_1 != 0)
			{
				Local_1324.f_19.f_1 = PLAYER::PLAYER_PED_ID();
				if (func_748())
				{
					Local_1324.f_19.f_2 = 2;
				}
				else
				{
					Local_1324.f_19.f_2 = 1;
				}
			}
			break;
		case 1:
			if (func_748())
			{
				if (func_749(iParam0))
				{
					Local_75[iVar1 /*39*/].f_2++;
				}
				Local_1324.f_19.f_2 = 2;
			}
			break;
		case 2:
			if (!func_748())
			{
				Local_1324.f_19.f_2 = 1;
				Local_1324.f_19.f_1 = PLAYER::PLAYER_PED_ID();
				func_465(&(Local_1324.f_19.f_3));
			}
			break;
	}
}

void func_529()
{
	if (func_328(16))
	{
		return;
	}
	if (!func_750())
	{
	}
	else
	{
		func_331(16);
	}
}

float func_530(int iParam0, int iParam1, bool bParam2)
{
	if (!func_375(iParam1, 0))
	{
		if (!func_217(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_75[iParam1 /*39*/].f_7.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_75[iParam1 /*39*/].f_7.f_2[iParam0];
}

int func_531(int iParam0, int iParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;

	if (!func_534(iParam0, iParam1, 50f, 1, 1))
	{
		return 2;
	}
	if (!func_466(uParam2))
	{
		func_465(uParam2);
		*uParam3 = 0;
		return 2;
	}
	else if (func_617(uParam2) > 4f)
	{
		if (*uParam3 == 0)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			*uParam3 = PATHFIND::_0x348F211CA2404039(iParam0, vVar0, vVar3, 29);
			if (*uParam3 == -1)
			{
				func_465(uParam2);
				*uParam3 = 0;
				return 2;
			}
		}
		if (PATHFIND::_0x3A0F82F6EE2291C8(*uParam3) == 1)
		{
			func_465(uParam2);
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

void func_532(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID();
	if (func_378(iVar0))
	{
		func_263(&(Local_75[iVar0 /*39*/].f_6), iParam0);
	}
}

bool func_533(var uParam0, int iParam1)
{
	return func_237(uParam0->f_54, iParam1);
}

bool func_534(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_751(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

int func_535(int iParam0)
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

void func_536(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_752(iParam1, iParam2);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam3->f_1, func_753(iParam1, iParam2));
	}
}

void func_537(int iParam0)
{
	Local_1324.f_160.f_5 = func_535(ENTITY::GET_ENTITY_MODEL(iParam0));
	func_754(iParam0, &(Local_1324.f_167));
	func_755(iParam0);
}

bool func_538(int iParam0)
{
	return func_134(8, iParam0);
}

Vector3 func_539(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_540(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;

	iVar0 = func_249(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || (ENTITY::IS_ENTITY_DEAD(iVar0) && iParam10 == 1))
	{
		func_174(iParam0);
		return;
	}
	if (!func_756(iParam0))
	{
		if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4) || (bParam9 && func_757(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4))
		{
			func_758(iParam0, iParam5, iParam6, iParam7, sParam8);
		}
	}
	else if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4) || (bParam9 && func_757(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4))
	{
		func_174(iParam0);
	}
}

bool func_541(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_375(iParam2, 0))
	{
		if (!func_217(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_75[iParam2 /*39*/].f_7.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_249(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_539(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_75[iParam2 /*39*/].f_7.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

bool func_542(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_759(Global_34, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

void func_543()
{
	if (!func_533(&(Local_1324.f_53), 1))
	{
	}
	if (!func_301())
	{
	}
	if (func_316(16, 0))
	{
	}
}

bool func_544(int iParam0, int iParam1)
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

void func_545(int iParam0)
{
	int iVar0;

	iVar0 = func_249(iParam0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	switch (iParam0)
	{
		case 3:
			TASK::TASK_WANDER_IN_AREA(func_249(iParam0), func_447(iParam0), 15f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			PED::SET_PED_KEEP_TASK(func_249(iParam0), true);
			break;
	}
}

bool func_546(int iParam0, bool bParam1)
{
	if (((((func_544(iParam0, 780511057) || func_544(iParam0, -219932022)) || func_544(iParam0, 1120685857)) || func_544(iParam0, -2117564886)) || func_544(iParam0, 655999185)) || func_544(iParam0, 1345172471))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_544(iParam0, -653332088) || func_544(iParam0, 167901368))
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

int func_547(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_760(iParam0, fParam1, bParam2, bParam3);
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

bool func_548(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

float func_549(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_550(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = BUILTIN::COS(vParam1.x);
	fVar1 = BUILTIN::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam1.y);
	fVar1 = BUILTIN::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam1.z);
	fVar1 = BUILTIN::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

void func_551(var uParam0, vector3 vParam1, float fParam4, int iParam5)
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
	vVar10 = { func_397(vVar7 - vVar4) };
	vVar13 = { func_761(vVar10, 2) };
	vVar16 = { vVar4 + vVar10 * FtoV((BUILTIN::VDIST(vVar4, vVar7) * uParam0->f_7)) + Vector(uParam0->f_8, uParam0->f_8, uParam0->f_8) * vVar13 };
	iVar19 = 0;
	if (func_185(*uParam0, 1))
	{
		GRAPHICS::_0x41F88A85A579A61D(uParam0->f_9);
		while (func_762(&fVar0, &vVar1, uParam0->f_10, vVar4, vVar7, vVar16))
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
	if (func_185(*uParam0, 2))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11))
		{
			GRAPHICS::_0x4BD66B4E3427689B(uParam0->f_11);
			while (func_762(&fVar0, &vVar1, uParam0->f_13, vVar4, vVar7, vVar16))
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
					if (func_185(*uParam0, 4))
					{
						while (func_762(&fVar0, &vVar1, uParam0->f_21, vVar4, vVar7, vVar16))
						{
							MISC::SET_RANDOM_SEED(BUILTIN::TIMERA());
							if ((uParam0->f_14 < 0f || uParam0->f_14 >= 1f) || MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= uParam0->f_14)
							{
								fVar20 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_15, uParam0->f_16);
								fVar21 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_17, uParam0->f_18);
								GRAPHICS::_ADD_BLOOD_POOL_2(vVar1, fVar20, fVar21, uParam0->f_20, false, NaNf, false);
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
}

int func_552(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_763(iVar0, 2))
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
				func_764(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_553(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_557(iParam0))
	{
		return;
	}
	iVar0 = func_765(iParam0);
	if (bParam1)
	{
		func_766(iParam0, 4);
		if (bParam3)
		{
			func_767(iVar0, 1);
		}
		func_768(iVar0, 1);
	}
	else
	{
		func_769(iParam0, 4);
		func_768(iVar0, 0);
	}
}

void func_554()
{
	if (func_316(16384, 0) || func_316(32768, 0))
	{
		func_558(&(Local_1324.f_170.f_12[0]), 1, 1);
		func_558(&(Local_1324.f_170.f_12[1]), 1, 1);
		return;
	}
	if (func_770(Local_1324.f_170.f_12[0], 1))
	{
		if (!func_333(16384, -1, 1))
		{
			func_223(16384);
			func_558(&(Local_1324.f_170.f_12[0]), 1, 1);
			PED::_0xF7EA250B9A919E03(joaat("ACTION"), PLAYER::PLAYER_PED_ID());
		}
	}
	else if (func_770(Local_1324.f_170.f_12[1], 1))
	{
		if (!func_333(32768, -1, 1))
		{
			func_223(32768);
			func_558(&(Local_1324.f_170.f_12[1]), 1, 1);
			PED::_0xF7EA250B9A919E03(joaat("ACTION"), PLAYER::PLAYER_PED_ID());
		}
	}
}

bool func_555(var uParam0)
{
	return func_185(*uParam0, 2);
}

void func_556(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

	if (func_185(*uParam1, 2))
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
	if (!func_771(iVar0, sParam4, 0))
	{
	}
	else
	{
		bVar2 = true;
	}
	bVar3 = func_185(iParam5, 64);
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
			sVar4 = func_772(PED::IS_PED_MALE(iVar1), sParam2, sParam3);
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
	else if (func_773(iVar1))
	{
		if (func_185(*uParam1, 1))
		{
			TASK::CLEAR_PED_TASKS(iVar1, true, false);
		}
		func_238(uParam1, 2);
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
				if (func_185(*uParam1, 1))
				{
					sVar5 = func_772(PED::IS_PED_MALE(iVar1), sParam2, sParam3);
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
		func_774(250);
		if (func_185(iParam5, 4) && (func_775(iVar1, 0, 1, 0) != joaat("WEAPON_UNARMED") || func_775(iVar1, 1, 1, 0) != joaat("WEAPON_UNARMED")))
		{
			if (func_776(iVar1, 716706914, 0, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(iVar1, 1, 0, 0, 0);
			}
		}
		else if (func_185(iParam5, 1) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iVar1, true))
		{
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iVar1, false))
			{
				if (func_776(iVar1, 501393341, 0, 0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
				}
			}
		}
		else if (func_185(iParam5, 2) && PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				if (func_776(iVar1, -828834893, 0, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iVar1, 0, 0);
				}
			}
		}
		else if (func_185(iParam5, 8) && PED::GET_PED_STEALTH_MOVEMENT(iVar1))
		{
			PED::SET_PED_STEALTH_MOVEMENT(iVar1, 0, 0, 0);
		}
		else if (func_185(iParam5, 16) && PED::_GET_PED_CROUCH_MOVEMENT(iVar1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iVar1, false, 0, false);
		}
		else if (func_185(iParam5, 32) && PED::_IS_PED_CARRYING(iVar1))
		{
			if (func_776(iVar1, -208384378, 0, 0))
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
			if (func_776(iVar1, iVar7, 0, 0))
			{
				if (func_185(*uParam1, 1))
				{
					if (!func_185(*uParam1, 4))
					{
						func_238(uParam1, 2);
					}
					else if (!bVar3)
					{
						func_238(uParam1, 2);
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
					TASK::TASK_ENTER_ANIM_SCENE(func_777(bVar3, iVar1, 0), iVar0, func_772(PED::IS_PED_MALE(iVar1), sParam2, sParam3), sParam4, 1f, bVar3, iParam6, iParam8, -1082130432 /* Float: -1f */);
					if (!bVar3)
					{
						TASK::TASK_STAND_STILL(0, iParam7);
						func_778(iVar1, &iVar8, 0, 0, 1, 1);
					}
					func_238(uParam1, 1);
				}
			}
			else if (!func_185(*uParam1, 4))
			{
				func_238(uParam1, 4);
			}
		}
	}
}

bool func_557(int iParam0)
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

void func_558(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_557(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_765(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_779(iVar0);
	*uParam0 = 0;
}

bool func_559(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_780(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_781())
	{
		return func_780(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_780(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_560(int iParam0, bool bParam1, bool bParam2)
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

var func_561(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_562(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_782(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_563(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_782(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_564(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_363(&Var1, iParam0))
	{
		iVar0 = ((func_783() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_565(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_566(int iParam0, int iParam1)
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

void func_567(var uParam0)
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
	func_784(uParam0, uParam0->f_1);
}

void func_568(var uParam0, int iParam1, int iParam2)
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
		func_193(uParam0, iVar0);
		iVar0++;
	}
}

float func_569(var uParam0)
{
	return uParam0->f_26;
}

void func_570(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_571(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(uParam0, 1);
	}
	else
	{
		func_263(uParam0, 1);
	}
}

void func_572(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(uParam0, 512);
	}
	else
	{
		func_263(uParam0, 512);
	}
}

void func_573(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(uParam0, 2);
	}
	else
	{
		func_263(uParam0, 2);
	}
}

void func_574(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(uParam0, 8);
	}
	else
	{
		func_263(uParam0, 8);
	}
}

int func_575(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

int func_576(int iParam0)
{
	return Local_1324.f_191.f_7[iParam0 /*11*/].f_4;
}

float func_577(int iParam0)
{
	return Local_1324.f_191.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_578(int iParam0)
{
	return Local_1324.f_191.f_7[iParam0 /*11*/].f_6;
}

bool func_579(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_584(iParam1))
	{
		return false;
	}
	iVar0 = func_785(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_580(int iParam0, bool bParam1)
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

bool func_581(int iParam0)
{
	return func_175(iParam0, 32);
}

bool func_582(int iParam0)
{
	return func_175(iParam0, 64);
}

bool func_583(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_584(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_585(int iParam0)
{
	return Local_1324.f_191.f_7[iParam0 /*11*/];
}

void func_586(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	func_590(&(uParam0->f_6));
	uParam0->f_2 = iParam1;
}

bool func_587(int iParam0)
{
	return func_237(Local_1324.f_25.f_23, iParam0);
}

bool func_588(var uParam0, var uParam1)
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
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_16, &(uParam1->f_14), func_585(uParam1->f_1), 0);
	func_786(uParam1->f_16);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam1->f_16, Local_1324.f_191.f_7[uParam1->f_1 /*11*/].f_6, 0f, 0f, Local_1324.f_191.f_7[uParam1->f_1 /*11*/].f_5, 2);
	ANIMSCENE::START_ANIM_SCENE(uParam1->f_16);
	return true;
}

bool func_589()
{
	return func_594(2);
}

void func_590(var uParam0)
{
	func_787(uParam0, 0);
}

bool func_591(var uParam0, int iParam1)
{
	return func_237(uParam0->f_21, iParam1);
}

float func_592(var uParam0)
{
	return (BUILTIN::TO_FLOAT(func_788(uParam0)) * 0.001f);
}

int func_593(int iParam0)
{
	return PLAYER::GET_PLAYER_PED(func_789(iParam0));
}

bool func_594(int iParam0)
{
	return func_237(Local_1324.f_25.f_22, iParam0);
}

void func_595(var uParam0, int iParam1)
{
	func_265(&(uParam0->f_10), iParam1);
}

var func_596(int iParam0, int iParam1)
{
	return func_790(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_597(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 5;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 21, 29, &uParam1);
}

int func_598(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_599(int iParam0)
{
	func_739(8);
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
	if (GANG::_0x3F59FE6F37869576(iParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_538(255))
	{
		if (!func_726())
		{
			func_727();
		}
		if (!func_338())
		{
			func_728();
		}
		if (!func_791())
		{
			func_792(1);
		}
	}
}

void func_600(int iParam0)
{
	if (GANG::_0x3F59FE6F37869576(iParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_538(255))
	{
		if (!func_726())
		{
			func_727();
		}
		if (!func_338())
		{
			func_728();
		}
		if (!func_793())
		{
			func_794(1);
		}
	}
}

void func_601(int iParam0)
{
	func_739(16);
	if (GANG::_0x3F59FE6F37869576(iParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_538(255))
	{
		if (!func_726())
		{
			func_727();
		}
		if (!func_338())
		{
			func_728();
		}
		if (!func_791())
		{
			func_792(1);
		}
	}
}

void func_602(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_795(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_603(int iParam0)
{
	return Local_1324.f_191.f_7[iParam0 /*11*/].f_10;
}

void func_604(int iParam0, char* sParam1, bool bParam2)
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

void func_605(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			func_287();
			break;
		case 1:
			func_796();
			break;
		case 2:
			func_797();
			break;
	}
}

int func_606(int iParam0)
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

void func_607(int iParam0, int iParam1, int iParam2)
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
		iVar0 = func_535(ENTITY::GET_ENTITY_MODEL(iParam0));
		iVar1 = func_798(iVar0, iParam2);
		ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar1);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar1, 0);
	}
}

void func_608(int iParam0)
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

int func_609(int iParam0)
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

struct<2> func_610(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_611(int iParam0)
{
	if (!func_455(func_454(iParam0), &(Local_1324.f_323.f_94[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_1324.f_323.f_186), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_1324.f_323.f_186), iParam0);
}

int func_612(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_376(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_377(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_377(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_377(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_613(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_376(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_377(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_377(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_377(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_614(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_477(&(Local_75[iParam1 /*39*/].f_17), 1, iParam0))
	{
		if (Local_75[iParam1 /*39*/].f_17.f_13[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_45.f_1[iParam0]))
		{
			if (Local_13.f_45.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_13.f_45.f_9[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_75[iParam1 /*39*/].f_17.f_13[iParam0], Local_13.f_45.f_9[iParam0]))
		{
			Local_13.f_45.f_1[iParam0] = iVar0;
			Local_13.f_45.f_9[iParam0] = Local_75[iParam1 /*39*/].f_17.f_13[iParam0];
		}
	}
}

void func_615(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_673() - fParam1);
	func_799(uParam0, 1);
	func_800(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_616(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_617(var uParam0)
{
	if (!func_466(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_801(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_673() - uParam0->f_1);
}

bool func_618(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	struct<2> Var5;
	struct<8> Var15;
	int iVar23;

	bVar0 = false;
	vVar1.f_3 = -1;
	Var5 = -1;
	Var5 = 50;
	if (func_118() == 0)
	{
		Var5.f_1 = { func_578(iParam0) };
	}
	else
	{
		Var5.f_1 = { func_220() };
	}
	Var15 = { func_802(iParam0) };
	iVar23 = func_803(Var15, &Var5, &vVar1);
	switch (iVar23)
	{
		case 0:
			break;
		case 2:
			bVar0 = true;
			break;
		case 1:
			func_222(iParam0, vVar1, func_225(), 1);
			func_222(2, vVar1 + Vector(0f, 2f, 2f), func_225(), 1);
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		switch (iParam0)
		{
			case 0:
				func_254(4);
				break;
			case 1:
				func_254(8);
				break;
		}
	}
	return bVar0;
}

int func_619(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam3 || func_538(iVar0))
			{
				if (!bParam2 || func_804(iVar0))
				{
					if (func_541(iParam0, fParam1, iVar0, 0))
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

void func_620(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	func_443(&(Local_75[iVar0 /*39*/].f_17), 3, iParam0);
}

void func_621(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		func_625(iParam0);
	}
}

bool func_622(int iParam0)
{
	return func_477(&(Local_1324.f_323.f_90), 7, iParam0);
}

bool func_623(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_629(uParam1, 0, iVar0);
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
				if (func_642(uParam1, 4000))
				{
					if ((func_643(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_644(uParam1, iParam0)) && func_645(uParam1, iParam0))
					{
						func_647();
						*uParam2 = 2;
						func_631(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_642(uParam1, 4000))
				{
					if ((func_643(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_644(uParam1, iParam0)) && func_645(uParam1, iParam0))
					{
						func_647();
						*uParam2 = 2;
						func_631(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258.f_35 != 0)
			{
				if (Global_1940258.f_34 == 0)
				{
					if (func_646(iParam0, Global_1940258.f_35))
					{
						func_647();
						*uParam2 = 2;
						func_631(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_650())
				{
					if (func_646(iParam0, Global_1940258.f_36))
					{
						func_647();
						*uParam2 = 2;
						func_631(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_636(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_637(Global_34, iParam0, uParam1))
					{
						func_647();
						*uParam2 = 4;
						func_631(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_638(Global_34, iParam0, uParam1))
					{
						func_647();
						*uParam2 = 256;
						func_631(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_805(iParam0, uParam1))
			{
				func_647();
				*uParam2 = 131072;
				func_631(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_806(iParam0, uParam1))
			{
				func_647();
				*uParam2 = 262144;
				func_631(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_624(int iParam0)
{
	return iParam0;
}

void func_625(int iParam0)
{
	int iVar0;

	if (!func_217(&iVar0))
	{
		return;
	}
	func_443(&(Local_75[iVar0 /*39*/].f_17), 4, iParam0);
}

float func_626()
{
	float fVar0;

	fVar0 = 200f;
	if (func_316(262144, 0))
	{
		fVar0 = 60f;
	}
	return fVar0;
}

int func_627(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/]))
	{
		return 255;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_75[iVar0 /*39*/].f_7.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || Local_75[iVar0 /*39*/].f_7.f_2[iParam0] < Local_75[iVar1 /*39*/].f_7.f_2[iParam0])
				{
					if (Local_75[iVar0 /*39*/].f_7.f_2[iParam0] <= fParam1 && !func_333(524288, iVar0, 0))
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
		iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
		{
			return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		}
	}
	return 255;
}

bool func_628(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (iParam1 != -1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iParam1 /*36*/].f_5))
		{
			return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1887339[iParam1 /*36*/].f_5, true, 0);
		}
		else
		{
			return false;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1893587.f_161)
	{
		iVar0 = Global_1893587.f_10[iVar1];
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iVar0 /*36*/].f_5))
		{
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1887339[iVar0 /*36*/].f_5, true, 0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_629(var uParam0, bool bParam1, int iParam2)
{
	func_807(iParam2);
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
		uParam0->f_14 = func_808(0);
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
							func_238(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_809(1, 1))
						{
							func_238(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_809(1, 1) || *uParam0 & 8192 != 0))
				{
					func_263(uParam0, 33554432);
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
			if (func_810(uParam0))
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
	func_811(uParam0);
}

bool func_630(int iParam0, var uParam1)
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
			if (!func_812(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_813(iParam0, iVar2) <= func_814(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_631(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_815(iParam2, 1, 1, 1, 0))
	{
		func_238(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_816(uParam1, 1);
	func_817();
}

bool func_632(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_818(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_819(uParam1);
			if (func_820(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_821(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_816(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_822(uParam1))
						{
							func_816(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_633(int iParam0, int iParam1, var uParam2)
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
	if (func_823(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_819(uParam2);
		if (func_820(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_821(uParam2)
				{
					func_816(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_634(int iParam0, var uParam1)
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
	if (func_812(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_821(uParam1)
		{
			fVar3 = func_819(uParam1);
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

int func_635(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_824(bParam1, bParam2, bParam3);
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

bool func_636(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_649();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_637(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_825(uParam2);
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
			if (func_645(uParam2, iParam1))
			{
				func_816(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_638(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_666(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_645(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_816(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_639(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_826(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_816(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_30))
				{
					func_816(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar4, 0, 0);
					if (func_827(iParam1, vVar0, vVar4))
					{
						func_816(uParam2, 1);
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
					func_816(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar7, 0, 0);
					if (func_827(iParam1, vVar0, vVar7))
					{
						func_816(uParam2, 1);
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

bool func_640(int iParam0, var uParam1)
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
		if (!func_812(iParam0, uParam1, Global_1940258.f_28[iVar0]) || iParam0 == Global_1940258.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_828(Global_1940258.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false), vVar9);
			if (func_829(Global_1940258.f_28[iVar0]))
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
			if (func_830(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_831(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_832(uParam1, iParam0, fVar1, iVar0))
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

bool func_641(int iParam0, var uParam1)
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

bool func_642(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_649();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_643(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_833(iVar0, &iVar2))
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
	if (func_834(iVar0, iParam0))
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

int func_644(var uParam0, int iParam1)
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

bool func_645(var uParam0, int iParam1)
{
	if (func_835(uParam0))
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

bool func_646(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_677(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_647()
{
}

bool func_648(var uParam0, int iParam1)
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
		if (func_836(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_649();
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
						if (func_549(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_649();
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

int func_649()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_650()
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
	if ((func_649() - Global_1940258.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_651(var uParam0, int iParam1)
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
	fVar0 = func_814(uParam0);
	if (uParam0->f_13 > func_569(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_837(iParam1);
	iVar1 = func_838(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_652(var uParam0, int iParam1)
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
	if (func_490(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_757(vVar1, vVar4);
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

int func_653(int iParam0, int iParam1, var uParam2)
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
	return func_839(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_654(int iParam0, var uParam1)
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
		if (func_840(iParam0, uParam1, 1))
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
	if (!func_485(iParam0))
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
			if (func_841(uParam1))
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
					if (!func_842(uParam1, iParam0))
					{
						if (func_549(iVar4, Global_35, 1) < 7f)
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

bool func_655(int iParam0, var uParam1)
{
	if (!func_843(0))
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

bool func_656(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_649();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_657(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_658(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_649();
	}
	else if (func_649() - uParam1->f_5) > func_844(uParam1)
	{
		return func_845(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_659(var uParam0, int iParam1)
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

int func_660(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_846(vVar3, vVar6);
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
	if (func_847(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_661(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_185(Local_1324.f_323.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_1324.f_323.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_1324.f_323.f_65), iParam0);
	if (!bParam3 && Local_75[iParam2 /*39*/].f_17.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_75[iParam2 /*39*/].f_17.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
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
	iVar0 = func_775(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::_0x705BE297EEBDB95D(iVar0) || func_848(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_0x79B1A6E780266DB0(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_662(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_663(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_664(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_849(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_850(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_851(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_397(func_852(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_853(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_853(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_854((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_854((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_854(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_854((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_665(int iParam0, var uParam1)
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

int func_666(var uParam0)
{
	return uParam0->f_23;
}

void func_667(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_855(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_856(iParam1);
	func_857(iVar0, iParam0);
}

bool func_668(int iParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PATHFIND::_0xDE0EA444735C1368(iParam1))
	{
		PATHFIND::_0x19C7567D2F2287D6(iParam1, 15);
	}
	if (PED::_0xE9B168527B337BF0(iParam0, iParam1))
	{
		return true;
	}
	return false;
}

int func_669(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/]))
	{
		return 255;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_75[iVar0 /*39*/].f_7.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || Local_75[iVar0 /*39*/].f_7.f_2[iParam0] < Local_75[iVar1 /*39*/].f_7.f_2[iParam0])
				{
					if (Local_75[iVar0 /*39*/].f_7.f_2[iParam0] <= fParam1 && !PED::_IS_PED_HOGTIED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))))
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
		iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
		{
			return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		}
	}
	return 255;
}

float func_670(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_671(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_672(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_671(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_673() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_673()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_674(int iParam0)
{
	return func_858(iParam0);
}

bool func_675(int iParam0)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1324.f_191.f_7[iParam0 /*11*/]))
		{
			uVar0 = Local_1324.f_191.f_7[iParam0 /*11*/];
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uVar0);
			return true;
		}
	}
	return false;
}

void func_676(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_859(uParam0, uParam1);
			break;
		case 2:
			func_860(uParam0, uParam1);
			break;
	}
}

float func_677(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_678()
{
	if (!func_861(3))
	{
		func_862(func_220());
	}
	else
	{
		func_862(func_447(3));
	}
	return true;
}

void func_679(int iParam0)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_2(1231752879, iParam0);
}

void func_680(int iParam0)
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

void func_681(int iParam0, int iParam1)
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
	uVar6 = func_596(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 43, &uVar6);
}

void func_682(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_683()
{
	return func_690(2, -1);
}

bool func_684(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_249(iParam0);
	if ((MISC::GET_FRAME_COUNT() % iParam5) != iParam6)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (!func_534(Global_34, iVar0, fParam3, 1, 1))
	{
		return false;
	}
	if (func_729(iVar0))
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
		if (func_863(PLAYER::PLAYER_ID(), iVar0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
		{
			return true;
		}
	}
	bVar1 = false;
	if (func_534(Global_34, iVar0, fParam1, 1, 1))
	{
		bVar1 = true;
	}
	else if (func_534(Global_34, iVar0, fParam2, 1, 1) && PED::IS_TRACKED_PED_VISIBLE(iVar0))
	{
		bVar1 = true;
	}
	else if ((func_534(Global_34, iVar0, fParam3, 1, 1) && func_864()) && PED::IS_TRACKED_PED_VISIBLE(iVar0))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (!func_466(&(Local_1324.f_53.f_3[iParam0 /*3*/])))
		{
			func_709(&(Local_1324.f_53.f_3[iParam0 /*3*/]), 0);
		}
		else if (func_617(&(Local_1324.f_53.f_3[iParam0 /*3*/])) > fParam4)
		{
			return true;
		}
	}
	else if (func_466(&(Local_1324.f_53.f_3[iParam0 /*3*/])))
	{
		func_468(&(Local_1324.f_53.f_3[iParam0 /*3*/]));
	}
	return false;
}

void func_685()
{
	func_700(2);
}

bool func_686(int iParam0, var uParam1)
{
	float fVar0;

	fVar0 = 5f;
	if (func_858(iParam0))
	{
		fVar0 = func_865(iParam0);
	}
	if (func_534(Global_34, iParam0, fVar0, 1, 1))
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (!func_466(&(uParam1->f_35)))
	{
		if (PED::_0xD55DB4466D00A258(iParam0))
		{
			func_709(&(uParam1->f_35), 0);
		}
	}
	else if (func_617(&(uParam1->f_35)) > 2.5f)
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (func_623(iParam0, uParam1, &(uParam1->f_32), 0))
	{
		return true;
	}
	return false;
}

bool func_687(int iParam0, var uParam1, bool bParam2)
{
	if (func_489(iParam0, 0, uParam1, &(uParam1->f_33), 0, 0))
	{
		return true;
	}
	if (Global_1940258.f_19 && !uParam1->f_2 & 4 != 0)
	{
		if (((func_534(Global_34, iParam0, WEAPON::_0x79B1A6E780266DB0(Global_34), 1, 1) && PED::_0x285D36C5C72B0569(Global_34) <= 0.5f) && func_866(iParam0, 0.45f, 0.55f, 0.45f, 0.55f)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			uParam1->f_33 = 4;
			return true;
		}
	}
	if (bParam2 && func_534(Global_34, iParam0, 7f, 1, 1))
	{
		uParam1->f_33 = 65536;
		return true;
	}
	return false;
}

void func_688()
{
	Local_1324.f_25.f_20 = PLAYER::PLAYER_ID();
	func_700(4);
}

void func_689(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_585(uParam1->f_1);
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
	if ((uParam1->f_20 == 255 || func_867(uParam0, 1)) || bParam2)
	{
		iVar1 = func_593(iVar0);
		if (!func_534(iVar1, iVar0, 100f, 1, 1))
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
		if ((!PED::IS_PED_FLEEING(iVar0) || !func_704(iVar0, 518218985)) || bParam3)
		{
			if (func_591(uParam1, 16))
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
			func_700(8);
		}
		return;
	}
	switch (uParam0->f_1)
	{
		case 1:
			if ((!PED::IS_PED_IN_COMBAT(iVar0, 0) || !func_704(iVar0, 780511057)) || bParam3)
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 0, 0);
				func_700(8);
			}
			break;
		case 0:
			if ((!PED::IS_PED_FLEEING(iVar0) || !func_704(iVar0, 518218985)) || bParam3)
			{
				if (func_591(uParam1, 16))
				{
					iVar5 |= 67108864;
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iVar1, 3, iVar5, 400f, -1, 0);
				func_700(8);
			}
			break;
		default:
			break;
	}
}

bool func_690(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_560(iParam1, 0, 1))
	{
		return false;
	}
	return func_237(Local_75[iParam1 /*39*/].f_5, iParam0);
}

bool func_691(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 1:
			return (func_704(iParam1, 780511057) || PED::IS_PED_IN_COMBAT(iParam1, 0));
		case 0:
			return (func_704(iParam1, 518218985) || PED::IS_PED_FLEEING(iParam1));
	}
	return false;
}

void func_692(var uParam0)
{
}

void func_693(var uParam0, var uParam1)
{
}

void func_694(var uParam0)
{
	if (func_533(uParam0, 1))
	{
		return;
	}
	func_728();
	func_453(uParam0, 1);
}

void func_695(var uParam0)
{
	if (func_533(uParam0, 2))
	{
		return;
	}
	func_710(1);
	func_453(uParam0, 2);
}

void func_696(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_538(255))
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		iVar0 = Local_1324.f_191.f_7[iVar2 /*11*/];
		if (((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					if (func_691(uParam0, iVar0))
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
			if (iVar1 == 1 && func_534(iVar0, Global_34, uParam2->f_31, 1, 1))
			{
				if (!MAP::_DOES_ENTITY_HAVE_BLIP(iVar0) && ENTITY::IS_ENTITY_VISIBLE(iVar0))
				{
					MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iVar0);
				}
			}
			else if (!func_534(iVar0, Global_34, uParam2->f_35, 1, 1) || iVar1 == 0)
			{
				if (MAP::_DOES_ENTITY_HAVE_BLIP(iVar0))
				{
					func_868(iVar0);
				}
			}
		}
		iVar2++;
	}
}

void func_697(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 <= 6)
	{
		iVar0 = Local_1324.f_191.f_7[iVar2 /*11*/];
		if ((((((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !func_691(uParam0, iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(uParam1->f_20), 0, 0);
					break;
				case 0:
					iVar1 = 0;
					if (func_591(uParam1, 16))
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

void func_698(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar0 = Local_1324.f_191.f_7[iVar1 /*11*/];
		if ((((((iVar1 != uParam0->f_1 && iVar1 != uParam0->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && PED::_0x268B3AEBF032A88D(iVar0))
		{
			TASK::TASK_WANDER_IN_AREA(iVar0, Local_1324.f_191.f_7[uParam0->f_1 /*11*/].f_6, uParam0->f_27, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
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

void func_699(int iParam0)
{
	MISC::SET_BIT(&(Local_1324.f_53.f_59), iParam0);
}

void func_700(int iParam0)
{
	if (!func_560(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_265(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*39*/].f_5), iParam0);
}

int func_701(var uParam0)
{
	return 0;
}

void func_702(var uParam0)
{
}

void func_703()
{
}

bool func_704(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_705(int iParam0)
{
	if (!func_560(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_266(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*39*/].f_5), iParam0);
}

bool func_706(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_560(iParam1, 0, 1))
	{
		return false;
	}
	return func_237(Local_75[iParam1 /*39*/].f_1, iParam0);
}

bool func_707(int iParam0)
{
	return func_237(Local_1324.f_53.f_61, iParam0);
}

void func_708(int iParam0)
{
	if (!func_560(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_266(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*39*/].f_1), iParam0);
}

void func_709(var uParam0, bool bParam1)
{
	if (bParam1 || !func_466(uParam0))
	{
		func_465(uParam0);
	}
}

void func_710(int iParam0)
{
	if (!func_560(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_265(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*39*/].f_1), iParam0);
}

void func_711()
{
	if (func_533(&(Local_1324.f_53), 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1324.f_53))
	{
		return;
	}
	func_869(Local_1324.f_53);
	func_453(&(Local_1324.f_53), 256);
}

void func_712()
{
	if (!func_533(&(Local_1324.f_53), 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1324.f_53))
	{
		func_870(&(Local_1324.f_53), 256);
		return;
	}
	func_871(Local_1324.f_53);
	func_870(&(Local_1324.f_53), 256);
}

bool func_713()
{
	return func_707(1);
}

bool func_714(var uParam0)
{
	return AUDIO::_0xD9130842D7226045(&(uParam0->f_40), 0);
}

bool func_715(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6)
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
	else if (func_751(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
	{
		return true;
	}
	return false;
}

void func_716(var uParam0, int iParam1)
{
	if (uParam0->f_53 == iParam1)
	{
		return;
	}
	uParam0->f_53 = iParam1;
}

Vector3 func_717(vector3 vParam0, float fParam3, float fParam4)
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
	return func_872(vParam0, fParam3, fParam4);
}

void func_718(vector3 vParam0, int iParam3)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::TRIGGER_SONAR_BLIP(iParam3, vParam0);
}

void func_719()
{
}

void func_720(var uParam0, vector3 vParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_40)))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_POSITION("CALL", vParam1, &(uParam0->f_40), false, 0, true, 0);
}

int func_721(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		iVar1 = func_873(iVar2);
		if (iVar1 >= 0)
		{
			iVar0 = (iVar0 + iVar1);
		}
		iVar2++;
	}
	return iVar0;
}

bool func_722(var uParam0)
{
	return func_616(*uParam0, 1);
}

void func_723(int iParam0, var uParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_722(uParam1))
		{
			if (bParam2)
			{
				func_874(uParam1, 0);
			}
		}
		else
		{
			uParam1->f_3 = (func_592(uParam1) * Global_1901947.f_852.f_8);
			if (uParam1->f_3 > 1f)
			{
				uParam1->f_3 = 1f;
			}
		}
	}
	if ((((!ENTITY::IS_ENTITY_DEAD(iParam0) && func_722(uParam1)) && !PED::GET_PED_CONFIG_FLAG(iParam0, 580, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) && (MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (!PED::_0x33FA048675821DA7(iParam0, 5))
		{
			PED::_0x2EB75FB86C41F026(iParam0, 5, 1);
		}
		PED::_0x06D26A96CA1BCA75(iParam0, 5, uParam1->f_3, 0);
	}
}

void func_724(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	uParam0->f_2 = iParam1;
}

bool func_725(var uParam0)
{
	return func_533(uParam0, 2);
}

bool func_726()
{
	return func_68(2);
}

void func_727()
{
	int iVar0;

	if (!func_134(32, 255))
	{
		func_875(Local_1324.f_1, Local_1324.f_3);
		if (!func_134(1024, 255))
		{
			func_876(Local_1324.f_1);
			func_151(1024);
		}
		iVar0 = func_347(Local_1324.f_1, Local_1324.f_2);
		func_877(iVar0);
		func_878(iVar0);
		func_149(2);
		func_879(Local_1324.f_9);
		func_880(Local_1324.f_1);
		func_881(Local_1324.f_1, Local_1324.f_2, Local_1324.f_3);
		func_151(32);
	}
}

void func_728()
{
	if (!func_68(2))
	{
		return;
	}
	func_149(8);
}

bool func_729(int iParam0)
{
	return !ENTITY::IS_ENTITY_VISIBLE(iParam0);
}

bool func_730(var uParam0)
{
	return func_715(Global_34, uParam0->f_48, uParam0->f_30, 1, !func_882(uParam0));
}

int func_731()
{
	return -108658760;
}

void func_732(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*uParam1))
	{
		*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(func_883(), iParam0);
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
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_884(func_535(ENTITY::GET_ENTITY_MODEL(iParam0))));
	}
}

void func_733(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_466(uParam0))
	{
		func_615(uParam0, fParam1);
	}
}

void func_734(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam0, -1833912565);
		MAP::_BLIP_SET_MODIFIER(*uParam0, 197772266);
	}
}

void func_735(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam0, 197772266);
		MAP::_BLIP_SET_MODIFIER(*uParam0, -1833912565);
	}
}

void func_736(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam0, 197772266);
	}
}

void func_737(int iParam0, int iParam1)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_2(iParam1, iParam0);
}

void func_738()
{
	struct<15> Var0;

	Var0 = { func_885(-922869466) };
	func_886(&Var0);
}

void func_739(int iParam0)
{
	func_265(&(Local_1324.f_160), iParam0);
}

void func_740()
{
	struct<15> Var0;

	Var0 = { func_885(2126697993) };
	func_886(&Var0);
}

void func_741(int iParam0)
{
	if (!func_560(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_265(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*39*/].f_4), iParam0);
}

int func_742(int iParam0)
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

void func_743()
{
	struct<15> Var0;

	Var0 = { func_885(-1485898032) };
	func_886(&Var0);
}

bool func_744(int iParam0)
{
	return func_237(Local_1324.f_160.f_2, iParam0);
}

bool func_745(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1324.f_191.f_7[iParam0 /*11*/]))
		{
			PED::DELETE_PED(&(Local_1324.f_191.f_7[iParam0 /*11*/]));
			Local_1324.f_191.f_7[iParam0 /*11*/] = 0;
			return true;
		}
	}
	return false;
}

void func_746(int iParam0)
{
	if (!func_560(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_266(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*39*/].f_4), iParam0);
}

bool func_747(int iParam0, var uParam1, var uParam2, bool bParam3)
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

bool func_748()
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

bool func_749(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_1324.f_19.f_1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (MISC::IS_BIT_SET(Local_1324.f_19, iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
			{
				if (func_887(Local_1324.f_19.f_1, (*iParam0)[iVar0]))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_750()
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
	if (Local_75[iVar1 /*39*/].f_2.f_1 != 0)
	{
	}
	Local_75[iVar1 /*39*/].f_2.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return true;
}

float func_751(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_752(int iParam0, int iParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_753(iParam0, iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	return iVar1;
}

char* func_753(int iParam0, int iParam1)
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

void func_754(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	func_888(*uParam1);
}

void func_755(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iParam0))
		{
			PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 1);
		}
		if (!func_889())
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 593, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 593, false);
		}
	}
}

bool func_756(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/].f_1);
}

float func_757(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_758(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_174(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, Local_1324.f_191.f_7[iParam0 /*11*/]);
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
	Local_1324.f_191.f_7[iParam0 /*11*/].f_1 = iVar0;
}

bool func_759(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_890(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_534(iParam0, iParam1, fParam3, 1, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, false) == 1;
}

int func_760(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/]))
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
		else if (Local_75[iVar0 /*39*/].f_7.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_538(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_75[iVar0 /*39*/].f_7.f_2[iParam0] > Local_75[iVar1 /*39*/].f_7.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_75[iVar0 /*39*/].f_7.f_2[iParam0] > fParam1)
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

Vector3 func_761(vector3 vParam0, int iParam3)
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

bool func_762(float fParam0, var uParam1, float fParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	if (*fParam0 > 1f || *fParam0 < 0f)
	{
		return false;
	}
	*uParam1 = { func_891(vParam3, vParam9, vParam6, *fParam0) };
	if (!func_387(uParam1, 1, 10, 0, 0))
	{
		return false;
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
	return true;
}

bool func_763(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_764(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_767(iParam0, 1);
	func_768(iParam0, 1);
	func_769(iParam0, 128);
}

int func_765(int iParam0)
{
	return iParam0;
}

void func_766(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_767(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_763(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_768(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_769(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

bool func_770(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_557(iParam0))
	{
		return false;
	}
	iVar0 = func_765(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		if (Global_1951255[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951255[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951255[iVar0 /*23*/].f_18) * (1f - Global_1951255[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951255[iVar0 /*23*/].f_21 = iVar1;
			Global_1951255[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_771(int iParam0, char* sParam1, bool bParam2)
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

char* func_772(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_773(int iParam0)
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
	if (func_892())
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

void func_774(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

int func_775(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_776(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_893(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

int func_777(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_778(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_779(int iParam0)
{
	if (!func_894(iParam0))
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

bool func_780(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_781()
{
	return Global_1102219.f_3672;
}

bool func_782(struct<2> Param0, var uParam2)
{
	if (!func_39(Param0))
	{
		return false;
	}
	func_895(uParam2);
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

int func_783()
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

void func_784(var uParam0, var uParam1)
{
}

int func_785(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

void func_786(var uParam0)
{
}

void func_787(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_799(uParam0, 1);
	func_800(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_788(var uParam0)
{
	if (!func_722(uParam0))
	{
		return 0;
	}
	if (func_896(uParam0))
	{
		return uParam0->f_2;
	}
	return func_897(uParam0->f_1);
}

int func_789(int iParam0)
{
	return func_898(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1203982208 /* Float: 99999f */, 1, 1);
}

var func_790(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_899() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_900());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_900());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_900());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_901(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_902(iVar2))
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
				if (iVar9 & 8192 != 0 && func_903(iVar2) != 1)
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
					if (!func_904(iVar10))
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

bool func_791()
{
	return func_68(32);
}

void func_792(bool bParam0)
{
	if (!func_68(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_68(256))
		{
			func_184(Local_1324.f_18, 0);
			func_149(256);
		}
	}
	func_149(32);
}

bool func_793()
{
	return func_68(16);
}

void func_794(bool bParam0)
{
	if (!func_68(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_68(256))
		{
			func_184(Local_1324.f_18, 0);
			func_149(256);
		}
	}
	func_149(16);
}

float func_795(float fParam0, float fParam1, float fParam2)
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

void func_796()
{
	func_428(func_249(1));
	func_905(func_249(1), 150, 100, 150f, 6);
}

void func_797()
{
	func_428(func_249(2));
	func_905(func_249(1), 150, 100, 150f, 6);
}

int func_798(int iParam0, int iParam1)
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

void func_799(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_800(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_801(var uParam0)
{
	return func_616(*uParam0, 2);
}

struct<8> func_802(int iParam0)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "tl_LegBear", 64);
			break;
		case 1:
			StringCopy(&cVar0, "tl_OtherBear", 64);
			break;
	}
	return cVar0;
}

int func_803(struct<8> Param0, var uParam8, var uParam9)
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
	Var1.f_3 = { Param0 };
	iVar12 = func_906(&Var1);
	if (iVar12 != -1)
	{
		switch (Global_1275441[iVar12 /*29*/])
		{
			case 4:
				*uParam9 = { Global_1275441[iVar12 /*29*/].f_22 };
				func_907(iVar12);
				return 2;
			case 3:
				*uParam9 = { Global_1275441[iVar12 /*29*/].f_22 };
				func_907(iVar12);
				return 1;
		}
	}
	else
	{
		if (func_908())
		{
			return 0;
		}
		if (!func_909(&Var1))
		{
			return 0;
		}
		if (!func_910(uParam8))
		{
			uParam9->f_3 = 2;
			return 2;
		}
		func_911(uParam8, &Var1);
	}
	return 0;
}

bool func_804(int iParam0)
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

bool func_805(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_912(uParam1);
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
		fVar2 = func_913(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		bVar3 = uParam1->f_1 & 2 != false;
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, true, bVar3) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1940258.f_38) || WEAPON::_IS_WEAPON_TORCH(Global_1940258.f_38))
			{
				if (uParam1->f_13 <= 5f)
				{
					if (func_914())
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

bool func_806(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_915(iParam0))
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

void func_807(int iParam0)
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
	Global_1940258.f_21 = func_916();
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
			func_917(&(Global_1940258.f_28), &(Global_1940258.f_33));
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

var func_808(int iParam0)
{
	return Global_1102219.f_3705[iParam0 /*3*/];
}

bool func_809(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_918(bParam0, &iVar0, &iVar1))
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

bool func_810(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940258.f_34;
	if (func_28() == -1)
	{
		if (Global_1940258.f_34 == 0)
		{
			iVar0 = func_919(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_34) || !Global_1956200.f_1716[4])
	{
		iVar0 = func_919(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_838(iVar0) == -1)
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

void func_811(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_920(uParam0);
	}
}

bool func_812(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_838(iParam2);
	}
	else
	{
		iVar1 = func_837(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_838(iParam0);
	}
	else
	{
		iVar0 = func_837(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_185(*uParam1, 8388608))
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

float func_813(int iParam0, int iParam1)
{
	return func_677(iParam0, iParam1, 1, 1);
}

float func_814(var uParam0)
{
	return uParam0->f_29;
}

bool func_815(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_816(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(uParam0, 134217728);
	}
	else
	{
		func_263(uParam0, 134217728);
	}
}

void func_817()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_818(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_677(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_921(iVar0, 0)))
		{
			if (func_866(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_819(var uParam0)
{
	return uParam0->f_18;
}

bool func_820(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_185(*uParam0, 4194304))
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

int func_821(var uParam0)
{
	return uParam0->f_19;
}

int func_822(var uParam0)
{
	return uParam0->f_20;
}

bool func_823(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_921(iVar0, 0)))
		{
			if (func_922(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_824(bool bParam0, bool bParam1, bool bParam2)
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

float func_825(var uParam0)
{
	return uParam0->f_25;
}

int func_826(var uParam0)
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

bool func_827(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_923(iParam0, vParam4, 0.5f))
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

int func_828(int iParam0)
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
	if (func_924(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_829(int iParam0)
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

bool func_830(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_915(iParam1))
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

bool func_831(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_915(iParam1))
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

bool func_832(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_925(uParam0);
	if (func_915(iParam1))
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

bool func_833(int iParam0, int iParam1)
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

bool func_834(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_926(iParam0, 1, 0, 0)) && !func_926(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
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

bool func_835(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_836(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_549(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_837(int iParam0)
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

int func_838(int iParam0)
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

int func_839(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_833(Global_34, &iVar1))
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
		fVar2 = func_677(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_677(iParam0, Global_1940258.f_34, 0, 1) < 2.5f)
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

bool func_840(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_918(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_842(uParam1, iVar0))
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
				if (!bParam2 || !func_842(uParam1, iVar1))
				{
					if (func_549(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_841(var uParam0)
{
	return func_185(*uParam0, 131072);
}

bool func_842(var uParam0, int iParam1)
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

bool func_843(int iParam0)
{
	return false;
}

int func_844(var uParam0)
{
	return uParam0->f_22;
}

int func_845(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_846(vector3 vParam0, vector3 vParam3)
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

bool func_847(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_848(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

float func_849(int iParam0)
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
	fVar0 = func_927(vVar2.x, fVar0);
	fVar1 = func_913(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.x, fVar0);
	fVar1 = func_913(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.x, fVar0);
	fVar1 = func_913(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.x, fVar0);
	fVar1 = func_913(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.x, fVar0);
	fVar1 = func_913(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_850(int iParam0)
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
	fVar0 = func_927(vVar2.y, fVar0);
	fVar1 = func_913(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.y, fVar0);
	fVar1 = func_913(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.y, fVar0);
	fVar1 = func_913(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.y, fVar0);
	fVar1 = func_913(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.y, fVar0);
	fVar1 = func_913(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_851(int iParam0)
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
	fVar0 = func_927(vVar2.z, fVar0);
	fVar1 = func_913(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.z, fVar0);
	fVar1 = func_913(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.z, fVar0);
	fVar1 = func_913(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.z, fVar0);
	fVar1 = func_913(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_927(vVar2.z, fVar0);
	fVar1 = func_913(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_852(int iParam0)
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
	return func_397((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_853(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_854(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_855(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_928(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_856(int iParam0)
{
	return iParam0 + 8;
}

void func_857(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_458(iParam1, joaat("CHARACTER_MEMORY")) };
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

bool func_858(int iParam0)
{
	return FLOCK::_0xF8B48A361DC388AE(iParam0) == 2;
}

void func_859(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_1 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && func_549(*uParam1, Global_35, 1) < 300f)
	{
		bVar0 = true;
	}
	bVar1 = false;
	bVar1 = func_929();
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
				func_930(*uParam1);
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
		if (func_677(iVar2, *uParam1, 1, 1) > 300f)
		{
			return;
		}
	}
	if ((func_237(uParam1->f_2, 1) || func_237(uParam1->f_2, 2)) && uParam1->f_1 != 0)
	{
		return;
	}
	uParam1->f_1 = Global_1296859.f_21;
	if (uParam0->f_1 == PLAYER::PLAYER_ID())
	{
		func_265(&(uParam1->f_2), 1);
	}
	else if (GANG::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), uParam0->f_1))
	{
		func_265(&(uParam1->f_2), 2);
	}
}

void func_860(var uParam0, var uParam1)
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
			func_931(947, 1);
			func_932(*uParam1);
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_5))
		{
			if (((PED::IS_PED_DEAD_OR_DYING(iVar0, true) || PED::IS_PED_INJURED(iVar0)) || PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) || (ENTITY::_IS_ENTITY_FROZEN(iVar0) && !ENTITY::IS_ENTITY_VISIBLE(iVar0)))
			{
				return;
			}
			func_933(*uParam1);
		}
	}
}

bool func_861(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_1324.f_191.f_7[iParam0 /*11*/]);
}

void func_862(vector3 vParam0)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::TRIGGER_SONAR_BLIP(1231752879, vParam0);
}

bool func_863(int iParam0, int iParam1)
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

bool func_864()
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

float func_865(int iParam0)
{
	switch (func_606(func_535(ENTITY::GET_ENTITY_MODEL(iParam0))))
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

bool func_866(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_922(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_867(var uParam0, int iParam1)
{
	return func_237(uParam0->f_10, iParam1);
}

void func_868(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_934(&iVar0);
}

void func_869(var uParam0)
{
	PED::_0xE37287EE358939C3(uParam0);
}

void func_870(var uParam0, int iParam1)
{
	func_266(&(uParam0->f_54), iParam1);
}

void func_871(var uParam0)
{
	PED::_0x011A42FD923D41CA(uParam0);
}

Vector3 func_872(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_935(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_873(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_458(iParam0, joaat("NUM_TIMES_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_874(var uParam0, bool bParam1)
{
	if (bParam1 || !func_722(uParam0))
	{
		func_590(uParam0);
	}
}

void func_875(int iParam0, int iParam1)
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
	Var31 = { func_458(iParam0, joaat("VARIATIONS_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_124(&Var0, 4) && func_936(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1268861[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*99*/].f_56[iParam0] = iVar33;
}

void func_876(int iParam0)
{
	func_937(iParam0);
}

void func_877(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_131(Global_1272030[iParam0 /*4*/]))
	{
		return;
	}
	func_938(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_132(&(Global_1272030[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_939(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_939(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1296859.f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_939(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_939(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1296859.f_21, true);
	}
}

void func_878(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_567(&Var0);
}

void func_879(struct<2> Param0)
{
	struct<32> Var0;

	if (func_345(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_345(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_345(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_940(Param0, &Var0))
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

void func_880(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_458(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_881(int iParam0, int iParam1, int iParam2)
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

bool func_882(var uParam0)
{
	return func_533(uParam0, 16);
}

int func_883()
{
	return -839369609;
}

char* func_884(int iParam0)
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

struct<15> func_885(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_1324, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_886(var uParam0)
{
	func_941(uParam0, func_596(4, 117));
}

bool func_887(int iParam0, int iParam1)
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

void func_888(int iParam0)
{
	AUDIO::_0xD9130842D7226045(func_942(iParam0), 0);
}

bool func_889()
{
	return Global_1146212.f_21645[54 /*209*/].f_208;
}

bool func_890(int iParam0, int iParam1, float fParam2)
{
	return func_923(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

Vector3 func_891(vector3 vParam0, vector3 vParam3, vector3 vParam6, var uParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_943(vParam0, vParam3, uParam9) };
	vVar3 = { func_943(vParam3, vParam6, uParam9) };
	return func_943(vVar0, vVar3, uParam9);
}

bool func_892()
{
	return Global_1896738.f_382;
}

bool func_893(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_894(int iParam0)
{
	return func_763(iParam0, 2);
}

void func_895(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_896(var uParam0)
{
	return func_616(*uParam0, 2);
}

int func_897(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_898(vector3 vParam0, int iParam3, bool bParam4, bool bParam5)
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
			if (bParam4 && !func_560(iVar1, 1, 1))
			{
			}
			else if (!func_538(iVar1))
			{
			}
			else
			{
				iVar6 = PLAYER::GET_PLAYER_PED(iVar4);
				if (bParam5)
				{
					if (((PED::_IS_PED_HOGTIED(iVar6) || PED::_GET_LASSOER_OF_PED(iVar6)) || func_706(4, iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar6, false))
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

int func_899()
{
	return Global_1051252.f_12;
}

char* func_900()
{
	return "unnamed";
}

int func_901(int iParam0)
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

bool func_902(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_559(36, iParam0);
}

int func_903(int iParam0)
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

bool func_904(int iParam0)
{
	if (func_944(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_945(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

void func_905(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_539(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))), ENTITY::GET_ENTITY_COORDS(iParam0, false, false), true) < fParam3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 > iParam4)
	{
		iVar1 = iParam4;
	}
	func_946(iParam0, (iParam1 + (iParam2 * iVar1)));
}

int func_906(var uParam0)
{
	int iVar0;

	if (!func_947(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_948(&(Global_1275441[iVar0 /*29*/].f_1), uParam0))
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

void func_907(int iParam0)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 1;
	Var0.f_26 = iParam0;
	func_949(&Var0);
}

bool func_908()
{
	return Global_1276421.f_75.f_1 != -1;
}

bool func_909(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_947(uParam0))
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

bool func_910(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (func_240(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_911(var uParam0, var uParam1)
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
	func_949(&Var0);
}

float func_912(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_569(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_950(uParam0);
	}
	return func_569(uParam0);
}

float func_913(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_914()
{
	int iVar0;
	int iVar1;

	iVar0 = func_952(func_951());
	iVar1 = func_953(func_951());
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

bool func_915(int iParam0)
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

bool func_916()
{
	if (func_954())
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

void func_917(var uParam0, var uParam1)
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

bool func_918(bool bParam0, int iParam1, int iParam2)
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

int func_919(var uParam0)
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

void func_920(var uParam0)
{
	int iVar0;

	if (Global_1940258.f_32 == 0)
	{
		func_263(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940258.f_28[iVar0]))
				{
					func_238(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_921(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_922(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_923(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_924(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_925(var uParam0)
{
	return uParam0->f_28;
}

int func_926(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_927(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_928(int iParam0)
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

int func_929()
{
	if (func_861(0))
	{
		return 0;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_220()) > 300f)
	{
		return 0;
	}
	return 1;
}

void func_930(int iParam0)
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

void func_931(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_955(iParam0, &iVar0, &iVar1);
	if (!func_956(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_957(iVar0, iVar1);
}

void func_932(int iParam0)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar0.f_2 = Global_35.f_2;
	vVar0 = { vVar0 - Global_35 };
	if (func_240(vVar0))
	{
		vVar0 = { 1f, 0f, 0f };
	}
	vVar0 = { func_397(vVar0) };
	vVar0 = { Global_35 + vVar0 * Vector(160f, 160f, 160f) };
	AUDIO::_PLAY_SOUND_FROM_POSITION(func_958(iParam0), vVar0, func_942(iParam0), false, 0, true, 0);
}

void func_933(var uParam0)
{
	AUDIO::_0x0E53530D9B2DB01D(uParam0, -1574878795, 1);
}

void func_934(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

Vector3 func_935(vector3 vParam0, float fParam3)
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

int func_936(int iParam0)
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

void func_937(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1296859.f_21;
	Var1 = { func_458(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_938(int iParam0, int iParam1, int iParam2)
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

struct<2> func_939(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_940(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_782(Param0, &vVar0);
	if (func_959(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_941(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 42, &uParam1);
}

char* func_942(int iParam0)
{
	switch (func_535(ENTITY::GET_ENTITY_MODEL(iParam0)))
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

Vector3 func_943(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_944(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_945(int iParam0)
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
		func_960(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_961(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_946(int iParam0, int iParam1)
{
	float fVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = (((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (BUILTIN::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
		PED::SET_PED_MAX_HEALTH(iParam0, iParam1);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, BUILTIN::ROUND((((fVar0 / 100f) * (BUILTIN::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
	}
}

bool func_947(var uParam0)
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

bool func_948(var uParam0, var uParam1)
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

void func_949(var uParam0)
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 27, 41, Global_1051252.f_16[17]);
	func_962(uParam0);
}

var func_950(var uParam0)
{
	return uParam0->f_27;
}

int func_951()
{
	return Global_1902818;
}

int func_952(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_953(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_954()
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

void func_955(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_956(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_963(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_964(iParam0))
	{
		return false;
	}
	if (func_965(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_966(iParam0, 1)) || func_967(32768))
	{
		if (!func_966(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_968())
	{
		return false;
	}
	return true;
}

void func_957(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

char* func_958(int iParam0)
{
	return "CALL";
}

bool func_959(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_969(iParam0))
	{
		return false;
	}
	if (func_970(iParam0, uParam1, &uVar0))
	{
		func_971(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_960(int iParam0)
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
	func_961(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_961(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_962(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_972(iVar0);
		if (func_185(uParam0->f_5.f_9, iVar1))
		{
		}
		iVar0++;
	}
}

bool func_963(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_964(int iParam0)
{
	if (func_966(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_965(int iParam0)
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

bool func_966(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_967(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_968()
{
	if (!func_18())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_969(int iParam0)
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

bool func_970(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_973(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_971(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_974(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_975(iVar0);
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
			uParam2->f_5 = func_976(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_977(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_978(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_979(iVar0);
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

int func_972(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

int func_973(int iParam0)
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

int func_974(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_980(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_975(int iParam0)
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

int func_976(int iParam0)
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

int func_977(int iParam0)
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

int func_978(int iParam0)
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

int func_979(int iParam0)
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

bool func_980(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_981(iParam0, uParam1, &uVar0))
	{
		func_982(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_981(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_973(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_982(var uParam0, int iParam1, var uParam2)
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

