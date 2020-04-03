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
	var uLocal_22 = 3;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1;
	var uLocal_30 = 0;
	var uLocal_31 = -1;
	var uLocal_32 = -1;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	vector3 vLocal_35[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<175> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_307 = 1;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	var uLocal_322 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_320 = 1f;
	fLocal_321 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 22, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 22, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_35, 97, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(vLocal_35[0 /*3*/]), 97, "m_clientData");
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
	else if (func_17(Local_132.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_132.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_132.f_12), Local_132.f_9))
	{
		return 1;
	}
	else if (Local_132.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_132, &uParam0, 5);
	iVar19 = func_30(&bVar18, Local_132.f_1, Local_132.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_132.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_31(&Var0, Local_132.f_1, Local_132.f_2, Local_132.f_3, iVar17);
	Local_132.f_9 = { func_32(Var0.f_5, 8) };
	Local_132.f_14 = Var0.f_5;
	Local_132.f_15 = { Var0.f_11 };
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
	if (Local_132.f_8 <= 5)
	{
		func_48();
	}
	switch (Local_132.f_8)
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
	if (Local_132.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_58(Local_132.f_12, 4);
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
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	func_87(&(Local_132.f_18.f_18));
	func_88(&(Local_132.f_18.f_18), 0);
	func_89(&(Local_132.f_18.f_18), 1);
	func_90();
	PED::ADD_RELATIONSHIP_GROUP("relGroupHoboDog", &(Local_132.f_18.f_155));
}

void func_35()
{
	int iVar0;

	if (func_91() == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		Local_13.f_7.f_12 = iVar0;
	}
}

int func_36(struct<2> Param0)
{
	if (!func_92(Param0))
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

	iVar0 = (Global_1186267->f_231.f_1066[Local_132.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_31(&Var1, Local_132.f_1, Local_132.f_2, Local_132.f_3, iVar0);
	if (!func_93(&Var1, 1))
	{
		func_94(1);
		return;
	}
	Local_13.f_6 = func_74(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_95(256);
	if (func_96(Local_13.f_6))
	{
		func_97(5);
		func_94(6);
	}
	else
	{
		func_94(1);
	}
}

void func_42()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_31(&Var0, Local_132.f_1, Local_132.f_2, -1, 255);
	if (func_93(&Var0, 1))
	{
		func_94(2);
		return;
	}
	if (func_98(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_132.f_15, Var0.f_10, 2442122);
		func_94(2);
	}
	else if (bVar17)
	{
		func_97(3);
		func_94(6);
	}
	if (!func_99(Local_13.f_3.f_2))
	{
		func_100(&(Local_13.f_3.f_2));
	}
	else if (func_101(Local_13.f_3.f_2) > 45000)
	{
		func_97(4);
		func_94(6);
	}
}

void func_43()
{
	if (func_102(1, 255))
	{
		if (!func_103(1))
		{
			if (func_104())
			{
				func_95(1);
			}
		}
		else
		{
			func_105();
			func_94(3);
		}
	}
}

void func_44()
{
	bool bVar0;

	if (func_102(2, 255))
	{
		if (!func_103(2))
		{
			bVar0 = true;
			if (!func_106())
			{
				bVar0 = false;
			}
			if (!func_107())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_95(2);
			}
		}
		else
		{
			func_108();
			func_94(4);
		}
	}
}

void func_45()
{
	func_109();
	func_110();
	func_111();
	if (func_112() || Local_13.f_2 != 0)
	{
		func_113();
		func_94(5);
	}
}

void func_46()
{
	if (func_102(4, 255))
	{
		if (func_114())
		{
			func_95(4);
			func_94(6);
		}
	}
}

void func_47()
{
	if (!func_103(256))
	{
		return;
	}
	if (func_103(512))
	{
		if (func_60(32) && func_74(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_61(Local_13.f_6);
			func_115(32);
		}
	}
	else if (!func_60(32))
	{
		if (func_74(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_116(Local_13.f_6, 1, 1);
			func_117(32);
		}
	}
	else if (func_74(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_61(Local_13.f_6);
		func_115(32);
	}
}

void func_48()
{
	func_118();
}

void func_49()
{
	if (Local_13 == 6)
	{
		func_119(6);
	}
	else if (Local_13 > 0)
	{
		func_47();
		func_119(1);
	}
}

void func_50()
{
	if (Local_13 == 6)
	{
		func_119(6);
	}
	else if (Local_13 > 1)
	{
		func_119(2);
	}
}

void func_51()
{
	bool bVar0;
	int iVar1;

	if (!func_102(1, 255))
	{
		bVar0 = true;
		if (!func_120())
		{
			bVar0 = false;
		}
		if (!func_121())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_122(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_99(Local_132.f_11))
			{
				func_100(&(Local_132.f_11));
			}
			if (func_101(Local_132.f_11) >= iVar1)
			{
				func_119(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_123(&(Local_132.f_11));
		func_124();
		func_119(3);
	}
}

void func_52()
{
	int iVar0;

	if (!func_102(2, 255))
	{
		if (func_125())
		{
			func_122(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_99(Local_132.f_11))
			{
				func_100(&(Local_132.f_11));
			}
			if (func_126(Local_132.f_11) >= iVar0)
			{
				func_119(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_123(&(Local_132.f_11));
		func_127();
		func_128();
		func_129();
		func_130();
		func_119(4);
	}
}

void func_53()
{
	if (Local_13 >= 5)
	{
		func_131();
		func_119(5);
		return;
	}
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
	func_137();
}

void func_54()
{
	if (!func_102(4, 255))
	{
		if (func_138())
		{
			func_139();
			func_58(Local_132.f_12, 4);
			func_122(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_119(6);
	}
}

bool func_55()
{
	return (func_103(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
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
			if (!func_140(((*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/])->f_3))
			{
				if (func_141((*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/]))
				{
					GRAPHICS::_0x9CF1836C03FB67A2((*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/], 1);
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
	if (func_142(iParam0, iVar0, iParam1))
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
	func_143(Local_132.f_9, iVar0, 0);
	func_117(4);
	if (bVar1)
	{
		func_144(Local_132.f_1, Local_132.f_2);
	}
}

bool func_60(int iParam0)
{
	return func_145(Local_132.f_7, iParam0);
}

void func_61(int iParam0)
{
	int iVar0;

	if (!func_146(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_62()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_55();
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_132.f_18.f_2[iVar3 /*4*/])->f_1))
		{
			func_147(iVar3);
			if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar3]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_2[iVar3])))
			{
				iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_7.f_2[iVar3]));
				if (PED::IS_PED_FLEEING((Local_132.f_18.f_2[iVar3 /*4*/])->f_1) || PED::IS_PED_IN_COMBAT((Local_132.f_18.f_2[iVar3 /*4*/])->f_1, 0))
				{
					PED::SET_PED_KEEP_TASK((Local_132.f_18.f_2[iVar3 /*4*/])->f_1, true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar3++;
	}
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		if (iVar4 == 0 && !func_149(func_148(0)))
		{
			_NAMESPACE49::_0x9D16896F0DBE78A2(func_150(0), 2f);
		}
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_9[iVar4]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_9[iVar4])))
		{
			iVar2 = NETWORK::NET_TO_OBJ(&(Local_13.f_7.f_9[iVar4]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar4++;
	}
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

	if (!func_151(uParam0))
	{
		return -1;
	}
	iVar0 = func_152(uParam0, uParam0->f_9);
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
			iVar0 = func_152(uParam0, iVar1);
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
			func_153(uParam0);
			break;
		case 1:
			func_153(uParam0);
			break;
		case 2:
			func_153(uParam0);
			break;
		case 3:
			func_154(uParam0);
			break;
		case 4:
			func_153(uParam0);
			break;
		case 5:
			func_153(uParam0);
			break;
		case 6:
			func_154(uParam0);
			break;
		case 7:
			func_154(uParam0);
			break;
		case 8:
			func_154(uParam0);
			break;
		case 9:
			func_153(uParam0);
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
	func_155(&(uParam0->f_16), iParam1);
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
			func_156(uParam0);
			break;
		case 1:
			func_157(uParam0);
			break;
		case 2:
			func_158(uParam0);
			break;
		case 3:
			func_159(uParam0);
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
	if (!func_146(iParam0))
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
			func_160(uParam0);
			break;
		case 1:
		case 2:
			func_161(uParam0);
			break;
		case 3:
		case 4:
			func_162(uParam0);
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

	if (func_163(&Var1, uParam0) && func_164(&Var1, iParam1))
	{
		func_165(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_81(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_163(&Var1, uParam0) && func_164(&Var1, iParam1))
	{
		func_165(Var1, -1052341598, &iVar0, 0);
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
	iVar0 = func_166(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_83(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_166(iParam0, iParam1);
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

void func_87(var uParam0)
{
	func_167(uParam0, 0);
	func_168(uParam0, 0);
	func_169(uParam0, 1);
	func_88(uParam0, 1);
	func_170(uParam0, 0);
	func_171(uParam0, 1);
	func_172(uParam0, 1, 1, 1);
}

void func_88(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_173(uParam0, 16);
	}
	else
	{
		func_174(uParam0, 67108864);
		func_174(uParam0, 16);
	}
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_174(&(uParam0->f_1), 4);
	}
	else
	{
		func_173(&(uParam0->f_1), 4);
	}
}

void func_90()
{
	switch (func_175())
	{
		case 0:
			func_176(0, 0, -45.1f, -20.94f, 4.34f, 2f, 260, 1);
			break;
		default:
			func_176(0, 0, -45.1f, -20.94f, 4.34f, 2f, 260, 1);
			break;
	}
}

int func_91()
{
	if (Local_13.f_7.f_11 > -1)
	{
		return Local_13.f_7.f_11;
	}
	return func_177();
}

int func_92(int iParam0)
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

bool func_93(var uParam0, int iParam1)
{
	return func_178(uParam0->f_16, iParam1);
}

void func_94(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

void func_95(int iParam0)
{
	if (!func_103(iParam0))
	{
		func_173(&(Local_13.f_1), iParam0);
	}
}

bool func_96(int iParam0)
{
	if (!func_146(iParam0))
	{
		return false;
	}
	return (func_179(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_97(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

int func_98(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return 1;
	}
	if (func_140(Local_132.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_132.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_180(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_122(128);
	}
	else if (!func_102(128, 255))
	{
		Local_13.f_3.f_1 = func_181(Param0);
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

bool func_99(int iParam0)
{
	return iParam0 != 0;
}

void func_100(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_101(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

bool func_102(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_145(&(vLocal_35[iParam1 /*3*/]), iParam0);
}

bool func_103(int iParam0)
{
	return func_145(Local_13.f_1, iParam0);
}

int func_104()
{
	return 1;
}

void func_105()
{
}

int func_106()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (func_182(iVar2, func_177()) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar2])))
		{
			if (func_183(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			iVar3 = 0;
			while (iVar3 <= 0)
			{
				if (func_184(iVar3, func_177()) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_9[iVar3])))
				{
					if (func_185(iVar3, &bVar1) || bVar1)
					{
						iVar0 = 0;
					}
					else
					{
						iVar3++;
					}
					if (bVar1)
					{
						func_186();
					}
					return iVar0;
				}
			}
		}
	}

int func_107()
{
	return 1;
}

void func_108()
{
	Local_13.f_7.f_11 = func_177();
}

void func_109()
{
	if (!func_103(32) && func_187(32))
	{
		func_95(32);
	}
	if (!func_103(64) && func_187(64))
	{
		func_95(64);
	}
	if (!func_103(16) && func_188(16))
	{
		func_95(16);
	}
	if ((!func_103(2048) && func_187(2048)) && !func_187(4096))
	{
		func_95(2048);
	}
}

void func_110()
{
	bool bVar0;

	if (!bVar0 && func_103(16))
	{
		func_97(1);
		return;
	}
	if (func_103(2048) && !func_187(4096))
	{
		func_97(6);
		return;
	}
}

void func_111()
{
}

int func_112()
{
	if (func_189())
	{
		return 1;
	}
	func_190();
	switch (Local_13.f_7)
	{
		case 0:
			func_191();
			break;
		case 1:
			func_192();
			break;
		case 2:
			func_193();
			break;
		case 3:
			func_194();
			break;
		case 4:
			func_195();
			break;
		case 7:
			func_196();
			break;
		case 5:
			func_197();
			break;
	}
	return 0;
}

void func_113()
{
}

int func_114()
{
	int iVar0;

	iVar0 = func_198(0);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || func_199(iVar0, 518218985)) || func_200(4))
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0)
{
	if (func_60(iParam0))
	{
		func_174(&(Local_132.f_7), iParam0);
	}
}

int func_116(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_146(iParam0))
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_155(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_202(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_117(int iParam0)
{
	if (!func_60(iParam0))
	{
		func_173(&(Local_132.f_7), iParam0);
	}
}

void func_118()
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
				func_203(iVar0);
				break;
			case -1315570756:
				func_204(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_205(iVar0);
		iVar0++;
	}
}

void func_119(int iParam0)
{
	if (Local_132.f_8 != iParam0)
	{
		Local_132.f_8 = iParam0;
	}
}

int func_120()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = "HDOG";
	switch (Local_132.f_18)
	{
		case 0:
			if (HUD::_0x2C729F2B94CEA911(sVar0))
			{
				HUD::_0xF66090013DE648D5(sVar0);
				if (HUD::_0xD0976CC34002DB57(sVar0))
				{
					Local_132.f_18 = 1;
				}
			}
			break;
		case 1:
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (func_207(func_206(iVar2)))
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 0;
				}
				iVar2++;
			}
			if (func_207(func_208(0)))
			{
				iVar1 = 1;
			}
			else
			{
				iVar1 = 0;
			}
			if (iVar1 == 1)
			{
				Local_132.f_18 = 2;
			}
			break;
		case 2:
			iVar3 = 0;
			while (iVar3 <= 0)
			{
				STREAMING::REQUEST_ANIM_DICT(func_209(iVar3));
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_209(iVar3)))
				{
					return 0;
				}
				if (func_91() != 0)
				{
					return 1;
				}
				STREAMING::REQUEST_ANIM_DICT("script_re@savage_aftermath@weeping_dog");
				if (!STREAMING::HAS_ANIM_DICT_LOADED("script_re@savage_aftermath@weeping_dog"))
				{
					return 0;
				}
				STREAMING::REQUEST_ANIM_DICT("amb_creature_mammal@world_dog_resting@stand_enter");
				if (!STREAMING::HAS_ANIM_DICT_LOADED("amb_creature_mammal@world_dog_resting@stand_enter"))
				{
					return 0;
				}
				STREAMING::REQUEST_ANIM_DICT("amb_creature_mammal@world_dog_resting@trans");
				if (!STREAMING::HAS_ANIM_DICT_LOADED("amb_creature_mammal@world_dog_resting@trans"))
				{
					return 0;
				}
				return 1;
				iVar3++;
			}
			break;
		case 3:
			break;
	}
	return 0;
}

bool func_121()
{
	bool bVar0;

	bVar0 = false;
	return !bVar0;
}

void func_122(int iParam0)
{
	if (!func_102(iParam0, 255))
	{
		func_173(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], iParam0);
	}
}

void func_123(var uParam0)
{
	*uParam0 = 0;
}

void func_124()
{
}

int func_125()
{
	return 1;
}

int func_126(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_127()
{
	if (!func_60(1))
	{
		func_210(Local_132.f_9);
		func_117(1);
	}
}

void func_128()
{
	func_211();
}

void func_129()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar0])))
		{
			(Local_132.f_18.f_2[iVar0 /*4*/])->f_1 = NETWORK::NET_TO_PED(&(Local_13.f_7.f_2[iVar0]));
			iVar1 = func_198(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				switch (iVar0)
				{
					case 0:
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, Local_132.f_18.f_155);
						break;
					case 1:
						func_212(1);
						PED::_0x6569F31A01B4C097(iVar1, 4, 0);
						ENTITY::_0x8C03CD6B5E0E85E8(iVar1, 2102333076);
						func_213(iVar1, 1, 1);
						break;
					case 2:
						func_212(2);
						func_214(iVar1, -1101297303, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
						PED::_0x7DE9692C6F64CFE8(iVar1, 1, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1, 1269650476);
						PED::SET_PED_CONFIG_FLAG(iVar1, 467, true);
						func_216(&(Local_132.f_18.f_53), iVar1, func_215(2), 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, Local_132.f_18.f_155);
						ENTITY::_0x8C03CD6B5E0E85E8(iVar1, 2102333076);
						break;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (func_184(iVar2, func_177()))
		{
			(Local_132.f_18.f_15[iVar2 /*2*/])->f_1 = NETWORK::NET_TO_OBJ(&(Local_13.f_7.f_9[iVar2]));
			iVar3 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_9[iVar2]));
			switch (iVar2)
			{
				case 0:
					if (func_149(iVar3))
					{
						func_217(OBJECT::_0x250EBB11E81A10BE(iVar3));
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, false);
						ENTITY::SET_ENTITY_HEADING(iVar3, func_218(0));
					}
					_NAMESPACE49::_0x9D16896F0DBE78A2(func_150(0), 2f);
					func_219(func_208(0), func_150(0), -0.075f, 0f, 0.05f, 90f, 90f, 0f, &((Local_132.f_18.f_15[iVar2 /*2*/])->f_1), 1465762285 /* GXTEntry: "Absinthe" */, 1, 0, 0, 0, -1);
					break;
			}
		}
		iVar2++;
	}
}

void func_130()
{
}

void func_131()
{
}

void func_132()
{
	float fVar0;

	if (func_140(Local_132.f_15))
	{
		return;
	}
	if (func_220())
	{
		return;
	}
	if (func_221(Local_132.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_132.f_15);
		if (fVar0 < 200f)
		{
			func_122(4096);
		}
		else if (fVar0 < 400f)
		{
			func_222(4096);
			func_122(2048);
		}
		else
		{
			func_222(4096);
			func_222(2048);
		}
	}
}

void func_133()
{
	func_223();
	func_224();
}

void func_134()
{
	if (func_225())
	{
		func_122(8);
	}
	else
	{
		func_222(8);
	}
}

void func_135()
{
	func_226();
	func_227(Local_13.f_7);
	func_228();
	switch (Local_132.f_18.f_1)
	{
		case 0:
			func_229();
			break;
		case 1:
			func_230();
			break;
		case 2:
			func_231();
			break;
		case 3:
			func_232();
			break;
		case 4:
			func_233();
			break;
		case 7:
			func_234();
			break;
		case 5:
			func_235();
			break;
	}
}

void func_136()
{
	if (!func_102(8, 255))
	{
		func_122(16);
	}
	else
	{
		func_222(16);
	}
}

void func_137()
{
	int iVar0;

	Local_132.f_6 = -1;
	Local_132.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_132.f_5 = (Local_132.f_5 || vLocal_35[iVar0 /*3*/]) // PointerArith;
			Local_132.f_6 = (Local_132.f_6 && vLocal_35[iVar0 /*3*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_138()
{
	int iVar0;

	iVar0 = func_198(0);
	if (func_236(iVar0, 518218985, 1, 0) && !func_200(4))
	{
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1082130432, -1, 0);
	}
	return 1;
}

void func_139()
{
}

int func_140(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_141(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_142(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_143(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_238(func_237(Param0));
	iVar1 = func_239(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_240(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_241(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_242(iVar0);
}

bool func_145(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_146(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

void func_147(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_132.f_18.f_2[iParam0 /*4*/])))
	{
		return;
	}
	MAP::REMOVE_BLIP(Local_132.f_18.f_2[iParam0 /*4*/]);
}

int func_148(int iParam0)
{
	return (Local_132.f_18.f_15[iParam0 /*2*/])->f_1;
}

int func_149(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open");
	}
	return 0;
}

Vector3 func_150(int iParam0)
{
	int iVar0;

	iVar0 = func_175();
	switch (iVar0)
	{
		case 0:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2655.889f, 426.5762f, 86.09268f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1466.28f, -1722.796f, 61.22633f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2456.187f, -871.741f, 40.64661f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2892.756f, 1513.459f, 63.6287f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1243.229f, 523.0437f, 87.8446f;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 56.05267f, 1122.284f, 183.8764f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -477.1373f, -247.0886f, 60.28728f;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1531.419f, 440.9065f, 105.2912f;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1548.247f, -788.1805f, 107.1712f;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1283.136f, -1967.281f, 45.63014f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2601.44f, -2344.027f, 70.08153f;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -3200.852f, -3209.044f, -10.17803f;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -3746.361f, -2859.919f, -15.15007f;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -4616.859f, -3670.302f, 12.47568f;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -5213.531f, -2974.73f, 9.11798f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_151(var uParam0)
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

int func_152(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_243(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_244(iParam1)) - 1);
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

void func_153(var uParam0)
{
	func_69(uParam0, 0);
	func_69(uParam0, 1);
	func_69(uParam0, 3);
	func_67(uParam0);
}

void func_154(var uParam0)
{
	func_68(uParam0);
	func_245(uParam0, 0, 3);
}

void func_155(var uParam0, int iParam1)
{
	func_246(uParam0, iParam1);
}

void func_156(var uParam0)
{
	func_69(uParam0, 0);
	func_70(uParam0, 0);
	func_70(uParam0, 1);
	func_70(uParam0, 2);
}

void func_157(var uParam0)
{
	func_69(uParam0, 1);
	func_67(uParam0);
}

void func_158(var uParam0)
{
	func_69(uParam0, 2);
	func_70(uParam0, 3);
}

void func_159(var uParam0)
{
	func_69(uParam0, 3);
	func_70(uParam0, 4);
}

void func_160(var uParam0)
{
	func_70(uParam0, 0);
	func_70(uParam0, 1);
}

void func_161(var uParam0)
{
	func_70(uParam0, 2);
	func_70(uParam0, 3);
}

void func_162(var uParam0)
{
	func_70(uParam0, 4);
	func_70(uParam0, 5);
}

bool func_163(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_164(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_165(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_166(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

void func_167(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_174(&(uParam0->f_1), 16384);
	}
	else
	{
		func_173(&(uParam0->f_1), 16384);
	}
}

void func_168(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_174(&(uParam0->f_1), 2048);
	}
	else
	{
		func_173(&(uParam0->f_1), 2048);
	}
}

void func_169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_174(&(uParam0->f_1), 256);
	}
	else
	{
		func_173(&(uParam0->f_1), 256);
	}
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_174(&(uParam0->f_1), 128);
	}
	else
	{
		func_173(&(uParam0->f_1), 128);
	}
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_173(uParam0, 256);
	}
	else
	{
		func_174(uParam0, 256);
	}
}

void func_172(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_173(uParam0, 268435456);
	}
	else
	{
		func_174(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_173(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_174(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_173(uParam0, 536870912);
	}
	else
	{
		func_174(uParam0, 536870912);
	}
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_174(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_175()
{
	return Local_132.f_2;
}

void func_176(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7)
{
	((*Local_132.f_174[iParam0 /*8*/])[iParam1 /*7*/])->f_1 = iParam6;
	((*Local_132.f_174[iParam0 /*8*/])[iParam1 /*7*/])->f_2 = iParam7;
	((*Local_132.f_174[iParam0 /*8*/])[iParam1 /*7*/])->f_3 = { vParam2 };
	((*Local_132.f_174[iParam0 /*8*/])[iParam1 /*7*/])->f_6 = fParam5;
}

int func_177()
{
	return Local_132.f_3;
}

bool func_178(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_179(int iParam0)
{
	int iVar0;

	if (!func_146(iParam0))
	{
		return false;
	}
	iVar0 = func_247(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_180(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_181(struct<17> Param0)
{
	var uVar0;

	func_180(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_182(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1;
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 2:
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_183(int iParam0, var uParam1)
{
	bool bVar0;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	bVar0 = iParam0 == false;
	if (!func_250(Local_13.f_7.f_2[iParam0], func_206(iParam0), func_248(iParam0), func_249(iParam0), 1, 0, bVar0, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	switch (iVar0)
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_185(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_251(Local_13.f_7.f_9[iParam0], func_208(iParam0), func_150(iParam0), 1, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

void func_186()
{
	func_97(2);
}

bool func_187(int iParam0)
{
	return func_145(Local_132.f_5, iParam0);
}

bool func_188(int iParam0)
{
	return func_145(Local_132.f_6, iParam0);
}

int func_189()
{
	int iVar0;

	if (Local_13.f_7 == 6)
	{
		return 1;
	}
	iVar0 = func_198(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (func_91() == 2 && Local_13.f_7 < 2)
	{
		if (func_252())
		{
			if (func_253(func_208(0), func_150(0), &((Local_132.f_18.f_15[0 /*2*/])->f_1), 0, 0, 0, 0))
			{
				func_254();
				func_255();
				return 1;
			}
		}
	}
	if (func_91() != 2 && Local_13.f_7 < 2)
	{
		if (func_256(Global_34, func_198(1)))
		{
			func_254();
			func_255();
			return 1;
		}
		else if (ENTITY::_0x8DE41E9902E85756(func_198(1)))
		{
			func_254();
			func_255();
			return 1;
		}
	}
	return 0;
}

void func_190()
{
	if (func_257())
	{
		func_258(5);
	}
}

void func_191()
{
	if (func_220())
	{
		func_259(&(Local_13.f_7.f_6), 0);
		func_258(1);
	}
}

void func_192()
{
	if (func_200(8))
	{
		func_258(2);
	}
	else if (func_260(32))
	{
		func_258(7);
	}
}

void func_193()
{
	if (func_260(64))
	{
		func_258(3);
	}
	else if (func_200(16))
	{
		func_258(4);
	}
}

void func_194()
{
	if (!func_260(64))
	{
		func_258(2);
	}
}

void func_195()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = func_198(1);
	switch (func_91())
	{
		case 0:
		case 1:
			if (func_200(4) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > 7.5f)
			{
				func_258(6);
			}
			break;
		case 2:
			if (func_200(4))
			{
				func_258(6);
			}
			break;
	}
}

void func_196()
{
	if (func_260(32))
	{
		func_258(6);
	}
}

void func_197()
{
	if (func_200(256))
	{
		func_258(6);
	}
}

int func_198(int iParam0)
{
	return (Local_132.f_18.f_2[iParam0 /*4*/])->f_1;
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)
{
	return func_145(Local_132.f_18.f_51, iParam0);
}

int func_201(int iParam0)
{
	if (!func_146(iParam0))
	{
		return 0;
	}
	if (!func_179(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_202(var uParam0, int iParam1)
{
	func_261(uParam0, iParam1);
}

void func_203(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_262(&Var0, iParam0))
			{
				func_263(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_204(int iParam0)
{
}

void func_205(int iParam0)
{
}

int func_206(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return joaat("a_c_dogstreet_01");
		case 1:
			if (Local_13.f_7.f_13 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				switch (iVar0)
				{
					case 1:
						Local_13.f_7.f_13 = -2105110696;
						break;
					case 2:
						Local_13.f_7.f_13 = 937367983;
						break;
					default:
						Local_13.f_7.f_13 = -2105110696;
						break;
				}
			}
			return Local_13.f_7.f_13;
		case 2:
			switch (Local_13.f_7.f_12)
			{
				case 0:
					return 1075605185;
				case 1:
					return 1075605185;
				case 2:
					return 641402963;
				default:
					break;
			}
			return 1075605185;
			return 0;
		}

bool func_207(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_lootablemoneybox");
		default:
			break;
	}
	return 0;
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "amb_creature_mammal@world_dog_barking_up@base";
		case 1:
			return "script_re@hobo_dog";
		default:
			break;
	}
	return "";
}

void func_210(struct<2> Param0)
{
	if (func_239(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_239(Param0)))
	{
		STATS::_0x99230691875FC218(func_237(Param0), func_239(Param0), Global_35);
	}
}

void func_211()
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
			if (!func_140(((*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/])->f_3))
			{
				if (!func_141((*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/]))
				{
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_132.f_15, 0f, ((*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/])->f_3) };
					(*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/] = GRAPHICS::_0xFA50F79257745E74(vVar2, ((*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/])->f_6, ((*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/])->f_2, ((*Local_132.f_174[iVar0 /*8*/])[iVar1 /*7*/])->f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_212(int iParam0)
{
	var uVar0;
	int iVar1;

	uVar0 = func_264(iParam0);
	iVar1 = func_198(iParam0);
	PED::_0x1902C4CFCC5BE57C(iVar1, uVar0);
	PED::_0xCC8CA3E88256E58F(iVar1, 0, 1, 1, 1, 0);
}

void func_213(int iParam0, bool bParam1, bool bParam2)
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

bool func_214(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("group_sniper"):
		case -1101297303:
		case -594562071:
		case joaat("group_pistol"):
		case joaat("group_shotgun"):
		case joaat("group_rifle"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26386 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_265(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26386)
						{
							if (func_265(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_28() == -1 && !func_266(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_34)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_26386) && iParam0 != Global_34) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case joaat("group_pistol"):
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case joaat("group_sniper"):
			case -594562071:
			case joaat("group_shotgun"):
			case joaat("group_rifle"):
				if (func_266(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_34)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_34 && func_265(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
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
		func_267(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_268(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_269(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			switch (Local_13.f_7.f_12)
			{
				case 0:
					return "RE005_MALE2";
				case 1:
					return "RE005_MALE3";
				case 2:
					return "RE005_FEMALE4";
				default:
					break;
			}
			return "RE005_MALE2";
	}
	return "";
}

void func_216(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_270(uParam0, iParam1, sParam2))
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

void func_217(var uParam0)
{
	func_271(OBJECT::_0x08C5825A2932EA7B(uParam0));
}

float func_218(int iParam0)
{
	int iVar0;

	iVar0 = func_175();
	switch (iVar0)
	{
		case 0:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 70.465f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 54.12f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -84.27f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 111.63f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 128.38f;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 49.57f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 87.7f;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -82.25f;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -8.79f;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 63.07f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -34.4f;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 161.19f;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -56.3f;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 98.58f;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 135.41f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

void func_219(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		*iParam10 = func_272(iParam0, vParam1, iParam13, iParam14);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		if (!func_140(vParam4) || !func_140(vParam7))
		{
			func_273(*iParam10, vParam4, vParam7);
		}
		func_274(iParam10);
		func_275(*iParam10, iParam16);
		func_276(*iParam10, iParam11, iParam12, iParam15);
	}
}

bool func_220()
{
	return (func_103(32) || func_102(32, 255));
}

int func_221(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_277(iParam0, 2087069356) };
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

void func_222(int iParam0)
{
	if (func_145(&(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), iParam0))
	{
		func_174(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], iParam0);
	}
}

void func_223()
{
}

void func_224()
{
}

int func_225()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_132.f_14))
	{
		return 0;
	}
	return 1;
}

void func_226()
{
	if (func_257())
	{
		return;
	}
	if (func_91() == 1 && Local_13.f_7 >= 4)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_198(0)))
	{
		if (func_278(func_198(0), 0, &(Local_132.f_18.f_18), &(Local_132.f_18.f_49), 0, 0))
		{
			func_279(0);
		}
		if (ENTITY::IS_ENTITY_DEAD(func_198(0)))
		{
			if (func_280(func_198(0), PLAYER::PLAYER_PED_ID()))
			{
				func_281(-985005225, 1, 0);
			}
			func_279(0);
		}
	}
}

void func_227(int iParam0)
{
	if (Local_132.f_18.f_1 != iParam0)
	{
		Local_132.f_18.f_1 = iParam0;
	}
}

void func_228()
{
	int iVar0;

	Local_132.f_18.f_50 = -1;
	Local_132.f_18.f_51 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_132.f_18.f_51 = (Local_132.f_18.f_51 || (vLocal_35[iVar0 /*3*/])->f_1);
			Local_132.f_18.f_50 = (Local_132.f_18.f_50 && (vLocal_35[iVar0 /*3*/])->f_1);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if ((vLocal_35[iVar0 /*3*/])->f_1.f_1 != 0)
				{
					Local_13.f_7.f_14 = (vLocal_35[iVar0 /*3*/])->f_1.f_1;
				}
			}
		}
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = func_198(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 55f && func_282(iVar0, iVar1, 1, 1114636288 /* Float: 60f */, 0))
		{
			func_254();
		}
		func_283(iVar1, iVar0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_198(1)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_198(1)))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(func_198(1), true, false) };
		if (!func_284(16384, 255))
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &fVar5, 0) && vVar2.z != fVar5)
			{
				ENTITY::SET_ENTITY_COORDS(func_198(1), func_248(1), true, false, true, true);
				ENTITY::_0x9587913B9E772D29(func_198(1), 0);
			}
			if (!ENTITY::GET_ENTITY_HEADING(func_198(1)) == func_249(1))
			{
				ENTITY::SET_ENTITY_HEADING(func_198(1), func_249(1));
				ENTITY::_0x9587913B9E772D29(func_198(1), 0);
			}
			func_285(16384);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_148(0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_148(0)))
	{
		vVar6 = { ENTITY::GET_ENTITY_COORDS(func_148(0), true, false) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar6, &fVar9, 0) && vVar6.z != fVar9)
		{
			ENTITY::SET_ENTITY_COORDS(func_148(0), func_150(0), true, false, true, true);
			ENTITY::_0x9587913B9E772D29(func_148(0), 0);
		}
		if (!ENTITY::GET_ENTITY_HEADING(func_148(0)) == func_218(0))
		{
			ENTITY::SET_ENTITY_HEADING(func_148(0), func_218(0));
			ENTITY::_0x9587913B9E772D29(func_148(0), 0);
		}
	}
}

void func_230()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = func_198(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		func_283(iVar1, iVar0, 1);
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > 6f)
		{
			if (!func_284(32, 255) && func_286(&(Local_13.f_7.f_6)) > 300000)
			{
				func_285(32);
			}
		}
		else if (!func_284(8, 255))
		{
			func_255();
			if (!func_284(8, 255))
			{
				func_287(&(Local_132.f_18.f_151));
				func_285(8);
			}
		}
	}
	func_288(0, -89429847, 0);
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = func_198(0);
	iVar2 = func_198(1);
	fVar5 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false));
	vVar6 = { func_289(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), iVar1, 1.75f) };
	func_288(0, -89429847, 0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, func_290());
	}
	switch (func_91())
	{
		case 0:
		case 1:
			fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar2, false, false));
			fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar2, false, false));
			if (fVar5 < 30f)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iVar1, vVar6, 0.5f, 0.5f, 2f, false, true, 0))
				{
					if (func_236(iVar1, 242628503, 1, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[1 /*4*/])->f_2));
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 3f, -1, 0.75f, false, func_291(vVar6, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 1));
						func_292(iVar1, &((Local_132.f_18.f_2[1 /*4*/])->f_2), 0, 0, 1, 1);
					}
				}
			}
			else if (fVar3 < fVar4)
			{
				if (!func_284(64, 255))
				{
					func_285(64);
				}
			}
			if (fVar4 < 10f)
			{
				func_293(&(Local_13.f_7.f_6));
				func_295(func_294(-1892463704, -1244015106), 1);
				func_255();
				func_285(16);
			}
			break;
		case 2:
			fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), func_296());
			fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_296());
			if (fVar5 < 30f)
			{
				if (fVar3 > 2.5f)
				{
					if (func_236(iVar1, 713668775, 1, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar1, func_296(), 3f, -1, 0.25f, false, func_291(vVar6, func_150(0), 1));
					}
				}
				else if (func_236(iVar1, 242628503, 1, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_150(0), 0);
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, -904105760, -1, 1, 0, -1082130432, 0);
					func_292(iVar1, &((Local_132.f_18.f_2[1 /*4*/])->f_2), 0, 0, 1, 1);
				}
			}
			else if (fVar3 < fVar4)
			{
				if (!func_284(64, 255))
				{
					func_285(64);
				}
			}
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_296()) < 10f && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), func_296()) < 10f)
			{
				func_293(&(Local_13.f_7.f_6));
				func_295(func_294(-1892463704, -1244015106), 1);
				func_255();
				func_285(16);
			}
			break;
	}
}

void func_232()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = func_198(0);
	func_288(0, -89429847, 0);
	if (func_236(iVar1, -1162159953, 1, 0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 6f)
		{
			if (func_284(64, 255))
			{
				func_297(64);
			}
		}
		else
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_209(0), func_298(0), iVar0, func_299(func_209(0), func_298(0)), 8f, -8f, 0, 0, 0, 0, 90f, 0, 262144, -1082130432);
		}
	}
}

void func_233()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_198(0);
	iVar1 = func_198(1);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_286(&(Local_13.f_7.f_6)) < 300000 && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		switch (func_91())
		{
			case 0:
				func_147(0);
				PED::_0x6569F31A01B4C097(iVar1, 4, 1);
				if (!func_200(256))
				{
					if (func_256(iVar2, iVar1))
					{
						func_300(3);
					}
					else if (ENTITY::_0xEF2D9ED7CE684F08(iVar1) == iVar2)
					{
						if (!func_284(8192, 255))
						{
							if (func_301(iVar2) == func_302(iVar1))
							{
								func_281(-1648877470, 1, 0);
								func_285(8192);
							}
						}
					}
					else if (ENTITY::_0x8DE41E9902E85756(iVar1))
					{
						if (func_303())
						{
							func_304();
							func_285(4);
						}
						func_300(2);
					}
					else
					{
						func_300(1);
					}
				}
				break;
			case 1:
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), func_296()) < 7.5f || func_305(1))
				{
					func_306(1);
					if (!PED::IS_PED_IN_COMBAT(func_198(2), 0))
					{
						if (func_236(func_198(2), -2117564886, 1, 0) && func_260(2048))
						{
							PED::_0x7DE9692C6F64CFE8(func_198(2), 0, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_198(2), func_248(1), 30f, 0, 0);
						}
					}
					if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
					{
						if (func_236(iVar0, -2117564886, 1, 0) && func_260(2048))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
							PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
							LAW::_0xFFEBE5AA96BC2E4E(iVar0, 1224055398, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
							PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, true);
							FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
							FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 65, true);
							TASK::TASK_COMBAT_HATED_TARGETS(iVar0, -1082130432);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(func_198(2)))
				{
					if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
					{
						if (!func_305(0))
						{
							func_307(func_198(2), iVar2, 0, 291934926, 0);
						}
						else if (!func_305(1))
						{
							func_307(func_198(2), iVar2, 1, 291934926, 0);
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (!func_305(2))
						{
							func_147(0);
							AUDIO::_0x36559148B78853B3(1, 0, 0);
							func_307(func_198(2), iVar2, 2, 291934926, 0);
						}
					}
				}
				else
				{
					func_308();
					func_147(2);
				}
				if (!func_200(4))
				{
					if (ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::IS_ENTITY_DEAD(func_198(2)))
					{
						if (ENTITY::_0x8DE41E9902E85756(iVar1))
						{
							func_304();
							func_285(4);
						}
					}
				}
				if (ENTITY::_0x8DE41E9902E85756(iVar1))
				{
					func_303();
				}
				break;
			case 2:
				if (func_236(iVar0, 242628503, 1, 0) && !func_284(4, 255))
				{
					TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[1 /*4*/])->f_2));
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_296()) > 1f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_296(), 1.5f, -1, 0.25f, false, 40000f);
					}
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_150(0), 0);
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, -904105760, -1, 1, 0, -1082130432, 0);
					func_292(iVar0, &((Local_132.f_18.f_2[1 /*4*/])->f_2), 0, 0, 1, 1);
				}
				if (func_252())
				{
					if (!func_60(8))
					{
						func_255();
					}
					if (func_303())
					{
						func_147(0);
					}
					if (!func_284(4, 255))
					{
						if (func_253(func_208(0), func_150(0), &((Local_132.f_18.f_15[0 /*2*/])->f_1), 0, 0, 0, 0))
						{
							func_304();
							func_285(4);
						}
					}
					else
					{
						if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2)) != 2)
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2));
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
							func_309(iVar0, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
						}
						if (func_236(iVar0, -391815063, 1, 0))
						{
							TASK::TASK_WALK_AWAY(iVar0, func_148(0));
						}
					}
				}
				break;
		}
	}
}

void func_234()
{
	int iVar0;
	int iVar1;

	iVar0 = func_198(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_236(iVar0, 518218985, 1, 0))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1082130432, -1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) > 200f)
	{
		func_285(32);
	}
}

void func_235()
{
	func_59();
	if (!func_200(256))
	{
		if (func_200(128))
		{
			func_300(4);
		}
		else if (func_236(func_198(0), 518218985, 1, 0))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(func_198(0), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), 4, 0, -1082130432, -1, 0);
			PED::SET_PED_KEEP_TASK(func_198(0), true);
			if ((ENTITY::DOES_ENTITY_EXIST(func_198(2)) && func_310(&(Local_132.f_18.f_18)) != func_198(2)) && !PED::IS_PED_IN_COMBAT(func_198(2), 0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(func_198(2), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), 4, 0, -1082130432, -1, 0);
			}
			func_285(256);
		}
	}
}

int func_236(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (!bParam3 && func_199(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_237(var uParam0, var uParam1)
{
	return uParam0;
}

int func_238(int iParam0)
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

int func_239(struct<2> Param0)
{
	return func_311(Param0);
}

void func_240(struct<2> Param0, var uParam2)
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
	switch (func_237(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_313(func_312(Param0));
			iVar5 = func_314(iVar4);
			if (!func_315(iVar5, 0))
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

int func_241(int iParam0, int iParam1)
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

void func_242(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_316(&Var0);
}

int func_243(int iParam0)
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

int func_244(int iParam0)
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

void func_245(var uParam0, int iParam1, int iParam2)
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

void func_246(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_247(int iParam0)
{
	if (!func_146(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

Vector3 func_248(int iParam0)
{
	int iVar0;

	iVar0 = func_175();
	switch (iVar0)
	{
		case 0:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 2774.431f, 463.4135f, 64.40166f;
						case 1:
							return 2657.49f, 425.1187f, 85.5826f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 2774.431f, 463.4135f, 64.40166f;
						case 1:
							return 2657.49f, 425.1187f, 85.5826f;
						case 2:
							return 2651.942f, 427.2648f, 86.7972f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2774.431f, 463.4135f, 64.40166f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1428.817f, -1812.995f, 57.37384f;
						case 1:
							return 1466.28f, -1722.796f, 61.22633f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1428.817f, -1812.995f, 57.37384f;
						case 1:
							return 1466.28f, -1722.796f, 61.22633f;
						case 2:
							return 1464.552f, -1720.882f, 61.4095f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1428.817f, -1812.995f, 57.37384f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 2578.893f, -852.3694f, 41.3078f;
						case 1:
							return 2455.373f, -871.7141f, 40.70958f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 2578.893f, -852.3694f, 41.3078f;
						case 1:
							return 2455.373f, -871.7141f, 40.70958f;
						case 2:
							return 2434.231f, -862.5032f, 40.75406f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2578.893f, -852.3694f, 41.3078f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 2798.119f, 1432.187f, 77.71185f;
						case 1:
							return 2894.529f, 1513.545f, 63.47701f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 2798.119f, 1432.187f, 77.71185f;
						case 1:
							return 2894.529f, 1513.545f, 63.47701f;
						case 2:
							return 2890.523f, 1472.245f, 59.16743f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2798.119f, 1432.187f, 77.71185f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1212.513f, 423.0333f, 90.69851f;
						case 1:
							return 1245.06f, 524.1508f, 87.54594f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1212.513f, 423.0333f, 90.69851f;
						case 1:
							return 1245.06f, 524.1508f, 87.54594f;
						case 2:
							return 1288.344f, 527.3176f, 86.53186f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1212.513f, 423.0333f, 90.69851f;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -28.69774f, 1111.23f, 167.9945f;
						case 1:
							return 57.35834f, 1120.588f, 183.4017f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -28.69774f, 1111.23f, 167.9945f;
						case 1:
							return 57.35834f, 1120.588f, 183.4017f;
						case 2:
							return 74.25232f, 1130.604f, 186.8596f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -28.69774f, 1111.23f, 167.9945f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -546.6091f, -298.2057f, 52.56811f;
						case 1:
							return -473.0372f, -247.8413f, 61.17145f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -546.6091f, -298.2057f, 52.56811f;
						case 1:
							return -473.0372f, -247.8413f, 61.17145f;
						case 2:
							return -448.8038f, -215.7537f, 57.9648f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -546.6091f, -298.2057f, 52.56811f;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1403.688f, 383.7506f, 102.2472f;
						case 1:
							return -1533.494f, 441.2002f, 105.3608f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1403.688f, 383.7506f, 102.2472f;
						case 1:
							return -1533.494f, 441.2002f, 105.3608f;
						case 2:
							return -1555.162f, 438.5677f, 106.5573f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1403.688f, 383.7506f, 102.2472f;
							Jump @3232; //curOff = 1773
							switch (func_177())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -1510.116f, -883.8221f, 88.72778f;
										case 1:
											return -1548.697f, -789.7269f, 106.8148f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -1510.116f, -883.8221f, 88.72778f;
										case 1:
											return -1548.697f, -789.7269f, 106.8148f;
										case 2:
											return -1521.302f, -758.5893f, 108.832f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -1510.116f, -883.8221f, 88.72778f;
										default:
											break;
									}
									break;
							}
							Jump @3232; //curOff = 1981
							switch (func_177())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -1459.752f, -1915.602f, 50.93545f;
										case 1:
											return -1281.514f, -1968.428f, 45.10072f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -1459.752f, -1915.602f, 50.93545f;
										case 1:
											return -1281.514f, -1968.428f, 45.10072f;
										case 2:
											return -1282.607f, -1986.83f, 42.87173f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -1459.752f, -1915.602f, 50.93545f;
										default:
											break;
									}
									break;
							}
							Jump @3232; //curOff = 2189
							switch (func_177())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -2470.018f, -2426.993f, 59.1458f;
										case 1:
											return -2602.479f, -2345.139f, 70.25112f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -2470.018f, -2426.993f, 59.1458f;
										case 1:
											return -2602.479f, -2345.139f, 70.25112f;
										case 2:
											return -2562.39f, -2326.724f, 69.35632f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -2470.018f, -2426.993f, 59.1458f;
										default:
											break;
									}
									break;
							}
							Jump @3232; //curOff = 2397
							switch (func_177())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -3092.935f, -3166.527f, -1.36638f;
										case 1:
											return -3200.87f, -3208.638f, -10.25622f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -3092.935f, -3166.527f, -1.36638f;
										case 1:
											return -3200.87f, -3208.638f, -10.25622f;
										case 2:
											return -3208.022f, -3231.347f, -2.59133f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -3092.935f, -3166.527f, -1.36638f;
										default:
											break;
									}
									break;
							}
							Jump @3232; //curOff = 2605
							switch (func_177())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -3685.624f, -2769.247f, -15.14988f;
										case 1:
											return -3746.965f, -2860.01f, -15.17363f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -3685.624f, -2769.247f, -15.14988f;
										case 1:
											return -3746.965f, -2860.01f, -15.17363f;
										case 2:
											return -3789.804f, -2888.626f, -13.78955f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -3685.624f, -2769.247f, -15.14988f;
										default:
											break;
									}
									break;
							}
							Jump @3232; //curOff = 2813
							switch (func_177())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -4668.993f, -3706.819f, 12.54352f;
										case 1:
											return -4615.281f, -3670.614f, 12.45782f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -4668.993f, -3706.819f, 12.54352f;
										case 1:
											return -4615.281f, -3670.614f, 12.45782f;
										case 2:
											return -4628.914f, -3659.899f, 12.13649f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -4668.993f, -3706.819f, 12.54352f;
										default:
											break;
									}
									break;
							}
							Jump @3232; //curOff = 3021
							switch (func_177())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -5194.483f, -2883.913f, 2.32447f;
										case 1:
											return -5213.167f, -2971.82f, 9.00706f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -5194.483f, -2883.913f, 2.32447f;
										case 1:
											return -5213.167f, -2971.82f, 9.00706f;
										case 2:
											return -5189.956f, -3002.793f, 9.2269f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -5194.483f, -2883.913f, 2.32447f;
										default:
											break;
									}
									break;
							}
							return 0f, 0f, 0f;
						}

float func_249(int iParam0)
{
	int iVar0;

	iVar0 = func_175();
	switch (iVar0)
	{
		case 0:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 341.8879f;
						case 1:
							return 179.53f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 341.8879f;
						case 1:
							return 297.9582f;
						case 2:
							return 314.5825f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 341.8879f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 89.54f;
						case 1:
							return -126.9f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 89.54f;
						case 1:
							return -126.9f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 89.54f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -109.63f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -109.63f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -109.63f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 172.69f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 172.69f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 172.69f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 42.13f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 42.13f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 42.13f;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 157.51f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 157.51f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 157.51f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 91.59f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 91.59f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 91.59f;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -106.5f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -106.5f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -106.5f;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -159.35f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -159.35f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -159.35f;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 79.03f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 79.03f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 79.03f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -101.34f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -101.34f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -101.34f;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -34.96f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -34.96f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -34.96f;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -19.7f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -19.7f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -19.7f;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 28.35f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 28.35f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 28.35f;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (func_177())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -15.75f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -15.75f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -15.75f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

int func_250(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_207(iParam1))
	{
		return 0;
	}
	iVar0 = func_317(iParam1, vParam2, iParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

int func_251(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_207(iParam1))
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

int func_252()
{
	if (func_149(func_148(0)))
	{
		return 1;
	}
	return 0;
}

bool func_253(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_272(iParam0, vParam1, iParam5, iParam6);
	}
	iVar1 = 1;
	iVar0 = 1;
	if (bParam7)
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iParam8))
		{
			iVar1 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		iVar0 = func_318(iParam4, 1);
	}
	return (iVar1 && iVar0);
}

void func_254()
{
	int iVar0;

	if (!func_102(32, 255))
	{
		func_319(Local_132.f_1, Local_132.f_3);
		if (!func_102(1024, 255))
		{
			func_320(Local_132.f_1);
			func_122(1024);
		}
		iVar0 = func_241(Local_132.f_1, Local_132.f_2);
		func_321(iVar0);
		func_322(iVar0);
		func_117(2);
		func_323(Local_132.f_9);
		func_324(Local_132.f_1);
		func_122(32);
	}
}

void func_255()
{
	if (!func_60(2))
	{
		return;
	}
	func_117(8);
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::_0x09B83E68DE004CD4(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

bool func_257()
{
	return (func_103(64) || func_102(64, 255));
}

void func_258(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

void func_259(var uParam0, bool bParam1)
{
	if (bParam1 || !func_325(uParam0))
	{
		func_293(uParam0);
	}
}

bool func_260(int iParam0)
{
	return func_145(Local_132.f_18.f_50, iParam0);
}

void func_261(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_262(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_132.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_132)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_132.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_132.f_3)
	{
		return 0;
	}
	return 1;
}

void func_263(int iParam0)
{
	int iVar0;

	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case 1412485432:
			func_326(iParam0->f_11, 2);
			break;
	}
}

int func_264(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			switch (Local_13.f_7.f_13)
			{
				case -2105110696:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
					switch (iVar0)
					{
						case 1:
							return 2086728021;
						case 2:
							return 234787986;
						case 3:
							return 684575280;
						case 4:
							return 986148387;
						default:
							break;
					}
					return 2086728021;
				case 937367983:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
					switch (iVar0)
					{
						case 1:
							return -879226938;
						case 2:
							return -720821592;
						default:
							break;
					}
					return -879226938;
			}
			break;
		case 2:
			switch (Local_13.f_7.f_12)
			{
				case 0:
					if (func_327())
					{
						return 914211621;
					}
					else
					{
						return -1894771355;
					}
					break;
				case 1:
					if (func_327())
					{
						return 684074934;
					}
					else
					{
						return -1445377289;
					}
					break;
				case 2:
					if (func_327())
					{
						return -206652020;
					}
					else
					{
						return -1147539848;
					}
					break;
				default:
					if (func_327())
					{
						return 914211621;
					}
					else
					{
						return -1894771355;
					}
					break;
			}
			break;
	}
	return 41788943;
}

bool func_265(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_266(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_267(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, 0))
	{
		Var0 = { func_328(bParam0, 0, 1) };
		if (func_329(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_330(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_331(bParam0, Var0, Var0.f_4, 0) };
				func_332(bParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_333(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, 0))
		{
			return 0;
		}
		func_334(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
		func_335(bParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, 0))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_268(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
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

bool func_269(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

bool func_270(var uParam0, int iParam1, char* sParam2)
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

void func_271(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "chest_open");
		}
	}
}

int func_272(int iParam0, vector3 vParam1, int iParam4, int iParam5)
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

void func_273(int iParam0, vector3 vParam1, vector3 vParam4)
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

void func_274(int iParam0)
{
	if (func_336())
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "loot_mp_mission_only", true);
	}
}

void func_275(int iParam0, int iParam1)
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

void func_276(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uVar0 = func_337(iParam0);
		func_338(iParam0, iParam1, iParam2, uVar0);
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

struct<2> func_277(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_339(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_294(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

int func_278(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_340(uParam2, 1, iVar0);
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
			if (func_341(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_342(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_343(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_344(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_345(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_20 && func_346(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_342(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_347(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_348(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_342(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_349(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_342(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939178->f_23) < 300)
			{
				if (func_350(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_350(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_342(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_351(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939178->f_19 || uParam2->f_12 < 20f)
			{
				if (func_352(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_353(uParam2, 4000))
				{
					if ((func_354(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_355(uParam2, iParam0)) && func_356(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_342(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_354(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_355(uParam2, iParam0)) && func_356(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1939178->f_34 == 0)
			{
				if (Global_1939178->f_35 != 0)
				{
					if (func_357(iParam0, Global_1939178->f_35))
					{
						func_358();
						*uParam3 = 2;
						func_342(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_359(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_360() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_358();
						*uParam3 = 2;
						func_342(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_361())
				{
					if (func_357(iParam0, Global_1939178->f_36))
					{
						func_358();
						*uParam3 = 2;
						func_342(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_362(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_342(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_364(func_363(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_365(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*uParam3 = 1048576;
						func_342(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_366(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_367(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_342(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_368(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_369(uParam2, 4000))
				{
					if (func_370(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_342(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_371(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_342(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_372(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_342(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_279(bool bParam0)
{
	int iVar0;

	if (!func_102(64, 255))
	{
		iVar0 = func_241(Local_132.f_1, Local_132.f_2);
		func_321(iVar0);
		if (!func_102(1024, 255))
		{
			func_320(Local_132.f_1);
			func_122(1024);
		}
		func_322(iVar0);
		if (bParam0)
		{
			func_373(Local_132.f_1, Local_132.f_4);
		}
		func_122(64);
	}
}

int func_280(int iParam0, int iParam1)
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

void func_281(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_374())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_375(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_375(iParam0, 1) /*4*/])->f_2++;
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
	func_376(&Var0, uVar7);
}

bool func_282(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_377(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_378(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_283(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	if (fVar0 <= 15f)
	{
		if (func_236(iParam0, -1162159953, 1, 0))
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, func_209(0), func_298(0), iParam1, -1, 8f, -8f, 1, 0, 0, 0, 90f, 0, 262144, -1082130432);
		}
	}
	else if (func_236(iParam0, -2017877118, 1, 0))
	{
		TASK::TASK_PLAY_ANIM(iParam0, func_209(0), func_298(0), 1090519040, -1056964608, -1, 0, 0, 0, 0, 0, 0, 0);
	}
	if (bParam2)
	{
		if (fVar0 <= 150f)
		{
			fVar1 = ENTITY::_0x627520389E288A73(iParam0, func_209(0), func_298(0));
			if ((((fVar1 >= 0.214f && fVar1 <= 0.263f) || (fVar1 >= 0.669f && fVar1 <= 0.707f)) || (fVar1 >= 0.77f && fVar1 <= 0.8f)) || (fVar1 >= 0.917f && fVar1 <= 0.952f))
			{
				if (!func_284(1024, 255))
				{
					MAP::ALLOW_SONAR_BLIPS(true);
					MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
					MAP::_0x0C7A2289A5C4D7C9(46165686, iParam0);
				}
			}
			else if (func_284(1024, 255))
			{
				func_297(1024);
			}
		}
	}
}

int func_284(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (func_145((vLocal_35[iParam1 /*3*/])->f_1, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_285(int iParam0)
{
	func_173(&((vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1), iParam0);
}

int func_286(var uParam0)
{
	if (!func_325(uParam0))
	{
		return 0;
	}
	if (func_379(uParam0))
	{
		return uParam0->f_2;
	}
	return func_380(uParam0->f_1);
}

void func_287(var uParam0)
{
	func_381(uParam0, 0f);
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;

	if (!func_382(255) || func_383((Local_132.f_18.f_2[iParam0 /*4*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 150f)
	{
		func_147(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_132.f_18.f_2[iParam0 /*4*/])))
	{
		Local_132.f_18.f_2[iParam0 /*4*/] = MAP::_0x23F74C2FDA6E7C61(iParam1, func_198(iParam0));
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "NB_HDOG_BLIP_NAME";
				break;
			case 1:
				sVar0 = "NB_HDOG_TREASURE_BLIP";
				break;
			case 2:
				sVar0 = "NB_HDOG_AMBUSHER_BLIP";
				break;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_132.f_18.f_2[iParam0 /*4*/]), sVar0);
	}
	if (iParam2 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_132.f_18.f_2[iParam0 /*4*/]), iParam2);
	}
}

Vector3 func_289(vector3 vParam0, int iParam3, float fParam4)
{
	vector3 vVar0;

	vVar0 = { func_384(vParam0, iParam3, fParam4) };
	return vParam0 + vVar0;
}

float func_290()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(func_198(1), false, false) };
	fVar3 = func_385(func_198(0), vVar0, 1);
	fVar4 = (fVar3 / 15f);
	if (fVar4 > 1f)
	{
		fVar4 = 1f;
	}
	return func_386(0.5f, 2f, fVar4);
}

float func_291(struct<2> Param0, int iParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
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

void func_292(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_293(var uParam0)
{
	func_387(uParam0, 0);
}

struct<2> func_294(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_295(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

Vector3 func_296()
{
	int iVar0;

	iVar0 = func_175();
	switch (iVar0)
	{
		case 0:
			return 2657.878f, 425.9268f, 85.59921f;
		case 1:
			return 1468.795f, -1725.203f, 60.9824f;
		case 2:
			return 2452.772f, -872.9363f, 40.87089f;
		case 3:
			return 2893.27f, 1507.954f, 62.78511f;
		case 4:
			return 1245.028f, 524.1393f, 87.54836f;
		case 5:
			return 53.54184f, 1120.06f, 182.9689f;
		case 6:
			return -473.0888f, -251.5934f, 60.9299f;
		case 7:
			return -1532.264f, 438.3797f, 105.1653f;
		case 8:
			return -1546.588f, -792.2271f, 105.9821f;
		case 9:
			return -1280.21f, -1964.338f, 45.2809f;
		case 10:
			return -2601.117f, -2346.868f, 70.04795f;
		case 11:
			return -3198.064f, -3208.307f, -10.45329f;
		case 12:
			return -3745.8f, -2862.263f, -14.73483f;
		case 13:
			return -4612.711f, -3670.565f, 12.61444f;
		case 14:
			return -5211.202f, -2971.015f, 9.10262f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_297(int iParam0)
{
	func_174(&((vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1), iParam0);
}

char* func_298(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "base";
		case 1:
			return "indicate";
		default:
			break;
	}
	return "";
}

int func_299(char* sParam0, char* sParam1)
{
	return BUILTIN::CEIL((1000f * ENTITY::GET_ANIM_DURATION(sParam0, sParam1)));
}

void func_300(int iParam0)
{
	if ((vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 == 0)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_198(0)) && !func_200(256))
		{
			if (Local_13.f_7.f_14 != iParam0)
			{
				switch (iParam0)
				{
					case 1:
						if (func_236(func_198(0), 242628503, 1, 0))
						{
							func_285(128);
							func_388(func_198(0), 4);
							TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
							TASK::TASK_PLAY_ANIM(0, "amb_creature_mammal@world_dog_resting@stand_enter", "enter_front", 1090519040, -1056964608, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "amb_creature_mammal@world_dog_resting@trans", "resting_trans_sleeping", 1090519040, -1056964608, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "idle_dog", 2f, -1056964608, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "scratch_v2_dog", 1090519040, -1056964608, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "idle_dog", 1090519040, -1056964608, -1, 16389, 0, 0, 0, 0, 0, 0);
							func_292(func_198(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
							(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = iParam0;
						}
						break;
					case 2:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_198(0), "script_re@savage_aftermath@weeping_dog", "idle_dog", 1))
						{
							func_388(func_198(0), 4);
							TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "scratch_dog", 1090519040, -1056964608, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "idle_dog", 1090519040, -1056964608, -1, 16389, 0, 0, 0, 0, 0, 0);
							func_292(func_198(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
							(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = iParam0;
						}
						break;
					case 3:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_198(0), "script_re@savage_aftermath@weeping_dog", "idle_dog", 1))
						{
							func_388(func_198(0), 4);
							TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "getup_right_dog", 1090519040, -2f, -1, 16388, 0, 0, 0, 0, 0, 0);
							func_292(func_198(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
							(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = iParam0;
						}
						break;
					case 4:
						func_388(func_198(0), 12);
						TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
						TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "getup_right_quick_dog", 1090519040, -2f, -1, 16388, 0, 0, 0, 0, 0, 0);
						func_292(func_198(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
						(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = iParam0;
						break;
				}
			}
			switch (Local_13.f_7.f_14)
			{
				case 3:
					if (ENTITY::_0x627520389E288A73(func_198(0), "script_re@savage_aftermath@weeping_dog", "getup_right_dog") > 0.61f)
					{
						TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
						TASK::TASK_FORCE_MOTION_STATE(0, joaat("motionstate_walk"), false);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), 1, 0, -1082130432, -1, 0);
						func_292(func_198(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(func_198(0), true);
						func_285(256);
					}
					break;
				case 4:
					if (ENTITY::_0x627520389E288A73(func_198(0), "script_re@savage_aftermath@weeping_dog", "getup_right_quick_dog") > 0.58f)
					{
						TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
						TASK::TASK_FORCE_MOTION_STATE(0, joaat("motionstate_run"), false);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), 4, 0, -1082130432, -1, 0);
						func_292(func_198(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(func_198(0), true);
						func_285(256);
					}
					break;
			}
		}
	}
	else if ((vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 == Local_13.f_7.f_14)
	{
		(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = 0;
	}
}

int func_301(int iParam0)
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

int func_302(int iParam0)
{
	return iParam0;
}

int func_303()
{
	var uVar0;
	struct<2> Var4;
	int iVar17;

	if (!func_200(512))
	{
		Var4.f_1 = 11;
		iVar17 = func_389(&(Local_132.f_18.f_151));
		if (iVar17 < 60001)
		{
			iVar17 = 60001;
		}
		func_390(&uVar0, &Var4, 1891766540, 1038512660, 1, 1, 1, 1, iVar17, Local_132.f_9);
		func_285(512);
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_304()
{
	if (!func_60(8))
	{
		return;
	}
	func_117(16);
}

bool func_305(int iParam0)
{
	return MISC::IS_BIT_SET(Local_132.f_18.f_52, iParam0);
}

void func_306(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!func_284(2048, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_198(2)) && !PED::IS_PED_DEAD_OR_DYING(func_198(2), true))
		{
			if (bParam0)
			{
				func_288(2, joaat("BLIP_STYLE_ENEMY"), 0);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, PED::GET_PED_RELATIONSHIP_GROUP_HASH(func_198(2)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
			if (ENTITY::DOES_ENTITY_EXIST(func_198(0)))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(func_198(2)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(func_198(0)));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_198(0)) && !PED::IS_PED_DEAD_OR_DYING(func_198(0), true))
		{
			if (bParam0)
			{
				func_147(0);
				func_288(0, joaat("BLIP_STYLE_ENEMY"), 0);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, PED::GET_PED_RELATIONSHIP_GROUP_HASH(func_198(0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
			if (ENTITY::DOES_ENTITY_EXIST(func_198(0)))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(func_198(0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(func_198(2)));
			}
		}
		func_285(2048);
	}
}

int func_307(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!bParam4 && !NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	func_391(iParam2);
	return 1;
}

void func_308()
{
	int iVar0;
	int iVar1;

	if (!func_284(4096, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_198(2)))
		{
			if (ENTITY::IS_ENTITY_DEAD(func_198(2)))
			{
				iVar1 = 2102333076;
				if (!ENTITY::_0x1E804EA9B12030A4(func_198(2), &iVar0))
				{
					ENTITY::_0x8C03CD6B5E0E85E8(func_198(2), iVar1);
				}
				else if (iVar0 == iVar1)
				{
					func_285(4096);
				}
				else
				{
					ENTITY::_0x8C03CD6B5E0E85E8(func_198(2), 2102333076);
				}
			}
		}
	}
}

void func_309(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
		}
	}
}

int func_310(var uParam0)
{
	return uParam0->f_10;
}

int func_311(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_392(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_312(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_392(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_313(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_163(&Var1, uParam0))
	{
		iVar0 = ((func_393() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_314(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_315(int iParam0, int iParam1)
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

void func_316(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 12, &(Global_1051202->f_16[15]));
	func_394(uParam0, uParam0->f_1);
}

int func_317(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_0x283978A15512B2FE(iVar0, 1);
	}
	return iVar0;
}

int func_318(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x640A602946A8C972(*iParam0);
	iVar1 = TASK::_0x849791EBBDBA0362(*iParam0);
	iVar2 = TASK::_0x01AF8A3729231A43(*iParam0);
	if (iVar2 <= 0)
	{
		if (bParam1)
		{
			if (iVar1 >= iVar0)
			{
				return 1;
			}
		}
		else if (iVar1 >= 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_319(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_277(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_93(&Var0, 4) && func_395(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_320(int iParam0)
{
	func_396();
	func_397(iParam0);
}

void func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_99(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_398(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_100((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_399(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_399(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_399(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_399(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_322(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_316(&Var0);
}

void func_323(struct<2> Param0)
{
	struct<32> Var0;

	if (func_239(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_239(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_239(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_400(Param0, &Var0))
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

void func_324(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_277(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

bool func_325(var uParam0)
{
	return func_401(*uParam0, 1);
}

void func_326(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_132.f_18.f_52, iParam0))
	{
		return;
	}
	func_216(&(Local_132.f_18.f_53), (Local_132.f_18.f_2[iParam1 /*4*/])->f_1, func_215(iParam1), 0);
	if ((Local_132.f_18.f_2[iParam1 /*4*/])->f_3 != -1 && func_403(func_402((Local_132.f_18.f_2[iParam1 /*4*/])->f_3)))
	{
		return;
	}
	if (func_405(&(Local_132.f_18.f_53), func_404(func_402(iParam0)), 0, -1, 0, 0))
	{
		(Local_132.f_18.f_2[iParam1 /*4*/])->f_3 = iParam0;
		MISC::SET_BIT(&(Local_132.f_18.f_52), iParam0);
	}
}

bool func_327()
{
	var uVar0;
	var uVar1;

	func_406(&uVar0, &uVar1);
	return uVar0;
}

struct<5> func_328(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_407(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_408(bParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_331(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_409(bParam1) };
			if (iParam2 && func_410(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_329(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_329(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_330(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_411(bParam1) };
			switch (func_412(bParam0))
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
			if (func_413(bParam0, -1823706425))
			{
				Var0 = { func_331(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_413(bParam0, -1483207246))
			{
				Var0 = { func_331(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1911121386))
			{
				Var0 = { func_331(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_413(bParam0, -1653629781))
			{
				Var0 = { func_331(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_414(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_413(bParam0, -1653629781))
			{
				Var0 = { func_331(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_329(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_415(bParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_330(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_416(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_331(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_417(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_418(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_332(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_419(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_414(*uParam1, &Var0, bParam6, 0, -1))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_333(bParam6))
	{
		iVar14 = -1;
		if (func_28() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_420(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_421(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_418(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_333(bool bParam0)
{
	if (func_28() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_418(bParam0));
}

int func_334(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_422(iParam0))
	{
		return 0;
	}
	if (!func_333(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_335(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(bParam0))
	{
		iVar2 = func_423(WEAPON::_0xD3750CCC00635FC2(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, bParam0, iVar1);
		}
	}
}

bool func_336()
{
	return &Global_3145858 != 371211549;
}

int func_337(int iParam0)
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

var func_338(int iParam0, int iParam1, int iParam2, var uParam3)
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

int func_339(int iParam0)
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

void func_340(var uParam0, bool bParam1, int iParam2)
{
	func_424(iParam2);
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
		uParam0->f_13 = func_425(0);
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
							func_173(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_426(1, 1))
						{
							func_173(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_426(1, 1) || *uParam0 & 8192 != 0))
				{
					func_174(uParam0, 33554432);
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
			if (func_427(uParam0))
			{
				uParam0->f_15 = func_360();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_360() - uParam0->f_15) > 500)
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
	func_428(uParam0);
}

int func_341(int iParam0, var uParam1)
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
			if (!func_429(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_430(iParam0, iVar2) <= func_431(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_342(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_432(iParam2, 1, 1, 1, 0))
	{
		func_173(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_433(uParam1, 1);
	func_434();
}

int func_343(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_435(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_436(uParam1);
			if (func_437(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_438(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_433(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_439(uParam1))
						{
							func_433(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_344(int iParam0, int iParam1, var uParam2)
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
	if (func_440(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_436(uParam2);
		if (func_437(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_438(uParam2)
				{
					func_433(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_345(int iParam0, var uParam1)
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
	if (func_429(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_438(uParam1)
		{
			fVar3 = func_436(uParam1);
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

int func_346(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_441(bParam1, bParam2, bParam3);
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

int func_347(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_360();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_348(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_442(uParam2);
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
			if (func_356(uParam2, iParam1))
			{
				func_433(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_349(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_443(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_356(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_433(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_350(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_444(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_433(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_433(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_445(iParam1, vVar0, vVar4))
					{
						func_433(uParam2, 1);
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
					func_433(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_445(iParam1, vVar0, vVar7))
					{
						func_433(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_351(int iParam0, var uParam1)
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
		if (!func_429(iParam0, uParam1, &(Global_1939178->f_28[iVar0])) || iParam0 == &Global_1939178->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_446(&(Global_1939178->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false), vVar9);
			if (func_447(&(Global_1939178->f_28[iVar0])))
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
			if (func_448(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_449(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_450(uParam1, iParam0, fVar1, iVar0))
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

int func_352(int iParam0, var uParam1)
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

int func_353(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_360();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_451(iVar0, &iVar2))
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
	if (func_452(iVar0, iParam0))
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

int func_355(var uParam0, int iParam1)
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

int func_356(var uParam0, int iParam1)
{
	if (func_453(uParam0))
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

int func_357(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_383(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_358()
{
}

int func_359(var uParam0, int iParam1)
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
		if (func_454(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_360();
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
						if (func_385(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_360();
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

int func_360()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_361()
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
	if ((func_360() - Global_1939178->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_362(var uParam0, int iParam1)
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
	fVar0 = func_431(uParam0);
	if (uParam0->f_12 > func_455(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_456(iParam1);
	iVar1 = func_457(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_363(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_364(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_365(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_458(iParam0, vVar0, iParam2);
}

int func_366(int iParam0, int iParam1, var uParam2)
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
	return func_459(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_367(int iParam0, var uParam1)
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
		if (func_460(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, true, 0) == 1)
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
			if (func_461(uParam1))
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
					if (!func_462(uParam1, iParam0))
					{
						if (func_385(iVar4, Global_35, 1) < 7f)
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

int func_368(int iParam0, var uParam1)
{
	if (!func_463(0))
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

int func_369(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_360();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_370(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_371(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_360();
	}
	else if (func_360() - uParam1->f_4) > func_464(uParam1)
	{
		return func_465(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_372(var uParam0, int iParam1)
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

void func_373(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_466(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_467(iParam1);
	func_468(iVar0, iParam0);
}

int func_374()
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

int func_375(int iParam0, int iParam1)
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

void func_376(var uParam0, var uParam1)
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

bool func_377(int iParam0, int iParam1, float fParam2)
{
	return func_469(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_378(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_379(var uParam0)
{
	return func_401(*uParam0, 2);
}

int func_380(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_381(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_470() - fParam1);
	func_471(uParam0, 1);
	func_472(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_382(int iParam0)
{
	return func_102(8, iParam0);
}

float func_383(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

Vector3 func_384(vector3 vParam0, int iParam3, float fParam4)
{
	return func_473(vParam0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false), fParam4);
}

float func_385(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_386(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_387(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_471(uParam0, 1);
	func_472(uParam0, 2);
	uParam0->f_2 = 0;
}

void func_388(int iParam0, int iParam1)
{
	char* sVar0;

	switch (iParam1)
	{
		case 0:
			sVar0 = "PAIN_DEATH";
			break;
		case 1:
			sVar0 = "BARK";
			break;
		case 2:
			sVar0 = "BARK_FAR";
			break;
		case 11:
			sVar0 = "BARK_SEQ";
			break;
		case 3:
			sVar0 = "PLAYFUL";
			break;
		case 4:
			sVar0 = "WHINE";
			break;
		case 5:
			sVar0 = "SNIFF";
			break;
		case 6:
			sVar0 = "SNIFF_END";
			break;
		case 7:
			sVar0 = "SNEEZE";
			break;
		case 8:
			sVar0 = "LICK";
			break;
		case 9:
			sVar0 = "EXCITED";
			break;
		case 10:
			sVar0 = "BEG";
			break;
		case 12:
			sVar0 = "INJURED_FIDGET";
			break;
		case 13:
			sVar0 = "INJURED_WHIMPER";
			break;
		case 14:
			sVar0 = "ATTACK";
			break;
		case 15:
			sVar0 = "GROWL";
			break;
		case 16:
			sVar0 = "HOWL";
			break;
		case 17:
			sVar0 = "BARK_HAPPY";
			break;
	}
	AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0, sVar0, 0);
}

int func_389(var uParam0)
{
	if (!func_474(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_475(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_360() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_390(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, struct<2> Param9)
{
	float fVar0;
	var uVar1;
	var uVar2;

	if (iParam6 == 0)
	{
		return;
	}
	fVar0 = func_476(((BUILTIN::TO_FLOAT(iParam8) / 1000f) / 60f), 0.5f, 30f);
	func_477(iParam1, &uVar1, &uVar2, 0, fVar0);
	func_478(iParam1, &uVar2, 0, iParam2, iParam6, iParam7, bParam4);
	func_479(iParam1, 0, iParam3);
	func_480(iParam1, &uVar2, 0, bParam5);
	func_481(iParam1, 0, Param9);
	func_482(1149539403, uParam0, iParam1, 0, 255, 0, 1);
}

void func_391(int iParam0)
{
	struct<15> Var0;

	Var0 = { func_483(1412485432) };
	Var0.f_11 = iParam0;
	func_484(&Var0);
}

int func_392(struct<2> Param0, var uParam2)
{
	if (!func_36(Param0))
	{
		return 0;
	}
	func_485(uParam2);
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

int func_393()
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

void func_394(var uParam0, var uParam1)
{
}

int func_395(int iParam0)
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

void func_396()
{
	func_100(&(Global_1245803->f_2003));
}

void func_397(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_277(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_398(int iParam0, int iParam1, int iParam2)
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

struct<2> func_399(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_400(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_392(Param0, &vVar0);
	if (func_486(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

bool func_401(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_402(int iParam0)
{
	switch (Local_13.f_7.f_12)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "NBHD_1_LEAD";
				case 1:
					return "NBHD_1_ATTACK";
				case 2:
					return "NBHD_1_KILLDOG";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "NBHD_2_LEAD";
				case 1:
					return "NBHD_2_ATTACK";
				case 2:
					return "NBHD_2_KILLDOG";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "NBHD_3_LEAD";
				case 1:
					return "NBHD_3_ATTACK";
				case 2:
					return "NBHD_3_KILLDOG";
				default:
					break;
			}
			break;
		default:
			switch (iParam0)
			{
				case 0:
					return "NBHD_1_LEAD";
				case 1:
					return "NBHD_1_ATTACK";
				case 2:
					return "NBHD_1_KILLDOG";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_403(char[4] cParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(cParam0) && AUDIO::_0x1ECC76792F661CF5(cParam0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_404(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_405(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_487(vParam1, uParam0);
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

void func_406(var uParam0, var uParam1)
{
	float fVar0;

	fVar0 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_35);
	*uParam0 = 0;
	*uParam1 = 0;
	if (fVar0 >= 24f)
	{
		*uParam1 = 1;
	}
	else if (fVar0 <= 0f)
	{
		*uParam0 = 1;
	}
	if (func_488())
	{
		*uParam0 = 0;
	}
}

struct<4> func_407(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_418(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_331(joaat("character"), func_489(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_331(joaat("character"), func_489(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_331(joaat("character"), func_489(), -1591664384, bParam0);
}

int func_408(bool bParam0)
{
	vector3 vVar0;

	if (!func_417(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_409(bool bParam0)
{
	int iVar0;

	iVar0 = func_418(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_331(923904168, func_407(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_331(923904168, func_407(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_331(923904168, func_407(bParam0), -740156546, 0);
}

int func_410(bool bParam0, bool bParam1)
{
	if (func_412(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_490();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_411(bool bParam0)
{
	int iVar0;

	iVar0 = func_418(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_331(271701509, func_407(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_331(271701509, func_407(bParam0), 12999093, 0);
}

int func_412(bool bParam0)
{
	struct<2> Var0;

	if (!func_417(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_413(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_412(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_491(bParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_414(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_492(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_415(bool bParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_417(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_493(bParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_331(bParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_418(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_418(bParam6), bParam0, iParam8);
	}
	return iVar0;
}

int func_416(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_418(0);
	*uParam1 = { func_331(bParam0, func_409(0), iParam3, 0) };
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

int func_417(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_418(bool bParam0)
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

int func_419(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_420(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_494(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_495(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_496(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_421(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_422(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_423(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_424(int iParam0)
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
	Global_1939178->f_21 = func_497();
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
			func_498(&(Global_1939178->f_28), &(Global_1939178->f_33));
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

var func_425(int iParam0)
{
	return &(Global_1099294->f_372[iParam0 /*3*/]);
}

int func_426(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_499(bParam0, &iVar0, &iVar1))
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

int func_427(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939178->f_34;
	if (func_28() == -1)
	{
		if (Global_1939178->f_34 == 0)
		{
			iVar0 = func_500(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_34) || !&Global_1954472->f_1616[4])
	{
		iVar0 = func_500(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_457(iVar0) == -1)
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

void func_428(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_501(uParam0);
	}
}

int func_429(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_457(iParam2);
	}
	else
	{
		iVar1 = func_456(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_457(iParam0);
	}
	else
	{
		iVar0 = func_456(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_145(*uParam1, 8388608))
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

float func_430(int iParam0, int iParam1)
{
	return func_383(iParam0, iParam1, 1, 1);
}

float func_431(var uParam0)
{
	return uParam0->f_28;
}

int func_432(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_433(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_173(uParam0, 134217728);
	}
	else
	{
		func_174(uParam0, 134217728);
	}
}

void func_434()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_435(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_383(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_502(iVar0, 0)))
		{
			if (func_503(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_436(var uParam0)
{
	return uParam0->f_17;
}

int func_437(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_145(*uParam0, 4194304))
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

int func_438(var uParam0)
{
	return uParam0->f_18;
}

int func_439(var uParam0)
{
	return uParam0->f_19;
}

int func_440(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_502(iVar0, 0)))
		{
			if (func_504(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_441(bool bParam0, bool bParam1, bool bParam2)
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

float func_442(var uParam0)
{
	return uParam0->f_24;
}

int func_443(var uParam0)
{
	return uParam0->f_22;
}

int func_444(var uParam0)
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

int func_445(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_469(iParam0, vParam4, 0.5f))
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

int func_446(int iParam0)
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
	if (func_505(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_447(int iParam0)
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

int func_448(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_506(iParam1))
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

int func_449(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_506(iParam1))
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

int func_450(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_507(uParam0);
	if (func_506(iParam1))
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

int func_451(int iParam0, int iParam1)
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

int func_452(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_508(iParam0, 1, 0, 0)) && !func_508(iParam0, 1, 0, 0) == 1151374672)
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

bool func_453(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_454(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_385(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_455(var uParam0)
{
	return uParam0->f_25;
}

int func_456(int iParam0)
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

int func_457(int iParam0)
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

int func_458(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_509(vVar3, vVar6);
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
	if (func_510(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_459(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_451(Global_34, &iVar1))
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
		fVar2 = func_383(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_383(iParam0, Global_1939178->f_34, 0, 1) < 2.5f)
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

int func_460(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_499(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_462(uParam1, iVar0))
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
				if (!bParam2 || !func_462(uParam1, iVar1))
				{
					if (func_385(iVar1, Global_35, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_461(var uParam0)
{
	return func_145(*uParam0, 131072);
}

int func_462(var uParam0, int iParam1)
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

int func_463(int iParam0)
{
	return 0;
}

int func_464(var uParam0)
{
	return uParam0->f_21;
}

int func_465(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_466(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_511(iParam0) - 1))
	{
		return 0;
	}
	return 1;
}

var func_467(int iParam0)
{
	return iParam0 + 8;
}

void func_468(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_277(iParam1, 896190569) };
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

bool func_469(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

float func_470()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_471(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_472(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_473(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_512(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

bool func_474(var uParam0)
{
	return func_401(*uParam0, 1);
}

bool func_475(var uParam0)
{
	return func_401(*uParam0, 2);
}

float func_476(float fParam0, float fParam1, float fParam2)
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

void func_477(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	func_513(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				func_514(iParam0, 1628925866);
				break;
			case 1:
				*uParam2 = 1;
				break;
		}
		return;
	}
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 1295140836);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 1526522745);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 1901367336);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -2012562028);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -1811294830);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -1580699377);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -529994165);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -1356198962);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 592638986);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -71665830);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -369634347);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 523648593);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 224041626);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 1119225168);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 820076967);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 1790072136);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 1490530707);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -1908007825);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 2085779592);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -169152669);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -544685409);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -649710054);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -1023735420);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -1126990539);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -1501736823);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 1614824464);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -1845287019);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 1073415046);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, 1906960099);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					func_514(iParam0, -2023453588);
					break;
				case 1:
					*uParam1 = -1520125470;
					break;
			}
			break;
	}
}

void func_478(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	int iVar1;

	fVar0 = ((BUILTIN::TO_FLOAT(iParam4) / BUILTIN::TO_FLOAT(iParam5)) * 100f);
	iVar1 = BUILTIN::CEIL((fVar0 / 5f)) * 5;
	switch (iParam3)
	{
		case -1516819610:
			switch (iParam2)
			{
				case 0:
					if (iVar1 <= 0)
					{
						func_514(iParam0, 102861655);
					}
					switch (iVar1)
					{
						case 5:
							func_514(iParam0, 1606837351);
							break;
						case 10:
							func_514(iParam0, 1993982606);
							break;
						case 15:
							func_514(iParam0, -1120317616);
							break;
						case 20:
							func_514(iParam0, 1497203110);
							break;
						case 25:
							func_514(iParam0, 1461747036);
							break;
						case 30:
							func_514(iParam0, 1705384279);
							break;
						case 35:
							func_514(iParam0, 587764757);
							break;
						case 40:
							func_514(iParam0, 496010113);
							break;
						case 45:
							func_514(iParam0, -8927412);
							break;
						case 50:
							func_514(iParam0, -1913265366);
							break;
						case 55:
							func_514(iParam0, -1185662490);
							break;
						case 60:
							func_514(iParam0, 1041027017);
							break;
						case 65:
							func_514(iParam0, -1593666129);
							break;
						case 70:
							func_514(iParam0, 1825778741);
							break;
						case 75:
							func_514(iParam0, -1544873376);
							break;
						case 80:
							func_514(iParam0, 1557926776);
							break;
						case 85:
							func_514(iParam0, 1088477734);
							break;
						case 90:
							func_514(iParam0, 1557926776);
							break;
						case 95:
							func_514(iParam0, 956550028);
							break;
						default:
							func_514(iParam0, -781986478);
							break;
					}
					break;
				case 1:
					if (iVar1 <= 0)
					{
						*uParam1 = 1;
					}
					break;
			}
			break;
		case 1891766540:
			if (bParam6)
			{
				switch (iParam2)
				{
					case 0:
						func_514(iParam0, 413085053);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_514(iParam0, 102861655);
						break;
					case 1:
						*uParam1 = 1;
						break;
				}
			}
			break;
	}
}

void func_479(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("pvp"):
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -73489229);
					break;
			}
			break;
		case 1038512660:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, 1981105632);
					break;
			}
			break;
	}
}

void func_480(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	bool bVar0;

	bVar0 = _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= true;
	if (bParam3)
	{
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_514(iParam0, -57805484);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_514(iParam0, 512977886);
					break;
			}
		}
	}
	else
	{
		*uParam1 = 1;
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_514(iParam0, -1570113901);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_514(iParam0, -1876025097);
					break;
			}
		}
	}
}

void func_481(int iParam0, int iParam1, struct<2> Param2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_515(Param2);
	if (!func_516(iVar0))
	{
		return;
	}
	iVar1 = func_517(iVar0);
	if (func_518(iVar1))
	{
		iVar2 = func_520(func_519(iVar1));
	}
	else
	{
		return;
	}
	if (iVar2 <= 0)
	{
		switch (iParam1)
		{
			case 0:
				func_514(iParam0, 1900669220);
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, 402273926);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -1111096805);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -738447737);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, 704666254);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, 963311971);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -1751075375);
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -1527623564);
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -465252584);
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -225219659);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, 2108535411);
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -1845896441);
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, 1961468135);
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, 1723008122);
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -648222260);
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_514(iParam0, -921745103);
					break;
			}
			break;
	}
}

int func_482(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_521(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

struct<15> func_483(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_132, 5);
	Var0.f_9 = iParam0;
	Var0 = 178;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_484(var uParam0)
{
	func_523(uParam0, func_522(4, 117));
}

void func_485(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_486(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_524(iParam0))
	{
		return 0;
	}
	if (func_525(iParam0, uParam1, &uVar0))
	{
		func_526(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_487(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_488()
{
	vector3 vVar0;

	if (FIRE::GET_CLOSEST_FIRE_POS(&vVar0, Global_35))
	{
		if (BUILTIN::VDIST(vVar0, Global_35) < 5f)
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_489()
{
	struct<4> Var0;

	return Var0;
}

bool func_490()
{
	return (func_527(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_528(func_331(889965687 /* GXTEntry: "Wardrobe" */, func_407(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_491(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

int func_492(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_418(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_493(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_494(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_178(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_178(uVar0, 8))
	{
		return 0;
	}
	else if (func_178(uVar0, 16))
	{
		return 0;
	}
	else if (func_178(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_495(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_529(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_529(iParam1, 2, 0, 0);
	return -1;
}

int func_496(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_529(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_497()
{
	if (func_530())
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

void func_498(var uParam0, var uParam1)
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

int func_499(bool bParam0, int iParam1, int iParam2)
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

int func_500(var uParam0)
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

void func_501(var uParam0)
{
	int iVar0;

	if (Global_1939178->f_32 == 0)
	{
		func_174(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939178->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939178->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939178->f_28[iVar0])))
				{
					func_173(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_502(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_503(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_504(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_504(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_505(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_506(int iParam0)
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

float func_507(var uParam0)
{
	return uParam0->f_27;
}

int func_508(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_509(vector3 vParam0, vector3 vParam3)
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

bool func_510(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_511(int iParam0)
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

Vector3 func_512(vector3 vParam0)
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

int func_513(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_514(int iParam0, int iParam1)
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

int func_515(struct<2> Param0)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_21(Param0, func_531(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_516(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

var func_517(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3;
}

bool func_518(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 35);
}

int func_519(int iParam0)
{
	return Global_1113601[iParam0 /*35*/];
}

int func_520(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_294(741274143, func_532(iParam0)) };
	return func_533(Var0, -1);
}

int func_521(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_514(iParam2, -372840566);
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
	func_534(uParam1, iParam0, Var3);
	return 1;
}

var func_522(int iParam0, int iParam1)
{
	return func_535(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_523(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 9, &uParam1);
}

int func_524(int iParam0)
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

bool func_525(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_536(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_526(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_537(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_538(iVar0);
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
			uParam2->f_5 = func_539(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_540(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_541(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_542(iVar0);
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

int func_527(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_422(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_418(bParam1), bParam0, iParam3);
}

int func_528(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_543(&uParam0, iParam4, bParam5, iParam6);
}

void func_529(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_544(iParam0, iParam1, iParam2, iParam3);
}

int func_530()
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

struct<2> func_531(int iParam0)
{
	if (!func_516(iParam0))
	{
		return func_86();
	}
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_5;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case joaat("joe"):
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case joaat("alden"):
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		default:
			break;
	}
	return 0;
}

int func_533(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return iParam2;
	}
	if (!STATS::STAT_ID_GET_INT(&uParam0, &uVar0))
	{
		return iParam2;
	}
	return uVar0;
}

void func_534(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_545(uParam0))
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

var func_535(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_546() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_547());
				break;
			case -432403087:
				iVar8 = VOLUME::_0x10157BC3247FF3BA(vParam0, vParam3, vParam6, func_547());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_547());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_548(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_549(iVar2))
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
				if (iVar9 & 8192 != 0 && func_550(iVar2) != 1)
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
					if (!func_551(iVar10))
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
		VOLUME::_0x43F867EF5C463A53(iVar8);
	}
	return uVar0;
}

int func_536(int iParam0)
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

int func_537(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_552(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_538(int iParam0)
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

int func_539(int iParam0)
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

int func_540(int iParam0)
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

int func_541(int iParam0)
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

int func_542(int iParam0)
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

int func_543(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_553(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_544(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

int func_545(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_546()
{
	return Global_1051202->f_12;
}

char* func_547()
{
	return "unnamed";
}

int func_548(int iParam0)
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

int func_549(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_554(35, iParam0);
}

int func_550(int iParam0)
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

bool func_551(int iParam0)
{
	if (func_555(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_556(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_552(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_557(iParam0, uParam1, &uVar0))
	{
		func_558(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_553(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_418(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_492(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_554(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_559(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_560())
	{
		return func_559(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_559(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_555(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_556(int iParam0)
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
		func_561(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_562(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

bool func_557(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_536(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_558(var uParam0, int iParam1, var uParam2)
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

bool func_559(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_560()
{
	return Global_1099294->f_339;
}

void func_561(int iParam0)
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
	func_562(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_562(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

