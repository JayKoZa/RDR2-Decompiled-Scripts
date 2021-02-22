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
	int iLocal_13 = 0;
#endregion

void __EntryFunction__()
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	func_1();
	sVar0 = func_3(func_2());
	func_4();
	func_5();
	func_6(0);
	Global_1051252.f_44 = 0;
	bVar1 = false;
	iLocal_13 = 0;
	while ((((func_7() && !func_8(1, 1)) && !func_9(4)) && !func_9(2048)) && func_11(func_10()))
	{
		if (func_12())
		{
			func_13();
			func_14();
			switch (func_15())
			{
				case 0:
					if (((func_16() && func_17(PLAYER::PLAYER_ID()) > 2) || !SCRIPTS::IS_THREAD_ACTIVE(Global_1051252.f_16[0], false)) || !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, -1, true, 0))
					{
						if (func_18(0) == 0)
						{
							if (!func_19())
							{
							}
							if (func_18(0) != 0)
							{
							}
							func_20();
							func_21();
						}
						else if (Global_1051252.f_7 > 0)
						{
							func_22();
						}
					}
					if (Global_1051252.f_11)
					{
					}
					if (func_23())
					{
						func_22();
						func_24();
						func_25();
						func_26();
						func_6(1);
					}
					break;
				case 1:
					if (!func_19())
					{
						func_27();
						bVar1 = false;
						func_6(2);
						SCRIPTS::REQUEST_SCRIPT(sVar0);
					}
					else
					{
						func_28();
					}
					break;
				case 2:
					if (func_29())
					{
						if ((func_30() % 1000) == 0)
						{
						}
					}
					else
					{
						if (!bVar1)
						{
							if (func_30() > Global_1901947.f_583)
							{
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on a session end for longer than 2 minutes now.  This is bad.");
								bVar1 = true;
								func_31(30, -1);
							}
						}
						if (func_18(0) != 1)
						{
							if (Global_1051252.f_11)
							{
								func_6(3);
							}
						}
						else
						{
							func_22();
							if (Global_1051252.f_7 <= 0)
							{
								if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_6(3);
								}
								else
								{
									func_6(4);
								}
							}
							else
							{
								if (func_18(0) != 0)
								{
								}
								func_22();
							}
						}
					}
					break;
				case 3:
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!bVar1)
						{
							if (func_30() > Global_1901947.f_583)
							{
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on NETWORK_IS_GAME_IN_PROGRESS for longer than 2 minutes now.  This is bad.");
								bVar1 = true;
								func_31(30, -1);
							}
						}
					}
					else
					{
						func_6(4);
					}
					break;
				case 4:
					if (SCRIPTS::DOES_SCRIPT_EXIST(sVar0))
					{
						SCRIPTS::REQUEST_SCRIPT(sVar0);
						if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6000) > 0)
						{
							if (Global_1051252.f_44)
							{
								func_32(1);
								func_33(1, 1);
								Global_1051252.f_44 = 0;
							}
							func_34();
							Global_1051252.f_16[0] = SCRIPTS::START_NEW_SCRIPT(sVar0, 6000);
							SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
							func_35();
							func_6(0);
							func_27();
							if (Global_1051252.f_11)
							{
								Global_1051252.f_11 = 0;
							}
							func_36();
						}
					}
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
	if (func_9(2048))
	{
	}
	else if (func_9(4))
	{
	}
	else if (!func_11(func_10()))
	{
	}
	else if (!func_11(func_37()))
	{
	}
	else
	{
		func_6(5);
		CAM::DO_SCREEN_FADE_OUT(0);
		bVar3 = false;
		while (!bVar3)
		{
			switch (func_15())
			{
				case 5:
					iVar2 = MISC::_GET_SYSTEM_TIME();
					NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
					func_6(6);
					break;
				case 6:
					if ((MISC::_GET_SYSTEM_TIME() - iVar2) > 1000)
					{
						func_6(7);
						if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(0);
						}
					}
					break;
				case 7:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_31(iLocal_13, -1);
						bVar3 = true;
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					break;
			}
			BUILTIN::WAIT(0);
		}
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_NETWORK_SESSION_LEAVE();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		PLAYER::FORCE_CLEANUP(2);
	}
	func_38(2048);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::_0xB711EB4BC8D06013();
	func_39(&Global_1051252);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

int func_2()
{
	return Global_1572887.f_14;
}

char* func_3(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "net_main_tlg_online";
		default:
			break;
	}
	return "net_main_online";
	return "net_main_online";
}

void func_4()
{
	if (!Global_1051252.f_9)
	{
	}
	Global_1051252.f_9 = 1;
}

void func_5()
{
	Global_1051252.f_40 = MISC::_GET_SYSTEM_TIME();
}

void func_6(int iParam0)
{
	Global_1051252.f_12 = iParam0;
	func_41(func_40(Global_1051252.f_12));
}

bool func_7()
{
	iLocal_13 = 0;
	if (func_42(1976253964))
	{
	}
	else if (func_42(1355399116))
	{
	}
	else if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	else if (Global_1572887.f_11)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((func_9(4) || func_9(2048)) || !func_11(func_10()))
			{
				iLocal_13 = 0;
			}
			else
			{
				iLocal_13 = 24;
			}
		}
	}
	return true;
}

bool func_8(bool bParam0, bool bParam1)
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

bool func_9(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_10()
{
	return Global_1572864;
}

bool func_11(int iParam0)
{
	if (iParam0 == 3)
	{
		return true;
	}
	if (iParam0 == 4)
	{
		return true;
	}
	return false;
}

bool func_12()
{
	return Global_1051252.f_9;
}

void func_13()
{
	char cVar0[64];
	int iVar8;
	int iVar9;

	func_43();
	if (Global_1051252.f_7 > 0)
	{
		StringCopy(&cVar0, "", 64);
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= (Global_1051252.f_7 - 1))
		{
			iVar8 = func_18(iVar9);
			if (iVar8 == 0)
			{
				StringConCat(&cVar0, "S", 64);
			}
			else if (iVar8 == 1)
			{
				StringConCat(&cVar0, "E", 64);
			}
			else if (iVar8 == -1)
			{
				StringConCat(&cVar0, "N", 64);
			}
			iVar9++;
		}
	}
}

void func_14()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 2:
				func_20();
				break;
			case 0:
				break;
			case 1:
				break;
			case 4:
				break;
			case 3:
				break;
		}
	}
}

int func_15()
{
	return Global_1051252.f_12;
}

bool func_16()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_4;
}

int func_17(int iParam0)
{
	if (iParam0 >= 0)
	{
		return Global_1056141[iParam0 /*471*/];
	}
	return -1;
}

int func_18(int iParam0)
{
	var uVar0;

	uVar0 = func_44(iParam0);
	return uVar0;
}

bool func_19()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1051252.f_16[iVar0] != 0)
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[iVar0]))
			{
				iVar1 = 1;
			}
			else
			{
				Global_1051252.f_16[iVar0] = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_20()
{
	Global_1051252.f_10 = 1;
}

void func_21()
{
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_37))
	{
		SCRIPTS::TERMINATE_THREAD(Global_1051252.f_37);
	}
}

var func_22()
{
	var uVar0;
	var uVar1;
	int iVar2;

	if (Global_1051252.f_7 <= 0)
	{
		uVar0 = -1;
		return uVar0;
	}
	uVar1 = func_44(0);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		Global_1051252[iVar2] = Global_1051252[iVar2 + 1];
		iVar2++;
	}
	func_45();
	return uVar1;
}

bool func_23()
{
	return (Global_1051252.f_10 || Global_1051252.f_11);
}

void func_24()
{
	Global_1051252.f_8 = 1;
}

void func_25()
{
}

void func_26()
{
	Global_1051252.f_40 = MISC::_GET_SYSTEM_TIME();
}

void func_27()
{
	Global_1051252.f_10 = 0;
}

void func_28()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1051252.f_16[iVar0] != 0)
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[iVar0]))
			{
				SCRIPTS::_0xD92FA81B64920E85(Global_1051252.f_16[iVar0], &bVar1, &bVar2);
				if (bVar1)
				{
					if (!SCRIPTS::_0x30BED53646C86D11(Global_1051252.f_16[iVar0]))
					{
						SCRIPTS::_0x7DE4643157AD646C(Global_1051252.f_16[iVar0]);
					}
				}
				else if (bVar2)
				{
				}
			}
			else
			{
				Global_1051252.f_16[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

bool func_29()
{
	return false;
}

int func_30()
{
	return (MISC::_GET_SYSTEM_TIME() - Global_1051252.f_40);
}

void func_31(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_46(iParam0, iParam1);
	}
	func_47(4);
	func_48();
	func_49(1);
}

void func_32(bool bParam0)
{
	if (!bParam0)
	{
		func_50(2);
	}
	else
	{
		func_51(2);
		PLAYER::_0x2C2D287748E8E9B7(false);
	}
}

void func_33(bool bParam0, bool bParam1)
{
	if (func_52(255) == 4)
	{
		return;
	}
	if (func_53(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_50(0);
	}
	else
	{
		if (bParam1)
		{
			func_54(0, 0, 0, 1);
		}
		func_51(0);
		func_55(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = 0f;
		Global_1102219.f_3849.f_5 = 1;
		Global_1102219.f_3849.f_16 = 0;
		Global_1102219.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_17 = { Global_1901947.f_50.f_1, Global_1901947.f_50.f_1, Global_1901947.f_50.f_1 };
		Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_56(&(Global_1102219.f_3888));
		Global_1102219.f_3888.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3888 = Global_1102219.f_3849;
		Global_1102219.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219.f_26.f_3341 = 0;
			Global_1102219.f_26.f_3342 = 0;
		}
	}
	func_57(Global_1102219.f_3849, 36);
	func_58(Global_1102219.f_3888, 36);
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1051252.f_16[iVar0] != 0)
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[iVar0]))
			{
			}
			Global_1051252.f_16[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_35()
{
	Global_1572887.f_8 = 0;
	func_59();
}

void func_36()
{
	Global_1051252.f_8 = 0;
}

int func_37()
{
	return Global_1572864.f_1;
}

void func_38(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_39(var uParam0)
{
	struct<184> Var0;

	Var0 = 6;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_9 = 1;
	Var0.f_16 = 20;
	Var0.f_45.f_2 = 32;
	Var0.f_80 = 10;
	*uParam0 = { Var0 };
}

char* func_40(int iParam0)
{
	char* sVar0;

	sVar0 = "invalid";
	switch (iParam0)
	{
		case 0:
			sVar0 = "MPTM_RUNNING";
			break;
		case 1:
			sVar0 = "MPTM_SHUTDOWN";
			break;
		case 2:
			sVar0 = "MPTM_DEAD";
			break;
		case 3:
			sVar0 = "MPTM_WAIT_TO_REBOOT";
			break;
		case 4:
			sVar0 = "MPTM_REBOOT";
			break;
		case 5:
			sVar0 = "MPTM_MP_BAIL";
			break;
		case 6:
			sVar0 = "MPTM_FADE_OUT";
			break;
		case 7:
			sVar0 = "MPTM_EXIT";
			break;
	}
	return sVar0;
}

void func_41(char* sParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::_GET_SYSTEM_TIME();
	iVar1 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_3 = MISC::_GET_SYSTEM_TIME();
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return SCRIPTS::GET_EVENT_EXISTS(1, iParam0);
}

void func_43()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -857756425:
				func_60();
				if (SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar1, 1))
				{
					switch (iVar1)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							break;
						case 3:
							Global_1051252.f_44 = 1;
							break;
						case 4:
							break;
						case 5:
							break;
						case 7:
							break;
					}
				}
				break;
			case -2119801478:
				func_61();
				if (SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar1, 1))
				{
					switch (iVar1)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						case 4:
							break;
						case 5:
							break;
						case 7:
							break;
					}
				}
				break;
		}
		iVar0++;
	}
}

var func_44(int iParam0)
{
	var uVar0;

	if (Global_1051252.f_7 <= 0)
	{
		uVar0 = -1;
		return uVar0;
	}
	return Global_1051252[iParam0];
}

void func_45()
{
	Global_1051252.f_7 = (Global_1051252.f_7 - 1);
	if (Global_1051252.f_7 < 0)
	{
		Global_1051252.f_7 = 0;
	}
}

void func_46(int iParam0, int iParam1)
{
	if (Global_1572864.f_17 != 0)
	{
		return;
	}
	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = iParam1;
}

void func_47(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_48()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887.f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_49(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

int func_50(int iParam0)
{
	if (func_62(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (func_63(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
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

bool func_53(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_54(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_64(iParam0);
	if (!func_65(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_66(128) && !func_67(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_68() == 4)
	{
		func_50(18);
	}
	func_69(1024);
}

void func_55(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_56(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_57(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_58(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_59()
{
	if (Global_1901947 == 0)
	{
		return;
	}
	Global_1901947 = 0;
}

void func_60()
{
	if (Global_1051252.f_7 >= 6)
	{
		return;
	}
	if (Global_1051252.f_7 > 0)
	{
		if (Global_1051252[(Global_1051252.f_7 - 1)] == 0)
		{
			return;
		}
	}
	Global_1051252[Global_1051252.f_7] = 0;
	func_70();
}

void func_61()
{
	if (Global_1051252.f_7 >= 6)
	{
		return;
	}
	if (Global_1051252.f_7 > 0)
	{
		if (Global_1051252[(Global_1051252.f_7 - 1)] == 1)
		{
			return;
		}
	}
	Global_1051252[Global_1051252.f_7] = 1;
	func_70();
}

bool func_62(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

bool func_63(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

void func_64(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

bool func_65(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

bool func_66(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_67(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

int func_68()
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

void func_69(int iParam0)
{
	if (func_71(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

void func_70()
{
	Global_1051252.f_7++;
	if (Global_1051252.f_7 > 6)
	{
		Global_1051252.f_7 = 6;
	}
}

bool func_71(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

