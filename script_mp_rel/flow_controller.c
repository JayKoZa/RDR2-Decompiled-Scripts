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
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
		}
		func_1();
		return;
	}
	func_2();
	Global_1878407->f_1804 = 0;
	Global_1878407 = 0;
	Global_1878407->f_1804 = 0;
	bVar0 = false;
	while (!bVar0)
	{
		if (func_3(0, 0))
		{
			bVar0 = true;
		}
		else
		{
			if (!Global_1878407->f_7161)
			{
				BUILTIN::WAIT(0);
			}
			else if (func_4(68))
			{
				BUILTIN::WAIT(0);
			}
			else
			{
				func_5();
				func_6();
				BUILTIN::WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	func_7(32, -1);
	func_8();
	if (func_9())
	{
		func_10();
	}
	func_11(Global_1199427);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1199427, 80, 44);
	func_12(NETWORK::_0xBA24095EA96DFE17(Global_1199427), 80, "g_mpFlowData");
	func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_14(Global_1199103, 1);
}

int func_3(bool bParam0, bool bParam1)
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

bool func_4(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_5()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = &Global_1199427 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1199427 = iVar0;
	func_15();
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = -1;
	iVar1 = 0;
	iVar2 = 3;
	func_16(&iVar2);
	Global_1900718->f_68 = func_17(0, 1, 0);
	while (iVar1 < iVar2 && !bVar3)
	{
		if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iLocal_21 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iLocal_21 /*4*/]), 1))
			{
				iVar0 = iLocal_21;
				func_18(iVar0, 0);
				if (&Global_1878407->f_9[iVar0])
				{
					func_18(iVar0, 1);
					if (&Global_1878407->f_9[iVar0])
					{
						Global_1878407->f_9[iVar0] = 0;
					}
				}
			}
			iVar1++;
		}
		iLocal_21++;
		if (iLocal_21 >= Global_1878407->f_7160)
		{
			if (!Global_1878407->f_1804)
			{
				Global_1878407 = 0;
			}
			Global_1878407->f_1804 = 0;
			iLocal_21 = 0;
		}
		if (MISC::_0xC43CD2668B204419() - MISC::_0x72904D3D62AF5839()) <= BUILTIN::FLOOR((BUILTIN::TO_FLOAT(MISC::_0xC43CD2668B204419()) * 0.2f))
		{
			bVar3 = true;
		}
	}
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
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
			func_10();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_10();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_10();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_10();
		}
		if (func_19() == 0)
		{
			if (func_20())
			{
				func_10();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
	}
	return 1;
}

int func_9()
{
	if (Global_1572887->f_9)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	*uParam0 = 0;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 26)
	{
		*(uParam0->f_1[iVar3 /*3*/]) = { vVar0 };
		iVar3++;
	}
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_13(bool bParam0)
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
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
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
			func_10();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_15()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (&Global_1199427 < 13 || &Global_1199427 > 25)
	{
		return;
	}
	if (func_21(&Global_1199427))
	{
		func_22(&Global_1199427);
	}
	else
	{
		func_23(&Global_1199427);
	}
}

void func_16(int iParam0)
{
	int iVar0;

	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1275573->f_15) || _NAMESPACE26::_0x0F99F6436528A089(Global_1275573->f_15))
	{
		if (((Global_1275573->f_16 != &Global_1275573 && Global_1275573->f_16 >= 0) && Global_1275573->f_16 < 32) && NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[Global_1275573->f_16])))
		{
			func_24();
			Global_1878407->f_5++;
			*iParam0 = 0;
		}
		else if (Global_1878407->f_5 > 0)
		{
			if (func_25() > 0)
			{
				iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_25()));
				if (iVar0 < 120)
				{
					Global_1878407->f_5++;
					*iParam0 = 0;
					return;
				}
				func_26(0);
			}
			func_27();
			Global_1878407->f_5 = 0;
		}
	}
	else if (Global_1878407->f_5 > 0)
	{
		Global_1878407->f_5 = 0;
	}
}

int func_17(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900718->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900718->f_68;
		}
		if (func_28())
		{
			return 1;
		}
		if (Global_1070356->f_3 && !Global_1572887->f_9)
		{
			if ((((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900718->f_67;
		}
		else
		{
			return Global_1900718->f_68;
		}
	}
	if (iParam0 == 0 && func_30(func_29(0)))
	{
		return 1;
	}
	if ((Global_1939178 && 81919 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1900853)
		{
			return 1;
		}
	}
	switch (func_31(func_29(0)))
	{
		case -1:
			return 0;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return 0;
}

void func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1;
	iVar1 = iVar0;
	iVar2 = &Global_1878407->f_7116[iParam0 /*2*/];
	iVar3 = (Global_1878407->f_7116[iParam0 /*2*/])->f_1;
	if (iVar0 < iVar2)
	{
		return;
	}
	if (iVar0 > iVar3)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 2))
	{
		return;
	}
	func_32(iParam0, iVar0);
	iVar0 = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1;
	if (&Global_1878407->f_1805[iVar0 /*3*/] == 531432813)
	{
		func_32(iParam0, iVar0);
	}
	if (bParam1)
	{
		while (iVar1 != (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1)
		{
			iVar1 = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1;
			func_32(iParam0, (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1);
		}
	}
}

int func_19()
{
	return Global_1572887->f_13;
}

bool func_20()
{
	return Global_1051202->f_8;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_33(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((!NETWORK::_0x255A5EF65EDA9167(iVar1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1)) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (MISC::_0x8F4F050054005C27(&(((*Global_1055966)[iVar0 /*436*/])->f_15.f_18), iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	var uVar13;
	int iVar14;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!func_34(iParam0))
	{
		return 0;
	}
	if (!func_35(iParam0))
	{
		return 1;
	}
	vVar0 = { func_36(iParam0) };
	fVar3 = func_37(iParam0);
	switch (func_38(iParam0))
	{
		case 0:
			if (VOLUME::_0x397769175A7DBB30(vVar0, fVar3, 0, 0, 0))
			{
				if (func_39(&uVar4, iParam0))
				{
					uVar13 = VOLUME::_0x77A6E4AD0C496F81(&uVar4);
					if (VOLUME::_0xF6A8A652A6B186CD(uVar13))
					{
						return 1;
					}
				}
			}
			else if (!func_40())
			{
			}
			else
			{
				func_41(iParam0, 1);
				Jump @377; //curOff = 168
				if (!func_39(&uVar4, iParam0))
				{
					func_41(iParam0, 0);
				}
				else
				{
					func_42(iParam0, VOLUME::_0x183C0B6CFEFFCAE4(&uVar4));
					func_41(iParam0, 2);
					Jump @377; //curOff = 212
					if (!VOLUME::_0xA4A4359320345B34(func_43(iParam0)))
					{
						func_41(iParam0, 0);
					}
					else
					{
						iVar14 = VOLUME::_0xB33A604345F58202(func_43(iParam0));
						switch (iVar14)
						{
							case 4:
								func_41(iParam0, 0);
								break;
							case 1:
							case 2:
								break;
							case 3:
								func_44(iParam0, VOLUME::_0x351D71B8B72B858B(func_43(iParam0)));
								if (!VOLUME::_0xF6A8A652A6B186CD(func_45(iParam0)))
								{
									func_41(iParam0, 0);
									return 0;
								}
								func_41(iParam0, 3);
								break;
						}
						Jump @377; //curOff = 347
						if (VOLUME::_0xF6A8A652A6B186CD(func_45(iParam0)))
						{
							return 1;
						}
						func_41(iParam0, 0);
					}
				}
			}
			return 0;
		}

int func_23(int iParam0)
{
	var uVar0;
	int iVar9;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!func_34(iParam0))
	{
		return 0;
	}
	switch (func_38(iParam0))
	{
		case 0:
			if (func_39(&uVar0, iParam0))
			{
				iVar9 = VOLUME::_0x77A6E4AD0C496F81(&uVar0);
				if (VOLUME::_0xF6A8A652A6B186CD(iVar9))
				{
					func_44(iParam0, iVar9);
					func_41(iParam0, 3);
				}
			}
			break;
		case 1:
		case 2:
			func_41(iParam0, 0);
			break;
		case 3:
			if (VOLUME::_0xF6A8A652A6B186CD(func_45(iParam0)))
			{
				VOLUME::_0xFDFECC6EE4491E11(func_45(iParam0));
			}
			func_41(iParam0, 0);
			break;
	}
	return 1;
}

void func_24()
{
	int iVar0;
	int iVar1;

	if (Global_1878407->f_5 == 0)
	{
		iVar0 = 13;
		while (iVar0 <= 25)
		{
			func_46(iVar0, 1);
			func_47(iVar0, -1, 0, 1, 1, 0, 0);
			func_48(iVar0);
			func_49(iVar0);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!func_50(iVar1))
			{
			}
			else if (func_51(iVar1))
			{
				func_52(iVar1, 1, 1, 1);
			}
			else if (func_53(iVar1) && Global_1275573->f_16 != &Global_1275573)
			{
				func_52(iVar1, 1, 1, 1);
			}
			iVar1++;
		}
	}
}

int func_25()
{
	return Global_1878407->f_6;
}

void func_26(int iParam0)
{
	Global_1878407->f_6 = iParam0;
}

void func_27()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	while (iVar0 <= 10)
	{
		MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
		MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
		(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 = &Global_1878407->f_7116[iVar0 /*2*/];
		iVar0++;
	}
	iVar1 = 1;
	while (iVar1 <= 6)
	{
		if (!&Global_1878407->f_7161.f_62[iVar1])
		{
		}
		else
		{
			Global_1878407->f_7161.f_62[iVar1] = 0;
		}
		iVar1++;
	}
	func_54();
	MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[5 /*4*/], 2);
	MISC::SET_BIT(Global_1878407->f_7161.f_1[5 /*4*/], 1);
	MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[6 /*4*/], 2);
	MISC::SET_BIT(Global_1878407->f_7161.f_1[6 /*4*/], 1);
}

int func_28()
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
	if (!func_30(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_29(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_30(struct<2> Param0)
{
	if (!func_55(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_56(Param0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0, var uParam1)
{
	return uParam0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = &Global_1878407->f_1805[iParam1 /*3*/];
	iVar2 = (Global_1878407->f_1805[iParam1 /*3*/])->f_2;
	switch (iVar1)
	{
		case 485486536:
			iVar0 = -2;
			break;
		case 1677774865:
			iVar0 = func_57(iVar2);
			break;
		case -1750917831:
			iVar0 = -2;
			break;
		case 2058194871:
			iVar0 = func_58(iVar2);
			break;
		case 1909997983:
			MISC::SET_BIT(Global_1878407->f_7161.f_1[iParam0 /*4*/], 2);
			iVar0 = -1;
			break;
		case -1878191811:
			iVar0 = func_59(iVar2);
			break;
		case -217347738:
			iVar0 = func_60(iVar2);
			break;
		case 531432813:
			iVar0 = -2;
			break;
		case 1144707570:
			iVar0 = func_61(iVar2);
			break;
		case 1984622930:
			iVar0 = func_62(iVar2);
			break;
		case -661286798:
			iVar0 = func_63(iVar2);
			break;
		case -1532130030:
			iVar0 = func_64(iVar2);
			break;
		case 1174602905:
			iVar0 = func_65(iVar2);
			break;
		case 1111033820:
			iVar0 = func_66(iVar2);
			break;
		case 1986927063:
			iVar0 = func_67(iVar2);
			break;
		case -1982716178:
			iVar0 = func_68(iVar2);
			break;
		case -964850613:
			iVar0 = func_69(iVar2);
			break;
		case -1913176419:
			iVar0 = func_70(iVar2);
			break;
		case 1210875743:
			iVar0 = func_71(iParam0, iVar2);
			break;
		case 427205337:
			iVar0 = func_72(iParam0, iVar2);
			break;
		case 712880499:
			iVar0 = func_73(iParam0, iVar2);
			break;
		case -1664179412:
			iVar0 = func_74(iParam0, iVar2);
			break;
		case 770100737:
			iVar0 = func_75(iVar2);
			break;
		case -2093459088:
			iVar0 = func_76(iParam0, iVar2);
			break;
		case -868169264:
			iVar0 = func_77(iParam0, iVar2);
			break;
		case 1281917784:
			iVar0 = func_78(iParam0, iVar2);
			break;
		case 1098008903:
			iVar0 = func_79(iVar2);
			break;
		case 2088295092:
			iVar0 = func_80(iVar2);
			break;
		case -644074888:
			iVar0 = func_81();
			break;
		case 442701271:
			iVar0 = func_82();
			break;
		case -612537234:
			iVar0 = func_83(iVar2);
			break;
		case 1873982265:
			iVar0 = func_84(iVar2);
			break;
		case -157982035:
			iVar0 = func_85(iVar2);
			break;
		case -2024549018:
			iVar0 = func_86(iVar2);
			break;
		case 535702079:
			iVar0 = func_54();
			break;
		case -1228560642:
			iVar0 = func_87(iVar2);
			break;
		case -2037170240:
			iVar0 = func_88(iVar2);
			break;
		case -1592972575:
			iVar0 = func_89(iVar2);
			break;
		case -157595539:
			iVar0 = func_90();
			break;
		case -1391705448:
			iVar0 = func_91(iVar2);
			break;
		case -2132850383:
			iVar0 = func_92(iVar2);
			break;
		case 1232552289:
			iVar0 = func_93();
			break;
		case -673493118:
			iVar0 = func_94();
			break;
		default:
			iVar0 = -2;
			break;
	}
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 2))
	{
		if (iVar0 != -1)
		{
			Global_1878407 = 1;
			Global_1878407->f_1804 = 1;
		}
		func_95(iParam0, iVar0);
	}
	return iVar0;
}

bool func_33(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

bool func_34(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_36(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return ((*Global_1835011)[iParam0 /*72*/])->f_19;
		default:
			break;
	}
	return func_96();
}

float func_37(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 18f;
		case 14:
			return 40f;
		case 15:
			return 35f;
		case 16:
			return 55f;
		case 17:
			return 50f;
		case 21:
			return 55f;
		case 22:
			return 30f;
		case 18:
			return 50f;
		case 19:
			return 45f;
		case 23:
			return 55f;
		case 24:
			return 55f;
		case 20:
			return 60f;
		case 25:
			return 65f;
		default:
			break;
	}
	return 0f;
}

int func_38(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 4;
	}
	return (Global_1199427->f_1[iParam0 /*3*/])->f_2;
}

int func_39(var uParam0, int iParam1)
{
	var uVar0;

	if (!func_34(iParam1))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar0, 9);
	*uParam0 = { func_36(iParam1) };
	uParam0->f_4 = func_37(iParam1);
	uParam0->f_5 = func_97(iParam1);
	uParam0->f_6 = func_98();
	uParam0->f_7 = ((*Global_1835011)[iParam1 /*72*/])->f_51;
	return 1;
}

int func_40()
{
	if (func_28())
	{
		return 0;
	}
	if (func_99() != -1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (func_30(func_100()))
	{
		return 0;
	}
	return 1;
}

void func_41(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_34(iParam0))
	{
		return;
	}
	if ((Global_1199427->f_1[iParam0 /*3*/])->f_2 == iParam1)
	{
		return;
	}
	(Global_1199427->f_1[iParam0 /*3*/])->f_2 = iParam1;
}

void func_42(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_34(iParam0))
	{
		return;
	}
	if ((Global_1199427->f_1[iParam0 /*3*/])->f_1 == iParam1)
	{
		return;
	}
	(Global_1199427->f_1[iParam0 /*3*/])->f_1 = iParam1;
}

int func_43(int iParam0)
{
	if (!func_34(iParam0))
	{
		return -1;
	}
	return (Global_1199427->f_1[iParam0 /*3*/])->f_1;
}

void func_44(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_34(iParam0))
	{
		return;
	}
	if (&Global_1199427->f_1[iParam0 /*3*/] == iParam1)
	{
		return;
	}
	Global_1199427->f_1[iParam0 /*3*/] = iParam1;
}

int func_45(int iParam0)
{
	if (!func_34(iParam0))
	{
		return -1;
	}
	return &(Global_1199427->f_1[iParam0 /*3*/]);
}

void func_46(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_101(((*Global_1835011)[iParam0 /*72*/])->f_1);
	if (!func_102(iVar0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900820[iVar0 /*2*/]))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP((*Global_1900820)[iVar0 /*2*/]);
	}
	if (func_103(iVar0, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1835011)[iParam0 /*72*/])->f_13));
	}
	if (bParam1)
	{
		func_105(func_104(4, iParam0), 0);
		func_106(((*Global_1835011)[iParam0 /*72*/])->f_1, 0, 2, 0);
	}
	if (((*Global_1835011)[iParam0 /*72*/])->f_32 != -1)
	{
		((*Global_1835011)[iParam0 /*72*/])->f_32 = -1;
	}
	func_107(iParam0);
}

void func_47(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_102(iParam1))
	{
		iParam1 = func_101(func_108(iParam0));
		if (!func_102(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*72*/])->f_28))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1835011)[iParam0 /*72*/])->f_28));
		((*Global_1835011)[iParam0 /*72*/])->f_66 = 0;
	}
	else if (bParam2 && !Global_26386)
	{
		func_109(iParam0, iParam5, iParam1);
	}
	if (func_103(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1835011)[iParam0 /*72*/])->f_13));
	}
	Var0 = { ((*Global_1835011)[iParam0 /*72*/])->f_13 };
	if ((bParam3 && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0)) && SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*72*/])->f_17, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(((*Global_1835011)[iParam0 /*72*/])->f_17);
	}
	if (bParam4)
	{
		func_110(((*Global_1835011)[iParam0 /*72*/])->f_1);
	}
	else
	{
		func_111(iParam1, 3831);
	}
	((*Global_1835011)[iParam0 /*72*/])->f_71 = 0;
}

void func_48(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {((*Global_1835011)[iParam0 /*72*/])->f_4}, 3);
	if ((func_19() != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&uVar0)) && SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*72*/])->f_8, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(((*Global_1835011)[iParam0 /*72*/])->f_8);
	}
}

void func_49(int iParam0)
{
	int iVar0;

	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (!func_112(iParam0, iVar0))
	{
		return;
	}
	MISC::_0xB909149F2BB5F6DA(&(((*Global_1055966)[iVar0 /*436*/])->f_15.f_18), iParam0);
}

int func_50(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return 0;
	}
	return 1;
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 >= 7 || iParam0 <= 0)
	{
		return;
	}
	if ((Global_1272028->f_94[iParam0 /*5*/])->f_3 == iParam1)
	{
		return;
	}
	(Global_1272028->f_94[iParam0 /*5*/])->f_3 = iParam1;
	(Global_1272028->f_94[iParam0 /*5*/])->f_2 = iParam3;
	(Global_1272028->f_94[iParam0 /*5*/])->f_1 = iParam2;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 0;
		case 6:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 13;
	while (iVar0 <= 25)
	{
		iVar2 = func_104(4, iVar0);
		if (iVar2 == 0)
		{
		}
		else
		{
			func_107(iVar0);
			if ((Global_1132968->f_5641[iVar0 /*3*/])->f_2)
			{
				func_105(iVar2, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 1;
	while (iVar1 <= 6)
	{
		switch (func_113(iVar1, PLAYER::PLAYER_ID()))
		{
			case 3:
			case 4:
			case 5:
				Jump @199; //curOff = 116
				if (!func_51(iVar1) && !func_53(iVar1))
				{
				}
				else
				{
					iVar2 = func_114(3, iVar1);
					if (iVar2 == 0)
					{
					}
					else
					{
						iVar3 = func_115(iVar1);
						if (iVar3 == 0)
						{
						}
						else if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar3))
						{
							func_105(iVar2, 0);
						}
					}
				}
				iVar1++;
			}
			return -2;
		}

int func_55(int iParam0)
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

int func_56(int iParam0)
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

int func_57(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1878407->f_7160)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
	{
		return -2;
	}
	MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 2))
	{
		MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
	}
	return -2;
}

int func_58(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1878407->f_7160)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 2))
	{
		return -2;
	}
	MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
	{
		MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
	}
	return -2;
}

int func_59(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 < -2 || iVar0 > 15)
	{
		return -2;
	}
	return iVar0;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	if (iVar0 <= -1 || iVar0 >= Global_1878407->f_7160)
	{
		return -2;
	}
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 2))
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1;
	iVar2 = (Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1;
	iVar3 = &Global_1878407->f_7116[iVar0 /*2*/];
	iVar4 = (Global_1878407->f_7116[iVar0 /*2*/])->f_1;
	if (iVar2 < iVar3)
	{
		return -2;
	}
	if (iVar2 > iVar4)
	{
		return -2;
	}
	iVar5 = iVar3;
	iVar6 = -1;
	while (iVar5 <= iVar4)
	{
		if (&Global_1878407->f_1805[iVar5 /*3*/] == 531432813)
		{
			iVar6 = (Global_1878407->f_1805[iVar5 /*3*/])->f_2;
			iVar7 = &Global_1878407->f_105[iVar6 /*4*/];
			if (iVar7 == iVar1)
			{
				(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 = iVar5;
				return -2;
			}
		}
		iVar5++;
	}
	return -2;
}

int func_61(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = 0;
	if ((Global_1878407->f_105[iParam0 /*4*/])->f_1 == 1)
	{
		iVar1 = 1;
	}
	func_116(iVar0, iVar1);
	return -2;
}

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	func_117(iVar0, iVar1);
	return -2;
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	bVar2 = false;
	if ((Global_1878407->f_105[iParam0 /*4*/])->f_2 == 1)
	{
		bVar2 = true;
	}
	func_118(iVar0, iVar1, bVar2);
	return -2;
}

int func_64(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (&Global_1878407->f_105[iParam0 /*4*/] % 1000000);
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	uVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	if (func_119(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	uVar3 = (Global_1878407->f_105[iParam0 /*4*/])->f_3;
	if (func_120(iVar0) == iVar1)
	{
		return uVar2;
	}
	return uVar3;
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	uVar3 = (Global_1878407->f_105[iParam0 /*4*/])->f_3;
	if (func_121(iVar0, iVar1))
	{
		return uVar2;
	}
	return uVar3;
}

int func_67(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == Global_1878407->f_7160)
	{
		return -2;
	}
	uVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 2))
	{
		return uVar1;
	}
	return uVar2;
}

int func_68(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 7)
	{
		return -2;
	}
	if (!&Global_1878407->f_7161.f_62[iVar0])
	{
		return -1;
	}
	return -2;
}

int func_69(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 7)
	{
		return -2;
	}
	Global_1878407->f_7161.f_62[iVar0] = 1;
	return -2;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	iVar1 = &Global_1878407->f_105[iParam0 /*4*/];
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		CLOCK::SET_CLOCK_TIME(func_122(iVar1), CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), func_123(iVar1), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 2))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), CLOCK::GET_CLOCK_MINUTES(), func_124(iVar1));
	}
	if (MISC::IS_BIT_SET(iVar0, 3))
	{
		CLOCK::SET_CLOCK_DATE(func_125(iVar1), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 4))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), func_126(iVar1), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 5))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), func_127(iVar1));
	}
	return -2;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam1 == -1)
	{
		return -2;
	}
	if (!func_128())
	{
		return -2;
	}
	iVar0 = (Global_1878407->f_105[iParam1 /*4*/])->f_2;
	iVar1 = (Global_1878407->f_105[iParam1 /*4*/])->f_1;
	iVar2 = &Global_1878407->f_105[iParam1 /*4*/];
	if (!&Global_1878407->f_25[iParam0])
	{
		if (func_129((Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3))
		{
			Global_1878407->f_57[iParam0] = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3;
		}
		else
		{
			Global_1878407->f_57[iParam0] = func_130();
			func_131(Global_1878407->f_57[iParam0], iVar0, iVar1, iVar2, 0, 0, 0, 0);
			(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3 = &Global_1878407->f_57[iParam0];
		}
		Global_1878407->f_25[iParam0] = 1;
	}
	else
	{
		iVar3 = -1;
		if (func_132(func_130(), &(Global_1878407->f_57[iParam0]), 1) || iVar3 == 0)
		{
			Global_1878407->f_25[iParam0] = 0;
			(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3 = -15;
			if (iVar3 == 0)
			{
				Global_1900853 = MISC::GET_GAME_TIMER();
			}
			return -2;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)
{
	if (!func_128())
	{
		return -2;
	}
	if (!&Global_1878407->f_25[iParam0])
	{
		if (iParam1 < 0)
		{
			return -2;
		}
		Global_1878407->f_41[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
		Global_1878407->f_25[iParam0] = 1;
	}
	else if (MISC::GET_GAME_TIMER() > &Global_1878407->f_41[iParam0])
	{
		Global_1878407->f_25[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_128())
	{
		return -2;
	}
	if (!&Global_1878407->f_25[iParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
		{
			return -2;
		}
		iVar0 = iParam1;
		iVar1 = func_130();
		if (func_122(iVar1) > iVar0)
		{
			func_131(&iVar1, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_122(iVar1) != iVar0)
		{
			func_133(&iVar1, 0);
			func_134(&iVar1, 0);
			func_135(&iVar1, iVar0);
		}
		Global_1878407->f_57[iParam0] = iVar1;
		Global_1878407->f_25[iParam0] = 1;
	}
	else if (func_136(&(Global_1878407->f_57[iParam0]), 1))
	{
		Global_1878407->f_25[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;

	if (!&Global_1878407->f_25[iParam0])
	{
		iVar0 = iParam1;
		Global_1878407->f_57[iParam0] = iVar0;
		Global_1878407->f_25[iParam0] = 1;
	}
	else if (func_136(&(Global_1878407->f_57[iParam0]), 1))
	{
		Global_1878407->f_25[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_75(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 24)
	{
		return -2;
	}
	uVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	if (CLOCK::GET_CLOCK_HOURS() >= iVar0)
	{
		return uVar1;
	}
	return uVar2;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	iVar1 = func_137(iVar0);
	if (!func_138(iVar0))
	{
		func_139(iVar1, ((*Global_1835011)[iVar0 /*72*/])->f_19);
		if (!Global_1939178 & 4096 != 0 && !func_17(0, 1, 1))
		{
			if (!func_140())
			{
				return -1;
			}
			if (func_141(iVar0, 0))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (func_4(32768))
	{
		return -1;
	}
	if (!func_138(iVar0))
	{
		if (func_142(&Global_1939178, 2097152))
		{
			return -1;
		}
		if (!func_142(&Global_1939178, 4096) && !func_17(0, 1, 1))
		{
			if ((func_19() == -1 && func_128()) && func_143(&Global_0, 3))
			{
				return -1;
			}
			if (func_141(iVar0, 0))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = (Global_1878407->f_105[iParam1 /*4*/])->f_3;
	if (func_34(iVar0))
	{
		if (func_138(iVar0))
		{
			return -2;
		}
	}
	Var1 = &Global_1878407->f_105[iParam1 /*4*/];
	Var1.f_1 = (Global_1878407->f_105[iParam1 /*4*/])->f_1;
	iVar3 = (Global_1878407->f_105[iParam1 /*4*/])->f_2;
	if (!&Global_1878407->f_73[iParam0])
	{
		Global_1878407->f_89[iParam0] = (func_144(Var1) + iVar3);
		Global_1878407->f_73[iParam0] = 1;
	}
	else if (func_144(Var1) >= &Global_1878407->f_89[iParam0])
	{
		return -2;
	}
	return -1;
}

int func_79(int iParam0)
{
	func_145(iParam0);
	return -2;
}

int func_80(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_146(iVar0))
	{
		return -1;
	}
	if (func_147(iVar0))
	{
		return -2;
	}
	if (func_148(iVar0, 0, PLAYER::PLAYER_ID(), 0, 0))
	{
		return -2;
	}
	return -1;
}

int func_81()
{
	if (func_149(255))
	{
		return -1;
	}
	return -2;
}

int func_82()
{
	NETWORK::_0x2C5BD9A43987AA27(1);
	return -2;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (!func_140())
	{
		return -1;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	iVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	if (!func_17(0, 1, 1))
	{
		func_141(iVar0, 0);
		func_141(iVar1, 0);
		func_141(iVar2, 0);
	}
	bVar3 = func_138(iVar0);
	bVar4 = func_138(iVar1);
	bVar5 = func_138(iVar2);
	if (!bVar3)
	{
		func_139(1, ((*Global_1835011)[iVar0 /*72*/])->f_19);
	}
	else if (!bVar4)
	{
		func_139(1, ((*Global_1835011)[iVar1 /*72*/])->f_19);
	}
	else if (!bVar5)
	{
		func_139(1, ((*Global_1835011)[iVar2 /*72*/])->f_19);
	}
	if ((bVar3 && bVar4) && bVar5)
	{
		return -2;
	}
	return -1;
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	iVar1 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1;
	if (!func_146(iVar0))
	{
		return -1;
	}
	if (!NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		UNLOCK::_UNLOCK_SET_NEW(iVar1, true);
	}
	return -2;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	if (iVar0 == 0)
	{
		return -2;
	}
	if (func_150(iVar0))
	{
		return -2;
	}
	iVar1 = func_151(iVar0);
	func_139(iVar1, func_152(iVar0));
	func_153(iVar0, 1);
	return -1;
}

int func_86(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_154(PLAYER::PLAYER_ID()))
	{
		iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	}
	else
	{
		iVar0 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1;
	}
	if (iVar0 == 0 || !func_146(iVar0))
	{
		return -2;
	}
	if (func_148(iVar0, 0, PLAYER::PLAYER_ID(), 0, 0))
	{
		return -2;
	}
	return -2;
}

int func_87(int iParam0)
{
	int iVar0;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	if (iVar0 == -1)
	{
		return -2;
	}
	if (func_155(iVar0))
	{
		return -1;
	}
	return -2;
}

int func_88(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	bVar1 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1 == true;
	if (iVar0 <= -1 || iVar0 >= Global_1878407->f_7160)
	{
		return -2;
	}
	if (func_154(Global_1275573->f_10))
	{
		if (bVar1)
		{
			if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
			{
				MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
				MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
			}
		}
		else if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
		{
			iVar2 = 13;
			while (iVar2 <= 25)
			{
				if (func_156(iVar2) != iVar0)
				{
				}
				else if (!func_157(iVar2))
				{
				}
				else
				{
					func_46(iVar2, 1);
					func_47(iVar2, -1, 0, 1, 1, 0, 0);
					func_48(iVar2);
					func_49(iVar2);
				}
				iVar2++;
			}
			(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 = &Global_1878407->f_7116[iVar0 /*2*/];
			MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
			MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
		}
	}
	else if (bVar1)
	{
		if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
		{
			iVar3 = 13;
			while (iVar3 <= 25)
			{
				if (func_156(iVar3) != iVar0)
				{
				}
				else if (!func_157(iVar3))
				{
				}
				else
				{
					func_46(iVar3, 1);
					func_47(iVar3, -1, 0, 1, 1, 0, 0);
					func_48(iVar3);
					func_49(iVar3);
				}
				iVar3++;
			}
			(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 = &Global_1878407->f_7116[iVar0 /*2*/];
			MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
			MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
		}
	}
	else if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
	{
		MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
		MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
	}
	return -2;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	iVar1 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1;
	bVar2 = func_146(iVar1);
	if (!func_146(iVar0))
	{
		if (!bVar2)
		{
			return -1;
		}
		else
		{
			iVar0 = iVar1;
			bVar2 = false;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return -2;
	}
	if (bVar2)
	{
		if (NETWORK::_0xFBE782B3165AC8EC(iVar1))
		{
			return -2;
		}
	}
	return -1;
}

int func_90()
{
	int iVar0;
	vector3 vVar1;

	if (func_158(-428390721 /* GXTEntry: "Butcher Table" */, 1, 1, 0) == 0)
	{
		return -2;
	}
	if (!func_159(4))
	{
		return -2;
	}
	if (!func_160())
	{
		if (Global_1272159->f_9)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			Global_1272159->f_9 = 0;
		}
		return -2;
	}
	iVar0 = 0;
	vVar1 = { func_161(&Global_1275573) };
	switch (vVar1.y)
	{
		case -987049424:
		case -682748:
		case 1538293636:
		case 1581179681:
		default:
			return -2;
			iVar0 = 1268434063;
		case -1992167326:
		case -1884014371:
		case -1554232707:
		case -724534761:
		case -215258135:
		case 892234183:
			iVar0 = 2082733473;
			break;
		case -1871413878:
		case 1357161730:
		case 1483778247:
			iVar0 = -1496978561;
			break;
	}
	if (!func_162(iVar0))
	{
		return -1;
	}
	func_163(0);
	return -2;
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	switch (iVar1)
	{
		case 3:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		case 5:
			iVar0 = 3;
			break;
	}
	if (!NETWORK::_0x86FD10251A7118A4(1, iVar0))
	{
		return -1;
	}
	return -2;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	switch (iVar1)
	{
		case 3:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		case 5:
			iVar0 = 3;
			break;
	}
	if (!NETWORK::_0x86FD10251A7118A4(0, iVar0))
	{
		return -1;
	}
	return -2;
}

int func_93()
{
	int iVar0;

	iVar0 = func_164(-1892463704, -666033972);
	iVar0 = (iVar0 + func_164(-1892463704, -443907314));
	if (iVar0 > 0)
	{
		return -2;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1348352077))
	{
		return -1;
	}
	return -2;
}

int func_94()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1212196772) && UNLOCK::_UNLOCK_IS_UNLOCKED(-400403560))
	{
		return -2;
	}
	return -1;
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	switch (iParam0)
	{
		case -1:
		case 15:
			return;
		default:
			break;
	}
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 2))
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 == -2)
	{
		Global_1878407->f_57[iParam0] = -15;
		Global_1878407->f_25[iParam0] = 0;
		(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3 = -15;
		(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1++;
		return;
	}
	iVar0 = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1;
	iVar1 = &Global_1878407->f_7116[iParam0 /*2*/];
	iVar2 = (Global_1878407->f_7116[iParam0 /*2*/])->f_1;
	if (iVar0 < iVar1)
	{
		return;
	}
	if (iVar0 > iVar2)
	{
		return;
	}
	iVar3 = iVar1;
	iVar4 = -1;
	while (iVar3 <= iVar2)
	{
		if (&Global_1878407->f_1805[iVar3 /*3*/] == 531432813)
		{
			iVar4 = (Global_1878407->f_1805[iVar3 /*3*/])->f_2;
			iVar5 = &Global_1878407->f_105[iVar4 /*4*/];
			if (iVar5 == iParam1)
			{
				(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1 = iVar3;
				return;
			}
		}
		iVar3++;
	}
}

Vector3 func_96()
{
	return 0f, 0f, 0f;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 160;
		default:
			break;
	}
	return 0;
}

int func_98()
{
	return -1360426452;
}

int func_99()
{
	return Global_1103537->f_21.f_12.f_1;
}

struct<2> func_100()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_29(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_29(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

int func_101(struct<2> Param0)
{
	int iVar0;

	if (&Global_1900788 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900788 - 1))
	{
		if (func_165(*((*Global_1900789)[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_102(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

bool func_103(int iParam0, int iParam1)
{
	return (func_102(iParam0) && (((*Global_1900820)[iParam0 /*2*/])->f_1 && iParam1) != 0);
}

int func_104(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	struct<30> Var0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1272170->f_438.f_1546 >= 40)
	{
		func_166();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_167();
	Var0.f_3 = iParam1;
	func_168(Var0, 0);
	return Var0;
}

void func_106(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_30(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_169(Param0) && !func_170(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_171(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_172(Param0) == 3)
		{
			func_173(1, -1706799532);
		}
		else if (func_172(Param0) == 4)
		{
			func_173(0, -1706799532);
		}
	}
	if (func_172(Param0) == 3 || (func_172(Param0) == 1 && STATS::_0x01F4D242765C6B24(func_171(Param0))))
	{
		if (iParam3 != -1)
		{
			func_174(Param0, iParam3, iParam4);
		}
		else
		{
			func_174(Param0, 2, iParam4);
		}
	}
	func_175(Param0, 0);
	if (func_165(func_29(0), Param0))
	{
		func_176(1);
		func_177(0);
		func_178(0);
		func_179(1);
	}
	func_180(Param0);
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_31(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_107(int iParam0)
{
	Global_1132968->f_5641[iParam0 /*3*/] = UNLOCK::_UNLOCK_IS_NEW(((*Global_1835011)[iParam0 /*72*/])->f_3);
	(Global_1132968->f_5641[iParam0 /*3*/])->f_2 = UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*72*/])->f_3);
	(Global_1132968->f_5641[iParam0 /*3*/])->f_1 = UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*72*/])->f_3);
}

struct<2> func_108(int iParam0)
{
	if (!func_34(iParam0))
	{
		return func_181();
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_1;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_4(32768))
	{
		return 0;
	}
	iVar0 = func_19();
	if (func_182(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 512) && !func_182(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 1024))
	{
		if (func_183())
		{
			return 0;
		}
	}
	if (((*Global_1835011)[iParam0 /*72*/])->f_67)
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*72*/])->f_28))
	{
		bVar3 = ((*Global_1835011)[iParam0 /*72*/])->f_66;
		if (func_184(iParam0, iVar0))
		{
			vVar4 = { func_185(iParam0) };
			((*Global_1835011)[iParam0 /*72*/])->f_65 = VOLUME::_CREATE_VOLUME_SPHERE(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1835011)[iParam0 /*72*/])->f_65))
			{
				((*Global_1835011)[iParam0 /*72*/])->f_28 = MAP::_0xA6EF0C54A3443E70(1673015813, ((*Global_1835011)[iParam0 /*72*/])->f_65);
			}
		}
		else if (bVar3)
		{
			((*Global_1835011)[iParam0 /*72*/])->f_28 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_186(iParam0));
		}
		else
		{
			((*Global_1835011)[iParam0 /*72*/])->f_28 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_187(iParam0));
		}
		((*Global_1835011)[iParam0 /*72*/])->f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_188(iParam2, 4194304);
			}
			else
			{
				func_111(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(((*Global_1835011)[iParam0 /*72*/])->f_28, 70, ((*Global_1835011)[iParam0 /*72*/])->f_3);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*72*/])->f_28))
	{
		return 0;
	}
	func_189(iParam0);
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(((*Global_1835011)[iParam0 /*72*/])->f_28, ((*Global_1835011)[iParam0 /*72*/])->f_27, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(((*Global_1835011)[iParam0 /*72*/])->f_28, &(((*Global_1835011)[iParam0 /*72*/])->f_42));
		}
		if (!func_182(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 1024))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*72*/])->f_28, 580546400);
			func_190(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 1024);
		}
		if (func_182(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 524288))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*72*/])->f_28, -401963276);
		}
		if (func_182(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 1048576))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*72*/])->f_28, -1878373110);
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*72*/])->f_28, 231194138);
		}
	}
	return 1;
}

void func_110(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (&Global_1900788 <= 0)
	{
		return;
	}
	if (!func_30(Param0))
	{
		return;
	}
	if (func_170(Param0))
	{
		func_106(Param0, 0, -1, 0);
	}
	iVar0 = func_101(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900788 > 1)
	{
		*((*Global_1900789)[iVar1 /*2*/]) = { *((*Global_1900789)[(&Global_1900788 - 1) /*2*/]) };
		*((*Global_1900820)[iVar1 /*2*/]) = { *((*Global_1900820)[(&Global_1900788 - 1) /*2*/]) };
		func_191((*Global_1900789)[(&Global_1900788 - 1) /*2*/]);
		*((*Global_1900820)[(&Global_1900788 - 1) /*2*/]) = { Var2 };
	}
	else
	{
		func_191((*Global_1900789)[iVar1 /*2*/]);
		*((*Global_1900820)[iVar1 /*2*/]) = { Var2 };
	}
	Global_1900788 = (&Global_1900788 - 1);
	if (&Global_1900788 < 0)
	{
		Global_1900788 = 0;
	}
}

void func_111(int iParam0, int iParam1)
{
	if (!func_102(iParam0))
	{
		return;
	}
	((*Global_1900820)[iParam0 /*2*/])->f_1 = (((*Global_1900820)[iParam0 /*2*/])->f_1 - (((*Global_1900820)[iParam0 /*2*/])->f_1 && iParam1));
}

bool func_112(int iParam0, int iParam1)
{
	if (!func_33(iParam0))
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam1))
	{
		return false;
	}
	return MISC::_0x8F4F050054005C27(&(((*Global_1055966)[iParam1 /*436*/])->f_15.f_18), iParam0);
}

int func_113(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return -1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	return &(((*Global_1055966)[iParam1 /*436*/])->f_39.f_1[iParam0 /*16*/]);
}

int func_114(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		default:
			break;
	}
	return 0;
}

void func_116(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (&Global_1878407->f_7161.f_62.f_8[iParam0] == iParam1)
	{
		return;
	}
	Global_1878407->f_7161.f_62.f_8[iParam0] = iParam1;
}

void func_117(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (&Global_1878407->f_7161.f_62.f_10[iParam0] == iParam1)
	{
		return;
	}
	Global_1878407->f_7161.f_62.f_10[iParam0] = iParam1;
}

void func_118(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_62.f_12[iParam0]), iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(Global_1878407->f_7161.f_62.f_12[iParam0], iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1878407->f_7161.f_62.f_12[iParam0], iParam1);
	}
}

int func_119(int iParam0)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1878407->f_7161.f_62.f_8[iParam0]);
}

int func_120(int iParam0)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1878407->f_7161.f_62.f_10[iParam0]);
}

bool func_121(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	bVar0 = MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_62.f_12[iParam0]), iParam1);
	return bVar0;
}

int func_122(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_123(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_124(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_125(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_126(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_127(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_192(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_128()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

int func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_123(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_122(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_127(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_126(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_125(iParam0);
	if (iVar5 < 1 || iVar5 > func_193(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_130()
{
	return &Global_1902689;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_127(*iParam0);
	iVar1 = func_126(*iParam0);
	iVar2 = func_125(*iParam0);
	iVar3 = func_122(*iParam0);
	iVar4 = func_123(*iParam0);
	iVar5 = func_124(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_193(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_193(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_194(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_132(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_129(iParam1) || !func_129(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_133(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_134(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_135(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

bool func_136(int iParam0, bool bParam1)
{
	return func_132(func_130(), iParam0, bParam1);
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_138(int iParam0)
{
	int iVar0;

	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_104(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return NETWORK::_0xFBE782B3165AC8EC(iVar0);
}

void func_139(int iParam0, vector3 vParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	if (func_195(*(Global_17172.f_2935[iParam0 /*3*/]), vParam1))
	{
		return;
	}
	*(Global_17172.f_2935[iParam0 /*3*/]) = { vParam1 };
}

int func_140()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (NETWORK::_0xBAFFDE5F953720D9())
	{
		return 0;
	}
	if (!func_196())
	{
		return 0;
	}
	if (!func_197())
	{
		return 0;
	}
	if (!func_198())
	{
		return 0;
	}
	if (func_199())
	{
		return 0;
	}
	return 1;
}

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 13 && iParam0 <= 25)
	{
		if (((*Global_1835011)[iParam0 /*72*/])->f_51 == 0)
		{
			return 0;
		}
	}
	if (!bParam1)
	{
		if (func_138(iParam0))
		{
			return 1;
		}
	}
	if (func_200(iParam0) > 0)
	{
		iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_200(iParam0)));
		if (iVar0 < 60)
		{
			return 0;
		}
		else
		{
			func_201(iParam0, 0);
		}
	}
	if ((Global_1132968->f_5641[iParam0 /*3*/])->f_1 && (Global_1132968->f_5641[iParam0 /*3*/])->f_2)
	{
		if (func_202(((*Global_1835011)[iParam0 /*72*/])->f_32))
		{
			((*Global_1835011)[iParam0 /*72*/])->f_32 = -1;
		}
		if (func_35(iParam0))
		{
			if (!func_203(iParam0))
			{
				if (func_204(iParam0) == 0)
				{
					func_205(iParam0, NETWORK::GET_CLOUD_TIME_AS_INT());
					return 0;
				}
				if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_204(iParam0))) > 30)
				{
					func_46(iParam0, 1);
					func_47(iParam0, -1, 0, 1, 1, 0, 0);
					func_205(iParam0, 0);
					func_201(iParam0, NETWORK::GET_CLOUD_TIME_AS_INT());
				}
				return 0;
			}
		}
		func_205(iParam0, 0);
		func_201(iParam0, 0);
		return 1;
	}
	func_107(iParam0);
	iVar1 = func_104(0, iParam0);
	if (iVar1 == 0)
	{
		return 0;
	}
	if (!(Global_1132968->f_5641[iParam0 /*3*/])->f_1 || !(Global_1132968->f_5641[iParam0 /*3*/])->f_2)
	{
		if (((*Global_1835011)[iParam0 /*72*/])->f_32 == -1)
		{
			((*Global_1835011)[iParam0 /*72*/])->f_32 = func_105(iVar1, 0);
		}
		switch (func_206(((*Global_1835011)[iParam0 /*72*/])->f_32, 0))
		{
			case 1:
				return 0;
			case 2:
				if (!(Global_1132968->f_5641[iParam0 /*3*/])->f_2)
				{
					((*Global_1835011)[iParam0 /*72*/])->f_32 = -1;
				}
				break;
			case 3:
				((*Global_1835011)[iParam0 /*72*/])->f_32 = -1;
				break;
		}
	}
	return 0;
}

bool func_142(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_143(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_144(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_145(int iParam0)
{
	int iVar0;

	iVar0 = func_207(iParam0);
	if (!func_146(iVar0))
	{
		return;
	}
	else if (func_147(iVar0))
	{
		return;
	}
	if (-2042919232 == iVar0)
	{
		return;
	}
	if (!func_148(iVar0, 0, 255, 0, 0))
	{
		return;
	}
	if (iVar0 == 173210050)
	{
		func_208(27, 1);
	}
}

bool func_146(int iParam0)
{
	return iParam0 != 0;
}

int func_147(int iParam0)
{
	int iVar0;

	if (!func_146(iParam0))
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_1991)
	{
		if ((Global_1272170->f_1991.f_1[iVar0 /*24*/])->f_4 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_148(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_209(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_149(int iParam0)
{
	if (Global_1275207->f_1 >= 3)
	{
		return 1;
	}
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (iParam0 == 255)
	{
		return 1;
	}
	if (func_210(29, iParam0))
	{
		return 1;
	}
	if (func_211(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	iVar0 = func_115(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		iVar1 = func_114(1, iParam0);
		if (iVar1 == 0)
		{
			return 0;
		}
		if (NETWORK::_0xFBE782B3165AC8EC(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		default:
			break;
	}
	return 0;
}

Vector3 func_152(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return func_96();
			return -870.1846f, -1276.62f, 42.2367f;
		case 2:
			return -870.1846f, -1276.62f, 42.2367f;
		case 3:
			return 1352.95f, -1306.359f, 75.9113f;
		case 4:
			return 0f, 0f, 0f;
		case 5:
			return 0f, 0f, 0f;
		case 6:
			return 1440.138f, 369.3305f, 88.016f;
		}

void func_153(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (func_212(iParam0))
	{
		return;
	}
	if (func_213(iParam0))
	{
		return;
	}
	iVar0 = func_115(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = func_114(3, iParam0);
	if (iVar1 != 0)
	{
		if (func_214(iVar1) || func_215(iVar1))
		{
			return;
		}
	}
	bVar2 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar0);
	bVar3 = UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0);
	if (func_202(func_216(iParam0)))
	{
		switch (func_206(func_216(iParam0), 0))
		{
			case 1:
			default:
				return;
				return;
			case 2:
				if (!bVar2)
				{
					func_217(iParam0, -1);
					return;
				}
			}
			if (!bVar3 || !bVar2)
			{
				iVar4 = func_114(0, iParam0);
				if (iVar4 == 0)
				{
					return;
				}
				if (NETWORK::_0xFBE782B3165AC8EC(iVar4))
				{
					return;
				}
				if (!func_202(func_216(iParam0)))
				{
					func_217(iParam0, func_105(iVar4, 0));
				}
				return;
			}
			func_217(iParam0, -1);
			func_218(iParam0, 1);
		}

int func_154(int iParam0)
{
	int iVar0;

	iVar0 = func_219(iParam0);
	if (iVar0 < 0)
	{
		return 1;
	}
	return func_220(Global_1132968->f_11.f_3216.f_1091[iVar0 /*4*/], 1);
}

bool func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 15)
	{
		return false;
	}
	if (func_138(iParam0))
	{
		if (!func_221(iParam0, &iVar0))
		{
			return false;
		}
	}
	else if (!func_222(iParam0, &iVar0))
	{
		return false;
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::GET_PLAYER_INDEX());
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		if (_NAMESPACE26::_0x149A2751AB66AC02(iVar1) > 1)
		{
			iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
			{
				return true;
			}
			iVar0 = ((*Global_1055966)[iVar2 /*436*/])->f_15.f_21;
		}
	}
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar3 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - iVar0));
	iVar4 = func_223(iParam0);
	if (func_138(iParam0))
	{
		iVar4 = func_224(iParam0);
	}
	return iVar3 < iVar4;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 3;
		case 8:
			return 4;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 6;
		case 14:
			return 6;
		case 15:
			return 6;
		case 16:
			return 7;
		case 17:
			return 7;
		case 18:
			return 8;
		case 19:
			return 8;
		case 20:
			return 9;
		case 21:
			return 7;
		case 22:
			return 7;
		case 23:
			return 8;
		case 24:
			return 8;
		case 25:
			return 9;
		default:
			break;
	}
	return -1;
}

int func_157(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_170(((*Global_1835011)[iParam0 /*72*/])->f_1);
}

int func_158(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_225(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_226(bParam1), iParam0, iParam3);
}

int func_159(int iParam0)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	return (Global_1272028->f_94[iParam0 /*5*/])->f_4;
}

int func_160()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1324907014))
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(1324907014))
	{
		return 1;
	}
	return 0;
}

Vector3 func_161(int iParam0)
{
	if (iParam0 == 255)
	{
		return ((*Global_1128435)[func_227() /*83*/])->f_38;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38;
}

int func_162(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	struct<4> Var33;
	var uVar37;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_4 = 8;
	Var2.f_13 = 4;
	Var2.f_13.f_5 = 4;
	Var2.f_23 = 1;
	Var2.f_26 = 2;
	Var2.f_26.f_1 = -1;
	Var2.f_26.f_1.f_1 = -1;
	Var2.f_29 = joaat("none");
	Var2.f_29.f_1 = joaat("none");
	Var33.f_1 = -1;
	if (!func_228())
	{
		return 0;
	}
	if (!func_229(&Var2, iParam0))
	{
		return 0;
	}
	if (!func_230(Var2.f_2))
	{
		return 0;
	}
	if (Var2.f_2.f_1 == 0)
	{
		return 0;
	}
	uVar0 = func_231(2132950130);
	iVar1 = func_232(iParam0);
	if (func_233(&(Var2.f_23), 1859868723))
	{
		func_234(&uVar37, 2);
	}
	if (func_233(&(Var2.f_23), 522505504))
	{
		func_234(&uVar37, 4);
	}
	func_235();
	func_236(iVar1, uVar0, uVar37, Var2.f_2, Var2, Var33, 0);
	return 1;
}

void func_163(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1885644->f_1682)
		{
			Global_1885644->f_1682 = 1;
		}
	}
	else if (Global_1885644->f_1682)
	{
		Global_1885644->f_1682 = 0;
	}
}

int func_164(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_237(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_165(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_166()
{
}

var func_167()
{
	Global_1272170->f_438.f_1552++;
	if (Global_1272170->f_438.f_1552 >= 2147483646)
	{
		Global_1272170->f_438.f_1552 = 0;
	}
	return Global_1272170->f_438.f_1552;
}

void func_168(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*(Global_1272170->f_438.f_44[func_238() /*30*/]) = { Param0 };
			func_239((func_238() + 1 % 40));
			Global_1272170->f_438.f_1546++;
			break;
		case 1:
			*(Global_1272170->f_438.f_1245[func_240() /*30*/]) = { Param0 };
			func_241((func_240() + 1 % 10));
			Global_1272170->f_438.f_1547++;
			break;
	}
}

bool func_169(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_172(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_170(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_172(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

int func_171(struct<2> Param0)
{
	return func_242(Param0);
}

int func_172(struct<2> Param0)
{
	int iVar0;

	if (!func_30(Param0))
	{
		return -1;
	}
	iVar0 = func_243(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_173(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_196())
	{
		return 0;
	}
	if (!func_244())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_245(&Global_0, 8);
	}
	func_245(&Global_0, 1);
	return 1;
}

void func_174(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_246(func_31(Param0));
	iVar1 = func_171(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_19() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_247(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_175(struct<2> Param0, int iParam2)
{
	if (!func_30(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_248(Param0);
	}
	else
	{
		func_249(Param0, iParam2);
	}
	func_250();
}

void func_176(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_251(Global_1939178, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_252(Global_1939178, 8388608);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_177(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_253(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_254(cVar2);
			}
			else
			{
				func_255();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_178(bool bParam0)
{
	if (!bParam0 && func_256(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_179(int iParam0)
{
	Global_1900718 = (Global_1900718 || iParam0);
}

int func_180(struct<2> Param0)
{
	return func_258(func_257(Param0));
}

struct<2> func_181()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_182(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_183()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_184(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_185(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*72*/])->f_19;
}

Vector3 func_186(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*72*/])->f_19;
}

Vector3 func_187(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*72*/])->f_19;
}

void func_188(int iParam0, int iParam1)
{
	if (!func_102(iParam0))
	{
		return;
	}
	((*Global_1900820)[iParam0 /*2*/])->f_1 = (((*Global_1900820)[iParam0 /*2*/])->f_1 || iParam1);
}

void func_189(int iParam0)
{
	if (func_19() == -1)
	{
		return;
	}
	if (((*Global_1835011)[iParam0 /*72*/])->f_3 != 0 && UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*72*/])->f_3))
	{
		UNLOCK::_UNLOCK_SET_NEW(((*Global_1835011)[iParam0 /*72*/])->f_3, false);
	}
	func_107(iParam0);
}

void func_190(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_191(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_192(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_193(int iParam0, int iParam1)
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

void func_194(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_259(iParam0, iParam6);
	func_260(iParam0, iParam5);
	func_261(iParam0, iParam4);
	func_135(iParam0, iParam3);
	func_134(iParam0, iParam2);
	func_133(iParam0, iParam1);
}

bool func_195(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_196()
{
	return !Global_1572887->f_9;
}

int func_197()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_4;
}

int func_198()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_5;
}

int func_199()
{
	if (Global_1572887->f_342.f_3 > 0)
	{
		return 1;
	}
	if (Global_1572887->f_342.f_4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_70;
}

void func_201(int iParam0, int iParam1)
{
	if (!func_34(iParam0))
	{
		return;
	}
	if (((*Global_1835011)[iParam0 /*72*/])->f_70 == iParam1)
	{
		return;
	}
	((*Global_1835011)[iParam0 /*72*/])->f_70 = iParam1;
}

int func_202(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return 0;
	}
	return 1;
}

bool func_203(int iParam0)
{
	return VOLUME::_0xF6A8A652A6B186CD(func_45(iParam0));
}

int func_204(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_69;
}

void func_205(int iParam0, int iParam1)
{
	if (!func_34(iParam0))
	{
		return;
	}
	if (((*Global_1835011)[iParam0 /*72*/])->f_69 == iParam1)
	{
		return;
	}
	((*Global_1835011)[iParam0 /*72*/])->f_69 = iParam1;
}

int func_206(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1272170->f_438.f_44[iVar0 /*30*/] == -1)
		{
		}
		else if (&Global_1272170->f_438.f_44[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return (Global_1272170->f_438.f_44[iVar0 /*30*/])->f_1;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_1272170->f_438.f_1245[iVar0 /*30*/] == -1)
		{
		}
		else if (&Global_1272170->f_438.f_1245[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return (Global_1272170->f_438.f_1245[iVar0 /*30*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;

	iVar0 = func_262(iParam0);
	switch (iVar0)
	{
		case 177326598:
		default:
			return 0;
			return -496459706;
		case -765810527:
			return -1052738286;
		case -736232052:
			return -2042919232;
		case 34802860:
			return 173210050;
		}

int func_208(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	if (!func_263(iParam0, &uVar0, &uVar1))
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(uVar0, uVar1, iParam1);
	return 1;
}

int func_209(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_264(iParam2, -372840566);
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
	func_265(uParam1, iParam0, Var3);
	return 1;
}

bool func_210(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1275140[iParam1 /*2*/] && iParam0) != 0;
}

int func_211(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1275113->f_2), iParam0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(Global_1275113->f_23[iVar0 /*3*/], iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_212(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1272028[iParam0] == iParam0;
}

bool func_213(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return &Global_1272028->f_8[iParam0] == iParam0;
}

int func_214(int iParam0)
{
	int iVar0;

	if (!func_146(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_1991)
	{
		if ((Global_1272170->f_1991.f_1[iVar0 /*24*/])->f_4 == iParam0 && (Global_1272170->f_1991.f_1[iVar0 /*24*/])->f_5 == 0)
		{
			return NETWORK::_0xE10F2D7715ABABEC(Global_1272170->f_1991.f_1[iVar0 /*24*/]);
		}
		iVar0++;
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1272170->f_438.f_44[iVar0 /*30*/] == -1)
		{
		}
		else if ((Global_1272170->f_438.f_44[iVar0 /*30*/])->f_4 != iParam0)
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return -1;
	}
	return Global_1272159[iParam0];
}

void func_217(int iParam0, int iParam1)
{
	if (!func_50(iParam0))
	{
		return;
	}
	(*Global_1272159)[iParam0] = iParam1;
}

void func_218(int iParam0, bool bParam1)
{
	if (!func_50(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (&Global_1272028->f_8[iParam0] == 0)
		{
			Global_1272028->f_8[iParam0] = iParam0;
		}
	}
	else if (&Global_1272028->f_8[iParam0] != 0)
	{
		Global_1272028->f_8[iParam0] = 0;
	}
}

int func_219(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return ((*Global_1139395)[iParam0 /*34*/])->f_8.f_1;
}

bool func_220(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

int func_221(int iParam0, int* iParam1)
{
	struct<2> Var0;

	*iParam1 = -1;
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			Var0 = { func_266(-697712761) };
			STATS::STAT_ID_GET_INT(&Var0, iParam1);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_222(int iParam0, int* iParam1)
{
	struct<2> Var0;

	*iParam1 = -1;
	switch (iParam0)
	{
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			Var0 = { func_266(1270054266) };
			STATS::STAT_ID_GET_INT(&Var0, iParam1);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 == 25)
	{
		return Global_1901929->f_44.f_26 * 2;
	}
	return Global_1901929->f_44.f_26;
}

int func_224(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1901929->f_44.f_27;
}

bool func_225(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_226(bool bParam0)
{
	if (func_19() == -1)
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

int func_227()
{
	return Global_1099294->f_339;
}

int func_228()
{
	switch (func_267())
	{
		case 0:
			Global_1114828->f_8005.f_1 = DATAFILE::_0xD97D8D905F1562F2(-911959609);
			Global_1114828->f_8005.f_2 = DATAFILE::_0xD97D8D905F1562F2(-245132713);
			func_268(1);
			return 0;
		case 1:
			if (!DATAFILE::_0x603AC35FD4602C76(func_269()))
			{
				return 0;
			}
			if (!DATAFILE::_0x603AC35FD4602C76(func_270()))
			{
				return 0;
			}
			func_271(func_269());
			func_272(func_270());
			func_268(2);
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_229(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	var uVar14[205];
	var uVar220;
	var uVar221;
	int iVar222;
	var uVar223;
	int iVar224;
	struct<30> Var225;
	struct<30> Var256;
	struct<31> Var287;
	var uVar381;
	struct<5> Var385;
	struct<2> Var390;
	struct<2> Var395;
	var uVar397;
	struct<2> Var399;

	Var225 = -1;
	Var225.f_1 = -1;
	Var225.f_2 = -1;
	Var225.f_4 = 8;
	Var225.f_13 = 4;
	Var225.f_13.f_5 = 4;
	Var225.f_23 = 1;
	Var225.f_26 = 2;
	Var225.f_26.f_1 = -1;
	Var225.f_26.f_1.f_1 = -1;
	Var225.f_29 = joaat("none");
	Var225.f_29.f_1 = joaat("none");
	Var256 = -1;
	Var256.f_1 = -1;
	Var256.f_2 = -1;
	Var256.f_4 = 8;
	Var256.f_13 = 4;
	Var256.f_13.f_5 = 4;
	Var256.f_23 = 1;
	Var256.f_26 = 2;
	Var256.f_26.f_1 = -1;
	Var256.f_26.f_1.f_1 = -1;
	Var256.f_29 = joaat("none");
	Var256.f_29.f_1 = joaat("none");
	Var287 = 3;
	Var287.f_1 = -1;
	Var287.f_1.f_1 = -1;
	Var287.f_1.f_2 = -1;
	Var287.f_1.f_4 = 8;
	Var287.f_1.f_13 = 4;
	Var287.f_1.f_13.f_5 = 4;
	Var287.f_1.f_23 = 1;
	Var287.f_1.f_26 = 2;
	Var287.f_1.f_26.f_1 = -1;
	Var287.f_1.f_26.f_1.f_1 = -1;
	Var287.f_1.f_29 = joaat("none");
	Var287.f_1.f_29.f_1 = joaat("none");
	Var287.f_1.f_31 = -1;
	Var287.f_1.f_31.f_1 = -1;
	Var287.f_1.f_31.f_2 = -1;
	Var287.f_1.f_31.f_4 = 8;
	Var287.f_1.f_31.f_13 = 4;
	Var287.f_1.f_31.f_13.f_5 = 4;
	Var287.f_1.f_31.f_23 = 1;
	Var287.f_1.f_31.f_26 = 2;
	Var287.f_1.f_31.f_26.f_1 = -1;
	Var287.f_1.f_31.f_26.f_1.f_1 = -1;
	Var287.f_1.f_31.f_29 = joaat("none");
	Var287.f_1.f_31.f_29.f_1 = joaat("none");
	Var287.f_1.f_31.f_31 = -1;
	Var287.f_1.f_31.f_31.f_1 = -1;
	Var287.f_1.f_31.f_31.f_2 = -1;
	Var287.f_1.f_31.f_31.f_4 = 8;
	Var287.f_1.f_31.f_31.f_13 = 4;
	Var287.f_1.f_31.f_31.f_13.f_5 = 4;
	Var287.f_1.f_31.f_31.f_23 = 1;
	Var287.f_1.f_31.f_31.f_26 = 2;
	Var287.f_1.f_31.f_31.f_26.f_1 = -1;
	Var287.f_1.f_31.f_31.f_26.f_1.f_1 = -1;
	Var287.f_1.f_31.f_31.f_29 = joaat("none");
	Var287.f_1.f_31.f_31.f_29.f_1 = joaat("none");
	uVar381 = 3;
	Var395 = -1;
	uVar397 = -1;
	Var399 = -1;
	Var399.f_1 = -1;
	iVar8 = PLAYER::PLAYER_ID();
	iVar7 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar8);
	iVar2 = func_273(iVar8);
	iVar4 = func_232(-1667613409);
	vVar9 = { Global_35 };
	bVar12 = false;
	iVar224 = 536877168;
	iVar6 = 0;
	func_274(&uVar14, 205, 1);
	if (!func_275(&Var385, func_269()))
	{
		return 0;
	}
	if (!func_276(Var385, &(Var385.f_1), -1782208300, 0, 0, 1))
	{
		return 0;
	}
	if (!func_276(Var385, &(Var385.f_1), 466723622, 0, 0, 1))
	{
		return 0;
	}
	if (!func_276(Var385, &(Var385.f_1), 1635370648, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_276(Var385, &(Var385.f_1), 56746299, 0, 0, 1))
	{
		return 0;
	}
	if (!func_276(Var385, &(Var385.f_1), 1915534289, iVar6, 0, 1))
	{
		return 0;
	}
	uVar220 = Var385.f_1;
	if (!func_277(&Var390, func_270()))
	{
		return 0;
	}
	uVar221 = Var390.f_1;
	iVar5 = func_278(Var385, 1141833051);
	iVar0 = 0;
	while (iVar0 <= 204)
	{
		MISC::_COPY_MEMORY(&Var395, &uVar397, 2);
		MISC::_COPY_MEMORY(&Var225, &Var256, 31);
		Var385.f_1 = uVar220;
		Var390.f_1 = uVar221;
		Var399 = { func_181() };
		bVar12 = false;
		bVar13 = false;
		iVar3 = &uVar14[iVar0];
		if (iVar3 >= iVar5)
		{
		}
		else if (!func_279(&Var385, iVar3, &Var395))
		{
		}
		else
		{
			Var399 = { func_280(Var395.f_1) };
			if (!func_281(Var395, 1))
			{
			}
			else
			{
				iVar1 = 0;
				while (iVar1 <= (3 - 1))
				{
					iVar222 = iVar1;
					if (func_283(Var399, vVar9, func_282(iVar222)))
					{
						bVar12 = true;
					}
					else
					{
						iVar1++;
					}
				}
				if (!bVar12)
				{
				}
				else if ((Var287[iVar222 /*31*/])->f_2.f_1 != 0)
				{
				}
				else
				{
					bVar13 = iVar222 == false;
					if (!func_284(&Var390, &Var395, &Var225, 0))
					{
					}
					else if (func_285(&Var225, iVar3, &uVar381, iVar7, iVar2, iVar4, &uVar223, iVar224, -1))
					{
					}
					else
					{
						if (bVar13)
						{
							MISC::_COPY_MEMORY(uParam0, &Var225, 31);
							return 1;
						}
						MISC::_COPY_MEMORY(Var287[iVar222 /*31*/], &Var225, 31);
					}
				}
			}
		}
		iVar0++;
	}
	MISC::_COPY_MEMORY(&Var225, &Var256, 31);
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if ((Var287[iVar0 /*31*/])->f_2.f_1 == 0)
		{
		}
		else
		{
			MISC::_COPY_MEMORY(&Var225, Var287[iVar0 /*31*/], 31);
		}
		else
		{
			iVar0++;
		}
	}
	if (Var225.f_2.f_1 == 0)
	{
		return 0;
	}
	MISC::_COPY_MEMORY(uParam0, &Var225, 31);
	return 1;
}

bool func_230(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

int func_231(int iParam0)
{
	return func_286(13, iParam0);
}

int func_232(int iParam0)
{
	return func_286(14, iParam0);
}

bool func_233(var uParam0, int iParam1)
{
	return func_288(uParam0, func_287(iParam1, 1), 1);
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_235()
{
	DATAFILE::_DATAFILE_UNLOAD(func_269());
	DATAFILE::_DATAFILE_UNLOAD(func_270());
	func_268(0);
	func_289(0);
	func_290(0);
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	struct<28> Var0;
	var uVar31;
	vector3 vVar32;
	var uVar35;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_291(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = uParam1;
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 3;
	Var0.f_9 = uParam3;
	Var0.f_14 = uParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	MISC::_COPY_MEMORY(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_292(iParam0) };
	uVar35 = func_293(iParam0);
	func_294(&(Var0.f_19), Var0.f_11, vVar32, uVar35);
	func_295(&Var0, uVar31);
}

struct<2> func_237(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_238()
{
	if (Global_1272170->f_438.f_1548 >= 40 || Global_1272170->f_438.f_1548 < 0)
	{
		Global_1272170->f_438.f_1548 = 0;
	}
	return Global_1272170->f_438.f_1548;
}

void func_239(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1272170->f_438.f_1548 = iParam0;
}

int func_240()
{
	if (Global_1272170->f_438.f_1549 >= 10 || Global_1272170->f_438.f_1549 < 0)
	{
		Global_1272170->f_438.f_1549 = 0;
	}
	return Global_1272170->f_438.f_1549;
}

void func_241(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1272170->f_438.f_1549 = iParam0;
}

int func_242(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_296(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_243(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1070356->f_17817 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_296(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_296(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_244()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_245(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_246(int iParam0)
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

void func_247(struct<2> Param0, var uParam2)
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
	switch (func_31(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_298(func_297(Param0));
			iVar5 = func_299(iVar4);
			if (!func_300(iVar5, 0))
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

int func_248(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_243(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_301(iVar0);
}

int func_249(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1070356->f_17817 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_296(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1070356->f_17817 == 0)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1070356->f_17817)
	{
		func_296(*(Global_1070356->f_17817.f_1[iVar9 /*3*/]), &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_302(iVar9);
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1070356->f_17817 < 31)
	{
		iVar9 = Global_1070356->f_17817;
		*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		if (Global_1070356->f_17817 > 32)
		{
			Global_1070356->f_17817 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_250()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (func_296(*(Global_1070356->f_17817.f_1[iVar0 /*3*/]), &vVar1))
		{
		}
		iVar0++;
	}
}

void func_251(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_253(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559 /* GXTEntry: "Arson" */;
		case 1:
			return 195938434 /* GXTEntry: "Assault" */;
		case 2:
			return 416962030 /* GXTEntry: "Animal Cruelty" */;
		case 3:
			return 1314857970 /* GXTEntry: "Disturbing the Peace" */;
		case 4:
			return -999071359 /* GXTEntry: "Animal Cruelty" */;
		case 5:
			return -683250308 /* GXTEntry: "Assault" */;
		case 6:
			return -857617219 /* GXTEntry: "Animal Cruelty" */;
		case 7:
			return 1780145725 /* GXTEntry: "Bank Robbery" */;
		case 8:
			return -1521715232 /* GXTEntry: "Trespassing" */;
		case 9:
			return -1560342203 /* GXTEntry: "Cheating" */;
		case 10:
			return 1343354387 /* GXTEntry: "Disturbing the Peace" */;
		case 11:
			return 1052408375 /* GXTEntry: "Disturbing the Peace" */;
		case 12:
			return -1759599185 /* GXTEntry: "Grave Robbery" */;
		case 13:
			return joaat("crime_hassle");
		case 14:
			return -16106300 /* GXTEntry: "Unarmed Assault" */;
		case 15:
			return 105387183 /* GXTEntry: "Unarmed Assault" */;
		case 16:
			return -2095449173 /* GXTEntry: "Intimidation" */;
		case 17:
			return -2097683294 /* GXTEntry: "Horse Theft" */;
		case 18:
			return 1805131596 /* GXTEntry: "Vehicle Theft" */;
		case 19:
			return 314693001 /* GXTEntry: "Jail Break" */;
		case 20:
			return -1728509733 /* GXTEntry: "Kidnapping" */;
		case 21:
			return -42817558 /* GXTEntry: "Kidnapping" */;
		case 22:
			return 1458462042 /* GXTEntry: "Assault" */;
		case 23:
			return 481893872 /* GXTEntry: "Disturbing the Peace" */;
		case 24:
			return 1714017012 /* GXTEntry: "Disturbing the Peace" */;
		case 25:
			return 1437412331 /* GXTEntry: "Looting" */;
		case 26:
			return -493957506 /* GXTEntry: "Murder" */;
		case 27:
			return 1224055398 /* GXTEntry: "Animal Cruelty" */;
		case 28:
			return -953803399 /* GXTEntry: "Animal Cruelty" */;
		case 29:
			return 2006449383 /* GXTEntry: "Murder" */;
		case 30:
			return -1788230330 /* GXTEntry: "Animal Cruelty" */;
		case 31:
			return 1396375613 /* GXTEntry: "Vandalism" */;
		case 32:
			return joaat("crime_resist_arrest");
		case 33:
			return -1547772340 /* GXTEntry: "Robbery" */;
		case 34:
			return -59535775 /* GXTEntry: "Robbery" */;
		case 35:
			return -1701536647 /* GXTEntry: "Theft" */;
		case 36:
			return 1923998736 /* GXTEntry: "Theft" */;
		case 37:
			return -1103472584 /* GXTEntry: "Horse Theft" */;
		case 38:
			return -2051405571 /* GXTEntry: "Rustling" */;
		case 39:
			return 1135209633 /* GXTEntry: "Vehicle Theft" */;
		case 40:
			return -1810065318 /* GXTEntry: "Disturbing the Peace" */;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442 /* GXTEntry: "Train Robbery" */;
		case 43:
			return 1171995096 /* GXTEntry: "Murder" */;
		case 44:
			return -267442581 /* GXTEntry: "Murder" */;
		case 45:
			return -1361146315 /* GXTEntry: "Trespassing" */;
		case 46:
			return 1352191066 /* GXTEntry: "Unarmed Assault" */;
		case 47:
			return -2130852007 /* GXTEntry: "Vandalism" */;
		case 48:
			return -102241052 /* GXTEntry: "Vandalism" */;
		case 49:
			return 1420320220 /* GXTEntry: "Vandalism" */;
		case 50:
			return -1715130379 /* GXTEntry: "Felony" */;
		case 51:
			return -661550833 /* GXTEntry: "Misdemeanor" */;
		case 52:
			return -1358475411 /* GXTEntry: "Accomplice" */;
		case 53:
			return -1848598303;
		case 54:
			return -173287735 /* GXTEntry: "Murder" */;
		case 55:
			return -715363719 /* GXTEntry: "Animal Cruelty" */;
		case 56:
			return -1117123933 /* GXTEntry: "Disturbing the Peace" */;
		case 57:
			return 1972833301 /* GXTEntry: "Murder" */;
		case 58:
			return 0;
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

void func_254(char[12] cParam0)
{
	Global_1938085->f_75.f_67 = { cParam0 };
}

void func_255()
{
	StringCopy(&(Global_1938085->f_75.f_67), "", 24);
}

bool func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_303(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_304(iVar1))
	{
		if (Global_1070356->f_17915.f_24 && !func_305(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070356->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2);
}

int func_257(struct<2> Param0)
{
	int iVar0;

	if (!func_30(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_165(*(Global_1900718->f_1[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_258(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 1)
	{
		Global_1900718->f_66 = 0;
		func_191(Global_1900718->f_1[0 /*2*/]);
		return 1;
	}
	func_191(Global_1900718->f_1[iParam0 /*2*/]);
	Global_1900718->f_66 = (Global_1900718->f_66 - 1);
	func_306(iParam0, Global_1900718->f_66);
	return 1;
}

void func_259(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_260(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_261(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_126(*iParam0);
	iVar1 = func_127(*iParam0);
	if (iParam1 < 1 || iParam1 > func_193(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return -765810527;
		case 5:
		case 6:
		case 7:
		case 8:
			return 34802860;
		case 9:
		case 10:
		case 11:
		case 12:
			return -736232052;
		case 0:
			return 177326598;
		default:
			break;
	}
	return 0;
}

int func_263(int iParam0, var uParam1, var uParam2)
{
	if (!func_307(iParam0))
	{
		return 0;
	}
	if (!func_128())
	{
		return 0;
	}
	if (!func_308(iParam0, uParam1, uParam2))
	{
		return 0;
	}
	if (*uParam1 == 414878641 && Global_1572887->f_13 != 0)
	{
		return 0;
	}
	else if (*uParam1 == -816321659 && Global_1572887->f_13 != -1)
	{
		return 0;
	}
	return 1;
}

void func_264(int iParam0, int iParam1)
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

void func_265(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_309(uParam0))
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

struct<2> func_266(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_267()
{
	return Global_1114828->f_8005;
}

void func_268(int iParam0)
{
	Global_1114828->f_8005 = iParam0;
}

var func_269()
{
	return Global_1114828->f_8005.f_1;
}

var func_270()
{
	return Global_1114828->f_8005.f_2;
}

void func_271(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 241)
	{
		iVar1 = func_310(iVar0, 1);
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0, iVar1, func_311(iVar1));
		iVar0++;
	}
}

void func_272(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 46)
	{
		iVar1 = func_312(iVar0, 1);
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0, iVar1, func_313(iVar1));
		iVar0++;
	}
}

int func_273(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_314(iParam0);
	iVar1 = func_315(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_316(iVar1))
		{
			func_317(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

void func_274(var uParam0, int iParam1, bool bParam2)
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
		uVar0 = uParam0[iVar2];
		(*uParam0)[iVar2] = uParam0[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

int func_275(var uParam0, var uParam1)
{
	var uVar0;

	if (!DATAFILE::_0x7907969497EA92F5(uParam1))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uParam1))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar0, 5);
	*uParam0 = uParam1;
	return 1;
}

int func_276(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(iParam5, &Param0))
	{
		return 0;
	}
	return 1;
}

int func_277(var uParam0, var uParam1)
{
	var uVar0;

	if (!DATAFILE::_0x7907969497EA92F5(uParam1))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uParam1))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar0, 5);
	*uParam0 = uParam1;
	return 1;
}

int func_278(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam0);
}

int func_279(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_318(uParam0, iParam1))
	{
		return 0;
	}
	uParam0->f_2 = -1248823782;
	if (!DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam0))
	{
		return 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	*iParam2 = func_319(iVar0);
	uParam0->f_2 = 842085562;
	if (!DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam0))
	{
		return 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iParam2->f_1 = iVar0;
	return 1;
}

struct<2> func_280(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_320(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_320(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_320(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_320(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_320(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_320(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_320(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_181();
}

bool func_281(int iParam0, int iParam1)
{
	return func_321(&((Global_1103537->f_7066[iParam0 /*5*/])->f_2), iParam1);
}

float func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_55;
		case 1:
			return Global_1901929->f_295.f_56;
		case 2:
			return Global_1901929->f_295.f_57;
		default:
			break;
	}
	return -1f;
}

bool func_283(struct<2> Param0, vector3 vParam2, float fParam5)
{
	int iVar0;
	int iVar1;

	if (fParam5 < 0f)
	{
		return false;
	}
	func_322(Param0, &iVar0, &iVar1);
	return BUILTIN::VDIST(vParam2, func_323(iVar0, iVar1)) <= fParam5;
}

int func_284(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (!func_324(*uParam0, &(uParam0->f_1), 33417155, 0, 0, 1))
	{
		return 0;
	}
	if (!func_324(*uParam0, &(uParam0->f_1), 12932893, func_325(*iParam1), 0, 1))
	{
		return 0;
	}
	if (!func_324(*uParam0, &(uParam0->f_1), -2017210649, iParam1->f_1, 0, 1))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(&(uParam2->f_2), iParam1, 2);
	return func_326(*uParam0, uParam2, iParam3);
}

bool func_285(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_327(uParam0->f_2);
	iVar1 = func_328(iVar0);
	if (iParam8 == -1)
	{
		iVar2 = func_329(iParam5);
	}
	else
	{
		iVar2 = iParam8;
	}
	*uParam6 = 0;
	*uParam6 = func_330(uParam0);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_331(iVar2, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_332(uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_333(uParam0, iParam1, uParam2, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_334(uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_335(iVar2, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_336(uParam0, iVar2, iParam3, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_337(uParam0, iParam3, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_338(iParam3, iParam4, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_339(iParam3);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_340(iParam3, uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_341(uParam0, iParam3, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_342(uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_343(uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_344(iParam3, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	switch (iVar1)
	{
		case 2:
			*uParam6 = func_345(uParam0, iParam7, iParam3, iVar2, iParam5);
			break;
		case 1:
			*uParam6 = func_346(uParam0, iParam7);
			break;
		case 0:
			*uParam6 = func_347(uParam0, iParam7, iParam3);
			break;
		default:
			*uParam6 = 45;
			break;
	}
	return *uParam6 != 0;
}

int func_286(int iParam0, int iParam1)
{
	struct<2> Var0;

	if (func_348(iParam0, iParam1, &Var0))
	{
		return Var0.f_1;
	}
	return -1;
}

int func_287(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2010581984:
			return 8;
		case -2001405328:
			return 4;
		case -1824322988:
			return 9;
		case -1518489911:
			return 10;
		case -1348549877:
			return 11;
		case -1211373264:
			return 15;
		case -1067974651:
			return 17;
		case -1040947274:
			return 12;
		case -890716772:
			return 6;
		case -761617270:
			return 16;
		case 518798111:
			return 1;
		case 522505504:
			return 3;
		case 1042373141:
			return 5;
		case 1803795142:
			return 13;
		case 1806630731:
			return 0;
		case 1859868723:
			return 2;
		case 1992773981:
			return 7;
		case 2015728894:
			return 14;
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

bool func_288(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

void func_289(int iParam0)
{
	Global_1114828->f_8005.f_1 = iParam0;
}

void func_290(int iParam0)
{
	Global_1114828->f_8005.f_2 = iParam0;
}

var func_291(int iParam0, int iParam1)
{
	return func_349(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

Vector3 func_292(int iParam0)
{
	return ((*Global_1111121)[iParam0 /*42*/])->f_7.f_1;
}

var func_293(int iParam0)
{
	return ((*Global_1111121)[iParam0 /*42*/])->f_7;
}

void func_294(var uParam0, var uParam1, vector3 vParam2, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[7];
	int iVar12;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar12))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
		{
		}
		else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam1, iVar12))
		{
		}
		else if (_NAMESPACE26::_0x424B17A7DC5C90BC(iVar12))
		{
			(*uParam0)[0] = iVar12;
			Jump @159; //curOff = 85
		}
		else if (func_350(iVar12, vParam2, uParam5))
		{
			if (iVar0 + 1 < 7)
			{
				(*uParam0)[(1 + iVar0)] = iVar12;
				iVar0++;
			}
		}
		else if (iVar1 < 7)
		{
			iVar4[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar3 = &iVar4[iVar2];
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (iVar0 + 1 < 7)
		{
			(*uParam0)[(1 + iVar0)] = iVar12;
			iVar0++;
		}
		iVar2++;
	}
}

void func_295(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 31, &uParam1);
}

int func_296(struct<2> Param0, var uParam2)
{
	if (!func_30(Param0))
	{
		return 0;
	}
	func_351(uParam2);
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

int func_297(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_296(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_298(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_352(&Var1, uParam0))
	{
		iVar0 = ((func_353() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_299(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_300(int iParam0, int iParam1)
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

int func_301(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1070356->f_17817 < 32)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar1 };
	}
	Global_1070356->f_17817 = (Global_1070356->f_17817 - 1);
	if (Global_1070356->f_17817 < 0)
	{
		Global_1070356->f_17817 = 0;
	}
	return 1;
}

int func_302(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1070356->f_17817 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 /*3*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1070356->f_17817.f_1[iParam0 /*3*/]) = { vVar1 };
	Global_1070356->f_17817++;
	if (Global_1070356->f_17817 > 32)
	{
		Global_1070356->f_17817 = 32;
	}
	return 1;
}

int func_303(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		case -2141419899:
			return 405;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 471;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 395;
		case -2058120606:
			return 194;
		case -2056579774:
			return 465;
		case -2043909922:
			return 339;
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
		case -1943367752:
			return 388;
		case -1943021821:
			return 336;
		case -1939389836:
			return 417;
		case -1932919229:
			return 429;
		case -1925798111:
			return 41;
		case -1914141706:
			return 440;
		case -1906892166:
			return 404;
		case -1882707460:
			return 464;
		case -1861414976:
			return 381;
		case -1852605133:
			return 10;
		case -1848799275:
			return 410;
		case -1847672446:
			return 312;
		case -1842033327:
			return 505;
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
		case -1827602683:
			return 447;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 412;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 399;
		case -1749433374:
			return 480;
		case -1749043433:
			return 525;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 520;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 422;
		case -1700452710:
			return 317;
		case -1684974589:
			return 467;
		case -1674179981:
			return 53;
		case -1673998598:
			return 528;
		case -1666278201:
			return 33;
		case -1664435783:
			return 487;
		case -1624627591:
			return 439;
		case -1612662716:
			return 198;
		case -1610966108:
			return 355;
		case -1608141409:
			return 539;
		case -1585840296:
			return 337;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 435;
		case -1573753524:
			return 504;
		case -1558439474:
			return 286;
		case -1556041029:
			return 411;
		case -1547280108:
			return 519;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 524;
		case -1462313959:
			return 463;
		case -1455998786:
			return 371;
		case -1447311849:
			return 321;
		case -1445041595:
			return 529;
		case -1442844448:
			return 466;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 473;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 479;
		case -1387772214:
			return 408;
		case -1378911044:
			return 476;
		case -1369678628:
			return 488;
		case -1344601768:
			return 348;
		case -1341750998:
			return 477;
		case -1340339190:
			return 363;
		case -1339871203:
			return 533;
		case -1329135070:
			return 138;
		case -1319875891:
			return 438;
		case -1311865656:
			return 37;
		case -1296807958:
			return 353;
		case -1290997627:
			return 462;
		case -1287894233:
			return 427;
		case -1283202000:
			return 354;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 424;
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
			return 366;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 401;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 392;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 340;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 444;
		case -1095341658:
			return 409;
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
		case -1042021329:
			return 383;
		case -1029225159:
			return 104;
		case -1023919011:
			return 432;
		case -1014145132:
			return 273;
		case -1004266677:
			return 461;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 400;
		case -941648233:
			return 512;
		case -939420910:
			return 44;
		case -931337253:
			return 425;
		case -925071604:
			return 542;
		case -919512195:
			return 40;
		case -911126844:
			return 369;
		case -897750037:
			return 367;
		case -895307590:
			return 501;
		case -895073533:
			return 394;
		case -889906510:
			return 390;
		case -888632790:
			return 506;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 433;
		case -851626677:
			return 372;
		case -839820438:
			return 420;
		case -828139293:
			return 246;
		case -812641169:
			return 535;
		case -811637947:
			return 232;
		case -800891377:
			return 494;
		case -797689456:
			return 515;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 373;
		case -729679654:
			return 531;
		case -699277634:
			return 4;
		case -693828600:
			return 356;
		case -683458244:
			return 78;
		case -677920206:
			return 459;
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
		case -635323621:
			return 513;
		case -632127260:
			return 343;
		case -630295963:
			return 495;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 472;
		case -591815673:
			return 384;
		case -583127403:
			return 507;
		case -574190021:
			return 493;
		case -554519756:
			return 536;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 380;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 338;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 516;
		case -492731190:
			return 419;
		case -491981251:
			return 184;
		case -489737721:
			return 402;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 350;
		case -448554447:
			return 532;
		case -441204543:
			return 534;
		case -434590080:
			return 212;
		case -414883443:
			return 460;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 374;
		case -389056691:
			return 257;
		case -381925743:
			return 508;
		case -371827125:
			return 389;
		case -364475655:
			return 430;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 370;
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
		case -329176208:
			return 492;
		case -311373772:
			return 540;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 434;
		case -279765076:
			return 346;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 418;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 523;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 517;
		case -209894800:
			return 345;
		case -207792846:
			return 483;
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
		case -110352060:
			return 431;
		case -108780030:
			return 351;
		case -108307814:
			return 28;
		case -102827640:
			return 403;
		case -101740709:
			return 499;
		case -99303535:
			return 165;
		case -90486812:
			return 491;
		case -89829333:
			return 423;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 509;
		case -75024673:
			return 244;
		case -74031276:
			return 441;
		case -70727482:
			return 453;
		case -63926460:
			return 87;
		case -61411516:
			return 358;
		case -38135693:
			return 468;
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
			return 406;
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
			return 541;
		case 64896505:
			return 391;
		case 74872959:
			return 331;
		case 84709454:
			return 454;
		case 93964309:
			return 396;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 530;
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
		case 215903338:
			return 490;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 518;
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
		case 321629486:
			return 510;
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
		case 404823609:
			return 485;
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
			return 545;
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
		case 468797819:
			return 342;
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
		case 509781469:
			return 378;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 393;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 456;
		case 565812320:
			return 448;
		case 582380806:
			return 359;
		case 588987611:
			return 177;
		case 589380360:
			return 341;
		case 618699440:
			return 75;
		case 619839857:
			return 376;
		case 630808005:
			return 126;
		case 640520536:
			return 470;
		case 642824856:
			return 482;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 500;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 484;
		case 723021499:
			return 250;
		case 730069127:
			return 475;
		case 747514327:
			return 382;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 362;
		case 791041526:
			return 18;
		case 799106423:
			return 455;
		case 803929300:
			return 469;
		case 804063423:
			return 503;
		case 817925178:
			return 227;
		case 826868753:
			return 474;
		case 831940854:
			return 407;
		case 846837291:
			return 451;
		case 865557632:
			return 537;
		case 868326136:
			return 270;
		case 883901517:
			return 385;
		case 885203519:
			return 315;
		case 885378256:
			return 379;
		case 885777893:
			return 375;
		case 896725436:
			return 511;
		case 929582877:
			return 368;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 416;
		case 945612176:
			return 234;
		case 965467037:
			return 344;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 443;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 446;
		case 1032791043:
			return 502;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 538;
		case 1126565489:
			return 486;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 452;
		case 1157309080:
			return 514;
		case 1159471771:
			return 361;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
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
			return 543;
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
		case 1232840551:
			return 481;
		case 1238086793:
			return 347;
		case 1248935549:
			return 415;
		case 1250636944:
			return 245;
		case 1279586666:
			return 449;
		case 1280406542:
			return 442;
		case 1287917122:
			return 387;
		case 1302228510:
			return 349;
		case 1306158345:
			return 199;
		case 1321892118:
			return 357;
		case 1325325699:
			return 421;
		case 1341699707:
			return 526;
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
		case 1362354162:
			return 497;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 414;
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
		case 1480425906:
			return 450;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 426;
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
		case 1517951665:
			return 436;
		case 1521272922:
			return 458;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 386;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 521;
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
		case 1666964801:
			return 527;
		case 1691618738:
			return 66;
		case 1698972798:
			return 352;
		case 1703398561:
			return 365;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 377;
		case 1766284049:
			return 92;
		case 1774060092:
			return 544;
		case 1776302352:
			return 299;
		case 1788424349:
			return 445;
		case 1812677765:
			return 398;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 413;
		case 1867912207:
			return 68;
		case 1881028477:
			return 364;
		case 1884271742:
			return 51;
		case 1891256113:
			return 437;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 360;
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
		case 2013720626:
			return 489;
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
		case 2048790450:
			return 498;
		case 2051822093:
			return 284;
		case 2068208444:
			return 428;
		case 2068253437:
			return 478;
		case 2077022393:
			return 291;
		case 2079292950:
			return 457;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 397;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 496;
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

int func_304(int iParam0)
{
	int iVar0;

	iVar0 = func_354(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_305(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

void func_306(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_355((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_355(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_30(*(Global_1900718->f_1[0 /*2*/])))
	{
		func_175(*(Global_1900718->f_1[0 /*2*/]), 3);
	}
}

int func_307(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 33)
	{
		return 0;
	}
	return 1;
}

int func_308(int iParam0, var uParam1, var uParam2)
{
	if (!func_307(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			if (Global_1572887->f_13 != 0)
			{
				*uParam1 = -816321659;
			}
			else
			{
				*uParam1 = 414878641;
			}
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		case 17:
			*uParam1 = 414878641;
			*uParam2 = -86751100;
			break;
		case 18:
			*uParam1 = 414878641;
			*uParam2 = -291172486;
			break;
		case 19:
			*uParam1 = 414878641;
			*uParam2 = -1798248949;
			break;
		case 20:
			*uParam1 = 414878641;
			*uParam2 = 1774145653;
			break;
		case 21:
			*uParam1 = 414878641;
			*uParam2 = -1655602026;
			break;
		case 22:
			*uParam1 = 414878641;
			*uParam2 = 1198571251;
			break;
		case 23:
			*uParam1 = 414878641;
			*uParam2 = -922560112;
			break;
		case 24:
			*uParam1 = 414878641;
			*uParam2 = -1772642867;
			break;
		case 25:
			*uParam1 = 414878641;
			*uParam2 = -301889617;
			break;
		case 26:
			*uParam1 = 414878641;
			*uParam2 = -208754119;
			break;
		case 27:
			*uParam1 = 414878641;
			*uParam2 = -2020396827;
			break;
		case 29:
			*uParam1 = 414878641;
			*uParam2 = 1094779500;
			break;
		case 28:
			*uParam1 = 414878641;
			*uParam2 = 332706138;
			break;
		case 30:
			*uParam1 = 414878641;
			*uParam2 = 1757851809;
			break;
		case 31:
			*uParam1 = 414878641;
			*uParam2 = -140696447;
			break;
		case 32:
			if (Global_1572887->f_13 != 0)
			{
				*uParam1 = -816321659;
			}
			else
			{
				*uParam1 = 414878641;
			}
			*uParam2 = 937267231;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_309(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_310(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1008523256;
		case 1:
			return 1141833051;
		case 2:
			return 830686115;
		case 3:
			return 1371816784;
		case 4:
			return -279039872;
		case 5:
			return -347364204;
		case 6:
			return -1591356522;
		case 7:
			return -1481147674;
		case 8:
			return 1071445036;
		case 9:
			return 1393764479;
		case 10:
			return 416600242;
		case 11:
			return 1774314862;
		case 12:
			return 1624339917;
		case 13:
			return -702452069;
		case 14:
			return -1697453237;
		case 15:
			return 935565856;
		case 16:
			return 164389658;
		case 17:
			return -3633128;
		case 18:
			return 568979268;
		case 19:
			return -742165699;
		case 20:
			return 1241889488;
		case 21:
			return -1450969535;
		case 22:
			return 135103436;
		case 23:
			return -1562463744;
		case 24:
			return -569428078;
		case 25:
			return 1034986020;
		case 26:
			return 1282514153;
		case 27:
			return 699547230;
		case 28:
			return -1188075274;
		case 29:
			return -307865396;
		case 30:
			return -340432202;
		case 31:
			return 891000470;
		case 32:
			return -1785915344;
		case 33:
			return 95610146;
		case 34:
			return -175154863;
		case 35:
			return -779715008;
		case 36:
			return 966721050;
		case 37:
			return 1773322216;
		case 38:
			return 965995012;
		case 39:
			return -2106942431;
		case 40:
			return 1772846069;
		case 41:
			return -1782208300;
		case 42:
			return 466723622;
		case 43:
			return -155807419;
		case 44:
			return 369580868;
		case 45:
			return 1862983441;
		case 46:
			return -1462149998;
		case 47:
			return 1097539553;
		case 48:
			return -1479366685;
		case 49:
			return 1475807964;
		case 50:
			return 504293064;
		case 51:
			return -678729477;
		case 52:
			return 1635370648;
		case 53:
			return 741518720;
		case 54:
			return -1021330426;
		case 55:
			return -879824208;
		case 56:
			return 56746299;
		case 57:
			return 1915534289;
		case 58:
			return 1089670230;
		case 59:
			return 1179867258;
		case 60:
			return -328876172;
		case 61:
			return 824485797;
		case 62:
			return -146546566;
		case 63:
			return -733684727;
		case 64:
			return 2080739522;
		case 65:
			return 1250184037;
		case 66:
			return 1142477451;
		case 67:
			return -750441052;
		case 68:
			return -467924289;
		case 69:
			return 1034671917;
		case 70:
			return -1442893430;
		case 71:
			return 957547265;
		case 72:
			return 1781322358;
		case 73:
			return 1219330971;
		case 74:
			return -2110119917;
		case 75:
			return 709191463;
		case 76:
			return 2038044382;
		case 77:
			return 1062084355;
		case 78:
			return -690423049;
		case 79:
			return 202835363;
		case 80:
			return -293519133;
		case 81:
			return 592206679;
		case 82:
			return -816725755;
		case 83:
			return -255537257;
		case 84:
			return -770038426;
		case 85:
			return -1940881994;
		case 86:
			return -1099377300;
		case 87:
			return -1298580726;
		case 88:
			return -1838764391;
		case 89:
			return 1537295589;
		case 90:
			return -26782235;
		case 91:
			return 1465961145;
		case 92:
			return -150140702;
		case 93:
			return 925148616;
		case 94:
			return -586196356;
		case 95:
			return -989277348;
		case 96:
			return -1045571630;
		case 97:
			return -1028785813;
		case 98:
			return -944306928;
		case 99:
			return -1799624227;
		case 100:
			return -1413825410;
		case 101:
			return -1083767826;
		case 102:
			return 1392091586;
		case 103:
			return 1269397350;
		case 104:
			return -1808878008;
		case 105:
			return 696574474;
		case 106:
			return 1280983896;
		case 107:
			return -473520653;
		case 108:
			return -1142735215;
		case 109:
			return -662059387;
		case 110:
			return 1196324698;
		case 111:
			return 1781673553;
		case 112:
			return 1091365066;
		case 113:
			return -346602855;
		case 114:
			return -642855470;
		case 115:
			return -1294273068;
		case 116:
			return -1181812906;
		case 117:
			return 2016458991;
		case 118:
			return 200716381;
		case 119:
			return -1845137425;
		case 120:
			return 787092883;
		case 121:
			return 888483612;
		case 122:
			return 2063500509;
		case 123:
			return -1570130076;
		case 124:
			return 262797908;
		case 125:
			return 2012255077;
		case 126:
			return 1499632451;
		case 127:
			return -236880317;
		case 128:
			return 1211454712;
		case 129:
			return -626189620;
		case 130:
			return -1438489730;
		case 131:
			return -479537578;
		case 132:
			return -1463903719;
		case 133:
			return 1203863120;
		case 134:
			return -351785645;
		case 135:
			return -895584822;
		case 136:
			return -1723095449;
		case 137:
			return 1915528396;
		case 138:
			return -1266254117;
		case 139:
			return -1614496179;
		case 140:
			return -1490596352;
		case 141:
			return -1047907201;
		case 142:
			return -1202322374;
		case 143:
			return 157340468;
		case 144:
			return 2064288322;
		case 145:
			return -2116748653;
		case 146:
			return 155183949;
		case 147:
			return 825663396;
		case 148:
			return 976967808;
		case 149:
			return 590738432;
		case 150:
			return 1708896805;
		case 151:
			return 2035135006;
		case 152:
			return 334691246;
		case 153:
			return -835870147;
		case 154:
			return -1267680873;
		case 155:
			return 1153433438;
		case 156:
			return 1489424180;
		case 157:
			return -904522836;
		case 158:
			return 1611867516;
		case 159:
			return -1119986744;
		case 160:
			return -941621037;
		case 161:
			return 101270175;
		case 162:
			return -875013288;
		case 163:
			return -1541719198;
		case 164:
			return 842085562;
		case 165:
			return 1887179278;
		case 166:
			return 1468744908;
		case 167:
			return -1248823782;
		case 168:
			return 1154537543;
		case 169:
			return -1244566857;
		case 170:
			return -1255654531;
		case 171:
			return -2137705453;
		case 172:
			return -1924253471;
		case 173:
			return 1990527907;
		case 174:
			return -1963575852;
		case 175:
			return -2051828336;
		case 176:
			return 1798123698;
		case 177:
			return 495975404;
		case 178:
			return -665208900;
		case 179:
			return -2090796305;
		case 180:
			return 1649401908;
		case 181:
			return -2103309026;
		case 182:
			return 1582509135;
		case 183:
			return -1471337442;
		case 184:
			return -1207177750;
		case 185:
			return 1269504651;
		case 186:
			return 1519769314;
		case 187:
			return 644398018;
		case 188:
			return 107613027;
		case 189:
			return 93270913;
		case 190:
			return -2118935736;
		case 191:
			return -536214615;
		case 192:
			return 1772867250;
		case 193:
			return 766204040;
		case 194:
			return 564321544;
		case 195:
			return -434046439;
		case 196:
			return 728527958;
		case 197:
			return -1923952042;
		case 198:
			return -749877125;
		case 199:
			return 1857771831;
		case 200:
			return 273544526;
		case 201:
			return 1068458324;
		case 202:
			return 600894625;
		case 203:
			return -1463447134;
		case 204:
			return -1161401818;
		case 205:
			return 1888618008;
		case 206:
			return 1225419284;
		case 207:
			return 1127626385;
		case 208:
			return -1211596176;
		case 209:
			return 1811646877;
		case 210:
			return 1651578691;
		case 211:
			return 1382238315;
		case 212:
			return -2099616401;
		case 213:
			return 946618725;
		case 214:
			return -862103290;
		case 215:
			return -578476660;
		case 216:
			return 333834761;
		case 217:
			return -1530925183;
		case 218:
			return -809702995;
		case 219:
			return -267638862;
		case 220:
			return 1323614307;
		case 221:
			return -2094518374;
		case 222:
			return -209614658;
		case 223:
			return -2011961582;
		case 224:
			return 1656869860;
		case 225:
			return -969870146;
		case 226:
			return 1319079466;
		case 227:
			return -1688741952;
		case 228:
			return -1537888061;
		case 229:
			return 1417063580;
		case 230:
			return 992974374;
		case 231:
			return -1714801835;
		case 232:
			return -134912699;
		case 233:
			return 41531735;
		case 234:
			return -1175686941;
		case 235:
			return -1834878085;
		case 236:
			return 1672605872;
		case 237:
			return 1083028949;
		case 238:
			return 890539395;
		case 239:
			return -1603547373;
		case 240:
			return -748173978;
		case 241:
			return 1949355378;
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

char* func_311(int iParam0)
{
	switch (iParam0)
	{
		case 1008523256:
			return "time_block";
		case 1141833051:
			return "mission";
		case 830686115:
			return "mission_type(type=%x)/mission";
		case 1371816784:
			return "volume";
		case -279039872:
			return "volume_component";
		case -347364204:
			return "nav_block_volume";
		case -1591356522:
			return "blocking_object_flag";
		case -1481147674:
			return "location_flag";
		case 1071445036:
			return "setting";
		case 1393764479:
			return "scenario";
		case 416600242:
			return "door";
		case 1774314862:
			return "force_volume";
		case 1624339917:
			return "ped";
		case -702452069:
			return "prop";
		case -1697453237:
			return "ipl";
		case 935565856:
			return "lantern";
		case 164389658:
			return "prop_set";
		case -3633128:
			return "veg_mod";
		case 568979268:
			return "invalid_scenario";
		case -742165699:
			return "scenario_flag";
		case 1241889488:
			return "veg_flag";
		case -1450969535:
			return "anim";
		case 135103436:
			return "name";
		case -1562463744:
			return "turn_in_type";
		case -569428078:
			return "item";
		case 1034986020:
			return "interior";
		case 1282514153:
			return "transition";
		case 699547230:
			return "Location";
		case -1188075274:
			return "Mission_Giver";
		case -307865396:
			return "location";
		case -340432202:
			return "required_volume";
		case 891000470:
			return "mission_type";
		case -1785915344:
			return "unlock";
		case 95610146:
			return "state";
		case -175154863:
			return "string";
		case -779715008:
			return "flag";
		case 966721050:
			return "attribute";
		case 1773322216:
			return "weapon";
		case 965995012:
			return "warp_location";
		case -2106942431:
			return "flags";
		case 1772846069:
			return "giver";
		case -1782208300:
			return "Gun_for_Hire";
		case 466723622:
			return "Locations";
		case -155807419:
			return "Mission_Givers";
		case 369580868:
			return "Player_Bounties";
		case 1862983441:
			return "Use_Contexts";
		case -1462149998:
			return "location_flags";
		case 1097539553:
			return "location_flag(%i)";
		case -1479366685:
			return "settings";
		case 1475807964:
			return "setting(%i)";
		case 504293064:
			return "Dialogue";
		case -678729477:
			return "Missions";
		case 1635370648:
			return "Location(location=%x)";
		case 741518720:
			return "Mission_Giver(giver=%x)";
		case -1021330426:
			return "interaction_lockon";
		case -879824208:
			return "mission_giver_creation_data";
		case 56746299:
			return "schedule";
		case 1915534289:
			return "time_block(%i)";
		case 1089670230:
			return "mission(%i)";
		case 1179867258:
			return "volumes";
		case -328876172:
			return "volume(%i)";
		case 824485797:
			return "volume_component(%i)";
		case -146546566:
			return "volume_locks";
		case -733684727:
			return "volume_lock(%i)";
		case -750441052:
			return "scenarios";
		case 2080739522:
			return "nav_block_volume(%i)";
		case 1250184037:
			return "blocking_object_flags";
		case 1142477451:
			return "volume";
		case -1202322374:
			return "anti_grief_volumes";
		case -467924289:
			return "prop_sets";
		case 1034671917:
			return "props";
		case -1442893430:
			return "peds";
		case 957547265:
			return "script_created_scenarios";
		case 1781322358:
			return "veg_mods";
		case 1219330971:
			return "conditional_anims";
		case -2110119917:
			return "transitions";
		case 709191463:
			return "transition(%i)";
		case 2038044382:
			return "anim(%i)";
		case 1062084355:
			return "force_volumes";
		case -690423049:
			return "doors";
		case 202835363:
			return "scenario(%i)";
		case -293519133:
			return "prop_set(%i)";
		case 592206679:
			return "prop(%i)";
		case -816725755:
			return "ipl(%i)";
		case -255537257:
			return "lantern(%i)";
		case -770038426:
			return "ped(%i)";
		case -1940881994:
			return "unreachable_scearios";
		case -1099377300:
			return "invalid_scenario(%i)";
		case -1298580726:
			return "scenario_flags";
		case -1838764391:
			return "scenario_flag(%i)";
		case 1537295589:
			return "veg_flag(%i)";
		case -26782235:
			return "force_volume(%i)";
		case 1465961145:
			return "door(%i)";
		case -150140702:
			return "mission_giver_data";
		case 925148616:
			return "mission_giver_names";
		case -586196356:
			return "name(%i)";
		case -989277348:
			return "blip_data";
		case -1045571630:
			return "dialogue_type(type=%x)";
		case -1028785813:
			return "conversation(script_dialogue_handle=%x)";
		case -944306928:
			return "mission(unlock=%x)";
		case -1799624227:
			return "mission(type=%x)";
		case -1413825410:
			return "mission_data";
		case -1083767826:
			return "interiors";
		case 1392091586:
			return "interior(%i)";
		case 1269397350:
			return "name(name_type=%x)";
		case -1808878008:
			return "required_volume(%i)";
		case 696574474:
			return "required_volume_type(type=%x)";
		case 1280983896:
			return "required_volumes_types";
		case -473520653:
			return "mission_giver_type(type=%x)";
		case -1142735215:
			return "attachment";
		case -662059387:
			return "Location(%i)";
		case 1196324698:
			return "Location(id=%x)";
		case 1781673553:
			return "Mission_Giver(%i)";
		case 1091365066:
			return "mission_giver_name(type=%x)";
		case -346602855:
			return "locations";
		case -642855470:
			return "location(%i)";
		case -1294273068:
			return "Location(%i)";
		case -1181812906:
			return "veg_mod(%i)";
		case 2016458991:
			return "veg_mod_data(type=%x)";
		case 200716381:
			return "mission_flags";
		case -1845137425:
			return "mission_flag(%i)";
		case 787092883:
			return "door_config(config=%x)";
		case 888483612:
			return "mission_type(type=%x)";
		case 2063500509:
			return "mission_type(%i)";
		case -1570130076:
			return "mission_types";
		case 262797908:
			return "unlock(%i)";
		case 2012255077:
			return "state(%i)";
		case 1499632451:
			return "strings";
		case -236880317:
			return "string(%i)";
		case 1211454712:
			return "scenario";
		case -626189620:
			return "time_block(%i)/mission(unlock=%x)";
		case -1438489730:
			return "town(id=%x)";
		case -479537578:
			return "volume(script_volume_type=%x)";
		case -1463903719:
			return "town_volumes";
		case 1203863120:
			return "map_props";
		case -351785645:
			return "ipls";
		case -895584822:
			return "lanterns";
		case -1723095449:
			return "flags(type=%x)";
		case 157340468:
			return "nav_block_volumes";
		case 2064288322:
			return "volume";
		case -2116748653:
			return "blocking_object_flags";
		case 155183949:
			return "blocking_object_flag(%i)";
		case 825663396:
			return "ped(role=%x)";
		case 1915528396:
			return "flag(%i)";
		case -1266254117:
			return "attributes";
		case -1614496179:
			return "attribute(%i)";
		case -1490596352:
			return "weapons";
		case -1047907201:
			return "weapon(%i)";
		case 976967808:
			return "warp_locations";
		case 590738432:
			return "warp_location(%i)";
		case 1708896805:
			return "scene";
		case 2035135006:
			return "giver_schedule";
		case 334691246:
			return "hour(%i)";
		case -835870147:
			return "flags(%i)";
		case -1267680873:
			return "giver(%i)";
		case 1153433438:
			return "dialogue";
		case 1489424180:
			return ":dialogue_star_handle";
		case -904522836:
			return ":name";
		case 1611867516:
			return ":volume_name";
		case -1119986744:
			return ":conditional";
		case -941621037:
			return ":attach_bone";
		case 101270175:
			return ":anim_scene_name";
		case -875013288:
			return ":playlist_name";
		case -1541719198:
			return ":prop_name";
		case 842085562:
			return ":unlock";
		case 1887179278:
			return ":unlock_group";
		case 1468744908:
			return "mission(%i):unlock";
		case -1248823782:
			return ":mission_type";
		case 1154537543:
			return ":mission_name";
		case -1244566857:
			return ":dialogue_id";
		case -1255654531:
			return ":model";
		case -2137705453:
			return ":name";
		case -1924253471:
			return ":name_type";
		case 1990527907:
			return ":blip_style_close";
		case -1963575852:
			return ":blip_modifier_close";
		case -2051828336:
			return ":blip_sprite_close";
		case 1798123698:
			return ":flag";
		case 495975404:
			return ":script_volume_type";
		case -665208900:
			return ":type";
		case -2090796305:
			return ":required_volume_config";
		case 1649401908:
			return ":type";
		case -2103309026:
			return ":attach_to_model";
		case 1582509135:
			return ":scenario_author_type";
		case -1471337442:
			return ":blip_sprite";
		case -1207177750:
			return ":blip_style";
		case 1269504651:
			return ":blip_region";
		case 1519769314:
			return ":valid_location";
		case 644398018:
			return ":location";
		case 107613027:
			return ":giver";
		case 93270913:
			return ":blip";
		case -2118935736:
			return ":blip_modifier";
		case -536214615:
			return ":prop_set_name";
		case 564321544:
			return ":prop_set_placement_type";
		case -434046439:
			return ":door_id";
		case 728527958:
			return ":outfit";
		case -1923952042:
			return ":command_hash";
		case -749877125:
			return ":honor_requirement";
		case 1857771831:
			return ":loadout";
		case 273544526:
			return ":ipl_group";
		case 1068458324:
			return ":ipl_veg_mod";
		case 600894625:
			return ":ipl_nav_mesh";
		case -1463447134:
			return ":id";
		case -1161401818:
			return ":location_type";
		case 1888618008:
			return ":inventory_item";
		case 1225419284:
			return ":weapon";
		case 1127626385:
			return ":attach_point";
		case -1211596176:
			return ":use";
		case 1772867250:
			return ":scenario_prop";
		case 766204040:
			return ":scenario_mapping";
		case 1811646877:
			return ":texture";
		case 1651578691:
			return ":document";
		case 1382238315:
			return ":gender";
		case -2099616401:
			return ":handle";
		case 946618725:
			return ":value";
		case -862103290:
			return ":use_veg_mod";
		case -578476660:
			return ":force_to_be_object";
		case 333834761:
			return ":disable_scenario";
		case -1530925183:
			return ":clear_space";
		case -809702995:
			return ":should_be_locked";
		case -267638862:
			return ":is_breakable";
		case 1323614307:
			return ":snap_to";
		case -2094518374:
			return ":radius";
		case -209614658:
			return ":model_search_radius";
		case -2011961582:
			return ":heading";
		case 1656869860:
			return ":float";
		case -969870146:
			return ":launch_radius_offline";
		case 1319079466:
			return ":launch_radius_online";
		case -1688741952:
			return ":z_probe";
		case -1537888061:
			return ":open_ratio";
		case 1417063580:
			return ":auto_close_rate";
		case 992974374:
			return ":spawn_heading";
		case -1714801835:
			return ":interior_coords";
		case -134912699:
			return ":position";
		case 41531735:
			return ":orientation";
		case -1175686941:
			return ":scale";
		case -1834878085:
			return ":model_search_position";
		case 1672605872:
			return ":launch_coords";
		case 1083028949:
			return ":rotation";
		case 890539395:
			return ":spawn_position";
		case -1603547373:
			return ":destination_position";
		case -748173978:
			return ":destination_orientation";
		case 1949355378:
			return ":origin";
		default:
			break;
	}
	return "";
}

int func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -792947925;
		case 1:
			return -1427946892;
		case 2:
			return 408367626;
		case 3:
			return -1622280771;
		case 4:
			return 1394196983;
		case 5:
			return 135054243;
		case 6:
			return -276973166;
		case 7:
			return 218782838;
		case 8:
			return 1811778263;
		case 9:
			return -1182771454;
		case 10:
			return 33417155;
		case 11:
			return 12932893;
		case 12:
			return 767213493;
		case 13:
			return -2017210649;
		case 14:
			return 581202040;
		case 15:
			return 2062917018;
		case 16:
			return -620047125;
		case 17:
			return -1250873360;
		case 18:
			return 154896618;
		case 19:
			return -371275865;
		case 20:
			return 1005476533;
		case 21:
			return 1957572717;
		case 22:
			return 2125319032;
		case 23:
			return -1581105240;
		case 24:
			return -667693420;
		case 25:
			return -1523280739;
		case 26:
			return 1937201256;
		case 27:
			return 2002802057;
		case 28:
			return 938696127;
		case 29:
			return 924791973;
		case 30:
			return -1029131400;
		case 31:
			return -118633223;
		case 32:
			return 1217673812;
		case 33:
			return 499583568;
		case 34:
			return -1969117434;
		case 35:
			return -151415096;
		case 36:
			return 1570262717;
		case 37:
			return -419812745;
		case 38:
			return 1134292740;
		case 39:
			return -1445468930;
		case 40:
			return 327661882;
		case 41:
			return 314220799;
		case 42:
			return 402983180;
		case 43:
			return -1287008399;
		case 44:
			return 460561235;
		case 45:
			return -1592717000;
		case 46:
			return -1108141625;
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

char* func_313(int iParam0)
{
	switch (iParam0)
	{
		case -792947925:
			return "mission_type";
		case -1427946892:
			return "mission";
		case 408367626:
			return "mission_flag";
		case -1622280771:
			return "string";
		case 1394196983:
			return "mission_flags";
		case 135054243:
			return "map";
		case -276973166:
			return "mission_type_flags";
		case 218782838:
			return "mission_type_flag";
		case 1811778263:
			return "stat";
		case -1182771454:
			return "hour";
		case 33417155:
			return "Net_Gun_For_Hire_Missions";
		case 12932893:
			return "mission_type(type=%x)";
		case 767213493:
			return "mission_type(%i)";
		case -2017210649:
			return "mission(unlock=%x)";
		case 581202040:
			return "mission(%i)";
		case 2062917018:
			return "mission_data";
		case -620047125:
			return "strings";
		case -1250873360:
			return "string(%i)";
		case 154896618:
			return "mission_flags(type=%x)";
		case -371275865:
			return "mission_flags(%i)";
		case 1005476533:
			return "mission_flag(%i)";
		case 1957572717:
			return "string(type=%x)";
		case 2125319032:
			return "mappings";
		case -1581105240:
			return "map(%i)";
		case -667693420:
			return "map(type=%x)";
		case -1523280739:
			return "mission_type_flags(type=%x)";
		case 1937201256:
			return "mission_type_flags(%i)";
		case 2002802057:
			return "mission_type_flag(%i)";
		case 938696127:
			return "stats";
		case 924791973:
			return "stat(%i)";
		case -1029131400:
			return "unavailable_hours";
		case -118633223:
			return "hour(%i)";
		case 1217673812:
			return ":unlock_group";
		case 499583568:
			return ":unlock";
		case -1969117434:
			return ":mission_name";
		case -151415096:
			return ":dialogue_id";
		case 1570262717:
			return ":flag";
		case -419812745:
			return ":type";
		case 1134292740:
			return ":name";
		case -1445468930:
			return ":honor_requirement";
		case 327661882:
			return ":anim_scene_id";
		case 314220799:
			return ":hash";
		case 402983180:
			return ":id";
		case -1287008399:
			return ":base_id";
		case 460561235:
			return ":item";
		case -1592717000:
			return ":min_posse_members";
		case -1108141625:
			return ":hour";
		default:
			break;
	}
	return "";
}

int func_314(int iParam0)
{
	return Global_1122836[iParam0 /*54*/];
}

int func_315(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	if (func_316(iParam1))
	{
		if (iVar0 == func_356(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_356(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

bool func_316(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_317(int iParam0)
{
	if (!func_316(iParam0))
	{
		return;
	}
	(*Global_1122836)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*54*/] = iParam0;
}

int func_318(var uParam0, int iParam1)
{
	uParam0->f_2 = 1089670230;
	uParam0->f_3 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return 0;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

int func_319(int iParam0)
{
	int iVar0;

	iVar0 = func_358(0, (func_357() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_359(iVar0);
}

struct<2> func_320(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_360(iParam0, &(Global_1070356->f_634), func_56(iParam1));
			break;
		case 3:
			Var0.f_1 = func_360(iParam0, &(Global_1070356->f_634.f_602), func_56(iParam1));
			break;
		case 4:
			Var0.f_1 = func_360(iParam0, &(Global_1070356->f_634.f_2104), func_56(iParam1));
			break;
		case 5:
			Var0.f_1 = func_360(iParam0, &(Global_1070356->f_634.f_12606), func_56(iParam1));
			break;
		case 6:
			Var0.f_1 = func_360(iParam0, &(Global_1070356->f_634.f_12908), func_56(iParam1));
			break;
		case 7:
			Var0.f_1 = func_360(iParam0, &(Global_1070356->f_634.f_15910), func_56(iParam1));
			break;
		case 8:
			Var0.f_1 = func_360(iParam0, &(Global_1070356->f_634.f_15981), func_56(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_181();
	}
	return Var0;
}

bool func_321(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_322(struct<2> Param0, int iParam2, int iParam3)
{
	*iParam2 = func_298(func_297(Param0));
	*iParam3 = func_362(func_361(*iParam2), func_171(Param0));
}

Vector3 func_323(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_363(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_324(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(iParam5, &Param0))
	{
		return 0;
	}
	return 1;
}

int func_325(int iParam0)
{
	return (Global_1103537->f_7066[iParam0 /*5*/])->f_1;
}

int func_326(struct<5> Param0, var uParam5, int iParam6)
{
	var uVar0;
	int iVar1;
	struct<4> Var2;

	uVar0 = Param0.f_1;
	iVar1 = func_327(uParam5->f_2);
	if (!func_324(Param0, &(Param0.f_1), 2062917018, 0, 0, 1))
	{
		return 0;
	}
	uParam5->f_4[0] = func_364(Param0, -1592717000, 0, 0, -1);
	uParam5->f_4[7] = func_365(Param0, 327661882, iParam6);
	uParam5->f_4[6] = func_365(Param0, -151415096, iParam6);
	uParam5->f_4[5] = func_365(Param0, -1969117434, iParam6);
	Param0.f_1 = uVar0;
	func_366(Param0, uParam5);
	Param0.f_1 = uVar0;
	func_367(Param0, uParam5);
	*uParam5 = { func_320(uParam5->f_2.f_1, func_368(iVar1)) };
	uParam5->f_29.f_1 = func_369(iVar1, uParam5->f_2.f_1);
	uParam5->f_29 = func_370(iVar1, uParam5->f_2.f_1);
	func_371(func_368(iVar1), uParam5->f_2.f_1, &Var2);
	uParam5->f_4[1] = Var2;
	uParam5->f_4[2] = Var2.f_2;
	uParam5->f_4[3] = Var2.f_1;
	uParam5->f_4[4] = Var2.f_3;
	return 1;
}

int func_327(int iParam0)
{
	return &(Global_1103537->f_7066[iParam0 /*5*/]);
}

int func_328(int iParam0)
{
	return func_372(iParam0);
}

int func_329(int iParam0)
{
	return ((*Global_1111121)[iParam0 /*42*/])->f_1;
}

int func_330(var uParam0)
{
	if (func_30(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_331(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_244())
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 15;
	}
	iVar0 = func_374(iParam0);
	if (iVar0 == 0)
	{
		return 19;
	}
	if (!func_375(iParam1, 2))
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
		{
			return 18;
		}
	}
	if (!func_375(iParam1, 1))
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
		{
			return 17;
		}
	}
	return 0;
}

int func_332(var uParam0, int iParam1)
{
	if (uParam0->f_2.f_1 == 0)
	{
		return 2;
	}
	if (!func_375(iParam1, 4))
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(uParam0->f_2.f_1))
		{
			return 4;
		}
	}
	if (!func_375(iParam1, 8))
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(uParam0->f_2.f_1))
		{
			return 3;
		}
	}
	return 0;
}

int func_333(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_375(iParam3, 16))
	{
		return 0;
	}
	if (!func_244())
	{
		return 0;
	}
	if (func_281(uParam0->f_2, 1))
	{
		return 0;
	}
	if (func_376(uParam2, iParam1))
	{
		return 0;
	}
	return 5;
}

int func_334(var uParam0, int iParam1)
{
	int iVar0;

	if (func_375(iParam1, 16384))
	{
		return 0;
	}
	iVar0 = func_122(func_130());
	if (MISC::IS_BIT_SET(uParam0->f_23.f_2, iVar0))
	{
		return 14;
	}
	return 0;
}

int func_335(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_375(iParam1, 1024))
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 15;
	}
	if (!func_378(func_377(iParam0)))
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar1);
	if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0) != iVar1)
	{
		return 28;
	}
	return 0;
}

int func_336(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_373(iParam1))
	{
		return 15;
	}
	if (!func_244())
	{
		return 0;
	}
	if (func_375(iParam3, 32))
	{
		return 0;
	}
	if (func_281(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam2))
	{
		return 23;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E(iParam2))
	{
		return 24;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam2);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_379(iVar0, iParam1))
	{
		return 16;
	}
	return 0;
}

int func_337(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_230(uParam0->f_2))
	{
		return 21;
	}
	if (!func_244())
	{
		return 0;
	}
	if (func_375(iParam2, 64))
	{
		return 0;
	}
	if (func_281(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam1))
	{
		return 23;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E(iParam1))
	{
		return 24;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam1);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_380(iVar0, uParam0->f_2))
	{
		return 22;
	}
	return 0;
}

int func_338(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_381(iParam0);
		if (iParam1 == -1)
		{
			return 26;
		}
	}
	if (func_382(iParam1) != 0)
	{
		if (func_375(iParam2, 2048))
		{
			return 0;
		}
		return 25;
	}
	return 0;
}

int func_339(int iParam0)
{
	int iVar0;

	if (!func_244())
	{
		return 0;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 23;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E(iParam0))
	{
		return 24;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_30(((*Global_1055966)[iVar0 /*436*/])->f_2))
	{
		return 6;
	}
	return 0;
}

int func_340(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_375(iParam2, 256))
	{
		return 0;
	}
	if (uParam1->f_29.f_1 == joaat("none"))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			iVar1 = func_383(iVar0);
		}
		else
		{
			return 30;
		}
	}
	else
	{
		return 29;
	}
	if (iVar1 == 0)
	{
		return 31;
	}
	switch (uParam1->f_29.f_1)
	{
		case joaat("positive"):
			if (iVar1 != 1)
			{
				return 7;
			}
			break;
		case joaat("negative"):
			if (iVar1 != 2)
			{
				return 8;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_341(var uParam0, int iParam1, int iParam2)
{
	if (func_375(iParam2, 512))
	{
		return 0;
	}
	if (_NAMESPACE26::_0x149A2751AB66AC02(iParam1) < &uParam0->f_4[0])
	{
		return 27;
	}
	return 0;
}

int func_342(var uParam0, int iParam1)
{
	struct<14> Var0;
	int iVar31;
	int iVar32;
	int iVar33;

	if (func_375(iParam1, 128))
	{
		return 0;
	}
	if (func_281(uParam0->f_2, 1))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 8;
	Var0.f_13 = 4;
	Var0.f_13.f_5 = 4;
	Var0.f_23 = 1;
	Var0.f_26 = 2;
	Var0.f_26.f_1 = -1;
	Var0.f_26.f_1.f_1 = -1;
	Var0.f_29 = joaat("none");
	Var0.f_29.f_1 = joaat("none");
	func_384(&Var0);
	if (!func_30(Var0))
	{
		return 0;
	}
	iVar31 = 0;
	while (iVar31 <= 3)
	{
		iVar32 = (Var0.f_13[iVar31] || Var0.f_13.f_5[iVar31]) // PointerArith;
		if (iVar32 == 0)
		{
		}
		else
		{
			iVar33 = (uParam0->f_13.f_5[iVar31] && iVar32);
			if (iVar33 != 0)
			{
				return 9;
			}
		}
		iVar31++;
	}
	return 0;
}

int func_343(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_375(iParam1, 4096))
	{
		return 0;
	}
	if (&uParam0->f_4[1] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_PEDS();
		iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[1])
		{
			return 10;
		}
	}
	if (&uParam0->f_4[2] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS();
		iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[2])
		{
			return 11;
		}
	}
	if (&uParam0->f_4[3] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES();
		iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[3])
		{
			return 12;
		}
	}
	if (&uParam0->f_4[4] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS();
		iVar0 = NETWORK::_0x62BE3ECC79FBD004(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[4])
		{
			return 13;
		}
	}
	return 0;
}

int func_344(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 23;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_385(iVar0))
	{
		return 44;
	}
	return 0;
}

int func_345(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;

	if (!func_373(iParam3))
	{
		return 15;
	}
	if (!func_386(iParam4))
	{
		return 20;
	}
	vVar0 = { func_292(iParam4) };
	bVar4 = func_387(iParam1, 536870912);
	if (func_233(&(uParam0->f_23), 2015728894) || func_233(&(uParam0->f_23), -1211373264))
	{
		if (!func_388(iParam2, vVar0, uVar3))
		{
			return 33;
		}
	}
	iVar5 = func_171(*uParam0);
	iVar6 = func_389(uParam0->f_2, iVar5);
	if (!bVar4)
	{
		iVar7 = 0;
		while (iVar7 < iVar6)
		{
			vVar8 = { func_390(uParam0->f_2, iVar5, iVar7) };
			if (func_391(vVar8))
			{
			}
			else if (VOLUME::_0x397769175A7DBB30(vVar8, 20f, 0, 0, 575122756))
			{
				return 34;
			}
			iVar7++;
		}
	}
	return 0;
}

int func_346(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;

	iVar0 = func_171(*uParam0);
	iVar1 = func_389(uParam0->f_2, iVar0);
	bVar2 = func_387(iParam1, 536870912);
	if (!bVar2)
	{
		iVar3 = 0;
		while (iVar3 < iVar1)
		{
			vVar4 = { func_390(uParam0->f_2, iVar0, iVar3) };
			if (func_391(vVar4))
			{
			}
			else if (VOLUME::_0x397769175A7DBB30(vVar4, 20f, 0, 0, 575122756))
			{
				return 34;
			}
			iVar3++;
		}
	}
	return 0;
}

int func_347(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	int iVar8;

	bVar3 = func_375(iParam1, 1073741824 /* Float: 2f */);
	bVar4 = func_375(iParam1, 536870912);
	if (func_375(iParam1, 8192))
	{
		vVar5 = { 0f, 0f, 0f };
	}
	else
	{
		vVar5 = { func_392(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam2)) };
	}
	func_393(*uParam0, &iVar1, &iVar2);
	iVar8 = func_394(iVar1, iVar2, func_299(iVar1), vVar5, !bVar3, bVar4, 1, -1082130432 /* Float: -1f */);
	if (iVar8 != 0)
	{
		switch (iVar8)
		{
			case 7:
				iVar0 = 39;
				break;
			case 8:
				iVar0 = 40;
				break;
			case 3:
				iVar0 = 43;
				break;
			case 6:
				iVar0 = 42;
				break;
			case 5:
				iVar0 = 38;
				break;
			case 4:
				iVar0 = 34;
				break;
			case 1:
				iVar0 = 35;
				break;
			case 11:
				iVar0 = 32;
				break;
			case 2:
				iVar0 = 37;
				break;
			case 12:
				iVar0 = 36;
				break;
			case 15:
				iVar0 = 44;
				break;
			default:
				iVar0 = 41;
				break;
		}
		return iVar0;
	}
	return 0;
}

int func_348(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (func_395(iParam0, iParam1, &uVar0))
	{
		func_396(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_349(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_397() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_398());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_398());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_398());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_399(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_400(iVar2))
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
				if (iVar9 & 8192 != 0 && func_401(iVar2) != 1)
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
					if (!func_402(iVar10))
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

bool func_350(int iParam0, vector3 vParam1, float fParam4)
{
	return BUILTIN::VDIST(func_392(iParam0), vParam1) <= fParam4;
}

void func_351(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_352(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_353()
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

int func_354(int iParam0)
{
	return func_403(iParam0) + 30;
}

void func_355(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *(Global_1900718->f_1[iParam0 /*2*/]) };
	*(Global_1900718->f_1[iParam0 /*2*/]) = { *(Global_1900718->f_1[iParam1 /*2*/]) };
	*(Global_1900718->f_1[iParam1 /*2*/]) = { Var0 };
}

int func_356(int iParam0)
{
	return &(Global_1100950->f_33[iParam0 /*16*/]);
}

int func_357()
{
	return Global_1103537->f_7066.f_492;
}

int func_358(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1103537->f_7066.f_351[iVar0 /*2*/])
	{
		return func_358(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1103537->f_7066.f_351[iVar0 /*2*/])
	{
		return func_358(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_359(int iParam0)
{
	return (Global_1103537->f_7066.f_351[iParam0 /*2*/])->f_1;
}

int func_360(int iParam0, var uParam1, int iParam2)
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

int func_361(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

int func_362(var uParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_352(&Var1, uParam0) && func_404(&Var1, iParam1))
	{
		iVar0 = ((func_405(uParam0) - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_363(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

int func_364(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_INT(&uVar0, &vParam0))
	{
		if (bParam7)
		{
			return iParam8;
		}
	}
	return uVar0;
}

int func_365(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

void func_366(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;

	iVar1 = func_406(1394196983, Param0);
	uVar6 = Param0.f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar6;
		if (!func_324(Param0, &(Param0.f_1), -371275865, iVar0, 0, 1))
		{
		}
		else
		{
			uVar7 = Param0.f_1;
			iVar8 = func_407(Param0);
			iVar3 = func_406(408367626, Param0);
			iVar2 = 0;
			while (iVar2 <= (iVar3 - 1))
			{
				Param0.f_1 = uVar7;
				if (!func_324(Param0, &(Param0.f_1), 1005476533, iVar2, 0, 1))
				{
				}
				else
				{
					iVar4 = func_365(Param0, 1570262717, 1);
					switch (iVar8)
					{
						case joaat("flags"):
							iVar5 = func_287(iVar4, 1);
							break;
						case -146456760:
							iVar5 = func_408(iVar4);
							break;
						case -1108952690:
							iVar5 = func_408(iVar4);
							break;
						default:
							break;
					}
					if (iVar5 == -1)
					{
					}
					else
					{
						switch (iVar8)
						{
							case joaat("flags"):
								func_410(&(uParam5->f_23), func_409(iVar5, 1));
								break;
							case -146456760:
								func_411(&(uParam5->f_13), iVar5);
								break;
							case -1108952690:
								func_411(&(uParam5->f_13.f_5), iVar5);
								break;
							default:
								break;
						}
					}
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

void func_367(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_324(Param0, &(Param0.f_1), -1029131400, 0, 0, 0))
	{
		return;
	}
	uVar3 = Param0.f_1;
	iVar1 = func_406(-1182771454, Param0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar3;
		iVar2 = -1;
		if (!func_324(Param0, &(Param0.f_1), -118633223, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = func_364(Param0, -1108141625, 1, 1, -1);
			if (iVar2 < 0 || iVar2 > 23)
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam5->f_23.f_2), iVar2);
			}
		}
		iVar0++;
	}
}

int func_368(int iParam0)
{
	return func_413(func_412(iParam0, 1731290783, 1));
}

int func_369(int iParam0, int iParam1)
{
	return func_414(iParam0, iParam1);
}

var func_370(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	func_415(iParam0, iParam1, -1105088361, &uVar0, &uVar1);
	return uVar1;
}

void func_371(int iParam0, int iParam1, var uParam2)
{
	vector3 vVar0;

	if (!func_416(iParam0))
	{
		return;
	}
	if (func_395(iParam0, iParam1, &vVar0))
	{
		vVar0.f_2 = -733480474;
		if (!DATAFILE::_DATAFILE_GET_INT(uParam2, &vVar0))
		{
		}
		vVar0.f_2 = 492825771;
		if (!DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), &vVar0))
		{
		}
		vVar0.f_2 = -839279581;
		if (!DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_2), &vVar0))
		{
		}
		vVar0.f_2 = -640941103;
		if (!DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_3), &vVar0))
		{
		}
	}
}

var func_372(int iParam0)
{
	return ((*Global_1276359)[iParam0 /*4*/])->f_2;
}

bool func_373(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 35);
}

int func_374(int iParam0)
{
	return Global_1113601[iParam0 /*35*/];
}

bool func_375(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_376(var uParam0, int iParam1)
{
	return func_288(uParam0, iParam1, 3);
}

var func_377(int iParam0)
{
	return ((*Global_1113601)[iParam0 /*35*/])->f_1;
}

int func_378(var uParam0)
{
	return 1;
}

int func_379(int iParam0, int iParam1)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 35)
	{
		return 0;
	}
	return func_417(iParam0, iParam1);
}

int func_380(int iParam0, int iParam1)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!func_230(iParam1))
	{
		return 0;
	}
	return func_418(iParam0, iParam1);
}

int func_381(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_356(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_382(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_2;
}

int func_383(int iParam0)
{
	return ((*Global_1122836)[iParam0 /*54*/])->f_46;
}

void func_384(var uParam0)
{
	MISC::_COPY_MEMORY(uParam0, &(Global_1103537->f_21.f_40.f_1), 31);
}

int func_385(int iParam0)
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;

	if (!_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iParam0))
	{
		return 0;
	}
	iVar51 = _NAMESPACE26::_0xD1BF325C8252A982(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar50 /*7*/]);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52) || PLAYER::IS_PLAYER_DEAD(iVar52))
		{
		}
		else if (func_419(1048576, iVar52))
		{
			return 1;
		}
		iVar50++;
	}
	return 0;
}

bool func_386(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 59);
}

bool func_387(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_388(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar1) == iParam0)
		{
		}
		else if (func_420(iVar1))
		{
		}
		else if (!bParam4 && !func_421(iVar1, vParam1))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_389(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (func_391(func_422(iParam0, iParam1)))
	{
		return 0;
	}
	if (!func_423(iParam0, &vVar0, iParam1))
	{
		return 1;
	}
	vVar0.f_2 = -146546566;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		return 1;
	}
	return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar0.x, vVar0.y) + 1;
}

Vector3 func_390(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<4> Var3;

	if (iParam2 == 0)
	{
		return func_422(iParam0, iParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_423(iParam0, &Var3, iParam1))
	{
		return vVar0;
	}
	Var3.f_2 = -146546566;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -733684727;
	Var3.f_3 = iParam2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &Var3);
	return vVar0;
}

int func_391(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_392(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_393(struct<2> Param0, int iParam2, int iParam3)
{
	*iParam2 = func_298(func_297(Param0));
	*iParam3 = func_171(Param0);
}

int func_394(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, int iParam8, float fParam9)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	int iVar13;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 79)
	{
		return 11;
	}
	if (!func_424())
	{
		return 2;
	}
	uVar1 = func_361(iParam0);
	iVar2 = func_362(uVar1, iParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_425(iParam0, iVar2, iParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_426(uVar1, iParam1))
	{
		vVar4 = { func_427(uVar1, iParam1) };
		iVar7 = func_428(uVar1, iVar2);
		if (!func_429(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_430(iParam2) == -1)
	{
		return 6;
	}
	if (fParam9 >= 0f && !func_391(vParam3))
	{
		vVar8 = { func_323(iParam0, iVar2) };
		if (BUILTIN::VDIST(vParam3, vVar8) > fParam9)
		{
			return 12;
		}
	}
	if (func_431(iParam2))
	{
		iVar11 = func_432(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		if (!func_433(iVar11))
		{
			return 13;
		}
		if (func_434(iVar11))
		{
			return 14;
		}
	}
	if (func_385(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 1717788883 && func_435(func_181(), func_181(), 0, bParam7))
		{
			return 3;
		}
		iVar12 = func_436(iParam0, iVar2);
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar12))
		{
			return 8;
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar12))
		{
			return 7;
		}
		iVar13 = func_437(iParam0, iVar2);
		if (iVar13 != 0)
		{
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
			{
				return 10;
			}
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar13))
			{
				return 9;
			}
		}
	}
	return 0;
}

bool func_395(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_438(iParam0);
	uParam2->f_4 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_396(var uParam0, int iParam1, var uParam2)
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

int func_397()
{
	return Global_1051202->f_12;
}

char* func_398()
{
	return "unnamed";
}

int func_399(int iParam0)
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

int func_400(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_439(35, iParam0);
}

int func_401(int iParam0)
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

bool func_402(int iParam0)
{
	if (func_440(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_441(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_403(int iParam0)
{
	return iParam0 * 31;
}

bool func_404(var uParam0, int iParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_405(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_352(&vVar1, uParam0))
	{
		vVar1.f_2 = 866900867;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

int func_406(int iParam0, vector3 vParam1, var uParam4, var uParam5)
{
	vParam1.f_2 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam1);
}

int func_407(struct<5> Param0)
{
	return func_365(Param0, -419812745, 1);
}

int func_408(int iParam0)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	Var0 = (Global_1070356->f_26934[30 /*4*/])->f_3;
	Var0.f_2 = 0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	Var0.f_2 = 2;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	iVar6 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

int func_409(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1806630731;
		case 1:
			return 518798111;
		case 2:
			return 1859868723;
		case 3:
			return 522505504;
		case 4:
			return -2001405328;
		case 5:
			return 1042373141;
		case 6:
			return -890716772;
		case 7:
			return 1992773981;
		case 8:
			return -2010581984;
		case 9:
			return -1824322988;
		case 10:
			return -1518489911;
		case 11:
			return -1348549877;
		case 12:
			return -1040947274;
		case 13:
			return 1803795142;
		case 14:
			return 2015728894;
		case 15:
			return -1211373264;
		case 16:
			return -761617270;
		case 17:
			return -1067974651;
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

void func_410(var uParam0, int iParam1)
{
	if (func_442(uParam0, func_287(iParam1, 1), 1))
	{
	}
}

void func_411(var uParam0, int iParam1)
{
	if (func_442(uParam0, iParam1, 4))
	{
	}
}

int func_412(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (!func_443(iParam0))
	{
		return 0;
	}
	if (!func_444(&Var0))
	{
		return 0;
	}
	if (!func_445(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!func_445(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_445(Var0, &(Var0.f_1), 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_445(Var0, &(Var0.f_1), 17, iParam1, 0, iParam2))
	{
		return 0;
	}
	return func_446(Var0, 37, 1);
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case -1690863991:
			return 2;
		case 1286170048:
			return 3;
		case -342492333:
			return 4;
		case 1140089012:
			return 5;
		case 634321112:
			return 8;
		case -2079273178:
			return 7;
		case -147846054:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_414(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_443(iParam0))
	{
		return joaat("none");
	}
	if (!func_444(&Var1))
	{
		return joaat("none");
	}
	if (!func_445(Var1, &(Var1.f_1), 7, 0, 0, 1))
	{
		return joaat("none");
	}
	if (!func_445(Var1, &(Var1.f_1), 8, iParam0, 0, 1))
	{
		return joaat("none");
	}
	if (!func_445(Var1, &(Var1.f_1), 24, 0, 0, 0))
	{
		return joaat("none");
	}
	if (!func_445(Var1, &(Var1.f_1), 25, -1395074057, 0, 0))
	{
		return joaat("none");
	}
	iVar0 = func_447(Var1, 4);
	if (iVar0 != 1)
	{
		return joaat("none");
	}
	if (!func_445(Var1, &(Var1.f_1), 26, 0, 0, 1))
	{
		return joaat("none");
	}
	uVar6 = func_448(Var1);
	if (iParam1 == 0)
	{
	}
	else if (func_445(Var1, &(Var1.f_1), 23, iParam1, 0, 0))
	{
		uVar6 = func_448(Var1);
	}
	return uVar6;
}

int func_415(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_443(iParam0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_444(&Var0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_445(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_445(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_445(Var0, &(Var0.f_1), 21, 0, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	if (!func_445(Var0, &(Var0.f_1), 22, iParam2, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	*uParam3 = func_449(Var0);
	*uParam4 = func_448(Var0);
	if (iParam1 != 0)
	{
		if (func_445(Var0, &(Var0.f_1), 23, iParam1, 0, 0))
		{
			*uParam3 = func_449(Var0);
			*uParam4 = func_448(Var0);
		}
	}
	if (*uParam3 == 0)
	{
		*uParam3 = -1;
		*uParam4 = joaat("none");
		return 0;
	}
	return 1;
}

int func_416(int iParam0)
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

bool func_417(int iParam0, int iParam1)
{
	return func_288((*Global_1124565)[iParam0 /*7*/], iParam1, 2);
}

bool func_418(int iParam0, int iParam1)
{
	return func_288(&(((*Global_1124565)[iParam0 /*7*/])->f_3), iParam1, 3);
}

bool func_419(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_420(int iParam0)
{
	int iVar0;

	if (((*Global_1055966)[iParam0 /*436*/])->f_2 != -1)
	{
		return 1;
	}
	iVar0 = func_450(iParam0);
	if (iVar0 == 2 || iVar0 == 1)
	{
		return 1;
	}
	if (func_451(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_421(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;

	vVar0 = { func_392(iParam0) };
	if (!func_391(vParam1))
	{
		if (func_391(vVar0))
		{
			return 0;
		}
		fVar3 = BUILTIN::VDIST(vVar0, vParam1);
		fVar4 = 1500f;
		fVar5 = 125f;
		if (fVar3 < fVar5)
		{
			return 0;
		}
		if (fVar3 > fVar4)
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_422(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_423(iParam0, &vVar3, iParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &vVar3);
	return vVar0;
}

int func_423(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_452(iParam0, uParam1))
	{
		return 0;
	}
	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(*uParam1, uParam1->f_1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		Var2 = { *uParam1 };
		Var2.f_2 = 1089670230;
		Var2.f_3 = iVar1;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
		{
		}
		else
		{
			Var2.f_2 = 1196324698;
			Var2.f_3 = iParam2;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
			{
			}
			else
			{
				*uParam1 = { Var2 };
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_424()
{
	if (func_28())
	{
		return 0;
	}
	return 1;
}

int func_425(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;

	uVar0 = func_453(iParam0, iParam1, 2);
	if (func_454(iParam0, iParam1, uVar0))
	{
		return 1;
	}
	vVar1 = { func_323(iParam0, iParam1) };
	if (func_391(vVar1))
	{
		return 0;
	}
	uVar4 = func_455(func_361(iParam0), iParam1);
	if ((iParam2 && func_453(iParam0, iParam1, 1)) && func_456(vVar1, uVar4))
	{
		*bParam3 = 1;
		return 1;
	}
	return func_457(vVar1, uVar4, uVar0);
}

int func_426(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_352(&Var1, uParam0) && func_404(&Var1, iParam1))
	{
		func_458(Var1, -528314399, &iVar0, 0);
	}
	return iVar0;
}

Vector3 func_427(var uParam0, int iParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_352(&Var3, uParam0) && func_404(&Var3, iParam1))
	{
		func_459(Var3, -370006557, &vVar0, 1);
	}
	return vVar0;
}

int func_428(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 0;
	if (func_352(&Var1, uParam0))
	{
		if (func_460(&Var1, iParam1))
		{
			func_461(Var1, 1342438652, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_462(iVar0);
	}
	return iVar6;
}

int func_429(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_391(vParam1))
	{
		return 0;
	}
	if (func_463(iParam0))
	{
		return 0;
	}
	fVar0 = 5f;
	fVar1 = func_464(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, fVar0, fVar1))
	{
		return 0;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, fVar0, fVar1))
	{
		return 0;
	}
	fVar1 = (fVar1 * 0.75f);
	if (fVar1 < 150f)
	{
		fVar1 = 150f;
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_465(iParam0))
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return 1;
}

int func_430(int iParam0)
{
	int iVar0;

	if (!func_466(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_467(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_431(int iParam0)
{
	switch (iParam0)
	{
		case -260420884:
		case 850213441:
		case 1884341302:
		case 1918154385:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

int func_433(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_434(int iParam0)
{
	if (!func_433(iParam0))
	{
		return false;
	}
	return (func_468(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

int func_435(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!bParam4)
	{
		if (func_28())
		{
			return 1;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_30(Param2))
	{
		Var0 = { func_469() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_30(Var0)) && !func_165(Var0, Param0))
	{
		return 1;
	}
	Var2 = { func_100() };
	if (func_30(Var2) && (!func_30(Var2) || !func_165(Param0, Var2)))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_363(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

int func_437(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_363(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_1;
}

int func_438(int iParam0)
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

int func_439(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_288(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_227())
	{
		return func_288(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_288(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_440(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_441(int iParam0)
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
		func_470(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_471(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

bool func_442(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_443(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

int func_444(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = func_472();
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return 1;
}

int func_445(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(iParam5, &Param0))
	{
		return 0;
	}
	return 1;
}

var func_446(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_447(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam0);
}

var func_448(struct<5> Param0)
{
	return func_446(Param0, 40, 1);
}

var func_449(struct<5> Param0)
{
	return func_446(Param0, 38, 1);
}

int func_450(int iParam0)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return 0;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return Global_17172.f_2619.f_2;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	return ((*Global_1097610)[iVar0 /*51*/])->f_48;
}

int func_451(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_473(((*Global_1277166)[iVar0 /*86*/])->f_85, iParam1);
	}
	return 0;
}

int func_452(int iParam0, var uParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_474(iParam0))
	{
		return 0;
	}
	uVar0 = func_475(iParam0);
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return 0;
	}
	*uParam1 = uVar0;
	uParam1->f_2 = -678729477;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
	{
		return 0;
	}
	return 1;
}

int func_453(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_363(iParam0, iParam1);
	return func_473((Global_1234391->f_401[iVar0 /*7*/])->f_2, iParam2);
}

int func_454(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	iVar0 = 0;
	while (iVar0 <= (func_476(iParam0, iParam1) - 1))
	{
		vVar1 = { func_477(func_361(iParam0), iParam1, iVar0) };
		uVar4 = func_478(func_361(iParam0), iParam1, iVar0);
		if (func_391(vVar1))
		{
		}
		else
		{
			if (func_457(vVar1, uVar4, uParam2))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_455(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901929->f_160.f_34;
	if (func_352(&Var1, uParam0) && func_460(&Var1, iParam1))
	{
		func_479(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_456(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false, false), vParam0) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_457(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iVar0 = 575122756;
	}
	return VOLUME::_0x397769175A7DBB30(vParam0, fParam3, 0, 0, iVar0);
}

int func_458(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_459(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_460(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_461(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case joaat("primary"):
			return 0;
		case joaat("secondary"):
			return 1;
		case -177397452:
			return 2;
	}
	return 0;
}

bool func_463(int iParam0)
{
	return func_480(iParam0, 4);
}

float func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 450f;
		case 1:
			return 450f;
		case 2:
			return 250f;
		default:
			break;
	}
	return 450f;
}

int func_465(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if ((Global_1132418->f_2[iParam0 /*41*/])->f_9 == iVar0 || (Global_1132418->f_2[iParam0 /*41*/])->f_9 == (iVar0 - 1))
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0)
{
	int iVar0;

	iVar0 = func_481(iParam0);
	if (iVar0 != 0 && func_482(iVar0))
	{
		return 0;
	}
	if (iParam0 == 1717788883)
	{
		return func_483();
	}
	return 1;
}

bool func_467(int iParam0)
{
	return Global_1214482[iParam0 /*27*/] == -1;
}

bool func_468(int iParam0)
{
	int iVar0;

	if (!func_433(iParam0))
	{
		return false;
	}
	iVar0 = func_484(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

struct<2> func_469()
{
	return *Global_1051163;
}

void func_470(int iParam0)
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
	func_471(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_471(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

var func_472()
{
	return (Global_1070356->f_26934[32 /*4*/])->f_3;
}

bool func_473(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_474(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_327(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_328(iVar0);
	switch (iVar1)
	{
		case 2:
			return 1;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_475(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_474(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_327(iParam0);
	iVar2 = func_328(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_485(2);
		case 1:
			return func_485(3);
		default:
			break;
	}
	return uVar0;
}

int func_476(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_363(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_6;
}

Vector3 func_477(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_352(&Var3, uParam0) && func_460(&Var3, iParam1)) && func_486(&Var3, iParam2))
	{
		func_459(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

var func_478(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901929->f_160.f_35;
	if ((func_352(&Var1, uParam0) && func_460(&Var1, iParam1)) && func_486(&Var1, iParam2))
	{
		func_479(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_479(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_480(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_473((*Global_1132001)[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_481(int iParam0)
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
		case 1427578635:
		case 1532822440:
		case joaat("dynamic"):
		case 1884341302:
		case 1918154385:
			return 1;
		case -1261475678:
		case -669677371:
		case -468635158:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_482(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_483()
{
	return func_487(func_29(0));
}

int func_484(int iParam0)
{
	if (!func_433(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

var func_485(int iParam0)
{
	return &(Global_1103537->f_21.f_2.f_1[iParam0]);
}

bool func_486(var uParam0, int iParam1)
{
	uParam0->f_2 = 1700129460;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_487(struct<2> Param0)
{
	return func_488(Param0, 1, 4);
}

bool func_488(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_30(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_489(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_489(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_297(Param0);
	}
	return -1;
}

