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
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
#endregion

void __EntryFunction__()
{
	var uVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	while (!func_2(0, 0))
	{
		func_3(&Global_1137850, &uVar0, &Global_1138048, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT());
		func_4(&uVar0);
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1()
{
	int iVar0;

	if (func_7())
	{
		func_6();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_8(32, -1);
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1137850, 198, 25);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Global_1137850), 198, "g_mpNetPlayerCampHost");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138048, 257, 26);
	func_11(NETWORK::_0xBA24095EA96DFE17(&Global_1138048), 257, "g_mpNetPlayerCampPlayer");
	func_12(0);
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

void func_3(var uParam0, var uParam1, var uParam2, bool bParam3)
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
				func_13(uParam0, uParam1, uParam2, iVar0, bParam3);
				break;
		}
		iVar0++;
	}
}

void func_4(var uParam0)
{
	func_14(uParam0);
}

void func_5()
{
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_7()
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

void func_8(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_9()
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
		if (func_15() == 0)
		{
			if (func_16())
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

void func_13(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam3, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 197:
			func_17(uParam0, uParam1, uParam2, iParam3, bParam4);
			break;
	}
}

void func_14(var uParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (func_18(16))
	{
		return;
	}
	if (func_19(1, iVar0))
	{
		func_20(uParam0, 1);
	}
	if (func_19(2, iVar0))
	{
		func_20(uParam0, 0);
	}
	if (func_19(32, iVar0))
	{
		func_21(uParam0);
	}
	if (func_19(4, iVar0))
	{
		func_22(uParam0, 1);
	}
	if (func_19(8, iVar0))
	{
		func_22(uParam0, 0);
	}
	if (func_19(16, iVar0))
	{
		func_23(uParam0);
	}
	if (func_24())
	{
		if (!func_19(2, iVar0) && !func_19(8, iVar0))
		{
			uParam0->f_4++;
			func_25(uParam0);
		}
	}
	if (func_19(64, iVar0))
	{
		func_26(5, iVar0, *uParam0, 1, 0);
		func_27(64, iVar0);
	}
}

int func_15()
{
	return Global_1572887.f_13;
}

bool func_16()
{
	return Global_1051252.f_8;
}

void func_17(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<7> Var0;
	int iVar9;
	int iVar10;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam3, &Var0, 9))
	{
		return;
	}
	iVar9 = Var0.f_5;
	switch (Var0.f_4)
	{
		case 0:
			if (!bParam4)
			{
				return;
			}
			if (func_28(uParam0, Var0.f_6))
			{
				uParam0->f_67[iVar9 /*3*/] = { Var0.f_6 };
				uParam0->f_164[iVar9] = 1;
				func_26(1, Var0.f_5, Var0.f_6, 0, 0);
			}
			else
			{
				uParam0->f_67[iVar9 /*3*/] = { func_29() };
				uParam0->f_164[iVar9] = 0;
				func_26(2, Var0.f_5, Var0.f_6, 0, 0);
			}
			break;
		case 1:
			func_30(32, Var0.f_5);
			break;
		case 2:
			func_27(1, Var0.f_5);
			func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
			func_32(uParam1);
			break;
		case 5:
			if (!bParam4)
			{
				return;
			}
			uParam0->f_67[iVar9 /*3*/] = { func_29() };
			uParam0->f_164[iVar9] = 0;
			break;
		case 6:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_1))
			{
				return;
			}
			iVar10 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::IS_ENTITY_DEAD(iVar10))
			{
				return;
			}
			TASK::_0xFDECCA06E8B81346(iVar10);
			break;
	}
}

bool func_18(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_19(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	return (Global_1138048[iVar0 /*8*/].f_7 && iParam0) != 0;
}

void func_20(var uParam0, bool bParam1)
{
	var uVar0;

	if (bParam1)
	{
		func_33(uParam0, &(uParam0->f_3), &uVar0, &(uParam0->f_6), &(uParam0->f_5), 0);
		if (func_34(uParam0))
		{
			func_27(1, PLAYER::PLAYER_ID());
			func_26(0, PLAYER::PLAYER_ID(), *uParam0, 1, 0);
		}
		else
		{
			func_32(uParam0);
			func_27(1, PLAYER::PLAYER_ID());
		}
	}
	else
	{
		func_27(2, PLAYER::PLAYER_ID());
		func_30(8, PLAYER::PLAYER_ID());
	}
}

void func_21(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	func_35(&(Global_1138048[iVar1 /*8*/]), *uParam0, uParam0->f_6);
	func_27(32, iVar0);
	func_30(16, iVar0);
}

void func_22(var uParam0, bool bParam1)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!func_36())
	{
		return;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) < 1)
	{
		if (bParam1)
		{
			func_27(4, iVar8);
		}
		else
		{
			func_27(8, PLAYER::PLAYER_ID());
		}
		func_32(uParam0);
		return;
	}
	if (bParam1)
	{
		iVar8 = PLAYER::PLAYER_ID();
		iVar9 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8);
		Var0 = iVar9;
		Var0.f_1 = iVar8;
		Var0.f_2 = uParam0->f_5;
		iVar10 = iVar8;
		Global_1138048[iVar10 /*8*/].f_4 = 1;
		func_37(&(Global_1958000.f_2));
		func_27(4, iVar8);
	}
	else
	{
		iVar8 = uParam0->f_4;
		iVar9 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8);
		Var0 = iVar9;
		Var0.f_1 = uParam0->f_4;
		func_27(8, PLAYER::PLAYER_ID());
	}
	Var0.f_7 = iVar8;
	Var0.f_3 = { *uParam0 };
	Var0.f_6 = uParam0->f_3;
	func_32(uParam0);
	uParam0->f_7 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_38(), &Var0, 8, 1024);
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (!func_39(&(Global_1138048[iVar1 /*8*/]), uParam0))
	{
		return;
	}
	else
	{
		func_27(16, iVar0);
		func_30(4, iVar0);
	}
}

bool func_24()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1138048)
	{
		if (Global_1138048[iVar0 /*8*/].f_4)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_4 < 0 || uParam0->f_4 == 32)
	{
		uParam0->f_4 = 0;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (iVar1 == uParam0->f_4)
	{
		return;
	}
	iVar2 = uParam0->f_4;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
	{
		return;
	}
	if (func_40(Global_1138048[uParam0->f_4 /*8*/]))
	{
		return;
	}
	if (!Global_1138048[uParam0->f_4 /*8*/].f_4)
	{
		return;
	}
	if (func_41(Global_34, Global_1138048[uParam0->f_4 /*8*/], 1) < 22500f)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_7, false))
		{
			*uParam0 = { Global_1138048[uParam0->f_4 /*8*/] };
			uParam0->f_3 = Global_1138048[uParam0->f_4 /*8*/].f_3;
			func_30(2, iVar0);
		}
	}
}

void func_26(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	struct<7> Var0;
	var uVar9;
	int iVar10;

	Var0 = 197;
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_6 = { vParam2 };
	if (bParam5)
	{
		iVar10 = NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT();
		uVar9 = func_42(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar10));
	}
	else if (bParam6)
	{
		uVar9 = func_43(0, 8);
	}
	else
	{
		uVar9 = func_42(iParam1);
	}
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, 24, &uVar9);
}

void func_27(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1138048[iVar0 /*8*/].f_7 = (Global_1138048[iVar0 /*8*/].f_7 - (Global_1138048[iVar0 /*8*/].f_7 && iParam0));
}

bool func_28(var uParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		if (func_44(vParam1, uParam0->f_67[iVar0 /*3*/]) || BUILTIN::VDIST2(vParam1, uParam0->f_67[iVar0 /*3*/]) < 75625f)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

Vector3 func_29()
{
	return 0f, 0f, 0f;
}

void func_30(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1138048[iVar0 /*8*/].f_7 = (Global_1138048[iVar0 /*8*/].f_7 || iParam0);
}

var func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_32(var uParam0)
{
	*uParam0 = { func_29() };
	uParam0->f_3 = 0f;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
}

void func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	vector3 vVar16;
	vector3 vVar19;
	var uVar22;
	var uVar23;
	float fVar24;
	float fVar25;
	bool bVar26;
	int iVar27;
	vector3 vVar28[32];

	fVar25 = 999999.9f;
	bVar26 = false;
	Var0 = Global_1071686.f_28448[46 /*4*/].f_3;
	iVar5 = func_45();
	iVar6 = func_46(iVar5);
	Var0.f_2 = 1655936658;
	Var0.f_3 = iVar6;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1058386141;
		iVar7 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
		uVar15 = Var0.f_1;
		iVar10 = 0;
		while (iVar10 < vVar28.x)
		{
			iVar27 = iVar10;
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar27) || iVar27 == PLAYER::PLAYER_ID())
			{
				vVar28[iVar10 /*3*/] = { func_29() };
			}
			else
			{
				vVar28[iVar10 /*3*/] = { func_47(iVar27) };
			}
			iVar10++;
		}
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			Var0.f_1 = uVar15;
			bVar26 = false;
			Var0.f_2 = -738381918;
			Var0.f_3 = iVar8;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
			}
			else if (!(iVar9 == iParam5 || iParam5 == 0))
			{
			}
			else
			{
				Var0.f_2 = 170329912;
				DATAFILE::_DATAFILE_GET_HASH(&iVar9, &Var0);
				Var0.f_2 = 519988399;
				if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
				{
				}
				else
				{
					Var0.f_2 = -518277907;
					DATAFILE::_DATAFILE_GET_FLOAT(&vVar16, &Var0);
					Var0.f_2 = -1363423190;
					DATAFILE::_DATAFILE_GET_FLOAT(&(vVar16.f_1), &Var0);
					Var0.f_2 = 861329762;
					DATAFILE::_DATAFILE_GET_FLOAT(&(vVar16.f_2), &Var0);
					fVar24 = BUILTIN::VDIST2(vVar16, Global_35);
					if (fVar24 >= fVar25)
					{
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 32)
						{
							if (func_40(vVar28[iVar10 /*3*/]))
							{
							}
							else if ((func_44(vVar16, Global_1138048[iVar10 /*8*/]) || (!func_40(Global_1138048[iVar10 /*8*/]) && BUILTIN::VDIST2(vVar16, Global_1138048[iVar10 /*8*/]) < 75625f)) || BUILTIN::VDIST2(vVar28[iVar10 /*3*/], vVar16) < 100f)
							{
								bVar26 = true;
							}
							else
							{
								iVar10++;
							}
						}
						if (((!bVar26 && !func_48(vVar16, 1, 0, 0)) && !func_49(vVar16, 150f)) && !VOLUME::_0xAA9EE2AAFC717623(vVar16, 0, 0, 0))
						{
							Var0.f_2 = -1425398587;
							DATAFILE::_DATAFILE_GET_FLOAT(&uVar22, &Var0);
							Var0.f_2 = 1808799200;
							DATAFILE::_DATAFILE_GET_HASH(&uVar11, &Var0);
							Var0.f_2 = -1067565689;
							DATAFILE::_DATAFILE_GET_INT(&uVar13, &Var0);
							vVar19 = { vVar16 };
							uVar23 = uVar22;
							fVar25 = fVar24;
							uVar12 = uVar11;
							uVar14 = uVar13;
							if (fVar24 > 150f)
							{
								*uParam2 = 1;
							}
							else
							{
								*uParam2 = 0;
							}
						}
					}
				}
			}
			iVar8++;
		}
	}
	if (func_40(*uParam0))
	{
		*uParam0 = { vVar19 };
		*uParam1 = uVar23;
		*uParam3 = uVar12;
		*uParam4 = uVar14;
	}
}

bool func_34(var uParam0)
{
	if (func_40(*uParam0) || BUILTIN::VDIST(*uParam0, func_47(PLAYER::PLAYER_ID())) > 150f)
	{
		func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

void func_35(var uParam0, vector3 vParam1, var uParam4)
{
	struct<8> Var0;

	Var0 = { vParam1 };
	Var0.f_4 = 7f;
	Var0.f_5 = 544;
	Var0.f_6 = -1975763068;
	Var0.f_7 = uParam4;
	uParam0->f_5 = VOLUME::_0x183C0B6CFEFFCAE4(&Var0);
}

bool func_36()
{
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_38()))
	{
		SCRIPTS::REQUEST_SCRIPT(func_38());
		return false;
	}
	return true;
}

void func_37(var uParam0)
{
	func_50(uParam0, 0f);
}

char* func_38()
{
	return "player_camp";
}

bool func_39(var uParam0, var uParam1)
{
	int iVar0;

	if (!VOLUME::_0xA4A4359320345B34(uParam0->f_5))
	{
		func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		func_32(uParam1);
		func_27(16, PLAYER::PLAYER_ID());
		return false;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(uParam0->f_5);
	switch (iVar0)
	{
		case 4:
			func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
			func_32(uParam1);
			func_27(16, PLAYER::PLAYER_ID());
			return false;
		case 1:
		case 2:
			return false;
		case 3:
			uParam0->f_6 = VOLUME::_0x351D71B8B72B858B(uParam0->f_5);
			func_30(4, PLAYER::PLAYER_ID());
			func_27(16, PLAYER::PLAYER_ID());
			return true;
		default:
			break;
	}
	return false;
}

bool func_40(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_41(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_51(vVar0, vParam1);
}

var func_42(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam0);
	return uVar0;
}

var func_43(int iParam0, int iParam1)
{
	return func_52(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

bool func_44(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_45()
{
	return Global_1896622.f_41;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return 1776960747;
}

Vector3 func_47(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_48(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_40(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 8192;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_49(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (func_53(iVar0))
		{
			if (BUILTIN::VDIST(func_54(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_50(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_55() - fParam1);
	func_56(uParam0, 1);
	func_57(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_51(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

var func_52(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_58() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_59());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_59());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_59());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_60(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_61(iVar2))
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
				if (iVar9 & 8192 != 0 && func_62(iVar2) != 1)
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
					if (!func_63(iVar10))
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

bool func_53(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_64(Global_1835011[iParam0 /*72*/].f_1);
}

Vector3 func_54(int iParam0)
{
	return func_65(iParam0);
}

float func_55()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_58()
{
	return Global_1051252.f_12;
}

char* func_59()
{
	return "unnamed";
}

int func_60(int iParam0)
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

bool func_61(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_66(36, iParam0);
}

int func_62(int iParam0)
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

bool func_63(int iParam0)
{
	if (func_67(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_68(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_64(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_69(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

Vector3 func_65(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

bool func_66(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_70(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_71())
	{
		return func_70(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_70(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_67(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_68(int iParam0)
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
		func_72(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_73(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

int func_69(struct<2> Param0)
{
	int iVar0;

	if (!func_74(Param0))
	{
		return -1;
	}
	iVar0 = func_75(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

bool func_70(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_71()
{
	return Global_1102219.f_3672;
}

void func_72(int iParam0)
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
	func_73(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_73(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_74(struct<2> Param0)
{
	if (!func_76(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_77(Param0))
	{
		return false;
	}
	return true;
}

int func_75(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1071686.f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_78(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_78(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
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

bool func_76(int iParam0)
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

int func_77(int iParam0)
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

bool func_78(struct<2> Param0, var uParam2)
{
	if (!func_74(Param0))
	{
		return false;
	}
	func_79(uParam2);
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

void func_79(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

