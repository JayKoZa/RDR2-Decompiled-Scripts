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
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = -1;
	var uLocal_32 = -1;
	var uLocal_33 = 0;
	struct<4> Local_34[32];
	struct<48> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1 } ;
	var uLocal_211 = 1;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	float fLocal_221 = 0f;
	float fLocal_222 = 0f;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_221 = 1f;
	fLocal_222 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 21, 53);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 21, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_34, 129, 54);
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
}

void func_34()
{
	HUD::_TEXT_DATABASE_REQUEST("NBEGP");
	TASK::_0x73F0D0327BFA0812(func_87());
	func_89(0, 0, func_88(), 5f, -1, 1);
	STREAMING::REQUEST_COLLISION_AT_COORD(func_88());
	STREAMING::REQUEST_PTFX_ASSET();
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

void func_35()
{
	func_90();
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
	Local_13.f_6 = func_74(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
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
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_139(((*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/])->f_3))
			{
				if (func_140((*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/]))
				{
					GRAPHICS::_0x9CF1836C03FB67A2((*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/], 1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_58(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_141(iParam0, iVar0, iParam1))
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
	func_142(Local_163.f_9, iVar0, 0);
	func_116(4);
	if (bVar1)
	{
		func_143(Local_163.f_1, Local_163.f_2);
	}
}

bool func_60(int iParam0)
{
	return func_144(Local_163.f_7, iParam0);
}

void func_61(int iParam0)
{
	int iVar0;

	if (!func_145(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_62()
{
	func_146(0);
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

	if (!func_147(uParam0))
	{
		return -1;
	}
	iVar0 = func_148(uParam0, uParam0->f_9);
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
			iVar0 = func_148(uParam0, iVar1);
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
			func_149(uParam0);
			break;
		case 1:
			func_149(uParam0);
			break;
		case 2:
			func_149(uParam0);
			break;
		case 3:
			func_150(uParam0);
			break;
		case 4:
			func_149(uParam0);
			break;
		case 5:
			func_149(uParam0);
			break;
		case 6:
			func_150(uParam0);
			break;
		case 7:
			func_150(uParam0);
			break;
		case 8:
			func_150(uParam0);
			break;
		case 9:
			func_149(uParam0);
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
	func_151(&(uParam0->f_16), iParam1);
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
			func_152(uParam0);
			break;
		case 1:
			func_153(uParam0);
			break;
		case 2:
			func_154(uParam0);
			break;
		case 3:
			func_155(uParam0);
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
	if (!func_145(iParam0))
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
			func_156(uParam0);
			break;
		case 1:
		case 2:
			func_157(uParam0);
			break;
		case 3:
		case 4:
			func_158(uParam0);
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

	if (func_159(&Var1, uParam0) && func_160(&Var1, iParam1))
	{
		func_161(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_81(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_159(&Var1, uParam0) && func_160(&Var1, iParam1))
	{
		func_161(Var1, -1052341598, &iVar0, 0);
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
	iVar0 = func_162(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_83(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_162(iParam0, iParam1);
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

int func_87()
{
	switch (func_163())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 454325279;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1443632175;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return -924706522;
		default:
			break;
	}
	return 0;
}

Vector3 func_88()
{
	switch (func_163())
	{
		case 0:
			return 2252.035f, 1342.706f, 84.5573f;
		case 1:
			return 2280.7f, 1608.79f, 84.32f;
		case 2:
			return 2438.612f, 960.3168f, 73.0963f;
		case 3:
			return 1130.541f, 575.7938f, 86.66257f;
		case 4:
			return -754.3893f, -399.1133f, 40.84306f;
		case 5:
			return -410.6756f, -63.938f, 40.7762f;
		case 6:
			return -2085.777f, -161.9067f, 208.0633f;
		case 7:
			return -1678.304f, -517.8369f, 140.867f;
		case 8:
			return -2624.881f, -339.7662f, 141.8102f;
		case 9:
			return -926.5729f, -924.4639f, 41.1771f;
		case 10:
			return -722.9517f, -1718.81f, 41.41f;
		case 11:
			return -1069.18f, -1919.616f, 42.3447f;
		case 12:
			return 1673.672f, 1440.046f, 146.0849f;
		case 13:
			return 1562.434f, 1445.237f, 145.2842f;
		case 14:
			return 1244.927f, 1177.251f, 148.2856f;
		case 15:
			return 1926.703f, -362.3477f, 42.4864f;
		case 16:
			return 2192.489f, -318.3198f, 40.7232f;
		case 17:
			return 2408.447f, -490.4562f, 40.9243f;
		case 18:
			return -3243.502f, -3187.141f, -9.3137f;
		case 19:
			return -1745.01f, -2929.141f, -12.3355f;
		case 20:
			return -1735.07f, -2378.355f, 41.289f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_89(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7)
{
	((*Local_163.f_47[iParam0 /*8*/])[iParam1 /*7*/])->f_1 = iParam6;
	((*Local_163.f_47[iParam0 /*8*/])[iParam1 /*7*/])->f_2 = iParam7;
	((*Local_163.f_47[iParam0 /*8*/])[iParam1 /*7*/])->f_3 = { vParam2 };
	((*Local_163.f_47[iParam0 /*8*/])[iParam1 /*7*/])->f_6 = fParam5;
}

void func_90()
{
	switch (func_164())
	{
		case 0:
			Local_13.f_7.f_9 = joaat("a_c_crow_01");
			break;
		case 1:
			Local_13.f_7.f_9 = joaat("a_c_vulture_01");
			break;
		case 2:
			Local_13.f_7.f_9 = joaat("a_c_raccoon_01");
			break;
		case 3:
			Local_13.f_7.f_9 = joaat("a_c_coyote_01");
			break;
		case 4:
			Local_13.f_7.f_9 = joaat("a_c_wolf");
			break;
		case 5:
			Local_13.f_7.f_9 = joaat("a_c_fox_01");
			break;
		case 6:
			Local_13.f_7.f_9 = joaat("a_c_cougar_01");
			break;
		case 7:
			Local_13.f_7.f_9 = joaat("a_c_boar_01");
			break;
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
	return func_165(uParam0->f_16, iParam1);
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
		func_166(&(Local_13.f_1), iParam0);
	}
}

bool func_95(int iParam0)
{
	if (!func_145(iParam0))
	{
		return false;
	}
	return (func_167(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
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
	if (func_139(Local_163.f_15))
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
		func_168(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_121(128);
	}
	else if (!func_101(128, 255))
	{
		Local_13.f_3.f_1 = func_169(Param0);
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
	return func_144(&(Local_34[iParam1 /*4*/]), iParam0);
}

bool func_102(int iParam0)
{
	return func_144(Local_13.f_1, iParam0);
}

int func_103()
{
	int iVar0;

	iVar0 = 1;
	if (!func_171(func_170()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_104()
{
}

int func_105()
{
	int iVar0;

	iVar0 = 1;
	if (!func_172())
	{
		iVar0 = 0;
	}
	return iVar0;
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
	if (!func_102(32) && func_173(32))
	{
		func_94(32);
	}
	if (!func_102(64) && func_173(64))
	{
		func_94(64);
	}
	if (!func_102(16) && func_174(16))
	{
		func_94(16);
	}
	if ((!func_102(2048) && func_173(2048)) && !func_173(4096))
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
	if (func_102(2048) && !func_173(4096))
	{
		func_96(6);
		return;
	}
}

void func_110()
{
}

bool func_111()
{
	return func_175();
}

void func_112()
{
}

int func_113()
{
	return 1;
}

void func_114(int iParam0)
{
	if (func_60(iParam0))
	{
		func_176(&(Local_163.f_7), iParam0);
	}
}

int func_115(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_145(iParam0))
	{
		return 0;
	}
	iVar0 = func_177(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_151(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_178(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_116(int iParam0)
{
	if (!func_60(iParam0))
	{
		func_166(&(Local_163.f_7), iParam0);
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
				func_179(iVar0);
				break;
			case -1315570756:
				func_180(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_181(iVar0);
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
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("NBEGP"))
	{
		return 0;
	}
	if (!TASK::_0x5E5D96BE25E9DF68(func_87()))
	{
		return 0;
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return 0;
	}
	return 1;
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
		func_166(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/], iParam0);
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
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_163.f_18.f_17))
	{
		iVar1 = func_182();
		if (iVar1 == 0)
		{
		}
		Local_163.f_18.f_17 = TASK::CREATE_SCENARIO_POINT(iVar1, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_88(), func_183(), func_184()), func_183(), 0f, 0f, 1);
		iVar0 = 0;
	}
	return iVar0;
}

int func_125(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_126()
{
	if (!func_60(1))
	{
		func_185(Local_163.f_9);
		func_116(1);
	}
}

void func_127()
{
	func_186();
}

void func_128()
{
	func_187();
	Local_163.f_18.f_18 = func_188(func_88(), 2f, 2f, 2f);
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

	if (func_139(Local_163.f_15))
	{
		return;
	}
	if (func_189())
	{
		return;
	}
	if (func_190(Local_163.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_163.f_15);
		if (fVar0 < 200f)
		{
			func_121(4096);
		}
		else if (fVar0 < 400f)
		{
			func_191(4096);
			func_121(2048);
		}
		else
		{
			func_191(4096);
			func_191(2048);
		}
	}
}

void func_132()
{
	func_192();
	func_193();
}

void func_133()
{
	if (func_194())
	{
		func_121(8);
	}
	else
	{
		func_191(8);
	}
}

void func_134()
{
	func_195();
}

void func_135()
{
	if (!func_101(8, 255))
	{
		func_121(16);
	}
	else
	{
		func_191(16);
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
	return 1;
}

void func_138()
{
}

int func_139(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_140(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_141(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_142(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_197(func_196(Param0));
	iVar1 = func_198(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_199(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_200(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_201(iVar0);
}

bool func_144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_145(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

void func_146(bool bParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_13))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_163.f_18.f_8))
		{
			if (func_202())
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_163.f_18.f_8, func_88(), 3, 0, -1082130432, -1, 0);
				PED::SET_PED_KEEP_TASK(Local_163.f_18.f_8, true);
			}
			else
			{
				TASK::TASK_WANDER_IN_AREA(Local_163.f_18.f_8, ENTITY::GET_ENTITY_COORDS(Local_163.f_18.f_8, true, false), 200f, 1077936128, 1086324736, 0);
				PED::SET_PED_KEEP_TASK(Local_163.f_18.f_8, true);
			}
		}
		if (bParam0)
		{
			func_203(&(Local_13.f_7.f_13), 0);
		}
		else
		{
			func_204(&(Local_13.f_7.f_13));
		}
	}
	TASK::_0x5758B1EE0C3FD4AC(Local_163.f_18.f_10, 1);
	if (MAP::DOES_BLIP_EXIST(Local_163.f_18.f_9))
	{
		MAP::REMOVE_BLIP(&(Local_163.f_18.f_9));
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_163.f_18.f_17))
	{
		TASK::_DELETE_SCENARIO_POINT(Local_163.f_18.f_17);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_163.f_18.f_18, false);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

int func_147(var uParam0)
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

int func_148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_205(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_206(iParam1)) - 1);
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

void func_149(var uParam0)
{
	func_69(uParam0, 0);
	func_69(uParam0, 1);
	func_69(uParam0, 3);
	func_67(uParam0);
}

void func_150(var uParam0)
{
	func_68(uParam0);
	func_207(uParam0, 0, 3);
}

void func_151(var uParam0, int iParam1)
{
	func_208(uParam0, iParam1);
}

void func_152(var uParam0)
{
	func_69(uParam0, 0);
	func_70(uParam0, 0);
	func_70(uParam0, 1);
	func_70(uParam0, 2);
}

void func_153(var uParam0)
{
	func_69(uParam0, 1);
	func_67(uParam0);
}

void func_154(var uParam0)
{
	func_69(uParam0, 2);
	func_70(uParam0, 3);
}

void func_155(var uParam0)
{
	func_69(uParam0, 3);
	func_70(uParam0, 4);
}

void func_156(var uParam0)
{
	func_70(uParam0, 0);
	func_70(uParam0, 1);
}

void func_157(var uParam0)
{
	func_70(uParam0, 2);
	func_70(uParam0, 3);
}

void func_158(var uParam0)
{
	func_70(uParam0, 4);
	func_70(uParam0, 5);
}

bool func_159(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_160(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_161(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_162(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

int func_163()
{
	return func_209();
}

int func_164()
{
	return func_210();
}

bool func_165(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_166(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_167(int iParam0)
{
	int iVar0;

	if (!func_145(iParam0))
	{
		return false;
	}
	iVar0 = func_211(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_168(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_169(struct<17> Param0)
{
	var uVar0;

	func_168(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_170()
{
	return Local_13.f_7.f_9;
}

bool func_171(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_172()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_13) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_13.f_7.f_13)))
	{
		return 1;
	}
	if (!func_214(&(Local_13.f_7.f_13), func_170(), func_212(), func_213(), 1, 0, 1, 1, 1))
	{
		return 0;
	}
	PED::_SET_PED_QUALITY(NETWORK::NET_TO_PED(Local_13.f_7.f_13), 2);
	PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_13.f_7.f_13), 297, true);
	return 1;
}

bool func_173(int iParam0)
{
	return func_144(Local_163.f_5, iParam0);
}

bool func_174(int iParam0)
{
	return func_144(Local_163.f_6, iParam0);
}

int func_175()
{
	func_215();
	func_216();
	if (func_217())
	{
		if (Local_13.f_7 != 4)
		{
			func_218(4);
		}
	}
	switch (Local_13.f_7)
	{
		case 0:
			if (func_219())
			{
				func_218(1);
			}
			break;
		case 1:
			if (func_220())
			{
				func_218(2);
			}
			break;
		case 2:
			if (func_221())
			{
				func_218(3);
			}
			break;
		case 3:
			if (func_222())
			{
				func_218(4);
			}
			break;
		case 4:
			if (func_223())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_177(int iParam0)
{
	if (!func_145(iParam0))
	{
		return 0;
	}
	if (!func_167(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_178(var uParam0, int iParam1)
{
	func_224(uParam0, iParam1);
}

void func_179(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_225(&Var0, iParam0))
			{
				func_226(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_180(int iParam0)
{
}

void func_181(int iParam0)
{
}

int func_182()
{
	switch (func_170())
	{
		case joaat("a_c_crow_01"):
			return 519635473;
		case joaat("a_c_raccoon_01"):
			return 1051774341;
		case joaat("a_c_fox_01"):
			return 1935884576;
		case joaat("a_c_boar_01"):
			return -1638353519;
		case joaat("a_c_vulture_01"):
			return -1415296020;
		case joaat("a_c_coyote_01"):
			return -1534116401;
		case joaat("a_c_wolf"):
			return 1974927641;
		case joaat("a_c_cougar_01"):
			return -963073294;
		default:
			break;
	}
	return 0;
}

float func_183()
{
	float fVar0;

	fVar0 = -1f;
	switch (func_163())
	{
		case 0:
			fVar0 = 141f;
			break;
		case 1:
			fVar0 = 68.7f;
			break;
		case 2:
			fVar0 = 121.4f;
			break;
		case 3:
			fVar0 = 272.5f;
			break;
		case 4:
			fVar0 = 240f;
			break;
		case 5:
			fVar0 = 60.4f;
			break;
		case 6:
			fVar0 = 139.3f;
			break;
		case 7:
			fVar0 = 181f;
			break;
		case 8:
			fVar0 = 194.9f;
			break;
		case 9:
			fVar0 = 227.6f;
			break;
		case 10:
			fVar0 = 319.3f;
			break;
		case 11:
			fVar0 = 284.1f;
			break;
		case 12:
			fVar0 = 120.5f;
			break;
		case 13:
			fVar0 = 327.6f;
			break;
		case 14:
			fVar0 = 213f;
			break;
		case 15:
			fVar0 = 232f;
			break;
		case 16:
			fVar0 = 284.7f;
			break;
		case 17:
			fVar0 = 193.9f;
			break;
		case 18:
			fVar0 = 167.4f;
			break;
		case 19:
			fVar0 = 292.7f;
			break;
		case 20:
			fVar0 = 305.2f;
			break;
	}
	return fVar0;
}

Vector3 func_184()
{
	switch (func_170())
	{
		case joaat("a_c_crow_01"):
			return -0.03f, -0.12f, 0f;
		case joaat("a_c_raccoon_01"):
			return 0f, -0.27f, 0f;
		case joaat("a_c_fox_01"):
			return 0f, -0.444f, 0f;
		case joaat("a_c_boar_01"):
			return 0f, -0.71f, 0f;
		case joaat("a_c_vulture_01"):
			return 0.03f, -0.2f, 0f;
		case joaat("a_c_coyote_01"):
			return 0.04f, -0.38f, 0f;
		case joaat("a_c_wolf"):
			return 0f, -0.48f, 0f;
		case joaat("a_c_cougar_01"):
			return 0f, -0.63f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_185(struct<2> Param0)
{
	if (func_198(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_198(Param0)))
	{
		STATS::_0x99230691875FC218(func_196(Param0), func_198(Param0), Global_35);
	}
}

void func_186()
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
			if (!func_139(((*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/])->f_3))
			{
				if (!func_140((*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/]))
				{
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_163.f_15, 0f, ((*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/])->f_3) };
					(*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/] = GRAPHICS::_0xFA50F79257745E74(vVar2, ((*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/])->f_6, ((*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/])->f_2, ((*Local_163.f_47[iVar0 /*8*/])[iVar1 /*7*/])->f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_187()
{
	Local_163.f_18.f_8 = NETWORK::NET_TO_PED(Local_13.f_7.f_13);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_13))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_163.f_18.f_8, true);
	}
}

int func_188(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

bool func_189()
{
	return (func_102(32) || func_101(32, 255));
}

int func_190(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_227(iParam0, 2087069356) };
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

void func_191(int iParam0)
{
	if (func_144(&(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]), iParam0))
	{
		func_176(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/], iParam0);
	}
}

void func_192()
{
}

void func_193()
{
}

int func_194()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_163.f_14))
	{
		return 0;
	}
	return 1;
}

void func_195()
{
	if ((!func_228(1) && func_229(PLAYER::PLAYER_PED_ID(), func_88(), 100f, 0, 0)) && func_230())
	{
		func_231();
		func_232(1);
	}
	func_233();
	switch ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1)
	{
		case 0:
			if (func_234())
			{
				func_235(1);
			}
			break;
		case 1:
			if (func_236())
			{
				func_235(2);
			}
			break;
		case 2:
			if (func_237())
			{
				func_235(3);
			}
			break;
		case 3:
			if (func_238())
			{
				func_235(4);
			}
			break;
		case 4:
			break;
	}
}

int func_196(var uParam0, var uParam1)
{
	return uParam0;
}

int func_197(int iParam0)
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

int func_198(struct<2> Param0)
{
	return func_239(Param0);
}

void func_199(struct<2> Param0, var uParam2)
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
	switch (func_196(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_241(func_240(Param0));
			iVar5 = func_242(iVar4);
			if (!func_243(iVar5, 0))
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

int func_200(int iParam0, int iParam1)
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

void func_201(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_244(&Var0);
}

int func_202()
{
	switch (func_170())
	{
		case joaat("a_c_crow_01"):
		case joaat("a_c_vulture_01"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_203(var uParam0, bool bParam1)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "MC_EntityID"))
		{
			DECORATOR::_DECOR_REMOVE_ALL(iVar0);
		}
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_204(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "MC_EntityID"))
		{
			DECORATOR::_DECOR_REMOVE_ALL(iVar0);
		}
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_205(int iParam0)
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

int func_206(int iParam0)
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

void func_207(var uParam0, int iParam1, int iParam2)
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

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_209()
{
	return Local_163.f_2;
}

var func_210()
{
	return Local_163.f_3;
}

int func_211(int iParam0)
{
	if (!func_145(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

Vector3 func_212()
{
	vector3 vVar0[3];
	vector3 vVar10;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	int iVar17;

	if (func_202())
	{
		switch (func_163())
		{
			case 0:
			case 1:
			case 14:
			case 15:
				return 0f, 0f, 0f;
			case 2:
				return 2499.929f, 921.9749f, 74.177f;
			case 3:
				return 1141.117f, 642.0093f, 94.421f;
			case 4:
				return -749.5237f, -296.766f, 43.3761f;
			case 5:
				return -329.0235f, -52.5757f, 45.8452f;
			case 6:
				return -2053.756f, -116.8186f, 230.0462f;
			case 7:
				return -1702.605f, -479.6481f, 146.3338f;
			case 8:
				return -2662.749f, -309.4969f, 151.3755f;
			case 9:
				return -980.2054f, -881.1652f, 41.6434f;
			case 10:
				return -756.0024f, -1652.032f, 52.6045f;
			case 11:
				return -1144.993f, -1901.913f, 43.5536f;
			case 12:
				return 1715.549f, 1432.565f, 149.1353f;
			case 13:
				return 1511.118f, 1464.94f, 149.3803f;
			case 16:
				return 2151.582f, -324.508f, 41.2257f;
			case 17:
				return 2418.005f, -454.8427f, 41.4962f;
			case 18:
				return -3221.346f, -3158.854f, -1.2424f;
			case 19:
				return -1821.95f, -2976.88f, -11.8508f;
			case 20:
				return -1787.927f, -2408.416f, 42.8006f;
			default:
				break;
		}
	}
	*(vVar0[0 /*3*/]) = { 0f, 0f, 0f };
	switch (func_163())
	{
		case 0:
			*(vVar0[0 /*3*/]) = { 2237.093f, 1380.931f, 85.2051f };
			*(vVar0[1 /*3*/]) = { 2281.359f, 1331.793f, 87.4576f };
			*(vVar0[2 /*3*/]) = { 2281.359f, 1331.793f, 87.4576f };
			break;
		case 1:
			*(vVar0[0 /*3*/]) = { 2309.382f, 1600.389f, 85.6999f };
			*(vVar0[1 /*3*/]) = { 2309.382f, 1600.389f, 85.6999f };
			*(vVar0[2 /*3*/]) = { 2278.347f, 1583.027f, 90.2505f };
			break;
		case 2:
			*(vVar0[0 /*3*/]) = { 2499.929f, 921.9749f, 74.177f };
			*(vVar0[1 /*3*/]) = { 2499.929f, 921.9749f, 74.177f };
			*(vVar0[2 /*3*/]) = { 2499.929f, 921.9749f, 74.177f };
			break;
		case 3:
			*(vVar0[0 /*3*/]) = { 1060.92f, 581.6669f, 97.0162f };
			*(vVar0[1 /*3*/]) = { 1060.92f, 581.6669f, 97.0162f };
			*(vVar0[2 /*3*/]) = { 1060.92f, 581.6669f, 97.0162f };
			break;
		case 4:
			*(vVar0[0 /*3*/]) = { -749.3711f, -366.9533f, 41.0892f };
			*(vVar0[1 /*3*/]) = { -749.3711f, -366.9533f, 41.0892f };
			*(vVar0[2 /*3*/]) = { -749.3711f, -366.9533f, 41.0892f };
			break;
		case 5:
			*(vVar0[0 /*3*/]) = { -389.5133f, -13.34f, 41.148f };
			*(vVar0[1 /*3*/]) = { -460.9073f, -152.8856f, 40.9957f };
			*(vVar0[2 /*3*/]) = { -396.0391f, -163.0576f, 48.4683f };
			break;
		case 6:
			*(vVar0[0 /*3*/]) = { -2112.213f, -183.2262f, 205.0876f };
			*(vVar0[1 /*3*/]) = { -2084.974f, -139.1795f, 216.9706f };
			*(vVar0[2 /*3*/]) = { -2084.974f, -139.1795f, 216.9706f };
			break;
		case 7:
			*(vVar0[0 /*3*/]) = { -1679.426f, -468.7442f, 152.9432f };
			*(vVar0[1 /*3*/]) = { -1679.426f, -468.7442f, 152.9432f };
			*(vVar0[2 /*3*/]) = { -1704.041f, -464.1898f, 147.6129f };
			break;
		case 8:
			*(vVar0[0 /*3*/]) = { -2669.562f, -330.1496f, 141.9721f };
			*(vVar0[1 /*3*/]) = { -2586.323f, -307.567f, 150.4258f };
			*(vVar0[2 /*3*/]) = { -2630.061f, -262.2281f, 163.2078f };
			break;
		case 9:
			*(vVar0[0 /*3*/]) = { -991.1825f, -898.5116f, 44.3542f };
			*(vVar0[1 /*3*/]) = { -991.1825f, -898.5116f, 44.3542f };
			*(vVar0[2 /*3*/]) = { -991.1825f, -898.5116f, 44.3542f };
			break;
		case 10:
			*(vVar0[0 /*3*/]) = { -758.0438f, -1712.119f, 43.3051f };
			*(vVar0[1 /*3*/]) = { -758.0438f, -1712.119f, 43.3051f };
			*(vVar0[2 /*3*/]) = { -743.8483f, -1743.072f, 43.7966f };
			break;
		case 12:
			*(vVar0[0 /*3*/]) = { 1718.777f, 1512.462f, 147.2264f };
			*(vVar0[1 /*3*/]) = { 1759.737f, 1452.263f, 156.6534f };
			*(vVar0[2 /*3*/]) = { 1715.549f, 1432.565f, 149.1353f };
			break;
		case 14:
			*(vVar0[0 /*3*/]) = { 1218.487f, 1216.578f, 155.7601f };
			*(vVar0[1 /*3*/]) = { 1218.487f, 1216.578f, 155.7601f };
			*(vVar0[2 /*3*/]) = { 1218.487f, 1216.578f, 155.7601f };
			break;
		case 15:
			*(vVar0[0 /*3*/]) = { 1898.424f, -373.1028f, 42.3333f };
			*(vVar0[1 /*3*/]) = { 1898.424f, -373.1028f, 42.3333f };
			*(vVar0[2 /*3*/]) = { 1898.424f, -373.1028f, 42.3333f };
			break;
		case 16:
			*(vVar0[0 /*3*/]) = { 2151.582f, -324.508f, 41.2257f };
			*(vVar0[1 /*3*/]) = { 2175.533f, -291.4925f, 41.669f };
			*(vVar0[2 /*3*/]) = { 2202.655f, -353.7488f, 42.0224f };
			break;
		case 17:
			*(vVar0[0 /*3*/]) = { 2418.005f, -454.8427f, 41.4962f };
			*(vVar0[1 /*3*/]) = { 2418.005f, -454.8427f, 41.4962f };
			*(vVar0[2 /*3*/]) = { 2418.005f, -454.8427f, 41.4962f };
			break;
		case 18:
			*(vVar0[0 /*3*/]) = { -3249.258f, -3132.819f, -7.0835f };
			*(vVar0[1 /*3*/]) = { -3221.346f, -3158.854f, -1.2424f };
			*(vVar0[2 /*3*/]) = { -3208.264f, -3174.166f, -6.574f };
			break;
		case 20:
			*(vVar0[0 /*3*/]) = { -1749.76f, -2354.581f, 41.8165f };
			*(vVar0[1 /*3*/]) = { -1740.252f, -2428.295f, 41.2845f };
			*(vVar0[2 /*3*/]) = { -1787.927f, -2408.416f, 42.8006f };
			break;
	}
	if (func_245(*(vVar0[0 /*3*/]), 0f, 0f, 0f))
	{
		return 0f, 0f, 0f;
	}
	vVar10 = { 0f, 0f, 0f };
	iVar13 = 0;
	while (iVar13 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13)) && func_229(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13))), func_88(), 200f, 1, 1))
		{
			vVar10 = { vVar10 + ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13))), true, false) };
			iVar14++;
		}
		iVar13++;
	}
	vVar10 = { vVar10 / FtoV(IntToFloat(iVar14)) };
	fVar15 = 0f;
	fVar16 = 0f;
	iVar17 = -1;
	iVar13 = 0;
	while (iVar13 <= 2)
	{
		fVar15 = BUILTIN::VDIST2(*(vVar0[iVar13 /*3*/]), vVar10);
		if (fVar15 > fVar16)
		{
			fVar16 = fVar15;
			iVar17 = iVar13;
		}
		iVar13++;
	}
	return *(vVar0[iVar17 /*3*/]);
}

float func_213()
{
	return 0f;
}

int func_214(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_171(iParam1))
	{
		return 0;
	}
	iVar0 = func_246(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
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

void func_215()
{
	int iVar0;

	Local_163.f_18.f_1++;
	if (Local_163.f_18.f_1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_163.f_18.f_1 = 0;
	}
	iVar0 = Local_163.f_18.f_1;
	if (!func_247(4) && func_248(iVar0, 1))
	{
		func_249(4);
	}
	if (!func_247(16) && func_248(iVar0, 2))
	{
		func_249(16);
	}
	if (!func_247(32) && func_248(iVar0, 4))
	{
		func_249(32);
	}
	if (Local_13.f_7 == 2 && (Local_34[iVar0 /*4*/])->f_1 == 4)
	{
		func_218(4);
	}
}

void func_216()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		iVar0++;
	}
}

int func_217()
{
	if (func_247(16) && Local_13.f_7.f_10 != 9)
	{
		func_250(9);
	}
	switch (Local_13.f_7.f_10)
	{
		case 0:
			func_250(1);
			break;
		case 1:
			if (func_247(4))
			{
				func_250(2);
			}
			break;
		case 2:
			if (func_202())
			{
				if (func_229(Local_163.f_18.f_8, func_251(), 5f, 1, 1) || func_252(16))
				{
					func_250(3);
				}
			}
			else if (func_229(Local_163.f_18.f_8, func_251(), 10f, 1, 1) || func_252(16))
			{
				func_250(3);
			}
			break;
		case 3:
			if (func_202())
			{
				func_250(4);
			}
			else if (func_229(Local_163.f_18.f_8, func_251(), 4f, 1, 1) || func_252(32))
			{
				func_250(4);
			}
			break;
		case 4:
			if (func_229(Local_163.f_18.f_8, TASK::_GET_SCENARIO_POINT_COORDS(Local_163.f_18.f_17, 1), 2f, 1, 1) && PED::IS_PED_USING_ANY_SCENARIO(Local_163.f_18.f_8))
			{
				func_250(5);
			}
			break;
		case 5:
			if (Local_13.f_7 >= 4)
			{
				if (func_253(&(Local_13.f_7.f_6), 3000))
				{
					func_254();
					func_250(8);
				}
			}
			else if (func_253(&(Local_13.f_7.f_6), 30000))
			{
				func_254();
				func_250(8);
			}
			break;
		case 6:
			break;
		case 7:
			if (func_253(&(Local_13.f_7.f_6), 10000))
			{
				func_250(9);
			}
			break;
		case 8:
			return 1;
		case 9:
			break;
	}
	return 0;
}

void func_218(int iParam0)
{
	if (Local_13.f_7 == iParam0)
	{
		return;
	}
	Local_13.f_7 = iParam0;
	func_255(&(Local_13.f_7.f_3));
}

int func_219()
{
	return 1;
}

int func_220()
{
	if (func_247(4))
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	if (func_247(32))
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	if (func_252(8))
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	return 1;
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_225(int* iParam0, int iParam1)
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

void func_226(int iParam0)
{
	bool bVar0;

	switch (iParam0->f_9)
	{
		case -713336544:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (Local_13.f_7.f_11 == -1)
				{
					Local_13.f_7.f_11 = iParam0->f_11;
					func_256();
				}
			}
			break;
		case -1213418800:
			if (NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID()) == iParam0->f_11)
			{
				func_232(32);
			}
			else
			{
				func_232(64);
			}
			if (func_228(8))
			{
				func_257(8);
			}
			break;
		case 851346657:
			if (func_228(64))
			{
				func_257(64);
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_11 = -1;
			}
			break;
		case -1571564170:
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[0])))
			{
				func_258();
			}
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_egg_break", func_88(), func_259(), 1f, false, false, false);
			break;
		case 1241867137:
			if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 4))
			{
				func_232(2);
				func_260();
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (Local_13.f_7.f_12 == -1)
				{
					Local_13.f_7.f_12 = iParam0->f_11;
				}
			}
			break;
		case 1649314687:
			bVar0 = func_261();
			Local_163.f_18.f_7 = iParam0->f_1;
			if (bVar0)
			{
				Local_163.f_18.f_9 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_163.f_18.f_8);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_163.f_18.f_8))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_163.f_18.f_8))
				{
					PED::_0xF1C03A5352243A30(Local_163.f_18.f_8);
				}
				if (bVar0)
				{
					TASK::TASK_COMBAT_PED(Local_163.f_18.f_8, PLAYER::GET_PLAYER_PED(Local_163.f_18.f_7), 0, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_163.f_18.f_8, PLAYER::GET_PLAYER_PED(Local_163.f_18.f_7), 3, 0, -1082130432, -1, 0);
				}
			}
			func_232(4);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_249(8);
				if (bVar0)
				{
					func_250(7);
				}
				else
				{
					func_250(6);
				}
			}
			break;
	}
}

struct<2> func_227(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_262(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_263(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

bool func_228(int iParam0)
{
	return func_165(Local_163.f_18, iParam0);
}

int func_229(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_264(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	var uVar0;

	Local_163.f_18.f_10 = TASK::_0x5B4BBE80AD5972DC(func_87(), func_88(), 0f, 0, &uVar0, -1);
	return 1;
}

void func_231()
{
	int iVar0;
	var uVar1[1];
	var uVar3[1];

	uVar1[0] = func_265();
	if (func_267(&(Local_163.f_18.f_11), &uVar1, func_266(), func_88(), 5f) > 0)
	{
		iVar0 = 0;
		while (iVar0 < func_266())
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[iVar0])))
			{
				MAP::_0x7563CBCA99253D1A(&(Local_163.f_18.f_11[iVar0]), 187984275);
				PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), &(Local_163.f_18.f_11[iVar0]), 0);
				PLAYER::_0x6ECFC621A168424C(&(Local_163.f_18.f_11[iVar0]), &(Local_163.f_18.f_11[iVar0]), 0);
			}
			iVar0++;
		}
	}
	uVar1[0] = func_268();
	if (func_267(&uVar3, &uVar1, 1, func_88(), 5f) > 0)
	{
		MAP::_0x7563CBCA99253D1A(&(uVar3[0]), 187984275);
	}
}

void func_232(int iParam0)
{
	func_151(&(Local_163.f_18), iParam0);
}

void func_233()
{
	bool bVar0;

	bVar0 = Local_163.f_18.f_6 != Local_13.f_7.f_10;
	Local_163.f_18.f_6 = Local_13.f_7.f_10;
	func_269(bVar0);
	if ((!func_228(4) && !func_247(8)) && func_270())
	{
		func_232(4);
		func_271();
	}
	if ((Local_13.f_7.f_10 == 4 || Local_13.f_7.f_10 == 5) || Local_13.f_7.f_10 == 8)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Local_163.f_18.f_8);
		func_272(Local_163.f_18.f_8);
	}
	if ((Local_13.f_7.f_10 == 6 && !func_273(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 50f, 1)) && MAP::DOES_BLIP_EXIST(Local_163.f_18.f_9))
	{
		MAP::REMOVE_BLIP(&(Local_163.f_18.f_9));
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_163.f_18.f_8))
	{
		return;
	}
	if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 2) && ENTITY::IS_ENTITY_DEAD(Local_163.f_18.f_8))
	{
		if (MAP::DOES_BLIP_EXIST(Local_163.f_18.f_9))
		{
			MAP::REMOVE_BLIP(&(Local_163.f_18.f_9));
		}
		func_274(2);
	}
	switch (Local_13.f_7.f_10)
	{
		case 0:
			break;
		case 1:
			if (func_202())
			{
				if (!func_275(Local_163.f_18.f_8, 475934052))
				{
					TASK::TASK_FLYING_CIRCLE(Local_163.f_18.f_8, 1f, func_212() + Vector(40f, 0f, 0f), 0f, 2f);
				}
			}
			else if (!func_275(Local_163.f_18.f_8, 923520851))
			{
				TASK::TASK_WANDER_IN_AREA(Local_163.f_18.f_8, ENTITY::GET_ENTITY_COORDS(Local_163.f_18.f_8, true, false), 10f, 1077936128, 1086324736, 0);
			}
			break;
		case 2:
			if (bVar0)
			{
				if (func_202())
				{
					TASK::TASK_FLY_TO_COORD(Local_163.f_18.f_8, func_276(), func_251(), 1, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_163.f_18.f_8, func_251(), func_276(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_229(Local_163.f_18.f_8, func_251(), 5f, 1, 1) && (MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (func_202())
				{
					if (!func_275(Local_163.f_18.f_8, -708058584))
					{
						TASK::TASK_FLY_TO_COORD(Local_163.f_18.f_8, func_276(), func_251(), 1, 0);
					}
				}
				else if (!func_275(Local_163.f_18.f_8, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_163.f_18.f_8, func_251(), func_276(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 16) && func_229(Local_163.f_18.f_8, func_251(), 10f, 1, 1))
			{
				func_274(16);
			}
			break;
		case 3:
			if (bVar0)
			{
				if (!func_202())
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_163.f_18.f_8, func_251(), func_277(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 32) && func_229(Local_163.f_18.f_8, func_251(), 4f, 1, 1))
			{
				func_274(32);
			}
			break;
		case 4:
			if (bVar0)
			{
				TASK::_TASK_USE_SCENARIO_POINT(Local_163.f_18.f_8, Local_163.f_18.f_17, 0, 0, 1, 0, 0, 0, -1082130432, 0);
			}
			break;
		case 5:
			if (bVar0)
			{
			}
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_163.f_18.f_8))
			{
				func_204(&(Local_13.f_7.f_13));
			}
			break;
		case 9:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_163.f_18.f_8))
			{
				func_204(&(Local_13.f_7.f_13));
			}
			break;
	}
}

int func_234()
{
	return 1;
}

void func_235(int iParam0)
{
	if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1 == iParam0)
	{
		return;
	}
	(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1 = iParam0;
	func_255(&(Local_163.f_18.f_2));
}

int func_236()
{
	if (func_229(PLAYER::PLAYER_PED_ID(), func_88(), 60f, 1, 1))
	{
		func_274(1);
		return 1;
	}
	return 0;
}

int func_237()
{
	bool bVar0;

	if (!func_228(2) && Local_13.f_7.f_10 == 8)
	{
		if (!func_228(256))
		{
			if (func_278(3) < 3)
			{
				func_279("NBEGP_H_FAIL");
			}
			func_232(256);
		}
		func_232(2);
	}
	if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 4) && !func_228(2))
	{
		func_280(&(Local_163.f_18.f_19), func_88(), 1, 1, 1);
		if (func_229(Global_34, func_88(), 7f, 1, 1))
		{
			func_281(&(Local_163.f_18.f_28));
		}
		if ((MISC::GET_FRAME_COUNT() % 5) == 0)
		{
			bVar0 = ((Global_1939178->f_38 == 1652431022 && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || func_282());
			func_283(bVar0);
		}
	}
	if (!func_228(16))
	{
		if (((func_273(PLAYER::PLAYER_PED_ID(), &(Local_163.f_18.f_11[0]), 30f, 1) && !ENTITY::IS_ENTITY_OCCLUDED(&(Local_163.f_18.f_11[0]))) || (func_273(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 30f, 1) && !ENTITY::IS_ENTITY_OCCLUDED(Local_163.f_18.f_8))) || func_273(PLAYER::PLAYER_PED_ID(), &(Local_163.f_18.f_11[0]), 3f, 1))
		{
			func_284();
			func_285();
			func_232(16);
		}
	}
	func_286();
	if (func_228(2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[0])))
		{
			func_258();
		}
	}
	if (!func_228(2) && func_287())
	{
		if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 4) && !func_228(2))
		{
			func_288();
			return 1;
		}
	}
	return 0;
}

int func_238()
{
	if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 8) && func_252(8))
	{
		func_260();
		func_258();
	}
	if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 8) && NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID()) == Local_13.f_7.f_12)
	{
		func_289();
		func_291(func_290(), 0);
		func_274(8);
		return 1;
	}
	return 0;
}

int func_239(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_292(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_240(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_292(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_241(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_159(&Var1, uParam0))
	{
		iVar0 = ((func_293() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_242(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_243(int iParam0, int iParam1)
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

void func_244(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 19, &(Global_1051202->f_16[15]));
	func_294(uParam0, uParam0->f_1);
}

bool func_245(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_246(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

bool func_247(int iParam0)
{
	return func_165(Local_13.f_7.f_1, iParam0);
}

bool func_248(int iParam0, int iParam1)
{
	return func_165((Local_34[iParam0 /*4*/])->f_1.f_1, iParam1);
}

void func_249(int iParam0)
{
	func_151(&(Local_13.f_7.f_1), iParam0);
}

void func_250(int iParam0)
{
	if (Local_13.f_7.f_10 == iParam0)
	{
		return;
	}
	Local_13.f_7.f_10 = iParam0;
}

Vector3 func_251()
{
	vector3 vVar0;
	var uVar3;

	if (func_202())
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_88(), func_295(), 4f, 0f, 10f) };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_88(), func_295(), 8f, 0f, 10f) };
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		vVar0 = { vVar0.x, vVar0.y, uVar3 };
	}
	return vVar0;
}

int func_252(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_248(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_253(var uParam0, int iParam1)
{
	if (!func_296(uParam0))
	{
		func_297(uParam0, 0);
		return 0;
	}
	if (func_298(uParam0, iParam1))
	{
		func_299(uParam0);
		return 1;
	}
	return 0;
}

void func_254()
{
	struct<15> Var0;

	Var0 = { func_300(-1571564170) };
	Var0.f_11 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	func_301(&Var0);
}

void func_255(var uParam0)
{
	func_302(uParam0, 0);
}

void func_256()
{
	struct<15> Var0;

	Var0 = { func_300(-1213418800) };
	Var0.f_11 = Local_13.f_7.f_11;
	func_301(&Var0);
}

void func_257(int iParam0)
{
	func_178(&(Local_163.f_18), iParam0);
}

void func_258()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_266())
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[iVar0])))
		{
			OBJECT::DELETE_OBJECT(Local_163.f_18.f_11[iVar0]);
		}
		iVar0++;
	}
}

Vector3 func_259()
{
	return 0f, 0f, 0f;
}

void func_260()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_266())
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[iVar0])))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), &(Local_163.f_18.f_11[iVar0]));
			PLAYER::_0xDC5E09D012D759C4(&(Local_163.f_18.f_11[iVar0]), &(Local_163.f_18.f_11[iVar0]), 0);
		}
		iVar0++;
	}
}

int func_261()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	switch (func_170())
	{
		case joaat("a_c_crow_01"):
		case joaat("a_c_fox_01"):
		case joaat("a_c_vulture_01"):
		case joaat("a_c_raccoon_01"):
		case joaat("a_c_boar_01"):
			return 0;
		case joaat("a_c_coyote_01"):
			return iVar0 < 50;
		case joaat("a_c_wolf"):
			return iVar0 < 100;
		case joaat("a_c_cougar_01"):
			return iVar0 < 100;
		default:
			break;
	}
	return 0;
}

int func_262(int iParam0)
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

struct<2> func_263(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

float func_264(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_265()
{
	switch (func_163())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return -946816685;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return 1390217426;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 755040865;
		default:
			break;
	}
	return 0;
}

int func_266()
{
	switch (func_163())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 5;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return 4;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 3;
		default:
			break;
	}
	return 1;
}

int func_267(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	var uVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_303(uParam0, uParam1, iVar0, iParam2);
	func_304(iVar0);
	return uVar1;
}

int func_268()
{
	switch (func_163())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 420299933;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1824227939;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return -235579763;
		default:
			break;
	}
	return 0;
}

void func_269(bool bParam0)
{
	if (bParam0)
	{
		if ((Local_13.f_7.f_10 == 2 || Local_13.f_7.f_10 == 4) || Local_13.f_7.f_10 == 5)
		{
			if (!func_228(128))
			{
				if (func_278(3) < 3)
				{
					func_279("NBEGP_H_INVESTIGATE");
				}
				func_232(128);
			}
			func_284();
			func_305(-342321975, Local_163.f_18.f_8, 1);
		}
	}
	if (Local_13.f_7.f_10 == 5)
	{
		if (func_296(&(Local_13.f_7.f_6)) && func_306(&(Local_13.f_7.f_6)) > (4000 * Local_163.f_18.f_5 + 1))
		{
			Local_163.f_18.f_5++;
			func_305(-342321975, Local_163.f_18.f_8, 1);
		}
	}
}

int func_270()
{
	if (!func_273(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 75f, 1))
	{
		return 0;
	}
	if (func_273(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 4f, 1))
	{
		return 1;
	}
	if ((!func_202() && func_273(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 8f, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_163.f_18.f_8, PLAYER::PLAYER_PED_ID(), 17))
	{
		return 1;
	}
	if (PED::_0x285D36C5C72B0569(PLAYER::PLAYER_PED_ID()) < 0.5f)
	{
		if (func_202())
		{
			return 1;
		}
		else if (func_273(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 60f, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_271()
{
	struct<15> Var0;

	Var0 = { func_300(1649314687) };
	func_301(&Var0);
}

void func_272(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

int func_273(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

void func_274(int iParam0)
{
	func_151(&((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1), iParam0);
}

int func_275(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

float func_276()
{
	switch (func_164())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			return 1.5f;
		case 2:
		case 5:
			return 2f;
		default:
			break;
	}
	return 1.5f;
}

float func_277()
{
	switch (func_164())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			return 1f;
		case 2:
		case 5:
			return 1.5f;
		default:
			break;
	}
	return 1f;
}

int func_278(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_227(iParam0, -1797584255) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

int func_279(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	return func_307(sParam0, 10000, 0, 0, 0, 1);
}

void func_280(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_308(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
	{
		return;
	}
	if (func_309(0))
	{
		return;
	}
	if (func_310())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_139(*Global_1201104) && MISC::GET_DISTANCE_BETWEEN_COORDS(*Global_1201104, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_311(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_312()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = AUDIO::GET_SOUND_ID();
						if (func_313(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != -862059856)
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_314(uParam0, 1);
					}
				}
				else
				{
					func_314(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_315(&(uParam0->f_2));
			func_314(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_316(uParam0);
				}
				func_314(uParam0, 0);
			}
			else if (func_317(&(uParam0->f_2)) >= 2f)
			{
				func_314(uParam0, 1);
			}
			break;
	}
}

void func_281(var uParam0)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (HUD::_UIPROMPT_IS_CONTROL_ACTION_ACTIVE(joaat("INPUT_LOOT3")))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

bool func_282()
{
	return (Global_1140484->f_18706[50 /*195*/])->f_194;
}

void func_283(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_266())
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[iVar0])))
		{
			if (bParam0)
			{
				PLAYER::_0x907B16B3834C69E2(&(Local_163.f_18.f_11[iVar0]), 500f);
			}
			else
			{
				PLAYER::_0x907B16B3834C69E2(&(Local_163.f_18.f_11[iVar0]), 100f);
			}
		}
		iVar0++;
	}
}

void func_284()
{
	int iVar0;

	if (!func_101(32, 255))
	{
		func_318(Local_163.f_1, Local_163.f_3);
		if (!func_101(1024, 255))
		{
			func_319(Local_163.f_1);
			func_121(1024);
		}
		iVar0 = func_200(Local_163.f_1, Local_163.f_2);
		func_320(iVar0);
		func_321(iVar0);
		func_116(2);
		func_322(Local_163.f_9);
		func_323(Local_163.f_1);
		func_121(32);
	}
}

void func_285()
{
	if (!func_60(2))
	{
		return;
	}
	func_116(8);
}

void func_286()
{
	if ((!func_228(32) && !func_228(64)) && !func_228(8))
	{
		if (func_324())
		{
			func_325();
			func_232(8);
		}
	}
	if (func_228(32) && !func_324())
	{
		func_326();
		func_257(32);
	}
	if (func_228(64) || func_228(2))
	{
		MISC::_0x082C043C7AFC3747(Local_163.f_18.f_10, 1);
	}
}

int func_287()
{
	var uVar0;

	if (ENTITY::GET_ENTITY_MODEL(func_327(PLAYER::PLAYER_PED_ID(), 0)) != func_268())
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(PLAYER::PLAYER_PED_ID(), 0, &uVar0, 1, 1) != 8)
	{
		return 0;
	}
	return 1;
}

void func_288()
{
	struct<15> Var0;

	func_274(4);
	Var0 = { func_300(1241867137) };
	Var0.f_11 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	func_301(&Var0);
}

void func_289()
{
	if (!func_60(8))
	{
		return;
	}
	func_116(16);
}

int func_290()
{
	switch (func_163())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 1510925660;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1390165137;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 1824947548;
		default:
			break;
	}
	return 0;
}

int func_291(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_328(&Var4, 1356624740);
	return func_329(iParam0, &Var4, &uVar0, iParam1);
}

int func_292(struct<2> Param0, var uParam2)
{
	if (!func_36(Param0))
	{
		return 0;
	}
	func_330(uParam2);
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

int func_293()
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

void func_294(var uParam0, var uParam1)
{
}

float func_295()
{
	return (func_183() - 90f);
}

bool func_296(var uParam0)
{
	return func_331(*uParam0, 1);
}

void func_297(var uParam0, bool bParam1)
{
	if (bParam1 || !func_296(uParam0))
	{
		func_255(uParam0);
	}
}

int func_298(var uParam0, int iParam1)
{
	if (!func_296(uParam0))
	{
		return 0;
	}
	if (func_306(uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_299(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

struct<15> func_300(int iParam0)
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

void func_301(var uParam0)
{
	func_333(uParam0, func_332(4, 117));
}

void func_302(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_334(uParam0, 1);
	func_335(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_303(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if (uParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == uParam1[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_304(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_305(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, uParam1);
}

int func_306(var uParam0)
{
	if (!func_296(uParam0))
	{
		return 0;
	}
	if (func_336(uParam0))
	{
		return uParam0->f_2;
	}
	return func_337(uParam0->f_1);
}

var func_307(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_308(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_338(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_339(iParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_340(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_341(iParam0))
			{
				return true;
			}
			break;
	}
	return func_342(iParam0, 0, 0, 0) >= iParam1;
}

bool func_309(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

bool func_310()
{
	return func_343() != -1;
}

float func_311(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_312()
{
	return (Global_1140484->f_2001[82 /*192*/])->f_188;
}

int func_313(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_314(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_315(var uParam0)
{
	func_344(uParam0, 0f);
}

void func_316(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		AUDIO::_0x0F2A2175734926D8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_5 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

float func_317(var uParam0)
{
	if (!func_345(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_346(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_347() - uParam0->f_1);
}

void func_318(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_227(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_92(&Var0, 4) && func_348(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_319(int iParam0)
{
	func_349();
	func_350(iParam0);
}

void func_320(int iParam0)
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
	func_351(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_99((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_352(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_352(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_352(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_352(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_321(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_244(&Var0);
}

void func_322(struct<2> Param0)
{
	struct<32> Var0;

	if (func_198(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_198(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_198(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_353(Param0, &Var0))
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

void func_323(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_227(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

int func_324()
{
	int iVar0;
	int iVar1;

	iVar1 = PED::_0x5463C962BC7777C3(PLAYER::PLAYER_PED_ID(), 0, &iVar0, 1, 0);
	if (ENTITY::GET_ENTITY_MODEL(iVar0) != func_268())
	{
		return 0;
	}
	if ((iVar1 != 4 && iVar1 != 6) && iVar1 != 8)
	{
		return 0;
	}
	return 1;
}

void func_325()
{
	struct<15> Var0;

	Var0 = { func_300(-713336544) };
	Var0.f_11 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	func_301(&Var0);
}

void func_326()
{
	struct<15> Var0;

	Var0 = { func_300(851346657) };
	func_301(&Var0);
}

int func_327(int iParam0, int iParam1)
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

void func_328(var uParam0, int iParam1)
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

int func_329(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_354(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_355(uParam2, iParam0, Var1);
	return 1;
}

void func_330(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_331(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_332(int iParam0, int iParam1)
{
	return func_356(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_333(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 40, &uParam1);
}

void func_334(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_335(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_336(var uParam0)
{
	return func_331(*uParam0, 2);
}

int func_337(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_338(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_339(int iParam0)
{
	vector3 vVar0;

	if (!func_338(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_340(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_338(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_357(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_358("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_359(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_360(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_361(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_361(iVar1);
	}
	return 0;
}

bool func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_338(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_362(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_363(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_364(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_365(iParam0);
	iVar2 = func_364(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_342(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_338(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_339(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_357(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_366(iParam0, 0);
	}
	if (func_367(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_368(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_369(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_368(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_343()
{
	return Global_1132549->f_137;
}

void func_344(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_347() - fParam1);
	func_334(uParam0, 1);
	func_335(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_345(var uParam0)
{
	return func_331(*uParam0, 1);
}

bool func_346(var uParam0)
{
	return func_331(*uParam0, 2);
}

float func_347()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_348(int iParam0)
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

void func_349()
{
	func_99(&(Global_1245803->f_2003));
}

void func_350(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_227(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_351(int iParam0, int iParam1, int iParam2)
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

struct<2> func_352(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_353(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_292(Param0, &vVar0);
	if (func_370(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

void func_354(var uParam0)
{
	func_328(uParam0, 143479330);
	if (func_371() == 2026485318)
	{
		func_328(uParam0, 617531372);
	}
	else
	{
		func_328(uParam0, 291123060);
	}
}

void func_355(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_372(uParam0))
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

var func_356(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_373() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_374());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_374());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_374());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_375(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_376(iVar2))
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
				if (iVar9 & 8192 != 0 && func_377(iVar2) != 1)
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
					if (!func_378(iVar10))
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

int func_357(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_338(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_379(iParam0, 1399091007))
	{
		func_380(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_358(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_368(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_359(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_360(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_361(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_362(int iParam0)
{
	struct<2> Var0;

	if (!func_338(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428: /* GXTEntry: "No Foundation" */
			return -2056583192;
		case 1710247623: /* GXTEntry: "No Blush" */
			return 1015239729;
		case 1964684696: /* GXTEntry: "No Eye Liner" */
			return -340627321;
		case -2087489409: /* GXTEntry: "No Eye Shadow" */
			return -875805376;
		case -860557048: /* GXTEntry: "No Lipstick" */
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_364(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_365(int iParam0)
{
	int iVar0;

	iVar0 = func_362(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_366(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_381(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_383(&Var0, func_382(0));
	}
	if (!func_384(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_361(iVar14);
	return uVar15;
}

int func_367(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_368(bool bParam0)
{
	if (func_28() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

struct<4> func_369(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_385(iParam0, bParam1, 0) };
	return func_386(iParam0, Var0, Var0.f_4, bParam1);
}

int func_370(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_387(iParam0))
	{
		return 0;
	}
	if (func_388(iParam0, uParam1, &uVar0))
	{
		func_389(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_371()
{
	return Global_1951141->f_1;
}

int func_372(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_373()
{
	return Global_1051202->f_12;
}

char* func_374()
{
	return "unnamed";
}

int func_375(int iParam0)
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

int func_376(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_390(35, iParam0);
}

int func_377(int iParam0)
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

bool func_378(int iParam0)
{
	if (func_391(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_392(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_379(int iParam0, int iParam1)
{
	if (!func_338(iParam0, 0))
	{
		return func_394(func_393(iParam0), iParam1);
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

void func_380(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_381(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_382(bool bParam0)
{
	int iVar0;

	iVar0 = func_368(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_386(923904168, func_395(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_386(923904168, func_395(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_386(923904168, func_395(bParam0), -740156546, 0);
}

void func_383(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_384(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_368(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<5> func_385(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_395(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_339(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_386(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_382(bParam1) };
			if (iParam2 && func_396(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_397(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_397(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_398(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_399(bParam1) };
			switch (func_362(iParam0))
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
			if (func_400(iParam0, -1823706425))
			{
				Var0 = { func_386(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_400(iParam0, -1483207246))
			{
				Var0 = { func_386(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_386(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_400(iParam0, -1653629781))
			{
				Var0 = { func_386(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_401(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_400(iParam0, -1653629781))
			{
				Var0 = { func_386(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_386(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_338(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_368(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_387(int iParam0)
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

bool func_388(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_402(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_389(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_403(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_404(iVar0);
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
			uParam2->f_5 = func_405(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_406(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_407(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_408(iVar0);
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

int func_390(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_409(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_410())
	{
		return func_409(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_409(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_391(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_392(int iParam0)
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
		func_411(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_412(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_393(int iParam0)
{
	return iParam0;
}

int func_394(int iParam0, int iParam1)
{
	if (!func_413(iParam0, 2))
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

struct<4> func_395(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_368(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_386(joaat("character"), func_414(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_386(joaat("character"), func_414(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_386(joaat("character"), func_414(), -1591664384, bParam0);
}

int func_396(int iParam0, bool bParam1)
{
	if (func_362(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_415();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_397(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_416(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_398(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_417(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_399(bool bParam0)
{
	int iVar0;

	iVar0 = func_368(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_386(271701509, func_395(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_386(271701509, func_395(bParam0), 12999093, 0);
}

int func_400(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_362(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_418(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_401(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_419(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_402(int iParam0)
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

int func_403(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_420(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_404(int iParam0)
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

int func_405(int iParam0)
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

int func_406(int iParam0)
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

int func_407(int iParam0)
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

int func_408(int iParam0)
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

bool func_409(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_410()
{
	return Global_1099294->f_339;
}

void func_411(int iParam0)
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
	func_412(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_412(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_413(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

struct<4> func_414()
{
	struct<4> Var0;

	return Var0;
}

bool func_415()
{
	return (func_421(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_422(func_386(889965687 /* GXTEntry: "Wardrobe" */, func_395(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_416(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_338(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_367(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_386(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_368(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_368(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_417(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_368(0);
	*uParam1 = { func_386(iParam0, func_382(0), iParam3, 0) };
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

int func_418(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_419(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_368(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_420(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_423(iParam0, uParam1, &uVar0))
	{
		func_424(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_421(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_425(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_368(bParam1), iParam0, iParam3);
}

int func_422(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_426(&uParam0, iParam4, bParam5, iParam6);
}

bool func_423(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_402(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_424(var uParam0, int iParam1, var uParam2)
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

bool func_425(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_426(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_427(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_427(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_368(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_419(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

