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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	while (!func_2(0, 0))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	func_6();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_7(32, -1);
	func_8();
	if (func_9())
	{
		func_6();
	}
	func_10();
	func_11(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

bool func_2(bool bParam0, bool bParam1)
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

void func_3()
{
	bool bVar0;

	bVar0 = func_12();
	if (func_13())
	{
		func_14();
	}
	func_15(bVar0);
}

void func_4()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (MAP::DOES_BLIP_EXIST(func_16(Global_1132288.f_1[iVar0 /*63*/].f_5)))
		{
			func_17(&(Global_1132288.f_1[iVar0 /*63*/].f_5), 0);
		}
		iVar0++;
	}
	func_18();
	Global_1132288.f_2018 = 0;
	Global_1132288.f_2041 = 0;
	Global_1132288 = 0;
}

void func_5()
{
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2055) && !SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2057))
	{
		return;
	}
	if (!Global_1132288.f_2059)
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2055))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1132288.f_2055);
		}
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2057))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1132288.f_2057);
		}
		Global_1132288.f_2059 = 1;
	}
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
		if (func_19() == 0)
		{
			if (func_20())
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

bool func_9()
{
	if (Global_1572887.f_9)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	return false;
}

void func_10()
{
	func_21(&Global_1131196);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1131196, 1092, 44);
	func_22(NETWORK::_0xBA24095EA96DFE17(&Global_1131196), 1092, "g_mpHostNetCamp");
	func_23(&Global_1134390);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1134390, 2657, 45);
	func_24(NETWORK::_0x690806BC83BC8CA2(&(Global_1134390[0 /*83*/])), 2657, "g_mpPlayerNetCamp");
	func_25(&Global_1132288);
	func_26(&Global_1134349);
}

void func_11(bool bParam0)
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

bool func_12()
{
	if (func_27())
	{
		func_28(16);
		return false;
	}
	if (func_29())
	{
		func_28(16);
		return false;
	}
	if (func_30(16))
	{
		func_28(16);
		return false;
	}
	func_31(16);
	return true;
}

bool func_13()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051252.f_16[9], false))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(Global_1051252.f_16[9]);
}

void func_14()
{
	switch (Global_1131196.f_1090)
	{
		case 0:
			func_32();
			break;
		case 1:
			func_33();
			break;
		case 2:
			func_34();
			break;
	}
}

void func_15(bool bParam0)
{
	switch (Global_1132288)
	{
		case 0:
			func_35();
			break;
		case 1:
			func_36();
			break;
		case 2:
			func_37(bParam0);
			break;
	}
	Global_1132288.f_2040 = 0;
}

int func_16(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		return Global_17081[iParam0];
	}
	return 0;
}

void func_17(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_38(*uParam0, -1);
		func_39(*uParam0, 0);
		func_40(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_17081[*uParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_17081[*uParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_17081[*uParam0]));
		}
	}
	*uParam0 = -1;
}

void func_18()
{
	int iVar0;
	var uVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1134390[iVar0 /*83*/].f_38.f_23.f_1))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1134390[iVar0 /*83*/].f_38.f_23.f_1);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1134390[iVar0 /*83*/].f_38.f_23))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1134390[iVar0 /*83*/].f_38.f_23);
	}
	Global_1134390[iVar0 /*83*/].f_38.f_23.f_1 = uVar1;
	Global_1134390[iVar0 /*83*/].f_38.f_23 = uVar1;
}

int func_19()
{
	return Global_1572887.f_13;
}

bool func_20()
{
	return Global_1051252.f_8;
}

void func_21(var uParam0)
{
	struct<27> Var0;
	int iVar27;
	struct<7> Var28;
	var uVar35;
	var uVar36;

	Var0.f_9 = 255;
	Var0.f_10 = 7;
	Var0.f_10.f_1 = 255;
	Var0.f_10.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	iVar27 = 0;
	while (iVar27 <= 31)
	{
		*(uParam0[iVar27 /*27*/]) = { Var0 };
		iVar27++;
	}
	Var28.f_4 = -1;
	iVar27 = 0;
	while (iVar27 <= 31)
	{
		uParam0->f_865[iVar27 /*7*/] = { Var28 };
		iVar27++;
	}
	uParam0->f_1090 = uVar35;
	uParam0->f_1091 = uVar36;
}

int func_22(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_41(uParam0[iVar0 /*83*/]);
		iVar0++;
	}
}

int func_24(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_25(var uParam0)
{
	var uVar0;
	int iVar1;
	struct<63> Var2;
	var uVar65;
	struct<9> Var66;

	*uParam0 = uVar0;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_13 = 7;
	Var2.f_49 = 7;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		uParam0->f_1[iVar1 /*63*/] = { Var2 };
		iVar1++;
	}
	uParam0->f_2018 = uVar65;
	Var66.f_4 = -15;
	uParam0->f_2027 = { Var66 };
	uParam0->f_2019 = 0;
	uParam0->f_2054 = -428030045;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		uParam0->f_2020[iVar1] = 0;
		iVar1++;
	}
	uParam0->f_2041 = 0;
	uParam0->f_2042 = 0;
	uParam0->f_2043 = 0;
	uParam0->f_2044 = 0;
	uParam0->f_2049 = 0;
	uParam0->f_2059 = 0;
	uParam0->f_2050 = 0;
}

void func_26(var uParam0)
{
}

bool func_27()
{
	return Global_263042[Global_1296859 /*70*/] > 2;
}

void func_28(int iParam0)
{
	if (func_42(iParam0))
	{
		func_43(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);
	}
}

bool func_29()
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
	if (!func_44(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_30(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

void func_31(int iParam0)
{
	if (!func_42(iParam0))
	{
		func_45(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);
	}
}

void func_32()
{
	func_46(1);
}

void func_33()
{
	if (func_42(1))
	{
		func_46(2);
	}
}

void func_34()
{
	int iVar0;
	var uVar1;

	while (iVar0 < 10)
	{
		iVar0++;
		Global_1132288.f_2044++;
		if (Global_1132288.f_2044 >= 32)
		{
			Global_1132288.f_2044 = 0;
		}
		func_47(Global_1132288.f_2044, &uVar1);
		func_48(Global_1132288.f_2044);
	}
}

void func_35()
{
	if (Global_1131196.f_1090 > 0)
	{
		if (func_49())
		{
			func_50();
			func_51(1);
		}
	}
}

void func_36()
{
	if (!func_42(1))
	{
		if (func_52())
		{
			func_53();
			func_31(1);
		}
	}
	else if (Global_1131196.f_1090 > 1)
	{
		if (func_54() == 0)
		{
			func_55(1);
		}
		func_51(2);
	}
}

void func_37(bool bParam0)
{
	int iVar0;

	if (!func_42(64) && func_56())
	{
		func_31(64);
	}
	while (iVar0 < 10)
	{
		iVar0++;
		Global_1132288.f_2043++;
		if (Global_1132288.f_2043 >= 32)
		{
			Global_1132288.f_2043 = 0;
		}
		func_57(Global_1132288.f_2043);
	}
	func_58();
	if (bParam0)
	{
		func_59();
		func_60();
		func_61();
		func_62();
	}
	else if (Global_1132288.f_2019 != 1)
	{
		func_63(1);
	}
}

void func_38(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_3647[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_25003[iParam0 /*4*/] = iParam1;
	return;
}

void func_39(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_3647[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_25003[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_40(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_3647[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_25003[iParam0 /*4*/].f_2 = iParam1;
	return;
}

void func_41(var uParam0)
{
	struct<83> Var0;

	Var0 = 32;
	Var0.f_33.f_3 = -1;
	Var0.f_38.f_3 = -1;
	Var0.f_38.f_7 = -1;
	Var0.f_38.f_25 = -1;
	Var0.f_38.f_28.f_1 = 1046181202;
	Var0.f_38.f_28.f_2 = 255;
	Var0.f_38.f_28.f_3 = -1;
	Var0.f_74.f_7 = -1;
	*uParam0 = { Var0 };
	func_64(&(uParam0->f_38));
}

bool func_42(int iParam0)
{
	return func_65(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

void func_43(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

bool func_44(struct<2> Param0)
{
	if (!func_67(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_68(Param0))
	{
		return false;
	}
	return true;
}

void func_45(var uParam0, int iParam1)
{
	func_69(uParam0, iParam1);
}

void func_46(int iParam0)
{
	if (Global_1131196.f_1090 != iParam0)
	{
		Global_1131196.f_1090 = iParam0;
	}
}

void func_47(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar12;
	struct<24> Var13;

	if (bParam0 < 0 || bParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(bParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return;
	}
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (Global_1131196.f_865[iVar1 /*7*/].f_4 != Global_1134390[bParam0 /*83*/].f_33.f_3 && Global_1134390[bParam0 /*83*/].f_33.f_3 != -1)
	{
		func_70(iVar1, Global_1134390[bParam0 /*83*/].f_33.f_3);
		func_71(iVar1, Global_1134390[bParam0 /*83*/].f_33);
		func_72(iVar1, 0);
	}
	iVar2 = GANG::_0x901E0DC25080C8B9(iVar0);
	bVar3 = GANG::_0x149A2751AB66AC02(iVar2);
	vVar9 = { Global_1131196.f_865[iVar1 /*7*/].f_1 };
	bVar12 = func_65(Global_1131196.f_865[iVar1 /*7*/].f_5, 2);
	switch (Global_1131196.f_865[iVar1 /*7*/])
	{
		case 0:
			Global_1131196.f_865[iVar1 /*7*/].f_5 = Global_1134390[bParam0 /*83*/].f_33.f_4;
			bVar12 = func_65(Global_1131196.f_865[iVar1 /*7*/].f_5, 2);
			if (vVar9.z == 0)
			{
				iVar7 = func_73(iVar0);
				if (func_74(iVar7))
				{
					if (GANG::_0x424B17A7DC5C90BC(iVar0))
					{
						func_75(iVar7, 3);
					}
				}
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1131196.f_1091), iVar0))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1131196.f_1091), iVar0);
				}
				func_72(iVar1, 6);
			}
			else if (vVar9.z < 0)
			{
				if (func_76(bParam0))
				{
					func_72(iVar1, 3);
				}
				else
				{
					func_72(iVar1, 4);
				}
			}
			else
			{
				if (*uParam1)
				{
					return;
				}
				*uParam1 = 1;
				func_77(vVar9, &vVar4);
				if (!func_78(vVar9, bParam0, vVar4, bVar3, 1, 0, bVar12))
				{
					func_72(iVar1, 4);
					return;
				}
				func_72(iVar1, 1);
			}
			break;
		case 1:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			if (func_65(Global_1134390[bParam0 /*83*/].f_33.f_4, 8))
			{
				func_72(iVar1, 2);
			}
			break;
		case 2:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			func_77(vVar9, &vVar4);
			iVar7 = func_73(iVar0);
			if (func_74(iVar7))
			{
				func_75(iVar7, 3);
			}
			Var13.f_9 = 255;
			Var13.f_10 = 7;
			Var13.f_10.f_1 = 255;
			Var13.f_10.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_9 = iVar0;
			Var13.f_1 = vVar9.x;
			Var13.f_1.f_1 = vVar9.y;
			Var13.f_1.f_2 = vVar9.z;
			Var13.f_20 = { vVar4 };
			Var13.f_23.f_1 = Global_1134390[bParam0 /*83*/].f_38.f_23.f_1;
			Var13.f_23 = Global_1134390[bParam0 /*83*/].f_38.f_23;
			Var13 = 1;
			iVar7 = func_79(&Var13);
			if (!func_74(iVar7))
			{
				return;
			}
			if (!func_65(Global_1131196.f_865[iVar1 /*7*/].f_5, 4))
			{
				func_80(iVar7, 16);
			}
			if (func_65(Global_1131196.f_865[iVar1 /*7*/].f_5, 1))
			{
				func_80(iVar7, 512);
			}
			func_72(iVar1, 6);
			break;
		case 3:
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 < 32)
			{
				if (Global_1131196[iVar7 /*27*/].f_9 == iVar0)
				{
					Global_1131196[iVar7 /*27*/].f_1 = Global_1134390[bParam0 /*83*/].f_33;
				}
				else
				{
					iVar7++;
				}
			}
			func_72(iVar1, 6);
			break;
		case 4:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -2;
			if (func_81(iVar2, &vVar9, bVar12, &iVar8, &(Global_1131196.f_865[iVar1 /*7*/].f_6)))
			{
				Global_1131196.f_865[iVar1 /*7*/].f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if (Global_1131196.f_865[iVar1 /*7*/].f_6 >= 10 || iVar8 == 1)
			{
				func_45(&(Global_1131196.f_865[iVar1 /*7*/].f_5), 16);
				func_72(iVar1, 5);
			}
			break;
		case 5:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -1;
			if (func_81(iVar2, &vVar9, bVar12, &iVar8, &(Global_1131196.f_865[iVar1 /*7*/].f_6)))
			{
				Global_1131196.f_865[iVar1 /*7*/].f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if (Global_1131196.f_865[iVar1 /*7*/].f_6 >= 15 || iVar8 == 1)
			{
				func_72(iVar1, 6);
				func_45(&(Global_1131196.f_865[iVar1 /*7*/].f_5), 32);
			}
			break;
		case 6:
			break;
	}
}

void func_48(int iParam0)
{
	func_82(iParam0);
	if (Global_1131196[iParam0 /*27*/] == 0)
	{
		return;
	}
	if (Global_1131196[iParam0 /*27*/] != 3)
	{
		func_83(iParam0);
		func_84(iParam0);
		func_85(iParam0);
	}
	switch (Global_1131196[iParam0 /*27*/])
	{
		case 1:
			func_86(iParam0);
			break;
		case 2:
			func_87(iParam0);
			break;
		case 3:
			func_88(iParam0);
			break;
	}
}

bool func_49()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_4;
}

void func_50()
{
	func_64(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_38));
	func_89();
	func_90();
}

void func_51(int iParam0)
{
	if (Global_1132288 != iParam0)
	{
		Global_1132288 = iParam0;
	}
}

bool func_52()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!DATAFILE::_0x7907969497EA92F5(Global_1137047.f_361[iVar0]) || !DATAFILE::_0x603AC35FD4602C76(Global_1137047.f_361[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_53()
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Var1 = { func_92(joaat("KIT_CAMP"), func_91(0), 1084182731, 1) };
	func_93(Var1);
	func_94();
	iVar5 = func_95(Var1, -421952220, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -1867469444; /* GXTEntry: "Red" */
	}
	func_96(iVar5, iVar0);
	iVar5 = func_95(Var1, 1231618917, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -144166169; /* GXTEntry: "Standard 1" */
	}
	func_97(iVar5, iVar0);
	iVar5 = func_95(Var1, 1043717005, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -811830793; /* GXTEntry: "Bedroll" */
	}
	func_98(iVar5, iVar0);
	iVar5 = func_95(Var1, 142663787, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -698168422; /* GXTEntry: "Standard" */
	}
	func_99(iVar5, iVar0);
	func_100(0, iVar0);
}

int func_54()
{
	return Global_1132288.f_2018;
}

void func_55(int iParam0)
{
	if (Global_1132288.f_2018 != iParam0)
	{
		Global_1132288.f_2018 = iParam0;
	}
}

bool func_56()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_57(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_101(iParam0);
	bVar1 = (bVar0 && Global_1131196[iParam0 /*27*/].f_1.f_2 != Global_1132288.f_1[iParam0 /*63*/].f_2);
	iVar2 = Global_1132288.f_1[iParam0 /*63*/].f_3;
	if (!bVar0)
	{
		if (iVar2 == 0)
		{
			return;
		}
		else if (iVar2 == 2 || iVar2 == 1)
		{
			func_102(iParam0, Global_1137047.f_9[iParam0 /*10*/].f_2);
			func_103(iParam0, 3);
		}
	}
	if ((iVar2 == 0 && Global_1131196[iParam0 /*27*/] != 0) || bVar1)
	{
		func_104(iParam0, Global_1131196[iParam0 /*27*/].f_1, Global_1131196[iParam0 /*27*/].f_9);
		if (func_105(Global_1132288.f_1[iParam0 /*63*/].f_5))
		{
			func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_5), 0);
		}
		if (func_105(Global_1132288.f_1[iParam0 /*63*/].f_6))
		{
			MAP::_BLIP_REMOVE_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_6), 7148155);
			func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_6), 0);
		}
		func_106(&(Global_1132288.f_1[iParam0 /*63*/]));
		Global_1132288.f_1[iParam0 /*63*/] = { Global_1131196[iParam0 /*27*/].f_1 };
		func_103(iParam0, 1);
	}
	func_107(iParam0, bVar0);
	func_108(iParam0, bVar0);
	func_109(iParam0);
	switch (Global_1132288.f_1[iParam0 /*63*/].f_3)
	{
		case 1:
			func_110(iParam0);
			break;
		case 2:
			func_111(iParam0);
			break;
		case 3:
			func_112(iParam0);
			break;
	}
}

void func_58()
{
	int iVar0;
	int iVar1;

	if (func_42(256))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (func_113(iVar0, 1))
			{
				iVar1 = 1;
			}
			else
			{
				iVar0++;
			}
		}
		if (iVar1 == 0)
		{
			func_28(256);
		}
	}
}

void func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	iVar0 = PLAYER::PLAYER_ID();
	func_114(iVar0);
	iVar1 = Global_1134390[iVar0 /*83*/].f_38.f_3;
	bVar3 = func_74(iVar1);
	bVar4 = GANG::_0x424B17A7DC5C90BC(iVar0);
	switch (Global_1132288.f_2019)
	{
		case 0:
			if (bVar4)
			{
				if (bVar3)
				{
					func_63(20);
				}
				else
				{
					vVar8 = { func_115() };
					func_116(vVar8);
					if (vVar8.z != 0)
					{
						Global_1132288.f_2036 = { vVar8 };
						Global_1132288.f_2036.f_3 = 0;
						func_63(5);
					}
					else
					{
						func_63(4);
					}
				}
			}
			else
			{
				func_63(22);
			}
			break;
		case 1:
			func_63(0);
			break;
		case 2:
			if (!bVar3)
			{
				if (func_117())
				{
					func_118(0);
				}
				func_18();
				Global_1132288.f_2046 = 0;
				func_116(vVar8);
				func_119();
				func_120();
				func_121();
				func_63(3);
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					func_119();
					func_63(20);
				}
				else
				{
					func_63(21);
				}
			}
			else
			{
				func_63(4);
			}
			break;
		case 4:
			if (bVar4)
			{
				if (bVar3)
				{
					func_119();
					func_63(20);
				}
				else if (((func_122(32) && !func_123()) && !func_124(255)) && !ENTITY::IS_ENTITY_DEAD(Global_34))
				{
					func_121();
					func_125(32);
				}
			}
			else if (bVar3)
			{
				func_63(21);
			}
			break;
		case 5:
			if (func_126(Global_1132288.f_2036, Global_1132288.f_2036.f_3))
			{
				if (func_76(iVar0))
				{
					func_63(12);
				}
				else
				{
					func_63(6);
				}
			}
			else
			{
				func_116(vVar8);
				func_63(4);
			}
			break;
		case 6:
			if (func_76(iVar0))
			{
				func_63(12);
				return;
			}
			iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			if (Global_1131196.f_865[iVar2 /*7*/].f_4 == Global_1134390[PLAYER::PLAYER_ID() /*83*/].f_33.f_3)
			{
				if (Global_1132288.f_2049 == 0)
				{
					Global_1132288.f_2049 = MISC::_GET_SYSTEM_TIME();
				}
				else if ((MISC::_GET_SYSTEM_TIME() - Global_1132288.f_2049) > Global_1901947.f_584.f_14)
				{
					Global_1132288.f_2049 = 0;
					func_18();
					func_127();
				}
			}
			if (func_65(Global_1131196.f_865[iVar2 /*7*/].f_5, 32) && Global_1131196.f_865[iVar2 /*7*/].f_4 == Global_1134390[PLAYER::PLAYER_ID() /*83*/].f_33.f_3)
			{
				Global_1132288.f_2049 = 0;
				func_63(13);
				return;
			}
			if (func_65(Global_1131196.f_865[iVar2 /*7*/].f_5, 16) && Global_1132288.f_2027.f_5 != 0)
			{
				func_128(0);
			}
			if (Global_1131196.f_865[iVar2 /*7*/] != 1)
			{
				return;
			}
			if (Global_1131196.f_865[iVar2 /*7*/].f_1.f_2 == 0)
			{
				return;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(Global_1134390[PLAYER::PLAYER_ID() /*83*/].f_38.f_23.f_1))
			{
				return;
			}
			if (!func_129())
			{
				Global_1132288.f_2049 = 0;
				func_18();
				func_127();
				return;
			}
			vVar8 = { Global_1131196.f_865[iVar2 /*7*/].f_1 };
			func_77(vVar8, &vVar5);
			func_130(vVar8, vVar5);
			Global_1132288.f_2049 = 0;
			func_63(7);
			break;
		case 7:
			if (!VOLUME::_0xA4A4359320345B34(Global_1132288.f_2052.f_1))
			{
				Global_1132288.f_2046++;
				func_63(6);
				return;
			}
			iVar11 = VOLUME::_0xB33A604345F58202(Global_1132288.f_2052.f_1);
			switch (iVar11)
			{
				case 4:
					func_63(8);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_131(VOLUME::_0x351D71B8B72B858B(Global_1132288.f_2052.f_1));
					func_63(9);
					break;
			}
			break;
		case 8:
			if (!func_129())
			{
				func_18();
				func_127();
				func_128(0);
				return;
			}
			if (Global_1132288.f_2047 == 0)
			{
				Global_1132288.f_2047 = MISC::GET_GAME_TIMER();
				Global_1132288.f_2046++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1132288.f_2047) > 2000)
			{
				Global_1132288.f_2047 = 0;
				func_120();
				func_18();
				Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = -2;
				Global_1132288.f_2036 = { Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 };
				func_63(5);
			}
			break;
		case 9:
			iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			if (Global_1131196.f_865[iVar2 /*7*/].f_1.f_2 == 0)
			{
				return;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(Global_1134390[PLAYER::PLAYER_ID() /*83*/].f_38.f_23))
			{
				return;
			}
			if (!func_129())
			{
				func_18();
				func_127();
				return;
			}
			vVar8 = { Global_1131196.f_865[iVar2 /*7*/].f_1 };
			func_77(vVar8, &vVar5);
			func_132(vVar8, vVar5);
			func_63(10);
			break;
		case 10:
			if (!VOLUME::_0xA4A4359320345B34(Global_1132288.f_2052))
			{
				Global_1132288.f_2046++;
				func_63(9);
				return;
			}
			iVar12 = VOLUME::_0xB33A604345F58202(Global_1132288.f_2052);
			switch (iVar12)
			{
				case 4:
					func_63(11);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_133(VOLUME::_0x351D71B8B72B858B(Global_1132288.f_2052));
					func_134(8);
					func_63(12);
					break;
			}
			break;
		case 11:
			if (!func_129())
			{
				func_18();
				func_127();
				func_128(0);
				return;
			}
			if (Global_1132288.f_2047 == 0)
			{
				Global_1132288.f_2047 = MISC::GET_GAME_TIMER();
				Global_1132288.f_2046++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1132288.f_2047) > 2000)
			{
				Global_1132288.f_2047 = 0;
				func_120();
				func_18();
				Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = -2;
				Global_1132288.f_2036 = { Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 };
				func_63(5);
			}
			break;
		case 12:
			if (!bVar4)
			{
				func_63(21);
				Global_1132288.f_2049 = 0;
				Global_1132288.f_2046 = 0;
			}
			else if (func_135(&bVar13))
			{
				Global_1132288.f_2046 = 0;
				Global_1132288.f_2049 = 0;
				func_136();
				func_119();
				func_63(20);
			}
			else if (bVar13)
			{
				Global_1132288.f_2046 = 0;
				Global_1132288.f_2049 = 0;
				func_18();
				func_121();
				func_120();
				func_63(4);
			}
			break;
		case 13:
			if ((!func_123() && CAM::IS_SCREEN_FADED_IN()) && !func_124(255))
			{
				func_137("NET_CAMP_HELP_PLACEMENT_FAIL", 10000, 0, 0, 0, 1);
				func_128(0);
				if (bVar3)
				{
					func_63(14);
				}
				else
				{
					func_63(4);
				}
			}
			break;
		case 14:
			if (bVar3)
			{
				vVar8 = { Global_1131196[Global_1134390[iVar0 /*83*/].f_38.f_3 /*27*/].f_1 };
				func_77(vVar8, &vVar5);
				func_130(vVar8, vVar5);
				func_63(15);
			}
			else
			{
				func_127();
			}
			break;
		case 15:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (!VOLUME::_0xA4A4359320345B34(Global_1132288.f_2052.f_1))
			{
				Global_1132288.f_2046++;
				func_63(14);
				return;
			}
			iVar14 = VOLUME::_0xB33A604345F58202(Global_1132288.f_2052.f_1);
			switch (iVar14)
			{
				case 4:
					func_63(16);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_131(VOLUME::_0x351D71B8B72B858B(Global_1132288.f_2052.f_1));
					func_63(17);
					break;
			}
			break;
		case 16:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (Global_1132288.f_2047 == 0)
			{
				Global_1132288.f_2047 = MISC::GET_GAME_TIMER();
				Global_1132288.f_2046++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1132288.f_2047) > 2000)
			{
				Global_1132288.f_2047 = 0;
				func_18();
				func_63(14);
			}
			break;
		case 17:
			if (bVar3)
			{
				vVar8 = { Global_1131196[Global_1134390[iVar0 /*83*/].f_38.f_3 /*27*/].f_1 };
				func_77(vVar8, &vVar5);
				func_132(vVar8, vVar5);
				func_63(18);
			}
			else
			{
				func_127();
			}
			break;
		case 18:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (!VOLUME::_0xA4A4359320345B34(Global_1132288.f_2052))
			{
				Global_1132288.f_2046++;
				func_63(17);
				return;
			}
			iVar15 = VOLUME::_0xB33A604345F58202(Global_1132288.f_2052);
			switch (iVar15)
			{
				case 4:
					func_63(19);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_133(VOLUME::_0x351D71B8B72B858B(Global_1132288.f_2052));
					func_134(128);
					func_119();
					func_63(20);
					break;
			}
			break;
		case 19:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (Global_1132288.f_2047 == 0)
			{
				Global_1132288.f_2047 = MISC::GET_GAME_TIMER();
				Global_1132288.f_2046++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1132288.f_2047) > 2000)
			{
				Global_1132288.f_2047 = 0;
				func_18();
				func_63(14);
			}
			break;
		case 20:
			if (!bVar3)
			{
				if (bVar4)
				{
					Global_1132288.f_2036 = { func_115() };
					Global_1132288.f_2036.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_63(21);
				}
			}
			else if (bVar4)
			{
				if (func_138(Global_1134390[iVar0 /*83*/].f_38))
				{
					func_137("GC_CAMP_LOCK", 10000, 0, 0, 0, 1);
					func_120();
					Global_1132288.f_2036 = { func_115() };
					Global_1132288.f_2036.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_139(iVar1);
				}
			}
			else
			{
				func_63(21);
			}
			break;
		case 21:
			if (func_140(iVar1))
			{
				func_119();
				func_63(22);
			}
			break;
		case 22:
			if (bVar4)
			{
				Global_1132288.f_2036 = { func_115() };
				Global_1132288.f_2036.f_3 = 0;
				func_63(5);
			}
			else
			{
				func_141();
			}
			break;
	}
}

void func_60()
{
	bool bVar0;
	struct<2> Var1;

	Var1 = { func_142() };
	bVar0 = func_44(Var1);
	if (bVar0)
	{
		func_31(1024);
	}
	else
	{
		func_28(1024);
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<17> Var4;
	var uVar21;
	struct<5> Var25;
	struct<14> Var46;
	var uVar62;

	func_143();
	func_144();
	func_145();
	func_146();
	iVar3 = func_147(Global_1296859.f_154[Global_1296859]);
	if (((iVar3 != 9 && iVar3 > 0) && GANG::_0xD6F6ACF4392187FB(Global_1296859.f_15)) && !GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
	{
		func_148(0);
		func_149(9);
	}
	switch (iVar3)
	{
		case 0:
			func_150();
			if (func_151(Global_1296859.f_154[Global_1296859]))
			{
				if (func_152())
				{
					func_149(7);
				}
				else
				{
					func_149(2);
				}
			}
			else
			{
				func_149(1);
			}
			break;
		case 1:
			if (func_151(Global_1296859.f_154[Global_1296859]))
			{
				func_153(&(Global_1134349.f_15), 0);
				func_149(2);
			}
			break;
		case 2:
			if (func_154())
			{
				if (!func_155(Global_1296859, 64))
				{
					func_148(1);
				}
			}
			else if (func_155(Global_1296859, 64))
			{
				func_148(0);
			}
			if (func_156(PLAYER::PLAYER_ID()) == 0 && !func_155(Global_1296859, 128))
			{
				func_157("TRADER_HALT_REASON_RESUPPLY", joaat("BUTCHER_TABLE_PRODUCTION"));
				func_148(0);
				func_158(8);
				func_149(4);
			}
			iVar1 = (Global_1901947.f_584.f_11 * 60000);
			if (func_159(&(Global_1134349.f_15)) && func_160(&(Global_1134349.f_15)) > iVar1)
			{
				if (func_161())
				{
					func_149(3);
				}
			}
			break;
		case 3:
			if (func_162(&Global_1134349) == 3)
			{
				func_149(2);
			}
			break;
		case 4:
			if (func_155(Global_1296859, 256))
			{
				if (func_155(Global_1296859, 16384))
				{
					if (func_163(&Global_1134349))
					{
						return;
					}
					if (!func_152())
					{
						iVar0 = func_164(2128091090, 0, 1, -1, 1);
						if (!func_165(&Global_1134349, 2128091090, 1, 1, iVar0, -1, 1))
						{
							return;
						}
						Global_1134349.f_39 = func_166(2128091090, iVar0, 0);
						if (Global_1134349.f_39 != 0)
						{
							Var4.f_7 = -142743235;
							Var4.f_16 = -1;
							Var4.f_16 = func_167(Global_1134349.f_39);
							func_168(Global_1134349.f_1, Var4);
						}
					}
					func_169(955, 1);
					func_149(5);
				}
				else if (func_155(Global_1296859, 256))
				{
					func_171(func_170(914410532, func_91(1), 1784584921, 1, 0, 0));
					func_172(256);
					func_172(8);
					func_149(2);
				}
			}
			break;
		case 5:
			if (func_152())
			{
				Var25 = -1;
				Var25.f_4.f_7 = -142743235;
				Var25.f_4.f_16 = -1;
				if (Global_1134349.f_39 != 0 && func_173(Global_1134349.f_1, &uVar21))
				{
					func_174(Global_1134349.f_1, &Var25);
					TELEMETRY::_TELEMETRY_COUPON(&uVar21, func_175(Global_1134349.f_39), Global_1134349.f_39, Var25.f_4.f_16, 2128091090, func_176(154));
				}
				func_153(&(Global_1134349.f_18), 0);
				func_149(6);
			}
			break;
		case 6:
			iVar2 = (Global_1901947.f_584.f_13 * 60000);
			if (func_159(&(Global_1134349.f_18)) && func_160(&(Global_1134349.f_18)) > iVar2)
			{
				func_149(7);
			}
			break;
		case 7:
			if (func_155(Global_1296859, 16384))
			{
				if (func_163(&Global_1134349))
				{
					return;
				}
			}
			if (func_159(&(Global_1134349.f_18)))
			{
				func_177(&(Global_1134349.f_18));
			}
			iVar0 = func_178(-1364613333, 0, 1, -1, 1);
			if (!func_179(&Global_1134349, -1364613333, 1, 1, 1, 0, iVar0, -1, 0))
			{
				func_149(2);
				return;
			}
			func_169(956, 1);
			Var46.f_8 = func_180(-1364613333, 770694722);
			Var46.f_6 = func_180(-1364613333, 914410532);
			Var46.f_13 = 1;
			func_172(16384);
			func_172(256);
			func_172(8);
			func_149(8);
			break;
		case 8:
			if (func_163(&Global_1134349))
			{
				return;
			}
			TELEMETRY::_0xF184B3ECE36219CF(Global_1134349.f_1, &uVar62);
			TELEMETRY::_TELEMETRY_ROLE_TRADER(&Var46, &uVar62);
			func_171(func_170(914410532, func_91(1), 1784584921, 1, 0, 0));
			func_149(2);
			break;
		case 9:
			if (GANG::_0xD6F6ACF4392187FB(Global_1296859.f_15) && GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
			{
				if (func_151(Global_1296859.f_154[Global_1296859]))
				{
					func_149(2);
				}
				else
				{
					func_149(1);
				}
			}
			break;
	}
}

void func_62()
{
	int iVar0;

	if ((MISC::GET_FRAME_COUNT() % 45) == 0)
	{
		iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (Global_1137047.f_339.f_16 != 0 && (Global_1137047.f_339.f_16 != func_181(iVar0) || Global_1137047.f_339.f_16 == func_182(iVar0)))
		{
			UILOG::_UILOG_REMOVE_ENTRY(7, Global_1137047.f_339.f_16);
			Global_1137047.f_339.f_16 = 0;
		}
		else if (func_183(Global_1137047.f_339.f_18, 2))
		{
			func_184(&(Global_1137047.f_339.f_18), 2);
			func_185();
		}
	}
}

void func_63(int iParam0)
{
	Global_1132288.f_2019 = iParam0;
}

void func_64(var uParam0)
{
	struct<32> Var0;

	Var0.f_3 = -1;
	Var0.f_7 = -1;
	Var0.f_25 = -1;
	Var0.f_28.f_1 = 1046181202;
	Var0.f_28.f_2 = 255;
	Var0.f_28.f_3 = -1;
	*uParam0 = { Var0 };
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_67(int iParam0)
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

int func_68(int iParam0)
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

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_70(int iParam0, int iParam1)
{
	if (Global_1131196.f_865[iParam0 /*7*/].f_4 != iParam1)
	{
		Global_1131196.f_865[iParam0 /*7*/].f_4 = iParam1;
	}
}

void func_71(int iParam0, vector3 vParam1)
{
	Global_1131196.f_865[iParam0 /*7*/].f_1 = { vParam1 };
}

void func_72(int iParam0, int iParam1)
{
	if (Global_1131196.f_865[iParam0 /*7*/] != iParam1)
	{
		Global_1131196.f_865[iParam0 /*7*/] = iParam1;
	}
}

int func_73(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -1;
	}
	if (!func_49())
	{
		return -1;
	}
	if (iParam0 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1131196[iVar0 /*27*/].f_9 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_74(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_75(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (Global_1131196[iParam0 /*27*/] != iParam1)
	{
		Global_1131196[iParam0 /*27*/] = iParam1;
	}
}

bool func_76(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1131196[iVar1 /*27*/].f_9 == iVar0)
		{
			return Global_1131196[iVar1 /*27*/].f_1.f_1 == Global_1134390[iParam0 /*83*/].f_33.f_1;
		}
		iVar1++;
	}
	return false;
}

bool func_77(vector3 vParam0, var uParam3)
{
	struct<5> Var0;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 1886596441;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var0);
		return true;
	}
	return false;
}

bool func_78(vector3 vParam0, bool bParam3, vector3 vParam4, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (func_42(32))
	{
		if (func_187(vParam0.z))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_42(64))
	{
		iVar0 = func_188(vParam0);
		if (iVar0 == 0)
		{
			return false;
		}
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
		{
			return false;
		}
	}
	if (func_189(vParam0, iParam7))
	{
		return false;
	}
	if (!bParam9 && VOLUME::_0x397769175A7DBB30(vParam4, Global_1901947.f_584.f_5, 0, 0, 0))
	{
		return false;
	}
	if (!bParam9 && VOLUME::_0x397769175A7DBB30(vParam4, Global_1901947.f_584.f_4, 0, func_190(), 0))
	{
		return false;
	}
	if (bParam10 == 0 && func_191(vParam4))
	{
		return false;
	}
	if (bParam10 == 0 && func_192(vParam4, bParam3))
	{
		return false;
	}
	return true;
}

int func_79(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1131196[iVar0 /*27*/].f_1.f_2 == 0 || (Global_1131196[iVar0 /*27*/].f_9 == iParam0->f_9 && iParam0->f_9 != 255))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 32)
	{
		return -1;
	}
	Global_1131196[iVar0 /*27*/] = { *iParam0 };
	SCRIPTS::_0x31010318BA9897AC(&(Global_1131196.f_1091), Global_1131196[iVar0 /*27*/].f_9);
	return iVar0;
}

void func_80(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_193(iParam0, iParam1))
	{
		func_45(&(Global_1131196[iParam0 /*27*/].f_7), iParam1);
	}
}

bool func_81(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4)
{
	vector3 vVar0;

	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return false;
	}
	vVar0 = { *uParam1 };
	if (func_194(&vVar0, iParam0, bParam2, iParam3, uParam4))
	{
		*uParam1 = { vVar0 };
		return true;
	}
	return false;
}

void func_82(int iParam0)
{
	int iVar0;

	if (Global_1131196[iParam0 /*27*/] == 0)
	{
		return;
	}
	iVar0 = func_195(iParam0, 0);
	if (!func_101(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!GANG::_0x424B17A7DC5C90BC(iVar0))
	{
		func_75(iParam0, 3);
	}
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = NETWORK::GET_NETWORK_TIME();
	if (Global_1131196[iParam0 /*27*/].f_26 == 0)
	{
		Global_1131196[iParam0 /*27*/].f_26 = iVar0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(Global_1131196[iParam0 /*27*/].f_26, iVar0) > 12000)
	{
		Global_1131196[iParam0 /*27*/].f_26 = iVar0;
	}
	else
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1131196[iParam0 /*27*/].f_9))
	{
		return;
	}
	if (func_65(Global_1134390[Global_1131196[iParam0 /*27*/].f_9 /*83*/].f_33.f_4, 128))
	{
		iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(Global_1131196[iParam0 /*27*/].f_9);
		if (!func_65(Global_1131196.f_865[iVar1 /*7*/].f_5, 128))
		{
			Global_1131196[iParam0 /*27*/].f_23.f_1 = Global_1134390[Global_1131196[iParam0 /*27*/].f_9 /*83*/].f_38.f_23.f_1;
			Global_1131196[iParam0 /*27*/].f_23 = Global_1134390[Global_1131196[iParam0 /*27*/].f_9 /*83*/].f_38.f_23;
			Global_1131196[iParam0 /*27*/].f_25 = 0;
			func_45(&(Global_1131196.f_865[iVar1 /*7*/].f_5), 128);
		}
	}
	iVar2 = GANG::_0x901E0DC25080C8B9(Global_1131196[iParam0 /*27*/].f_9);
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar4)))
		{
			if (GANG::_0x901E0DC25080C8B9(PLAYER::INT_TO_PLAYERINDEX(iVar4)) != iVar2)
			{
				SCRIPTS::_0x31010318BA9897AC(&iVar3, iVar4);
			}
		}
		iVar4++;
	}
	if (iVar3 != Global_1131196[iParam0 /*27*/].f_25)
	{
		Global_1131196[iParam0 /*27*/].f_25 = iVar3;
		VOLUME::_0xEBA87B9273835CF3(Global_1131196[iParam0 /*27*/].f_23.f_1, &iVar3);
		VOLUME::_0xEBA87B9273835CF3(Global_1131196[iParam0 /*27*/].f_23, &iVar3);
	}
}

void func_84(int iParam0)
{
	int iVar0;
	struct<7> Var1[7];
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	bool bVar56;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1131196[iParam0 /*27*/].f_9))
	{
		return;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(Global_1131196[iParam0 /*27*/].f_9);
	iVar51 = GANG::_0xD1BF325C8252A982(iVar0, &Var1);
	if (iVar51 > Global_1131196[iParam0 /*27*/].f_1)
	{
		return;
	}
	iVar53 = 0;
	while (iVar53 <= (Global_1131196[iParam0 /*27*/].f_1 - 1))
	{
		if (Global_1131196[iParam0 /*27*/].f_10[iVar53] != 255)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1131196[iParam0 /*27*/].f_10[iVar53]))
			{
				Global_1131196[iParam0 /*27*/].f_10[iVar53] = 255;
			}
			else if (GANG::_0x901E0DC25080C8B9(Global_1131196[iParam0 /*27*/].f_10[iVar53]) != iVar0)
			{
				Global_1131196[iParam0 /*27*/].f_10[iVar53] = 255;
			}
		}
		else if (iVar53 >= iVar51)
		{
		}
		else
		{
			iVar55 = 0;
			while (iVar55 <= iVar53)
			{
				if (func_196(Var1[iVar55 /*7*/]))
				{
					iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[iVar55 /*7*/]));
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52))
					{
						bVar56 = true;
						iVar54 = 0;
						while (iVar54 <= (Global_1131196[iParam0 /*27*/].f_1 - 1))
						{
							if (Global_1131196[iParam0 /*27*/].f_10[iVar54] == iVar52)
							{
								bVar56 = false;
							}
							else
							{
								iVar54++;
							}
						}
					}
				}
				if (bVar56 == 1)
				{
				}
				else
				{
					iVar55++;
				}
			}
			if (bVar56)
			{
				Global_1131196[iParam0 /*27*/].f_10[iVar53] = iVar52;
			}
		}
		iVar53++;
	}
}

void func_85(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar2)) && Global_1134390[iVar2 /*83*/].f_70.f_2 != 0) && Global_1134390[iVar2 /*83*/].f_70 == iParam0)
		{
			bVar0 = true;
			iVar1 = Global_1134390[iVar2 /*83*/].f_70.f_2;
			Global_1131196[iParam0 /*27*/].f_18 = (Global_1131196[iParam0 /*27*/].f_18 || Global_1134390[iVar2 /*83*/].f_70.f_1);
		}
		iVar2++;
	}
	if (bVar0)
	{
		if (Global_1131196[iParam0 /*27*/].f_18.f_1 != iVar1)
		{
			Global_1131196[iParam0 /*27*/].f_18.f_1 = iVar1;
		}
	}
	else if (Global_1131196[iParam0 /*27*/].f_18.f_1 != 0)
	{
		Global_1131196[iParam0 /*27*/].f_18.f_1 = 0;
		Global_1131196[iParam0 /*27*/].f_18 = 0;
	}
}

void func_86(int iParam0)
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_197(), iParam0, false, 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_198(), iParam0, false, 0))
	{
		func_75(iParam0, 2);
	}
}

void func_87(int iParam0)
{
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_197(), iParam0, false, 0))
	{
		func_75(iParam0, 1);
	}
}

void func_88(int iParam0)
{
	if (Global_1901947.f_584.f_15)
	{
		func_199(iParam0);
	}
	func_200(&(Global_1131196[iParam0 /*27*/]));
	func_75(iParam0, 0);
}

void func_89()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1134349.f_40 = 0;
	Global_1134390[iVar0 /*83*/].f_74 = Global_1134349.f_32;
	Global_1134390[iVar0 /*83*/].f_74.f_1 = Global_1134349.f_33;
}

void func_90()
{
	if (func_122(512))
	{
		func_31(65536);
	}
	else if (func_122(256))
	{
		func_31(32768);
	}
}

struct<4> func_91(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_201(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_92(joaat("CHARACTER"), func_202(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_92(joaat("CHARACTER"), func_202(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_92(joaat("CHARACTER"), func_202(), -1591664384, bParam0);
}

struct<4> func_92(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_203(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_201(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_93(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar0 = joaat("UPGRADE_CAMP_EQUIPMENT_FAST_TRAVEL_MAP");
	if (func_204(iVar0, 1))
	{
		Global_1134390[iVar1 /*83*/].f_38.f_12.f_3 = iVar0;
	}
	iVar0 = joaat("UPGRADE_CAMP_STEW_POT");
	if (func_204(iVar0, 1))
	{
		Global_1134390[iVar1 /*83*/].f_38.f_12.f_1 = iVar0;
	}
	iVar0 = joaat("UPGRADE_CAMP_BUTCHER_TABLE");
	if (func_204(iVar0, 1))
	{
		Global_1134390[iVar1 /*83*/].f_38.f_12 = iVar0;
	}
	iVar0 = -1396511102; /* GXTEntry: "Deluxe Campfire" */
	if (func_204(iVar0, 1))
	{
		Global_1134390[iVar1 /*83*/].f_38.f_12.f_6 = iVar0;
	}
	iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_SMALL");
	if (func_204(iVar0, 1))
	{
		Global_1134390[iVar1 /*83*/].f_38.f_12.f_2 = iVar0;
	}
	iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM");
	if (func_204(iVar0, 1))
	{
		Global_1134390[iVar1 /*83*/].f_38.f_12.f_2 = iVar0;
	}
	iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE");
	if (func_204(iVar0, 1))
	{
		Global_1134390[iVar1 /*83*/].f_38.f_12.f_2 = iVar0;
	}
}

void func_94()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_005"), 1))
	{
		if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_002"), 1))
		{
			Global_1134390[iVar0 /*83*/].f_38.f_26 = 11;
		}
		else if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_001"), 1))
		{
			Global_1134390[iVar0 /*83*/].f_38.f_26 = 10;
		}
		else
		{
			Global_1134390[iVar0 /*83*/].f_38.f_26 = 9;
		}
	}
	else if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_004"), 1))
	{
		if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_002"), 1))
		{
			Global_1134390[iVar0 /*83*/].f_38.f_26 = 8;
		}
		else if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_001"), 1))
		{
			Global_1134390[iVar0 /*83*/].f_38.f_26 = 7;
		}
		else
		{
			Global_1134390[iVar0 /*83*/].f_38.f_26 = 6;
		}
	}
	else if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_003"), 1))
	{
		if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_002"), 1))
		{
			Global_1134390[iVar0 /*83*/].f_38.f_26 = 5;
		}
		else if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_001"), 1))
		{
			Global_1134390[iVar0 /*83*/].f_38.f_26 = 4;
		}
		else
		{
			Global_1134390[iVar0 /*83*/].f_38.f_26 = 3;
		}
	}
	else if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_002"), 1))
	{
		Global_1134390[iVar0 /*83*/].f_38.f_26 = 2;
	}
	else if (func_204(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_001"), 1))
	{
		Global_1134390[iVar0 /*83*/].f_38.f_26 = 1;
	}
	else
	{
		Global_1134390[iVar0 /*83*/].f_38.f_26 = 0;
	}
}

int func_95(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_205(&uParam0, iParam4, bParam5, iParam6);
}

void func_96(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1134390[iParam1 /*83*/].f_38.f_12.f_4 != iParam0)
	{
		Global_1134390[iParam1 /*83*/].f_38.f_12.f_4 = iParam0;
	}
}

void func_97(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1134390[iParam1 /*83*/].f_38.f_12.f_5 != iParam0)
	{
		Global_1134390[iParam1 /*83*/].f_38.f_12.f_5 = iParam0;
	}
}

void func_98(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1134390[iParam1 /*83*/].f_38.f_12.f_7 != iParam0)
	{
		Global_1134390[iParam1 /*83*/].f_38.f_12.f_7 = iParam0;
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			func_31(8192);
		}
	}
}

void func_99(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1134390[iParam1 /*83*/].f_38.f_12.f_8 != iParam0)
	{
		Global_1134390[iParam1 /*83*/].f_38.f_12.f_8 = iParam0;
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			func_31(8192);
		}
	}
}

void func_100(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1134390[iParam1 /*83*/].f_38.f_12.f_9 != iParam0)
	{
		Global_1134390[iParam1 /*83*/].f_38.f_12.f_9 = iParam0;
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			func_31(8192);
		}
	}
}

bool func_101(int iParam0)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return (Global_1131196[iParam0 /*27*/] != 0 && Global_1131196[iParam0 /*27*/] != 3);
}

void func_102(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 255;
	Global_1137047.f_9[iParam0 /*10*/] = { Var0 };
	iVar10 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if ((GANG::_0xD6F6ACF4392187FB(iVar10) && iParam1 == GANG::_0x4BE6C13A45CCA8EC(iVar10)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		Global_1137047.f_330.f_3 = { Var0.f_4 };
	}
}

void func_103(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (Global_1132288.f_1[iParam0 /*63*/].f_3 != iParam1)
	{
		Global_1132288.f_1[iParam0 /*63*/].f_3 = iParam1;
	}
}

void func_104(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;

	Global_1137047.f_9[iParam0 /*10*/].f_7 = { func_206(iParam0) };
	Global_1137047.f_9[iParam0 /*10*/].f_4 = { vParam1 };
	Global_1137047.f_9[iParam0 /*10*/].f_2 = iParam4;
	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if ((GANG::_0xD6F6ACF4392187FB(iVar0) && iParam4 == GANG::_0x4BE6C13A45CCA8EC(iVar0)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Global_1137047.f_330.f_7 = iParam4;
		Global_1137047.f_330.f_3 = { vParam1 };
	}
}

bool func_105(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		return MAP::DOES_BLIP_EXIST(Global_17081[iParam0]);
	}
	return false;
}

void func_106(var uParam0)
{
	struct<63> Var0;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_13 = 7;
	Var0.f_49 = 7;
	*uParam0 = { Var0 };
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!bParam1)
	{
		func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_5), 0);
		return;
	}
	if (!func_207(iParam0))
	{
		func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_5), 0);
		return;
	}
	if (!func_42(16))
	{
		func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_5), 0);
		return;
	}
	iVar0 = func_208(iParam0, 0);
	iVar1 = Global_1296859.f_15;
	bVar2 = (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && Global_1131196[iParam0 /*27*/].f_9 == PLAYER::PLAYER_ID());
	bVar3 = ((!bVar2 && iVar0 == iVar1) && GANG::_0x424B17A7DC5C90BC(Global_1131196[iParam0 /*27*/].f_9));
	bVar4 = func_105(Global_1132288.f_1[iParam0 /*63*/].f_5);
	if ((!bVar2 && !bVar3) && BUILTIN::VDIST(Global_35, func_206(iParam0)) > 75f)
	{
		if (bVar4)
		{
			func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_5), 0);
		}
		return;
	}
	bVar5 = func_42(1024);
	bVar6 = func_209(1);
	if (!bVar4)
	{
		if (((bVar2 || bVar3) && Global_1132288.f_2045 != iParam0) && Global_1132288.f_2045 != -1)
		{
			func_17(&(Global_1132288.f_1[Global_1132288.f_2045 /*63*/].f_5), 0);
		}
		if (bVar2 || bVar3)
		{
			func_210(iParam0);
		}
		if (bVar5)
		{
			if (bVar2 || bVar3)
			{
				if (!bVar6)
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
		iVar7 = Global_1131196[iParam0 /*27*/].f_1.f_1;
		Global_1132288.f_1[iParam0 /*63*/].f_5 = func_213(func_211(func_206(iParam0), 1), func_212((bVar2 || bVar3)), func_206(iParam0), -1);
		if (Global_1132288.f_1[iParam0 /*63*/].f_5 == -1)
		{
			return;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), "NET_CAMP_BLIP_POSSE");
		MAP::SET_BLIP_FLASH_TIMER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), func_212((bVar2 || bVar3)), func_214(iVar7, (bVar2 || bVar3), bVar2));
		if (func_42(512))
		{
			if (bVar5 == 0)
			{
				MAP::_BLIP_SET_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), 580546400);
				MAP::_BLIP_SET_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), 1784012766);
				Global_1132288.f_1[iParam0 /*63*/].f_62 = MISC::GET_GAME_TIMER();
			}
			func_28(512);
		}
	}
	else
	{
		if (Global_1132288.f_2045 == iParam0)
		{
			if ((Global_1132288.f_2045 != -1 && !bVar2) && !bVar3)
			{
				func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_5), 0);
				return;
			}
		}
		else if (Global_1132288.f_2045 != -1 && (bVar2 || bVar3))
		{
			func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_5), 0);
			return;
		}
		if (!bVar2 && !bVar3)
		{
			if (func_113(iParam0, 2))
			{
				MAP::_BLIP_SET_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), 1586775858);
			}
			else
			{
				MAP::_BLIP_SET_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), 1635604685);
			}
		}
		if (func_215(iParam0) && (!(bVar3 || bVar2) || !bVar5))
		{
			MAP::_BLIP_SET_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), 892550176);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), 892550176);
		}
		if (bVar5 && (!(bVar3 || bVar2) || !bVar6))
		{
			MAP::_BLIP_REMOVE_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), 580546400);
			MAP::_BLIP_REMOVE_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), 1784012766);
			Global_1132288.f_1[iParam0 /*63*/].f_62 = 0;
			MAP::_BLIP_SET_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), -211388321);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), -211388321);
		}
		if (Global_1132288.f_1[iParam0 /*63*/].f_62 != 0 && (MISC::GET_GAME_TIMER() - Global_1132288.f_1[iParam0 /*63*/].f_62) > 20000)
		{
			MAP::_BLIP_REMOVE_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_5), 1784012766);
			Global_1132288.f_1[iParam0 /*63*/].f_62 = 0;
		}
	}
}

void func_108(int iParam0, bool bParam1)
{
	struct<2> Var0;

	if (!bParam1)
	{
		return;
	}
	if (!func_74(iParam0))
	{
		return;
	}
	if (!GANG::_0x9BE7DCB22D32CCBE(func_208(iParam0, 0), PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_216(PLAYER::PLAYER_ID()) == iParam0 && GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		Var0 = { func_217(0) };
		if (func_44(Var0))
		{
			if ((((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 8) || Var0 == 7) || Var0 == 6)
			{
				if (!func_193(iParam0, 32) && !func_113(iParam0, 4096))
				{
					if (func_113(iParam0, 16))
					{
						func_218(iParam0, 2048);
					}
					else
					{
						func_219(iParam0, 2048);
					}
					func_220(iParam0);
					func_218(iParam0, 4096);
				}
			}
		}
		else if (func_193(iParam0, 32))
		{
			if (func_113(iParam0, 4096))
			{
				func_221(iParam0);
				func_219(iParam0, 4096);
				if (func_113(iParam0, 2048))
				{
					func_222(iParam0);
					func_219(iParam0, 2048);
				}
			}
		}
	}
	if (func_215(iParam0))
	{
		if (func_122(16))
		{
			func_125(16);
		}
	}
	else if (!func_122(16))
	{
		func_223(16);
	}
}

void func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!func_105(Global_1132288.f_1[iParam0 /*63*/].f_5))
	{
		if (func_105(Global_1132288.f_1[iParam0 /*63*/].f_6))
		{
			MAP::_BLIP_REMOVE_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_6), 7148155);
			func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_6), 0);
			Global_1132288.f_1[iParam0 /*63*/].f_6 = -1;
		}
		return;
	}
	iVar0 = func_208(iParam0, 0);
	iVar1 = Global_1296859.f_15;
	bVar2 = (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && Global_1131196[iParam0 /*27*/].f_9 == PLAYER::PLAYER_ID());
	bVar3 = ((!bVar2 && iVar0 == iVar1) && GANG::_0x424B17A7DC5C90BC(Global_1131196[iParam0 /*27*/].f_9));
	if (!bVar2 && !bVar3)
	{
		if (func_105(Global_1132288.f_1[iParam0 /*63*/].f_6))
		{
			MAP::_BLIP_REMOVE_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_6), 7148155);
			func_17(&(Global_1132288.f_1[iParam0 /*63*/].f_6), 0);
			Global_1132288.f_1[iParam0 /*63*/].f_6 = -1;
		}
		return;
	}
	if (func_105(Global_1132288.f_1[iParam0 /*63*/].f_6))
	{
		return;
	}
	if (func_105(Global_1132288.f_1[Global_1132288.f_2051 /*63*/].f_6))
	{
		MAP::_BLIP_REMOVE_MODIFIER(func_16(Global_1132288.f_1[Global_1132288.f_2051 /*63*/].f_6), 7148155);
		func_17(&(Global_1132288.f_1[Global_1132288.f_2051 /*63*/].f_6), 0);
		Global_1132288.f_1[Global_1132288.f_2051 /*63*/].f_6 = -1;
	}
	iVar4 = Global_1131196[iParam0 /*27*/].f_1.f_1;
	Global_1132288.f_1[iParam0 /*63*/].f_6 = func_213(func_211(func_206(iParam0), 1), 100, func_206(iParam0), -1);
	if (Global_1132288.f_1[iParam0 /*63*/].f_6 == -1 || !func_105(Global_1132288.f_1[iParam0 /*63*/].f_6))
	{
		return;
	}
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(func_16(Global_1132288.f_1[iParam0 /*63*/].f_6), "NET_CAMP_BLIP_POSSE");
	MAP::SET_BLIP_FLASH_TIMER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_6), func_212((bVar2 || bVar3)), func_214(iVar4, (bVar2 || bVar3), bVar2));
	MAP::_BLIP_SET_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_6), 7148155);
	MAP::_BLIP_SET_MODIFIER(func_16(Global_1132288.f_1[iParam0 /*63*/].f_6), -1186550032);
	Global_1132288.f_2051 = iParam0;
}

void func_110(int iParam0)
{
	if (!func_12())
	{
		return;
	}
	if (func_42(4))
	{
		return;
	}
	if (!func_224(iParam0, 8))
	{
		func_225(iParam0);
		func_226(iParam0);
		func_227(iParam0);
		func_228(iParam0);
		func_229(iParam0);
		func_230(iParam0);
		func_231(iParam0, 8);
	}
	if (BUILTIN::VDIST(Global_35, func_206(iParam0)) >= Global_1901947.f_584)
	{
		return;
	}
	if (Global_1132288.f_1[iParam0 /*63*/].f_4 == 0)
	{
		func_232(iParam0, 1);
	}
	switch (Global_1132288.f_1[iParam0 /*63*/].f_4)
	{
		case 0:
			func_232(iParam0, 1);
			break;
		case 1:
			if (func_233(iParam0))
			{
				func_218(iParam0, 1);
				func_31(256);
				func_232(iParam0, 2);
			}
			break;
		case 2:
			if (func_234(iParam0))
			{
				func_232(iParam0, 3);
			}
			break;
		case 3:
			func_218(iParam0, 1);
			func_31(256);
			func_103(iParam0, 2);
			break;
	}
}

void func_111(int iParam0)
{
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2055) || Global_1132288.f_2056 != iParam0)
	{
		func_219(iParam0, 1);
		func_219(iParam0, 2);
		func_232(iParam0, 0);
		func_103(iParam0, 1);
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2057) || Global_1132288.f_2058 != iParam0)
	{
		func_219(iParam0, 1024);
	}
}

void func_112(int iParam0)
{
	if ((func_113(iParam0, 1) && SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2055)) && Global_1132288.f_2056 == iParam0)
	{
		return;
	}
	func_235(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0]));
	func_106(&(Global_1132288.f_1[iParam0 /*63*/]));
	func_103(iParam0, 0);
	func_232(iParam0, 0);
}

bool func_113(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return func_65(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0], iParam1);
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((MISC::GET_FRAME_COUNT() % 3) != 0)
	{
		return;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	iVar1 = GANG::_0x4BE6C13A45CCA8EC(iVar0);
	iVar2 = func_236(iVar1);
	if (iVar2 != func_216(PLAYER::PLAYER_ID()))
	{
		func_237(iVar2);
	}
}

Vector3 func_115()
{
	vector3 vVar0;
	struct<19> Var3;

	Var3 = { func_238(0) };
	if (Var3.f_8 != joaat("KIT_CAMP"))
	{
	}
	if (((Var3.f_16 == 0 && Var3.f_18 == 0) && Global_17411.f_55.f_4.f_2 != 0) && Global_17411.f_55.f_4 >= 4)
	{
		vVar0 = { Global_17411.f_55.f_4 };
	}
	else
	{
		vVar0.x = Var3.f_16;
		vVar0.f_1 = Var3.f_17;
		vVar0.f_2 = Var3.f_18;
	}
	return vVar0;
}

void func_116(vector3 vParam0)
{
	Global_1134390[func_239() /*83*/].f_38 = { vParam0 };
	func_240(vParam0);
}

bool func_117()
{
	return Global_1132288.f_2027.f_7 == 3;
}

void func_118(int iParam0)
{
	Global_1132288.f_2027.f_7 = iParam0;
}

void func_119()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_38.f_7 = -1;
	Global_1134390[iVar0 /*83*/].f_38.f_8 = { 0f, 0f, 0f };
}

void func_120()
{
	if (func_65(Global_1137047.f_8, 2))
	{
		func_43(&(Global_1137047.f_8), 2);
	}
}

void func_121()
{
	if ((Global_1137047.f_382 < 3 && func_42(64)) && !func_123())
	{
		func_137("NET_CAMP_HELP_NO_CAMP", 10000, 0, 0, 0, 1);
		Global_1137047.f_382++;
	}
}

bool func_122(int iParam0)
{
	return func_65(Global_1137047.f_8, iParam0);
}

bool func_123()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_124(int iParam0)
{
	return func_241(1, iParam0);
}

void func_125(int iParam0)
{
	func_43(&(Global_1137047.f_8), iParam0);
}

bool func_126(vector3 vParam0, bool bParam3)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { vParam0 };
	if ((func_49() && func_42(64)) && func_242(0, 1))
	{
		if (vVar1.z != 0)
		{
			if (func_243())
			{
				if (func_244(vVar1, 1))
				{
					iVar0 = 1;
				}
			}
			else
			{
				if (!func_245(Global_1296859.f_15))
				{
				}
				if (bParam3)
				{
					if (!func_246(vVar1, 1))
					{
						iVar0 = 0;
					}
					else if (func_244(vVar1, 0))
					{
						iVar0 = 1;
						func_128(1);
					}
				}
				else if (func_244(vVar1, 0))
				{
					iVar0 = 1;
				}
			}
		}
	}
	return iVar0;
}

int func_127()
{
	vector3 vVar0;

	if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	func_63(2);
	Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = 0;
	Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_247();
	func_248(vVar0);
	return 1;
}

void func_128(int iParam0)
{
	Global_1132288.f_2027.f_5 = iParam0;
}

bool func_129()
{
	return Global_1132288.f_2046 < 10;
}

void func_130(vector3 vParam0, vector3 vParam3)
{
	struct<8> Var0;

	Var0 = { vParam3 };
	Var0.f_4 = Global_1901947.f_584.f_5;
	Var0.f_5 = 544;
	Var0.f_6 = func_249();
	Var0.f_7 = func_188(vParam0);
	Global_1132288.f_2052.f_1 = VOLUME::_0x183C0B6CFEFFCAE4(&Var0);
}

void func_131(int iParam0)
{
	if (Global_1134390[PLAYER::PLAYER_ID() /*83*/].f_38.f_23.f_1 != iParam0)
	{
		Global_1134390[PLAYER::PLAYER_ID() /*83*/].f_38.f_23.f_1 = iParam0;
	}
}

void func_132(vector3 vParam0, vector3 vParam3)
{
	struct<8> Var0;

	Var0 = { vParam3 + Vector(1f, 0f, 0f) };
	Var0.f_4 = Global_1901947.f_584.f_4;
	Var0.f_5 = 552;
	Var0.f_6 = func_190();
	Var0.f_7 = func_188(vParam0);
	Global_1132288.f_2052 = VOLUME::_0x183C0B6CFEFFCAE4(&Var0);
}

void func_133(int iParam0)
{
	if (Global_1134390[PLAYER::PLAYER_ID() /*83*/].f_38.f_23 != iParam0)
	{
		Global_1134390[PLAYER::PLAYER_ID() /*83*/].f_38.f_23 = iParam0;
	}
}

void func_134(int iParam0)
{
	func_45(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

bool func_135(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (Global_1132288.f_2049 == 0)
	{
		Global_1132288.f_2049 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1132288.f_2049) > Global_1901947.f_584.f_14)
	{
		*bParam0 = 1;
		Global_1132288.f_2049 = 0;
		return false;
	}
	if (Global_1131196.f_865[iVar1 /*7*/].f_4 != Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3)
	{
		return false;
	}
	if (func_65(Global_1131196.f_865[iVar1 /*7*/].f_5, 32))
	{
		*bParam0 = 1;
		Global_1132288.f_2049 = 0;
		return false;
	}
	if (Global_1131196.f_865[iVar1 /*7*/] != 6)
	{
		return false;
	}
	iVar2 = func_236(iVar0);
	if (func_74(iVar2))
	{
		vVar3 = { Global_1131196[iVar2 /*27*/].f_1 };
		vVar6 = { func_206(iVar2) };
		func_116(vVar3);
		func_250(vVar6);
		iVar9 = func_211(vVar6, 1);
		func_251(iVar9);
		func_248(vVar3);
		TELEMETRY::_TELEMETRY_NET_CAMP(vVar3.x, vVar3.z, vVar3.y, func_252(PLAYER::NETWORK_PLAYER_ID_TO_INT()), vVar6);
		if (GANG::_0x0F99F6436528A089(Global_1296859.f_15) && GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_253(Global_1296859.f_15, vVar3.x);
			POSSE::_0xC08AFF658B2E51DA(&iVar10);
			if (iVar10 != 0)
			{
				Global_1194053.f_14.f_7 = iVar10;
				Global_1194053.f_14.f_9 = Global_1296859.f_15;
				Global_1194053.f_14.f_12 = vVar3.x;
				Global_1194053.f_14.f_13 = vVar3.y;
				Global_1194053.f_1 = 10;
			}
		}
		if (func_42(64))
		{
			if (Global_1132288.f_2027.f_4 == -15)
			{
				Global_1132288.f_2027.f_4 = func_254();
			}
		}
		func_237(iVar2);
		return true;
	}
	return false;
}

void func_136()
{
	if (!func_65(Global_1137047.f_8, 2))
	{
		func_45(&(Global_1137047.f_8), 2);
	}
}

var func_137(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_138(vector3 vParam0)
{
	int iVar0;

	if (!func_42(64))
	{
		return false;
	}
	iVar0 = func_188(vParam0);
	if (iVar0 != 0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

void func_139(int iParam0)
{
	if ((iParam0 < 0 || iParam0 >= 32) || Global_1131196[iParam0 /*27*/].f_9 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (Global_1134390[func_239() /*83*/].f_38.f_2 != Global_1131196[iParam0 /*27*/].f_1.f_2)
	{
		func_116(Global_1131196[iParam0 /*27*/].f_1);
	}
	func_255();
	func_256(iParam0);
	func_257(iParam0, Global_1131196[iParam0 /*27*/].f_1);
	func_258(iParam0);
	func_259(iParam0);
}

bool func_140(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	func_18();
	if (Global_1131196[iParam0 /*27*/].f_9 == 255)
	{
		return false;
	}
	if (Global_1131196[iParam0 /*27*/].f_9 != GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	vVar0 = { Global_1131196[iParam0 /*27*/].f_1 };
	func_116(vVar0);
	func_31(4096);
	if (func_117())
	{
		func_118(0);
	}
	func_120();
	return true;
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar1 = iVar0;
		iVar2 = PLAYER::PLAYER_ID();
		if ((((iVar1 < 32 && iVar1 >= 0) && iVar2 < 32) && iVar2 >= 0) && (Global_1134390[iVar2 /*83*/].f_38.f_2 != Global_1134390[iVar1 /*83*/].f_38.f_2 || Global_1134390[iVar2 /*83*/].f_38 != Global_1134390[iVar1 /*83*/].f_38))
		{
			func_116(Global_1134390[iVar1 /*83*/].f_38);
		}
	}
	if (((func_42(4096) && !func_260()) && CAM::IS_SCREEN_FADED_IN()) && !func_124(255))
	{
		iVar3 = func_216(PLAYER::PLAYER_ID());
		if (func_74(iVar3))
		{
			if (func_105(Global_1132288.f_1[iVar3 /*63*/].f_5) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1131196[iVar3 /*27*/].f_9))
			{
				sVar4 = MISC::_CREATE_VAR_STRING(10, "GC_CAMP_MERGE", func_262(func_261(Global_1131196[iVar3 /*27*/].f_9), joaat("COLOR_POSSE_ALLY")), func_16(Global_1132288.f_1[iVar3 /*63*/].f_5));
				UIFEED::_0xDD1232B332CBB9E7(1, 1, 1);
				Global_1137047.f_375 = func_137(sVar4, 10000, 0, 0, 0, 1);
				Global_1137047.f_376 = Global_1296859.f_15;
				func_28(4096);
			}
		}
	}
	func_255();
}

struct<2> func_142()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_217(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_217(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

void func_143()
{
	int iVar0;

	if (Global_1134349.f_40 == 0)
	{
		Global_1134349.f_40++;
	}
	else if (Global_1134349.f_40 >= 60)
	{
		Global_1134349.f_40 = 0;
		return;
	}
	else
	{
		Global_1134349.f_40++;
		return;
	}
	if (func_263())
	{
		if (!func_155(Global_1296859, 1))
		{
			func_158(1);
		}
	}
	else if (func_155(Global_1296859, 1))
	{
		func_172(1);
	}
	func_264(func_170(770694722, func_91(1), 1784584921, 1, 0, 0));
	func_265(func_170(-735397297, func_91(1), 1784584921, 1, 0, 0));
	func_171(func_170(914410532, func_91(1), 1784584921, 1, 0, 0));
	if (func_266() == joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE"))
	{
		iVar0 = 100;
	}
	else if (func_266() == joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM"))
	{
		iVar0 = 50;
	}
	else
	{
		iVar0 = 25;
	}
	func_267(iVar0);
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_21))
	{
		return;
	}
	iVar3 = GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	iVar4 = func_268(iVar3);
	iVar5 = func_269(iVar3);
	iVar6 = 0;
	if (Global_1940311.f_10893 != 0)
	{
		iVar7 = func_270(Global_1940311.f_10893);
		iVar6 = func_180(iVar7, 770694722);
		if (func_271(Global_1940311.f_10893, 1064293907))
		{
			if (func_272())
			{
				iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 1.25f));
			}
		}
		else if ((INVENTORY::_0x245D07651B1D183B(Global_1940311.f_10893, 268435456) || INVENTORY::_0x245D07651B1D183B(Global_1940311.f_10893, 134217728)) || func_271(Global_1940311.f_10893, 1888974372))
		{
			iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 0.4f));
		}
		else
		{
			iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 0.6f));
		}
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_23))
	{
		if ((func_273(29) && UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SATCHEL"))) && Global_1940311.f_38.f_203 > 0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1134349.f_23, (iVar6 + iVar4));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1134349.f_23, 0);
		}
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_22))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1134349.f_22, iVar4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_24))
	{
		iVar0 = func_274(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1134349.f_24, iVar0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_26))
	{
		if (func_183(Global_1137047.f_339.f_18, 1))
		{
			iVar1 = func_275(iVar3);
			func_184(&(Global_1137047.f_339.f_18), 1);
		}
		else
		{
			iVar1 = func_276(iVar3);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1134349.f_26, iVar1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_27))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1134349.f_27, iVar5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_28))
	{
		iVar0 = func_277(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1134349.f_28, iVar0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_29))
	{
		iVar2 = func_278(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1134349.f_29, iVar2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_31))
	{
		if (func_155(iVar3, 32) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SATCHEL")))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1134349.f_31, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1134349.f_31, false);
		}
	}
}

void func_145()
{
	if (func_279())
	{
		if (!func_155(Global_1296859, 4096))
		{
			HUD::_DISPLAY_HUD_COMPONENT(2077578434);
			HUD::_HIDE_HUD_COMPONENT(-782493871);
			func_158(4096);
		}
	}
	else if (func_155(Global_1296859, 4096))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-782493871);
		func_172(4096);
	}
}

void func_146()
{
	var uVar0;
	struct<14> Var4;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) || !GANG::_0x0F99F6436528A089(Global_1296859.f_15))
	{
		return;
	}
	if (Global_1134349.f_34 != 255)
	{
		iVar19 = Global_1134349.f_34;
		if ((((iVar19 >= 0 && iVar19 < 32) && Global_1134390[iVar19 /*83*/].f_74.f_6 > 0) && Global_1134390[iVar19 /*83*/].f_74.f_7 == Global_1134349.f_37) && Global_1134349.f_37 != -1)
		{
			return;
		}
		else
		{
			Global_1134349.f_34 = 255;
		}
	}
	if (!func_280(1))
	{
		return;
	}
	iVar21 = 0;
	while (iVar21 <= 31)
	{
		iVar20 = PLAYER::INT_TO_PLAYERINDEX(iVar21);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar20) && GANG::_0x81FB74C83C2ED69F(iVar20))
		{
			if (Global_1134390[iVar21 /*83*/].f_74.f_8 != 0 && Global_1134390[iVar21 /*83*/].f_74.f_6 > 0)
			{
				if (func_281(&uVar0, Global_1134390[iVar21 /*83*/].f_74.f_8, Global_1134390[iVar21 /*83*/].f_74.f_6, 0))
				{
					SCRIPTS::_0x31010318BA9897AC(&uVar18, iVar21);
					Global_1134349.f_34 = iVar20;
					Global_1134349.f_37 = Global_1134390[iVar21 /*83*/].f_74.f_7;
					func_282(19, Var4, uVar18);
				}
			}
			else
			{
				iVar21++;
			}
		}
	}
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return iVar0;
	}
	iVar1 = iParam0;
	return Global_1134390[iVar1 /*83*/].f_74.f_1;
}

void func_148(bool bParam0)
{
	if (bParam0)
	{
		func_283(&(Global_1134349.f_15));
		func_158(64);
	}
	else
	{
		func_177(&(Global_1134349.f_15));
		func_172(64);
	}
}

void func_149(int iParam0)
{
	Global_1134390[Global_1296859 /*83*/].f_74.f_1 = iParam0;
	Global_1134349.f_33 = Global_1134390[Global_1296859 /*83*/].f_74.f_1;
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar3 = GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	iVar4 = func_268(iVar3);
	iVar5 = func_269(iVar3);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_21))
	{
		Global_1134349.f_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Trader_ProgressBars");
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_22))
	{
		Global_1134349.f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1134349.f_21, "TraderMaterialsValue", iVar4);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_23))
	{
		Global_1134349.f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1134349.f_21, "TraderMaterialsDeltaValue", 0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_25))
	{
		Global_1134349.f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1134349.f_21, "TraderMaterialsMaximum", Global_1901947.f_584.f_9);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_24))
	{
		iVar0 = func_274(iVar3);
		Global_1134349.f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1134349.f_21, "TraderMaterialsColorID", iVar0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_26))
	{
		iVar1 = func_276(iVar3);
		Global_1134349.f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1134349.f_21, "ProductionOperational", iVar1);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_27))
	{
		Global_1134349.f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1134349.f_21, "TraderGoodsValue", iVar5);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_30))
	{
		Global_1134349.f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1134349.f_21, "TraderGoodsMaximum", Global_1901947.f_584.f_10);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_28))
	{
		iVar0 = func_277(iVar3);
		Global_1134349.f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1134349.f_21, "TraderGoodsColorID", iVar0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_29))
	{
		iVar2 = func_278(iVar3);
		Global_1134349.f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1134349.f_21, "TraderGoodsThresholdValue", iVar2);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1134349.f_31))
	{
		Global_1134349.f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1134349.f_21, "TraderGoodsShowCash", 0);
	}
}

bool func_151(int iParam0)
{
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && func_155(iParam0, 1));
}

bool func_152()
{
	int iVar0;

	iVar0 = func_178(-1364613333, 0, 1, -1, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	return func_284(-1364613333, iVar0, 0);
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1 || !func_159(uParam0))
	{
		func_283(uParam0);
	}
}

bool func_154()
{
	int iVar0;

	if (!func_285())
	{
		func_158(4);
	}
	else
	{
		func_172(4);
	}
	if (func_268(PLAYER::PLAYER_ID()) < 200)
	{
		if (!func_155(Global_1296859, 2))
		{
			func_157("TRADER_HALT_REASON_MATERIALS_EMPTY", joaat("BUTCHER_TABLE_RAW_MATERIALS"));
			func_158(2);
		}
	}
	else
	{
		func_172(2);
	}
	if (func_269(PLAYER::PLAYER_ID()) >= Global_1901947.f_584.f_10)
	{
		if (!func_155(Global_1296859, 128))
		{
			func_157("TRADER_HALT_REASON_SELL_GOODS", joaat("BUTCHER_TABLE_GOODS"));
			func_158(128);
		}
	}
	else
	{
		func_172(128);
	}
	iVar0 = func_216(PLAYER::PLAYER_ID());
	if (func_193(iVar0, 512))
	{
		if (!func_155(Global_1296859, 16))
		{
			func_157("TRADER_HALT_REASON_CRIPPS_INJURED", joaat("BUTCHER_TABLE_PRODUCTION"));
			func_158(16);
		}
	}
	else
	{
		func_172(16);
	}
	if (((func_155(Global_1296859, 4) || func_155(Global_1296859, 2)) || func_155(Global_1296859, 128)) || func_155(Global_1296859, 16))
	{
		return false;
	}
	return true;
}

bool func_155(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_65(Global_1134390[iParam0 /*83*/].f_74, iParam1);
}

int func_156(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1134390[iVar0 /*83*/].f_74.f_5;
}

void func_157(char* sParam0, int iParam1)
{
	struct<22> Var0;

	if (!func_286())
	{
		return;
	}
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_11 = joaat("COLOR_WHITE");
	Var0.f_12 = 8000;
	Var0.f_13 = 1511356879;
	Var0.f_15 = joaat("PLAYER_MENU");
	Var0.f_21 = 1;
	Var0 = 5;
	Var0.f_2 = MISC::_CREATE_VAR_STRING(2, "TRADER_CRIPPS_TITLE");
	Var0.f_3 = MISC::_CREATE_VAR_STRING(2, sParam0);
	Var0.f_7 = iParam1;
	Var0.f_6 = joaat("TOASTS_MP_GENERIC");
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_4 = "TRADER_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 863036578;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	func_287(&Var0);
}

void func_158(int iParam0)
{
	if (!func_65(Global_1134390[Global_1296859 /*83*/].f_74, iParam0))
	{
		func_45(&(Global_1134390[Global_1296859 /*83*/].f_74), iParam0);
		Global_1134349.f_32 = Global_1134390[Global_1296859 /*83*/].f_74;
	}
}

bool func_159(var uParam0)
{
	return func_288(*uParam0, 1);
}

int func_160(var uParam0)
{
	if (!func_159(uParam0))
	{
		return 0;
	}
	if (func_289(uParam0))
	{
		return uParam0->f_2;
	}
	return func_290(uParam0->f_1);
}

bool func_161()
{
	if (func_165(&Global_1134349, -735397297, 1, 1, -489628648, -1, 1))
	{
		if (func_163(&Global_1134349))
		{
			TELEMETRY::_0xCA9E42F437625A85(Global_1134349.f_1, joaat("ST_CAMP_BUTCHERTABLE"), joaat("SHOP_CAMP_BUTCHERTABLE"));
			func_153(&(Global_1134349.f_15), 1);
			return true;
		}
	}
	return false;
}

int func_162(int* iParam0)
{
	return func_291(iParam0->f_1);
}

bool func_163(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_164(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_292(iParam0))
	{
		return func_178(func_293(iParam0, 0), bParam1, bParam2, iParam3, func_294(iParam0));
	}
	if (func_295(iParam0, bParam4) || func_296(iParam0))
	{
		bParam1 = 997808187;
	}
	else if (func_294(iParam0) && (func_297(iParam0, &iVar0) || func_298(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else
	{
		bVar1 = func_299(iParam0, -570078785);
		bVar2 = func_299(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			bParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_300())
			{
				bParam1 = -570078785;
			}
			else
			{
				bParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			bParam1 = -915411861;
		}
		else if (func_301(15) && func_299(iParam0, 369710026))
		{
			bParam1 = 369710026;
		}
		else
		{
			bParam1 = false;
		}
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_165(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<16> Var0;
	struct<5> Var16;
	int iVar21;

	func_302(&iParam1);
	if (func_292(iParam1))
	{
		return func_179(iParam0, func_293(iParam1, 1), 1, 1, iParam3, 0, iParam4, iParam5, func_294(iParam1));
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var16 = { func_303(iParam1, 1, 1) };
	if (func_304(iParam1, &iVar21))
	{
		return func_179(iParam0, iVar21, iParam2, 1, iParam3, 0, 0, iParam5, 0);
	}
	if (func_305(iParam1))
	{
		if (!func_306(iParam0, iParam1, Var16, iParam2, &Var0, iParam4, iParam5, iParam3))
		{
			return false;
		}
	}
	else if (!func_307(iParam0, iParam1, Var16, Var16.f_4, iParam2, &Var0, iParam3, iParam4, iParam5, iParam6))
	{
		return false;
	}
	func_308(Var0);
	return true;
}

int func_166(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_309(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_310(Var0[iVar32 /*2*/]))
		{
			return Var0[iVar32 /*2*/];
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	iVar0 = -1;
	if (!func_310(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_303(iParam0, 0, 0) };
	Var6 = { func_92(iParam0, Var1, Var1.f_4, 0) };
	if (!func_311(&Var6))
	{
		return -1;
	}
	if (func_312(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

void func_168(int iParam0, struct<17> Param1)
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

void func_169(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	if (!func_314(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_315(iVar0, iVar1);
}

int func_170(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_316(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_92(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_201(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_201(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_171(int iParam0)
{
	if (Global_1134390[Global_1296859 /*83*/].f_74.f_5 != iParam0)
	{
		Global_1134390[Global_1296859 /*83*/].f_74.f_5 = iParam0;
	}
}

void func_172(int iParam0)
{
	if (func_65(Global_1134390[Global_1296859 /*83*/].f_74, iParam0))
	{
		func_43(&(Global_1134390[Global_1296859 /*83*/].f_74), iParam0);
		Global_1134349.f_32 = Global_1134390[Global_1296859 /*83*/].f_74;
	}
}

bool func_173(var uParam0, var uParam1)
{
	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_174(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			*uParam1 = { Global_1293346.f_20.f_1[iVar0 /*21*/] };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_175(int iParam0)
{
	return func_317(iParam0);
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
		case 6:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 7:
			return joaat("SHOP_BLK_GUNSMITH");
		case 8:
			return joaat("SHOP_BLK_BARBER");
		case 19:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 122:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 123:
			return joaat("SHOP_BLK_COACH");
		case 5:
			return joaat("SHOP_BLK_BANK");
		case 9:
			return joaat("SHOP_BLK_BUTCHER");
		case 10:
			return joaat("SHOP_BLK_BARTENDER");
		case 11:
			return joaat("SHOP_BLK_PIANIST");
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
		case 23:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 24:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 25:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 22:
			return joaat("SHOP_EMR_FENCE");
		case 26:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 45:
			return joaat("SHOP_SDN_DOCTOR");
		case 48:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 46:
			return joaat("SHOP_SDN_FENCE");
		case 49:
			return joaat("SHOP_SDN_GUNSMITH");
		case 42:
			return joaat("SHOP_SDN_BANK");
		case 43:
			return joaat("SHOP_SDN_BARBER");
		case 44:
			return joaat("SHOP_SDN_BUTCHER");
		case 50:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 51:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 52:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 53:
			return joaat("SHOP_SDN_TAILOR");
		case 63:
			return joaat("SHOP_SDN_TRAPPER");
		case 56:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
		case 60:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 124:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 125:
			return joaat("SHOP_SDN_COACH");
		case 54:
			return joaat("SHOP_SDN_BARTENDER");
		case 55:
			return joaat("SHOP_SDN_PIANIST");
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
		case 27:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 28:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 33:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 31:
			return joaat("SHOP_RHO_FENCE");
		case 34:
			return joaat("SHOP_RHO_GUNSMITH");
		case 35:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 30:
			return joaat("SHOP_RHO_BUTCHER");
		case 39:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 126:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 29:
			return joaat("SHOP_RHO_BANK");
		case 36:
			return joaat("SHOP_RHO_BARTENDER");
		case 37:
			return joaat("SHOP_RHO_PIANIST");
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
		case 68:
			return joaat("SHOP_STR_BUTCHER");
		case 69:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 70:
			return joaat("SHOP_STR_WELCOME_CENTER");
		case 71:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 74:
			return joaat("SHOP_STR_POST_OFFICE");
		case 127:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 75:
			return joaat("SHOP_STR_BARTENDER");
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
		case 83:
			return joaat("SHOP_VAL_DOCTOR");
		case 84:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 85:
			return joaat("SHOP_VAL_GUNSMITH");
		case 78:
			return joaat("SHOP_VAL_BARBER");
		case 87:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 86:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 82:
			return joaat("SHOP_VAL_BUTCHER");
		case 88:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 91:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 90:
			return joaat("SHOP_VAL_HOTEL");
		case 120:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 121:
			return joaat("SHOP_VAL_COACH");
		case 77:
			return joaat("SHOP_VAL_BANK");
		case 79:
			return joaat("SHOP_VAL_BARTENDER");
		case 80:
			return joaat("SHOP_VAL_PIANIST");
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
		case 41:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 98:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 97:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 93:
			return joaat("SHOP_VAN_FENCE");
		case 96:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 94:
			return joaat("SHOP_VAN_BARTENDER");
		case 95:
			return joaat("SHOP_VAN_PIANIST");
		case 128:
			return joaat("SHOP_VAN_COACH");
		case 129:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 1:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 2:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 101:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 99:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 100:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 119:
			return joaat("SHOP_DYNAMIC");
		case 133:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 152:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 176:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 177:
			return joaat("SHOP_CLOTHING");
		case 178:
			return joaat("SHOP_CAMP_SHAVING");
		case 153:
			return joaat("SHOP_CAMP_LOCKBOX");
		case 154:
			return joaat("SHOP_CAMP_BUTCHERTABLE");
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
		case 47:
			return joaat("SHOP_MOONSHINE_STILL");
		case 32:
			return joaat("SHOP_MOONSHINE_STILL");
		case 21:
			return joaat("SHOP_MOONSHINE_STILL");
		case 115:
			return joaat("SHOP_MOONSHINE_STILL");
		case 92:
			return joaat("SHOP_MOONSHINE_STILL");
		case 131:
			return joaat("SHOP_MOONSHINE_STILL");
		case 20:
			return joaat("SHOP_MOONSHINE_STILL");
		case 134:
			return -765151559;
		case 179:
			return joaat("SHOP_WARDROBE");
		case 155:
			return joaat("SHOP_BVH_DOCTOR");
		case 156:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 157:
			return joaat("SHOP_BVH_GUNSMITH");
		case 158:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 67:
			return 1529797091;
		case 159:
			return joaat("SHOP_CLM_DOCTOR");
		case 160:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 161:
			return joaat("SHOP_CLM_GUNSMITH");
		case 162:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 65:
			return 1388932648;
		case 164:
			return joaat("SHOP_HSO_DOCTOR");
		case 165:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 166:
			return joaat("SHOP_HSO_GUNSMITH");
		case 167:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 64:
			return 878376253;
		case 168:
			return joaat("SHOP_LAK_DOCTOR");
		case 169:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 170:
			return joaat("SHOP_LAK_GUNSMITH");
		case 171:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 172:
			return joaat("SHOP_SHB_DOCTOR");
		case 173:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 174:
			return joaat("SHOP_SHB_GUNSMITH");
		case 175:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 66:
			return -2076086367;
		case 163:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 108:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 110:
			return joaat("SHOP_AMD_BARTENDER");
		case 109:
			return joaat("SHOP_AMD_HONOR_MP");
		case 111:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 112:
			return joaat("SHOP_AMD_TRAIN_STATION");
		case 113:
			return joaat("SHOP_ROJ_HONOR_MP");
		case 114:
			return joaat("SHOP_BOJ_HONOR_MP");
		case 102:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 105:
			return joaat("SHOP_TBL_BARTENDER");
		case 106:
			return joaat("SHOP_TBL_PIANIST");
		case 103:
			return joaat("SHOP_TBL_GUNSMITH");
		case 104:
			return joaat("SHOP_TBL_BUTCHER");
		case 107:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 116:
			return joaat("SHOP_RYC_FENCE");
		case 130:
			return joaat("SHOP_THL_FENCE");
		case 117:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 118:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

void func_177(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_178(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_318(iParam0))
	{
		return false;
	}
	bVar1 = func_183(iParam3, 2);
	bVar2 = func_319(iParam0, -570078785, bVar1);
	bVar3 = func_319(iParam0, -915411861, bVar1);
	if (func_319(iParam0, 997808187, bVar1))
	{
		bParam1 = 997808187;
	}
	else if (bParam4 && (func_320(iParam0, &iVar0) || func_321(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_300())
		{
			bParam1 = -570078785;
		}
		else
		{
			bParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		bParam1 = -915411861;
	}
	else if (func_301(15) && func_319(iParam0, 369710026, bVar1))
	{
		bParam1 = 369710026;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_179(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_322(iParam0, iParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return false;
	}
	func_323(Var0);
	return true;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	if (!ITEMDATABASE::_0xEF254F1A4C08B7E6(iParam0))
	{
		return 0;
	}
	if (!func_203(iParam1, 0))
	{
		return 0;
	}
	iVar4 = ITEMDATABASE::_0x3FAA928A79591761(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!ITEMDATABASE::_0x121D2005DD64496B(iParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == iParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_28;
}

int func_182(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_28.f_1;
}

bool func_183(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_184(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_185()
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	char* sVar38;

	if (Global_1137047.f_339.f_16 == 0 || !UILOG::_UILOG_IS_ENTRY_REGISTERED(7, Global_1137047.f_339.f_16))
	{
		Global_1137047.f_339.f_16 = 0;
		return;
	}
	func_309(Global_1137047.f_339.f_16, Global_1137047.f_339.f_17, &Var2, &iVar0, 1, 0);
	iVar33 = 0;
	while (iVar33 < iVar0)
	{
		if (iVar33 >= 15)
		{
		}
		else
		{
			iVar34 = Var2[iVar33 /*2*/];
			if (func_203(iVar34, 0))
			{
				iVar36 = func_324(iVar34, 0, 0, 0);
				sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, Var2[iVar33 /*2*/].f_1, MISC::_CREATE_VAR_STRING(0, iVar34));
				bVar37 = func_204(iVar34, Var2[iVar33 /*2*/].f_1);
				if (bVar37)
				{
					iVar1++;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, Global_1137047.f_339.f_16, iVar34, sVar35, bVar37, true, true);
			}
			iVar33++;
		}
	}
	sVar38 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar1, iVar0);
	UILOG::_0x763637F9B838B0A7(7, Global_1137047.f_339.f_16, sVar38);
}

bool func_186(var uParam0, struct<2> Param1, var uParam3)
{
	var uVar0;

	if (Param1.f_1 == 0)
	{
		return false;
	}
	uVar0 = func_325(Param1.f_1);
	if (!DATAFILE::_0x7907969497EA92F5(uVar0) || !DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	*uParam0 = uVar0;
	uParam0->f_2 = -80782076;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

bool func_187(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1132288.f_2020[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_188(vector3 vParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!func_186(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1462115960;
	Var0.f_3 = vParam0.z;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 759645552;
		DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	}
	return uVar5;
}

bool func_189(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam0;
	return iParam3 > iVar0;
	return false;
}

int func_190()
{
	return -1635525483;
}

bool func_191(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_326(iVar1) == 4)
			{
			}
			else if (BUILTIN::VDIST(vParam0, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) < Global_1901947.f_584)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_192(vector3 vParam0, bool bParam3)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;

	if (func_327(vParam0))
	{
		return true;
	}
	if (bParam3 >= 0 && bParam3 < 32)
	{
		iVar5 = Global_1134390[bParam3 /*83*/].f_33.f_3;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_327(Global_1131196[iVar0 /*27*/].f_20))
		{
			fVar1 = BUILTIN::VDIST(Global_1131196[iVar0 /*27*/].f_20, vParam0);
			if (fVar1 <= Global_1901947.f_584.f_3)
			{
				return true;
			}
		}
		if (((Global_1131196.f_865[iVar0 /*7*/].f_4 != iVar5 && (Global_1131196.f_865[iVar0 /*7*/].f_1.f_2 > 0 || Global_1131196.f_865[iVar0 /*7*/].f_1.f_2 < -2)) && Global_1131196.f_865[iVar0 /*7*/] != -1) && Global_1131196.f_865[iVar0 /*7*/] != 6)
		{
			if (func_77(Global_1131196.f_865[iVar0 /*7*/].f_1, &vVar2) && !func_327(vVar2))
			{
				fVar1 = BUILTIN::VDIST(vVar2, vParam0);
				if (fVar1 <= Global_1901947.f_584.f_3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_193(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return func_65(Global_1131196[iParam0 /*27*/].f_7, iParam1);
}

bool func_194(var uParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
{
	int iVar0;
	var uVar1;
	int iVar202;
	int iVar203;
	int iVar204;

	iVar0 = GANG::_0x149A2751AB66AC02(iParam1);
	uVar1 = 50;
	if (*uParam0 < 4)
	{
		*uParam0 = 4;
	}
	else if (*uParam0 > 7)
	{
		*uParam0 = 7;
	}
	if (uParam0->f_2 == -2)
	{
		func_328(iParam1, *uParam0, uParam0->f_1, &uVar1, bParam2);
		uParam0->f_2 = func_329(&uVar1);
	}
	else
	{
		iVar202 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		uParam0->f_1 = func_330(iVar202, 1);
		func_328(iParam1, *uParam0, uParam0->f_1, &uVar1, bParam2);
		uParam0->f_2 = func_329(&uVar1);
	}
	*iParam3 = 0;
	iVar203 = 0;
	iVar204 = GANG::_0x4BE6C13A45CCA8EC(iParam1);
	if (func_331(*uParam0, iVar204, iVar0, bParam2))
	{
		iVar203 = 1;
	}
	else
	{
		*uParam4++;
	}
	return iVar203;
}

int func_195(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		if (iParam1 == 0)
		{
		}
		return 255;
	}
	return Global_1131196[iParam0 /*27*/].f_9;
}

bool func_196(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

char* func_197()
{
	return "net_camp";
}

char* func_198()
{
	return "gfh_campworks";
}

void func_199(int iParam0)
{
	var uVar0;

	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1131196[iParam0 /*27*/].f_9) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Global_1131196[iParam0 /*27*/].f_9)) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Global_1131196[iParam0 /*27*/].f_9)))
	{
		Global_1131196[iParam0 /*27*/].f_23.f_1 = uVar0;
		Global_1131196[iParam0 /*27*/].f_23 = uVar0;
		return;
	}
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1131196[iParam0 /*27*/].f_23.f_1))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1131196[iParam0 /*27*/].f_23.f_1);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1131196[iParam0 /*27*/].f_23))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1131196[iParam0 /*27*/].f_23);
	}
	Global_1131196[iParam0 /*27*/].f_23.f_1 = uVar0;
	Global_1131196[iParam0 /*27*/].f_23 = uVar0;
}

void func_200(var uParam0)
{
	struct<27> Var0;

	Var0.f_9 = 255;
	Var0.f_10 = 7;
	Var0.f_10.f_1 = 255;
	Var0.f_10.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	*uParam0 = { Var0 };
}

int func_201(bool bParam0)
{
	if (func_19() == -1)
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

struct<4> func_202()
{
	struct<4> Var0;

	return Var0;
}

bool func_203(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_204(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_203(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_332(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_333(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_334(iParam0))
			{
				return true;
			}
			break;
	}
	return func_324(iParam0, 0, 0, 0) >= iParam1;
}

int func_205(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_335(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

Vector3 func_206(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

bool func_207(int iParam0)
{
	return !func_113(iParam0, 8);
}

int func_208(int iParam0, bool bParam1)
{
	if (!func_74(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1131196[iParam0 /*27*/].f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return GANG::_0x901E0DC25080C8B9(Global_1131196[iParam0 /*27*/].f_9);
}

bool func_209(int iParam0)
{
	return func_65(Global_1132288.f_2040, iParam0);
}

void func_210(int iParam0)
{
	Global_1132288.f_2045 = iParam0;
}

int func_211(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_336();
	if (func_337(iVar0))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_338(vParam0, iParam3);
}

int func_212(bool bParam0)
{
	if (bParam0)
	{
		return 97;
	}
	return 96;
}

int func_213(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_327(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_339(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_340(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_340(iVar0) == iParam1 && func_341(iVar0) == iParam0) && iVar2 == func_342(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_38(iVar1, iParam0);
		func_39(iVar1, iParam1);
		func_40(iVar1, iVar2);
		func_343(iVar1, iParam5);
		func_344(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(Global_17081[iVar1], iParam1, func_345(iParam0, 0));
		return iVar1;
	}
	return -1;
}

int func_214(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case joaat("GRIZZLIES_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_GRIZZLIES");
				}
				return joaat("POSSE_MEMBER_CAMP_GRIZZLIES");
			}
			return joaat("POSSE_RIVAL_CAMP_GRIZZLIES");
		case joaat("BAYOU_NAWAS_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_BAYOU");
				}
				return joaat("POSSE_MEMBER_CAMP_BAYOU");
			}
			return joaat("POSSE_RIVAL_CAMP_BAYOU");
		case joaat("BIG_VALLEY_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_BIGVALLEY");
				}
				return joaat("POSSE_MEMBER_CAMP_BIGVALLEY");
			}
			return joaat("POSSE_RIVAL_CAMP_BIGVALLEY");
		case joaat("CHOLLA_SPRINGS_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_CHOLLASPRINGS");
				}
				return joaat("POSSE_MEMBER_CAMP_CHOLLASPRINGS");
			}
			return joaat("POSSE_RIVAL_CAMP_CHOLLASPRINGS");
		case joaat("CUMBERLAND_FOREST_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_CUMBERLAND");
				}
				return joaat("POSSE_MEMBER_CAMP_CUMBERLAND");
			}
			return joaat("POSSE_RIVAL_CAMP_CUMBERLAND");
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_GAPTOOTH");
				}
				return joaat("POSSE_MEMBER_CAMP_GAPTOOTH");
			}
			return joaat("POSSE_RIVAL_CAMP_GAPTOOTH");
		case joaat("GREAT_PLAINS_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_GREATPLAINS");
				}
				return joaat("POSSE_MEMBER_CAMP_GREATPLAINS");
			}
			return joaat("POSSE_RIVAL_CAMP_GREATPLAINS");
		case joaat("HEARTLAND_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_HEARTLANDS");
				}
				return joaat("POSSE_MEMBER_CAMP_HEARTLANDS");
			}
			return joaat("POSSE_RIVAL_CAMP_HEARTLANDS");
		case joaat("HENNIGANS_STEAD_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_HENNIGANS");
				}
				return joaat("POSSE_MEMBER_CAMP_HENNIGANS");
			}
			return joaat("POSSE_RIVAL_CAMP_HENNIGANS");
		case joaat("RIO_BRAVO_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_RIOBRAVO");
				}
				return joaat("POSSE_MEMBER_CAMP_RIOBRAVO");
			}
			return joaat("POSSE_RIVAL_CAMP_RIOBRAVO");
		case joaat("ROANOKE_RIDGE_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_ROANOKE");
				}
				return joaat("POSSE_MEMBER_CAMP_ROANOKE");
			}
			return joaat("POSSE_RIVAL_CAMP_ROANOKE");
		case joaat("SCARLETT_MEADOWS_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_SCARLETT");
				}
				return joaat("POSSE_MEMBER_CAMP_SCARLETT");
			}
			return joaat("POSSE_RIVAL_CAMP_SCARLETT");
		case joaat("TALL_TREES_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return joaat("POSSE_LEADER_CAMP_TALLTREES");
				}
				return joaat("POSSE_MEMBER_CAMP_SCARLETT");
			}
			return joaat("POSSE_RIVAL_CAMP_SCARLETT");
		default:
			break;
	}
	return 0;
}

bool func_215(int iParam0)
{
	return (func_193(iParam0, 16) && !func_193(iParam0, 32));
}

int func_216(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

struct<2> func_217(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

void func_218(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_113(iParam0, iParam1))
	{
		func_45(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0]), iParam1);
	}
}

void func_219(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (func_113(iParam0, iParam1))
	{
		func_43(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0]), iParam1);
	}
}

void func_220(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_346(iParam0, 1);
}

void func_221(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_346(iParam0, 0);
}

void func_222(int iParam0)
{
	struct<14> Var0;

	func_125(8);
	func_223(4);
	Var0.f_8 = iParam0;
	func_282(3, Var0, func_347(0, 8));
}

void func_223(int iParam0)
{
	func_45(&(Global_1137047.f_8), iParam0);
}

bool func_224(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return func_65(Global_1132288.f_1[iParam0 /*63*/].f_61, iParam1);
}

void func_225(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1131196[iParam0 /*27*/].f_1 };
	if (!func_348(vVar0, &(Global_1132288.f_1[iParam0 /*63*/].f_7), &(Global_1132288.f_1[iParam0 /*63*/].f_47)))
	{
	}
	if (!func_349(vVar0, &(Global_1132288.f_1[iParam0 /*63*/].f_10), &(Global_1132288.f_1[iParam0 /*63*/].f_48)))
	{
	}
}

void func_226(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1131196[iParam0 /*27*/].f_1 };
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (!func_350(vVar0, iVar3, &(Global_1132288.f_1[iParam0 /*63*/].f_13[iVar3 /*3*/]), &(Global_1132288.f_1[iParam0 /*63*/].f_49[iVar3])))
		{
		}
		iVar3++;
	}
}

void func_227(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1131196[iParam0 /*27*/].f_1 };
	if (!func_351(vVar0, &(Global_1132288.f_1[iParam0 /*63*/].f_35), &(Global_1132288.f_1[iParam0 /*63*/].f_57)))
	{
	}
}

void func_228(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1131196[iParam0 /*27*/].f_1 };
	if (!func_352(vVar0, &(Global_1132288.f_1[iParam0 /*63*/].f_38), &(Global_1132288.f_1[iParam0 /*63*/].f_58)))
	{
	}
}

void func_229(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1131196[iParam0 /*27*/].f_1 };
	if (!func_353(vVar0, &(Global_1132288.f_1[iParam0 /*63*/].f_41), &(Global_1132288.f_1[iParam0 /*63*/].f_59)))
	{
	}
}

void func_230(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1131196[iParam0 /*27*/].f_1 };
	if (!func_354(vVar0, &(Global_1132288.f_1[iParam0 /*63*/].f_44), &(Global_1132288.f_1[iParam0 /*63*/].f_60)))
	{
	}
}

void func_231(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_65(Global_1132288.f_1[iParam0 /*63*/].f_61, iParam1))
	{
		func_45(&(Global_1132288.f_1[iParam0 /*63*/].f_61), iParam1);
	}
}

void func_232(int iParam0, int iParam1)
{
	if (func_74(iParam0))
	{
		Global_1132288.f_1[iParam0 /*63*/].f_4 = iParam1;
	}
}

bool func_233(int iParam0)
{
	vector3 vVar0;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_197(), iParam0, true, 0))
	{
		return true;
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2055) || SCRIPTS::IS_THREAD_ACTIVE(Global_1132288.f_2055, false))
	{
		return false;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6700) <= 0)
	{
		return false;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { func_355(iParam0) };
	SCRIPTS::REQUEST_SCRIPT(func_197());
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_197()))
	{
		return false;
	}
	Global_1132288.f_2055 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_197(), &vVar0, 4, 6700);
	Global_1132288.f_2056 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_197());
	return true;
}

bool func_234(int iParam0)
{
	vector3 vVar0;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_198(), iParam0, true, 0))
	{
		return true;
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2057) || SCRIPTS::IS_THREAD_ACTIVE(Global_1132288.f_2057, false))
	{
		return false;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { func_355(iParam0) };
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(3081) <= 0)
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(func_198());
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_198()))
	{
		return false;
	}
	Global_1132288.f_2057 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_198(), &vVar0, 4, 3081);
	Global_1132288.f_2058 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_198());
	return true;
}

void func_235(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

int func_236(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1131196.f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1131196[iVar0 /*27*/].f_9 == iParam0 && Global_1131196[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_237(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_38.f_3 = iParam0;
}

struct<19> func_238(bool bParam0)
{
	struct<19> Var0;
	struct<4> Var19;
	struct<17> Var23;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var19 = { func_92(joaat("KIT_CAMP"), func_91(1), 1084182731, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var19))
	{
		return Var0;
	}
	Var23.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_201(1), &Var19, &Var23, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var23, bParam0) };
	Var0.f_17 = Var23.f_15;
	Var0.f_18 = Var23.f_16;
	Var0.f_16 = Var23.f_14;
	return Var0;
}

int func_239()
{
	return Global_1102219.f_3672;
}

void func_240(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_1433.f_54.f_65, func_357(Param0.f_1, 0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_1433.f_54.f_66, MISC::_CREATE_VAR_STRING(2, "NM_CAMP_SIZE_VALUE", Param0));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940311.f_1433.f_54.f_67, func_358(Param0));
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar1 = DATABINDING::_0x81D7183E7A8ECA72(Global_1940311.f_1433.f_2643.f_49[iVar0 /*23*/]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_2643.f_49[iVar0 /*23*/].f_1.f_21, iVar1 == Param0.f_1);
		iVar0++;
	}
}

bool func_241(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_359(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_239())
	{
		return func_359(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_359(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_242(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_360() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_42(16))
	{
		return false;
	}
	if (func_56())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		{
			return false;
		}
	}
	if (!func_361())
	{
		return false;
	}
	if (func_30(16))
	{
		return false;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::_0xD6F6ACF4392187FB(iVar0) || !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_65(Global_1137047.f_8, 1))
	{
		return false;
	}
	if (func_362())
	{
		return false;
	}
	return true;
}

bool func_243()
{
	return func_65(Global_1137047.f_8, 2);
}

bool func_244(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_242(0, 1))
	{
		return false;
	}
	Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { vParam0 };
	Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_247();
	if (iParam3 == 1)
	{
		func_134(2);
	}
	else
	{
		Global_1137047.f_330.f_6 = 1;
		func_363(2);
	}
	if (!func_76(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_363(8);
		func_18();
	}
	if (!func_122(4) && (func_122(8) || func_122(16)))
	{
		func_134(4);
	}
	else
	{
		func_363(4);
	}
	if (func_65(Global_1137047.f_8, 1))
	{
		func_134(1);
	}
	else
	{
		func_363(1);
	}
	func_63(6);
	return true;
}

bool func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<10> Var9;
	int iVar19;

	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return false;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_364(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

bool func_246(struct<2> Param0, var uParam2, int iParam3)
{
	if (func_365())
	{
		return false;
	}
	if (func_366(Param0.f_1, Param0))
	{
		return false;
	}
	if (!func_242(iParam3, 1))
	{
		return false;
	}
	if (func_117())
	{
		return false;
	}
	if (func_42(64))
	{
		if (!func_368(func_367(Param0), 1, 59806960))
		{
			return false;
		}
	}
	return true;
}

void func_247()
{
	Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
}

void func_248(vector3 vParam0)
{
	vector3 vVar0;

	Global_17411.f_55.f_4 = vParam0.x;
	Global_17411.f_55.f_4.f_1 = vParam0.y;
	Global_17411.f_55.f_4.f_2 = vParam0.z;
	if (!func_204(joaat("KIT_CAMP"), 1))
	{
		return;
	}
	if (vParam0.z != 0 && vParam0.x > 0)
	{
		vVar0 = { func_115() };
		if ((vVar0.z == vParam0.z && vVar0.y == vParam0.y) && vVar0.x == vParam0.x)
		{
			return;
		}
		if (func_369(vParam0, 1) == -1)
		{
		}
	}
}

int func_249()
{
	return -1727708451;
}

void func_250(vector3 vParam0)
{
	Global_1134390[func_239() /*83*/].f_38.f_4 = { vParam0 };
}

void func_251(int iParam0)
{
	Global_1134390[func_239() /*83*/].f_38.f_11 = iParam0;
}

int func_252(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_12.f_10;
}

void func_253(int iParam0, int iParam1)
{
	if (iParam1 > 7)
	{
		return;
	}
	if ((GANG::_0xD6F6ACF4392187FB(iParam0) && GANG::_0x0F99F6436528A089(iParam0)) && GANG::_0x4BE6C13A45CCA8EC(iParam0) == PLAYER::PLAYER_ID())
	{
		if (GANG::_0x853B0FA4D8732C57(iParam0) == iParam1)
		{
			return;
		}
		GANG::_0x833D8268D51B4522(iParam1);
	}
}

int func_254()
{
	return Global_1902818;
}

void func_255()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (Global_1132288.f_2048 < 10)
	{
		Global_1132288.f_2048++;
	}
	else
	{
		Global_1132288.f_2048 = 0;
		iVar0 = PLAYER::PLAYER_ID();
		iVar1 = func_216(iVar0);
		if (iVar1 >= 0 && iVar1 <= 31)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < Global_1134390[iVar0 /*83*/].f_38)
			{
				if (Global_1131196[iVar1 /*27*/].f_10[iVar2] == iVar0)
				{
					bVar3 = true;
				}
				else
				{
					iVar2++;
				}
			}
			if (bVar3)
			{
				if (iVar2 != Global_1134390[iVar0 /*83*/].f_38.f_7)
				{
					func_370(iVar2, Global_1132288.f_1[iVar1 /*63*/].f_13[iVar2 /*3*/]);
					func_31(16384);
				}
				else if (func_42(8192))
				{
					func_370(iVar2, Global_1132288.f_1[iVar1 /*63*/].f_13[iVar2 /*3*/]);
					func_31(16384);
					func_28(8192);
				}
			}
		}
	}
}

void func_256(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (Global_1132288.f_2027.f_5 == 0)
	{
		return;
	}
	if (!func_42(64))
	{
		if (Global_1132288.f_2027.f_5 != 0)
		{
			func_128(0);
		}
	}
	else if (func_74(iParam0))
	{
		vVar0 = { Global_1131196[iParam0 /*27*/].f_1 };
	}
	else if (Global_1132288.f_2027.f_5 != 0)
	{
		func_128(0);
	}
	switch (Global_1132288.f_2027.f_5)
	{
		case 1:
			iVar3 = func_367(vVar0.x);
			if (!func_368(iVar3, 1, 59806960))
			{
				func_127();
				func_128(0);
			}
			else
			{
				func_128(2);
			}
			break;
		case 2:
			iVar3 = func_367(vVar0.x);
			if (!func_371(Global_1132288.f_2027.f_6))
			{
				Global_1132288.f_2027.f_6 = func_372(iVar3, "NET_CAMP_PC", 1, 1, 0, 59806960);
				func_128(3);
			}
			break;
		case 3:
			if (!func_371(Global_1132288.f_2027.f_6))
			{
				func_373(iParam0);
				func_128(0);
			}
			break;
	}
}

void func_257(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = func_254();
	switch (Global_1132288.f_2027.f_7)
	{
		case 0:
			if (!func_42(64))
			{
				func_118(4);
				return;
			}
			if (Global_1131196[iParam0 /*27*/].f_9 == PLAYER::PLAYER_ID() && Global_1132288.f_2027.f_4 != -15)
			{
				if (func_374(iVar1) != func_374(Global_1132288.f_2027.f_4))
				{
					if (func_375(iVar1) >= func_375(Global_1132288.f_2027.f_4))
					{
						func_118(1);
					}
				}
			}
			break;
		case 1:
			iVar0 = func_376(iParam1);
			if (func_368(iVar0, 1, 59806960))
			{
				if (!func_371(Global_1132288.f_2027.f_8))
				{
					func_381(&(Global_1132288.f_2027.f_4), func_377(iVar1), func_378(iVar1), func_375(iVar1), func_374(iVar1), func_379(iVar1), func_380(iVar1));
					Global_1132288.f_2027.f_8 = func_372(iVar0, "NET_CAMP_DC", 1, 1, 0, 59806960);
					func_118(2);
				}
			}
			else
			{
				func_137("NET_CAMP_DF", 10000, 0, 0, 0, 1);
				func_118(3);
			}
			break;
		case 2:
			if (!func_371(Global_1132288.f_2027.f_8))
			{
				func_118(0);
			}
			break;
		case 3:
			iVar0 = func_376(iParam1);
			if (func_368(iVar0, 1, 59806960) && !func_371(Global_1132288.f_2027.f_8))
			{
				func_118(1);
			}
			break;
		case 4:
			if (func_42(64))
			{
				Global_1132288.f_2027.f_4 = iVar1;
				func_118(0);
			}
			break;
	}
}

void func_258(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	int iVar8;
	int iVar9;
	struct<5> Var10;
	struct<10> Var17;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	if (Global_1131196[iParam0 /*27*/].f_9 != PLAYER::PLAYER_ID())
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (Global_1134390[iVar0 /*83*/].f_38.f_28 != Global_1137047.f_339)
	{
		Global_1134390[iVar0 /*83*/].f_38.f_28 = Global_1137047.f_339;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var1);
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
		iVar8 = func_382();
		iVar9 = func_383();
		if (iVar8 != 255)
		{
			if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8) || GANG::_0x901E0DC25080C8B9(iVar8) != GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) || (iVar9 != -1 && (MISC::GET_GAME_TIMER() - iVar9) > 5000))
			{
				func_384(PLAYER::PLAYER_ID(), 1);
			}
		}
	}
	if (Global_1137047.f_339.f_2 != -1 && !func_385(Var1, Global_1137047.f_339.f_2))
	{
		return;
	}
	Var10.f_3 = 2;
	Var10.f_4 = 24;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var1, &Var10, &Var1);
	Global_1137047.f_339.f_2 = { Var1 };
	Var17 = { func_386(-1591664384, -1591664384, 0, 0, 0, 0, -1, -2011345500, 0) };
	if (func_387(Var17, &iVar27, &iVar28, 0))
	{
		iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar28);
		iVar30 = func_388(iVar29, iVar27);
		if (iVar30 == func_181(iVar0))
		{
			iVar29 = func_389(0, iVar28, iVar29);
			iVar30 = func_388(iVar29, iVar27);
		}
		func_390(iVar0, iVar30);
		func_391(iVar27);
	}
}

void func_259(int iParam0)
{
	int iVar0;
	struct<7> Var1;

	if (Global_1131196[iParam0 /*27*/].f_9 != PLAYER::PLAYER_ID())
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (Global_1134390[iVar0 /*83*/].f_38.f_28.f_1 != Global_1137047.f_339.f_1)
	{
		Global_1134390[iVar0 /*83*/].f_38.f_28.f_1 = Global_1137047.f_339.f_1;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var1);
	if (Global_1137047.f_339.f_9 == -1 || !func_385(Var1, Global_1137047.f_339.f_9))
	{
		return;
	}
	Global_1137047.f_339.f_9 = -1;
	Global_1134390[iVar0 /*83*/].f_38.f_28.f_1 = 1046181202;
	Global_1137047.f_339.f_1 = 1046181202;
}

bool func_260()
{
	return Global_1896738.f_382;
}

char* func_261(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_392(iVar0);
}

char* func_262(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_393(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_263()
{
	return func_204(joaat("UPGRADE_CAMP_BUTCHER_TABLE"), 1);
}

void func_264(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901947.f_584.f_9)
	{
		iParam0 = Global_1901947.f_584.f_9;
	}
	if (Global_1134390[Global_1296859 /*83*/].f_74.f_2 != iParam0)
	{
		Global_1134390[Global_1296859 /*83*/].f_74.f_2 = iParam0;
	}
}

void func_265(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901947.f_584.f_10)
	{
		iParam0 = Global_1901947.f_584.f_10;
	}
	if (Global_1134390[Global_1296859 /*83*/].f_74.f_3 != iParam0)
	{
		Global_1134390[Global_1296859 /*83*/].f_74.f_3 = iParam0;
	}
}

int func_266()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (func_204(joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE"), 1))
	{
		iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE");
	}
	else if (func_204(joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM"), 1))
	{
		iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM");
	}
	else if (func_204(joaat("UPGRADE_CAMP_DELIVERY_WAGON_SMALL"), 1))
	{
		iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_SMALL");
	}
	iVar1 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (GANG::_0xD6F6ACF4392187FB(iVar1))
	{
		if (GANG::_0x0F99F6436528A089(iVar1))
		{
			iVar2 = GANG::_0x4BE6C13A45CCA8EC(iVar1);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				iVar3 = iVar2;
				iVar0 = Global_1134390[iVar3 /*83*/].f_38.f_12.f_2;
			}
		}
	}
	return iVar0;
}

void func_267(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1901947.f_584.f_10)
	{
		iParam0 = 0;
	}
	if (Global_1134390[Global_1296859 /*83*/].f_74.f_4 != iParam0)
	{
		Global_1134390[Global_1296859 /*83*/].f_74.f_4 = iParam0;
	}
}

int func_268(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1134390[iVar0 /*83*/].f_74.f_2;
}

int func_269(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1134390[iVar0 /*83*/].f_74.f_3;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_FAT"):
			return -2059491326;
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return -2054061821;
		case joaat("PROVISION_BUCK_ANTLERS"):
			return -2054061821;
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return -276530555;
		case joaat("PROVISION_ELK_ANTLERS"):
			return -276530555;
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return 1786362058;
		case joaat("PROVISION_MOOSE_ANTLER"):
			return 1786362058;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -479944273;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -479944273;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return -479944273;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return -1900245017;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return 996737485;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return -317318063;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -1179145184;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return 49841414;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return 1853004765;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -613244561;
		case joaat("PROVISION_FISH_MUSKIE"):
			return 998459086;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -1185304294;
		case joaat("PROVISION_FISH_PERCH"):
			return 1606770041;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return 592705199;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return 1001427351;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -2134757665;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 1296165525;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -482152318;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -482152318;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -482152318;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return -329015022;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -329015022;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -329015022;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return 340488205;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return 340488205;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 340488205;
		case joaat("PROVISION_BADGER_CLAW"):
			return 1228602887;
		case joaat("PROVISION_BEAR_CLAW"):
			return -1749311280;
		case joaat("PROVISION_BLACK_BEAR_CLAW"):
			return -770230168;
		case joaat("PROVISION_COUGAR_FANG"):
			return -1761903019;
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return -202898890;
		case joaat("PROVISION_CONDOR_FEATHER"):
			return -324172879;
		case joaat("PROVISION_CARDINAL_FEATHER"):
			return 221026557;
		case joaat("PROVISION_PARAKEET_FEATHER"):
			return 2055874470;
		case joaat("PROVISION_CEDARWAXWING_FEATHER"):
			return 1383597214;
		case joaat("PROVISION_CHICKEN_FEATHER"):
			return -695920779;
		case joaat("PROVISION_CORMORANT_FEATHER"):
			return 1864240538;
		case joaat("PROVISION_WHOOPING_CRANE_FEATHER"):
			return 135251025;
		case joaat("PROVISION_CROW_FEATHER"):
			return -1380974753;
		case joaat("PROVISION_DUCK_FEATHER"):
			return 1918940015;
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 1606360364;
		case joaat("PROVISION_EGRET_FEATHER"):
			return 949154977;
		case joaat("PROVISION_GOOSE_FEATHER"):
			return 1327585677;
		case joaat("PROVISION_HAWK_FEATHER"):
			return -424223638;
		case joaat("PROVISION_HERON_FEATHER"):
			return -817814915;
		case joaat("PROVISION_LOON_FEATHER"):
			return 1324361660;
		case joaat("PROVISION_ORIOLE_FEATHER"):
			return -1740875511;
		case joaat("PROVISION_OWL_FEATHER"):
			return -1114206422;
		case joaat("PROVISION_PARROT_FEATHER"):
			return 1129016218;
		case joaat("PROVISION_PELICAN_FEATHER"):
			return 74265533;
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return -1687205102;
		case joaat("PROVISION_PIGEON_FEATHER"):
			return -2112352640;
		case joaat("PROVISION_QUAIL_FEATHER"):
			return -1179922595;
		case joaat("PROVISION_RAVEN_FEATHER"):
			return -1777044066;
		case joaat("PROVISION_BOOBY_FEATHER"):
			return -427774472;
		case joaat("PROVISION_ROBIN_FEATHER"):
			return -862133853;
		case joaat("PROVISION_ROOSTER_FEATHER"):
			return -153093028;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 1961151934;
		case joaat("PROVISION_SEAGULL_FEATHER"):
			return -1429428300;
		case joaat("PROVISION_SONGBIRD_FEATHER"):
			return 641025903;
		case joaat("PROVISION_SPARROW_FEATHER"):
			return 1014343203;
		case joaat("PROVISION_TURKEY_FEATHER"):
			return -977684174;
		case joaat("PROVISION_VULTURE_FEATHER"):
			return 753992067;
		case joaat("PROVISION_WOODPECKER_FEATHER"):
			return 975102591;
		case joaat("PROVISION_WOLF_HEART"):
			return -742266708;
		case joaat("PROVISION_BIGHORN_HORN"):
			return 1002050200;
		case joaat("PROVISION_BUFFALO_HORN"):
			return 970250315;
		case joaat("PROVISION_BULL_HORNS"):
			return 913562114;
		case joaat("PROVISION_OXEN_HORN"):
			return 1415886451;
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 1244458697;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 322165109;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return -2083991045;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 709722347;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 709722347;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 709722347;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE_PRISTINE"):
			return 2068018854;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE_POOR"):
			return 2068018854;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE"):
			return 2068018854;
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return 144513283;
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return 144513283;
		case joaat("PROVISION_ARMADILLO_SKIN"):
			return 144513283;
		case joaat("PROVISION_BADGER_PELT_PRISTINE"):
			return -78603574;
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return -78603574;
		case joaat("PROVISION_BADGER_PELT"):
			return -78603574;
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return 956393401;
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return 956393401;
		case joaat("PROVISION_BEAR_FUR"):
			return 956393401;
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -1604538436;
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -1604538436;
		case joaat("PROVISION_BLACK_BEAR_FUR"):
			return -1604538436;
		case joaat("PROVISION_BEAVER_FUR"):
			return -1583116953;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return -1583116953;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return -1583116953;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 1995645004;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 1995645004;
		case joaat("PROVISION_RAM_HIDE"):
			return 1995645004;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 439094686;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 439094686;
		case joaat("PROVISION_BOAR_SKIN"):
			return 439094686;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 1069834732;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 1069834732;
		case joaat("PROVISION_BUCK_FUR"):
			return 1069834732;
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -1508151163;
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -1508151163;
		case joaat("PROVISION_BUFFALO_FUR"):
			return -1508151163;
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return 854098596;
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return 854098596;
		case joaat("PROVISION_BULL_HIDE"):
			return 854098596;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 1467162138;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 1467162138;
		case joaat("PROVISION_COUGAR_FUR"):
			return 1467162138;
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 1322026128;
		case joaat("PROVISION_COW_HIDE_POOR"):
			return 1322026128;
		case joaat("PROVISION_COW_HIDE"):
			return 1322026128;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 711086189;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 711086189;
		case joaat("PROVISION_COYOTE_FUR"):
			return 711086189;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -1334624683;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return -1334624683;
		case joaat("PROVISION_DEER_HIDE"):
			return -1334624683;
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return 2118150058;
		case joaat("PROVISION_ELK_FUR_POOR"):
			return 2118150058;
		case joaat("PROVISION_ELK_FUR"):
			return 2118150058;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 1889550255;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 1889550255;
		case joaat("PROVISION_FOX_FUR"):
			return 1889550255;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 1684561350;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 1684561350;
		case joaat("PROVISION_GOAT_HAIR"):
			return 1684561350;
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 1763709491;
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 1763709491;
		case joaat("PROVISION_GILA_SKIN"):
			return 1763709491;
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return 1828340319;
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return 1828340319;
		case joaat("PROVISION_IGUANA_SKIN"):
			return 1828340319;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 344414895;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 344414895;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 344414895;
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -1875079046;
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return -1875079046;
		case joaat("PROVISION_MOOSE_FUR"):
			return -1875079046;
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return -1273558742;
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -1273558742;
		case joaat("PROVISION_MUSKRAT_FUR"):
			return -1273558742;
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -839975185;
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return -839975185;
		case joaat("PROVISION_OXEN_HIDE"):
			return -839975185;
		case joaat("PROVISION_OPOSSUM_FUR_PRISTINE"):
			return -401745683;
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return -401745683;
		case joaat("PROVISION_OPOSSUM_FUR"):
			return -401745683;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return -2096730839;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -2096730839;
		case joaat("PROVISION_PANTHER_FUR"):
			return -2096730839;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 1871609823;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 1871609823;
		case joaat("PROVISION_PIG_SKIN"):
			return 1871609823;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -1028335922;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -1028335922;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return -1028335922;
		case joaat("PROVISION_RABBIT_PELT_PRISTINE"):
			return 172698521;
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 172698521;
		case joaat("PROVISION_RABBIT_PELT"):
			return 172698521;
		case joaat("PROVISION_RACCOON_FUR_PRISTINE"):
			return 212330241;
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return 212330241;
		case joaat("PROVISION_RACCOON_FUR"):
			return 212330241;
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return -555536739;
		case joaat("PROVISION_RAT_FUR_POOR"):
			return -555536739;
		case joaat("PROVISION_RAT_FUR"):
			return -555536739;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -1896091463;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return -1896091463;
		case joaat("PROVISION_SHEEP_WOOL"):
			return -1896091463;
		case joaat("PROVISION_SKUNK_FUR_PRISTINE"):
			return 1854095100;
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 1854095100;
		case joaat("PROVISION_SKUNK_FUR"):
			return 1854095100;
		case joaat("PROVISION_SNAKE_SKIN_PRISTINE"):
			return 1690246594;
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return 1690246594;
		case joaat("PROVISION_SNAKE_SKIN"):
			return 1690246594;
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return -885435577;
		case joaat("PROVISION_SQUIRREL_PELT_POOR"):
			return -885435577;
		case joaat("PROVISION_SQUIRREL_PELT"):
			return -885435577;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return -1923252111;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return -1923252111;
		case joaat("PROVISION_WOLF_FUR"):
			return -1923252111;
		case joaat("PROVISION_SQUIRREL_TAIL"):
			return -470304000;
		case joaat("PROVISION_EAGLE_TALON"):
			return -1074986502;
		case joaat("PROVISION_ALLIGATOR_TOOTH"):
			return -1042059910;
		case joaat("PROVISION_BOAR_TUSK"):
			return 1234479911;
		case joaat("PROVISION_BAT_WING"):
			return -591134272;
		case joaat("PROVISION_ANIMAL_SCENT_GLAND"):
			return 2092024647;
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			return -1902618794;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_01"):
			return -330669109;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_02"):
			return -578894284;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_03"):
			return -1884018016;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_01"):
			return 2049850175;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_02"):
			return -1949114744;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_03"):
			return -710315468;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_01"):
			return 1242869591;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_02"):
			return -1170632889;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_03"):
			return -393778206;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_01"):
			return 110440596;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_02"):
			return -672378045;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_03"):
			return -364251138;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_01"):
			return 1729475114;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_02"):
			return 963696353;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_03"):
			return -2103416513;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_01"):
			return 1438015400;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_02"):
			return -1954723019;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_03"):
			return 906666065;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_01"):
			return 2129552482;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_02"):
			return 559753509;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_03"):
			return 865783200;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_01"):
			return 393871699;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_02"):
			return 683975656;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_03"):
			return -99694979;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_ALLIGATOR_TOOTH"):
			return 1870161468;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BEAR_CLAW"):
			return -637307085;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BEAVER_TOOTH"):
			return -1156529631;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BISON_HORN"):
			return 1590950150;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BOAR_TUSK"):
			return 1619300873;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BUCK_ANTLER"):
			return -64299595;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_COUGAR_FANG"):
			return -1836028969;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_COYOTE_FANG"):
			return 85710394;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_ELK_ANTLER"):
			return -1655807359;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_FOX_CLAW"):
			return -1962643264;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_MOOSE_ANTLER"):
			return 232569057;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_PANTHER_EYE"):
			return 1199221978;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_RAM_HORN"):
			return -1797419634;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ALLIGATOR_LEGENDARY_01"):
			return 2065655105;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ALLIGATOR_LEGENDARY_02"):
			return 1825917101;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ALLIGATOR_LEGENDARY_03"):
			return 1593945350;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAR_LEGENDARY_01"):
			return -1224696681;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAR_LEGENDARY_02"):
			return -1575718189;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAR_LEGENDARY_03"):
			return 793611591;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_01"):
			return 902257336;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_02"):
			return -364133422;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_03"):
			return -605083879;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BISON_LEGENDARY_01"):
			return 732434481;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BISON_LEGENDARY_02"):
			return -700390032;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BISON_LEGENDARY_03"):
			return -932263476;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_01"):
			return 751785819;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_02"):
			return -1395009678;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_03"):
			return -633621963;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_01"):
			return -853038002;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_02"):
			return -618837959;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_03"):
			return -1297877177;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_01"):
			return 1827754323;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_02"):
			return 2134308318;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_03"):
			return 1349228616;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_01"):
			return 1303473658;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_02"):
			return 394330510;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_03"):
			return 1244718829;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ELK_LEGENDARY_01"):
			return 115722091;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ELK_LEGENDARY_02"):
			return -183098420;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ELK_LEGENDARY_03"):
			return 2055286420;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_01"):
			return -2037558216;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_02"):
			return -1798573899;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_03"):
			return 872099605;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_MOOSE_LEGENDARY_01"):
			return -874157148;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_MOOSE_LEGENDARY_02"):
			return 346258719;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_MOOSE_LEGENDARY_03"):
			return -427089681;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_01"):
			return 839022204;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_02"):
			return 999131546;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_03"):
			return 1300573577;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_01"):
			return 1144711679;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_02"):
			return 878987858;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_03"):
			return 708589058;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_01"):
			return 700750583;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_02"):
			return -1885772129;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_03"):
			return 2094711074;
		default:
			break;
	}
	return 0;
}

bool func_271(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return func_395(func_394(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

bool func_272()
{
	return Global_1146212.f_21645[64 /*209*/].f_208;
}

bool func_273(int iParam0)
{
	if (func_396())
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_274(int iParam0)
{
	int iVar0;

	iVar0 = func_268(iParam0);
	if (iVar0 < 2500)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_275(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 2;
	}
	return func_397(Global_1134390[iVar0 /*83*/].f_38.f_28.f_1);
}

int func_276(int iParam0)
{
	if (func_155(iParam0, 64))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_277(int iParam0)
{
	int iVar0;

	iVar0 = func_269(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1134390[iVar0 /*83*/].f_74.f_4;
}

bool func_279()
{
	vector3 vVar0;
	var uVar3;

	if (func_398(11, func_216(PLAYER::PLAYER_ID()), &vVar0, &uVar3, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			if (func_399(Global_34, vVar0, 1) > 9f)
			{
				return false;
			}
		}
	}
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (func_400())
	{
		return false;
	}
	if (func_401())
	{
		return false;
	}
	if (func_155(Global_1296859, 8192) == 0)
	{
		return false;
	}
	return true;
}

bool func_280(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288.f_2050 == 0 || (MISC::_GET_SYSTEM_TIME() - Global_1132288.f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288.f_2050 == 0)
	{
		Global_1132288.f_2050 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1132288.f_2050) >= 1000)
	{
		Global_1132288.f_2050 = MISC::_GET_SYSTEM_TIME();
	}
	else
	{
		return false;
	}
	return true;
}

bool func_281(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1;
	struct<13> Var4;
	int iVar17;
	struct<13> Var18;
	int iVar31;

	if (func_203(iParam1, 0))
	{
		if (func_271(iParam1, 173360570) || INVENTORY::_0x245D07651B1D183B(iParam1, 4))
		{
			func_158(-2147483648);
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (bParam3)
		{
			func_402(iParam1, iParam2);
		}
		func_403(iParam1, iParam2);
		return true;
	}
	iVar0 = func_270(iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_404(iParam1, &Var1, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		Var1 = "TRANSACTION_CAMP_GANG";
		Var1.f_1 = "ITEMTYPE_TEXTURES";
	}
	func_405(MISC::_CREATE_VAR_STRING(2, "TRANSACTION_DONATED"), Var1.f_1, MISC::GET_HASH_KEY(Var1), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	Var4.f_1 = 11;
	if (((func_271(iParam1, 1064293907) || INVENTORY::_0x245D07651B1D183B(iParam1, 1073741824 /* Float: 2f */)) || func_271(iParam1, -1257428961)) || func_271(iParam1, 173360570))
	{
		if (func_272())
		{
			func_406(&Var4, 1417019613);
		}
	}
	else if ((INVENTORY::_0x245D07651B1D183B(iParam1, 268435456) || INVENTORY::_0x245D07651B1D183B(iParam1, 134217728)) || func_271(iParam1, 1888974372))
	{
		func_406(&Var4, -688057837);
	}
	else
	{
		func_406(&Var4, 25550726);
	}
	iVar17 = iParam2;
	if (iVar17 > 10)
	{
		Var18 = { Var4 };
		func_406(&Var18, 964458272);
		while (iVar17 > 10)
		{
			if (!func_407(iVar0, uParam0, &Var18, 0, 255, 0, 0))
			{
				return false;
			}
			iVar17 = (iVar17 - 10);
		}
	}
	iVar31 = 0;
	switch (iVar17)
	{
		case 2:
			iVar31 = 1206214767;
			break;
		case 3:
			iVar31 = 1048858029;
			break;
		case 4:
			iVar31 = 2003386234;
			break;
		case 5:
			iVar31 = 1510933702;
			break;
		case 6:
			iVar31 = -712967248;
			break;
		case 7:
			iVar31 = -1206075160;
			break;
		case 8:
			iVar31 = -246762689;
			break;
		case 9:
			iVar31 = -414474431;
			break;
		case 10:
			iVar31 = 964458272;
			break;
	}
	if (iVar31 != 0)
	{
		func_406(&Var4, iVar31);
	}
	if (!func_407(iVar0, uParam0, &Var4, 0, 255, 0, 0))
	{
		return false;
	}
	if (bParam3)
	{
		func_402(iParam1, iParam2);
	}
	return true;
}

void func_282(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam15))
	{
		return;
	}
	if (!func_280(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 6, &uParam15);
}

void func_283(var uParam0)
{
	func_408(uParam0, 0);
}

int func_284(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;

	return func_409(iParam0, iParam1, &uVar0, bParam2, 0);
}

bool func_285()
{
	if (GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
	{
		return true;
	}
	return false;
}

bool func_286()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (func_400())
	{
		return false;
	}
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRADER")))
	{
		return false;
	}
	if (Global_1071686.f_28778)
	{
		return false;
	}
	if (Global_1572887.f_9)
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1324907014))
	{
		return false;
	}
	if (func_410())
	{
		return false;
	}
	return true;
}

int func_287(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896738.f_384)
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_412(func_411(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_411(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_413(func_411(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_411(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_414(func_411(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_411(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_415(func_411(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_411(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_416(func_411(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_411(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_417(func_411(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_411(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_418(func_411(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_411(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

bool func_288(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_289(var uParam0)
{
	return func_288(*uParam0, 2);
}

int func_290(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_291(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_419(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_420(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_420(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

bool func_292(int iParam0)
{
	if (func_271(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_293(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_203(iParam0, 0))
	{
		return func_421(func_394(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

bool func_294(int iParam0)
{
	if (!func_56() && func_422())
	{
		return true;
	}
	return func_271(iParam0, 1435272033);
}

bool func_295(int iParam0, bool bParam1)
{
	return (func_299(iParam0, 997808187) && !func_423(iParam0, 997808187, bParam1));
}

bool func_296(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0, 1);
	if (iVar0 != 0 && func_319(iVar0, 997808187, 0))
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_297(int iParam0, int iParam1)
{
	*iParam1 = func_424(iParam0, 1);
	return *iParam1 != 0;
}

bool func_298(int iParam0, int iParam1)
{
	*iParam1 = func_425(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_299(int iParam0, bool bParam1)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_292(iParam0))
	{
		return func_319(func_293(iParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, bParam1) > 0;
}

bool func_300()
{
	return Global_1915715.f_22477;
}

bool func_301(int iParam0)
{
	if (iParam0 == 34 && Global_1915715.f_22504.f_1)
	{
		return true;
	}
	if (func_426(1))
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_302(int iParam0)
{
	if (!func_203(*iParam0, 0))
	{
		return 0;
	}
	if (!func_427(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

struct<5> func_303(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_91(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_332(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_92(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_428(bParam1) };
			if (bParam2 && func_429(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_430(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_430(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_431(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_432(bParam1) };
			switch (func_433(iParam0))
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
			if (func_434(iParam0, -1823706425))
			{
				Var0 = { func_92(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_434(iParam0, -1483207246))
			{
				Var0 = { func_92(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_92(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_434(iParam0, -1653629781))
			{
				Var0 = { func_92(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_435(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_434(iParam0, -1653629781))
			{
				Var0 = { func_92(1384535894, Var0, 1784584921, bParam1) };
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

bool func_304(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	*iParam1 = 0;
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_436(iParam0))
	{
		return false;
	}
	if (func_271(iParam0, 81450561) || func_271(iParam0, 1342455455))
	{
		return false;
	}
	if (func_292(iParam0))
	{
		return false;
	}
	iVar0 = func_293(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_319(iVar0, -570078785, 0))
	{
		return false;
	}
	if (Global_1915715.f_22504.f_2 == 1)
	{
		Var1 = { func_303(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return false;
		}
	}
	*iParam1 = iVar0;
	return true;
}

bool func_305(int iParam0)
{
	return func_271(iParam0, 1166200945);
}

bool func_306(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	struct<4> Var27;
	struct<4> Var31;
	struct<4> Var35;
	int iVar39;
	bool bVar40;
	struct<11> Var41;
	int iVar55;
	int iVar56;

	if (!func_203(iParam1, 0))
	{
		return false;
	}
	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (bParam8 == 0)
	{
		bParam8 = func_164(iParam1, bParam8, 1, -1, 1);
	}
	bVar0 = false;
	if (func_301(15))
	{
		bVar0 = true;
	}
	func_184(&iParam9, 32);
	func_184(&iParam9, 64);
	func_184(&iParam9, 4);
	func_184(&iParam9, 128);
	if (bParam6 < 1)
	{
		bParam6 = true;
	}
	if (!func_438(iParam0, iParam1, Param2, -1591664384, bParam8, bParam6, iParam9, 1))
	{
		return false;
	}
	Var1 = { func_439(iParam1, Param2, 1084182731, bParam6, 0) };
	Var1.f_13 = bParam8;
	Var1.f_12 = 1248274121;
	*iParam7 = { Var1 };
	if (!func_440(iParam0, joaat("USE")))
	{
		return false;
	}
	bVar17 = false;
	bVar18 = false;
	iVar19 = Global_1915715.f_20241.f_49;
	iVar20 = Global_1915715.f_20241.f_50;
	Var41.f_9 = -1591664384;
	iVar55 = 0;
	while (iVar55 < 6)
	{
		if (!func_203(Global_1051439.f_47[iVar55], 0))
		{
		}
		else if (!func_441(Global_1051439.f_47[iVar55], iVar19, &iVar21, &Var31, &uVar22, 1, iVar20))
		{
		}
		else
		{
			Var27 = { func_92(Global_1051439.f_47[iVar55], Var31, iVar21, 0) };
			if (func_442(Global_1051439.f_47[iVar55]))
			{
				if (!func_430(Global_1051439.f_47[iVar55], &Var31, iVar21, 0, 0))
				{
					if (!Global_1051439.f_47.f_7[iVar55])
					{
					}
					else if (func_443(Global_1051439.f_47[iVar55]))
					{
					}
					else
					{
						bVar40 = bParam8;
						if (func_299(Global_1051439.f_47[iVar55], 997808187))
						{
							bVar40 = 997808187;
						}
						if (bVar0 && bVar40 != 997808187)
						{
							if (!func_444(iParam0, Global_1051439.f_47[iVar55], Var31, iVar21, 1, &Var1, 0, bVar40, iParam9, 1))
							{
								bVar17 = false;
								Jump @814; //curOff = 506
							}
							else
							{
								bVar18 = true;
							}
						}
						else if (!bVar0 || bVar40 == 997808187)
						{
							if (!func_445(iParam0, Global_1051439.f_47[iVar55], Var31, iVar21, !bVar0, &Var1, 0, bVar40, 0, iParam9, 0))
							{
								bVar17 = false;
								Jump @814; //curOff = 579
							}
							else
							{
								bVar18 = true;
							}
						}
						bVar17 = true;
						Jump @805; //curOff = 591
						if (!bVar0)
						{
							if (!Global_1051439.f_47.f_7[iVar55])
							{
								iVar39 = func_95(Var31, iVar21, 0, -1);
								if (!func_203(iVar39, 0))
								{
								}
								else
								{
									Var35 = { func_92(iVar39, Var35, iVar21, 0) };
									if (!func_446(Var35, Global_1051439.f_47.f_7[iVar55], 0))
									{
										if (!func_435(Var35, &Var41, 1, 0, -1))
										{
										}
										if (Var41.f_10 == Global_1051439.f_47.f_7[iVar55])
										{
											bVar17 = true;
										}
										else
										{
											bVar17 = false;
										}
										else
										{
											Jump @740; //curOff = 734
											bVar17 = true;
											Jump @805; //curOff = 740
											if (!func_435(Var27, &Var41, 1, 0, -1))
											{
											}
											if (Var41.f_10 != Global_1051439.f_47.f_7[iVar55])
											{
												if (!func_446(Var27, 1, 0))
												{
													bVar17 = false;
												}
												else
												{
													Jump @805; //curOff = 799
													bVar17 = true;
													iVar55++;
												}
												if (!bVar17)
												{
													func_447(iParam0);
													return false;
												}
												if (bVar18)
												{
													if (bParam10 && !func_448(iParam0))
													{
														return false;
													}
													else
													{
														iVar56 = WEAPON::_0x46F032B8DDF46CDE(iVar19);
														if (!MISC::IS_BIT_SET(Global_1051439.f_4461[(func_449(iVar56, 1) / 32)], (func_449(iVar56, 1) % 32)))
														{
															func_451(func_450(joaat("UPDATED"), joaat("WEAPON_CUSTOMIZATION")), 1);
															MISC::SET_BIT(&(Global_1051439.f_4461[(func_449(iVar56, 1) / 32)]), (func_449(iVar56, 1) % 32));
														}
													}
												}
												return true;
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

bool func_307(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<16> Var0;
	struct<17> Var16;

	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_164(iParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_438(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_439(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_332(iParam1) == joaat("CLOTHING"))
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_452(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return false;
		}
	}
	else if (!func_453(iParam0, Var0, 2113164098, iParam9, iParam11))
	{
		return false;
	}
	return true;
}

void func_308(struct<14> Param0, var uParam14, var uParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Param0.f_8;
	iVar1 = Param0.f_13;
	if (func_454(iVar0, joaat("CURRENCY_GOLD_BAR"), iVar1, 1, 0) > 0)
	{
		func_455("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else if (INVENTORY::_0x2BAE4880DCDD560B(iVar0, 0))
	{
		iVar2 = func_456(iVar0, 0);
		if (!AUDIO::_0x6DF942C4179BE5AB(iVar2, joaat("HUD_SHOP_SOUNDSET")))
		{
			AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			AUDIO::_0xE8EAFF7B41EDD291(iVar2, joaat("HUD_SHOP_SOUNDSET"), 0);
		}
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

bool func_309(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_457(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_310(int iParam0)
{
	if (func_433(iParam0) == -126813555 || func_433(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

bool func_311(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_312(struct<4> Param0)
{
	if (!func_311(&Param0))
	{
		return false;
	}
	if (func_458(&Param0))
	{
		return false;
	}
	return func_460(func_459(Param0));
}

void func_313(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_314(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_461(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_462(iParam0))
	{
		return false;
	}
	if (func_463(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_464(iParam0, 1)) || func_465(32768))
	{
		if (!func_464(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_466())
	{
		return false;
	}
	return true;
}

void func_315(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

int func_316(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_317(int iParam0)
{
	if (!func_310(iParam0))
	{
		return 0;
	}
	if (func_467(iParam0))
	{
		return -1957466003;
	}
	if (func_271(iParam0, -1457263561))
	{
		return -84670860;
	}
	if (func_271(iParam0, -732976331))
	{
		return -700121520;
	}
	if (func_271(iParam0, 1495098826))
	{
		return 917298505;
	}
	if (func_271(iParam0, 2088554948))
	{
		return -1638586319;
	}
	return 176863985;
}

bool func_318(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

bool func_319(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_318(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_468(iParam0, bParam1);
	}
	return true;
}

bool func_320(int iParam0, int iParam1)
{
	*iParam1 = func_469(iParam0, 1);
	return *iParam1 != 0;
}

bool func_321(int iParam0, int iParam1)
{
	*iParam1 = func_470(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_322(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_178(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_471(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_472(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (COLLECTION::_0x9ADEE485726025D4(iParam1) != 0)
	{
		if (Global_1293346.f_20.f_422 != -1)
		{
		}
		Global_1293346.f_20.f_422.f_1 = iParam1;
		Global_1293346.f_20.f_422 = iParam0->f_1;
	}
	return true;
}

void func_323(struct<17> Param0)
{
	int iVar0;
	int iVar1;

	iVar0 = Param0.f_16;
	iVar1 = Param0.f_13;
	if (func_473(iVar0, joaat("CURRENCY_GOLD_BAR"), iVar1, 0, 1) > 0)
	{
		func_455("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_324(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_332(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_474(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_475(iParam0, 0);
	}
	if (func_316(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_201(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_476(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_201(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

var func_325(int iParam0)
{
	int iVar0;
	var uVar1;

	switch (iParam0)
	{
		case joaat("HENNIGANS_STEAD_CAMP"):
		case joaat("RIO_BRAVO_CAMP"):
		case joaat("ROANOKE_RIDGE_CAMP"):
		case joaat("GREAT_PLAINS_CAMP"):
		case joaat("CUMBERLAND_FOREST_CAMP"):
		case joaat("TALL_TREES_CAMP"):
		case joaat("CHOLLA_SPRINGS_CAMP"):
		case joaat("GRIZZLIES_CAMP"):
		case joaat("GAPTOOTH_RIDGE_CAMP"):
		case joaat("BAYOU_NAWAS_CAMP"):
		case joaat("SCARLETT_MEADOWS_CAMP"):
		case joaat("HEARTLAND_CAMP"):
		case joaat("BIG_VALLEY_CAMP"):
			iVar0 = func_477(iParam0, 1);
			return Global_1137047.f_361[iVar0];
		default:
			break;
	}
	return uVar1;
}

int func_326(int iParam0)
{
	if (iParam0 >= 0)
	{
		return Global_1056141[iParam0 /*471*/];
	}
	return -1;
}

bool func_327(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_328(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	struct<7> Var18[7];
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;

	vVar0.x = uParam1;
	vVar0.f_1 = uParam2;
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return;
	}
	iVar3 = -999;
	iVar4 = 100;
	iVar5 = 200;
	iVar6 = 100;
	iVar7 = 50;
	fVar8 = 800f;
	fVar9 = 1400f;
	fVar10 = 2000f;
	iVar68 = GANG::_0xD1BF325C8252A982(iParam0, &Var18);
	iVar69 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	iVar71 = func_478(vVar0);
	iVar72 = 0;
	while (iVar72 <= (iVar71 - 1))
	{
		(uParam3[iVar72 /*4*/])->f_1 = uParam1;
		(uParam3[iVar72 /*4*/])->f_1.f_1 = uParam2;
		(uParam3[iVar72 /*4*/])->f_1.f_2 = func_479(iVar72, vVar0);
		if (func_331((uParam3[iVar72 /*4*/])->f_1, iVar69, iVar68, bParam4))
		{
			(*uParam3)[iVar72 /*4*/] = ((*uParam3)[iVar72 /*4*/] + iVar4);
			if (!func_77((uParam3[iVar72 /*4*/])->f_1, &vVar15))
			{
			}
			else
			{
				iVar73 = 0;
				while (iVar73 <= (iVar68 - 1))
				{
					iVar70 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var18[iVar73 /*7*/]));
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar70))
					{
						vVar12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar70), false, false) };
						fVar11 = BUILTIN::VDIST(vVar12, vVar15);
						if (fVar11 < fVar8)
						{
							(*uParam3)[iVar72 /*4*/] = ((*uParam3)[iVar72 /*4*/] + iVar5);
						}
						else if (fVar11 < fVar9)
						{
							(*uParam3)[iVar72 /*4*/] = ((*uParam3)[iVar72 /*4*/] + iVar6);
						}
						else if (fVar11 < fVar10)
						{
							(*uParam3)[iVar72 /*4*/] = ((*uParam3)[iVar72 /*4*/] + iVar7);
						}
					}
					iVar73++;
				}
				Jump @376; //curOff = 365
				(*uParam3)[iVar72 /*4*/] = iVar3;
			}
			iVar72++;
		}
	}
}

int func_329(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	NETWORK::_0x7E300B5B86AB1D1A(uParam0, *uParam0, 4, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar3 = (*uParam0)[0 /*4*/];
	if (iVar3 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= (*uParam0 - 1))
	{
		if ((*uParam0)[iVar1 /*4*/] == iVar3)
		{
			iVar2 = iVar1;
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 > 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
	}
	else
	{
		iVar1 = 0;
	}
	uVar0 = (uParam0[iVar1 /*4*/])->f_1.f_2;
	return uVar0;
}

int func_330(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GRIZZLIES_CAMP");
		case 1:
			return joaat("BAYOU_NAWAS_CAMP");
		case 2:
			return joaat("BIG_VALLEY_CAMP");
		case 3:
			return joaat("CHOLLA_SPRINGS_CAMP");
		case 4:
			return joaat("CUMBERLAND_FOREST_CAMP");
		case 5:
			return joaat("GAPTOOTH_RIDGE_CAMP");
		case 6:
			return joaat("GREAT_PLAINS_CAMP");
		case 7:
			return joaat("HEARTLAND_CAMP");
		case 8:
			return joaat("HENNIGANS_STEAD_CAMP");
		case 9:
			return joaat("RIO_BRAVO_CAMP");
		case 10:
			return joaat("ROANOKE_RIDGE_CAMP");
		case 11:
			return joaat("SCARLETT_MEADOWS_CAMP");
		case 12:
			return joaat("TALL_TREES_CAMP");
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

bool func_331(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	vector3 vVar0;

	if (vParam0.z == 0)
	{
		return false;
	}
	if (!func_77(vParam0, &vVar0))
	{
		return false;
	}
	if (func_78(vParam0, bParam3, vVar0, bParam4, 1, 0, bParam5))
	{
		return true;
	}
	return false;
}

int func_332(int iParam0)
{
	vector3 vVar0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_333(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_474(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_480("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_481(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_482(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_483(iVar1);
				return true;
			}
			iVar3++;
		}
		func_483(iVar1);
	}
	return false;
}

bool func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_203(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_433(iParam0);
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
	iVar1 = func_484(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_485(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_486(iParam0);
	iVar2 = func_485(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

bool func_335(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_201(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_487(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_336()
{
	return Global_1893587.f_2;
}

bool func_337(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_338(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_488(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1892753[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iVar4 /*36*/].f_4))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887339[iVar4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_339(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_340(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return Global_39.f_3647[iParam0 /*4*/].f_1;
	}
	return Global_25003[iParam0 /*4*/].f_1;
}

int func_341(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return Global_39.f_3647[iParam0 /*4*/];
	}
	return Global_25003[iParam0 /*4*/];
}

int func_342(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return Global_39.f_3647[iParam0 /*4*/].f_2;
	}
	return Global_25003[iParam0 /*4*/].f_2;
}

void func_343(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_3647[iParam0 /*4*/].f_3 = iParam1;
		return;
	}
	Global_25003[iParam0 /*4*/].f_3 = iParam1;
	return;
}

void func_344(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_489(func_342(iParam0)) };
	Global_17081[iParam0] = MAP::_BLIP_ADD_FOR_COORD(func_490(func_340(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(Global_17081[iParam0], func_491(func_340(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(Global_17081[iParam0], func_340(iParam0), iParam0);
}

int func_345(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 30:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 29:
			return joaat("REGION_BGV_OLD_MAN_JONES");
		case 31:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 32:
			return joaat("REGION_BLU_COPPERHEAD");
		case 33:
			return joaat("REGION_BLU_SISIKA");
		case 34:
			return joaat("REGION_BLU_TRAVELLING_SALESMAN");
		case 35:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 36:
			return joaat("REGION_CML_DINO_LADY");
		case 37:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 38:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 39:
			return joaat("REGION_GRT_BEECHERS");
		case 40:
			return joaat("REGION_GRT_BLACKWATER");
		case 41:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 42:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 43:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 53:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 54:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 44:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 55:
			return joaat("REGION_GRZ_COHUTTA");
		case 45:
			return joaat("REGION_GRZ_COLTER");
		case 56:
			return joaat("REGION_GRZ_COTORRA_SPRINGS");
		case 46:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 57:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 47:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 48:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 49:
			return joaat("REGION_GRZ_MOUNT_HAGEN_PEAK");
		case 50:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 51:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 58:
			return joaat("REGION_GRZ_THELOFT");
		case 59:
			return joaat("REGION_GRE_VETERAN");
		case 60:
			return joaat("REGION_GRZ_WAPITI");
		case 52:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 61:
			return joaat("REGION_GRZ_TRAVELLING_SALESMAN");
		case 62:
			return joaat("REGION_GUA_AGUASDULCES");
		case 63:
			return joaat("REGION_GUA_CAMP");
		case 64:
			return joaat("REGION_GUA_CINCOTORRES");
		case 65:
			return joaat("REGION_GUA_LACAPILLA");
		case 66:
			return joaat("REGION_GUA_MANICATO");
		case 67:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 69:
			return joaat("REGION_HRT_CARMODYDELL");
		case 70:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 71:
			return joaat("REGION_HRT_CROP_FARM");
		case 72:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 73:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 74:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 75:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 76:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 77:
			return joaat("REGION_HRT_LARNEDSOD");
		case 78:
			return joaat("REGION_HRT_LOONY_CULT");
		case 79:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 80:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 81:
			return joaat("REGION_HRT_VALENTINE");
		case 82:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 83:
			return joaat("REGION_ROA_ANNESBURG");
		case 84:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 68:
			return joaat("REGION_ROA_BEECHERS_C");
		case 85:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 86:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 87:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 88:
			return joaat("REGION_ROA_DOVERHILL");
		case 89:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 90:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 91:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 92:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 93:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 94:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 95:
			return joaat("REGION_ROA_TRAPPER");
		case 97:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 98:
			return joaat("REGION_ROA_VANHORNPOST");
		case 96:
			return joaat("REGION_ROA_OLD_MAN_JONES");
		case 99:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 100:
			return joaat("REGION_SCM_BULGERGLADE");
		case 101:
			return joaat("REGION_SCM_CALIGAHALL");
		case 102:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 103:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 104:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 105:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 106:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 107:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 108:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 109:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 110:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 111:
			return joaat("REGION_SCM_RHODES");
		case 112:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 113:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 115:
			return joaat("REGION_TAL_COCHINAY");
		case 116:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 117:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 118:
			return joaat("REGION_TAL_TANNERSREACH");
		case 114:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 119:
			return joaat("REGION_TAL_TRAPPER");
		case 135:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 136:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 137:
			return joaat("REGION_HEN_TRAVELLING_SALESMAN");
		case 138:
			return -1573562784;
		case 127:
			return joaat("REGION_CHO_ARMADILLO");
		case 128:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 129:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 131:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 130:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 132:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 133:
			return joaat("REGION_CHO_TRAVELLING_SALESMAN");
		case 134:
			return 1869665995;
		case 120:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 121:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 122:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 123:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 124:
			return joaat("REGION_RIO_FORT_MERCER");
		case 125:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 126:
			return joaat("REGION_RIO_TRAVELLING_SALESMAN");
		case 139:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	if (bParam1)
	{
		return joaat("WILDERNESS");
	}
	return 0;
}

void func_346(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;

	Var0.f_8 = iParam0;
	if (bParam1)
	{
		iVar14 = 5;
	}
	else
	{
		iVar14 = 6;
	}
	func_282(iVar14, Var0, func_347(0, 8));
}

var func_347(int iParam0, int iParam1)
{
	return func_492(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

bool func_348(vector3 vParam0, var uParam3, var uParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -238050295;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(uParam4, &Var5);
		return true;
	}
	return false;
}

bool func_349(vector3 vParam0, var uParam3, var uParam4)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	int iVar13;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -402732872;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var0.f_2 = -1420258246;
		if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var0))
		{
			return false;
		}
		iVar13 = 0;
		while (iVar13 <= 50)
		{
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(*uParam3, iVar13, &vVar10, 17, 1077936128 /* Float: 3f */, 0))
			{
				*uParam4 = func_493(*uParam3, vVar10, 1);
				return true;
			}
			iVar13++;
		}
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(uParam4, &Var5);
	}
	return false;
}

bool func_350(vector3 vParam0, int iParam3, var uParam4, var uParam5)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -1763127828;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = iParam3;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam4, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(uParam5, &Var5);
		return true;
	}
	return false;
}

bool func_351(vector3 vParam0, var uParam3, var uParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 952598509;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(uParam4, &Var5);
		return true;
	}
	return false;
}

bool func_352(vector3 vParam0, var uParam3, var uParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -466985247;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(uParam4, &Var5);
		return true;
	}
	return false;
}

bool func_353(vector3 vParam0, var uParam3, var uParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -1629816098;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(uParam4, &Var5);
		return true;
	}
	return false;
}

bool func_354(vector3 vParam0, var uParam3, var uParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 1078091189;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(uParam4, &Var5);
		return true;
	}
	return false;
}

Vector3 func_355(int iParam0)
{
	vector3 vVar0;

	if (!func_74(iParam0))
	{
		return vVar0;
	}
	return Global_1131196[iParam0 /*27*/].f_1;
}

struct<16> func_356(var uParam0, bool bParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_316(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_202() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

char* func_357(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case joaat("GRIZZLIES_CAMP"):
				return "GC_GRIZZLIES_DIST";
			case joaat("BAYOU_NAWAS_CAMP"):
				return "GC_BAYOU_DIST";
			case joaat("BIG_VALLEY_CAMP"):
				return "GC_BIG_VALLEY_DIST";
			case joaat("CUMBERLAND_FOREST_CAMP"):
				return "GC_CUMBERLAND_FOREST_DIST";
			case joaat("GREAT_PLAINS_CAMP"):
				return "GC_GREAT_PLAINS_DIST";
			case joaat("HEARTLAND_CAMP"):
				return "GC_HEARTLANDS_DIST";
			case joaat("ROANOKE_RIDGE_CAMP"):
				return "GC_ROANOKE_RIDGE_DIST";
			case joaat("SCARLETT_MEADOWS_CAMP"):
				return "GC_SCARLETT_MEADOWS_DIST";
			case joaat("TALL_TREES_CAMP"):
				return "GC_TALL_TREES_DIST";
			case joaat("GAPTOOTH_RIDGE_CAMP"):
				return "GC_GAPTOOTH_RIDGE_DIST";
			case joaat("RIO_BRAVO_CAMP"):
				return "GC_RIO_BRAVO_DIST";
			case joaat("CHOLLA_SPRINGS_CAMP"):
				return "GC_CHOLLA_SPRINGS_DIST";
			case joaat("HENNIGANS_STEAD_CAMP"):
				return "GC_HENNIGANS_STEAD_DIST";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("GRIZZLIES_CAMP"):
				return "GRIZZLIES_DIST";
			case joaat("BAYOU_NAWAS_CAMP"):
				return "BAY";
			case joaat("BIG_VALLEY_CAMP"):
				return "BGV";
			case joaat("CUMBERLAND_FOREST_CAMP"):
				return "CML";
			case joaat("GREAT_PLAINS_CAMP"):
				return "GRT";
			case joaat("HEARTLAND_CAMP"):
				return "HRT";
			case joaat("ROANOKE_RIDGE_CAMP"):
				return "ROA";
			case joaat("SCARLETT_MEADOWS_CAMP"):
				return "SCM";
			case joaat("TALL_TREES_CAMP"):
				return "TAL";
			case joaat("GAPTOOTH_RIDGE_CAMP"):
				return "GAP";
			case joaat("RIO_BRAVO_CAMP"):
				return "RIO";
			case joaat("CHOLLA_SPRINGS_CAMP"):
				return "CHO";
			case joaat("HENNIGANS_STEAD_CAMP"):
				return "HEN";
			default:
				break;
		}
	}
	return "NM_GC_TEXT_CAMP_NONE";
}

int func_358(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_376(iParam0);
	if (!func_203(iVar0, 0))
	{
		return 0;
	}
	iVar1 = func_494(iVar0, 0, 59806960);
	return iVar1;
}

bool func_359(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_360()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_3;
}

bool func_361()
{
	return !func_42(2);
}

bool func_362()
{
	int iVar0;

	iVar0 = func_216(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1131196[iVar0 /*27*/].f_18.f_1 != 0 && func_65(Global_1131196[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_363(int iParam0)
{
	func_43(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

struct<7> func_364(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_365()
{
	bool bVar0;

	bVar0 = (((Global_1132288.f_2019 == 2 || (Global_1132288.f_2019 >= 6 && Global_1132288.f_2019 <= 11)) || Global_1132288.f_2019 == 12) || (Global_1132288.f_2019 >= 13 && Global_1132288.f_2019 <= 19));
	return bVar0;
}

bool func_366(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	vVar1 = { func_355(func_495(iVar0)) };
	return (vVar1.y == iParam0 && iParam1 == vVar1.x);
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return joaat("FEE_CAMP_PLACEMENT_SMALL");
		case 7:
			return joaat("FEE_CAMP_PLACEMENT_LARGE");
		default:
			break;
	}
	return 0;
}

bool func_368(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = (func_494(iParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_496(iVar0);
	}
	return bVar1;
}

int func_369(vector3 vParam0, bool bParam3)
{
	int iVar0;
	struct<19> Var1;

	iVar0 = -1;
	Var1 = { func_238(0) };
	Var1.f_17 = vParam0.y;
	Var1.f_18 = vParam0.z;
	Var1.f_16 = vParam0.x;
	iVar0 = func_497(joaat("UPDATE"), &Var1, bParam3);
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

void func_370(int iParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_38.f_7 = iParam0;
	Global_1134390[iVar0 /*83*/].f_38.f_8 = { vParam1 };
}

bool func_371(int iParam0)
{
	int iVar0;

	iVar0 = func_419(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

int func_372(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<17> Var53;

	if (!func_203(iParam0, 0))
	{
		return -1;
	}
	if (func_332(iParam0) != joaat("FEE"))
	{
		return -1;
	}
	if (func_498())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_499(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_CASH")) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_499(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_GOLD_BAR")) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_309(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_324(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_500(0))
	{
		if (iVar0 > 0)
		{
			func_501(joaat("CURRENCY_CASH"), iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_501(joaat("CURRENCY_GOLD_BAR"), iVar1, -142743235, 0, 0);
		}
		else if (func_502(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_501(Var2[iVar35 /*2*/], iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_503(joaat("SPEND"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_168(iVar52, Var53);
	}
	return iVar52;
}

void func_373(int iParam0)
{
	struct<14> Var0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	Var0.f_5 = { Global_1131196[iParam0 /*27*/].f_1 };
	func_282(11, Var0, func_504(GANG::_0x901E0DC25080C8B9(Global_1131196[iParam0 /*27*/].f_9)));
}

int func_374(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_375(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return joaat("FEE_CAMP_DAILY_SMALL");
		case 7:
			return joaat("FEE_CAMP_DAILY_LARGE");
		default:
			break;
	}
	return 0;
}

int func_377(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_378(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_379(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_380(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_505(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

void func_381(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_506(uParam0, iParam6);
	func_507(uParam0, iParam5);
	func_508(uParam0, iParam4);
	func_509(uParam0, iParam3);
	func_510(uParam0, iParam2);
	func_511(uParam0, iParam1);
}

int func_382()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_28.f_2;
	}
	return 255;
}

int func_383()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_28.f_3;
	}
	return -1;
}

void func_384(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1134390[iVar0 /*83*/].f_38.f_28.f_2) || Global_1134390[iVar0 /*83*/].f_38.f_28.f_2 == iParam0) || bParam1)
		{
			Global_1134390[iVar0 /*83*/].f_38.f_28.f_2 = 255;
			Global_1134390[iVar0 /*83*/].f_38.f_28.f_3 = -1;
		}
	}
}

bool func_385(struct<7> Param0, struct<7> Param7)
{
	if (Param0 > Param7)
	{
		return true;
	}
	else if (Param7 > Param0)
	{
		return false;
	}
	if (Param0.f_1 > Param7.f_1)
	{
		return true;
	}
	else if (Param7.f_1 > Param0.f_1)
	{
		return false;
	}
	if (Param0.f_2 > Param7.f_2)
	{
		return true;
	}
	else if (Param7.f_2 > Param0.f_2)
	{
		return false;
	}
	if (Param0.f_3 > Param7.f_3)
	{
		return true;
	}
	else if (Param7.f_3 > Param0.f_3)
	{
		return false;
	}
	if (Param0.f_4 > Param7.f_4)
	{
		return true;
	}
	else if (Param7.f_4 > Param0.f_4)
	{
		return false;
	}
	if (Param0.f_5 > Param7.f_5)
	{
		return true;
	}
	else if (Param7.f_5 > Param0.f_5)
	{
		return false;
	}
	if (Param0.f_6 > Param7.f_6)
	{
		return true;
	}
	else if (Param7.f_6 > Param0.f_6)
	{
		return false;
	}
	return false;
}

struct<10> func_386(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_387(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_388(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_389(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_512())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_505(func_512(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_390(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	Global_1134390[iParam0 /*83*/].f_38.f_28 = iParam1;
	Global_1137047.f_339 = iParam1;
}

int func_391(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

char* func_392(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_241(40, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1102219.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102219.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1296859.f_22[iParam0])
	{
		return sVar0;
	}
	if (func_241(40, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1100469[iParam0 /*53*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1100469[iParam0 /*53*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1296859.f_154[iParam0]);
}

char* func_393(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_394(int iParam0)
{
	return iParam0;
}

int func_395(int iParam0, int iParam1)
{
	if (!func_513(iParam0, 2))
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

bool func_396()
{
	return (Global_1915715.f_20637 || Global_1915715.f_22504.f_1);
}

int func_397(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return 2;
	}
	switch (iParam0)
	{
		case 1046181202:
			return 2;
		case joaat("FEE_MEAL_CAMP_STEW_LOW"):
			return 3;
		case joaat("FEE_MEAL_CAMP_STEW_MED"):
			return 4;
		case joaat("FEE_MEAL_CAMP_STEW_HIGH"):
			return 5;
		case joaat("FEE_MEAL_CAMP_STEW_BEST"):
			return 6;
		default:
			break;
	}
	if (func_271(iParam0, -2011345500))
	{
		return 7;
	}
	return 2;
}

bool func_398(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_74(iParam1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			*uParam2 = { Global_1131196[iParam1 /*27*/].f_20 };
			*uParam3 = 0f;
			break;
		case 9:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_41 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_59;
			break;
		case 10:
			if (iParam4 < 0 || iParam4 >= 7)
			{
				return false;
			}
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_13[iParam4 /*3*/] };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_49[iParam4];
			break;
		case 7:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_38 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_58;
			break;
		case 13:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_35 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_57;
			break;
		case 14:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_7 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_47;
			break;
		case 15:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_10 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_47;
			break;
		case 11:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_44 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_60;
			break;
		default:
			return false;
	}
	return true;
}

float func_399(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_514(vVar0, vParam1);
}

bool func_400()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

bool func_401()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("NET_ADVANCED_CAMERA")) > 0;
}

int func_402(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var15;

	iVar1 = iParam1;
	if (iParam1 == 1)
	{
	}
	if (func_271(iParam0, -753854379))
	{
		iVar0 = -1900508329;
	}
	else
	{
		iVar0 = -1463094839;
	}
	Var2.f_1 = 11;
	while (iVar1 > 10)
	{
		func_406(&Var2, 964458272);
		if (!func_515(iVar0, &Var2, 0, 255, 0, 0))
		{
			return 0;
		}
		iVar1 = (iVar1 - 10);
	}
	Var15.f_1 = 11;
	switch (iVar1)
	{
		case 2:
			func_406(&Var15, 1206214767);
			break;
		case 3:
			func_406(&Var15, 1048858029);
			break;
		case 4:
			func_406(&Var15, 2003386234);
			break;
		case 5:
			func_406(&Var15, 1510933702);
			break;
		case 6:
			func_406(&Var15, -712967248);
			break;
		case 7:
			func_406(&Var15, -1206075160);
			break;
		case 8:
			func_406(&Var15, -246762689);
			break;
		case 9:
			func_406(&Var15, -414474431);
			break;
		case 10:
			func_406(&Var15, 964458272);
			break;
	}
	if (!func_515(iVar0, &Var15, 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_403(int iParam0, int iParam1)
{
	if (Global_1134390[Global_1296859 /*83*/].f_74.f_8 != 0)
	{
		return 0;
	}
	Global_1134390[Global_1296859 /*83*/].f_74.f_8 = iParam0;
	Global_1134390[Global_1296859 /*83*/].f_74.f_6 = iParam1;
	Global_1134390[Global_1296859 /*83*/].f_74.f_7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	return 1;
}

bool func_404(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*sParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

var func_405(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_516(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_406(int iParam0, int iParam1)
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

int func_407(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_517(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_408(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_518(uParam0, 1);
	func_519(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_409(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_520(iParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715.f_20638)
	{
		iVar34 = Global_1915715.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH"))
			{
				if (!bParam4 && !func_496(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!bParam4 && !func_521(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_522(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_523(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_324(Var0[iVar32 /*2*/], 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32 /*2*/].f_1)
				{
					*uParam2 = { Var0[iVar32 /*2*/] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_410()
{
	struct<2> Var0;

	Var0 = { func_217(0) };
	if (func_44(Var0))
	{
		if ((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 7)
		{
			return true;
		}
	}
	return false;
}

char* func_411(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_393(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_412(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_413(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = UIFEED::_SHOW_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_414(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_415(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = UIFEED::_SHOW_NOTIFICATION(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_416(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_417(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_0x3F9FDDBA79117C69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_418(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam4;
	Var0.f_1 = uParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = uParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_419(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1293346.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_524(iParam0, iParam1, iParam2, iParam3);
}

int func_421(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_513(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_422()
{
	return func_525(func_217(0));
}

bool func_423(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_203(iParam0, 0))
	{
		return func_526(func_394(iParam0), bParam1, bParam2);
	}
	if (func_292(iParam0))
	{
		return func_468(func_293(iParam0, 1), bParam1);
	}
	if ((bParam2 && func_19() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return true;
	}
	if (!func_527(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_424(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_528(iVar0, 1, 0);
		if (!func_309(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_529(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_324(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_425(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_528(iVar0, 0, 1);
		if (!func_309(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_467(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_324(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_426(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

bool func_427(int iParam0)
{
	return func_271(iParam0, 1279601681);
}

struct<4> func_428(bool bParam0)
{
	int iVar0;

	iVar0 = func_201(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_92(923904168, func_91(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_92(923904168, func_91(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_92(923904168, func_91(bParam0), -740156546, 0);
}

bool func_429(int iParam0, bool bParam1)
{
	if (func_433(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_530();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_430(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_170(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_431(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_531(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_432(bool bParam0)
{
	int iVar0;

	iVar0 = func_201(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_92(271701509, func_91(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_92(271701509, func_91(bParam0), 12999093, 0);
}

int func_433(int iParam0)
{
	struct<2> Var0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_434(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_433(iParam0);
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
			if (func_532(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_435(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_487(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_436(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_19() == -1)
	{
		if (func_533(iParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

bool func_437(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_163(iParam0))
		{
			return false;
		}
	}
	if (func_534(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("SELL")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("USE")))
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return false;
	}
	return true;
}

int func_438(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	struct<10> Var0;
	struct<4> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (func_183(iParam9, 32))
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_435(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_532(iParam1, func_433(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_183(iParam9, 1))
	{
		if (!func_436(iParam1))
		{
			return 0;
		}
	}
	if (func_183(iParam9, 2))
	{
		if (func_423(iParam1, bParam7, 1))
		{
			return 0;
		}
	}
	if (func_183(iParam9, 4))
	{
		if (!bParam10 && !INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_170(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_535(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_536(iParam1, bParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_537(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (bParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_183(iParam9, 8))
	{
		return func_538(iParam0, iParam1, bParam7, bParam8);
	}
	return 1;
}

struct<16> func_439(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_92(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_316(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_202() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_440(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return false;
	}
	return true;
}

bool func_441(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_433(iParam1);
		iVar5 = func_539(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_532(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_303(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_92(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_201(0);
			Var37 = { func_303(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_92(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_433(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_532(iParam0, iVar1, iVar2))
							{
								if (func_540(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_442(int iParam0)
{
	int iVar0;

	iVar0 = func_332(iParam0);
	if (iVar0 == joaat("WEAPON_MOD") || iVar0 == joaat("WEAPON_DECORATION"))
	{
		return true;
	}
	return false;
}

bool func_443(int iParam0)
{
	return func_271(iParam0, 1282106666);
}

bool func_444(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	struct<16> Var0;

	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (!func_438(iParam0, iParam1, Param2, iParam6, bParam10, bParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_439(iParam1, Param2, iParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_541(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

bool func_445(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
{
	struct<16> Var0;

	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_164(iParam1, bParam10, 1, iParam12, 1);
	}
	if (!func_542(iParam0, iParam1, Param2, iParam6, bParam10, iParam12))
	{
		return false;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_8 = iParam1;
	Var0.f_9 = 1;
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	Var0.f_4 = { Param2 };
	Var0.f_11 = iParam6;
	Var0.f_10 = bParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_316(iParam1, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_202() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_453(iParam0, Var0, 2113164098, iParam9, iParam12))
	{
		return false;
	}
	return true;
}

bool func_446(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_500(0))
	{
		return func_543(&Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_435(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_201(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

void func_447(int* iParam0)
{
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_420(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

bool func_448(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_420(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_420(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_420(*iParam0, 2, 0, 0);
		return false;
	}
	func_420(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_449(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141145462:
			return 51;
		case -2139497371:
			return 76;
		case -2073547330:
			return 48;
		case -2066076661:
			return 98;
		case -2048056274:
			return 25;
		case -2038873145:
			return 54;
		case -1988984077:
			return 42;
		case -1976230089:
			return 68;
		case -1948083328:
			return 113;
		case -1915486054:
			return 36;
		case -1914604474:
			return 58;
		case -1894256235:
			return 8;
		case -1882615108:
			return 80;
		case -1879729569:
			return 4;
		case -1827447245:
			return 22;
		case -1816811601:
			return 75;
		case -1812870325:
			return 104;
		case -1672929718:
			return 107;
		case -1604265010:
			return 21;
		case -1549775456:
			return 20;
		case -1533288167:
			return 83;
		case -1461871483:
			return 72;
		case -1327698122:
			return 55;
		case -1309844859:
			return 78;
		case -1271310569:
			return 71;
		case -1239377811:
			return 73;
		case -1221836150:
			return 92;
		case -1190908814:
			return 44;
		case -1169075737:
			return 47;
		case -1157194180:
			return 34;
		case -1151085798:
			return 35;
		case -1019271530:
			return 14;
		case -944178516:
			return 30;
		case -937655290:
			return 57;
		case -936508922:
			return 106;
		case -907971236:
			return 69;
		case -875426853:
			return 2;
		case -863017340:
			return 96;
		case -835345303:
			return 61;
		case -832908671:
			return 52;
		case -759061492:
			return 23;
		case -692335380:
			return 87;
		case -596510485:
			return 100;
		case -585098035:
			return 50;
		case -520556863:
			return 89;
		case -378561682:
			return 64;
		case -377574959:
			return 37;
		case -367868014:
			return 19;
		case -353010695:
			return 86;
		case -350556716:
			return 85;
		case -102827824:
			return 38;
		case -102545856:
			return 79;
		case -82191741:
			return 91;
		case 0:
			return 116;
		case 7562841:
			return 109;
		case 41932468:
			return 39;
		case 72801698:
			return 82;
		case 104820669:
			return 81;
		case 175025255:
			return 97;
		case 205166155:
			return 59;
		case 214785091:
			return 46;
		case 229544920:
			return 93;
		case 253727941:
			return 70;
		case 266787856:
			return 95;
		case 358997942:
			return 67;
		case 530671939:
			return 18;
		case 558731558:
			return 62;
		case 693005399:
			return 11;
		case 709801630:
			return 102;
		case 713508039:
			return 90;
		case 744226541:
			return 17;
		case 745945503:
			return 99;
		case 757105507:
			return 3;
		case 787316203:
			return 5;
		case 790678034:
			return 12;
		case 805845691:
			return 45;
		case 911414965:
			return 28;
		case 978801228:
			return 77;
		case 992695664:
			return 56;
		case 1062881804:
			return 29;
		case 1105471824:
			return 24;
		case 1128086492:
			return 112;
		case 1131758526:
			return 66;
		case 1139025222:
			return 111;
		case 1183803081:
			return 15;
		case 1190538002:
			return 103;
		case 1250977037:
			return 110;
		case 1261138928:
			return 7;
		case 1261539922:
			return 43;
		case 1285391378:
			return 10;
		case 1306457250:
			return 65;
		case 1314299724:
			return 115;
		case 1338756401:
			return 16;
		case 1400887301:
			return 31;
		case 1423490462:
			return 94;
		case 1437199060:
			return 40;
		case 1440632655:
			return 33;
		case 1472024063:
			return 49;
		case 1504223919:
			return 88;
		case 1562378696:
			return 108;
		case 1639899405:
			return 74;
		case 1706052688:
			return 9;
		case 1741725206:
			return 26;
		case 1747661667:
			return 1;
		case 1753192824:
			return 105;
		case 1780028424:
			return 60;
		case 1865339861:
			return 32;
		case 1901448492:
			return 27;
		case 1921351553:
			return 63;
		case 1961205920:
			return 53;
		case 1985273028:
			return 41;
		case joaat("SLOT_UNARMED"):
			return 114;
		case 1995043222:
			return 101;
		case 2031132011:
			return 13;
		case 2041846130:
			return 84;
		case 2069893421:
			return 0;
		case 2129028479:
			return 6;
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

struct<2> func_450(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_451(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_452(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != joaat("SELL")) && iParam18 != joaat("UPDATE"))
	{
		return false;
	}
	if (!func_544(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_545(iParam0, iParam18))
	{
		return false;
	}
	if (func_546(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_547(iParam0, bParam19);
}

bool func_453(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != joaat("SELL")) && iParam17 != joaat("UPDATE")) && iParam17 != joaat("USE")) && iParam17 != joaat("SPEND"))
	{
		return false;
	}
	if (!func_544(iParam17, &uParam1, iParam19))
	{
		return false;
	}
	if (!func_545(iParam0, iParam17))
	{
		return false;
	}
	if (func_548(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_547(iParam0, bParam18);
}

int func_454(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (func_292(iParam0))
	{
		return func_473(func_293(iParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_309(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam4)
	{
	}
	return 0;
}

void func_455(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, iParam2);
		Global_1957967[Global_1957967.f_25] = iVar0;
		Global_1957967.f_25 = (Global_1957967.f_25 + 1 % 24);
	}
}

int func_456(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0x2BAE4880DCDD560B(iParam0, iParam1))
	{
		return 0;
	}
	return INVENTORY::_0x2E1CDC1FF3B8473E(iParam0, iParam1);
}

void func_457(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_433((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_458(var uParam0)
{
	if (!func_311(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_459(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_311(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_0x4A606C17276E1BCC(&uParam0);
}

bool func_460(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_549()) > iParam0;
}

bool func_461(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_462(int iParam0)
{
	if (func_464(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_463(int iParam0)
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

bool func_464(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_465(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_466()
{
	if (!func_56())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_467(int iParam0)
{
	return func_433(iParam0) == -126813555;
}

bool func_468(int iParam0, bool bParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == bParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

int func_469(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_528(iVar0, 1, 0);
		if (!func_520(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_529(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_324(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_470(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_528(iVar0, 0, 1);
		if (!func_520(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_467(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_324(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_471(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_319(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_183(iParam2, 2))
	{
		if (func_468(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_183(iParam2, 8))
	{
		return func_550(iParam0, iParam1);
	}
	return 1;
}

bool func_472(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_551(Param1))
	{
		return false;
	}
	if (!func_545(iParam0, iParam18))
	{
		return false;
	}
	if (func_552(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_547(iParam0, bParam19);
}

int func_473(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_520(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

int func_474(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_332(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_271(iParam0, 1399091007))
	{
		func_553(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_475(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_554(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_555(&Var0, func_428(0));
	}
	if (!func_556(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_483(iVar14);
	return uVar15;
}

struct<4> func_476(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_303(iParam0, bParam1, 0) };
	return func_92(iParam0, Var0, Var0.f_4, bParam1);
}

int func_477(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HENNIGANS_STEAD_CAMP"):
			return 8;
		case joaat("RIO_BRAVO_CAMP"):
			return 9;
		case joaat("ROANOKE_RIDGE_CAMP"):
			return 10;
		case joaat("GREAT_PLAINS_CAMP"):
			return 6;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			return 4;
		case joaat("TALL_TREES_CAMP"):
			return 12;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			return 3;
		case joaat("GRIZZLIES_CAMP"):
			return 0;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			return 5;
		case joaat("BAYOU_NAWAS_CAMP"):
			return 1;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			return 11;
		case joaat("HEARTLAND_CAMP"):
			return 7;
		case joaat("BIG_VALLEY_CAMP"):
			return 2;
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

int func_478(vector3 vParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!func_186(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -265879762;
	Var0.f_3 = 0;
	uVar5 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	return uVar5;
}

int func_479(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	if (!func_186(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -265879762;
	Var2.f_3 = iParam0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 536676462;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

bool func_480(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_201(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_481(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_482(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_483(int iParam0)
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

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_485(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_486(int iParam0)
{
	int iVar0;

	iVar0 = func_433(iParam0);
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

bool func_487(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_201(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_488(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_557(vParam0, 0f, 0f, 0, 2);
	return func_557(vParam0, Global_1892740[iVar0 /*3*/].f_1, Global_1892740[iVar0 /*3*/].f_2, Global_1892740[iVar0 /*3*/], 4);
}

Vector3 func_489(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_490(int iParam0)
{
	switch (iParam0)
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
		case 10:
		case 11:
		case 12:
		case 46:
		case 57:
		case 58:
		case 59:
		case 67:
		case 68:
		case 69:
			return -678244495;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return -936216634;
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 47:
		case 48:
		case 50:
		case 51:
		case 52:
		case 53:
		case 98:
			return joaat("BLIP_STYLE_SHOP");
		case 49:
			return -691985497;
		case 45:
			return -1923570663;
		case 54:
		case 55:
		case 56:
			return -972966383;
		case 60:
		case 96:
			return 1560611276;
		case 61:
		case 62:
		case 63:
		case 64:
			return -494978356;
		case 65:
			return -507182222;
		case 66:
			return -1337945352;
		case 70:
			return -383696203;
		case 100:
			return -383696203;
		case 97:
			return 776060936;
		default:
			break;
	}
	return 0;
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MG_POKER");
		case 1:
			return joaat("BLIP_MG_BLACKJACK");
		case 2:
			return joaat("BLIP_MG_DOMINOES");
		case 4:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET");
		case 5:
			return joaat("BLIP_SUMMER_COW");
		case 6:
			return joaat("BLIP_SUMMER_HORSE");
		case 7:
			return joaat("BLIP_FENCE_BUILDING");
		case 8:
			return joaat("BLIP_MG_DOMINOES_ALL3S");
		case 9:
			return joaat("BLIP_MG_DOMINOES_ALL5S");
		case 10:
			return joaat("BLIP_MG_DOMINOES_DRAW");
		case 11:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT");
		case 12:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS");
		case 14:
			return joaat("BLIP_PROC_LOANSHARK");
		case 13:
			return joaat("BLIP_AMBIENT_HERD");
		case 16:
			return joaat("BLIP_PROC_BOUNTY_POSTER");
		case 17:
			return joaat("BLIP_AMBIENT_COACH");
		case 18:
			return joaat("BLIP_AMBIENT_TRAIN");
		case 19:
			return joaat("BLIP_AMBIENT_RIVERBOAT");
		case 20:
			return joaat("BLIP_SHOP_STORE");
		case 21:
			return joaat("BLIP_SHOP_SHADY_STORE");
		case 22:
			return joaat("BLIP_AMBIENT_QUARTERMASTER");
		case 23:
			return joaat("BLIP_SHOP_GUNSMITH");
		case 24:
			return joaat("BLIP_SHOP_COACH_FENCING");
		case 25:
			return joaat("BLIP_SHOP_DOCTOR");
		case 26:
			return joaat("BLIP_SHOP_TAILOR");
		case 28:
			return joaat("BLIP_SHOP_BLACKSMITH");
		case 29:
			return joaat("BLIP_SHOP_TRAINER");
		case 33:
			return joaat("BLIP_POST_OFFICE");
		case 34:
			return joaat("BLIP_POST_OFFICE_REC");
		case 30:
			return joaat("BLIP_SHOP_TRAIN");
		case 31:
			return joaat("BLIP_SHOP_BARBER");
		case 32:
			return joaat("BLIP_SHOP_BUTCHER");
		case 35:
			return joaat("BLIP_SHOP_TACKLE");
		case 36:
			return joaat("BLIP_SHOP_ANIMAL_TRAPPER");
		case 51:
			return joaat("BLIP_MP_ROLE_NATURALIST");
		case 37:
			return joaat("BLIP_SHOP_HORSE");
		case 38:
			return joaat("BLIP_SHOP_HORSE_FENCING");
		case 39:
			return joaat("BLIP_SHOP_HORSE_SADDLE");
		case 27:
			return joaat("BLIP_SALOON");
		case 40:
			return joaat("BLIP_HOTEL_BED");
		case 41:
			return joaat("BLIP_PHOTO_STUDIO");
		case 52:
			return joaat("BLIP_SHOP_WARDROBE");
		case 53:
			return joaat("BLIP_STABLE");
		case 54:
			return joaat("BLIP_PROC_HOME");
		case 55:
			return joaat("BLIP_PROC_HOME_LOCKED");
		case 56:
			return joaat("BLIP_PROC_HOME");
		case 57:
			return joaat("BLIP_AMBIENT_TELEGRAPH");
		case 58:
			return joaat("BLIP_AMBIENT_COACH_TAXI");
		case 59:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 60:
			return joaat("BLIP_REGION_CARAVAN");
		case 61:
			return joaat("BLIP_EVENT_APPLESEED");
		case 62:
			return joaat("BLIP_EVENT_CASTOR");
		case 63:
			return joaat("BLIP_EVENT_RAILROAD_CAMP");
		case 64:
			return joaat("BLIP_EVENT_RIGGS_CAMP");
		case 65:
			return joaat("BLIP_REGION_HIDEOUT");
		case 66:
			return joaat("BLIP_PROC_HOME");
		case 67:
			return joaat("BLIP_MG_FISHING");
		case 68:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 69:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 70:
			return joaat("BLIP_TOWN");
		case 42:
			return joaat("BLIP_AMBIENT_LAW");
		case 47:
			return joaat("BLIP_AMBIENT_QUARTERMASTER");
		case 48:
			return joaat("BLIP_MP_TRAVELLING_SALESWOMAN");
		case 43:
			return joaat("BLIP_MP_ORDERED_ITEM");
		case 44:
			return joaat("BLIP_MP_BUTCHER_TABLE");
		case 45:
			return joaat("BLIP_SHOP_HONOR");
		case 46:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 96:
			return joaat("BLIP_CAMP");
		case 97:
			return joaat("BLIP_CAMP");
		case 98:
			return joaat("BLIP_GRUB");
		case 50:
			return joaat("BLIP_MOONSHINE_STILL");
		case 49:
			return joaat("BLIP_BUSINESS_MOONSHINE");
		case 100:
			return joaat("BLIP_TOWN");
		default:
			break;
	}
	return 0;
}

var func_492(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_558() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_559());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_559());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_559());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_560(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_561(iVar2))
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
				if (iVar9 & 8192 != 0 && func_562(iVar2) != 1)
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
					if (!func_563(iVar10))
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

float func_493(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_494(int iParam0, bool bParam1, int iParam2)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	return func_499(iParam0, iParam2, 1, bParam1, 1, 0);
}

int func_495(int iParam0)
{
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_216(PLAYER::PLAYER_ID());
	}
	return func_236(GANG::_0x4BE6C13A45CCA8EC(iParam0));
}

bool func_496(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_19() == 0)
	{
		return func_564(iParam0);
	}
	return iParam0 <= func_565();
}

int func_497(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 != joaat("UPDATE"))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_567(func_566(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 19), iVar0, uParam1);
	}
	return -1;
}

bool func_498()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_499(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -915411861) && func_299(iParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_292(iParam0))
	{
		return func_569(func_293(iParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_309(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @204; //curOff = 188
				if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

bool func_500(bool bParam0)
{
	if (func_19() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_201(bParam0));
}

bool func_501(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_316(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_570(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_303(iParam0, bParam4, 0) };
	Var6 = { func_92(iParam0, Var1, Var1.f_4, bParam4) };
	return func_571(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_502(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_503(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_572(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_567(func_548(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

var func_504(int iParam0)
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

int func_505(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_506(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_507(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_508(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_379(*uParam0);
	iVar1 = func_380(*uParam0);
	if (iParam1 < 1 || iParam1 > func_573(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_509(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_510(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_511(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_512()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_513(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

float func_514(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_515(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	return func_517(iParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

void func_516(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_517(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_406(iParam2, -372840566);
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
	func_574(uParam1, iParam0, Var3);
	return 1;
}

void func_518(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_519(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_520(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_318(iParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_575(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_521(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_522(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_271(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_523(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_91(0) };
	Var0.f_4 = func_576(iParam1);
	Var5 = { func_92(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_201(0), &Var5, 0);
	return iVar9;
}

void func_524(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_577(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_525(struct<2> Param0)
{
	return func_578(Param0, 5, 8);
}

int func_526(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_513(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_19() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_579(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_527(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_528(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_529(int iParam0)
{
	return func_433(iParam0) == 1946043663;
}

bool func_530()
{
	return (func_580(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_95(func_92(joaat("WARDROBE"), func_91(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_531(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_201(0);
	*uParam1 = { func_92(iParam0, func_428(0), iParam3, 0) };
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

bool func_532(int iParam0, int iParam1, int iParam2)
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

bool func_533(int iParam0)
{
	return func_332(iParam0) == joaat("WEAPON");
}

bool func_534(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_535(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_203(iParam0, 0) && !func_513(func_394(iParam0), 2))
	{
		return 0;
	}
	if (func_332(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_316(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_201(bParam3), iParam0);
}

bool func_536(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_203(iParam0, 0) && !func_513(func_394(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_537(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_538(int* iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_581(iParam1, 1) && !func_582(iParam1, 1))
	{
		if (Global_1915715.f_20644)
		{
			func_583(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -570078785)
	{
		iVar0 = func_499(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_521((iVar1 + func_584(iParam0, bParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_583(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -915411861)
	{
		iVar2 = func_499(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_496((iVar3 + func_584(iParam0, bParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_583("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 997808187)
	{
		return 1;
	}
	if (func_513(func_394(iParam1), 2))
	{
		if (!func_585(func_394(iParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_203(iParam1, 0))
	{
		if (!func_586(iParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_539(int iParam0)
{
	int iVar0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_433(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_540(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_335(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_541(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_309(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_587(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_588(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_589(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_590(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_591(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_592(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_593(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_594(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_595(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_596(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_597(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_598(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_599(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_600(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_601(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_542(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8)
{
	if (!func_438(iParam0, iParam1, Param2, iParam6, bParam7, 1, iParam8, 1))
	{
		return false;
	}
	if (func_183(iParam8, 4) && func_430(iParam1, &Param2, iParam6, 1, 0))
	{
		return false;
	}
	return true;
}

int func_543(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_435(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_332(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_602(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_603(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_604(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_605(joaat("UPDATE"), &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_606(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_607(joaat("UPDATE"), &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_356(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_503(joaat("UPDATE"), &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_544(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_203(uParam1->f_8, 0) && !func_513(func_394(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_183(iParam2, 128))
	{
		if (func_433(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_183(iParam2, 16))
	{
		if (!func_572(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_545(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_440(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_448(iParam0))
		{
			return false;
		}
		if (!func_440(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_546(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_547(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_448(iParam0);
	}
	return true;
}

bool func_548(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_549()
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 135369362))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-475019843, 135369362, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

int func_550(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -570078785)
	{
		iVar0 = func_569(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_521(iVar0))
		{
			if (Global_1915715.f_20644)
			{
				func_583(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_608(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_569(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_496(iVar1))
		{
			if (Global_1915715.f_20644)
			{
				func_583("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_409(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_551(struct<17> Param0)
{
	if (!func_318(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_552(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_553(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_554(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_555(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_556(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_201(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_557(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_558()
{
	return Global_1051252.f_12;
}

char* func_559()
{
	return "unnamed";
}

int func_560(int iParam0)
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

bool func_561(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_241(36, iParam0);
}

int func_562(int iParam0)
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

bool func_563(int iParam0)
{
	if (func_609(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_610(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_564(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_565()
{
	if (func_19() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_566(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 19, uParam2, 0);
}

int func_567(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_420(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_420(iParam1, 2, 0, 0);
	return -1;
}

int func_568(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_420(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_569(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_520(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_570(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_611(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_316(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_500(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_612(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_613(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_503(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = iParam3;
			Var81.f_7 = iParam2;
			func_168(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_201(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_571(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_611(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_435(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_500(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_19() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_503(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_168(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_201(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_572(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_614(uParam1->f_8, iParam0, uVar0, 2048) || func_614(uParam1->f_8, iParam0, uVar0, 32768)) || func_614(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_614(uParam1->f_8, iParam0, uVar0, 4) || func_614(uParam1->f_8, iParam0, uVar0, 256)) || func_614(uParam1->f_8, iParam0, uVar0, 65536)) || func_614(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_614(uParam1->f_8, iParam0, uVar0, 1) || func_614(uParam1->f_8, iParam0, uVar0, 8)) || func_614(uParam1->f_8, iParam0, uVar0, 65536)) || func_614(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_614(uParam1->f_8, iParam0, uVar0, 1) || func_614(uParam1->f_8, iParam0, uVar0, 16)) || func_614(uParam1->f_8, iParam0, uVar0, 2)) || func_614(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_614(uParam1->f_8, iParam0, uVar0, 8) || func_614(uParam1->f_8, iParam0, uVar0, 4096)) || func_614(uParam1->f_8, iParam0, uVar0, 256)) || func_614(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

int func_573(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_574(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_534(uParam0))
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

void func_575(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_433((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

void func_577(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_615(&(uParam0->f_4));
}

bool func_578(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_44(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_616(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_579(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_513(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_617(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_580(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_618(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_201(bParam1), iParam0, iParam3);
}

bool func_581(int iParam0, bool bParam1)
{
	if (!func_271(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_271(iParam0, -1090933859))
		{
			return func_293(iParam0, 1) != 0;
		}
		if ((func_423(iParam0, -915411861, 0) || func_423(iParam0, 600942249, 0)) || func_423(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_582(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_619(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_468(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_409(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_583(char* sParam0)
{
	Global_1915715.f_22470 = func_137(sParam0, 10000, 0, 0, 0, 1);
}

int func_584(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_499(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_585(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_620(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_500(0)) && !func_498());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_496(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_521(iVar32))
			{
			}
			else
			{
				iVar33 = func_324(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_586(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	if (func_292(iParam0))
	{
		return func_409(func_293(iParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_309(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_500(0)) && !func_498());
	iVar37 = -1;
	if (Global_1915715.f_20638)
	{
		iVar37 = Global_1915715.f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && (bParam7 || func_496(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && (bParam7 || func_521(iVar32)))
			{
			}
			else
			{
				iVar36 = func_522(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_523(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_324(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_621(Var0[iVar34 /*2*/]) || func_622(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_623(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_624(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_625(7, Var0[iVar34 /*2*/])) + func_626(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_587(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_588(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_589(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_590(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_591(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_592(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_593(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_594(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_595(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_596(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_597(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_598(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_599(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_600(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_601(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

struct<28> func_602(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_201(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_603(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_572(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_567(func_628(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_604(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_201(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_605(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_567(func_629(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_606(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_201(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_607(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_572(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_567(func_546(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

int func_608(int iParam0)
{
	return (iParam0 / 100);
}

bool func_609(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_610(int iParam0)
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
		func_630(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_631(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

bool func_611(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_612(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_316(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_632(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_613(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_92(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_614(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_65(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_615(var uParam0)
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

int func_616(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_633(Param0);
	}
	return -1;
}

bool func_617(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_618(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_619(int iParam0, bool bParam1)
{
	if (!func_581(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PAMPHLET_TRACKING_ARROW"))
	{
		return func_293(joaat("AMMO_ARROW_TRACKING"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_POISON_BOTTLE"))
	{
		return func_293(joaat("AMMO_POISONBOTTLE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_ANIMAL_REVIVER"))
	{
		return func_293(joaat("CONSUMABLE_TONIC_ANIMAL_REVIVER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_AMMO_22_TRANQUILIZER"))
	{
		return func_293(joaat("AMMO_22_TRANQUILIZER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_LEGENDARY_PHEROMONES"))
	{
		return func_293(joaat("CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_TONIC_BLENDING"))
	{
		return func_293(joaat("CONSUMABLE_TONIC_BLENDING"), 1);
	}
	return func_293(iParam0, 1);
}

bool func_620(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_513(iParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xB542632693D53408(iParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_634(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_621(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_271(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return true;
	}
	return func_622(iParam0);
}

bool func_622(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_271(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_623(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_635(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_203(iParam1, 0))
	{
		return 0;
	}
	if (!func_636(iParam0))
	{
		return 0;
	}
	iVar0 = func_637(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_638(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_624(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!func_621(iParam0) && !func_622(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_639(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_386(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_387(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_388(iVar15, iVar1);
			if (func_203(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_640(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_523(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_642(iVar16, func_641(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_391(iVar1);
	}
	return iVar0;
}

int func_625(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_635(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_203(iParam1, 0))
	{
		return 0;
	}
	if (!func_636(iParam0))
	{
		return 0;
	}
	iVar0 = func_637(iParam0);
	iVar1 = iParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_626(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (iParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_627(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_643((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * uParam1->f_9), uParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_644(iParam0, uParam1, uParam5, iParam2, bParam6, iParam7);
}

bool func_628(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_629(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

void func_630(int iParam0)
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
	func_631(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_631(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_632(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_458(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_202() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_633(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_645(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_634(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_433((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_635(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_636(int iParam0)
{
	iParam0 = func_635(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903136[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

int func_637(int iParam0)
{
	iParam0 = func_635(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0 /*43*/];
}

bool func_638(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return false;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return false;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_639(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

int func_640(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

int func_641(int iParam0)
{
	if (func_271(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_271(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_271(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_642(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_203(uVar0[iVar17], 0) && iParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_643(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = iParam0;
	if (func_426(0))
	{
		iVar5 = func_522(func_646(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_91(1) };
			Var0.f_4 = func_576(iVar5);
			uParam2->f_1[0 /*4*/] = { func_92(iParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_316(iParam0, joaat("DEFAULT"));
	if (iVar6 != 0)
	{
		if (!func_612(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_92(iParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_303(iParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_92(iParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_644(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != joaat("SELL")) && iParam3 != joaat("USE"))
	{
		return false;
	}
	if (!func_544(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_545(iParam0, iParam3))
	{
		return false;
	}
	if (func_647(*iParam0, iParam3, uParam1, uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_547(iParam0, bParam4);
}

bool func_645(struct<2> Param0, var uParam2)
{
	if (!func_44(Param0))
	{
		return false;
	}
	func_648(uParam2);
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

int func_646()
{
	return Global_1915715.f_20241;
}

bool func_647(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam3, *uParam3);
}

void func_648(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

