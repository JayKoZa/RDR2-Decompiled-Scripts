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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	iVar0 = MISC::GET_GAME_TIMER();
	func_1();
	iVar1 = (MISC::GET_GAME_TIMER() - iVar0);
	Global_1266395->f_24 = func_2("GFMP", 60, -1, 0, 0);
	Global_1266395->f_7 = NETWORK::PARTICIPANT_ID_TO_INT();
	((*Global_1263130)[Global_1266395->f_7 /*102*/])->f_97 = PLAYER::PLAYER_ID();
	while (!func_3(0, 0))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
}

void func_1()
{
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
}

int func_2(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam1 < 1)
	{
		iParam1 = 10;
	}
	if (!HUD::_DOES_TEXT_DATABASE_EXIST(sParam0))
	{
		iVar0 = 0;
		return 0;
	}
	bVar1 = false;
	while ((HUD::_TEXT_DATABASE_REQUEST(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_3(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_3(bParam3, bParam4);
	if (bVar1)
	{
		func_11();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	while ((!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_3(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_3(bParam3, bParam4);
	if (bVar1)
	{
		func_11();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
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

void func_4()
{
	if (!Global_1266395->f_24)
	{
		Global_1266395->f_24 = func_2("GFMP", 60, -1, 0, 0);
		return;
	}
	if ((func_12(2, 255) || !UNLOCK::_UNLOCK_IS_VISIBLE(759426019)) || !UNLOCK::_UNLOCK_IS_UNLOCKED(759426019))
	{
		Global_1266395 = 0;
		return;
	}
	if (!(func_13() && func_14()))
	{
		Global_1266395 = 0;
		return;
	}
	if (!func_15())
	{
		Global_1266395 = 0;
		return;
	}
	Global_1266395 = 1;
	func_16();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17();
	}
	func_18();
}

void func_5()
{
	func_11();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_11();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_7()
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
			func_11();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_11();
					break;
				case 2:
					func_11();
					break;
				case 4:
					func_11();
					break;
				case 3:
					func_11();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_11();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_11();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_11();
		}
		if (func_19() == 0)
		{
			if (func_20())
			{
				func_11();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_11();
	}
	return 1;
}

int func_8()
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

void func_9()
{
	func_21(Global_1263000);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1263000, 130, 39);
	func_22(NETWORK::_0xBA24095EA96DFE17(Global_1263000), 130, "g_mpGangfeudHostData");
	if (func_23())
	{
		func_24(Global_1263130);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1263130, 3265, 40);
		func_25(NETWORK::_0x690806BC83BC8CA2((*Global_1263130)[0 /*102*/]), 3265, "g_mpGangfeudPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1263130, 3265, 40);
		func_25(NETWORK::_0x690806BC83BC8CA2((*Global_1263130)[0 /*102*/]), 3265, "g_mpGangfeudPlayerData");
		func_26(Global_1266395);
	}
}

void func_10(bool bParam0)
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
					func_11();
					break;
				case 2:
					func_11();
					break;
				case 4:
					func_11();
					break;
				case 3:
					func_11();
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
			func_11();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_11()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_12(int iParam0, int iParam1)
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

int func_13()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

int func_14()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_5;
}

int func_15()
{
	if (func_27() == 1)
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_30(func_29(), 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_16()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -507840394:
				func_31(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_17()
{
	switch (&Global_1263000)
	{
		case 0:
			func_32(1);
			break;
		case 1:
			func_33();
			break;
	}
}

void func_18()
{
	if (Global_1266395->f_7 == -1)
	{
		return;
	}
	func_34((*Global_1263130)[Global_1266395->f_7 /*102*/]);
	if ((Global_1939231->f_1433 == 1 || Global_1939231->f_1433 == 0) || Global_1939231->f_1433.f_2 == 1)
	{
		func_35();
	}
	func_36();
	if (Global_1266395->f_23 && !func_37(255))
	{
		if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_38("NG_CANNOT_SEND_CHALLENGE", 10000, 0, 0, 0, 1);
		}
		else
		{
			func_38("NG_CANNOT_SEND_CHALLENGE_MEMBER", 10000, 0, 0, 0, 1);
		}
		Global_1266395->f_23 = 0;
	}
	switch (((*Global_1263130)[&Global_1275573 /*102*/])->f_99)
	{
		case 0:
			if (func_39())
			{
				func_40(1);
			}
			break;
		case 1:
			if (func_41())
			{
				if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
				{
					func_40(2);
				}
				else
				{
					func_42(&(Global_1266395->f_2), 1);
					func_40(3);
				}
			}
			break;
		case 3:
			if (!func_43(&(Global_1266395->f_2)))
			{
				func_42(&(Global_1266395->f_2), 1);
			}
			if (func_44(&(Global_1266395->f_2)) > 60f)
			{
				func_40(1);
			}
			break;
		case 2:
			if (&Global_1199402 != -1)
			{
				func_45();
			}
			break;
		case 4:
			func_46();
			break;
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

void func_21(var uParam0)
{
	*uParam0 = 0;
}

int func_22(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_23()
{
	return !Global_1572887->f_9;
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_47((*uParam0)[iVar0 /*102*/]);
		iVar0++;
	}
}

int func_25(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_26(var uParam0)
{
	uParam0->f_5 = 0;
}

int func_27()
{
	return Global_1572887->f_16;
}

bool func_28()
{
	return func_49(func_48(0));
}

struct<2> func_29()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_30(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_50(*Global_1051163) && !func_51(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_52(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_12(iParam3, 255))
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
	if (func_53())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_50(*Global_1051163))
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

void func_31(int iParam0)
{
	struct<12> Var0;

	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	switch (Var0)
	{
		case 30:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_54(Var0);
			}
			func_55(&Var0);
			break;
	}
}

void func_32(int iParam0)
{
	Global_1263000 = iParam0;
}

void func_33()
{
	var uVar0;
	int iVar33;
	int iVar34;

	uVar0 = 32;
	iVar34 = _NAMESPACE26::_0x53A94294FDDCF98C(&uVar0, 1);
	if (iVar34 < 2)
	{
		return;
	}
	iVar33 = 0;
	while (iVar33 < 1)
	{
		func_56();
		Global_1266395->f_80 = (Global_1266395->f_80 + 1 % 32);
		iVar33++;
	}
}

void func_34(var uParam0)
{
	var uVar0;

	if (((Global_1266395->f_16 != 255 && !PED::_0x3AA24CCC0D451379(Global_34)) && !func_57()) || (Global_1266395->f_16 != 255 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1266395->f_16)))
	{
		Global_1266395->f_16 = 255;
	}
	if (uParam0->f_98 != Global_1275573->f_15)
	{
		uParam0->f_98 = Global_1275573->f_15;
		if (_NAMESPACE26::_0x149A2751AB66AC02(Global_1275573->f_15) > 1 && !_NAMESPACE26::_0x424B17A7DC5C90BC(Global_1275573->f_10))
		{
			func_58(uParam0);
		}
		else
		{
			func_59(uParam0);
		}
	}
	if (((*uParam0)[Global_1266395->f_30 /*3*/])->f_1 == -1)
	{
		return;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0[Global_1266395->f_30 /*3*/]) || _NAMESPACE26::_0x149A2751AB66AC02(uParam0[Global_1266395->f_30 /*3*/]) < 1)
	{
		((*uParam0)[Global_1266395->f_30 /*3*/])->f_2 = -1;
		((*uParam0)[Global_1266395->f_30 /*3*/])->f_1 = -1;
		(*uParam0)[Global_1266395->f_30 /*3*/] = uVar0;
		if (Global_1266395->f_8 > Global_1266395->f_30)
		{
			Global_1266395->f_8 = Global_1266395->f_30;
		}
		return;
	}
	func_60((*uParam0)[Global_1266395->f_30 /*3*/]);
}

void func_35()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = &Global_1275573;
	Var1 = { func_61() };
	if ((func_50(Var1) || ((*Global_1263130)[iVar0 /*102*/])->f_99 > 1) || Global_1102099->f_935.f_27 != -1)
	{
		func_62();
	}
	else
	{
		func_63();
	}
}

void func_36()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = &Global_1275573;
	if (((*Global_1263130)[iVar0 /*102*/])->f_99 > 1)
	{
		func_64(1);
		return;
	}
	if (&Global_1275573->f_22[&Global_1275573] == 0)
	{
		func_64(1);
		return;
	}
	Var1 = { func_61() };
	if (func_50(Var1))
	{
		func_64(1);
		return;
	}
	if (func_50(((*Global_1055966)[iVar0 /*436*/])->f_2) && func_65(((*Global_1055966)[iVar0 /*436*/])->f_2))
	{
		func_64(1);
		return;
	}
	if (func_66((*Global_1263130)[iVar0 /*102*/], 1))
	{
		func_67(1);
	}
}

bool func_37(int iParam0)
{
	return func_68(1, iParam0);
}

var func_38(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_39()
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1266395->f_75))
	{
		Global_1266395->f_75 = DATAFILE::_0xD97D8D905F1562F2(-152187458);
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Global_1266395->f_75))
	{
		return 0;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1266395->f_75, -761724091, "posse_feud_data/animosity_data(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1266395->f_75, 1456495662, ":value");
	return 1;
}

void func_40(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1263130)[iVar0 /*102*/])->f_99 = iParam0;
}

bool func_41()
{
	struct<12> Var0;

	if (Global_1099294->f_26.f_141.f_5)
	{
		func_69(*Global_1199402, 1);
		Global_1266395->f_5 = 0;
		Global_1266395->f_25 = 1;
		Var0.f_9 = 255;
		Var0.f_10 = 255;
		Var0.f_11 = 255;
		Var0 = 30;
		Var0.f_6 = 0;
		Var0.f_9 = PLAYER::PLAYER_ID();
		Var0.f_10 = Global_1266395->f_15;
		Var0.f_11 = PLAYER::PLAYER_ID();
		Var0.f_7 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		Var0.f_8 = _NAMESPACE26::_0x901E0DC25080C8B9(Global_1266395->f_15);
		func_70(&Var0);
	}
	return Global_1099294->f_26.f_141.f_5;
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1 || !func_43(uParam0))
	{
		func_71(uParam0);
	}
}

bool func_43(var uParam0)
{
	return func_72(*uParam0, 1);
}

float func_44(var uParam0)
{
	if (!func_43(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_73(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_74() - uParam0->f_1);
}

void func_45()
{
	if (!func_43(&(Global_1199402->f_5)))
	{
		func_42(&(Global_1199402->f_5), 0);
	}
	if (func_75(*Global_1199402) > 40 && func_44(&(Global_1199402->f_5)) > 2f)
	{
		func_42(&(Global_1199402->f_5), 1);
		func_76(*Global_1199402);
	}
}

void func_46()
{
	func_77();
	func_78();
}

void func_47(var uParam0)
{
	struct<102> Var0;

	Var0 = 32;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_97 = 255;
	*uParam0 = { Var0 };
}

struct<2> func_48(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

bool func_49(struct<2> Param0)
{
	return func_79(Param0, 1, 4);
}

int func_50(struct<2> Param0)
{
	if (!func_80(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_81(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_51(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_52(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

int func_53()
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
	if (!func_50(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_54(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	switch (Param0.f_6)
	{
		case 0:
			func_82(&Param0);
			break;
		case 2:
			func_83(&Param0);
			break;
		case 3:
			func_84(&Param0);
			break;
		case 1:
			break;
	}
}

void func_55(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			func_85(uParam0);
			break;
		case 1:
			func_86();
			break;
		case 2:
			func_87(uParam0);
			break;
		case 3:
			func_88(uParam0);
			break;
	}
}

void func_56()
{
	if (NETWORK::GET_TIME_DIFFERENCE((Global_1263000->f_1[Global_1266395->f_80 /*4*/])->f_3, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 60000)
	{
		(Global_1263000->f_1[Global_1266395->f_80 /*4*/])->f_1 = 255;
		Global_1263000->f_1[Global_1266395->f_80 /*4*/] = 255;
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167(&(Global_1263000->f_1[Global_1266395->f_80 /*4*/])) && !NETWORK::NETWORK_IS_PLAYER_CONNECTED(&(Global_1263000->f_1[Global_1266395->f_80 /*4*/])))
	{
		(Global_1263000->f_1[Global_1266395->f_80 /*4*/])->f_1 = 255;
		Global_1263000->f_1[Global_1266395->f_80 /*4*/] = 255;
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167((Global_1263000->f_1[Global_1266395->f_80 /*4*/])->f_1) && !NETWORK::NETWORK_IS_PLAYER_CONNECTED((Global_1263000->f_1[Global_1266395->f_80 /*4*/])->f_1))
	{
		(Global_1263000->f_1[Global_1266395->f_80 /*4*/])->f_1 = 255;
		Global_1263000->f_1[Global_1266395->f_80 /*4*/] = 255;
		return;
	}
}

bool func_57()
{
	return func_68(1, 255);
}

void func_58(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) || !func_89(iVar3))
	{
		return;
	}
	iVar1 = iVar3;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*((*uParam0)[iVar0 /*3*/]) = { *((*(*Global_1263130)[iVar1 /*102*/])[iVar0 /*3*/]) };
		iVar0++;
	}
	Global_1266395->f_20 = iVar3;
}

void func_59(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*((*uParam0)[iVar0 /*3*/]) = { vVar1 };
		iVar0++;
	}
	Global_1266395->f_20 = NETWORK::PARTICIPANT_ID();
}

void func_60(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == -1 || uParam0->f_2 == -1)
	{
		return;
	}
	iVar0 = (Global_1901929->f_295.f_170 * 1000 - (MISC::GET_GAME_TIMER() - uParam0->f_2));
	if (iVar0 <= 0)
	{
		uParam0->f_2 = -1;
	}
}

struct<2> func_61()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_48(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_48(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

void func_62()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(Global_1266395->f_40[iVar0])))
		{
		}
		else if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(&(Global_1266395->f_40[iVar0]), func_90(0)))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(Global_1266395->f_40[iVar0]), func_90(0), 0);
		}
		iVar0++;
	}
}

void func_63()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(Global_1266395->f_40[iVar0])))
		{
		}
		else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(&(Global_1266395->f_40[iVar0]), func_90(0)))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(Global_1266395->f_40[iVar0]), func_90(0), 1);
		}
		iVar0++;
	}
}

void func_64(int iParam0)
{
	int iVar0;

	iVar0 = &Global_1275573;
	func_91(&(((*Global_1263130)[iVar0 /*102*/])->f_100), iParam0);
}

bool func_65(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_92(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_66(var uParam0, int iParam1)
{
	return func_93(uParam0->f_100, iParam1);
}

void func_67(int iParam0)
{
	int iVar0;

	iVar0 = &Global_1275573;
	func_94(&(((*Global_1263130)[iVar0 /*102*/])->f_100), iParam0);
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_95(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_96())
	{
		return func_95(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_95(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

void func_69(struct<5> Param0, int iParam5)
{
	struct<12> Var0;

	Var0.f_5 = -1;
	Var0.f_4 = 7;
	Var0.f_5 = { Param0 };
	Var0.f_11 = iParam5;
	func_98(&Var0, func_97(0, 8));
}

void func_70(var uParam0)
{
	var uVar0;

	uVar0 = func_97(0, 8);
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uVar0))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 36, &uVar0);
}

void func_71(var uParam0)
{
	func_99(uParam0, 0f);
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_73(var uParam0)
{
	return func_72(*uParam0, 2);
}

float func_74()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_75(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (&Global_1199316->f_5[iVar0 /*5*/] != iParam0)
		{
		}
		else if ((Global_1199316->f_5[iVar0 /*5*/])->f_2)
		{
		}
		else
		{
			iVar1 = (Global_1199316->f_5[iVar0 /*5*/])->f_4;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 <= 0)
	{
		return -1;
	}
	return MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - iVar1));
}

void func_76(struct<5> Param0)
{
	struct<6> Var0;

	Var0.f_5 = -1;
	Var0.f_4 = 9;
	Var0.f_5 = { Param0 };
	func_98(&Var0, func_97(0, 8));
}

void func_77()
{
	int iVar0;

	iVar0 = &Global_1275573;
	((*Global_1263130)[iVar0 /*102*/])->f_100 = 0;
}

void func_78()
{
	var uVar0;

	Global_1266395->f_79 = 255;
	Global_1266395->f_18 = uVar0;
	func_40(1);
}

bool func_79(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_50(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_100(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_80(int iParam0)
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

int func_81(int iParam0)
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

void func_82(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_4)
	{
		return;
	}
	uParam0->f_4 = 1;
	SCRIPTS::_0x31010318BA9897AC(&uVar0, uParam0->f_9);
	uParam0->f_9 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(uParam0->f_9));
	uParam0->f_10 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(uParam0->f_10));
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if ((&Global_1263000->f_1[iVar1 /*4*/] == uParam0->f_9 || &Global_1263000->f_1[iVar1 /*4*/] == uParam0->f_10) && NETWORK::GET_TIME_DIFFERENCE((Global_1263000->f_1[iVar1 /*4*/])->f_3, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 60000)
		{
			uParam0->f_5 = 0;
			func_101(uParam0, &uVar0);
			return;
		}
		if (iVar2 == -1)
		{
			if ((Global_1263000->f_1[iVar1 /*4*/])->f_1 == 255 || &Global_1263000->f_1[iVar1 /*4*/] == 255)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	Global_1263000->f_1[iVar2 /*4*/] = uParam0->f_9;
	(Global_1263000->f_1[iVar2 /*4*/])->f_1 = uParam0->f_10;
	(Global_1263000->f_1[iVar2 /*4*/])->f_2 = uParam0->f_11;
	(Global_1263000->f_1[iVar2 /*4*/])->f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uParam0->f_5 = 1;
	func_101(uParam0, &uVar0);
	return;
}

void func_83(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1263000->f_1[iVar0 /*4*/] == uParam0->f_9 && (Global_1263000->f_1[iVar0 /*4*/])->f_1 == uParam0->f_10)
		{
			(Global_1263000->f_1[iVar0 /*4*/])->f_1 = 255;
			Global_1263000->f_1[iVar0 /*4*/] = 255;
			(Global_1263000->f_1[iVar0 /*4*/])->f_2 = 255;
			return;
		}
		iVar0++;
	}
}

void func_84(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((Global_1263000->f_1[iVar0 /*4*/])->f_2 == uParam0->f_10)
		{
			(Global_1263000->f_1[iVar0 /*4*/])->f_1 = 255;
			Global_1263000->f_1[iVar0 /*4*/] = 255;
			(Global_1263000->f_1[iVar0 /*4*/])->f_2 = 255;
			return;
		}
		iVar0++;
	}
}

void func_85(var uParam0)
{
	if (!uParam0->f_4)
	{
		return;
	}
	if (!uParam0->f_5)
	{
		Global_1266395->f_23 = 1;
		Global_1266395->f_25 = 1;
		func_102(Global_1199402);
		func_40(1);
		return;
	}
	func_103(uParam0);
}

void func_86()
{
	Global_1199402 = -1;
	func_69(*Global_1199402, 0);
}

void func_87(var uParam0)
{
	if (uParam0->f_9 == PLAYER::PLAYER_ID())
	{
		Global_1266395->f_27 = 1;
	}
}

void func_88(var uParam0)
{
	if (uParam0->f_10 == PLAYER::PLAYER_ID())
	{
		func_40(1);
	}
}

bool func_89(int iParam0)
{
	return func_104(iParam0);
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

void func_91(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_92(struct<2> Param0)
{
	int iVar0;

	if (!func_50(Param0))
	{
		return -1;
	}
	iVar0 = func_105(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

bool func_93(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_94(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_95(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_96()
{
	return Global_1099294->f_339;
}

var func_97(int iParam0, int iParam1)
{
	return func_106(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_98(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 24, &uParam1);
}

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_74() - fParam1);
	func_107(uParam0, 1);
	func_108(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_100(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_109(Param0);
	}
	return -1;
}

void func_101(var uParam0, float fParam1)
{
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 36, fParam1);
}

void func_102(var uParam0)
{
	struct<6> Var0;

	if (*uParam0 == -1)
	{
		func_110(uParam0, 0);
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 3;
	Var0.f_5 = { *uParam0 };
	func_98(&Var0, func_97(0, 8));
	func_111(0);
	func_110(uParam0, 0);
}

void func_103(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	switch (Global_1266395->f_28)
	{
		case 1:
			func_112(uParam0->f_10, Global_1901929->f_295.f_171);
			func_113(uParam0->f_10);
			Global_1266395->f_5 = 0;
			func_114();
			return;
		case 4:
			iVar0 = 1;
			iVar1 = 4;
			break;
		case 5:
			iVar0 = 2;
			iVar1 = 5;
			break;
	}
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		func_115(iVar0, uParam0->f_8, Global_1901929->f_295.f_171);
		func_116(uParam0->f_8);
		func_117();
		func_114();
	}
	else
	{
		Var2.f_4 = iVar1;
		Var2.f_5 = uParam0->f_8;
		Var2.f_1 = PLAYER::PLAYER_ID();
		Var2.f_9 = &Global_1199402;
		func_118(&Var2, _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15));
		func_116(uParam0->f_8);
		func_114();
	}
}

int func_104(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

int func_105(struct<2> Param0)
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
	if (!func_119(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_119(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
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

var func_106(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_120() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_121());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_121());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_121());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_122(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_123(iVar2))
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
				if (iVar9 & 8192 != 0 && func_124(iVar2) != 1)
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
					if (!func_125(iVar10))
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

void func_107(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_108(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_109(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_119(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_110(var uParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = -1;
	*uParam0 = { Var0 };
	if (bParam1)
	{
		func_111(0);
	}
}

void func_111(int iParam0)
{
	Global_1199103->f_211 = iParam0;
}

void func_112(int iParam0, var uParam1)
{
	struct<18> Var0;
	float fVar18;
	struct<19> Var19;
	vector3 vVar38;
	var uVar41;

	if (!func_126(3))
	{
		return;
	}
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_12 = -1;
	Var0.f_4 = 1;
	Var19.f_12 = -1;
	Var19.f_12.f_1 = -1;
	Var19.f_14 = 255;
	Var19.f_15 = 255;
	vVar38 = { 0f, 0f, 0f };
	Var0.f_5 = 3;
	Var0.f_10 = uParam1;
	if (&Global_1199402 != -1)
	{
		uVar41 = (&Global_1199402 - func_127(3));
		func_69(*Global_1199402, 1);
	}
	else
	{
		return;
	}
	Var19.f_4 = 85;
	SCRIPTS::_0x31010318BA9897AC(&fVar18, iParam0);
	Var19 = 1;
	Var19.f_1 = PLAYER::PLAYER_ID();
	Var19.f_14 = PLAYER::PLAYER_ID();
	Var19.f_15 = iParam0;
	Var19.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var19.f_6 = uParam1;
	Var19.f_16 = Global_1275573->f_15;
	func_130(func_129(1, func_128(uVar41)), vVar38, 0f, 0, 0, fVar18, Var19);
	SCRIPTS::_0xDE544B7EC0C187CC(&fVar18);
	SCRIPTS::_0x31010318BA9897AC(&fVar18, PLAYER::PLAYER_ID());
	Var0.f_6 = PLAYER::PLAYER_ID();
	Var0.f_8 = { func_129(1, func_128(uVar41)) };
	Var0.f_7 = fVar18;
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	Var0.f_1 = iParam0;
	Var0.f_17 = 1;
	func_131(&Var0, &fVar18);
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 0);
	func_132();
}

void func_113(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return;
	}
	Global_1266395->f_79 = iParam0;
	Global_1266395->f_18 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	func_40(2);
}

void func_114()
{
	switch (Global_1266395->f_28)
	{
		case 1:
			TELEMETRY::_0xF37A2149BC9A8A27(1403358139, PLAYER::PLAYER_ID(), Global_1266395->f_15, func_133(Global_1266395->f_18), 0);
			break;
		case 4:
			TELEMETRY::_0xF37A2149BC9A8A27(-1522841992, PLAYER::PLAYER_ID(), Global_1266395->f_15, func_133(Global_1266395->f_18), 0);
			break;
		case 5:
			TELEMETRY::_0xF37A2149BC9A8A27(2112282570, PLAYER::PLAYER_ID(), Global_1266395->f_15, func_133(Global_1266395->f_18), 0);
			break;
	}
}

void func_115(int iParam0, int iParam1, var uParam2)
{
	struct<18> Var0;
	struct<2> Var18;
	float fVar20;
	struct<19> Var21;
	vector3 vVar40;
	var uVar43;

	if (iParam1 == Global_1275573->f_15)
	{
		return;
	}
	if (!func_126(iParam0))
	{
		return;
	}
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_12 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = -1;
	Var18 = -1;
	Var18.f_1 = -1;
	Var21.f_12 = -1;
	Var21.f_12.f_1 = -1;
	Var21.f_14 = 255;
	Var21.f_15 = 255;
	vVar40 = { 0f, 0f, 0f };
	Var0.f_5 = iParam0;
	Var0.f_10 = uParam2;
	Var0.f_11 = Global_1275573->f_15;
	if (&Global_1199402 != -1)
	{
		uVar43 = (&Global_1199402 - func_127(3));
		func_69(*Global_1199402, 1);
	}
	else
	{
		return;
	}
	switch (iParam0)
	{
		case 2:
			Var18 = { func_129(5, func_128(uVar43)) };
			Var21.f_4 = 80;
			break;
		case 1:
			Var18 = { func_129(4, func_128(uVar43)) };
			Var21.f_4 = 81;
			break;
	}
	func_134(&fVar20, iParam1, 1);
	Var21 = 1;
	Var21.f_1 = PLAYER::PLAYER_ID();
	Var21.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var21.f_6 = uParam2;
	Var21.f_16 = Global_1275573->f_15;
	if (Var0.f_5 == -1)
	{
		return;
	}
	if (!func_135(Var0.f_5))
	{
		return;
	}
	if (!func_136(iParam1))
	{
		return;
	}
	func_130(Var18, vVar40, 0f, 0, 0, fVar20, Var21);
	func_134(&fVar20, iParam1, 0);
	switch (iParam0)
	{
		case 2:
			Var21.f_4 = 84;
			break;
		case 1:
			Var21.f_4 = 83;
			break;
	}
	Var21.f_7 = iParam1;
	Var21 = 0;
	func_137(Var21, fVar20, 0, 0);
	SCRIPTS::_0xDE544B7EC0C187CC(&fVar20);
	func_138(Var0.f_5, &fVar20);
	if (!SCRIPTS::_0x179A6F0EE2E79026(&fVar20))
	{
		return;
	}
	Var0.f_6 = PLAYER::PLAYER_ID();
	Var0.f_8 = { Var18 };
	Var0.f_7 = fVar20;
	Var0.f_11 = iParam1;
	Var0.f_17 = 1;
	func_131(&Var0, &fVar20);
	func_137(Var21, fVar20, 0, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 0);
	func_132();
}

void func_116(int iParam0)
{
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return;
	}
	Global_1266395->f_18 = iParam0;
	func_40(2);
}

void func_117()
{
	func_139(16);
	func_139(17);
}

void func_118(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 22;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 6, &uVar0);
}

int func_119(struct<2> Param0, var uParam2)
{
	if (!func_50(Param0))
	{
		return 0;
	}
	func_140(uParam2);
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

int func_120()
{
	return Global_1051202->f_12;
}

char* func_121()
{
	return "unnamed";
}

int func_122(int iParam0)
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

int func_123(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_68(35, iParam0);
}

int func_124(int iParam0)
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

bool func_125(int iParam0)
{
	if (func_141(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_142(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_126(int iParam0)
{
	if (func_143(func_48(0)) == 5)
	{
		return 0;
	}
	if (func_143(func_48(0)) == 3)
	{
		return 0;
	}
	if (func_143(func_48(0)) == 4)
	{
		return 0;
	}
	if (func_144())
	{
		return 0;
	}
	if (func_145())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((&Global_1102099->f_935.f_5[iParam0] - Global_1275573->f_21) < 180 && func_146(iParam0, _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (iParam0 == 3 && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0)
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

int func_128(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_147(iVar0))
	{
		return -1;
	}
	return iVar0;
}

struct<2> func_129(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = iParam1;
	if (((iVar0 < 0 || iVar0 >= 7) || iVar1 < 0) || iVar1 >= 16)
	{
		return func_29();
	}
	return func_148(Global_1102099->f_814.f_1[iParam0 /*17*/][iParam1], 3);
}

void func_130(struct<2> Param0, vector3 vParam2, float fParam5, int iParam6, int iParam7, float fParam8, struct<19> Param9)
{
	struct<27> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&fParam8))
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0 = { Param9 };
	Var0.f_19 = { Param0 };
	Var0.f_21 = { vParam2 };
	Var0.f_24 = fParam5;
	Var0.f_26 = iParam7;
	Var0.f_25 = iParam6;
	Var0.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 27, 38, &fParam8);
}

void func_131(var uParam0, float fParam1)
{
	*uParam0 = 29;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 18, 37, fParam1);
}

void func_132()
{
	func_149(0);
}

int func_133(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1266395->f_20;
	iVar1 = 0;
	if ((*Global_1263130)[iVar0 /*102*/])->f_97 != _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15)
	{
	}
	Global_1266395->f_12 = Global_1266395->f_12;
	while (Global_1266395->f_12 <= 31)
	{
		if ((*Global_1263130)[iVar0 /*102*/][Global_1266395->f_12 /*3*/] != iParam0)
		{
		}
		else
		{
			iVar1 = (iVar1 + ((*(*Global_1263130)[iVar0 /*102*/])[Global_1266395->f_12 /*3*/])->f_1);
		}
		Global_1266395->f_12++;
	}
	return iVar1;
}

void func_134(float fParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar2) != iParam1)
		{
		}
		else if (bParam2)
		{
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar2))
			{
			}
			else
			{
				bVar1 = true;
				SCRIPTS::_0x31010318BA9897AC(fParam0, iVar2);
			}
			iVar0++;
			if (!bVar1)
			{
				SCRIPTS::_0xDE544B7EC0C187CC(fParam0);
			}
		}
	}

int func_135(int iParam0)
{
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_150(iParam0))
	{
		return 0;
	}
	if (!func_126(iParam0))
	{
		return 0;
	}
	if ((&Global_1199402 != -1 && Global_1199402->f_2) && func_151(*Global_1199402))
	{
		return 0;
	}
	if (func_152(iParam0) && (!func_153() || &Global_1199402 == -1))
	{
		return 0;
	}
	if (func_154(PLAYER::PLAYER_ID(), 1, 1) && !func_155(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return func_156(iParam0);
		case 6:
			return func_157();
		case 7:
			return func_158();
		case 8:
		case 9:
		case 10:
			return func_159(iParam0);
		default:
			break;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	if (_NAMESPACE26::_0x149A2751AB66AC02(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_137(struct<19> Param0, float fParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&fParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = fParam19;
				Var0.f_20 = Param0.f_2;
				func_160(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &fParam19);
}

void func_138(var uParam0, float fParam1)
{
	func_161(fParam1, 1);
}

void func_139(int iParam0)
{
	int iVar0;
	struct<39> Var1;
	int iVar40;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var1 = { *(Global_1939231->f_242.f_14[iVar0 /*39*/]) };
		iVar40 = DATABINDING::_DATABINDING_READ_DATA_INT(Var1.f_26);
		if (iParam0 == iVar40)
		{
			func_162(Var1);
		}
		iVar0++;
	}
}

void func_140(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_141(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_142(int iParam0)
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
		func_163(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_164(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_143(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_144()
{
	return func_93(Global_1572887->f_7, 1);
}

bool func_145()
{
	return Global_262996[&Global_1275573 /*70*/] > 2;
}

int func_146(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 8:
			return bParam1;
		case 10:
			return bParam1;
		case 9:
			return bParam1;
		case 4:
			return bParam1;
		case 5:
			return bParam1;
		case 6:
			return bParam1;
		case 7:
			return bParam1;
		default:
			break;
	}
	return 0;
}

int func_147(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 15)
	{
		return 0;
	}
	return 1;
}

struct<2> func_148(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_165(iParam0, &(Global_1070356->f_634), func_81(iParam1));
			break;
		case 3:
			Var0.f_1 = func_165(iParam0, &(Global_1070356->f_634.f_602), func_81(iParam1));
			break;
		case 4:
			Var0.f_1 = func_165(iParam0, &(Global_1070356->f_634.f_2104), func_81(iParam1));
			break;
		case 5:
			Var0.f_1 = func_165(iParam0, &(Global_1070356->f_634.f_12606), func_81(iParam1));
			break;
		case 6:
			Var0.f_1 = func_165(iParam0, &(Global_1070356->f_634.f_12908), func_81(iParam1));
			break;
		case 7:
			Var0.f_1 = func_165(iParam0, &(Global_1070356->f_634.f_15910), func_81(iParam1));
			break;
		case 8:
			Var0.f_1 = func_165(iParam0, &(Global_1070356->f_634.f_15981), func_81(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_29();
	}
	return Var0;
}

void func_149(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896726->f_382)
		{
			Global_1896726->f_382 = bParam0;
		}
	}
	else if (Global_1896726->f_382)
	{
		Global_1896726->f_382 = bParam0;
	}
}

int func_150(int iParam0)
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(956799153))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 6:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(-1008270856);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return (UNLOCK::_UNLOCK_IS_UNLOCKED(1612825071) && UNLOCK::_UNLOCK_IS_UNLOCKED(759426019));
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_151(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (&Global_1199316->f_5[iVar0 /*5*/] != iParam0)
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

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_153()
{
	int iVar0;

	if (&Global_1199402 != -1 && !func_151(*Global_1199402))
	{
		func_110(Global_1199402, 0);
		Global_1199402 = -1;
	}
	iVar0 = func_166(Global_1199402);
	if (&Global_1199402 == -1 && iVar0 == 0)
	{
		func_110(Global_1199402, 1);
		func_167(Global_1199402);
		return 0;
	}
	switch (iVar0)
	{
		case 0:
		default:
			return 0;
			if (&Global_1199402 == -1)
			{
				return 0;
			}
		case 1:
			return 0;
		case 3:
			return 0;
		case 2:
			break;
	}
	if (&Global_1199402 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_154(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return false;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return ((Global_17172.f_2619.f_2 == 2 || (bParam1 && Global_17172.f_2619.f_2 == 1)) || (bParam2 && Global_17172.f_2619.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((((*Global_1097610)[iVar0 /*51*/])->f_48 == 2 || (bParam1 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 1)) || (bParam2 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 3));
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
		case 8:
		case 9:
		case 10:
			return 1;
	}
	return 0;
}

int func_156(int iParam0)
{
	var uVar0;
	int iVar3;

	if (!func_168(Global_1275573->f_15))
	{
		return 0;
	}
	if (func_169())
	{
		return 0;
	}
	if (!func_170())
	{
		func_171();
		return 0;
	}
	if (func_172(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (func_173())
	{
		func_171();
		return 0;
	}
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Global_35, false, &uVar0, 16))
	{
		func_171();
		return 0;
	}
	iVar3 = _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	switch (iParam0)
	{
		case 4:
			if (iVar3 > 2)
			{
				return 1;
			}
			break;
		case 5:
			if (iVar3 > 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_157()
{
	if (!func_168(Global_1275573->f_15))
	{
		return 0;
	}
	if (func_169())
	{
		return 0;
	}
	if (func_172(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (!func_174())
	{
		return 0;
	}
	if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1)
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	if (!func_176(func_175(7)))
	{
		return 0;
	}
	if (_NAMESPACE26::_0x2F7EB8B6F6AFE79C(1) < 2)
	{
		return 0;
	}
	return 1;
}

int func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 8)
	{
		func_177(&(Global_1102099->f_935), 1);
	}
	if (!func_176(func_175(iParam0)))
	{
		return 0;
	}
	if (!func_168(Global_1275573->f_15))
	{
		return 0;
	}
	if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) < 2)
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((!NETWORK::_0x255A5EF65EDA9167(iVar2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2)) || !_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, iVar2))
			{
			}
			else
			{
				if (func_93(((*Global_1184801)[iVar0 /*10*/])->f_9, 1))
				{
					iVar1++;
				}
				if (iVar1 > 1)
				{
				}
				else
				{
					iVar0++;
				}
				if (iVar1 < 2)
				{
					func_178(&(Global_1102099->f_935), 1);
					return 0;
				}
				func_177(&(Global_1102099->f_935), 1);
				return 1;
			}
		}
	}

int func_160(var uParam0, struct<21> Param1)
{
	if (!func_179(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

void func_161(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (!bParam1 && _NAMESPACE26::_0x424B17A7DC5C90BC(iVar1))
		{
		}
		else if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar1) != iVar0)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(fParam0, iVar1);
		}
		iVar2++;
	}
}

void func_162(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1939231->f_242.f_5, uParam0);
	func_180(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	func_181((Global_1939231->f_242.f_1186 - 1));
}

void func_163(int iParam0)
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
	func_164(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_164(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_165(int iParam0, var uParam1, int iParam2)
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

int func_166(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_182();
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			if (uParam0->f_3 > 0)
			{
				iVar1 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_3));
				if (iVar1 >= 30)
				{
					func_110(uParam0, 1);
				}
			}
			break;
		case 3:
			break;
		case 2:
			*uParam0 = { Global_1199103->f_206 };
			func_111(0);
			break;
	}
	return iVar0;
}

void func_167(var uParam0)
{
	struct<6> Var0;

	if (func_182() != 0)
	{
		return;
	}
	if (*uParam0 != -1)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	func_98(&Var0, func_97(0, 8));
	func_111(1);
	uParam0->f_3 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<10> Var9;
	int iVar19;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		else
		{
			Var2 = { func_183(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return 1;
				}
				iVar19++;
			}
		}
	}
	return 0;
}

int func_169()
{
	if (func_50(func_48(0)))
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return func_184(Global_35) != -1;
}

void func_171()
{
	char* sVar0;

	sVar0 = func_185(Global_1102099->f_935.f_26);
	Global_1102099->f_935.f_17 = 0;
	if (!MISC::ARE_STRINGS_EQUAL(sVar0, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1939231->f_1433.f_54.f_5)))
	{
		func_186(sVar0, joaat("COLOR_WHITE"));
	}
}

int func_172(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_187(bParam1, bParam2, bParam3);
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

bool func_173()
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_BOAT(Global_34))
	{
		return true;
	}
	iVar0 = func_188(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_SWIMMING(iVar0))
		{
			return true;
		}
	}
	return PED::IS_PED_SWIMMING(Global_34);
}

int func_174()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	vector3 vVar5;

	vVar0 = { MAP::_GET_WAYPOINT_COORDS() };
	func_42(&(Global_1102099->f_935.f_35), 1);
	Global_1102099->f_935.f_19 = 0;
	if (Global_1102099->f_935.f_26 == -1)
	{
		return 0;
	}
	if (func_189(vVar0))
	{
		func_171();
		return 0;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if ((!NETWORK::_0x255A5EF65EDA9167(iVar4) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4)) || !_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, iVar4))
		{
		}
		else if (iVar4 == PLAYER::PLAYER_ID() && func_190(vVar0, Global_35) <= (150f * 2f))
		{
			Global_1102099->f_935.f_19 = 1;
			func_171();
			return 0;
		}
		else if (func_190(vVar0, func_191(iVar4)) <= 150f)
		{
			Global_1102099->f_935.f_19 = 1;
			func_171();
			return 0;
		}
		iVar3++;
	}
	vVar0.f_2 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(vVar0.x, vVar0.y);
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	if (ENTITY::_0x6BFBDC46139C45AB(vVar0) && func_192(&vVar0, 9999f))
	{
	}
	else
	{
		Global_1102099->f_935.f_4++;
		if (Global_1102099->f_935.f_4 > 15)
		{
			Global_1102099->f_935.f_23 = { 0f, 0f, 0f };
			Global_1102099->f_935.f_4 = 0;
			func_171();
		}
		return 0;
	}
	PATHFIND::_0xCF213A5FC3ABFC08(vVar0.x, vVar0.y, (50f * 2f));
	vVar5 = { 50f, 50f, 50f };
	if (!PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar0 - vVar5, vVar0 + vVar5))
	{
		Global_1102099->f_935.f_4++;
		if (Global_1102099->f_935.f_4 > 15)
		{
			Global_1102099->f_935.f_23 = { 0f, 0f, 0f };
			Global_1102099->f_935.f_4 = 0;
			func_171();
		}
		return 0;
	}
	Global_1102099->f_935.f_4 = 0;
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(vVar0, false, &(Global_1102099->f_935.f_23), 16))
	{
		Global_1102099->f_935.f_23 = { 0f, 0f, 0f };
		func_171();
		return 0;
	}
	func_171();
	return 1;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 15;
		case 10:
			return 12;
		case 8:
			return 13;
		case 9:
			return 14;
		default:
			break;
	}
	return -1;
}

int func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (func_169())
	{
		return 0;
	}
	iVar0 = -1;
	iVar1 = func_193(iParam0, PLAYER::PLAYER_ID(), &iVar0);
	if (iVar1 != 0)
	{
		return 0;
	}
	iVar2 = 0;
	if (!func_194(iParam0))
	{
		iVar3 = func_196(func_195(iParam0));
		if (iVar3 == -1)
		{
			return 0;
		}
		iVar2 = (iVar3 - 2);
		iVar2 = func_197(iParam0, iVar2);
	}
	else
	{
		iVar2 = func_198(iParam0, Global_35);
		iVar1 = func_199(iParam0, iVar2);
		if (iVar1 != 0)
		{
			return 0;
		}
	}
	iVar4 = func_200(iParam0, iVar2);
	iVar1 = func_201(iVar4);
	if (iVar1 != 0)
	{
		return 0;
	}
	Var5 = { func_202(iParam0, iVar2, iVar4) };
	iVar1 = func_203(Var5);
	if (iVar1 != 0)
	{
		return 0;
	}
	return 1;
}

void func_177(var uParam0, int iParam1)
{
	if (!func_93(*uParam0, iParam1))
	{
		return;
	}
	func_94(uParam0, iParam1);
}

void func_178(var uParam0, int iParam1)
{
	if (func_93(*uParam0, iParam1))
	{
		return;
	}
	func_91(uParam0, iParam1);
}

int func_179(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

void func_180(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_90(91));
	if (func_204(iVar0))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_181(int iParam0)
{
	Global_1939231->f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1939231->f_242.f_1186), 0));
}

int func_182()
{
	return Global_1199103->f_211;
}

struct<7> func_183(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_184(vector3 vParam0)
{
	return func_205(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

char* func_185(int iParam0)
{
	struct<92> Var0;
	int iVar95;
	int iVar96;
	var uVar97;
	char* sVar100;

	if (iParam0 == -1)
	{
		return "";
	}
	Var0.f_38 = 7;
	Var0.f_91 = -1;
	MISC::_COPY_MEMORY(&Var0, &(Global_1939231->f_1433.f_156.f_2), 95);
	if ((NETWORK::NETWORK_IS_HANDLE_VALID(&(Var0.f_29)) && NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1275573->f_1))) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_29), &(Global_1275573->f_1)))
	{
		if (Var0.f_3)
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar95);
			if (iVar95 != Var0.f_2)
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
			}
		}
		else if (_NAMESPACE26::_0xD6F6ACF4392187FB(Var0.f_1) && !_NAMESPACE26::_0x0F99F6436528A089(Var0.f_1))
		{
			return MISC::_CREATE_VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
		}
	}
	if (!func_168(Global_1275573->f_15) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return MISC::_CREATE_VAR_STRING(2, "POSSE_VERSUS_LEADER_FAIL_FOOTER");
	}
	if (((&Global_1102099->f_935.f_5[iParam0] - Global_1275573->f_21) < 180 && func_206(iParam0)) && func_207(iParam0))
	{
		iVar96 = (180 - (&Global_1102099->f_935.f_5[iParam0] - Global_1275573->f_21));
		return MISC::_CREATE_VAR_STRING(10, "POSSE_VERSUS_TIMER_FOOTER", func_209(func_208(iVar96 * 1000, 0, 0, 0, 0, 0), joaat("COLOR_PURE_WHITE")));
	}
	switch (iParam0)
	{
		case 4:
			if (!func_210(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= 2)
			{
				sVar100 = "PV_TEAM_INFIGHTING_TOO_FEW";
			}
			else if (func_172(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_211())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_212())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Global_35, false, &uVar97, 16))
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_154(PLAYER::PLAYER_ID(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_INFIGHTING_FOOTER";
			}
			break;
		case 8:
			if (!func_210(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar100 = "PV_BIGGEST_FISH_TOO_FEW";
			}
			else if (func_172(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_213(&(Global_1102099->f_935), 1))
			{
				sVar100 = "PV_BIGGEST_FISH_FAIL_NO_RODS";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_BIGGEST_FISH_FOOTER";
			}
			break;
		case 9:
			if (!func_210(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar100 = "PV_FLYING_BIRD_TOO_FEW";
			}
			else if (func_172(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_FLYING_BIRD_FOOTER";
			}
			break;
		case 10:
			if (!func_210(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar100 = "PV_HERB_HUNT_TOO_FEW";
			}
			else if (func_172(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_HERB_HUNT_FOOTER";
			}
			break;
		case 5:
			if (!func_210(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar100 = "PV_INFIGHTING_TOO_FEW";
			}
			else if (func_172(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_211())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_212())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Global_35, false, &uVar97, 16))
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_154(PLAYER::PLAYER_ID(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_FFA_INFIGHTING_FOOTER";
			}
			break;
		case 7:
			if (!func_210(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar100 = "PV_HTPL_TOO_FEW";
			}
			else if (_NAMESPACE26::_0x2F7EB8B6F6AFE79C(1) < 2)
			{
				sVar100 = "PV_FAIL_NO_OTHER_POSSE_FOOTER";
			}
			else if (func_172(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (!func_214(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (func_154(PLAYER::PLAYER_ID(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_HUNT_THE_POSSE_LEADER_DESC";
			}
			break;
		case 6:
			if (!func_210(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar100 = "PV_IMPROPMTU_RACE_TOO_FEW";
			}
			else if (func_172(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_189(MAP::_GET_WAYPOINT_COORDS()))
			{
				sVar100 = "POSSE_VERSUS_RACE_NO_WAYPOINT_FOOTER";
			}
			else if (Global_1102099->f_935.f_19 && func_215(&(Global_1102099->f_935.f_35)) < 1000)
			{
				sVar100 = "POSSE_VERSUS_RACE_TOO_CLOSE_FOOTER";
			}
			else if (func_189(Global_1102099->f_935.f_23) && func_215(&(Global_1102099->f_935.f_35)) < 1000)
			{
				sVar100 = "POSSE_VERSUS_RACE_BAD_POSITION_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_RACE_FOOTER";
			}
			break;
		default:
			sVar100 = "NET_POSSE_VERSUS_CONTENT_TYPE_FOOTER_INVALID";
			break;
	}
	return MISC::_CREATE_VAR_STRING(2, sVar100);
}

void func_186(char* sParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_1433.f_54.f_5, sParam0);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939231->f_1433.f_54.f_6))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_1433.f_54.f_6, iParam1);
	}
}

int func_187(bool bParam0, bool bParam1, bool bParam2)
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

int func_188(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

int func_189(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_190(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

Vector3 func_191(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_192(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

int func_193(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;

	if (iParam1 == 255)
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 2;
	}
	if (func_216(iParam0) == -785841056)
	{
		if (func_217(iParam1, 1))
		{
			return 8;
		}
		iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam1);
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
		{
			return 6;
		}
		if (!func_168(iVar0))
		{
			return 7;
		}
		iVar1 = 2;
		if (_NAMESPACE26::_0x149A2751AB66AC02(iVar0) < iVar1)
		{
			return 9;
		}
		if (func_172(iParam1, 1, 0, 1))
		{
			return 16;
		}
	}
	*iParam2 = func_196(&(Global_1185132->f_1[iParam0 /*4*/]));
	if (*iParam2 == -1)
	{
		return 11;
	}
	if ((Global_1184573->f_1[*iParam2 /*26*/])->f_1 != -1)
	{
		return 12;
	}
	iVar2 = 0;
	iVar3 = 24;
	if (func_218(&Var4, iParam0))
	{
		func_219(Var4, -1068020191, &iVar2, 0);
		func_219(Var4, 796959411, &iVar3, 0);
	}
	iVar9 = func_221(func_220());
	if (iVar2 < iVar3)
	{
		if (iVar9 < iVar2 || iVar9 >= iVar3)
		{
			return 10;
		}
	}
	else if (iVar9 >= iVar3 && iVar9 < iVar2)
	{
		return 10;
	}
	return 0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
			return -785841056;
		default:
			break;
	}
	return joaat("standard");
}

int func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case joaat("standard"):
		case 1038512660:
			iVar0 = 0;
			iVar1 = 0;
			break;
		case joaat("themed"):
			iVar0 = 1;
			iVar1 = 1;
			break;
		case -785841056:
			iVar0 = 2;
			iVar1 = 7;
			break;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (&Global_1184573->f_1[iVar2 /*26*/] == 0)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_197(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<5> Var5;
	int iVar10;

	if (func_218(&Var0, iParam0) && func_222(&Var0))
	{
		Var5 = { Var0 };
		if (func_223(&Var5, iParam1))
		{
			iVar10 = 0;
			func_224(Var5, -1378896287, &iVar10, 1);
			return iVar10;
		}
	}
	return 0;
}

int func_198(int iParam0, vector3 vParam1)
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var6;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;

	iVar0 = 0;
	if (func_218(&Var1, iParam0) && func_222(&Var1))
	{
		iVar11 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
		fVar18 = 999999.9f;
		iVar23 = 0;
		while (iVar23 <= (iVar11 - 1))
		{
			Var6 = { Var1 };
			if (func_223(&Var6, iVar23))
			{
				iVar20 = 0;
				func_224(Var6, -1378896287, &iVar20, 1);
				if (func_225(iParam0, iVar20) == -1 && func_199(iParam0, iVar20) == 0)
				{
					func_226(Var6, 2060397848, &vVar12, 1);
					if (func_189(vVar12))
					{
						fVar16 = 0f;
					}
					else
					{
						fVar16 = BUILTIN::VDIST(vParam1, vVar12);
					}
					fVar15 = func_227(iParam0, iVar20);
					fVar17 = 0f;
					if (fVar16 > fVar15)
					{
						fVar17 = (fVar17 + ((fVar16 - fVar15) * 0.01f));
					}
					uVar19 = func_106(vVar12, 0f, 0f, 0f, fVar15, fVar15, fVar15, -432403087, 1, 8);
					iVar21 = 0;
					while (iVar21 <= 31)
					{
						if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar19, iVar21))
						{
							iVar22 = PLAYER::INT_TO_PLAYERINDEX(iVar21);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22) && !_NAMESPACE26::_0x9BE7DCB22D32CCBE(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), iVar22))
							{
								fVar17 = (fVar17 + 1f);
							}
						}
						iVar21++;
					}
					if (fVar17 < fVar18)
					{
						fVar18 = fVar17;
						iVar0 = iVar20;
					}
				}
			}
			iVar23++;
		}
	}
	return iVar0;
}

int func_199(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam1 == 0)
	{
		return 3;
	}
	if (func_216(iParam0) == -785841056)
	{
		vVar0 = { func_228(iParam0, iParam1) };
		if (!func_189(vVar0) && (VOLUME::_0x769BB7626B8CDB06(vVar0, 100f, 0, 0, 0) || VOLUME::_0xAA9EE2AAFC717623(vVar0, 0, 0, 0)))
		{
			return 15;
		}
	}
	return 0;
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	if (((func_218(&Var1, iParam0) && func_222(&Var1)) && func_229(&Var1, iParam1)) && func_230(&Var1))
	{
		iVar6 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
		iVar7 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar6);
		if (func_231(&Var1, iVar7))
		{
			func_224(Var1, -1378896287, &iVar0, 1);
		}
	}
	return iVar0;
}

int func_201(int iParam0)
{
	if (iParam0 == 0)
	{
		return 4;
	}
	return 0;
}

struct<2> func_202(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;
	struct<4> Var6;

	if ((((func_218(&Var0, iParam0) && func_222(&Var0)) && func_229(&Var0, iParam1)) && func_230(&Var0)) && func_232(&Var0, iParam2))
	{
		func_224(Var0, -605149915, &uVar5, 1);
		if (func_233(6, uVar5, &Var6))
		{
			return func_148(Var6.f_3, 6);
		}
	}
	return func_29();
}

int func_203(struct<2> Param0)
{
	if (!func_50(Param0))
	{
		return 5;
	}
	else if (func_234(Param0) != -1)
	{
		return 13;
	}
	else if (!func_235(Param0))
	{
		return 18;
	}
	else if (!func_236(Param0))
	{
		return 19;
	}
	else if (func_144())
	{
		return 14;
	}
	return 0;
}

bool func_204(int iParam0)
{
	return iParam0 != 0;
}

int func_205(int iParam0)
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

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 1;
		case 8:
			return 1;
		case 10:
			return 1;
		case 9:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 2;
		case 5:
			return _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1;
		case 6:
			return _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1;
		case 7:
			return _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1;
		case 8:
			return _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1;
		case 10:
			return _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1;
		case 9:
			return _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1;
		default:
			break;
	}
	return 1;
	return 1;
}

char* func_208(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_237((iVar5 / 60), 0, 180);
	iVar7 = func_237((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_0xD8402B858F4DDD88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

char* func_209(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_238(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_210(int iParam0)
{
	if (func_50(func_48(0)) || Global_1102099->f_935.f_27 != -1)
	{
		return 0;
	}
	if (func_239(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if (!func_240(iParam0))
	{
		return 0;
	}
	if (func_241(iParam0) && !func_242())
	{
		return 0;
	}
	return 1;
}

bool func_211()
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_BOAT(Global_34))
	{
		return true;
	}
	iVar0 = func_188(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_SWIMMING(iVar0))
		{
			return true;
		}
	}
	return PED::IS_PED_SWIMMING(Global_34);
}

bool func_212()
{
	return func_184(Global_35) != -1;
}

bool func_213(var uParam0, int iParam1)
{
	return func_93(*uParam0, iParam1);
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	switch (iParam0)
	{
		case 7:
			iVar0 = 15;
			break;
		case 10:
			iVar0 = 12;
			break;
		case 8:
			iVar0 = 13;
			break;
		case 9:
			iVar0 = 14;
			break;
		default:
			return 1;
	}
	iVar1 = -1;
	iVar2 = func_193(iVar0, PLAYER::PLAYER_ID(), &iVar1);
	if (iVar2 != 0)
	{
		return 0;
	}
	iVar3 = func_198(iVar0, Global_35);
	iVar2 = func_199(iVar0, iVar3);
	if (iVar2 != 0)
	{
		return 0;
	}
	iVar4 = func_200(iVar0, iVar3);
	iVar2 = func_201(iVar4);
	if (iVar2 != 0)
	{
		return 0;
	}
	Var5 = { func_202(iVar0, iVar3, iVar4) };
	iVar2 = func_203(Var5);
	if (iVar2 != 0)
	{
		return 0;
	}
	return 1;
}

int func_215(var uParam0)
{
	if (!func_43(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_73(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_243() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_216(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1185132->f_1[iParam0 /*4*/]);
}

int func_217(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if ((Global_1184573->f_1[iVar1 /*26*/])->f_1 != -1 && func_244(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1185132->f_66[iVar1 /*20*/] >= 2)
					{
						return 1;
					}
				}
				else if (&Global_1185132->f_66[iVar1 /*20*/] >= 5)
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_218(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1185132->f_443))
	{
		return 0;
	}
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_245(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_219(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_220()
{
	return &Global_1902689;
}

int func_221(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_222(var uParam0)
{
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1782115362;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_223(var uParam0, int iParam1)
{
	uParam0->f_2 = 1574313466;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_224(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_225(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if ((Global_1184573->f_1[iVar0 /*26*/])->f_1 == iParam0 && (Global_1184573->f_1[iVar0 /*26*/])->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_226(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

float func_227(int iParam0, int iParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = 200f;
	if ((func_218(&Var1, iParam0) && func_222(&Var1)) && func_229(&Var1, iParam1))
	{
		func_246(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

Vector3 func_228(int iParam0, int iParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_218(&Var3, iParam0) && func_222(&Var3)) && func_229(&Var3, iParam1))
	{
		func_226(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

bool func_229(var uParam0, int iParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_230(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_231(var uParam0, int iParam1)
{
	uParam0->f_2 = 1481789088;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_232(var uParam0, int iParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_233(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_247(iParam0))
	{
		return 0;
	}
	if (func_248(iParam0, uParam1, &uVar0))
	{
		func_249(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_234(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_51((Global_1184573->f_1[iVar0 /*26*/])->f_5, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_235(struct<2> Param0)
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(func_250(Param0));
}

bool func_236(struct<2> Param0)
{
	return UNLOCK::_UNLOCK_IS_VISIBLE(func_250(Param0));
}

int func_237(int iParam0, int iParam1, int iParam2)
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

char* func_238(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_239(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_251(((*Global_1277166)[iVar0 /*86*/])->f_85, iParam1);
	}
	return 0;
}

int func_240(int iParam0)
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(956799153))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 6:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(-1008270856);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return (UNLOCK::_UNLOCK_IS_UNLOCKED(1612825071) && UNLOCK::_UNLOCK_IS_UNLOCKED(759426019));
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_242()
{
	int iVar0;

	if (&Global_1199402 != -1 && !func_151(*Global_1199402))
	{
		func_110(Global_1199402, 0);
		Global_1199402 = -1;
	}
	iVar0 = func_166(Global_1199402);
	if (&Global_1199402 == -1 && iVar0 == 0)
	{
		func_110(Global_1199402, 1);
		func_167(Global_1199402);
		return 0;
	}
	switch (iVar0)
	{
		case 0:
		default:
			return 0;
			if (&Global_1199402 == -1)
			{
				return 0;
			}
		case 1:
			return 0;
		case 3:
			return 0;
		case 2:
			break;
	}
	if (&Global_1199402 == -1)
	{
		return 0;
	}
	return 1;
}

int func_243()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_244(int iParam0, int iParam1, int iParam2)
{
	return func_251((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 12:
			return -596286663;
		case 13:
			return 923956646;
		case 14:
			return 1459450644;
		case 15:
			return -2071675432;
		case 7:
			return -552339597;
		case 9:
			return 2144670272;
		case 8:
			return 996459079;
		case 10:
			return 1996177174;
		case 11:
			return -1702168032;
		default:
			break;
	}
	return 0;
}

int func_246(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_247(int iParam0)
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

bool func_248(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_252(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_249(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_253(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_254(iVar0);
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
			uParam2->f_5 = func_255(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_256(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_257(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_258(iVar0);
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

int func_250(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_119(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_251(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_252(int iParam0)
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

int func_253(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_259(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_254(int iParam0)
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

int func_255(int iParam0)
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

int func_256(int iParam0)
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

int func_257(int iParam0)
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

int func_258(int iParam0)
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

int func_259(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_260(iParam0, uParam1, &uVar0))
	{
		func_261(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_260(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_252(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_261(var uParam0, int iParam1, var uParam2)
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

