#region Local Var
	struct<8> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_8 = 1;
	var uLocal_9 = 0;
	vector3 vLocal_10[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<19> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_126 = 0;
	var uLocal_127 = 1;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 7;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = -1;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	var uLocal_150 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_148 = 1f;
	fLocal_149 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 10, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_0), 10, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_10, 97, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(vLocal_10[0 /*3*/]), 97, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(struct<5> Param0)
{
	if (Local_0 == 6)
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
	else if (func_17(Local_107.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_107.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_107.f_12), Local_107.f_9))
	{
		return 1;
	}
	else if (Local_107.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_107, &uParam0, 5);
	iVar19 = func_30(&bVar18, Local_107.f_1, Local_107.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_107.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_31(&Var0, Local_107.f_1, Local_107.f_2, Local_107.f_3, iVar17);
	Local_107.f_9 = { func_32(Var0.f_5, 8) };
	Local_107.f_14 = Var0.f_5;
	Local_107.f_15 = { Var0.f_11 };
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
	if (Local_0 <= 5)
	{
		func_40();
	}
	switch (Local_0)
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
	if (Local_107.f_8 <= 5)
	{
		func_48();
	}
	switch (Local_107.f_8)
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
		if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_0.f_3.f_1);
		}
	}
	func_56();
}

void func_26()
{
}

void func_27()
{
	if (Local_107.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_57(Local_107.f_12, 4);
		}
	}
	func_58();
	if (func_59(32))
	{
		func_60(Local_0.f_6);
	}
	func_61();
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
	func_62(&Var0, Var26);
	iVar25 = func_63(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_64(iVar25) };
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
			func_65(uParam0, iParam2);
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
			func_66(uParam0);
			switch (iParam2)
			{
				case 0:
					func_67(uParam0);
					uParam0->f_5 = 277430601;
					uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_67(uParam0);
					uParam0->f_5 = 1659133778;
					uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_67(uParam0);
					uParam0->f_5 = 1296650927;
					uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_67(uParam0);
					uParam0->f_5 = 2115437634;
					uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_67(uParam0);
					uParam0->f_5 = 1098622970;
					uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_67(uParam0);
					uParam0->f_5 = 393263596;
					uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_67(uParam0);
					uParam0->f_5 = 189453630;
					uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_67(uParam0);
					uParam0->f_5 = -98921343;
					uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_67(uParam0);
					uParam0->f_5 = 6025033;
					uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_67(uParam0);
					uParam0->f_5 = -1060299979;
					uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_67(uParam0);
					uParam0->f_5 = 682088681;
					uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_67(uParam0);
					uParam0->f_5 = 1705841922;
					uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_67(uParam0);
					uParam0->f_5 = -301205165;
					uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_67(uParam0);
					uParam0->f_5 = 1906160715;
					uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_67(uParam0);
					uParam0->f_5 = -1129906020;
					uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_67(uParam0);
					uParam0->f_5 = 1592980994;
					uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_67(uParam0);
					uParam0->f_5 = 686459378;
					uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_67(uParam0);
					uParam0->f_5 = -259262381;
					uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_67(uParam0);
					uParam0->f_5 = 1289806844;
					uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_67(uParam0);
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
			func_66(uParam0);
			switch (iParam2)
			{
				case 0:
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
					uParam0->f_5 = 1454566440;
					uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
					uParam0->f_5 = 1141360338;
					uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
					uParam0->f_5 = 844768119;
					uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_68(uParam0, 0);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 4);
					func_68(uParam0, 5);
					func_68(uParam0, 7);
					uParam0->f_5 = -1601993562;
					uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_68(uParam0, 0);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
					func_68(uParam0, 7);
					uParam0->f_5 = -901588956;
					uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_68(uParam0, 0);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
					func_68(uParam0, 7);
					uParam0->f_5 = 2129019244;
					uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_68(uParam0, 0);
					func_68(uParam0, 2);
					func_68(uParam0, 4);
					func_68(uParam0, 5);
					func_68(uParam0, 6);
					uParam0->f_5 = 1227099802;
					uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_68(uParam0, 0);
					func_68(uParam0, 2);
					func_68(uParam0, 4);
					func_68(uParam0, 5);
					func_68(uParam0, 6);
					uParam0->f_5 = -940471213;
					uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_68(uParam0, 0);
					func_68(uParam0, 2);
					func_68(uParam0, 4);
					func_68(uParam0, 5);
					func_68(uParam0, 6);
					uParam0->f_5 = -700569364;
					uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					uParam0->f_5 = 412376369;
					uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_68(uParam0, 0);
					func_68(uParam0, 2);
					func_68(uParam0, 5);
					func_68(uParam0, 7);
					uParam0->f_5 = -364052317;
					uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					uParam0->f_5 = -989186530;
					uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_68(uParam0, 0);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 4);
					func_68(uParam0, 5);
					func_68(uParam0, 6);
					uParam0->f_5 = 333858683;
					uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					uParam0->f_5 = -39511303;
					uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_68(uParam0, 3);
					func_68(uParam0, 4);
					func_68(uParam0, 5);
					func_68(uParam0, 6);
					uParam0->f_5 = 813662381;
					uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
					func_68(uParam0, 7);
					uParam0->f_5 = -1114006686;
					uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
					func_68(uParam0, 7);
					uParam0->f_5 = 1049238845;
					uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
					func_68(uParam0, 7);
					uParam0->f_5 = 1363886783;
					uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
					uParam0->f_5 = -1215674354;
					uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					uParam0->f_5 = 1902132155;
					uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 5);
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
			func_66(uParam0);
			uParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_67(uParam0);
					uParam0->f_5 = 1382777618;
					uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_67(uParam0);
					uParam0->f_5 = -2000681184;
					uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_67(uParam0);
					uParam0->f_5 = 886884092;
					uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_67(uParam0);
					uParam0->f_5 = -1277120723;
					uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_67(uParam0);
					uParam0->f_5 = 1577436816;
					uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_67(uParam0);
					uParam0->f_5 = -234749781;
					uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_67(uParam0);
					uParam0->f_5 = -1607623039;
					uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_67(uParam0);
					uParam0->f_5 = -1943295936;
					uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_67(uParam0);
					uParam0->f_5 = -397730168;
					uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_67(uParam0);
					uParam0->f_5 = -392659534;
					uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_67(uParam0);
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
			func_66(uParam0);
			switch (iParam2)
			{
				case 0:
					func_67(uParam0);
					uParam0->f_5 = 1247886914;
					uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_67(uParam0);
					uParam0->f_5 = 1926100410;
					uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_67(uParam0);
					uParam0->f_5 = 603340011;
					uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_67(uParam0);
					uParam0->f_5 = -1253915394;
					uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_67(uParam0);
					uParam0->f_5 = 1281783573;
					uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_67(uParam0);
					uParam0->f_5 = -1384936716;
					uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_67(uParam0);
					uParam0->f_5 = 636669604;
					uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_67(uParam0);
					uParam0->f_5 = 1410575087;
					uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_67(uParam0);
					uParam0->f_5 = -736919321;
					uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_67(uParam0);
					uParam0->f_5 = 1755496218;
					uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_67(uParam0);
					uParam0->f_5 = -1810033095;
					uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_67(uParam0);
					uParam0->f_5 = 99707271;
					uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_67(uParam0);
					uParam0->f_5 = 2145033839;
					uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_67(uParam0);
					uParam0->f_5 = -994111457;
					uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_67(uParam0);
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
					func_69(uParam0, 0);
					func_69(uParam0, 1);
					func_69(uParam0, 4);
					func_69(uParam0, 5);
					break;
				case 1:
					func_69(uParam0, 2);
					func_69(uParam0, 3);
					func_69(uParam0, 6);
					func_69(uParam0, 7);
					func_70(uParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_68(uParam0, 0);
					uParam0->f_5 = -88606612;
					uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_68(uParam0, 1);
					uParam0->f_5 = -1507537085;
					uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_68(uParam0, 0);
					uParam0->f_5 = 150331424;
					uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_68(uParam0, 1);
					uParam0->f_5 = -74168995;
					uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_68(uParam0, 0);
					uParam0->f_5 = -1303456769;
					uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_68(uParam0, 1);
					uParam0->f_5 = 2080696176;
					uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_68(uParam0, 0);
					uParam0->f_5 = -801880493;
					uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_68(uParam0, 1);
					uParam0->f_5 = -2098877513;
					uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_68(uParam0, 0);
					uParam0->f_5 = -985131289;
					uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_68(uParam0, 1);
					uParam0->f_5 = 171385032;
					uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_68(uParam0, 0);
					uParam0->f_5 = -690365399;
					uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_68(uParam0, 1);
					uParam0->f_5 = -393773180;
					uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_68(uParam0, 0);
					uParam0->f_5 = 1783045643;
					uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_68(uParam0, 1);
					uParam0->f_5 = -1841828372;
					uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_68(uParam0, 0);
					uParam0->f_5 = -1926357119;
					uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_68(uParam0, 1);
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
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
					uParam0->f_5 = 666420762;
					uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 8);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
					uParam0->f_5 = 1145423923;
					uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 4);
					func_68(uParam0, 5);
					func_68(uParam0, 6);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
					uParam0->f_5 = -1176575305;
					uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
					uParam0->f_5 = -888961792;
					uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
					uParam0->f_5 = -1145898130;
					uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 4);
					func_68(uParam0, 7);
					func_68(uParam0, 8);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
					uParam0->f_5 = -264936334;
					uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 3);
					func_68(uParam0, 6);
					func_68(uParam0, 7);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
					uParam0->f_5 = -562839313;
					uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 4);
					func_68(uParam0, 5);
					func_68(uParam0, 6);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
					uParam0->f_5 = -819926700;
					uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_68(uParam0, 0);
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
					uParam0->f_5 = -100890882;
					uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_68(uParam0, 1);
					func_68(uParam0, 2);
					func_68(uParam0, 5);
					func_68(uParam0, 9);
					func_68(uParam0, 10);
					func_68(uParam0, 11);
					func_71(uParam0, iParam3);
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
			func_66(uParam0);
			switch (iParam2)
			{
				case 0:
					func_67(uParam0);
					uParam0->f_5 = -1562903685;
					uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_67(uParam0);
					uParam0->f_5 = 442262250;
					uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_67(uParam0);
					uParam0->f_5 = 2113001754;
					uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_67(uParam0);
					uParam0->f_5 = 222101843;
					uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_67(uParam0);
					uParam0->f_5 = 862535295;
					uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_67(uParam0);
					uParam0->f_5 = 267494763;
					uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_67(uParam0);
					uParam0->f_5 = 492498900;
					uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_67(uParam0);
					uParam0->f_5 = -735417347;
					uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_67(uParam0);
					uParam0->f_5 = 2000289900;
					uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_67(uParam0);
					uParam0->f_5 = 1820563970;
					uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_67(uParam0);
					uParam0->f_5 = 1501808210;
					uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_67(uParam0);
					uParam0->f_5 = -1103422576;
					uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_67(uParam0);
					uParam0->f_5 = -375108461;
					uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_67(uParam0);
					uParam0->f_5 = 1074344160;
					uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_67(uParam0);
					uParam0->f_5 = 1375567406;
					uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_67(uParam0);
					uParam0->f_5 = 1695022182;
					uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_67(uParam0);
					uParam0->f_5 = 1773241795;
					uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_67(uParam0);
					uParam0->f_5 = 1650499101;
					uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_67(uParam0);
					uParam0->f_5 = 149116609;
					uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_67(uParam0);
					uParam0->f_5 = 1486166046;
					uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_67(uParam0);
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
			func_66(uParam0);
			func_70(uParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_67(uParam0);
					uParam0->f_5 = -1657923088;
					uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_67(uParam0);
					uParam0->f_5 = -1268232386;
					uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_67(uParam0);
					uParam0->f_5 = 1926851120;
					uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_67(uParam0);
					uParam0->f_5 = -66052340;
					uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_67(uParam0);
					uParam0->f_5 = 1738334804;
					uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_67(uParam0);
					uParam0->f_5 = 1009780912;
					uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_67(uParam0);
					uParam0->f_5 = -1560771476;
					uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_67(uParam0);
					uParam0->f_5 = 453813335;
					uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_67(uParam0);
					uParam0->f_5 = 786924542;
					uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_67(uParam0);
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
					func_72(uParam0, iParam3);
					uParam0->f_5 = 1323108111;
					uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_72(uParam0, iParam3);
					uParam0->f_5 = -1505479200;
					uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_72(uParam0, iParam3);
					uParam0->f_5 = -1283075997;
					uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_72(uParam0, iParam3);
					uParam0->f_5 = -2100531475;
					uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_72(uParam0, iParam3);
					uParam0->f_5 = 269617530;
					uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_72(uParam0, iParam3);
					uParam0->f_5 = 1592829750;
					uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_72(uParam0, iParam3);
					uParam0->f_5 = 1817985549;
					uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_72(uParam0, iParam3);
					uParam0->f_5 = 1945424739;
					uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_72(uParam0, iParam3);
					uParam0->f_5 = 1787314318;
					uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_72(uParam0, iParam3);
					uParam0->f_5 = 542354442;
					uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_72(uParam0, iParam3);
					uParam0->f_5 = 1510776727;
					uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_72(uParam0, iParam3);
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
			func_66(uParam0);
			switch (iParam2)
			{
				case 0:
					func_67(uParam0);
					uParam0->f_5 = -377638420;
					uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_67(uParam0);
					uParam0->f_5 = 1308799438;
					uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_67(uParam0);
					uParam0->f_5 = -1030922940;
					uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_67(uParam0);
					uParam0->f_5 = 1750043358;
					uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_67(uParam0);
					uParam0->f_5 = -1330609910;
					uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_67(uParam0);
					uParam0->f_5 = 223942444;
					uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_67(uParam0);
					uParam0->f_5 = 1067547121;
					uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_67(uParam0);
					uParam0->f_5 = -450732096;
					uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_67(uParam0);
					uParam0->f_5 = -1701940764;
					uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_67(uParam0);
					uParam0->f_5 = 1584258975;
					uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_67(uParam0);
					uParam0->f_5 = -98183174;
					uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_67(uParam0);
					uParam0->f_5 = -90261849;
					uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_67(uParam0);
					uParam0->f_5 = 754522971;
					uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_67(uParam0);
					uParam0->f_5 = 974542513;
					uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_67(uParam0);
					uParam0->f_5 = -790885273;
					uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_67(uParam0);
					uParam0->f_5 = -1447045452;
					uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_67(uParam0);
					uParam0->f_5 = -586115209;
					uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_67(uParam0);
					uParam0->f_5 = 224941020;
					uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_67(uParam0);
					uParam0->f_5 = -1179654578;
					uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_67(uParam0);
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
			func_66(uParam0);
			uParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_67(uParam0);
					uParam0->f_5 = 974582605;
					uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_67(uParam0);
					uParam0->f_5 = -964359125;
					uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_67(uParam0);
					uParam0->f_5 = -700339292;
					uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_67(uParam0);
					uParam0->f_5 = -470300912;
					uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_67(uParam0);
					uParam0->f_5 = -241343909;
					uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_67(uParam0);
					uParam0->f_5 = 1944053474;
					uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_67(uParam0);
					uParam0->f_5 = -2120646059;
					uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_67(uParam0);
					uParam0->f_5 = -1656440405;
					uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_67(uParam0);
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
			func_66(uParam0);
			func_70(uParam0, 1);
			func_70(uParam0, 4);
			func_70(uParam0, 8);
			func_70(uParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_67(uParam0);
					uParam0->f_5 = -1623035253;
					uParam0->f_11 = { func_74(func_73(iParam4)) };
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
					func_75(uParam0, iParam3);
					uParam0->f_5 = -1957221189;
					uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 871956008;
					uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_75(uParam0, iParam3);
					uParam0->f_5 = -718829908;
					uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_75(uParam0, iParam3);
					uParam0->f_5 = -478076065;
					uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 158131441;
					uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_75(uParam0, iParam3);
					uParam0->f_5 = 575051428;
					uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_75(uParam0, iParam3);
					uParam0->f_5 = -861587350;
					uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_75(uParam0, iParam3);
					uParam0->f_5 = -616671844;
					uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_75(uParam0, iParam3);
					uParam0->f_5 = -828875274;
					uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_75(uParam0, iParam3);
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
			func_66(uParam0);
			switch (iParam2)
			{
				case 0:
					func_67(uParam0);
					uParam0->f_5 = 2136361638;
					uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_67(uParam0);
					uParam0->f_5 = 1948005426;
					uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_67(uParam0);
					uParam0->f_5 = 462368629;
					uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_67(uParam0);
					uParam0->f_5 = -172629291;
					uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_67(uParam0);
					uParam0->f_5 = 1063777848;
					uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_67(uParam0);
					uParam0->f_5 = -267241827;
					uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_67(uParam0);
					uParam0->f_5 = -1183266453;
					uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_67(uParam0);
					uParam0->f_5 = -877826604;
					uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_67(uParam0);
					uParam0->f_5 = 1527533302;
					uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_67(uParam0);
					uParam0->f_5 = -865586768;
					uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_67(uParam0);
					uParam0->f_5 = 294379466;
					uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_67(uParam0);
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
			iVar17 = func_76(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				uParam0->f_7 = 1;
			}
			*uParam0 = func_77(iVar17);
			uParam0->f_1 = 0;
			uParam0->f_6 = 2;
			func_70(uParam0, 32);
			if (iParam2 != -1)
			{
				uParam0->f_9 = func_79(func_78(iVar17), iParam2);
				uParam0->f_15 = func_80(func_78(iVar17), iParam2);
				uParam0->f_5 = func_81(iVar17, iParam2);
				uParam0->f_11 = { func_82(iVar17, iParam2) };
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
			Var0.f_1 = func_84(iParam0, &(Global_1070356->f_634), func_83(iParam1));
			break;
		case 3:
			Var0.f_1 = func_84(iParam0, &(Global_1070356->f_634.f_602), func_83(iParam1));
			break;
		case 4:
			Var0.f_1 = func_84(iParam0, &(Global_1070356->f_634.f_2104), func_83(iParam1));
			break;
		case 5:
			Var0.f_1 = func_84(iParam0, &(Global_1070356->f_634.f_12606), func_83(iParam1));
			break;
		case 6:
			Var0.f_1 = func_84(iParam0, &(Global_1070356->f_634.f_12908), func_83(iParam1));
			break;
		case 7:
			Var0.f_1 = func_84(iParam0, &(Global_1070356->f_634.f_15910), func_83(iParam1));
			break;
		case 8:
			Var0.f_1 = func_84(iParam0, &(Global_1070356->f_634.f_15981), func_83(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_85();
	}
	return Var0;
}

void func_33()
{
}

void func_34()
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
}

void func_35()
{
}

int func_36(struct<2> Param0)
{
	if (!func_86(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_83(Param0))
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

	iVar0 = (Global_1186267->f_231.f_1066[Local_107.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_31(&Var1, Local_107.f_1, Local_107.f_2, Local_107.f_3, iVar0);
	if (!func_87(&Var1, 1))
	{
		func_88(1);
		return;
	}
	Local_0.f_6 = func_73(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_89(256);
	if (func_90(Local_0.f_6))
	{
		func_91(5);
		func_88(6);
	}
	else
	{
		func_88(1);
	}
}

void func_42()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_31(&Var0, Local_107.f_1, Local_107.f_2, -1, 255);
	if (func_87(&Var0, 1))
	{
		func_88(2);
		return;
	}
	if (func_92(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_107.f_15, Var0.f_10, 2442122);
		func_88(2);
	}
	else if (bVar17)
	{
		func_91(3);
		func_88(6);
	}
	if (!func_93(Local_0.f_3.f_2))
	{
		func_94(&(Local_0.f_3.f_2));
	}
	else if (func_95(Local_0.f_3.f_2) > 45000)
	{
		func_91(4);
		func_88(6);
	}
}

void func_43()
{
	if (func_96(1, 255))
	{
		if (!func_97(1))
		{
			if (func_98())
			{
				func_89(1);
			}
		}
		else
		{
			func_99();
			func_88(3);
		}
	}
}

void func_44()
{
	bool bVar0;

	if (func_96(2, 255))
	{
		if (!func_97(2))
		{
			bVar0 = true;
			if (!func_100())
			{
				bVar0 = false;
			}
			if (!func_101())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_89(2);
			}
		}
		else
		{
			func_102();
			func_88(4);
		}
	}
}

void func_45()
{
	func_103();
	func_104();
	func_105();
	if (func_106() || Local_0.f_2 != 0)
	{
		func_107();
		func_88(5);
	}
}

void func_46()
{
	if (func_96(4, 255))
	{
		if (func_108())
		{
			func_89(4);
			func_88(6);
		}
	}
}

void func_47()
{
	if (!func_97(256))
	{
		return;
	}
	if (func_97(512))
	{
		if (func_59(32) && func_73(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_60(Local_0.f_6);
			func_109(32);
		}
	}
	else if (!func_59(32))
	{
		if (func_73(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_110(Local_0.f_6, 1, 1);
			func_111(32);
		}
	}
	else if (func_73(PLAYER::PLAYER_ID()) != Local_0.f_6)
	{
		func_60(Local_0.f_6);
		func_109(32);
	}
}

void func_48()
{
	func_112();
}

void func_49()
{
	if (Local_0 == 6)
	{
		func_113(6);
	}
	else if (Local_0 > 0)
	{
		func_47();
		func_113(1);
	}
}

void func_50()
{
	if (Local_0 == 6)
	{
		func_113(6);
	}
	else if (Local_0 > 1)
	{
		func_113(2);
	}
}

void func_51()
{
	bool bVar0;
	int iVar1;

	if (!func_96(1, 255))
	{
		bVar0 = true;
		if (!func_114())
		{
			bVar0 = false;
		}
		if (!func_115())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_116(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_93(Local_107.f_11))
			{
				func_94(&(Local_107.f_11));
			}
			if (func_95(Local_107.f_11) >= iVar1)
			{
				func_113(6);
			}
		}
	}
	else if (Local_0 > 2)
	{
		func_117(&(Local_107.f_11));
		func_118();
		func_113(3);
	}
}

void func_52()
{
	int iVar0;

	if (!func_96(2, 255))
	{
		if (func_119())
		{
			func_116(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_93(Local_107.f_11))
			{
				func_94(&(Local_107.f_11));
			}
			if (func_120(Local_107.f_11) >= iVar0)
			{
				func_113(6);
			}
		}
	}
	else if (Local_0 > 3)
	{
		func_117(&(Local_107.f_11));
		func_121();
		func_122();
		func_123();
		func_124();
		func_113(4);
	}
}

void func_53()
{
	if (Local_0 >= 5)
	{
		func_125();
		func_113(5);
		return;
	}
	func_126();
	func_127();
	func_128();
	func_129();
	func_130();
	func_131();
}

void func_54()
{
	if (!func_96(4, 255))
	{
		if (func_132())
		{
			func_133();
			func_57(Local_107.f_12, 4);
			func_116(4);
		}
	}
	else if (Local_0 > 5)
	{
		func_113(6);
	}
}

bool func_55()
{
	return (func_97(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_56()
{
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_134(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_58()
{
	int iVar0;
	bool bVar1;

	if (!func_59(1))
	{
		return;
	}
	if (func_59(4))
	{
		return;
	}
	if (!func_59(2))
	{
		iVar0 = -1;
	}
	else if (!func_59(8))
	{
		iVar0 = 2;
	}
	else if (func_59(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_135(Local_107.f_9, iVar0, 0);
	func_111(4);
	if (bVar1)
	{
		func_136(Local_107.f_1, Local_107.f_2);
	}
}

bool func_59(int iParam0)
{
	return func_137(Local_107.f_7, iParam0);
}

void func_60(int iParam0)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_61()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_55();
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_1[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_7.f_1[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_0.f_7.f_1[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_107.f_18.f_4))
		{
			TASK::_0x81948DFE4F5A0283(Local_107.f_18.f_4);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5))
		{
			ENTITY::DELETE_ENTITY(&(Local_107.f_18.f_5));
		}
	}
}

void func_62(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_63(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_139(uParam0))
	{
		return -1;
	}
	iVar0 = func_140(uParam0, uParam0->f_9);
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
			iVar0 = func_140(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_64(int iParam0)
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

void func_65(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_141(uParam0);
			break;
		case 1:
			func_141(uParam0);
			break;
		case 2:
			func_141(uParam0);
			break;
		case 3:
			func_142(uParam0);
			break;
		case 4:
			func_141(uParam0);
			break;
		case 5:
			func_141(uParam0);
			break;
		case 6:
			func_142(uParam0);
			break;
		case 7:
			func_142(uParam0);
			break;
		case 8:
			func_142(uParam0);
			break;
		case 9:
			func_141(uParam0);
			break;
		default:
			func_67(uParam0);
			func_66(uParam0);
			break;
	}
}

void func_66(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_69(uParam0, iVar0);
		iVar0++;
	}
}

void func_67(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_68(uParam0, iVar0);
		iVar0++;
	}
}

void func_68(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_69(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_70(var uParam0, int iParam1)
{
	func_143(&(uParam0->f_16), iParam1);
}

void func_71(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_69(uParam0, 0);
			break;
		case 1:
		case 2:
			func_69(uParam0, 1);
			func_69(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_69(uParam0, 0);
			func_69(uParam0, 2);
			break;
		case 8:
			func_69(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_69(uParam0, 1);
			break;
		default:
			func_66(uParam0);
			break;
	}
}

void func_72(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_144(uParam0);
			break;
		case 1:
			func_145(uParam0);
			break;
		case 2:
			func_146(uParam0);
			break;
		case 3:
			func_147(uParam0);
			break;
		default:
			func_67(uParam0);
			func_66(uParam0);
			break;
	}
}

int func_73(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_74(int iParam0)
{
	if (!func_138(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

void func_75(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_148(uParam0);
			break;
		case 1:
		case 2:
			func_149(uParam0);
			break;
		case 3:
		case 4:
			func_150(uParam0);
			break;
		default:
			func_66(uParam0);
			break;
	}
	func_67(uParam0);
}

int func_76(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

int func_77(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

int func_78(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

var func_79(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_151(&Var1, uParam0) && func_152(&Var1, iParam1))
	{
		func_153(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_80(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_151(&Var1, uParam0) && func_152(&Var1, iParam1))
	{
		func_153(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_154(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_82(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_154(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_83(int iParam0)
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

int func_84(int iParam0, var uParam1, int iParam2)
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

struct<2> func_85()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_86(int iParam0)
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

bool func_87(var uParam0, int iParam1)
{
	return func_155(uParam0->f_16, iParam1);
}

void func_88(int iParam0)
{
	if (Local_0 != iParam0)
	{
		Local_0 = iParam0;
	}
}

void func_89(int iParam0)
{
	if (!func_97(iParam0))
	{
		func_156(&(Local_0.f_1), iParam0);
	}
}

bool func_90(int iParam0)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return (func_157(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_91(int iParam0)
{
	if (Local_0.f_2 != iParam0)
	{
		Local_0.f_2 = iParam0;
	}
}

int func_92(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
	{
		return 1;
	}
	if (func_158(Local_107.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_0.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_107.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_159(&uVar1, Param0);
		Local_0.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_116(128);
	}
	else if (!func_96(128, 255))
	{
		Local_0.f_3.f_1 = func_160(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
		{
			return 1;
		}
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_0.f_3);
	switch (iVar0)
	{
		case 3:
			Local_0.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_0.f_3);
			return 1;
		case 4:
			Local_0.f_3 = 0;
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_93(int iParam0)
{
	return iParam0 != 0;
}

void func_94(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_95(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

bool func_96(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_137(&(vLocal_10[iParam1 /*3*/]), iParam0);
}

bool func_97(int iParam0)
{
	return func_137(Local_0.f_1, iParam0);
}

int func_98()
{
	return 1;
}

void func_99()
{
}

int func_100()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_1[iVar2])))
		{
			if (func_161(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				if (iVar2 == 0)
				{
					ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_ENT(&(Local_0.f_7.f_1[iVar2])), 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(&(Local_0.f_7.f_1[iVar2])), true);
				}
				iVar2++;
			}
			if (bVar1)
			{
				func_162();
			}
			return iVar0;
		}
	}

int func_101()
{
	return 1;
}

void func_102()
{
}

void func_103()
{
	if (!func_97(32) && func_163(32))
	{
		func_89(32);
	}
	if (!func_97(64) && func_163(64))
	{
		func_89(64);
	}
	if (!func_97(16) && func_164(16))
	{
		func_89(16);
	}
	if ((!func_97(2048) && func_163(2048)) && !func_163(4096))
	{
		func_89(2048);
	}
}

void func_104()
{
	bool bVar0;

	if (!bVar0 && func_97(16))
	{
		func_91(1);
		return;
	}
	if (func_97(2048) && !func_163(4096))
	{
		func_91(6);
		return;
	}
}

void func_105()
{
}

int func_106()
{
	if (func_165())
	{
		return 1;
	}
	switch (Local_0.f_7)
	{
		case 0:
			func_166();
			break;
		case 1:
			func_167();
			break;
		case 2:
			func_168();
			break;
	}
	return 0;
}

void func_107()
{
}

int func_108()
{
	return 1;
}

void func_109(int iParam0)
{
	if (func_59(iParam0))
	{
		func_169(&(Local_107.f_7), iParam0);
	}
}

int func_110(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_138(iParam0))
	{
		return 0;
	}
	iVar0 = func_170(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_143(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_171(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_111(int iParam0)
{
	if (!func_59(iParam0))
	{
		func_156(&(Local_107.f_7), iParam0);
	}
}

void func_112()
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
				func_172(iVar0);
				break;
			case -1315570756:
				func_173(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_174(iVar0);
		iVar0++;
	}
}

void func_113(int iParam0)
{
	if (Local_107.f_8 != iParam0)
	{
		Local_107.f_8 = iParam0;
	}
}

int func_114()
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = "EXPL";
	iVar1 = 1;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
		{
			iVar1 = 0;
		}
	}
	STREAMING::_0x19A6BE7D9C6884D3(1545192181, 15, 0, 0);
	if (!STREAMING::_0x9427C94D2E4094A4(1545192181, 0))
	{
		iVar1 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!func_176(func_175(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_115()
{
	bool bVar0;

	bVar0 = false;
	return !bVar0;
}

void func_116(int iParam0)
{
	if (!func_96(iParam0, 255))
	{
		func_156(vLocal_10[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], iParam0);
	}
}

void func_117(var uParam0)
{
	*uParam0 = 0;
}

void func_118()
{
}

bool func_119()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_107.f_18.f_4))
	{
		Local_107.f_18.f_4 = TASK::CREATE_SCENARIO_POINT(1545192181, Local_107.f_15, func_177(), 0, 0, 0);
	}
	return TASK::_DOES_SCENARIO_POINT_EXIST(Local_107.f_18.f_4);
}

int func_120(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_121()
{
	if (!func_59(1))
	{
		func_178(Local_107.f_9);
		func_111(1);
	}
}

void func_122()
{
}

void func_123()
{
}

void func_124()
{
}

void func_125()
{
}

void func_126()
{
	float fVar0;

	if (func_158(Local_107.f_15))
	{
		return;
	}
	if (func_179())
	{
		return;
	}
	if (func_180(Local_107.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_107.f_15);
		if (fVar0 < 200f)
		{
			func_116(4096);
		}
		else if (fVar0 < 400f)
		{
			func_181(4096);
			func_116(2048);
		}
		else
		{
			func_181(4096);
			func_181(2048);
		}
	}
}

void func_127()
{
	func_182();
	func_183();
}

void func_128()
{
	if (func_184())
	{
		func_116(8);
	}
	else
	{
		func_181(8);
	}
}

void func_129()
{
	func_185();
	func_186(Local_0.f_7);
	switch (Local_107.f_18)
	{
		case 0:
			func_187();
			break;
		case 1:
			func_188();
			break;
		case 2:
			func_189();
			break;
	}
}

void func_130()
{
	if (!func_96(8, 255))
	{
		func_116(16);
	}
	else
	{
		func_181(16);
	}
}

void func_131()
{
	int iVar0;

	Local_107.f_6 = -1;
	Local_107.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_107.f_5 = (Local_107.f_5 || vLocal_10[iVar0 /*3*/]) // PointerArith;
			Local_107.f_6 = (Local_107.f_6 && vLocal_10[iVar0 /*3*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_132()
{
	return 1;
}

void func_133()
{
}

bool func_134(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_135(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_191(func_190(Param0));
	iVar1 = func_192(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_193(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_136(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_194(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_195(iVar0);
}

bool func_137(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_138(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_139(var uParam0)
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

int func_140(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_196(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_197(iParam1)) - 1);
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

void func_141(var uParam0)
{
	func_68(uParam0, 0);
	func_68(uParam0, 1);
	func_68(uParam0, 3);
	func_66(uParam0);
}

void func_142(var uParam0)
{
	func_67(uParam0);
	func_198(uParam0, 0, 3);
}

void func_143(var uParam0, int iParam1)
{
	func_199(uParam0, iParam1);
}

void func_144(var uParam0)
{
	func_68(uParam0, 0);
	func_69(uParam0, 0);
	func_69(uParam0, 1);
	func_69(uParam0, 2);
}

void func_145(var uParam0)
{
	func_68(uParam0, 1);
	func_66(uParam0);
}

void func_146(var uParam0)
{
	func_68(uParam0, 2);
	func_69(uParam0, 3);
}

void func_147(var uParam0)
{
	func_68(uParam0, 3);
	func_69(uParam0, 4);
}

void func_148(var uParam0)
{
	func_69(uParam0, 0);
	func_69(uParam0, 1);
}

void func_149(var uParam0)
{
	func_69(uParam0, 2);
	func_69(uParam0, 3);
}

void func_150(var uParam0)
{
	func_69(uParam0, 4);
	func_69(uParam0, 5);
}

bool func_151(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_152(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_153(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_154(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

bool func_155(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_157(int iParam0)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return false;
	}
	iVar0 = func_200(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_158(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_159(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_160(struct<17> Param0)
{
	var uVar0;

	func_159(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_161(int iParam0, int iParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*iParam1 = 1;
		return 0;
	}
	if (!func_202(Local_0.f_7.f_1[iParam0], func_175(iParam0), func_201(), 1, 0))
	{
		*iParam1 = 1;
		return 0;
	}
	return 1;
}

void func_162()
{
	func_91(2);
}

bool func_163(int iParam0)
{
	return func_137(Local_107.f_5, iParam0);
}

bool func_164(int iParam0)
{
	return func_137(Local_107.f_6, iParam0);
}

int func_165()
{
	if (Local_0.f_7 == 3)
	{
		return 1;
	}
	return 0;
}

void func_166()
{
	if (func_179())
	{
		func_203(1);
	}
}

void func_167()
{
	if (func_204(1))
	{
		func_203(2);
	}
}

void func_168()
{
	if (func_205(2))
	{
		func_203(3);
	}
}

void func_169(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_170(int iParam0)
{
	if (!func_138(iParam0))
	{
		return 0;
	}
	if (!func_157(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_171(var uParam0, int iParam1)
{
	func_206(uParam0, iParam1);
}

void func_172(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_207(&Var0, iParam0))
			{
				func_208(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_173(int iParam0)
{
}

void func_174(int iParam0)
{
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1935100224;
		default:
			break;
	}
	return 0;
}

bool func_176(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

float func_177()
{
	switch (Local_107.f_2)
	{
		case 0:
			return -30.146f;
		case 1:
			return 73.5f;
		case 2:
			return -117.6f;
		case 3:
			return 90f;
		case 4:
			return -90f;
		case 5:
			return -90f;
		case 6:
			return -45f;
		case 7:
			return 180f;
		case 8:
			return 0f;
		case 9:
			return -90f;
		case 10:
			return 90f;
		case 11:
			return 90f;
		case 12:
			return 180f;
		case 13:
			return 180f;
		case 14:
			return -90f;
		case 15:
			return -90f;
		case 16:
			return 180f;
		case 17:
			return -73.7f;
		case 18:
			return -90f;
		case 19:
			return 180f;
		default:
			break;
	}
	return 0f;
}

void func_178(struct<2> Param0)
{
	if (func_192(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_192(Param0)))
	{
		STATS::_0x99230691875FC218(func_190(Param0), func_192(Param0), Global_35);
	}
}

bool func_179()
{
	return (func_97(32) || func_96(32, 255));
}

int func_180(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_209(iParam0, 2087069356) };
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

void func_181(int iParam0)
{
	if (func_137(&(vLocal_10[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), iParam0))
	{
		func_169(vLocal_10[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], iParam0);
	}
}

void func_182()
{
}

void func_183()
{
}

int func_184()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_107.f_14))
	{
		return 0;
	}
	return 1;
}

void func_185()
{
	int iVar0;

	Local_107.f_18.f_6 = -1;
	Local_107.f_18.f_7 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_107.f_18.f_6 = (Local_107.f_18.f_6 && (vLocal_10[iVar0 /*3*/])->f_1.f_1);
			Local_107.f_18.f_7 = (Local_107.f_18.f_7 || (vLocal_10[iVar0 /*3*/])->f_1.f_1);
		}
		iVar0++;
	}
}

void func_186(int iParam0)
{
	if (Local_107.f_18 != iParam0)
	{
		Local_107.f_18 = iParam0;
	}
}

void func_187()
{
	if (func_210(Local_107.f_15, 1f, 20f))
	{
		func_211();
	}
}

void func_188()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5))
	{
		Local_107.f_18.f_5 = TASK::_0x295514F198EFD0CA(Local_107.f_18.f_4, "PrimaryItem");
		if (ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5))
		{
			PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), Local_107.f_18.f_5, 0);
			PLAYER::_0x6ECFC621A168424C(Local_107.f_18.f_5, Local_107.f_18.f_5, 0);
			ENTITY::SET_ENTITY_PROOFS(Local_107.f_18.f_5, 2, false);
			ENTITY::SET_ENTITY_PROOFS(Local_107.f_18.f_5, 4, false);
		}
	}
	if (PED::_0x34D6AC1157C8226C(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1545192181) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("attach")))
	{
		func_212(1);
		func_213(1);
	}
}

void func_189()
{
	struct<15> Var0;

	if (func_214(1))
	{
		if (!PED::_0x34D6AC1157C8226C(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1545192181) && !func_215())
		{
			Var0 = { func_216(-773758976) };
			Var0.f_10 = PLAYER::PLAYER_ID();
			func_217(&Var0);
			func_218();
			func_219(1);
		}
	}
	if (func_220(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Local_107.f_15, 1) > 40f)
	{
		func_213(2);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5) && !ENTITY::IS_ENTITY_OCCLUDED(Local_107.f_18.f_5))
		{
			func_211();
			func_221();
		}
		func_222(2);
	}
}

int func_190(var uParam0, var uParam1)
{
	return uParam0;
}

int func_191(int iParam0)
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

int func_192(struct<2> Param0)
{
	return func_223(Param0);
}

void func_193(struct<2> Param0, var uParam2)
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
	switch (func_190(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_225(func_224(Param0));
			iVar5 = func_226(iVar4);
			if (!func_227(iVar5, 0))
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

int func_194(int iParam0, int iParam1)
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

void func_195(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_228(&Var0);
}

int func_196(int iParam0)
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

int func_197(int iParam0)
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

void func_198(var uParam0, int iParam1, int iParam2)
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
		func_69(uParam0, iVar0);
		iVar0++;
	}
}

void func_199(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_200(int iParam0)
{
	if (!func_138(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

Vector3 func_201()
{
	vector3 vVar0;

	vVar0 = { Local_107.f_15 };
	switch (func_229())
	{
		case 0:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_107.f_15, func_177(), 1f, -0.5f, 0f) };
			break;
		case 2:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_107.f_15, func_177(), -1f, -0.5f, 0f) };
			break;
		default:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_107.f_15, func_177(), 1f, -0.5f, 0f) };
			break;
	}
	return vVar0;
}

int func_202(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_176(iParam1))
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

void func_203(int iParam0)
{
	if (Local_0.f_7 != iParam0)
	{
		Local_0.f_7 = iParam0;
	}
}

bool func_204(int iParam0)
{
	return func_137(Local_107.f_18.f_7, iParam0);
}

bool func_205(int iParam0)
{
	return func_137(Local_107.f_18.f_6, iParam0);
}

void func_206(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_207(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_107.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_107)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_107.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_107.f_3)
	{
		return 0;
	}
	return 1;
}

void func_208(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	switch (iParam0->f_9)
	{
		case -773758976:
			func_230();
			iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0->f_10);
			iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (((_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1) && _NAMESPACE26::_0x93A91A351A07360E(iVar1)) && _NAMESPACE26::_0xD6F6ACF4392187FB(iVar2)) && _NAMESPACE26::_0x93A91A351A07360E(iVar2))
			{
				if (iVar1 == iVar2)
				{
					bVar0 = true;
				}
			}
			if (iParam0->f_10 == PLAYER::PLAYER_ID() || bVar0)
			{
				func_211();
				func_221();
				func_231();
				func_58();
			}
			break;
	}
}

struct<2> func_209(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_232(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_233(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

bool func_210(vector3 vParam0, float fParam3, float fParam4)
{
	if (fParam4 + fParam3) < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_234(PLAYER::GET_PLAYER_INDEX()), true)
	{
		return false;
	}
	return CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
}

void func_211()
{
	int iVar0;

	if (!func_96(32, 255))
	{
		func_235(Local_107.f_1, Local_107.f_3);
		if (!func_96(1024, 255))
		{
			func_236(Local_107.f_1);
			func_116(1024);
		}
		iVar0 = func_194(Local_107.f_1, Local_107.f_2);
		func_237(iVar0);
		func_238(iVar0);
		func_111(2);
		func_239(Local_107.f_9);
		func_240(Local_107.f_1);
		func_116(32);
	}
}

void func_212(int iParam0)
{
	func_156(&(Local_107.f_18.f_1), iParam0);
}

void func_213(int iParam0)
{
	func_156(&((vLocal_10[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1), iParam0);
}

bool func_214(int iParam0)
{
	return func_137(Local_107.f_18.f_1, iParam0);
}

int func_215()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -610890012))
	{
		return 1;
	}
	return 0;
}

struct<15> func_216(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_107, 5);
	Var0.f_9 = iParam0;
	Var0 = 178;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_217(var uParam0)
{
	func_242(uParam0, func_241(4, 117));
}

void func_218()
{
	int iVar0;

	iVar0 = func_243(Global_35, 1);
	func_244(iVar0, 0);
}

void func_219(int iParam0)
{
	func_169(&(Local_107.f_18.f_1), iParam0);
}

float func_220(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_221()
{
	if (!func_59(2))
	{
		return;
	}
	func_111(8);
}

void func_222(int iParam0)
{
	func_169(&((vLocal_10[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1), iParam0);
}

int func_223(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_245(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_224(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_245(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_225(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_151(&Var1, uParam0))
	{
		iVar0 = ((func_246() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_226(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_227(int iParam0, int iParam1)
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

void func_228(var uParam0)
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
	func_247(uParam0, uParam0->f_1);
}

int func_229()
{
	return Local_107.f_2;
}

void func_230()
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_107.f_18.f_5))
		{
			ENTITY::DETACH_ENTITY(Local_107.f_18.f_5, true, true);
		}
		ENTITY::SET_ENTITY_VISIBLE(Local_107.f_18.f_5, false);
		ENTITY::SET_ENTITY_COLLISION(Local_107.f_18.f_5, false, false);
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_107.f_18.f_5, true, false) };
		vVar0 = { vVar0.x, vVar0.y, (vVar0.z - 10f) };
		ENTITY::SET_ENTITY_COORDS(Local_107.f_18.f_5, vVar0, false, false, true, true);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(Local_107.f_18.f_5));
	}
}

void func_231()
{
	if (!func_59(8))
	{
		return;
	}
	func_111(16);
}

int func_232(int iParam0)
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

struct<2> func_233(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

Vector3 func_234(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_235(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_209(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_87(&Var0, 4) && func_248(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_236(int iParam0)
{
	func_249();
	func_250(iParam0);
}

void func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_93(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_251(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_94((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_252(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_252(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_252(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_252(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_238(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_228(&Var0);
}

void func_239(struct<2> Param0)
{
	struct<32> Var0;

	if (func_192(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_192(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_192(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_253(Param0, &Var0))
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

void func_240(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_209(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

var func_241(int iParam0, int iParam1)
{
	return func_254(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_242(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 40, &uParam1);
}

int func_243(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_255(vParam0);
	switch (iVar0)
	{
		case 5:
		case 6:
		case 7:
			switch (iParam3)
			{
				case 0:
					return -2041536102;
				case 1:
					return -123942207;
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
					return -722984556;
				case 1:
					return -1663780084;
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
					return -324329373;
				case 1:
					return 459026541;
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
					return 1235390186;
				case 1:
					return 130796932;
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
					return 163775;
				case 1:
					return 1617065976;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_244(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_256(&Var4, 1356624740);
	return func_257(iParam0, &Var4, &uVar0, iParam1);
}

int func_245(struct<2> Param0, var uParam2)
{
	if (!func_36(Param0))
	{
		return 0;
	}
	func_258(uParam2);
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

int func_246()
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

void func_247(var uParam0, var uParam1)
{
}

int func_248(int iParam0)
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

void func_249()
{
	func_94(&(Global_1245803->f_2003));
}

void func_250(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_209(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_251(int iParam0, int iParam1, int iParam2)
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

struct<2> func_252(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_253(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_245(Param0, &vVar0);
	if (func_259(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

var func_254(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_260() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_261());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_261());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_261());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_262(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_263(iVar2))
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
				if (iVar9 & 8192 != 0 && func_264(iVar2) != 1)
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
					if (!func_265(iVar10))
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

int func_255(vector3 vParam0)
{
	return func_266(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_256(var uParam0, int iParam1)
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

int func_257(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_267(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_268(uParam2, iParam0, Var1);
	return 1;
}

void func_258(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_259(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_269(iParam0))
	{
		return 0;
	}
	if (func_270(iParam0, uParam1, &uVar0))
	{
		func_271(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_260()
{
	return Global_1051202->f_12;
}

char* func_261()
{
	return "unnamed";
}

int func_262(int iParam0)
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

int func_263(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_272(35, iParam0);
}

int func_264(int iParam0)
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

bool func_265(int iParam0)
{
	if (func_273(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_274(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_267(var uParam0)
{
	func_256(uParam0, 143479330);
	if (func_275() == 2026485318)
	{
		func_256(uParam0, 617531372);
	}
	else
	{
		func_256(uParam0, 291123060);
	}
}

void func_268(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_276(uParam0))
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

int func_269(int iParam0)
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

bool func_270(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_277(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_271(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_278(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_279(iVar0);
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
			uParam2->f_5 = func_280(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_281(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_282(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_283(iVar0);
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

int func_272(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_284(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_285())
	{
		return func_284(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_284(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_273(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_274(int iParam0)
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
		func_286(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_287(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_275()
{
	return Global_1951141->f_1;
}

int func_276(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_277(int iParam0)
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

int func_278(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_288(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_279(int iParam0)
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

int func_280(int iParam0)
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

int func_281(int iParam0)
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

int func_282(int iParam0)
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

int func_283(int iParam0)
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

bool func_284(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_285()
{
	return Global_1099294->f_339;
}

void func_286(int iParam0)
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
	func_287(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_287(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_288(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_289(iParam0, uParam1, &uVar0))
	{
		func_290(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_289(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_277(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_290(var uParam0, int iParam1, var uParam2)
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

